package com.sthjd.mylibrary;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.le.AdvertiseCallback;
import android.bluetooth.le.AdvertiseData;
import android.bluetooth.le.AdvertiseSettings;
import android.bluetooth.le.BluetoothLeAdvertiser;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.util.Base64;
import com.unity3d.player.UnityPlayer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class HjdUnityBluetoothLE {
    private static final int PERMISSIONS_REQUEST_CODE_ACCESS = 1;
    public static final String TAG = "HjdUnityBluetoothLE";
    public static HjdUnityBluetoothLE _instance;
    private ScanCallback api21ScanCallback;
    private BluetoothAdapter mBluetoothAdapter;
    private BluetoothLeAdvertiser mBluetoothAdvertiser;
    private BluetoothLeScanner mBluetoothLeScanner;
    private Context mContext = null;
    private List<AdvertiseCallback> advertisingList = new ArrayList();
    private final BroadcastReceiver ActionFoundReceiver = new BroadcastReceiver() { // from class: com.sthjd.mylibrary.HjdUnityBluetoothLE.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if ("android.bluetooth.adapter.action.STATE_CHANGED".equals(intent.getAction())) {
                int intExtra = intent.getIntExtra("android.bluetooth.adapter.extra.STATE", -1);
                if (intExtra == 10) {
                    HjdUnityBluetoothLE.UnitySendInitialized("BB~Bluetooth LE Is Close");
                } else {
                    if (intExtra != 12) {
                        return;
                    }
                    HjdUnityBluetoothLE.UnitySendInitialized("AA~Initialized");
                }
            }
        }
    };
    String msg = BuildConfig.FLAVOR;
    private int _scanMode = 1;
    private BluetoothAdapter.LeScanCallback mLeScanCallback = new BluetoothAdapter.LeScanCallback() { // from class: com.sthjd.mylibrary.HjdUnityBluetoothLE.4
        @Override // android.bluetooth.BluetoothAdapter.LeScanCallback
        public void onLeScan(BluetoothDevice bluetoothDevice, int i, byte[] bArr) {
            HjdUnityBluetoothLE.this.sendDiscoveredDevice(bArr);
        }
    };

    public static HjdUnityBluetoothLE getInstance() {
        if (_instance == null) {
            _instance = new HjdUnityBluetoothLE();
        }
        return _instance;
    }

    public static void UnitySendInitialized(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnInitReturn", str);
    }

    public static void UnitySendDeInitialized(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnDeInitReturn", str);
    }

    public static void UnitySendStartingAdvert(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnStartingAdvert", str);
    }

    public static void UnitySendStopAdvert(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnStopAdvert", str);
    }

    public static void UnitySendStartingScan(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnStartingScan", str);
    }

    public static void UnitySendStopScan(String str) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnStopScan", str);
    }

    public static void UnitySendScanData(byte[] bArr, int i) {
        UnityPlayer.UnitySendMessage("HjdBluetoothLEReceiver", "OnScanData", Base64.encodeToString(Arrays.copyOfRange(bArr, 0, i), 0));
    }

    public void onDestroy() {
        Context context = this.mContext;
        if (context != null) {
            context.unregisterReceiver(this.ActionFoundReceiver);
        }
    }

    public void androidBluetoothDeInitialize() {
        try {
            onDestroy();
            UnitySendDeInitialized("AA~DeInitialized");
        } catch (Exception e) {
            UnitySendDeInitialized("BB~" + e.getMessage());
        }
    }

    public void androidBluetoothInitialize() {
        try {
            Context applicationContext = UnityPlayer.currentActivity.getApplicationContext();
            this.mContext = applicationContext;
            if (applicationContext.checkSelfPermission("android.permission.ACCESS_COARSE_LOCATION") != 0 && this.mContext.checkSelfPermission("android.permission.ACCESS_FINE_LOCATION") != 0 && this.mContext.checkSelfPermission("android.permission.CAMERA") != 0) {
                UnityPlayer.currentActivity.requestPermissions(new String[]{"android.permission.ACCESS_COARSE_LOCATION", "android.permission.ACCESS_FINE_LOCATION", "android.permission.CAMERA"}, 1);
            }
            if (!this.mContext.getPackageManager().hasSystemFeature("android.hardware.bluetooth_le")) {
                UnitySendInitialized("BB~Bluetooth Low Energy Not Available");
                return;
            }
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.bluetooth.adapter.action.STATE_CHANGED");
            this.mContext.registerReceiver(this.ActionFoundReceiver, intentFilter);
            if (BluetoothAdapter.getDefaultAdapter() != null) {
                BluetoothManager bluetoothManager = (BluetoothManager) this.mContext.getSystemService("bluetooth");
                if (bluetoothManager != null) {
                    BluetoothAdapter adapter = bluetoothManager.getAdapter();
                    this.mBluetoothAdapter = adapter;
                    if (adapter != null) {
                        if (adapter.isEnabled()) {
                            if (Build.VERSION.SDK_INT >= 21) {
                                this.mBluetoothLeScanner = this.mBluetoothAdapter.getBluetoothLeScanner();
                            }
                            UnitySendInitialized("AA~Initialized");
                            return;
                        } else {
                            this.mBluetoothAdapter.enable();
                            Thread.sleep(1000L);
                            if (Build.VERSION.SDK_INT >= 21) {
                                this.mBluetoothLeScanner = this.mBluetoothAdapter.getBluetoothLeScanner();
                            }
                            UnitySendInitialized("AA~Initialized");
                            return;
                        }
                    }
                    onDestroy();
                    return;
                }
                onDestroy();
                return;
            }
            UnitySendInitialized("BB~Bluetooth LE Not Available");
        } catch (Exception e) {
            UnitySendInitialized("BB~" + e.getMessage());
        }
    }

    public void androidStartAdvertising(byte[] bArr) {
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                this.msg = BuildConfig.FLAVOR;
                for (byte b : bArr) {
                    this.msg += Integer.toHexString(b) + " ";
                }
                if (this.mBluetoothAdvertiser == null) {
                    this.mBluetoothAdvertiser = this.mBluetoothAdapter.getBluetoothLeAdvertiser();
                }
                AdvertiseSettings advertiseSettingsBuild = new AdvertiseSettings.Builder().setAdvertiseMode(2).setTxPowerLevel(3).setTimeout(0).setConnectable(false).build();
                AdvertiseData advertiseDataBuild = new AdvertiseData.Builder().setIncludeDeviceName(false).setIncludeTxPowerLevel(false).addManufacturerData(0, bArr).build();
                AdvertiseCallback advertiseCallback = new AdvertiseCallback() { // from class: com.sthjd.mylibrary.HjdUnityBluetoothLE.2
                    @Override // android.bluetooth.le.AdvertiseCallback
                    public void onStartSuccess(AdvertiseSettings advertiseSettings) {
                        super.onStartSuccess(advertiseSettings);
                        HjdUnityBluetoothLE.UnitySendStartingAdvert("AA~StartedAdvertising，data=" + HjdUnityBluetoothLE.this.msg);
                    }

                    @Override // android.bluetooth.le.AdvertiseCallback
                    public void onStartFailure(int i) {
                        super.onStartFailure(i);
                        HjdUnityBluetoothLE.UnitySendStartingAdvert("BB~Advertising onStartFailure: " + i);
                    }
                };
                this.advertisingList.add(advertiseCallback);
                this.mBluetoothAdvertiser.startAdvertising(advertiseSettingsBuild, advertiseDataBuild, advertiseCallback);
                return;
            }
            UnitySendStartingAdvert("BB~Failed to start advertising");
        } catch (Exception e) {
            UnitySendStartingAdvert("BB~" + e.getMessage());
        }
    }

    public void androidStopAdvertising() {
        try {
            if (Build.VERSION.SDK_INT >= 21 && this.mBluetoothAdvertiser != null && this.advertisingList.size() > 0) {
                if (this.mBluetoothAdvertiser != null && this.advertisingList.size() > 0) {
                    for (int i = 0; i < this.advertisingList.size(); i++) {
                        this.mBluetoothAdvertiser.stopAdvertising(this.advertisingList.get(i));
                    }
                }
                UnitySendStopAdvert("AA~StoppedAdvertising");
                return;
            }
            UnitySendStopAdvert("BB~Failed to stop advertising");
        } catch (Exception e) {
            UnitySendStopAdvert("BB~" + e.getMessage());
        }
    }

    public void androidBluetoothScanMode(int i) {
        if (i == 0) {
            this._scanMode = 0;
        } else if (i == 1) {
            this._scanMode = 1;
        } else {
            if (i != 2) {
                return;
            }
            this._scanMode = 2;
        }
    }

    private void api21Scan() {
        ScanSettings scanSettingsBuild = new ScanSettings.Builder().setMatchMode(1).setCallbackType(1).setScanMode(2).build();
        ScanCallback scanCallback = new ScanCallback() { // from class: com.sthjd.mylibrary.HjdUnityBluetoothLE.3
            @Override // android.bluetooth.le.ScanCallback
            public void onScanResult(int i, ScanResult scanResult) {
                HjdUnityBluetoothLE.this.sendDiscoveredDevice(scanResult.getScanRecord().getBytes());
            }

            @Override // android.bluetooth.le.ScanCallback
            public void onBatchScanResults(List<ScanResult> list) {
                Iterator<ScanResult> it = list.iterator();
                while (it.hasNext()) {
                    HjdUnityBluetoothLE.this.sendDiscoveredDevice(it.next().getScanRecord().getBytes());
                }
            }
        };
        this.api21ScanCallback = scanCallback;
        this.mBluetoothAdapter.getBluetoothLeScanner().startScan((List<ScanFilter>) null, scanSettingsBuild, scanCallback);
    }

    public void androidBluetoothStartingScan() {
        try {
            if (this.mBluetoothAdapter != null) {
                if (Build.VERSION.SDK_INT >= 21) {
                    api21Scan();
                } else {
                    this.mBluetoothAdapter.startLeScan(this.mLeScanCallback);
                }
                UnitySendStartingScan("AA~StartingScan");
                return;
            }
            UnitySendStartingScan("BB~Failed to start scan");
        } catch (Exception e) {
            UnitySendStartingScan("BB~" + e.getMessage());
        }
    }

    private void api21StopScan() {
        if (this.api21ScanCallback != null) {
            this.mBluetoothAdapter.getBluetoothLeScanner().stopScan(this.api21ScanCallback);
        }
    }

    public void androidBluetoothStopScan() {
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                api21StopScan();
            } else {
                this.mBluetoothAdapter.stopLeScan(this.mLeScanCallback);
            }
            UnitySendStopScan("AA~StopScan");
        } catch (Exception e) {
            UnitySendStopScan("BB~" + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendDiscoveredDevice(byte[] bArr) {
        if (bArr[0] == 22 && bArr[1] == -1) {
            UnitySendScanData(bArr, bArr.length);
        }
    }
}

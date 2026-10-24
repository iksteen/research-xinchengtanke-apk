.class public Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;
.super Ljava/lang/Object;
.source "HjdUnityBluetoothLE.java"


# static fields
.field private static final PERMISSIONS_REQUEST_CODE_ACCESS:I = 0x1

.field public static final TAG:Ljava/lang/String; = "HjdUnityBluetoothLE"

.field public static _instance:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;


# instance fields
.field private final ActionFoundReceiver:Landroid/content/BroadcastReceiver;

.field private _scanMode:I

.field private advertisingList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/bluetooth/le/AdvertiseCallback;",
            ">;"
        }
    .end annotation
.end field

.field private api21ScanCallback:Landroid/bluetooth/le/ScanCallback;

.field private mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

.field private mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

.field private mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

.field private mContext:Landroid/content/Context;

.field private mLeScanCallback:Landroid/bluetooth/BluetoothAdapter$LeScanCallback;

.field msg:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    .line 43
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    .line 77
    new-instance v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$1;

    invoke-direct {v0, p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$1;-><init>(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;)V

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->ActionFoundReceiver:Landroid/content/BroadcastReceiver;

    const-string v0, ""

    .line 175
    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->msg:Ljava/lang/String;

    const/4 v0, 0x1

    .line 242
    iput v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_scanMode:I

    .line 312
    new-instance v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$4;

    invoke-direct {v0, p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$4;-><init>(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;)V

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mLeScanCallback:Landroid/bluetooth/BluetoothAdapter$LeScanCallback;

    return-void
.end method

.method public static UnitySendDeInitialized(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnDeInitReturn"

    .line 58
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendInitialized(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnInitReturn"

    .line 55
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendScanData([BI)V
    .locals 1

    const/4 v0, 0x0

    .line 73
    invoke-static {p0, v0, p1}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object p0

    invoke-static {p0, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0

    const-string p1, "HjdBluetoothLEReceiver"

    const-string v0, "OnScanData"

    .line 74
    invoke-static {p1, v0, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendStartingAdvert(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnStartingAdvert"

    .line 61
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendStartingScan(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnStartingScan"

    .line 67
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendStopAdvert(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnStopAdvert"

    .line 64
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static UnitySendStopScan(Ljava/lang/String;)V
    .locals 2

    const-string v0, "HjdBluetoothLEReceiver"

    const-string v1, "OnStopScan"

    .line 70
    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$000(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;[B)V
    .locals 0

    .line 29
    invoke-direct {p0, p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->sendDiscoveredDevice([B)V

    return-void
.end method

.method private api21Scan()V
    .locals 4

    .line 259
    new-instance v0, Landroid/bluetooth/le/ScanSettings$Builder;

    invoke-direct {v0}, Landroid/bluetooth/le/ScanSettings$Builder;-><init>()V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/bluetooth/le/ScanSettings$Builder;->setMatchMode(I)Landroid/bluetooth/le/ScanSettings$Builder;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/bluetooth/le/ScanSettings$Builder;->setCallbackType(I)Landroid/bluetooth/le/ScanSettings$Builder;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/bluetooth/le/ScanSettings$Builder;->setScanMode(I)Landroid/bluetooth/le/ScanSettings$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/bluetooth/le/ScanSettings$Builder;->build()Landroid/bluetooth/le/ScanSettings;

    move-result-object v0

    .line 260
    new-instance v1, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;

    invoke-direct {v1, p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;-><init>(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;)V

    .line 270
    iput-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21ScanCallback:Landroid/bluetooth/le/ScanCallback;

    .line 271
    iget-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v2}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v0, v1}, Landroid/bluetooth/le/BluetoothLeScanner;->startScan(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V

    return-void
.end method

.method private api21StopScan()V
    .locals 2

    .line 293
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21ScanCallback:Landroid/bluetooth/le/ScanCallback;

    if-eqz v0, :cond_0

    .line 294
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v0

    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21ScanCallback:Landroid/bluetooth/le/ScanCallback;

    invoke-virtual {v0, v1}, Landroid/bluetooth/le/BluetoothLeScanner;->stopScan(Landroid/bluetooth/le/ScanCallback;)V

    :cond_0
    return-void
.end method

.method public static getInstance()Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;
    .locals 1

    .line 49
    sget-object v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_instance:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    if-nez v0, :cond_0

    .line 50
    new-instance v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-direct {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;-><init>()V

    sput-object v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_instance:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    .line 51
    :cond_0
    sget-object v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_instance:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    return-object v0
.end method

.method private sendDiscoveredDevice([B)V
    .locals 2

    const/4 v0, 0x0

    .line 320
    aget-byte v0, p1, v0

    const/16 v1, 0x16

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    aget-byte v0, p1, v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 322
    array-length v0, p1

    invoke-static {p1, v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendScanData([BI)V

    :cond_0
    return-void
.end method


# virtual methods
.method public androidBluetoothDeInitialize()V
    .locals 3

    .line 113
    :try_start_0
    invoke-virtual {p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->onDestroy()V

    const-string v0, "AA~DeInitialized"

    .line 114
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendDeInitialized(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 116
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BB~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendDeInitialized(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public androidBluetoothInitialize()V
    .locals 5

    const-string v0, "android.permission.CAMERA"

    const-string v1, "android.permission.ACCESS_FINE_LOCATION"

    const-string v2, "android.permission.ACCESS_COARSE_LOCATION"

    .line 123
    :try_start_0
    sget-object v3, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    invoke-virtual {v3}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    iput-object v3, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    .line 124
    invoke-virtual {v3, v2}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    .line 125
    invoke-virtual {v3, v1}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    .line 126
    invoke-virtual {v3, v0}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v3

    if-eqz v3, :cond_0

    .line 127
    sget-object v3, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    filled-new-array {v2, v1, v0}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v3, v0, v1}, Landroid/app/Activity;->requestPermissions([Ljava/lang/String;I)V

    .line 131
    :cond_0
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v1, "android.hardware.bluetooth_le"

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "BB~Bluetooth Low Energy Not Available"

    .line 132
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 134
    :cond_1
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.bluetooth.adapter.action.STATE_CHANGED"

    .line 135
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 140
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->ActionFoundReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 141
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 142
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    const-string v1, "bluetooth"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/bluetooth/BluetoothManager;

    if-eqz v0, :cond_6

    .line 144
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothManager;->getAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    if-eqz v0, :cond_5

    .line 149
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->isEnabled()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "AA~Initialized"

    const/16 v2, 0x15

    if-eqz v0, :cond_3

    .line 150
    :try_start_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v2, :cond_2

    .line 151
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v0

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    .line 152
    :cond_2
    invoke-static {v1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    goto :goto_0

    .line 154
    :cond_3
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->enable()Z

    const-wide/16 v3, 0x3e8

    .line 155
    invoke-static {v3, v4}, Ljava/lang/Thread;->sleep(J)V

    .line 156
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v2, :cond_4

    .line 157
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v0

    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    .line 158
    :cond_4
    invoke-static {v1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    goto :goto_0

    .line 161
    :cond_5
    invoke-virtual {p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->onDestroy()V

    goto :goto_0

    .line 164
    :cond_6
    invoke-virtual {p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->onDestroy()V

    goto :goto_0

    :cond_7
    const-string v0, "BB~Bluetooth LE Not Available"

    .line 168
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 172
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BB~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public androidBluetoothScanMode(I)V
    .locals 1

    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 253
    :cond_0
    iput v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_scanMode:I

    goto :goto_0

    .line 250
    :cond_1
    iput v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_scanMode:I

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    .line 247
    iput p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->_scanMode:I

    :goto_0
    return-void
.end method

.method public androidBluetoothStartingScan()V
    .locals 3

    .line 277
    :try_start_0
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    if-eqz v0, :cond_1

    .line 278
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 279
    invoke-direct {p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21Scan()V

    goto :goto_0

    .line 281
    :cond_0
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mLeScanCallback:Landroid/bluetooth/BluetoothAdapter$LeScanCallback;

    invoke-virtual {v0, v1}, Landroid/bluetooth/BluetoothAdapter;->startLeScan(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z

    :goto_0
    const-string v0, "AA~StartingScan"

    .line 283
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingScan(Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string v0, "BB~Failed to start scan"

    .line 285
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingScan(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 288
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BB~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingScan(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public androidBluetoothStopScan()V
    .locals 3

    .line 300
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 301
    invoke-direct {p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21StopScan()V

    goto :goto_0

    .line 303
    :cond_0
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mLeScanCallback:Landroid/bluetooth/BluetoothAdapter$LeScanCallback;

    invoke-virtual {v0, v1}, Landroid/bluetooth/BluetoothAdapter;->stopLeScan(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)V

    :goto_0
    const-string v0, "AA~StopScan"

    .line 305
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStopScan(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 307
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BB~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStopScan(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public androidStartAdvertising([B)V
    .locals 4

    .line 179
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_2

    const-string v0, ""

    .line 180
    iput-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->msg:Ljava/lang/String;

    const/4 v0, 0x0

    move v1, v0

    .line 181
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 183
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->msg:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-byte v3, p1, v1

    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->msg:Ljava/lang/String;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 185
    :cond_0
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    if-nez v1, :cond_1

    .line 186
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v1}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeAdvertiser()Landroid/bluetooth/le/BluetoothLeAdvertiser;

    move-result-object v1

    iput-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    .line 187
    :cond_1
    new-instance v1, Landroid/bluetooth/le/AdvertiseSettings$Builder;

    invoke-direct {v1}, Landroid/bluetooth/le/AdvertiseSettings$Builder;-><init>()V

    const/4 v2, 0x2

    .line 188
    invoke-virtual {v1, v2}, Landroid/bluetooth/le/AdvertiseSettings$Builder;->setAdvertiseMode(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;

    move-result-object v1

    const/4 v2, 0x3

    .line 189
    invoke-virtual {v1, v2}, Landroid/bluetooth/le/AdvertiseSettings$Builder;->setTxPowerLevel(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;

    move-result-object v1

    .line 190
    invoke-virtual {v1, v0}, Landroid/bluetooth/le/AdvertiseSettings$Builder;->setTimeout(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;

    move-result-object v1

    .line 191
    invoke-virtual {v1, v0}, Landroid/bluetooth/le/AdvertiseSettings$Builder;->setConnectable(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;

    move-result-object v1

    invoke-virtual {v1}, Landroid/bluetooth/le/AdvertiseSettings$Builder;->build()Landroid/bluetooth/le/AdvertiseSettings;

    move-result-object v1

    .line 192
    new-instance v2, Landroid/bluetooth/le/AdvertiseData$Builder;

    invoke-direct {v2}, Landroid/bluetooth/le/AdvertiseData$Builder;-><init>()V

    .line 193
    invoke-virtual {v2, v0}, Landroid/bluetooth/le/AdvertiseData$Builder;->setIncludeDeviceName(Z)Landroid/bluetooth/le/AdvertiseData$Builder;

    move-result-object v2

    .line 194
    invoke-virtual {v2, v0}, Landroid/bluetooth/le/AdvertiseData$Builder;->setIncludeTxPowerLevel(Z)Landroid/bluetooth/le/AdvertiseData$Builder;

    move-result-object v2

    .line 195
    invoke-virtual {v2, v0, p1}, Landroid/bluetooth/le/AdvertiseData$Builder;->addManufacturerData(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;

    move-result-object p1

    .line 196
    invoke-virtual {p1}, Landroid/bluetooth/le/AdvertiseData$Builder;->build()Landroid/bluetooth/le/AdvertiseData;

    move-result-object p1

    .line 198
    new-instance v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$2;

    invoke-direct {v0, p0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$2;-><init>(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;)V

    .line 209
    iget-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 211
    iget-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    invoke-virtual {v2, v1, p1, v0}, Landroid/bluetooth/le/BluetoothLeAdvertiser;->startAdvertising(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V

    goto :goto_1

    :cond_2
    const-string p1, "BB~Failed to start advertising"

    .line 213
    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingAdvert(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 216
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BB~"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingAdvert(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public androidStopAdvertising()V
    .locals 3

    .line 223
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 224
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    if-eqz v0, :cond_0

    .line 225
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 226
    :goto_0
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 227
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mBluetoothAdvertiser:Landroid/bluetooth/le/BluetoothLeAdvertiser;

    iget-object v2, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->advertisingList:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/bluetooth/le/AdvertiseCallback;

    invoke-virtual {v1, v2}, Landroid/bluetooth/le/BluetoothLeAdvertiser;->stopAdvertising(Landroid/bluetooth/le/AdvertiseCallback;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    const-string v0, "AA~StoppedAdvertising"

    .line 233
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStopAdvert(Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string v0, "BB~Failed to stop advertising"

    .line 235
    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStopAdvert(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 238
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BB~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStopAdvert(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 107
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->ActionFoundReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method

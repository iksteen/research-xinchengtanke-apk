package com.unity3d.player;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.media.AudioManager;

/* JADX INFO: loaded from: classes.dex */
public class HFPStatus {

    /* JADX INFO: renamed from: a */
    private Context f16a;

    /* JADX INFO: renamed from: e */
    private AudioManager f20e;

    /* JADX INFO: renamed from: b */
    private BroadcastReceiver f17b = null;

    /* JADX INFO: renamed from: c */
    private Intent f18c = null;

    /* JADX INFO: renamed from: d */
    private boolean f19d = false;

    /* JADX INFO: renamed from: f */
    private boolean f21f = false;

    /* JADX INFO: renamed from: g */
    private int f22g = EnumC0011a.f24a;

    /* JADX WARN: $VALUES field not found */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX INFO: renamed from: com.unity3d.player.HFPStatus$a */
    static final class EnumC0011a {

        /* JADX INFO: renamed from: a */
        public static final int f24a = 1;

        /* JADX INFO: renamed from: b */
        public static final int f25b = 2;

        /* JADX INFO: renamed from: c */
        private static final /* synthetic */ int[] f26c = {1, 2};
    }

    public HFPStatus(Context context) {
        this.f20e = null;
        this.f16a = context;
        this.f20e = (AudioManager) context.getSystemService("audio");
        initHFPStatusJni();
    }

    /* JADX INFO: renamed from: b */
    private void m9b() {
        BroadcastReceiver broadcastReceiver = this.f17b;
        if (broadcastReceiver != null) {
            this.f16a.unregisterReceiver(broadcastReceiver);
            this.f17b = null;
            this.f18c = null;
        }
        this.f22g = EnumC0011a.f24a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: c */
    public void m12c() {
        if (this.f21f) {
            this.f21f = false;
            this.f20e.stopBluetoothSco();
        }
    }

    private final native void deinitHFPStatusJni();

    private final native void initHFPStatusJni();

    /* JADX INFO: renamed from: a */
    public final void m13a() {
        clearHFPStat();
        deinitHFPStatusJni();
    }

    protected void clearHFPStat() {
        m9b();
        m12c();
    }

    protected boolean getHFPStat() {
        return this.f22g == EnumC0011a.f25b;
    }

    protected void requestHFPStat() {
        clearHFPStat();
        BroadcastReceiver broadcastReceiver = new BroadcastReceiver() { // from class: com.unity3d.player.HFPStatus.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                if (intent.getIntExtra("android.media.extra.SCO_AUDIO_STATE", -1) != 1) {
                    return;
                }
                HFPStatus.this.f22g = EnumC0011a.f25b;
                HFPStatus.this.m12c();
                if (HFPStatus.this.f19d) {
                    HFPStatus.this.f20e.setMode(3);
                }
            }
        };
        this.f17b = broadcastReceiver;
        this.f18c = this.f16a.registerReceiver(broadcastReceiver, new IntentFilter("android.media.ACTION_SCO_AUDIO_STATE_UPDATED"));
        try {
            this.f21f = true;
            this.f20e.startBluetoothSco();
        } catch (NullPointerException unused) {
            C0053f.Log(5, "startBluetoothSco() failed. no bluetooth device connected.");
        }
    }

    protected void setHFPRecordingStat(boolean z) {
        this.f19d = z;
        if (z) {
            return;
        }
        this.f20e.setMode(0);
    }
}

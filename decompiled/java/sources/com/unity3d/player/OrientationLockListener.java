package com.unity3d.player;

import android.content.Context;
import android.provider.Settings;

/* JADX INFO: loaded from: classes.dex */
public class OrientationLockListener implements C0058k.a {

    /* JADX INFO: renamed from: a */
    private C0058k f34a;

    /* JADX INFO: renamed from: b */
    private Context f35b;

    OrientationLockListener(Context context) {
        this.f35b = context;
        this.f34a = new C0058k(context);
        nativeUpdateOrientationLockState(Settings.System.getInt(this.f35b.getContentResolver(), "accelerometer_rotation", 0));
        this.f34a.m136a(this, "accelerometer_rotation");
    }

    /* JADX INFO: renamed from: a */
    public final void m17a() {
        this.f34a.m135a();
        this.f34a = null;
    }

    @Override // com.unity3d.player.C0058k.a
    /* JADX INFO: renamed from: b */
    public final void mo18b() {
        nativeUpdateOrientationLockState(Settings.System.getInt(this.f35b.getContentResolver(), "accelerometer_rotation", 0));
    }

    public final native void nativeUpdateOrientationLockState(int i);
}

package com.unity3d.player;

import android.util.Log;

/* JADX INFO: renamed from: com.unity3d.player.f */
/* JADX INFO: loaded from: classes.dex */
final class C0053f {

    /* JADX INFO: renamed from: a */
    protected static boolean f215a = false;

    protected static void Log(int i, String str) {
        if (f215a) {
            return;
        }
        if (i == 6) {
            Log.e("Unity", str);
        }
        if (i == 5) {
            Log.w("Unity", str);
        }
    }
}

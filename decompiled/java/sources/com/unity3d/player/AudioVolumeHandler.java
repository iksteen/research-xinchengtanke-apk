package com.unity3d.player;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public class AudioVolumeHandler implements C0049b.b {

    /* JADX INFO: renamed from: a */
    private C0049b f12a;

    AudioVolumeHandler(Context context) {
        C0049b c0049b = new C0049b(context);
        this.f12a = c0049b;
        c0049b.m68a(this);
    }

    /* JADX INFO: renamed from: a */
    public final void m2a() {
        this.f12a.m67a();
        this.f12a = null;
    }

    @Override // com.unity3d.player.C0049b.b
    public final native void onAudioVolumeChanged(int i);
}

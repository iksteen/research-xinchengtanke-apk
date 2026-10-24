package com.unity3d.player;

import android.content.Context;
import android.database.ContentObserver;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Handler;
import android.provider.Settings;

/* JADX INFO: renamed from: com.unity3d.player.b */
/* JADX INFO: loaded from: classes.dex */
final class C0049b {

    /* JADX INFO: renamed from: a */
    private final Context f168a;

    /* JADX INFO: renamed from: b */
    private final AudioManager f169b;

    /* JADX INFO: renamed from: c */
    private a f170c;

    /* JADX INFO: renamed from: com.unity3d.player.b$a */
    private class a extends ContentObserver {

        /* JADX INFO: renamed from: b */
        private final b f172b;

        /* JADX INFO: renamed from: c */
        private final AudioManager f173c;

        /* JADX INFO: renamed from: d */
        private final int f174d;

        /* JADX INFO: renamed from: e */
        private int f175e;

        public a(Handler handler, AudioManager audioManager, int i, b bVar) {
            super(handler);
            this.f173c = audioManager;
            this.f174d = 3;
            this.f172b = bVar;
            this.f175e = audioManager.getStreamVolume(3);
        }

        @Override // android.database.ContentObserver
        public final boolean deliverSelfNotifications() {
            return super.deliverSelfNotifications();
        }

        @Override // android.database.ContentObserver
        public final void onChange(boolean z, Uri uri) {
            int streamVolume;
            AudioManager audioManager = this.f173c;
            if (audioManager == null || this.f172b == null || (streamVolume = audioManager.getStreamVolume(this.f174d)) == this.f175e) {
                return;
            }
            this.f175e = streamVolume;
            this.f172b.onAudioVolumeChanged(streamVolume);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.b$b */
    public interface b {
        void onAudioVolumeChanged(int i);
    }

    public C0049b(Context context) {
        this.f168a = context;
        this.f169b = (AudioManager) context.getSystemService("audio");
    }

    /* JADX INFO: renamed from: a */
    public final void m67a() {
        if (this.f170c != null) {
            this.f168a.getContentResolver().unregisterContentObserver(this.f170c);
            this.f170c = null;
        }
    }

    /* JADX INFO: renamed from: a */
    public final void m68a(b bVar) {
        this.f170c = new a(new Handler(), this.f169b, 3, bVar);
        this.f168a.getContentResolver().registerContentObserver(Settings.System.CONTENT_URI, true, this.f170c);
    }
}

package com.unity3d.player;

import android.content.Context;
import android.database.ContentObserver;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;

/* JADX INFO: renamed from: com.unity3d.player.k */
/* JADX INFO: loaded from: classes.dex */
final class C0058k {

    /* JADX INFO: renamed from: a */
    private Context f256a;

    /* JADX INFO: renamed from: b */
    private b f257b;

    /* JADX INFO: renamed from: com.unity3d.player.k$a */
    public interface a {
        /* JADX INFO: renamed from: b */
        void mo18b();
    }

    /* JADX INFO: renamed from: com.unity3d.player.k$b */
    private class b extends ContentObserver {

        /* JADX INFO: renamed from: b */
        private a f259b;

        public b(Handler handler, a aVar) {
            super(handler);
            this.f259b = aVar;
        }

        @Override // android.database.ContentObserver
        public final boolean deliverSelfNotifications() {
            return super.deliverSelfNotifications();
        }

        @Override // android.database.ContentObserver
        public final void onChange(boolean z) {
            a aVar = this.f259b;
            if (aVar != null) {
                aVar.mo18b();
            }
        }
    }

    public C0058k(Context context) {
        this.f256a = context;
    }

    /* JADX INFO: renamed from: a */
    public final void m135a() {
        if (this.f257b != null) {
            this.f256a.getContentResolver().unregisterContentObserver(this.f257b);
            this.f257b = null;
        }
    }

    /* JADX INFO: renamed from: a */
    public final void m136a(a aVar, String str) {
        this.f257b = new b(new Handler(Looper.getMainLooper()), aVar);
        this.f256a.getContentResolver().registerContentObserver(Settings.System.getUriFor(str), true, this.f257b);
    }
}

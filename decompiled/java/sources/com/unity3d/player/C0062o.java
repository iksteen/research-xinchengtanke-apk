package com.unity3d.player;

import android.app.Activity;
import android.content.Context;
import java.util.concurrent.Semaphore;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: renamed from: com.unity3d.player.o */
/* JADX INFO: loaded from: classes.dex */
final class C0062o {

    /* JADX INFO: renamed from: a */
    private UnityPlayer f295a;

    /* JADX INFO: renamed from: c */
    private a f297c;

    /* JADX INFO: renamed from: b */
    private Context f296b = null;

    /* JADX INFO: renamed from: d */
    private final Semaphore f298d = new Semaphore(0);

    /* JADX INFO: renamed from: e */
    private final Lock f299e = new ReentrantLock();

    /* JADX INFO: renamed from: f */
    private SurfaceHolderCallbackC0061n f300f = null;

    /* JADX INFO: renamed from: g */
    private int f301g = 2;

    /* JADX INFO: renamed from: h */
    private boolean f302h = false;

    /* JADX INFO: renamed from: i */
    private boolean f303i = false;

    /* JADX INFO: renamed from: com.unity3d.player.o$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a */
        final /* synthetic */ String f304a;

        /* JADX INFO: renamed from: b */
        final /* synthetic */ int f305b;

        /* JADX INFO: renamed from: c */
        final /* synthetic */ int f306c;

        /* JADX INFO: renamed from: d */
        final /* synthetic */ int f307d;

        /* JADX INFO: renamed from: e */
        final /* synthetic */ boolean f308e;

        /* JADX INFO: renamed from: f */
        final /* synthetic */ long f309f;

        /* JADX INFO: renamed from: g */
        final /* synthetic */ long f310g;

        AnonymousClass1(String str, int i, int i2, int i3, boolean z, long j, long j2) {
            this.f304a = str;
            this.f305b = i;
            this.f306c = i2;
            this.f307d = i3;
            this.f308e = z;
            this.f309f = j;
            this.f310g = j2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (C0062o.this.f300f != null) {
                C0053f.Log(5, "Video already playing");
                C0062o.this.f301g = 2;
                C0062o.this.f298d.release();
            } else {
                C0062o.this.f300f = new SurfaceHolderCallbackC0061n(C0062o.this.f296b, this.f304a, this.f305b, this.f306c, this.f307d, this.f308e, this.f309f, this.f310g, new SurfaceHolderCallbackC0061n.a() { // from class: com.unity3d.player.o.1.1
                    @Override // com.unity3d.player.SurfaceHolderCallbackC0061n.a
                    /* JADX INFO: renamed from: a */
                    public final void mo156a(int i) {
                        C0062o.this.f299e.lock();
                        C0062o.this.f301g = i;
                        if (i == 3 && C0062o.this.f303i) {
                            C0062o.this.runOnUiThread(new Runnable() { // from class: com.unity3d.player.o.1.1.1
                                @Override // java.lang.Runnable
                                public final void run() {
                                    C0062o.this.m164d();
                                    C0062o.this.f295a.resume();
                                }
                            });
                        }
                        if (i != 0) {
                            C0062o.this.f298d.release();
                        }
                        C0062o.this.f299e.unlock();
                    }
                });
                if (C0062o.this.f300f != null) {
                    C0062o.this.f295a.addView(C0062o.this.f300f);
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.o$a */
    public interface a {
        /* JADX INFO: renamed from: a */
        void mo34a();
    }

    C0062o(UnityPlayer unityPlayer) {
        this.f295a = null;
        this.f295a = unityPlayer;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: d */
    public void m164d() {
        SurfaceHolderCallbackC0061n surfaceHolderCallbackC0061n = this.f300f;
        if (surfaceHolderCallbackC0061n != null) {
            this.f295a.removeViewFromPlayer(surfaceHolderCallbackC0061n);
            this.f303i = false;
            this.f300f.destroyPlayer();
            this.f300f = null;
            a aVar = this.f297c;
            if (aVar != null) {
                aVar.mo34a();
            }
        }
    }

    /* JADX INFO: renamed from: h */
    static /* synthetic */ boolean m168h(C0062o c0062o) {
        c0062o.f303i = true;
        return true;
    }

    /* JADX INFO: renamed from: a */
    public final void m169a() {
        this.f299e.lock();
        SurfaceHolderCallbackC0061n surfaceHolderCallbackC0061n = this.f300f;
        if (surfaceHolderCallbackC0061n != null) {
            if (this.f301g == 0) {
                surfaceHolderCallbackC0061n.CancelOnPrepare();
            } else if (this.f303i) {
                boolean zM155a = surfaceHolderCallbackC0061n.m155a();
                this.f302h = zM155a;
                if (!zM155a) {
                    this.f300f.pause();
                }
            }
        }
        this.f299e.unlock();
    }

    /* JADX INFO: renamed from: a */
    public final boolean m170a(Context context, String str, int i, int i2, int i3, boolean z, long j, long j2, a aVar) {
        this.f299e.lock();
        this.f297c = aVar;
        this.f296b = context;
        this.f298d.drainPermits();
        this.f301g = 2;
        runOnUiThread(new AnonymousClass1(str, i, i2, i3, z, j, j2));
        boolean z2 = false;
        try {
            this.f299e.unlock();
            this.f298d.acquire();
            this.f299e.lock();
            if (this.f301g != 2) {
                z2 = true;
            }
        } catch (InterruptedException unused) {
        }
        runOnUiThread(new Runnable() { // from class: com.unity3d.player.o.2
            @Override // java.lang.Runnable
            public final void run() {
                C0062o.this.f295a.pause();
            }
        });
        runOnUiThread((!z2 || this.f301g == 3) ? new Runnable() { // from class: com.unity3d.player.o.4
            @Override // java.lang.Runnable
            public final void run() {
                C0062o.this.m164d();
                C0062o.this.f295a.resume();
            }
        } : new Runnable() { // from class: com.unity3d.player.o.3
            @Override // java.lang.Runnable
            public final void run() {
                if (C0062o.this.f300f != null) {
                    C0062o.this.f295a.addViewToPlayer(C0062o.this.f300f, true);
                    C0062o.m168h(C0062o.this);
                    C0062o.this.f300f.requestFocus();
                }
            }
        });
        this.f299e.unlock();
        return z2;
    }

    /* JADX INFO: renamed from: b */
    public final void m171b() {
        this.f299e.lock();
        SurfaceHolderCallbackC0061n surfaceHolderCallbackC0061n = this.f300f;
        if (surfaceHolderCallbackC0061n != null && this.f303i && !this.f302h) {
            surfaceHolderCallbackC0061n.start();
        }
        this.f299e.unlock();
    }

    /* JADX INFO: renamed from: c */
    public final void m172c() {
        this.f299e.lock();
        SurfaceHolderCallbackC0061n surfaceHolderCallbackC0061n = this.f300f;
        if (surfaceHolderCallbackC0061n != null) {
            surfaceHolderCallbackC0061n.updateVideoLayout();
        }
        this.f299e.unlock();
    }

    protected final void runOnUiThread(Runnable runnable) {
        Context context = this.f296b;
        if (context instanceof Activity) {
            ((Activity) context).runOnUiThread(runnable);
        } else {
            C0053f.Log(5, "Not running from an Activity; Ignoring execution request...");
        }
    }
}

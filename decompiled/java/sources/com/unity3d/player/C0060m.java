package com.unity3d.player;

/* JADX INFO: renamed from: com.unity3d.player.m */
/* JADX INFO: loaded from: classes.dex */
final class C0060m {

    /* JADX INFO: renamed from: a */
    private static boolean f261a = false;

    /* JADX INFO: renamed from: b */
    private boolean f262b = false;

    /* JADX INFO: renamed from: c */
    private boolean f263c = false;

    /* JADX INFO: renamed from: d */
    private boolean f264d = true;

    /* JADX INFO: renamed from: e */
    private boolean f265e = false;

    C0060m() {
    }

    /* JADX INFO: renamed from: a */
    static void m138a() {
        f261a = true;
    }

    /* JADX INFO: renamed from: b */
    static void m139b() {
        f261a = false;
    }

    /* JADX INFO: renamed from: c */
    static boolean m140c() {
        return f261a;
    }

    /* JADX INFO: renamed from: a */
    final void m141a(boolean z) {
        this.f262b = z;
    }

    /* JADX INFO: renamed from: b */
    final void m142b(boolean z) {
        this.f264d = z;
    }

    /* JADX INFO: renamed from: c */
    final void m143c(boolean z) {
        this.f265e = z;
    }

    /* JADX INFO: renamed from: d */
    final void m144d(boolean z) {
        this.f263c = z;
    }

    /* JADX INFO: renamed from: d */
    final boolean m145d() {
        return this.f264d;
    }

    /* JADX INFO: renamed from: e */
    final boolean m146e() {
        return this.f265e;
    }

    /* JADX INFO: renamed from: e */
    final boolean m147e(boolean z) {
        if (f261a) {
            return ((!z && !this.f262b) || this.f264d || this.f263c) ? false : true;
        }
        return false;
    }

    /* JADX INFO: renamed from: f */
    final boolean m148f() {
        return this.f263c;
    }

    public final String toString() {
        return super.toString();
    }
}

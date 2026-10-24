package com.unity3d.player;

import android.content.Context;
import android.graphics.Rect;
import android.hardware.Camera;

/* JADX INFO: loaded from: classes.dex */
public class Camera2Wrapper implements InterfaceC0052e {

    /* JADX INFO: renamed from: a */
    private Context f13a;

    /* JADX INFO: renamed from: b */
    private C0050c f14b = null;

    /* JADX INFO: renamed from: c */
    private final int f15c = 100;

    public Camera2Wrapper(Context context) {
        this.f13a = context;
        initCamera2Jni();
    }

    /* JADX INFO: renamed from: a */
    private static int m3a(float f) {
        return (int) Math.min(Math.max((f * 2000.0f) - 1000.0f, -900.0f), 900.0f);
    }

    private final native void deinitCamera2Jni();

    private final native void initCamera2Jni();

    private final native void nativeFrameReady(Object obj, Object obj2, Object obj3, int i, int i2, int i3);

    private final native void nativeSurfaceTextureReady(Object obj);

    /* JADX INFO: renamed from: a */
    public final void m4a() {
        deinitCamera2Jni();
        closeCamera2();
    }

    @Override // com.unity3d.player.InterfaceC0052e
    /* JADX INFO: renamed from: a */
    public final void mo5a(Object obj) {
        nativeSurfaceTextureReady(obj);
    }

    @Override // com.unity3d.player.InterfaceC0052e
    /* JADX INFO: renamed from: a */
    public final void mo6a(Object obj, Object obj2, Object obj3, int i, int i2, int i3) {
        nativeFrameReady(obj, obj2, obj3, i, i2, i3);
    }

    protected void closeCamera2() {
        C0050c c0050c = this.f14b;
        if (c0050c != null) {
            c0050c.m107b();
        }
        this.f14b = null;
    }

    protected int getCamera2Count() {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m69a(this.f13a);
        }
        return 0;
    }

    protected int getCamera2FocalLengthEquivalent(int i) {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m90d(this.f13a, i);
        }
        return 0;
    }

    protected int[] getCamera2Resolutions(int i) {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m93e(this.f13a, i);
        }
        return null;
    }

    protected int getCamera2SensorOrientation(int i) {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m70a(this.f13a, i);
        }
        return 0;
    }

    protected Object getCameraFocusArea(float f, float f2) {
        int iM3a = m3a(f);
        int iM3a2 = m3a(1.0f - f2);
        return new Camera.Area(new Rect(iM3a - 100, iM3a2 - 100, iM3a + 100, iM3a2 + 100), 1000);
    }

    protected Rect getFrameSizeCamera2() {
        C0050c c0050c = this.f14b;
        return c0050c != null ? c0050c.m104a() : new Rect();
    }

    protected boolean initializeCamera2(int i, int i2, int i3, int i4, int i5) {
        if (!PlatformSupport.LOLLIPOP_SUPPORT || this.f14b != null || UnityPlayer.currentActivity == null) {
            return false;
        }
        C0050c c0050c = new C0050c(this);
        this.f14b = c0050c;
        return c0050c.m106a(this.f13a, i, i2, i3, i4, i5);
    }

    protected boolean isCamera2AutoFocusPointSupported(int i) {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m88c(this.f13a, i);
        }
        return false;
    }

    protected boolean isCamera2FrontFacing(int i) {
        if (PlatformSupport.LOLLIPOP_SUPPORT) {
            return C0050c.m86b(this.f13a, i);
        }
        return false;
    }

    protected void pauseCamera2() {
        C0050c c0050c = this.f14b;
        if (c0050c != null) {
            c0050c.m109d();
        }
    }

    protected boolean setAutoFocusPoint(float f, float f2) {
        C0050c c0050c;
        if (!PlatformSupport.LOLLIPOP_SUPPORT || (c0050c = this.f14b) == null) {
            return false;
        }
        return c0050c.m105a(f, f2);
    }

    protected void startCamera2() {
        C0050c c0050c = this.f14b;
        if (c0050c != null) {
            c0050c.m108c();
        }
    }

    protected void stopCamera2() {
        C0050c c0050c = this.f14b;
        if (c0050c != null) {
            c0050c.m110e();
        }
    }
}

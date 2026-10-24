package com.unity3d.player;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.view.PixelCopy;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import java.lang.ref.WeakReference;

/* JADX INFO: renamed from: com.unity3d.player.h */
/* JADX INFO: loaded from: classes.dex */
final class C0055h implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: b */
    Activity f227b;

    /* JADX INFO: renamed from: a */
    WeakReference f226a = new WeakReference(null);

    /* JADX INFO: renamed from: c */
    View f228c = null;

    /* JADX INFO: renamed from: d */
    a f229d = null;

    /* JADX INFO: renamed from: com.unity3d.player.h$a */
    class a extends View implements PixelCopy.OnPixelCopyFinishedListener {

        /* JADX INFO: renamed from: a */
        Bitmap f230a;

        a(Context context) {
            super(context);
        }

        /* JADX INFO: renamed from: a */
        public final void m117a(SurfaceView surfaceView) {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(surfaceView.getWidth(), surfaceView.getHeight(), Bitmap.Config.ARGB_8888);
            this.f230a = bitmapCreateBitmap;
            PixelCopy.request(surfaceView, bitmapCreateBitmap, this, new Handler(Looper.getMainLooper()));
        }

        @Override // android.view.PixelCopy.OnPixelCopyFinishedListener
        public final void onPixelCopyFinished(int i) {
            if (i == 0) {
                setBackground(new LayerDrawable(new Drawable[]{new ColorDrawable(-16777216), new BitmapDrawable(getResources(), this.f230a)}));
            }
        }
    }

    C0055h(Context context) {
        if (context instanceof Activity) {
            Activity activity = (Activity) context;
            this.f227b = activity;
            activity.getApplication().registerActivityLifecycleCallbacks(this);
        }
    }

    /* JADX INFO: renamed from: a */
    public final void m113a() {
        Activity activity = this.f227b;
        if (activity != null) {
            activity.getApplication().unregisterActivityLifecycleCallbacks(this);
        }
    }

    /* JADX INFO: renamed from: a */
    public final void m114a(SurfaceView surfaceView) {
        if (PlatformSupport.NOUGAT_SUPPORT) {
            if (this.f228c == null) {
                this.f229d = new a(this.f227b);
            }
            this.f229d.m117a(surfaceView);
            this.f228c = this.f229d;
        }
    }

    /* JADX INFO: renamed from: a */
    public final void m115a(ViewGroup viewGroup) {
        View view = this.f228c;
        if (view == null || view.getParent() != null) {
            return;
        }
        viewGroup.addView(this.f228c);
        viewGroup.bringChildToFront(this.f228c);
    }

    /* JADX INFO: renamed from: b */
    public final void m116b(ViewGroup viewGroup) {
        View view = this.f228c;
        if (view == null || view.getParent() == null) {
            return;
        }
        viewGroup.removeView(this.f228c);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        this.f226a = new WeakReference(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }
}

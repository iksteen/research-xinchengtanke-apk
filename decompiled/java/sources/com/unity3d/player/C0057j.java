package com.unity3d.player;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.view.View;

/* JADX INFO: renamed from: com.unity3d.player.j */
/* JADX INFO: loaded from: classes.dex */
public final class C0057j extends View {

    /* JADX INFO: renamed from: a */
    final int f247a;

    /* JADX INFO: renamed from: b */
    final int f248b;

    /* JADX INFO: renamed from: c */
    Bitmap f249c;

    /* JADX INFO: renamed from: d */
    Bitmap f250d;

    /* JADX INFO: renamed from: com.unity3d.player.j$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a */
        static final /* synthetic */ int[] f251a;

        static {
            int[] iArr = new int[a.m134a().length];
            f251a = iArr;
            try {
                iArr[a.f252a - 1] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f251a[a.f253b - 1] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f251a[a.f254c - 1] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    /* JADX WARN: $VALUES field not found */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX INFO: renamed from: com.unity3d.player.j$a */
    static final class a {

        /* JADX INFO: renamed from: a */
        public static final int f252a = 1;

        /* JADX INFO: renamed from: b */
        public static final int f253b = 2;

        /* JADX INFO: renamed from: c */
        public static final int f254c = 3;

        /* JADX INFO: renamed from: d */
        private static final /* synthetic */ int[] f255d = {1, 2, 3};

        /* JADX INFO: renamed from: a */
        public static int[] m134a() {
            return (int[]) f255d.clone();
        }
    }

    public C0057j(Context context, int i) {
        super(context);
        this.f247a = i;
        int identifier = getResources().getIdentifier("unity_static_splash", "drawable", getContext().getPackageName());
        this.f248b = identifier;
        if (identifier != 0) {
            forceLayout();
        }
    }

    @Override // android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Bitmap bitmap = this.f249c;
        if (bitmap != null) {
            bitmap.recycle();
            this.f249c = null;
        }
        Bitmap bitmap2 = this.f250d;
        if (bitmap2 != null) {
            bitmap2.recycle();
            this.f250d = null;
        }
    }

    /* JADX WARN: Code duplicated, block: B:32:0x006d  */
    @Override // android.view.View
    public final void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (this.f248b == 0) {
            return;
        }
        if (this.f249c == null) {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inScaled = false;
            this.f249c = BitmapFactory.decodeResource(getResources(), this.f248b, options);
        }
        int width = this.f249c.getWidth();
        int height = this.f249c.getHeight();
        int width2 = getWidth();
        int height2 = getHeight();
        if (width2 == 0 || height2 == 0) {
            return;
        }
        float f = width / height;
        float f2 = width2;
        float f3 = height2;
        boolean z2 = f2 / f3 <= f;
        int i5 = AnonymousClass1.f251a[this.f247a - 1];
        if (i5 == 1) {
            if (width2 < width) {
                height = (int) (f2 / f);
                width = width2;
            }
            if (height2 < height) {
                width = (int) (f3 * f);
                height = height2;
            }
        } else if (i5 == 2 || i5 == 3) {
            if ((this.f247a == a.f254c) ^ z2) {
                height = (int) (f2 / f);
                width = width2;
            } else {
                width = (int) (f3 * f);
                height = height2;
            }
        }
        Bitmap bitmap = this.f250d;
        if (bitmap != null) {
            if (bitmap.getWidth() == width && this.f250d.getHeight() == height) {
                return;
            }
            Bitmap bitmap2 = this.f250d;
            if (bitmap2 != this.f249c) {
                bitmap2.recycle();
                this.f250d = null;
            }
        }
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(this.f249c, width, height, true);
        this.f250d = bitmapCreateScaledBitmap;
        bitmapCreateScaledBitmap.setDensity(getResources().getDisplayMetrics().densityDpi);
        ColorDrawable colorDrawable = new ColorDrawable(-16777216);
        BitmapDrawable bitmapDrawable = new BitmapDrawable(getResources(), this.f250d);
        bitmapDrawable.setGravity(17);
        setBackground(new LayerDrawable(new Drawable[]{colorDrawable, bitmapDrawable}));
    }
}

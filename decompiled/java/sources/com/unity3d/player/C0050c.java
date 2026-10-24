package com.unity3d.player;

import android.content.Context;
import android.graphics.Rect;
import android.graphics.SurfaceTexture;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCaptureSession;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraDevice;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.CaptureFailure;
import android.hardware.camera2.CaptureRequest;
import android.hardware.camera2.TotalCaptureResult;
import android.hardware.camera2.params.MeteringRectangle;
import android.hardware.camera2.params.StreamConfigurationMap;
import android.media.Image;
import android.media.ImageReader;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.Range;
import android.util.Size;
import android.util.SizeF;
import android.view.Surface;
import java.util.Arrays;
import java.util.concurrent.Semaphore;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: com.unity3d.player.c */
/* JADX INFO: loaded from: classes.dex */
public final class C0050c {

    /* JADX INFO: renamed from: b */
    private static CameraManager f176b;

    /* JADX INFO: renamed from: c */
    private static String[] f177c;

    /* JADX INFO: renamed from: e */
    private static Semaphore f178e = new Semaphore(1);

    /* JADX INFO: renamed from: a */
    private InterfaceC0052e f183a;

    /* JADX INFO: renamed from: d */
    private CameraDevice f184d;

    /* JADX INFO: renamed from: f */
    private HandlerThread f185f;

    /* JADX INFO: renamed from: g */
    private Handler f186g;

    /* JADX INFO: renamed from: h */
    private Rect f187h;

    /* JADX INFO: renamed from: i */
    private Rect f188i;

    /* JADX INFO: renamed from: j */
    private int f189j;

    /* JADX INFO: renamed from: k */
    private int f190k;

    /* JADX INFO: renamed from: n */
    private int f193n;

    /* JADX INFO: renamed from: o */
    private int f194o;

    /* JADX INFO: renamed from: q */
    private Range f196q;

    /* JADX INFO: renamed from: s */
    private Image f198s;

    /* JADX INFO: renamed from: t */
    private CaptureRequest.Builder f199t;

    /* JADX INFO: renamed from: w */
    private int f202w;

    /* JADX INFO: renamed from: x */
    private SurfaceTexture f203x;

    /* JADX INFO: renamed from: l */
    private float f191l = -1.0f;

    /* JADX INFO: renamed from: m */
    private float f192m = -1.0f;

    /* JADX INFO: renamed from: p */
    private boolean f195p = false;

    /* JADX INFO: renamed from: r */
    private ImageReader f197r = null;

    /* JADX INFO: renamed from: u */
    private CameraCaptureSession f200u = null;

    /* JADX INFO: renamed from: v */
    private Object f201v = new Object();

    /* JADX INFO: renamed from: y */
    private Surface f204y = null;

    /* JADX INFO: renamed from: z */
    private int f205z = a.f213c;

    /* JADX INFO: renamed from: A */
    private CameraCaptureSession.CaptureCallback f179A = new CameraCaptureSession.CaptureCallback() { // from class: com.unity3d.player.c.1
        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public final void onCaptureCompleted(CameraCaptureSession cameraCaptureSession, CaptureRequest captureRequest, TotalCaptureResult totalCaptureResult) {
            C0050c.this.m80a(captureRequest.getTag());
        }

        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public final void onCaptureFailed(CameraCaptureSession cameraCaptureSession, CaptureRequest captureRequest, CaptureFailure captureFailure) {
            C0053f.Log(5, "Camera2: Capture session failed " + captureRequest.getTag() + " reason " + captureFailure.getReason());
            C0050c.this.m80a(captureRequest.getTag());
        }

        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public final void onCaptureSequenceAborted(CameraCaptureSession cameraCaptureSession, int i) {
        }

        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public final void onCaptureSequenceCompleted(CameraCaptureSession cameraCaptureSession, int i, long j) {
        }
    };

    /* JADX INFO: renamed from: B */
    private final CameraDevice.StateCallback f180B = new CameraDevice.StateCallback() { // from class: com.unity3d.player.c.3
        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public final void onClosed(CameraDevice cameraDevice) {
            C0050c.f178e.release();
        }

        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public final void onDisconnected(CameraDevice cameraDevice) {
            C0053f.Log(5, "Camera2: CameraDevice disconnected.");
            C0050c.this.m78a(cameraDevice);
            C0050c.f178e.release();
        }

        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public final void onError(CameraDevice cameraDevice, int i) {
            C0053f.Log(6, "Camera2: Error opeining CameraDevice " + i);
            C0050c.this.m78a(cameraDevice);
            C0050c.f178e.release();
        }

        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public final void onOpened(CameraDevice cameraDevice) {
            C0050c.this.f184d = cameraDevice;
            C0050c.f178e.release();
        }
    };

    /* JADX INFO: renamed from: C */
    private final ImageReader.OnImageAvailableListener f181C = new ImageReader.OnImageAvailableListener() { // from class: com.unity3d.player.c.4
        @Override // android.media.ImageReader.OnImageAvailableListener
        public final void onImageAvailable(ImageReader imageReader) {
            if (C0050c.f178e.tryAcquire()) {
                Image imageAcquireNextImage = imageReader.acquireNextImage();
                if (imageAcquireNextImage != null) {
                    Image.Plane[] planes = imageAcquireNextImage.getPlanes();
                    if (imageAcquireNextImage.getFormat() == 35 && planes != null && planes.length == 3) {
                        C0050c.this.f183a.mo6a(planes[0].getBuffer(), planes[1].getBuffer(), planes[2].getBuffer(), planes[0].getRowStride(), planes[1].getRowStride(), planes[1].getPixelStride());
                    } else {
                        C0053f.Log(6, "Camera2: Wrong image format.");
                    }
                    if (C0050c.this.f198s != null) {
                        C0050c.this.f198s.close();
                    }
                    C0050c.this.f198s = imageAcquireNextImage;
                }
                C0050c.f178e.release();
            }
        }
    };

    /* JADX INFO: renamed from: D */
    private final SurfaceTexture.OnFrameAvailableListener f182D = new SurfaceTexture.OnFrameAvailableListener() { // from class: com.unity3d.player.c.5
        @Override // android.graphics.SurfaceTexture.OnFrameAvailableListener
        public final void onFrameAvailable(SurfaceTexture surfaceTexture) {
            C0050c.this.f183a.mo5a(surfaceTexture);
        }
    };

    /* JADX WARN: $VALUES field not found */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX INFO: renamed from: com.unity3d.player.c$a */
    private static final class a {

        /* JADX INFO: renamed from: a */
        public static final int f211a = 1;

        /* JADX INFO: renamed from: b */
        public static final int f212b = 2;

        /* JADX INFO: renamed from: c */
        public static final int f213c = 3;

        /* JADX INFO: renamed from: d */
        private static final /* synthetic */ int[] f214d = {1, 2, 3};
    }

    protected C0050c(InterfaceC0052e interfaceC0052e) {
        this.f183a = null;
        this.f183a = interfaceC0052e;
        m96g();
    }

    /* JADX INFO: renamed from: a */
    public static int m69a(Context context) {
        return m89c(context).length;
    }

    /* JADX INFO: renamed from: a */
    public static int m70a(Context context, int i) {
        try {
            return ((Integer) m82b(context).getCameraCharacteristics(m89c(context)[i]).get(CameraCharacteristics.SENSOR_ORIENTATION)).intValue();
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
            return 0;
        }
    }

    /* JADX INFO: renamed from: a */
    private static int m71a(Range[] rangeArr, int i) {
        int i2 = -1;
        double d = Double.MAX_VALUE;
        for (int i3 = 0; i3 < rangeArr.length; i3++) {
            int iIntValue = ((Integer) rangeArr[i3].getLower()).intValue();
            int iIntValue2 = ((Integer) rangeArr[i3].getUpper()).intValue();
            float f = i;
            if (f + 0.1f > iIntValue && f - 0.1f < iIntValue2) {
                return i;
            }
            double dMin = Math.min(Math.abs(i - iIntValue), Math.abs(i - iIntValue2));
            if (dMin < d) {
                i2 = i3;
                d = dMin;
            }
        }
        return ((Integer) (i > ((Integer) rangeArr[i2].getUpper()).intValue() ? rangeArr[i2].getUpper() : rangeArr[i2].getLower())).intValue();
    }

    /* JADX INFO: renamed from: a */
    private static Rect m72a(Size[] sizeArr, double d, double d2) {
        double d3 = Double.MAX_VALUE;
        int i = 0;
        int i2 = 0;
        for (int i3 = 0; i3 < sizeArr.length; i3++) {
            int width = sizeArr[i3].getWidth();
            int height = sizeArr[i3].getHeight();
            double dAbs = Math.abs(Math.log(d / ((double) width))) + Math.abs(Math.log(d2 / ((double) height)));
            if (dAbs < d3) {
                i = width;
                i2 = height;
                d3 = dAbs;
            }
        }
        return new Rect(0, 0, i, i2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: a */
    public void m78a(CameraDevice cameraDevice) {
        synchronized (this.f201v) {
            this.f200u = null;
        }
        cameraDevice.close();
        this.f184d = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: a */
    public void m80a(Object obj) {
        if (obj != "Focus") {
            if (obj == "Cancel focus") {
                synchronized (this.f201v) {
                    if (this.f200u != null) {
                        m102j();
                    }
                }
                return;
            }
            return;
        }
        this.f195p = false;
        synchronized (this.f201v) {
            if (this.f200u != null) {
                try {
                    this.f199t.set(CaptureRequest.CONTROL_AF_TRIGGER, 0);
                    this.f199t.setTag("Regular");
                    this.f200u.setRepeatingRequest(this.f199t.build(), this.f179A, this.f186g);
                } catch (CameraAccessException e) {
                    C0053f.Log(6, "Camera2: CameraAccessException " + e);
                }
            }
        }
    }

    /* JADX INFO: renamed from: a */
    private static Size[] m81a(CameraCharacteristics cameraCharacteristics) {
        StreamConfigurationMap streamConfigurationMap = (StreamConfigurationMap) cameraCharacteristics.get(CameraCharacteristics.SCALER_STREAM_CONFIGURATION_MAP);
        if (streamConfigurationMap == null) {
            C0053f.Log(6, "Camera2: configuration map is not available.");
            return null;
        }
        Size[] outputSizes = streamConfigurationMap.getOutputSizes(35);
        if (outputSizes == null || outputSizes.length == 0) {
            return null;
        }
        return outputSizes;
    }

    /* JADX INFO: renamed from: b */
    private static CameraManager m82b(Context context) {
        if (f176b == null) {
            f176b = (CameraManager) context.getSystemService("camera");
        }
        return f176b;
    }

    /* JADX INFO: renamed from: b */
    private void m84b(CameraCharacteristics cameraCharacteristics) {
        int iIntValue = ((Integer) cameraCharacteristics.get(CameraCharacteristics.CONTROL_MAX_REGIONS_AF)).intValue();
        this.f190k = iIntValue;
        if (iIntValue > 0) {
            Rect rect = (Rect) cameraCharacteristics.get(CameraCharacteristics.SENSOR_INFO_ACTIVE_ARRAY_SIZE);
            this.f188i = rect;
            float fWidth = rect.width() / this.f188i.height();
            float fWidth2 = this.f187h.width() / this.f187h.height();
            if (fWidth2 > fWidth) {
                this.f193n = 0;
                this.f194o = (int) ((this.f188i.height() - (this.f188i.width() / fWidth2)) / 2.0f);
            } else {
                this.f194o = 0;
                this.f193n = (int) ((this.f188i.width() - (this.f188i.height() * fWidth2)) / 2.0f);
            }
            this.f189j = Math.min(this.f188i.width(), this.f188i.height()) / 20;
        }
    }

    /* JADX INFO: renamed from: b */
    public static boolean m86b(Context context, int i) {
        try {
            return ((Integer) m82b(context).getCameraCharacteristics(m89c(context)[i]).get(CameraCharacteristics.LENS_FACING)).intValue() == 0;
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
            return false;
        }
    }

    /* JADX INFO: renamed from: c */
    public static boolean m88c(Context context, int i) {
        try {
            return ((Integer) m82b(context).getCameraCharacteristics(m89c(context)[i]).get(CameraCharacteristics.CONTROL_MAX_REGIONS_AF)).intValue() > 0;
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
            return false;
        }
    }

    /* JADX INFO: renamed from: c */
    private static String[] m89c(Context context) {
        if (f177c == null) {
            try {
                f177c = m82b(context).getCameraIdList();
            } catch (CameraAccessException e) {
                C0053f.Log(6, "Camera2: CameraAccessException " + e);
                f177c = new String[0];
            }
        }
        return f177c;
    }

    /* JADX INFO: renamed from: d */
    public static int m90d(Context context, int i) {
        try {
            CameraCharacteristics cameraCharacteristics = m82b(context).getCameraCharacteristics(m89c(context)[i]);
            float[] fArr = (float[]) cameraCharacteristics.get(CameraCharacteristics.LENS_INFO_AVAILABLE_FOCAL_LENGTHS);
            SizeF sizeF = (SizeF) cameraCharacteristics.get(CameraCharacteristics.SENSOR_INFO_PHYSICAL_SIZE);
            if (fArr.length > 0) {
                return (int) ((fArr[0] * 36.0f) / sizeF.getWidth());
            }
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
        }
        return 0;
    }

    /* JADX INFO: renamed from: e */
    public static int[] m93e(Context context, int i) {
        try {
            Size[] sizeArrM81a = m81a(m82b(context).getCameraCharacteristics(m89c(context)[i]));
            if (sizeArrM81a == null) {
                return null;
            }
            int[] iArr = new int[sizeArrM81a.length * 2];
            for (int i2 = 0; i2 < sizeArrM81a.length; i2++) {
                int i3 = i2 * 2;
                iArr[i3] = sizeArrM81a[i2].getWidth();
                iArr[i3 + 1] = sizeArrM81a[i2].getHeight();
            }
            return iArr;
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
            return null;
        }
    }

    /* JADX INFO: renamed from: g */
    private void m96g() {
        HandlerThread handlerThread = new HandlerThread("CameraBackground");
        this.f185f = handlerThread;
        handlerThread.start();
        this.f186g = new Handler(this.f185f.getLooper());
    }

    /* JADX INFO: renamed from: h */
    private void m99h() {
        this.f185f.quit();
        try {
            this.f185f.join(4000L);
            this.f185f = null;
            this.f186g = null;
        } catch (InterruptedException e) {
            this.f185f.interrupt();
            C0053f.Log(6, "Camera2: Interrupted while waiting for the background thread to finish " + e);
        }
    }

    /* JADX INFO: renamed from: i */
    private void m101i() {
        try {
            if (!f178e.tryAcquire(4L, TimeUnit.SECONDS)) {
                C0053f.Log(5, "Camera2: Timeout waiting to lock camera for closing.");
                return;
            }
            this.f184d.close();
            try {
                if (!f178e.tryAcquire(4L, TimeUnit.SECONDS)) {
                    C0053f.Log(5, "Camera2: Timeout waiting to close camera.");
                }
            } catch (InterruptedException e) {
                C0053f.Log(6, "Camera2: Interrupted while waiting to close camera " + e);
            }
            this.f184d = null;
            f178e.release();
        } catch (InterruptedException e2) {
            C0053f.Log(6, "Camera2: Interrupted while trying to lock camera for closing " + e2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: j */
    public void m102j() {
        try {
            if (this.f190k != 0 && this.f191l >= 0.0f && this.f191l <= 1.0f && this.f192m >= 0.0f && this.f192m <= 1.0f) {
                this.f195p = true;
                this.f199t.set(CaptureRequest.CONTROL_AF_REGIONS, new MeteringRectangle[]{new MeteringRectangle(Math.max(this.f189j + 1, Math.min((int) (((this.f188i.width() - (this.f193n * 2)) * this.f191l) + this.f193n), (this.f188i.width() - this.f189j) - 1)) - this.f189j, Math.max(this.f189j + 1, Math.min((int) ((((double) (this.f188i.height() - (this.f194o * 2))) * (1.0d - ((double) this.f192m))) + ((double) this.f194o)), (this.f188i.height() - this.f189j) - 1)) - this.f189j, this.f189j * 2, this.f189j * 2, 999)});
                this.f199t.set(CaptureRequest.CONTROL_AF_MODE, 1);
                this.f199t.set(CaptureRequest.CONTROL_AF_TRIGGER, 1);
                this.f199t.setTag("Focus");
                this.f200u.capture(this.f199t.build(), this.f179A, this.f186g);
                return;
            }
            this.f199t.set(CaptureRequest.CONTROL_AF_MODE, 4);
            this.f199t.setTag("Regular");
            if (this.f200u != null) {
                this.f200u.setRepeatingRequest(this.f199t.build(), this.f179A, this.f186g);
            }
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
        }
    }

    /* JADX INFO: renamed from: k */
    private void m103k() {
        try {
            if (this.f200u != null) {
                this.f200u.stopRepeating();
                this.f199t.set(CaptureRequest.CONTROL_AF_TRIGGER, 2);
                this.f199t.set(CaptureRequest.CONTROL_AF_MODE, 0);
                this.f199t.setTag("Cancel focus");
                this.f200u.capture(this.f199t.build(), this.f179A, this.f186g);
            }
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
        }
    }

    /* JADX INFO: renamed from: a */
    public final Rect m104a() {
        return this.f187h;
    }

    /* JADX INFO: renamed from: a */
    public final boolean m105a(float f, float f2) {
        if (this.f190k <= 0) {
            return false;
        }
        if (this.f195p) {
            C0053f.Log(5, "Camera2: Setting manual focus point already started.");
            return false;
        }
        this.f191l = f;
        this.f192m = f2;
        synchronized (this.f201v) {
            if (this.f200u != null && this.f205z != a.f212b) {
                m103k();
            }
        }
        return true;
    }

    /* JADX INFO: renamed from: a */
    public final boolean m106a(Context context, int i, int i2, int i3, int i4, int i5) {
        try {
            CameraCharacteristics cameraCharacteristics = f176b.getCameraCharacteristics(m89c(context)[i]);
            if (((Integer) cameraCharacteristics.get(CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL)).intValue() == 2) {
                C0053f.Log(5, "Camera2: only LEGACY hardware level is supported.");
                return false;
            }
            Size[] sizeArrM81a = m81a(cameraCharacteristics);
            if (sizeArrM81a != null && sizeArrM81a.length != 0) {
                this.f187h = m72a(sizeArrM81a, i2, i3);
                Range[] rangeArr = (Range[]) cameraCharacteristics.get(CameraCharacteristics.CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES);
                if (rangeArr == null || rangeArr.length == 0) {
                    C0053f.Log(6, "Camera2: target FPS ranges are not avialable.");
                } else {
                    int iM71a = m71a(rangeArr, i4);
                    this.f196q = new Range(Integer.valueOf(iM71a), Integer.valueOf(iM71a));
                    try {
                        if (!f178e.tryAcquire(4L, TimeUnit.SECONDS)) {
                            C0053f.Log(5, "Camera2: Timeout waiting to lock camera for opening.");
                            return false;
                        }
                        try {
                            f176b.openCamera(m89c(context)[i], this.f180B, this.f186g);
                            try {
                                if (!f178e.tryAcquire(4L, TimeUnit.SECONDS)) {
                                    C0053f.Log(5, "Camera2: Timeout waiting to open camera.");
                                    return false;
                                }
                                f178e.release();
                                this.f202w = i5;
                                m84b(cameraCharacteristics);
                                return this.f184d != null;
                            } catch (InterruptedException e) {
                                C0053f.Log(6, "Camera2: Interrupted while waiting to open camera " + e);
                            }
                        } catch (CameraAccessException e2) {
                            C0053f.Log(6, "Camera2: CameraAccessException " + e2);
                            f178e.release();
                            return false;
                        }
                    } catch (InterruptedException e3) {
                        C0053f.Log(6, "Camera2: Interrupted while trying to lock camera for opening " + e3);
                        return false;
                    }
                }
            }
            return false;
        } catch (CameraAccessException e4) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e4);
            return false;
        }
    }

    /* JADX INFO: renamed from: b */
    public final void m107b() {
        if (this.f184d != null) {
            m110e();
            m101i();
            this.f179A = null;
            this.f204y = null;
            this.f203x = null;
            Image image = this.f198s;
            if (image != null) {
                image.close();
                this.f198s = null;
            }
            ImageReader imageReader = this.f197r;
            if (imageReader != null) {
                imageReader.close();
                this.f197r = null;
            }
        }
        m99h();
    }

    /* JADX INFO: renamed from: c */
    public final void m108c() {
        if (this.f197r == null) {
            ImageReader imageReaderNewInstance = ImageReader.newInstance(this.f187h.width(), this.f187h.height(), 35, 2);
            this.f197r = imageReaderNewInstance;
            imageReaderNewInstance.setOnImageAvailableListener(this.f181C, this.f186g);
            this.f198s = null;
            if (this.f202w != 0) {
                SurfaceTexture surfaceTexture = new SurfaceTexture(this.f202w);
                this.f203x = surfaceTexture;
                surfaceTexture.setDefaultBufferSize(this.f187h.width(), this.f187h.height());
                this.f203x.setOnFrameAvailableListener(this.f182D, this.f186g);
                this.f204y = new Surface(this.f203x);
            }
        }
        try {
            if (this.f200u == null) {
                this.f184d.createCaptureSession(this.f204y != null ? Arrays.asList(this.f204y, this.f197r.getSurface()) : Arrays.asList(this.f197r.getSurface()), new CameraCaptureSession.StateCallback() { // from class: com.unity3d.player.c.2
                    @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
                    public final void onConfigureFailed(CameraCaptureSession cameraCaptureSession) {
                        C0053f.Log(6, "Camera2: CaptureSession configuration failed.");
                    }

                    @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
                    public final void onConfigured(CameraCaptureSession cameraCaptureSession) {
                        if (C0050c.this.f184d == null) {
                            return;
                        }
                        synchronized (C0050c.this.f201v) {
                            C0050c.this.f200u = cameraCaptureSession;
                            try {
                                C0050c.this.f199t = C0050c.this.f184d.createCaptureRequest(1);
                                if (C0050c.this.f204y != null) {
                                    C0050c.this.f199t.addTarget(C0050c.this.f204y);
                                }
                                C0050c.this.f199t.addTarget(C0050c.this.f197r.getSurface());
                                C0050c.this.f199t.set(CaptureRequest.CONTROL_AE_TARGET_FPS_RANGE, C0050c.this.f196q);
                                C0050c.this.m102j();
                            } catch (CameraAccessException e) {
                                C0053f.Log(6, "Camera2: CameraAccessException " + e);
                            }
                        }
                    }
                }, this.f186g);
            } else if (this.f205z == a.f212b) {
                this.f200u.setRepeatingRequest(this.f199t.build(), this.f179A, this.f186g);
            }
            this.f205z = a.f211a;
        } catch (CameraAccessException e) {
            C0053f.Log(6, "Camera2: CameraAccessException " + e);
        }
    }

    /* JADX INFO: renamed from: d */
    public final void m109d() {
        synchronized (this.f201v) {
            if (this.f200u != null) {
                try {
                    this.f200u.stopRepeating();
                    this.f205z = a.f212b;
                } catch (CameraAccessException e) {
                    C0053f.Log(6, "Camera2: CameraAccessException " + e);
                }
            }
        }
    }

    /* JADX INFO: renamed from: e */
    public final void m110e() {
        synchronized (this.f201v) {
            if (this.f200u != null) {
                try {
                    this.f200u.abortCaptures();
                } catch (CameraAccessException e) {
                    C0053f.Log(6, "Camera2: CameraAccessException " + e);
                }
                this.f200u.close();
                this.f200u = null;
                this.f205z = a.f213c;
            }
        }
    }
}

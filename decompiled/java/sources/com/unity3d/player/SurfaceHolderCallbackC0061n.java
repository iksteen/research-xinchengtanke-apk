package com.unity3d.player;

import android.app.Activity;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.media.MediaPlayer;
import android.net.Uri;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.MediaController;
import java.io.FileInputStream;
import java.io.IOException;

/* JADX INFO: renamed from: com.unity3d.player.n */
/* JADX INFO: loaded from: classes.dex */
public final class SurfaceHolderCallbackC0061n extends FrameLayout implements MediaPlayer.OnBufferingUpdateListener, MediaPlayer.OnCompletionListener, MediaPlayer.OnPreparedListener, MediaPlayer.OnVideoSizeChangedListener, SurfaceHolder.Callback, MediaController.MediaPlayerControl {

    /* JADX INFO: renamed from: a */
    private static boolean f266a = false;

    /* JADX INFO: renamed from: b */
    private final Context f267b;

    /* JADX INFO: renamed from: c */
    private final SurfaceView f268c;

    /* JADX INFO: renamed from: d */
    private final SurfaceHolder f269d;

    /* JADX INFO: renamed from: e */
    private final String f270e;

    /* JADX INFO: renamed from: f */
    private final int f271f;

    /* JADX INFO: renamed from: g */
    private final int f272g;

    /* JADX INFO: renamed from: h */
    private final boolean f273h;

    /* JADX INFO: renamed from: i */
    private final long f274i;

    /* JADX INFO: renamed from: j */
    private final long f275j;

    /* JADX INFO: renamed from: k */
    private final FrameLayout f276k;

    /* JADX INFO: renamed from: l */
    private final Display f277l;

    /* JADX INFO: renamed from: m */
    private int f278m;

    /* JADX INFO: renamed from: n */
    private int f279n;

    /* JADX INFO: renamed from: o */
    private int f280o;

    /* JADX INFO: renamed from: p */
    private int f281p;

    /* JADX INFO: renamed from: q */
    private MediaPlayer f282q;

    /* JADX INFO: renamed from: r */
    private MediaController f283r;

    /* JADX INFO: renamed from: s */
    private boolean f284s;

    /* JADX INFO: renamed from: t */
    private boolean f285t;

    /* JADX INFO: renamed from: u */
    private int f286u;

    /* JADX INFO: renamed from: v */
    private boolean f287v;

    /* JADX INFO: renamed from: w */
    private boolean f288w;

    /* JADX INFO: renamed from: x */
    private a f289x;

    /* JADX INFO: renamed from: y */
    private b f290y;

    /* JADX INFO: renamed from: z */
    private volatile int f291z;

    /* JADX INFO: renamed from: com.unity3d.player.n$a */
    public interface a {
        /* JADX INFO: renamed from: a */
        void mo156a(int i);
    }

    /* JADX INFO: renamed from: com.unity3d.player.n$b */
    public class b implements Runnable {

        /* JADX INFO: renamed from: b */
        private SurfaceHolderCallbackC0061n f293b;

        /* JADX INFO: renamed from: c */
        private boolean f294c = false;

        public b(SurfaceHolderCallbackC0061n surfaceHolderCallbackC0061n) {
            this.f293b = surfaceHolderCallbackC0061n;
        }

        /* JADX INFO: renamed from: a */
        public final void m157a() {
            this.f294c = true;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                Thread.sleep(5000L);
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
            }
            if (this.f294c) {
                return;
            }
            if (SurfaceHolderCallbackC0061n.f266a) {
                SurfaceHolderCallbackC0061n.m151b("Stopping the video player due to timeout.");
            }
            this.f293b.CancelOnPrepare();
        }
    }

    protected SurfaceHolderCallbackC0061n(Context context, String str, int i, int i2, int i3, boolean z, long j, long j2, a aVar) {
        super(context);
        this.f284s = false;
        this.f285t = false;
        this.f286u = 0;
        this.f287v = false;
        this.f288w = false;
        this.f291z = 0;
        this.f289x = aVar;
        this.f267b = context;
        this.f276k = this;
        SurfaceView surfaceView = new SurfaceView(context);
        this.f268c = surfaceView;
        SurfaceHolder holder = surfaceView.getHolder();
        this.f269d = holder;
        holder.addCallback(this);
        this.f276k.setBackgroundColor(i);
        this.f276k.addView(this.f268c);
        this.f277l = ((WindowManager) this.f267b.getSystemService("window")).getDefaultDisplay();
        this.f270e = str;
        this.f271f = i2;
        this.f272g = i3;
        this.f273h = z;
        this.f274i = j;
        this.f275j = j2;
        if (f266a) {
            m151b("fileName: " + this.f270e);
        }
        if (f266a) {
            m151b("backgroundColor: " + i);
        }
        if (f266a) {
            m151b("controlMode: " + this.f271f);
        }
        if (f266a) {
            m151b("scalingMode: " + this.f272g);
        }
        if (f266a) {
            m151b("isURL: " + this.f273h);
        }
        if (f266a) {
            m151b("videoOffset: " + this.f274i);
        }
        if (f266a) {
            m151b("videoLength: " + this.f275j);
        }
        setFocusable(true);
        setFocusableInTouchMode(true);
    }

    /* JADX INFO: renamed from: a */
    private void m149a(int i) {
        this.f291z = i;
        a aVar = this.f289x;
        if (aVar != null) {
            aVar.mo156a(this.f291z);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: b */
    public static void m151b(String str) {
        Log.i("Video", "VideoPlayer: " + str);
    }

    /* JADX INFO: renamed from: c */
    private void m153c() {
        FileInputStream fileInputStream;
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer != null) {
            mediaPlayer.setDisplay(this.f269d);
            if (this.f287v) {
                return;
            }
            if (f266a) {
                m151b("Resuming playback");
            }
            this.f282q.start();
            return;
        }
        m149a(0);
        doCleanUp();
        try {
            MediaPlayer mediaPlayer2 = new MediaPlayer();
            this.f282q = mediaPlayer2;
            if (this.f273h) {
                mediaPlayer2.setDataSource(this.f267b, Uri.parse(this.f270e));
            } else {
                if (this.f275j != 0) {
                    fileInputStream = new FileInputStream(this.f270e);
                    this.f282q.setDataSource(fileInputStream.getFD(), this.f274i, this.f275j);
                } else {
                    try {
                        AssetFileDescriptor assetFileDescriptorOpenFd = getResources().getAssets().openFd(this.f270e);
                        this.f282q.setDataSource(assetFileDescriptorOpenFd.getFileDescriptor(), assetFileDescriptorOpenFd.getStartOffset(), assetFileDescriptorOpenFd.getLength());
                        assetFileDescriptorOpenFd.close();
                    } catch (IOException unused) {
                        fileInputStream = new FileInputStream(this.f270e);
                        this.f282q.setDataSource(fileInputStream.getFD());
                        fileInputStream.close();
                    }
                }
                fileInputStream.close();
            }
            this.f282q.setDisplay(this.f269d);
            this.f282q.setScreenOnWhilePlaying(true);
            this.f282q.setOnBufferingUpdateListener(this);
            this.f282q.setOnCompletionListener(this);
            this.f282q.setOnPreparedListener(this);
            this.f282q.setOnVideoSizeChangedListener(this);
            this.f282q.setAudioStreamType(3);
            this.f282q.prepareAsync();
            this.f290y = new b(this);
            new Thread(this.f290y).start();
        } catch (Exception e) {
            if (f266a) {
                m151b("error: " + e.getMessage() + e);
            }
            m149a(2);
        }
    }

    /* JADX INFO: renamed from: d */
    private void m154d() {
        if (isPlaying()) {
            return;
        }
        m149a(1);
        if (f266a) {
            m151b("startVideoPlayback");
        }
        updateVideoLayout();
        if (this.f287v) {
            return;
        }
        start();
    }

    public final void CancelOnPrepare() {
        m149a(2);
    }

    /* JADX INFO: renamed from: a */
    final boolean m155a() {
        return this.f287v;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final boolean canPause() {
        return true;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final boolean canSeekBackward() {
        return true;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final boolean canSeekForward() {
        return true;
    }

    protected final void destroyPlayer() {
        if (f266a) {
            m151b("destroyPlayer");
        }
        if (!this.f287v) {
            pause();
        }
        doCleanUp();
    }

    protected final void doCleanUp() {
        b bVar = this.f290y;
        if (bVar != null) {
            bVar.m157a();
            this.f290y = null;
        }
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer != null) {
            mediaPlayer.release();
            this.f282q = null;
        }
        this.f280o = 0;
        this.f281p = 0;
        this.f285t = false;
        this.f284s = false;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final int getAudioSessionId() {
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return 0;
        }
        return mediaPlayer.getAudioSessionId();
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final int getBufferPercentage() {
        if (this.f273h) {
            return this.f286u;
        }
        return 100;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final int getCurrentPosition() {
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return 0;
        }
        return mediaPlayer.getCurrentPosition();
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final int getDuration() {
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return 0;
        }
        return mediaPlayer.getDuration();
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final boolean isPlaying() {
        boolean z = this.f285t && this.f284s;
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return !z;
        }
        return mediaPlayer.isPlaying() || !z;
    }

    @Override // android.media.MediaPlayer.OnBufferingUpdateListener
    public final void onBufferingUpdate(MediaPlayer mediaPlayer, int i) {
        if (f266a) {
            m151b("onBufferingUpdate percent:" + i);
        }
        this.f286u = i;
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public final void onCompletion(MediaPlayer mediaPlayer) {
        if (f266a) {
            m151b("onCompletion called");
        }
        destroyPlayer();
        m149a(3);
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public final boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i != 4 && (this.f271f != 2 || i == 0 || keyEvent.isSystem())) {
            MediaController mediaController = this.f283r;
            return mediaController != null ? mediaController.onKeyDown(i, keyEvent) : super.onKeyDown(i, keyEvent);
        }
        destroyPlayer();
        m149a(3);
        return true;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public final void onPrepared(MediaPlayer mediaPlayer) {
        if (f266a) {
            m151b("onPrepared called");
        }
        b bVar = this.f290y;
        if (bVar != null) {
            bVar.m157a();
            this.f290y = null;
        }
        int i = this.f271f;
        if (i == 0 || i == 1) {
            MediaController mediaController = new MediaController(this.f267b);
            this.f283r = mediaController;
            mediaController.setMediaPlayer(this);
            this.f283r.setAnchorView(this);
            this.f283r.setEnabled(true);
            Context context = this.f267b;
            if (context instanceof Activity) {
                this.f283r.setSystemUiVisibility(((Activity) context).getWindow().getDecorView().getSystemUiVisibility());
            }
            this.f283r.show();
        }
        this.f285t = true;
        if (1 == 0 || !this.f284s) {
            return;
        }
        m154d();
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction() & 255;
        if (this.f271f != 2 || action != 0) {
            MediaController mediaController = this.f283r;
            return mediaController != null ? mediaController.onTouchEvent(motionEvent) : super.onTouchEvent(motionEvent);
        }
        destroyPlayer();
        m149a(3);
        return true;
    }

    @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
    public final void onVideoSizeChanged(MediaPlayer mediaPlayer, int i, int i2) {
        if (f266a) {
            m151b("onVideoSizeChanged called " + i + "x" + i2);
        }
        if (i != 0 && i2 != 0) {
            this.f284s = true;
            this.f280o = i;
            this.f281p = i2;
            if (!this.f285t || 1 == 0) {
                return;
            }
            m154d();
            return;
        }
        if (f266a) {
            m151b("invalid video width(" + i + ") or height(" + i2 + ")");
        }
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final void pause() {
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return;
        }
        if (this.f288w) {
            mediaPlayer.pause();
        }
        this.f287v = true;
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final void seekTo(int i) {
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return;
        }
        mediaPlayer.seekTo(i);
    }

    @Override // android.widget.MediaController.MediaPlayerControl
    public final void start() {
        if (f266a) {
            m151b("Start");
        }
        MediaPlayer mediaPlayer = this.f282q;
        if (mediaPlayer == null) {
            return;
        }
        if (this.f288w) {
            mediaPlayer.start();
        }
        this.f287v = false;
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        if (f266a) {
            m151b("surfaceChanged called " + i + " " + i2 + "x" + i3);
        }
        if (this.f278m == i2 && this.f279n == i3) {
            return;
        }
        this.f278m = i2;
        this.f279n = i3;
        if (this.f288w) {
            updateVideoLayout();
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceCreated(SurfaceHolder surfaceHolder) {
        if (f266a) {
            m151b("surfaceCreated called");
        }
        this.f288w = true;
        m153c();
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        if (f266a) {
            m151b("surfaceDestroyed called");
        }
        this.f288w = false;
    }

    /* JADX WARN: Code duplicated, block: B:19:0x004f  */
    /* JADX WARN: Code duplicated, block: B:20:0x0053  */
    protected final void updateVideoLayout() {
        if (f266a) {
            m151b("updateVideoLayout");
        }
        if (this.f282q == null) {
            return;
        }
        if (this.f278m == 0 || this.f279n == 0) {
            WindowManager windowManager = (WindowManager) this.f267b.getSystemService("window");
            DisplayMetrics displayMetrics = new DisplayMetrics();
            windowManager.getDefaultDisplay().getMetrics(displayMetrics);
            this.f278m = displayMetrics.widthPixels;
            this.f279n = displayMetrics.heightPixels;
        }
        int i = this.f278m;
        int i2 = this.f279n;
        if (this.f284s) {
            int i3 = this.f280o;
            int i4 = this.f281p;
            float f = i3 / i4;
            float f2 = i / i2;
            int i5 = this.f272g;
            if (i5 == 1) {
                if (f2 <= f) {
                    i2 = (int) (i / f);
                } else {
                    i = (int) (i2 * f);
                }
            } else if (i5 == 2) {
                if (f2 >= f) {
                    i2 = (int) (i / f);
                } else {
                    i = (int) (i2 * f);
                }
            } else if (i5 == 0) {
                i = i3;
                i2 = i4;
            }
        } else if (f266a) {
            m151b("updateVideoLayout: Video size is not known yet");
        }
        if (this.f278m == i && this.f279n == i2) {
            return;
        }
        if (f266a) {
            m151b("frameWidth = " + i + "; frameHeight = " + i2);
        }
        this.f276k.updateViewLayout(this.f268c, new FrameLayout.LayoutParams(i, i2, 17));
    }
}

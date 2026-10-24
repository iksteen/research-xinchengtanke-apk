package org.fmod;

import android.media.AudioTrack;
import android.util.Log;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes.dex */
public class FMODAudioDevice implements Runnable {

    /* JADX INFO: renamed from: h */
    private static int f317h = 0;

    /* JADX INFO: renamed from: i */
    private static int f318i = 1;

    /* JADX INFO: renamed from: j */
    private static int f319j = 2;

    /* JADX INFO: renamed from: k */
    private static int f320k = 3;

    /* JADX INFO: renamed from: l */
    private static int f321l = 4;

    /* JADX INFO: renamed from: a */
    private volatile Thread f322a = null;

    /* JADX INFO: renamed from: b */
    private volatile boolean f323b = false;

    /* JADX INFO: renamed from: c */
    private AudioTrack f324c = null;

    /* JADX INFO: renamed from: d */
    private boolean f325d = false;

    /* JADX INFO: renamed from: e */
    private ByteBuffer f326e = null;

    /* JADX INFO: renamed from: f */
    private byte[] f327f = null;

    /* JADX INFO: renamed from: g */
    private volatile RunnableC0063a f328g;

    private native int fmodGetInfo(int i);

    private native int fmodProcess(ByteBuffer byteBuffer);

    private void releaseAudioTrack() {
        AudioTrack audioTrack = this.f324c;
        if (audioTrack != null) {
            if (audioTrack.getState() == 1) {
                this.f324c.stop();
            }
            this.f324c.release();
            this.f324c = null;
        }
        this.f326e = null;
        this.f327f = null;
        this.f325d = false;
    }

    public synchronized void close() {
        stop();
    }

    native int fmodProcessMicData(ByteBuffer byteBuffer, int i);

    public boolean isRunning() {
        return this.f322a != null && this.f322a.isAlive();
    }

    @Override // java.lang.Runnable
    public void run() {
        int i = 3;
        while (this.f323b) {
            if (!this.f325d && i > 0) {
                releaseAudioTrack();
                int iFmodGetInfo = fmodGetInfo(f317h);
                int i2 = fmodGetInfo(f321l) == 1 ? 4 : 12;
                int minBufferSize = AudioTrack.getMinBufferSize(iFmodGetInfo, i2, 2);
                int iFmodGetInfo2 = 2 * fmodGetInfo(f321l);
                int iRound = Math.round(minBufferSize * 1.1f) & (~(iFmodGetInfo2 - 1));
                int iFmodGetInfo3 = fmodGetInfo(f318i);
                int iFmodGetInfo4 = fmodGetInfo(f319j) * iFmodGetInfo3 * iFmodGetInfo2;
                AudioTrack audioTrack = new AudioTrack(3, iFmodGetInfo, i2, 2, iFmodGetInfo4 > iRound ? iFmodGetInfo4 : iRound, 1);
                this.f324c = audioTrack;
                boolean z = audioTrack.getState() == 1;
                this.f325d = z;
                if (z) {
                    ByteBuffer byteBufferAllocateDirect = ByteBuffer.allocateDirect(iFmodGetInfo3 * iFmodGetInfo2);
                    this.f326e = byteBufferAllocateDirect;
                    this.f327f = new byte[byteBufferAllocateDirect.capacity()];
                    this.f324c.play();
                    i = 3;
                } else {
                    Log.e("FMOD", "AudioTrack failed to initialize (status " + this.f324c.getState() + ")");
                    releaseAudioTrack();
                    i += -1;
                }
            }
            if (this.f325d) {
                if (fmodGetInfo(f320k) == 1) {
                    fmodProcess(this.f326e);
                    ByteBuffer byteBuffer = this.f326e;
                    byteBuffer.get(this.f327f, 0, byteBuffer.capacity());
                    this.f324c.write(this.f327f, 0, this.f326e.capacity());
                    this.f326e.position(0);
                } else {
                    releaseAudioTrack();
                }
            }
        }
        releaseAudioTrack();
    }

    public synchronized void start() {
        if (this.f322a != null) {
            stop();
        }
        this.f322a = new Thread(this, "FMODAudioDevice");
        this.f322a.setPriority(10);
        this.f323b = true;
        this.f322a.start();
        if (this.f328g != null) {
            this.f328g.m175b();
        }
    }

    public synchronized int startAudioRecord(int i, int i2, int i3) {
        if (this.f328g == null) {
            this.f328g = new RunnableC0063a(this, i, i2);
            this.f328g.m175b();
        }
        return this.f328g.m174a();
    }

    public synchronized void stop() {
        while (this.f322a != null) {
            this.f323b = false;
            try {
                this.f322a.join();
                this.f322a = null;
            } catch (InterruptedException unused) {
            }
        }
        if (this.f328g != null) {
            this.f328g.m176c();
        }
    }

    public synchronized void stopAudioRecord() {
        if (this.f328g != null) {
            this.f328g.m176c();
            this.f328g = null;
        }
    }
}

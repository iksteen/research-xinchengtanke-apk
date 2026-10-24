package org.fmod;

import android.media.AudioRecord;
import android.util.Log;
import java.nio.ByteBuffer;

/* JADX INFO: renamed from: org.fmod.a */
/* JADX INFO: loaded from: classes.dex */
final class RunnableC0063a implements Runnable {

    /* JADX INFO: renamed from: a */
    private final FMODAudioDevice f329a;

    /* JADX INFO: renamed from: b */
    private final ByteBuffer f330b;

    /* JADX INFO: renamed from: c */
    private final int f331c;

    /* JADX INFO: renamed from: d */
    private final int f332d;

    /* JADX INFO: renamed from: e */
    private final int f333e = 2;

    /* JADX INFO: renamed from: f */
    private volatile Thread f334f;

    /* JADX INFO: renamed from: g */
    private volatile boolean f335g;

    /* JADX INFO: renamed from: h */
    private AudioRecord f336h;

    /* JADX INFO: renamed from: i */
    private boolean f337i;

    RunnableC0063a(FMODAudioDevice fMODAudioDevice, int i, int i2) {
        this.f329a = fMODAudioDevice;
        this.f331c = i;
        this.f332d = i2;
        this.f330b = ByteBuffer.allocateDirect(AudioRecord.getMinBufferSize(i, i2, 2));
    }

    /* JADX INFO: renamed from: d */
    private void m173d() {
        AudioRecord audioRecord = this.f336h;
        if (audioRecord != null) {
            if (audioRecord.getState() == 1) {
                this.f336h.stop();
            }
            this.f336h.release();
            this.f336h = null;
        }
        this.f330b.position(0);
        this.f337i = false;
    }

    /* JADX INFO: renamed from: a */
    public final int m174a() {
        return this.f330b.capacity();
    }

    /* JADX INFO: renamed from: b */
    public final void m175b() {
        if (this.f334f != null) {
            m176c();
        }
        this.f335g = true;
        this.f334f = new Thread(this);
        this.f334f.start();
    }

    /* JADX INFO: renamed from: c */
    public final void m176c() {
        while (this.f334f != null) {
            this.f335g = false;
            try {
                this.f334f.join();
                this.f334f = null;
            } catch (InterruptedException unused) {
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i = 3;
        while (this.f335g) {
            if (!this.f337i && i > 0) {
                m173d();
                AudioRecord audioRecord = new AudioRecord(1, this.f331c, this.f332d, this.f333e, this.f330b.capacity());
                this.f336h = audioRecord;
                boolean z = audioRecord.getState() == 1;
                this.f337i = z;
                if (z) {
                    this.f330b.position(0);
                    this.f336h.startRecording();
                    i = 3;
                } else {
                    Log.e("FMOD", "AudioRecord failed to initialize (status " + this.f336h.getState() + ")");
                    i += -1;
                    m173d();
                }
            }
            if (this.f337i && this.f336h.getRecordingState() == 3) {
                AudioRecord audioRecord2 = this.f336h;
                ByteBuffer byteBuffer = this.f330b;
                this.f329a.fmodProcessMicData(this.f330b, audioRecord2.read(byteBuffer, byteBuffer.capacity()));
                this.f330b.position(0);
            }
        }
        m173d();
    }
}

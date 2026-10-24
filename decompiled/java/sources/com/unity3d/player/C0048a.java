package com.unity3d.player;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.google.android.play.core.assetpacks.AssetPackLocation;
import com.google.android.play.core.assetpacks.AssetPackManager;
import com.google.android.play.core.assetpacks.AssetPackManagerFactory;
import com.google.android.play.core.assetpacks.AssetPackState;
import com.google.android.play.core.assetpacks.AssetPackStateUpdateListener;
import com.google.android.play.core.assetpacks.AssetPackStates;
import com.google.android.play.core.tasks.OnCompleteListener;
import com.google.android.play.core.tasks.OnSuccessListener;
import com.google.android.play.core.tasks.RuntimeExecutionException;
import com.google.android.play.core.tasks.Task;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

/* JADX INFO: renamed from: com.unity3d.player.a */
/* JADX INFO: loaded from: classes.dex */
final class C0048a implements InterfaceC0051d {

    /* JADX INFO: renamed from: a */
    private static C0048a f139a;

    /* JADX INFO: renamed from: b */
    private AssetPackManager f140b;

    /* JADX INFO: renamed from: c */
    private HashSet f141c;

    /* JADX INFO: renamed from: d */
    private Object f142d;

    /* JADX INFO: renamed from: com.unity3d.player.a$a */
    private static class a implements Runnable {

        /* JADX INFO: renamed from: a */
        private Set f143a;

        /* JADX INFO: renamed from: b */
        private String f144b;

        /* JADX INFO: renamed from: c */
        private int f145c;

        /* JADX INFO: renamed from: d */
        private long f146d;

        /* JADX INFO: renamed from: e */
        private long f147e;

        /* JADX INFO: renamed from: f */
        private int f148f;

        /* JADX INFO: renamed from: g */
        private int f149g;

        a(Set set, String str, int i, long j, long j2, int i2, int i3) {
            this.f143a = set;
            this.f144b = str;
            this.f145c = i;
            this.f146d = j;
            this.f147e = j2;
            this.f148f = i2;
            this.f149g = i3;
        }

        @Override // java.lang.Runnable
        public final void run() {
            Iterator it = this.f143a.iterator();
            while (it.hasNext()) {
                ((IAssetPackManagerDownloadStatusCallback) it.next()).onStatusUpdate(this.f144b, this.f145c, this.f146d, this.f147e, this.f148f, this.f149g);
            }
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.a$b */
    private class b implements AssetPackStateUpdateListener {

        /* JADX INFO: renamed from: b */
        private HashSet f151b;

        /* JADX INFO: renamed from: c */
        private Looper f152c;

        public b(C0048a c0048a, IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback) {
            this(iAssetPackManagerDownloadStatusCallback, Looper.myLooper());
        }

        public b(IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback, Looper looper) {
            HashSet hashSet = new HashSet();
            this.f151b = hashSet;
            hashSet.add(iAssetPackManagerDownloadStatusCallback);
            this.f152c = looper;
        }

        /* JADX INFO: renamed from: a */
        private static Set m62a(HashSet hashSet) {
            return (Set) hashSet.clone();
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public synchronized void onStateUpdate(AssetPackState assetPackState) {
            if (assetPackState.status() == 4 || assetPackState.status() == 5 || assetPackState.status() == 0) {
                synchronized (C0048a.f139a) {
                    C0048a.this.f141c.remove(assetPackState.name());
                    if (C0048a.this.f141c.isEmpty()) {
                        C0048a.this.mo57a(C0048a.this.f142d);
                        C0048a.m53c(C0048a.this);
                    }
                }
            }
            if (this.f151b.size() == 0) {
                return;
            }
            new Handler(this.f152c).post(new a(m62a(this.f151b), assetPackState.name(), assetPackState.status(), assetPackState.totalBytesToDownload(), assetPackState.bytesDownloaded(), assetPackState.transferProgressPercentage(), assetPackState.errorCode()));
        }

        /* JADX INFO: renamed from: a */
        public final synchronized void m64a(IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback) {
            this.f151b.add(iAssetPackManagerDownloadStatusCallback);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.a$c */
    private static class c implements OnSuccessListener {

        /* JADX INFO: renamed from: a */
        private IAssetPackManagerMobileDataConfirmationCallback f153a;

        /* JADX INFO: renamed from: b */
        private Looper f154b = Looper.myLooper();

        /* JADX INFO: renamed from: com.unity3d.player.a$c$a */
        private static class a implements Runnable {

            /* JADX INFO: renamed from: a */
            private IAssetPackManagerMobileDataConfirmationCallback f155a;

            /* JADX INFO: renamed from: b */
            private boolean f156b;

            a(IAssetPackManagerMobileDataConfirmationCallback iAssetPackManagerMobileDataConfirmationCallback, boolean z) {
                this.f155a = iAssetPackManagerMobileDataConfirmationCallback;
                this.f156b = z;
            }

            @Override // java.lang.Runnable
            public final void run() {
                this.f155a.onMobileDataConfirmationResult(this.f156b);
            }
        }

        public c(IAssetPackManagerMobileDataConfirmationCallback iAssetPackManagerMobileDataConfirmationCallback) {
            this.f153a = iAssetPackManagerMobileDataConfirmationCallback;
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onSuccess(Integer num) {
            if (this.f153a != null) {
                new Handler(this.f154b).post(new a(this.f153a, num.intValue() == -1));
            }
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.a$d */
    private static class d implements OnCompleteListener {

        /* JADX INFO: renamed from: a */
        private IAssetPackManagerDownloadStatusCallback f157a;

        /* JADX INFO: renamed from: b */
        private Looper f158b = Looper.myLooper();

        /* JADX INFO: renamed from: c */
        private String f159c;

        public d(IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback, String str) {
            this.f157a = iAssetPackManagerDownloadStatusCallback;
            this.f159c = str;
        }

        /* JADX INFO: renamed from: a */
        private void m66a(String str, int i, int i2, long j) {
            new Handler(this.f158b).post(new a(Collections.singleton(this.f157a), str, i, j, i == 4 ? j : 0L, 0, i2));
        }

        public final void onComplete(Task task) {
            try {
                AssetPackStates assetPackStates = (AssetPackStates) task.getResult();
                Map mapPackStates = assetPackStates.packStates();
                if (mapPackStates.size() == 0) {
                    return;
                }
                for (AssetPackState assetPackState : mapPackStates.values()) {
                    if (assetPackState.errorCode() != 0 || assetPackState.status() == 4 || assetPackState.status() == 5 || assetPackState.status() == 0) {
                        m66a(assetPackState.name(), assetPackState.status(), assetPackState.errorCode(), assetPackStates.totalBytes());
                    } else {
                        C0048a.f139a.m51a(assetPackState.name(), this.f157a, this.f158b);
                    }
                }
            } catch (RuntimeExecutionException e) {
                m66a(this.f159c, 0, e.getErrorCode(), 0L);
            }
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.a$e */
    private static class e implements OnCompleteListener {

        /* JADX INFO: renamed from: a */
        private IAssetPackManagerStatusQueryCallback f160a;

        /* JADX INFO: renamed from: b */
        private Looper f161b = Looper.myLooper();

        /* JADX INFO: renamed from: c */
        private String[] f162c;

        /* JADX INFO: renamed from: com.unity3d.player.a$e$a */
        private static class a implements Runnable {

            /* JADX INFO: renamed from: a */
            private IAssetPackManagerStatusQueryCallback f163a;

            /* JADX INFO: renamed from: b */
            private long f164b;

            /* JADX INFO: renamed from: c */
            private String[] f165c;

            /* JADX INFO: renamed from: d */
            private int[] f166d;

            /* JADX INFO: renamed from: e */
            private int[] f167e;

            a(IAssetPackManagerStatusQueryCallback iAssetPackManagerStatusQueryCallback, long j, String[] strArr, int[] iArr, int[] iArr2) {
                this.f163a = iAssetPackManagerStatusQueryCallback;
                this.f164b = j;
                this.f165c = strArr;
                this.f166d = iArr;
                this.f167e = iArr2;
            }

            @Override // java.lang.Runnable
            public final void run() {
                this.f163a.onStatusResult(this.f164b, this.f165c, this.f166d, this.f167e);
            }
        }

        public e(IAssetPackManagerStatusQueryCallback iAssetPackManagerStatusQueryCallback, String[] strArr) {
            this.f160a = iAssetPackManagerStatusQueryCallback;
            this.f162c = strArr;
        }

        public final void onComplete(Task task) {
            if (this.f160a == null) {
                return;
            }
            int i = 0;
            try {
                AssetPackStates assetPackStates = (AssetPackStates) task.getResult();
                Map mapPackStates = assetPackStates.packStates();
                int size = mapPackStates.size();
                String[] strArr = new String[size];
                int[] iArr = new int[size];
                int[] iArr2 = new int[size];
                for (AssetPackState assetPackState : mapPackStates.values()) {
                    strArr[i] = assetPackState.name();
                    iArr[i] = assetPackState.status();
                    iArr2[i] = assetPackState.errorCode();
                    i++;
                }
                new Handler(this.f161b).post(new a(this.f160a, assetPackStates.totalBytes(), strArr, iArr, iArr2));
            } catch (RuntimeExecutionException e) {
                String message = e.getMessage();
                for (String str : this.f162c) {
                    if (message.contains(str)) {
                        new Handler(this.f161b).post(new a(this.f160a, 0L, new String[]{str}, new int[]{0}, new int[]{e.getErrorCode()}));
                        return;
                    }
                }
                String[] strArr2 = this.f162c;
                int[] iArr3 = new int[strArr2.length];
                int[] iArr4 = new int[strArr2.length];
                for (int i2 = 0; i2 < this.f162c.length; i2++) {
                    iArr3[i2] = 0;
                    iArr4[i2] = e.getErrorCode();
                }
                new Handler(this.f161b).post(new a(this.f160a, 0L, this.f162c, iArr3, iArr4));
            }
        }
    }

    private C0048a(Context context) {
        if (f139a != null) {
            throw new RuntimeException("AssetPackManagerWrapper should be created only once. Use getInstance() instead.");
        }
        this.f140b = AssetPackManagerFactory.getInstance(context);
        this.f141c = new HashSet();
    }

    /* JADX INFO: renamed from: a */
    public static InterfaceC0051d m48a(Context context) {
        if (f139a == null) {
            f139a = new C0048a(context);
        }
        return f139a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: a */
    public void m51a(String str, IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback, Looper looper) {
        synchronized (f139a) {
            if (this.f142d == null) {
                b bVar = new b(iAssetPackManagerDownloadStatusCallback, looper);
                this.f140b.registerListener(bVar);
                this.f142d = bVar;
            } else {
                ((b) this.f142d).m64a(iAssetPackManagerDownloadStatusCallback);
            }
            this.f141c.add(str);
            this.f140b.fetch(Collections.singletonList(str));
        }
    }

    /* JADX INFO: renamed from: c */
    static /* synthetic */ Object m53c(C0048a c0048a) {
        c0048a.f142d = null;
        return null;
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final Object mo54a(IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback) {
        b bVar = new b(this, iAssetPackManagerDownloadStatusCallback);
        this.f140b.registerListener(bVar);
        return bVar;
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final String mo55a(String str) {
        AssetPackLocation packLocation = this.f140b.getPackLocation(str);
        return packLocation == null ? com.sthjd.mylibrary.BuildConfig.FLAVOR : packLocation.assetsPath();
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final void mo56a(Activity activity, IAssetPackManagerMobileDataConfirmationCallback iAssetPackManagerMobileDataConfirmationCallback) {
        this.f140b.showCellularDataConfirmation(activity).addOnSuccessListener(new c(iAssetPackManagerMobileDataConfirmationCallback));
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final void mo57a(Object obj) {
        if (obj instanceof b) {
            this.f140b.unregisterListener((b) obj);
        }
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final void mo58a(String[] strArr) {
        this.f140b.cancel(Arrays.asList(strArr));
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final void mo59a(String[] strArr, IAssetPackManagerDownloadStatusCallback iAssetPackManagerDownloadStatusCallback) {
        for (String str : strArr) {
            this.f140b.getPackStates(Collections.singletonList(str)).addOnCompleteListener(new d(iAssetPackManagerDownloadStatusCallback, str));
        }
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: a */
    public final void mo60a(String[] strArr, IAssetPackManagerStatusQueryCallback iAssetPackManagerStatusQueryCallback) {
        this.f140b.getPackStates(Arrays.asList(strArr)).addOnCompleteListener(new e(iAssetPackManagerStatusQueryCallback, strArr));
    }

    @Override // com.unity3d.player.InterfaceC0051d
    /* JADX INFO: renamed from: b */
    public final void mo61b(String str) {
        this.f140b.removePack(str);
    }
}

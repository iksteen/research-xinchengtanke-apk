package com.unity3d.player;

import android.app.Activity;
import android.app.Fragment;
import android.app.FragmentTransaction;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;

/* JADX INFO: renamed from: com.unity3d.player.g */
/* JADX INFO: loaded from: classes.dex */
public final class FragmentC0054g extends Fragment {

    /* JADX INFO: renamed from: a */
    private final IPermissionRequestCallbacks f216a;

    /* JADX INFO: renamed from: b */
    private final Activity f217b;

    /* JADX INFO: renamed from: c */
    private final Looper f218c;

    /* JADX INFO: renamed from: com.unity3d.player.g$a */
    class a implements Runnable {

        /* JADX INFO: renamed from: b */
        private IPermissionRequestCallbacks f222b;

        /* JADX INFO: renamed from: c */
        private String f223c;

        /* JADX INFO: renamed from: d */
        private int f224d;

        /* JADX INFO: renamed from: e */
        private boolean f225e;

        a(IPermissionRequestCallbacks iPermissionRequestCallbacks, String str, int i, boolean z) {
            this.f222b = iPermissionRequestCallbacks;
            this.f223c = str;
            this.f224d = i;
            this.f225e = z;
        }

        @Override // java.lang.Runnable
        public final void run() {
            int i = this.f224d;
            if (i != -1) {
                if (i == 0) {
                    this.f222b.onPermissionGranted(this.f223c);
                }
            } else if (Build.VERSION.SDK_INT >= 30 || this.f225e) {
                this.f222b.onPermissionDenied(this.f223c);
            } else {
                this.f222b.onPermissionDeniedAndDontAskAgain(this.f223c);
            }
        }
    }

    public FragmentC0054g() {
        this.f216a = null;
        this.f217b = null;
        this.f218c = null;
    }

    public FragmentC0054g(Activity activity, IPermissionRequestCallbacks iPermissionRequestCallbacks) {
        this.f216a = iPermissionRequestCallbacks;
        this.f217b = activity;
        this.f218c = Looper.myLooper();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: a */
    public void m112a(String[] strArr) {
        for (String str : strArr) {
            this.f216a.onPermissionDenied(str);
        }
    }

    @Override // android.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestPermissions(getArguments().getStringArray("PermissionNames"), 96489);
    }

    @Override // android.app.Fragment
    public final void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        if (i != 96489) {
            return;
        }
        if (strArr.length != 0) {
            for (int i2 = 0; i2 < strArr.length && i2 < iArr.length; i2++) {
                IPermissionRequestCallbacks iPermissionRequestCallbacks = this.f216a;
                if (iPermissionRequestCallbacks != null && this.f217b != null && this.f218c != null) {
                    if (iPermissionRequestCallbacks instanceof UnityPermissions.ModalWaitForPermissionResponse) {
                        iPermissionRequestCallbacks.onPermissionGranted(strArr[i2]);
                    } else {
                        String str = strArr[i2] == null ? "<null>" : strArr[i2];
                        new Handler(this.f218c).post(new a(this.f216a, str, iArr[i2], this.f217b.shouldShowRequestPermissionRationale(str)));
                    }
                }
            }
        } else if (this.f216a != null && this.f217b != null && this.f218c != null) {
            final String[] stringArray = getArguments().getStringArray("PermissionNames");
            if (this.f216a instanceof UnityPermissions.ModalWaitForPermissionResponse) {
                m112a(stringArray);
            } else {
                new Handler(this.f218c).post(new Runnable() { // from class: com.unity3d.player.g.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        FragmentC0054g.this.m112a(stringArray);
                    }
                });
            }
        }
        FragmentTransaction fragmentTransactionBeginTransaction = getActivity().getFragmentManager().beginTransaction();
        fragmentTransactionBeginTransaction.remove(this);
        fragmentTransactionBeginTransaction.commit();
    }
}

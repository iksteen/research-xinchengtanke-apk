package com.unity3d.player;

import android.app.Activity;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;

/* JADX INFO: loaded from: classes.dex */
public class NetworkConnectivity extends Activity {

    /* JADX INFO: renamed from: d */
    private int f30d;

    /* JADX INFO: renamed from: e */
    private ConnectivityManager f31e;

    /* JADX INFO: renamed from: a */
    private final int f27a = 0;

    /* JADX INFO: renamed from: b */
    private final int f28b = 1;

    /* JADX INFO: renamed from: c */
    private final int f29c = 2;

    /* JADX INFO: renamed from: f */
    private final ConnectivityManager.NetworkCallback f32f = new ConnectivityManager.NetworkCallback() { // from class: com.unity3d.player.NetworkConnectivity.1
        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onAvailable(Network network) {
            super.onAvailable(network);
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
            NetworkConnectivity networkConnectivity;
            int i;
            super.onCapabilitiesChanged(network, networkCapabilities);
            if (networkCapabilities.hasTransport(0)) {
                networkConnectivity = NetworkConnectivity.this;
                i = 1;
            } else {
                networkConnectivity = NetworkConnectivity.this;
                i = 2;
            }
            networkConnectivity.f30d = i;
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onLost(Network network) {
            super.onLost(network);
            NetworkConnectivity.this.f30d = 0;
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onUnavailable() {
            super.onUnavailable();
            NetworkConnectivity.this.f30d = 0;
        }
    };

    public NetworkConnectivity(Context context) {
        this.f30d = 0;
        ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
        this.f31e = connectivityManager;
        connectivityManager.registerDefaultNetworkCallback(this.f32f);
        NetworkInfo activeNetworkInfo = this.f31e.getActiveNetworkInfo();
        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
            return;
        }
        this.f30d = activeNetworkInfo.getType() != 0 ? 2 : 1;
    }

    /* JADX INFO: renamed from: a */
    public final int m15a() {
        return this.f30d;
    }

    /* JADX INFO: renamed from: b */
    public final void m16b() {
        this.f31e.unregisterNetworkCallback(this.f32f);
    }
}

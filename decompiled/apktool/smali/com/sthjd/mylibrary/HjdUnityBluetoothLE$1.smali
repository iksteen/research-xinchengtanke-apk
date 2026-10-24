.class Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$1;
.super Landroid/content/BroadcastReceiver;
.source "HjdUnityBluetoothLE.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;


# direct methods
.method constructor <init>(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$1;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 79
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android.bluetooth.adapter.action.STATE_CHANGED"

    .line 81
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, -0x1

    const-string v0, "android.bluetooth.adapter.extra.STATE"

    .line 82
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    const/16 p2, 0xa

    if-eq p1, p2, :cond_1

    const/16 p2, 0xc

    if-eq p1, p2, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "AA~Initialized"

    .line 90
    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p1, "BB~Bluetooth LE Is Close"

    .line 98
    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendInitialized(Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

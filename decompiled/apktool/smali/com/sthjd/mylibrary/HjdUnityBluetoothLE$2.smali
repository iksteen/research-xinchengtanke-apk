.class Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$2;
.super Landroid/bluetooth/le/AdvertiseCallback;
.source "HjdUnityBluetoothLE.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->androidStartAdvertising([B)V
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

    .line 198
    iput-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$2;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-direct {p0}, Landroid/bluetooth/le/AdvertiseCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onStartFailure(I)V
    .locals 2

    .line 205
    invoke-super {p0, p1}, Landroid/bluetooth/le/AdvertiseCallback;->onStartFailure(I)V

    .line 206
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BB~Advertising onStartFailure: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingAdvert(Ljava/lang/String;)V

    return-void
.end method

.method public onStartSuccess(Landroid/bluetooth/le/AdvertiseSettings;)V
    .locals 1

    .line 200
    invoke-super {p0, p1}, Landroid/bluetooth/le/AdvertiseCallback;->onStartSuccess(Landroid/bluetooth/le/AdvertiseSettings;)V

    .line 201
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "AA~StartedAdvertising\uff0cdata="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$2;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    iget-object v0, v0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->msg:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->UnitySendStartingAdvert(Ljava/lang/String;)V

    return-void
.end method

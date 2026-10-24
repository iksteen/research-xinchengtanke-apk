.class Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$4;
.super Ljava/lang/Object;
.source "HjdUnityBluetoothLE.java"

# interfaces
.implements Landroid/bluetooth/BluetoothAdapter$LeScanCallback;


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

    .line 312
    iput-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$4;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLeScan(Landroid/bluetooth/BluetoothDevice;I[B)V
    .locals 0

    .line 315
    iget-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$4;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-static {p1, p3}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->access$000(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;[B)V

    return-void
.end method

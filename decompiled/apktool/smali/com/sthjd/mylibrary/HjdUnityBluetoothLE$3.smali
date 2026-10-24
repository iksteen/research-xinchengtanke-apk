.class Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;
.super Landroid/bluetooth/le/ScanCallback;
.source "HjdUnityBluetoothLE.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->api21Scan()V
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

    .line 260
    iput-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-direct {p0}, Landroid/bluetooth/le/ScanCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onBatchScanResults(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/bluetooth/le/ScanResult;",
            ">;)V"
        }
    .end annotation

    .line 266
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/bluetooth/le/ScanResult;

    .line 267
    iget-object v1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-virtual {v0}, Landroid/bluetooth/le/ScanResult;->getScanRecord()Landroid/bluetooth/le/ScanRecord;

    move-result-object v0

    invoke-virtual {v0}, Landroid/bluetooth/le/ScanRecord;->getBytes()[B

    move-result-object v0

    invoke-static {v1, v0}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->access$000(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;[B)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onScanResult(ILandroid/bluetooth/le/ScanResult;)V
    .locals 0

    .line 262
    iget-object p1, p0, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE$3;->this$0:Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;

    invoke-virtual {p2}, Landroid/bluetooth/le/ScanResult;->getScanRecord()Landroid/bluetooth/le/ScanRecord;

    move-result-object p2

    invoke-virtual {p2}, Landroid/bluetooth/le/ScanRecord;->getBytes()[B

    move-result-object p2

    invoke-static {p1, p2}, Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;->access$000(Lcom/sthjd/mylibrary/HjdUnityBluetoothLE;[B)V

    return-void
.end method

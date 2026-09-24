/* Ghidra 12.1.2 native pseudocode; RVA 0x6A591DC; Merger.MergeBoardQueue.Models.BoardQueueModel.EnqueueItemPendingSync; status ok */


/* WARNING: Possible PIC construction at 0x06b59398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b5939c) */
/* WARNING: Removing unreachable block (ram,0x06b593a0) */
/* WARNING: Removing unreachable block (ram,0x06b593e4) */
/* WARNING: Removing unreachable block (ram,0x06b59400) */
/* WARNING: Removing unreachable block (ram,0x06b5940c) */
/* WARNING: Removing unreachable block (ram,0x06b59424) */
/* WARNING: Removing unreachable block (ram,0x06b5942c) */
/* WARNING: Removing unreachable block (ram,0x06b59450) */
/* WARNING: Removing unreachable block (ram,0x06b59478) */
/* WARNING: Removing unreachable block (ram,0x06b594a0) */
/* WARNING: Removing unreachable block (ram,0x06b59480) */
/* WARNING: Removing unreachable block (ram,0x043219ac) */
/* WARNING: Removing unreachable block (ram,0x04321a38) */
/* WARNING: Removing unreachable block (ram,0x043219dc) */
/* WARNING: Removing unreachable block (ram,0x04321a08) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x043219f8) */
/* WARNING: Removing unreachable block (ram,0x06b59468) */

undefined8
Merger_MergeBoardQueue_Models_BoardQueueModel__EnqueueItemPendingSync
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_077c1668;
  if ((bRam0000000007e2a613 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1650);
    func_0x03280a18(PTR_DAT_077c1668);
    bRam0000000007e2a613 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06b59160(uVar3,param_2,param_4,param_5,param_3,0);
  Merger_MergeBoardQueue_Models_BoardQueueModel__Enqueue(param_1,uVar3);
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)PTR_DAT_077c1650;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar3;
        func_0x032809c4(puVar6,uVar3);
      }
      else {
        func_0x0414446c(lVar4,uVar3,
                        *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      return uVar3;
    }
  }
  func_0x03280cac();
  puVar2 = PTR_DAT_078303f8;
  if ((bRam0000000007e2a614 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830400);
    func_0x03280a18(PTR_DAT_07830408);
    func_0x03280a18(PTR_DAT_07830380);
    func_0x03280a18(PTR_DAT_07830410);
    func_0x03280a18(PTR_DAT_07830340);
    func_0x03280a18(PTR_DAT_0777d4c8);
    func_0x03280a18(PTR_DAT_07830418);
    func_0x03280a18(PTR_DAT_07830420);
    func_0x03280a18(PTR_DAT_078303f8);
    bRam0000000007e2a614 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
  return uVar3;
}


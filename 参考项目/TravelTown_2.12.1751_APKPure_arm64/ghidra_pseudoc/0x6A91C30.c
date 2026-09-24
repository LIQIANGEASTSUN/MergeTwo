/* Ghidra 12.1.2 native pseudocode; RVA 0x6A91C30; Merger.MergeBoard.Handlers.CollectableItemsGrantProcessor.PlayFlyAnimationForCollectableItems; status ok */


void Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__PlayFlyAnimationForCollectableItems
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [16];
  
  if ((bRam0000000007e2a7f1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772a90);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_07772a98);
    func_0x03280a18(PTR_DAT_07775188);
    bRam0000000007e2a7f1 = 1;
  }
  if ((((param_4 != 0) &&
       (lVar4 = Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__GetTransformAtPosition
                          (param_3,*(undefined4 *)(param_4 + 0x28)), lVar4 != 0)) &&
      (lVar4 = func_0x03cec8b4(lVar4,*(undefined8 *)PTR_DAT_0774e930), lVar4 != 0)) &&
     ((lVar4 = func_0x06fdbe94(lVar4,0), lVar4 != 0 &&
      (uVar8 = func_0x06fea928(lVar4,0), puVar3 = PTR_DAT_07775188, puVar2 = PTR_DAT_07772a98,
      puVar1 = PTR_DAT_07772a90, param_5 != 0)))) {
    uVar5 = func_0x06b2b4c8(param_5,0);
    if ((uVar5 & 1) != 0) {
      func_0x06b2ca88(param_5,*(undefined8 *)(param_4 + 0x30),0);
    }
    uVar8 = func_0x062168d8(uVar8,param_2,param_5,0);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x067f5dac(uVar6,uVar8,0,0);
    auStack_60 = func_0x0578e2a8(0);
    uVar8 = func_0x0579043c(auStack_60,0);
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x0686b6dc(uVar7,param_5,0x14,uVar6,0,0,0,0,0,0,0,0,uVar8,0);
    func_0x03cc6bd4(param_3,uVar7,*(undefined8 *)puVar1);
    return;
  }
  func_0x03280cac();
  return;
}


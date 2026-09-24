/* Ghidra 12.1.2 native pseudocode; RVA 0x6A855D8; Merger.MergeBoard.Logic.State.Updaters.IdComponentStateUpdater.UpdateFromState; status ok */


undefined4 *
Merger_MergeBoard_Logic_State_Updaters_IdComponentStateUpdater__UpdateFromState
          (undefined4 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((bRam0000000007e2a78e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_07801de0);
    func_0x03280a18(PTR_DAT_0777a4a0);
    param_1 = (undefined4 *)func_0x03280a18(PTR_DAT_0774e558);
    bRam0000000007e2a78e = 1;
  }
  puVar3 = PTR_DAT_07801de0;
  puVar1 = PTR_DAT_0774e558;
  if (param_3 != 0) {
    *param_2 = *(undefined8 *)(param_3 + 0x10);
    func_0x032809c4(param_2);
    uVar4 = func_0x055f7aac(*(undefined8 *)(param_3 + 0x18),0);
    if ((uVar4 & 1) == 0) {
      param_2[1] = *(undefined8 *)(param_3 + 0x18);
      func_0x032809c4();
    }
    puVar2 = PTR_DAT_0774f758;
    uVar9 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar9 = func_0x057a51c4(uVar9,0);
    lVar8 = *(long *)puVar2;
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
    }
    param_1 = (undefined4 *)func_0x057cd02c(uVar9,uVar10,0);
    if (((ulong)param_1 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      uVar9 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar9 = func_0x057a51c4(uVar9,0);
      lVar8 = *(long *)puVar2;
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c(lVar8);
      }
      plVar5 = (long *)func_0x057cabac(uVar9,uVar10,0);
      if (plVar5 == (long *)0x0) {
        func_0x03280cac();
LAB_06b8577c:
        puVar6 = (undefined4 *)func_0x03281048();
        puVar1 = PTR_DAT_07831cb0;
        if ((bRam0000000007e2a78f & 1) == 0) {
          func_0x03280a18(PTR_DAT_07831cb0);
          bRam0000000007e2a78f = 1;
        }
        uVar9 = *(undefined8 *)puVar1;
        return puVar6;
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_0777a4a0 + 0x40))
      goto LAB_06b8577c;
      param_1 = (undefined4 *)func_0x03280b98();
      uVar7 = *param_1;
    }
    *(undefined4 *)(param_2 + 4) = uVar7;
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    param_2[3] = *(undefined8 *)(param_3 + 0x30);
    param_2[2] = uVar9;
    param_2[5] = *(undefined8 *)(param_3 + 0x38);
  }
  return param_1;
}


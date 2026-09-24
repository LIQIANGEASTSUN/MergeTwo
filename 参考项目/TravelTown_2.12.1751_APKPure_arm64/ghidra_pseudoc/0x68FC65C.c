/* Ghidra 12.1.2 native pseudocode; RVA 0x68FC65C; MergeEngine.ECS.Components.Items.IdComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_IdComponent__LoadComponent(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e298a2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_07801de0);
    func_0x03280a18(PTR_DAT_0777a4a0);
    func_0x03280a18(PTR_DAT_0774e558);
    bRam0000000007e298a2 = 1;
  }
  puVar3 = PTR_DAT_07801de0;
  puVar1 = PTR_DAT_0774e558;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    func_0x032809c4();
    uVar4 = func_0x055f7aac(*(undefined8 *)(param_2 + 0x18),0);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
      func_0x032809c4();
    }
    puVar2 = PTR_DAT_0774f758;
    uVar10 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x057a51c4(uVar10,0);
    lVar8 = *(long *)puVar2;
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
    }
    uVar4 = func_0x057cd02c(uVar10,uVar11,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = 1;
LAB_069fc7d4:
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      auVar12 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0x28),
                         *(undefined1 (*) [16])(param_2 + 0x28),8,1);
      *(long *)(param_1 + 0x48) = auVar12._8_8_;
      *(long *)(param_1 + 0x40) = auVar12._0_8_;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x38);
      return;
    }
    uVar10 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x057a51c4(uVar10,0);
    lVar8 = *(long *)puVar2;
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
    }
    plVar5 = (long *)func_0x057cabac(uVar10,uVar11,0);
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(*(long *)PTR_DAT_0777a4a0 + 0x40)) {
        puVar6 = (undefined4 *)func_0x03280b98();
        uVar7 = *puVar6;
        goto LAB_069fc7d4;
      }
      goto LAB_069fc804;
    }
  }
  func_0x03280cac();
LAB_069fc804:
  lVar8 = func_0x03281048();
  if ((bRam0000000007e298a3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078266d8);
    bRam0000000007e298a3 = 1;
  }
  if (*(long *)(lVar8 + 0x28) != 0) {
    *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x10) = *(undefined8 *)(lVar8 + 0x30);
    func_0x032809c4();
    if (*(long *)(lVar8 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x18) = *(undefined8 *)(lVar8 + 0x38);
      func_0x032809c4();
      lVar9 = *(long *)(lVar8 + 0x28);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar8 + 0x58);
        auVar12 = NEON_ext(*(undefined1 (*) [16])(lVar8 + 0x40),*(undefined1 (*) [16])(lVar8 + 0x40)
                           ,8,1);
        *(long *)(lVar9 + 0x30) = auVar12._8_8_;
        *(long *)(lVar9 + 0x28) = auVar12._0_8_;
        *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar8 + 0x50);
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}


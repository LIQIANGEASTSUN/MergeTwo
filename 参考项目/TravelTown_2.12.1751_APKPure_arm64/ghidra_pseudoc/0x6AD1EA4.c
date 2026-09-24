/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1EA4; Merger.MergeBoard.PowerBoost.Models.PowerBoostModel.SetPowerBoostMode; status ok */


/* WARNING: Possible PIC construction at 0x06bd2050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bd2054) */
/* WARNING: Removing unreachable block (ram,0x06bd2058) */
/* WARNING: Removing unreachable block (ram,0x06bd2064) */
/* WARNING: Removing unreachable block (ram,0x06bd2084) */
/* WARNING: Removing unreachable block (ram,0x06bd20ec) */
/* WARNING: Removing unreachable block (ram,0x06bd208c) */
/* WARNING: Removing unreachable block (ram,0x06bd20d8) */
/* WARNING: Removing unreachable block (ram,0x06bd207c) */
/* WARNING: Removing unreachable block (ram,0x06bd20dc) */

void Merger_MergeBoard_PowerBoost_Models_PowerBoostModel__SetPowerBoostMode
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x19;
  long lVar8;
  undefined8 unaff_x30;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uStack_60;
  
  puVar1 = PTR_DAT_0774ee08;
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000007e2aa96 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_0777d4c8);
    bRam0000000007e2aa96 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar3 = func_0x05797438(param_2,1,0);
  if (lVar8 == 0) {
    auVar9 = func_0x03280cac();
    puVar1 = PTR_DAT_0774ee08;
    uStack_60 = 0x6bd1f3c;
    if ((bRam0000000007e2aa97 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774ee08);
      func_0x03280a18(PTR_DAT_07774500);
      bRam0000000007e2aa97 = 1;
    }
    lVar8 = *(long *)(auVar9._0_8_ + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x05797438(auVar9._8_8_ & 0xffffffff,1,0);
    auVar10._8_4_ = uVar3;
    auVar10._0_8_ = lVar8;
    if (lVar8 == 0) {
      func_0x03280cac();
      puVar1 = PTR_DAT_07834198;
      if ((bRam0000000007e2aa98 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077df548);
        func_0x03280a18(PTR_DAT_077df770);
        func_0x03280a18(PTR_DAT_077df578);
        func_0x03280a18(PTR_DAT_078341a0);
        func_0x03280a18(PTR_DAT_07834198);
        bRam0000000007e2aa98 = 1;
      }
      func_0x03280ca0(*(undefined8 *)puVar1);
      return;
    }
    uVar6 = *(undefined8 *)PTR_DAT_07774500;
    puVar2 = &stack0xffffffffffffffd0;
  }
  else {
    param_2 = *(ulong *)PTR_DAT_0777d4c8;
    puVar2 = &stack0xffffffffffffffe0;
    plVar4 = (long *)func_0x03c56b54(*(undefined8 *)
                                      (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(lVar8 + 0x20),uVar3,*(undefined8 *)(*plVar4 + 0x1c0)
                        );
      if ((uVar5 & 1) != 0) {
        return;
      }
      *(undefined4 *)(lVar8 + 0x20) = uVar3;
      puVar2 = (undefined1 *)register0x00000008;
      param_2 = unaff_x19;
      goto LAB_04d0e7f0;
    }
    uStack_60 = 0x4321828;
    auVar10 = func_0x03280cac();
  }
  lVar8 = auVar10._0_8_;
  *(int *)(lVar8 + 0x20) = auVar10._8_4_;
  unaff_x30 = uStack_60;
LAB_04d0e7f0:
  *(undefined8 *)(puVar2 + -0x10) = unaff_x30;
  *(ulong *)(puVar2 + -8) = param_2;
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))
              (*(undefined8 *)(lVar7 + 0x40),*(undefined4 *)(lVar8 + 0x20),
               *(undefined8 *)(lVar7 + 0x28));
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    return;
  }
  return;
}


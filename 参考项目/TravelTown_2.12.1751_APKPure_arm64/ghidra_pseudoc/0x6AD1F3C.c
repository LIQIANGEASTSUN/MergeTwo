/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1F3C; Merger.MergeBoard.PowerBoost.Models.PowerBoostModel.SetPowerBoostModeAndNotify; status ok */


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

void Merger_MergeBoard_PowerBoost_Models_PowerBoostModel__SetPowerBoostModeAndNotify
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0774ee08;
  if ((bRam0000000007e2aa97 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07774500);
    bRam0000000007e2aa97 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar2 = func_0x05797438(param_2,1,0);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_07774500;
    *(undefined4 *)(lVar5 + 0x20) = uVar2;
    lVar4 = *(long *)(lVar5 + 0x10);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(lVar5 + 0x20),
                 *(undefined8 *)(lVar4 + 0x28));
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    return;
  }
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


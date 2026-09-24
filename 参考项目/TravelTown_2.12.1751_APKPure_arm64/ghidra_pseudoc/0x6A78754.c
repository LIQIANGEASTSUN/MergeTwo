/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78754; Merger.MergeBoard.Systems.TimeLockSystem.UpdateCanBeUnlockedFlag; status ok */

void Merger_MergeBoard_Systems_TimeLockSystem__UpdateCanBeUnlockedFlag
               (undefined8 param_1,double *param_2,long param_3)

{
  ulong uVar1;
  double *extraout_x1;
  bool bVar2;
  float fVar3;
  double dVar4;
  
  if ((bRam0000000007e2a713 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831748);
    bRam0000000007e2a713 = 1;
  }
  if (param_3 != 0) {
    uVar1 = func_0x053bbf78(param_3,*(undefined4 *)((long)param_2 + 0x14),
                            *(undefined8 *)PTR_DAT_07831748);
    if (((uVar1 & 1) == 0) && (*(char *)(param_2 + 3) == '\0')) {
      bVar2 = 0.0 < *param_2;
    }
    else {
      bVar2 = false;
    }
    *(bool *)((long)param_2 + 0x19) = bVar2;
    return;
  }
  fVar3 = (float)func_0x03280cac();
  if ((*(char *)(extraout_x1 + 3) != '\0') &&
     (dVar4 = *extraout_x1, *extraout_x1 = dVar4 - (double)fVar3, dVar4 - (double)fVar3 <= 0.0)) {
    *extraout_x1 = 0.0;
    *(undefined1 *)(extraout_x1 + 3) = 0;
  }
  return;
}


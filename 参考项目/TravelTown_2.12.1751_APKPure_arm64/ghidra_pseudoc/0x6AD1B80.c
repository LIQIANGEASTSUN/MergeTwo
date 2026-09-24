/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1B80; Merger.MergeBoard.PowerBoost.Providers.MergeBoardPowerBoostDataProvider.GetPlayableBoosts; status ok */


void Merger_MergeBoard_PowerBoost_Providers_MergeBoardPowerBoostDataProvider__GetPlayableBoosts
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000007e2aa92 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833ed0);
    bRam0000000007e2aa92 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07833ed0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_06bd1c0c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07833ed0,9);
LAB_06bd1c0c:
                    /* WARNING: Could not recover jumptable at 0x06bd1c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1054; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.IsBoostLocallyUnlocked; status ok */


bool Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__IsBoostLocallyUnlocked
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ushort auStack_24 [2];
  
  if ((bRam0000000007e2aa87 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0779bc18);
    func_0x03280a18(PTR_DAT_077512a8);
    func_0x03280a18(PTR_DAT_07751420);
    bRam0000000007e2aa87 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    func_0x06bd0950(param_1);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
      return false;
    }
  }
  puVar1 = PTR_DAT_07751420;
  bVar2 = false;
  if (*(long *)(lVar4 + 0x18) != 0) {
    uVar3 = func_0x0411a010(*(long *)(lVar4 + 0x18),param_2,*(undefined8 *)PTR_DAT_0779bc18);
    auStack_24[0] = 0;
    func_0x04377614(auStack_24,uVar3 & 1,*(undefined8 *)puVar1);
    bVar2 = 0xff < auStack_24[0];
  }
  return bVar2;
}


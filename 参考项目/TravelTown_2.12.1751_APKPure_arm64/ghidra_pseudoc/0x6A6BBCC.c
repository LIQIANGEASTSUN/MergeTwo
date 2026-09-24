/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6BBCC; Merger.MergeBoard.Systems.InteractionSystem.IsItemEligibleForConsume; status ok */


ulong Merger_MergeBoard_Systems_InteractionSystem__IsItemEligibleForConsume
                (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long alStack_50 [6];
  
  if ((bRam0000000007e2a6c9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_077cc5a8);
    bRam0000000007e2a6c9 = 1;
  }
  if ((param_2 != 0) &&
     (func_0x03d1b250(alStack_50,param_2,*(undefined8 *)PTR_DAT_0777a488), param_3 != 0)) {
    uVar2 = func_0x05492898(param_3,*(undefined8 *)PTR_DAT_077cc5a8);
    if (alStack_50[0] != 0) {
      uVar3 = func_0x055f6a38(alStack_50[0],uVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = func_0x06b868e4(param_2,0);
        uVar1 = uVar1 ^ 1;
      }
      return (ulong)(uVar1 & 1);
    }
  }
  uVar3 = func_0x03280cac();
  return uVar3;
}


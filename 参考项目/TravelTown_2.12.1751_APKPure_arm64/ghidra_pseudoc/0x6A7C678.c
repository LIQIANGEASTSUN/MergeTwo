/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7C678; Merger.MergeBoard.Models.ActiveTilesModel.SetActiveTiles; status ok */


void Merger_MergeBoard_Models_ActiveTilesModel__SetActiveTiles(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000007e2a736 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c14a8);
    func_0x03280a18(PTR_DAT_0774e910);
    bRam0000000007e2a736 = 1;
  }
  puVar1 = PTR_DAT_077c14a8;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e910);
    func_0x053b73b8(uVar2,param_2,*(undefined8 *)puVar1);
  }
  if (param_1 == 0) {
    func_0x03280cac();
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    func_0x032809c4((undefined8 *)(param_1 + 0x18),uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06b7c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}


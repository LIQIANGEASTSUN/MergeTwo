/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9F5F8; Merger.MergeBoard.CoinMultipliers.Systems.CoinMultiplierApplySystem.ProcessComponent; status ok */


void Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessComponent
               (long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000007e2a885 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078328a0);
    func_0x03280a18(PTR_DAT_077fd5f8);
    bRam0000000007e2a885 = 1;
  }
  uStack_54 = 0;
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_077fd5f8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06b9f6a4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077fd5f8,0);
LAB_06b9f6a4:
    uVar3 = (*(code *)*puVar1)(plVar5,param_4,&uStack_54,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (param_3[1] != 0) {
      *(undefined4 *)(param_3[1] + 0x14) = uStack_54;
      uStack_40 = param_3[2];
      uStack_48 = param_3[1];
      uStack_50 = *param_3;
      if (param_2 != 0) {
        func_0x03d1c94c(param_2,&uStack_50,*(undefined8 *)PTR_DAT_078328a0);
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}


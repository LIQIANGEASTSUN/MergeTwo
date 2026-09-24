/* Ghidra 12.1.2 native pseudocode; RVA 0x69035EC; MergeEngine.ECS.Components.Board.BoardItemCountComponent.UpdateItemToUnlocked; status ok */


ulong MergeEngine_ECS_Components_Board_BoardItemCountComponent__UpdateItemToUnlocked
                (ulong param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  if ((bRam0000000007e29911 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29911 = 1;
  }
  puVar1 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    lVar8 = *(long *)(param_1 + 0x30);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06a036a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a036a0:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar8 != 0) {
      uVar6 = func_0x04fb27e0(lVar8,uVar4,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar6 & 1) == 0) {
        return uVar6;
      }
      lVar5 = *param_2;
      lVar8 = *(long *)(param_1 + 0x38);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06a0372c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06a0372c:
      uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (lVar8 != 0) {
        iVar2 = func_0x04fb256c(lVar8,uVar4,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar8,uVar4,iVar2 + 1,*(undefined8 *)PTR_DAT_0774e618);
        lVar5 = *(long *)(param_1 + 0x20);
        uVar6 = param_1;
        if (lVar5 != 0) {
          uVar6 = (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),param_2,*(undefined8 *)(lVar5 + 0x28));
          return uVar6;
        }
        return uVar6;
      }
    }
  }
  lVar5 = func_0x03280cac();
  return (ulong)*(uint *)(lVar5 + 0x48);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6903448; MergeEngine.ECS.Components.Board.BoardItemCountComponent.UpdateItemToLocked; status ok */


ulong MergeEngine_ECS_Components_Board_BoardItemCountComponent__UpdateItemToLocked
                (long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  long *plVar6;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  if ((bRam0000000007e29910 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29910 = 1;
  }
  puVar1 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    lVar10 = *(long *)(param_1 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a034fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a034fc:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar10 != 0) {
      uVar8 = func_0x04fb27e0(lVar10,uVar5,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar8 & 1) == 0) {
        return uVar8;
      }
      lVar7 = *param_2;
      lVar10 = *(long *)(param_1 + 0x38);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06a03588;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06a03588:
      uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
      if (lVar10 != 0) {
        iVar2 = func_0x04fb256c(lVar10,uVar5,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar10,uVar5,iVar2 + -1,*(undefined8 *)PTR_DAT_0774e618);
        param_2 = unaff_x19;
        param_1 = unaff_x20;
        goto MergeEngine_ECS_Components_Board_BoardItemCountComponent__InvokeChanged;
      }
    }
  }
  auVar11 = func_0x03280cac();
  plVar6 = auVar11._8_8_;
  if ((bRam0000000007e29911 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29911 = 1;
  }
  puVar1 = PTR_DAT_07779820;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    lVar10 = *(long *)(auVar11._0_8_ + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a036a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_06a036a0:
    uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if (lVar10 != 0) {
      uVar8 = func_0x04fb27e0(lVar10,uVar5,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar8 & 1) == 0) {
        return uVar8;
      }
      lVar7 = *plVar6;
      lVar10 = *(long *)(auVar11._0_8_ + 0x38);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06a0372c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0);
LAB_06a0372c:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if (lVar10 != 0) {
        iVar2 = func_0x04fb256c(lVar10,uVar5,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar10,uVar5,iVar2 + 1,*(undefined8 *)PTR_DAT_0774e618);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x30 = 0x6a035ec;
MergeEngine_ECS_Components_Board_BoardItemCountComponent__InvokeChanged:
        uVar3 = auVar11._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
        *(long *)((long)register0x00000008 + -0x10) = param_1;
        *(long **)((long)register0x00000008 + -8) = param_2;
        lVar7 = *(long *)(uVar3 + 0x20);
        uVar8 = uVar3;
        if (lVar7 != 0) {
          uVar8 = (**(code **)(lVar7 + 0x18))
                            (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        lVar7 = *(long *)(uVar3 + 0x28);
        if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (**(code **)(lVar7 + 0x18))
                            (*(undefined8 *)(lVar7 + 0x40),auVar11._8_8_,
                             *(undefined8 *)(lVar7 + 0x28));
          return uVar8;
        }
        return uVar8;
      }
    }
  }
  lVar7 = func_0x03280cac();
  return (ulong)*(uint *)(lVar7 + 0x48);
}


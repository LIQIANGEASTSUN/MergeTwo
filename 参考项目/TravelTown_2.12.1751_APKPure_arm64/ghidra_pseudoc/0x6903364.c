/* Ghidra 12.1.2 native pseudocode; RVA 0x6903364; MergeEngine.ECS.Components.Board.BoardItemCountComponent.GetUnboxedItemsCount; status ok */


ulong MergeEngine_ECS_Components_Board_BoardItemCountComponent__GetUnboxedItemsCount
                (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_60 [2];
  undefined1 auStack_30 [12];
  uint uStack_24;
  
  puVar2 = (undefined8 *)auStack_30;
  if ((bRam0000000007e2990f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990f = 1;
  }
  uStack_24 = 0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    lVar12 = *(long *)(param_1 + 0x40);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06a03404;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a03404:
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    param_1 = 0;
    if (lVar12 != 0) {
      func_0x04fb40cc(lVar12,uVar6,&uStack_24,*(undefined8 *)PTR_DAT_0774e668);
      return (ulong)uStack_24;
    }
  }
  auVar14 = func_0x03280cac();
  plVar11 = auVar14._8_8_;
  lVar8 = auVar14._0_8_;
  auStack_60[0] = 0x6a03448;
  if ((bRam0000000007e29910 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29910 = 1;
  }
  puVar1 = PTR_DAT_07779820;
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    lVar13 = *(long *)(lVar8 + 0x30);
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06a034fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_06a034fc:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar13 != 0) {
      uVar9 = func_0x04fb27e0(lVar13,uVar6,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar9 & 1) == 0) {
        return uVar9;
      }
      lVar12 = *plVar11;
      lVar13 = *(long *)(lVar8 + 0x38);
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06a03588;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar1,0);
LAB_06a03588:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (lVar13 != 0) {
        iVar3 = func_0x04fb256c(lVar13,uVar6,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar13,uVar6,iVar3 + -1,*(undefined8 *)PTR_DAT_0774e618);
        plVar11 = param_2;
        lVar8 = param_1;
        uVar6 = auStack_60[0];
        goto LAB_06a02d70;
      }
    }
  }
  auVar14 = func_0x03280cac();
  plVar7 = auVar14._8_8_;
  if ((bRam0000000007e29911 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29911 = 1;
  }
  puVar1 = PTR_DAT_07779820;
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    lVar13 = *(long *)(auVar14._0_8_ + 0x30);
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06a036a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06a036a0:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if (lVar13 != 0) {
      uVar9 = func_0x04fb27e0(lVar13,uVar6,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar9 & 1) == 0) {
        return uVar9;
      }
      lVar12 = *plVar7;
      lVar13 = *(long *)(auVar14._0_8_ + 0x38);
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06a0372c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar1,0);
LAB_06a0372c:
      uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      if (lVar13 != 0) {
        iVar3 = func_0x04fb256c(lVar13,uVar6,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar13,uVar6,iVar3 + 1,*(undefined8 *)PTR_DAT_0774e618);
        puVar2 = auStack_60;
        uVar6 = 0x6a035ec;
LAB_06a02d70:
        uVar4 = auVar14._0_8_;
        *(undefined8 *)((long)puVar2 + -0x20) = uVar6;
        *(long *)((long)puVar2 + -0x10) = lVar8;
        *(long **)((long)puVar2 + -8) = plVar11;
        lVar8 = *(long *)(uVar4 + 0x20);
        uVar9 = uVar4;
        if (lVar8 != 0) {
          uVar9 = (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        }
        lVar8 = *(long *)(uVar4 + 0x28);
        if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),auVar14._8_8_,
                             *(undefined8 *)(lVar8 + 0x28));
          return uVar9;
        }
        return uVar9;
      }
    }
  }
  lVar8 = func_0x03280cac();
  return (ulong)*(uint *)(lVar8 + 0x48);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6903280; MergeEngine.ECS.Components.Board.BoardItemCountComponent.GetUnlockedItemsCount; status ok */


ulong MergeEngine_ECS_Components_Board_BoardItemCountComponent__GetUnlockedItemsCount
                (long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 auStack_90 [2];
  undefined1 auStack_60 [12];
  uint uStack_54;
  code *pcStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  uint uStack_24;
  
  if ((bRam0000000007e2990e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990e = 1;
  }
  uStack_24 = 0;
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    lVar12 = *(long *)(param_1 + 0x38);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a03320;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a03320:
    uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    param_1 = 0;
    if (lVar12 != 0) {
      func_0x04fb40cc(lVar12,uVar7,&uStack_24,*(undefined8 *)PTR_DAT_0774e668);
      return (ulong)uStack_24;
    }
  }
  auVar14 = func_0x03280cac();
  plVar8 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  puVar3 = (undefined8 *)auStack_60;
  pcStack_50 = MergeEngine_ECS_Components_Board_BoardItemCountComponent__GetUnboxedItemsCount;
  uStack_48 = 0x7e29000;
  lStack_40 = param_1;
  plStack_38 = param_2;
  if ((bRam0000000007e2990f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990f = 1;
  }
  uStack_54 = 0;
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    lVar13 = *(long *)(lVar9 + 0x40);
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a03404;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_06a03404:
    uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    lVar9 = 0;
    if (lVar13 != 0) {
      func_0x04fb40cc(lVar13,uVar7,&uStack_54,*(undefined8 *)PTR_DAT_0774e668);
      return (ulong)uStack_54;
    }
  }
  auVar1._8_8_ = plVar8;
  auVar1._0_8_ = lVar9;
  auVar14 = func_0x03280cac();
  plVar8 = auVar14._8_8_;
  auStack_90[0] = 0x6a03448;
  if ((bRam0000000007e29910 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29910 = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    lVar12 = *(long *)(auVar14._0_8_ + 0x30);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a034fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_06a034fc:
    uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (lVar12 != 0) {
      uVar10 = func_0x04fb27e0(lVar12,uVar7,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar10 & 1) == 0) {
        return uVar10;
      }
      lVar9 = *plVar8;
      lVar12 = *(long *)(auVar14._0_8_ + 0x38);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06a03588;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar2,0);
LAB_06a03588:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if (lVar12 != 0) {
        iVar4 = func_0x04fb256c(lVar12,uVar7,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar12,uVar7,iVar4 + -1,*(undefined8 *)PTR_DAT_0774e618);
        uVar7 = auStack_90[0];
        auVar15 = auVar14;
        auVar14 = auVar1;
        goto LAB_06a02d70;
      }
    }
  }
  auVar15 = func_0x03280cac();
  plVar8 = auVar15._8_8_;
  if ((bRam0000000007e29911 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29911 = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    lVar12 = *(long *)(auVar15._0_8_ + 0x30);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a036a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_06a036a0:
    uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (lVar12 != 0) {
      uVar10 = func_0x04fb27e0(lVar12,uVar7,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar10 & 1) == 0) {
        return uVar10;
      }
      lVar9 = *plVar8;
      lVar12 = *(long *)(auVar15._0_8_ + 0x38);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06a0372c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar2,0);
LAB_06a0372c:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if (lVar12 != 0) {
        iVar4 = func_0x04fb256c(lVar12,uVar7,*(undefined8 *)PTR_DAT_0777a238);
        func_0x04fb25d8(lVar12,uVar7,iVar4 + 1,*(undefined8 *)PTR_DAT_0774e618);
        puVar3 = auStack_90;
        uVar7 = 0x6a035ec;
LAB_06a02d70:
        uVar5 = auVar15._0_8_;
        *(undefined8 *)((long)puVar3 + -0x20) = uVar7;
        *(undefined1 (*) [16])((long)puVar3 + -0x10) = auVar14;
        lVar9 = *(long *)(uVar5 + 0x20);
        uVar10 = uVar5;
        if (lVar9 != 0) {
          uVar10 = (**(code **)(lVar9 + 0x18))
                             (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        }
        lVar9 = *(long *)(uVar5 + 0x28);
        if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (**(code **)(lVar9 + 0x18))
                             (*(undefined8 *)(lVar9 + 0x40),auVar15._8_8_,
                              *(undefined8 *)(lVar9 + 0x28));
          return uVar10;
        }
        return uVar10;
      }
    }
  }
  lVar9 = func_0x03280cac();
  return (ulong)*(uint *)(lVar9 + 0x48);
}


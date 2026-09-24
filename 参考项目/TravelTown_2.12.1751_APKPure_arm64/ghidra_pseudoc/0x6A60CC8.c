/* Ghidra 12.1.2 native pseudocode; RVA 0x6A60CC8; Merger.MergeBoardSellItemCapability.Logic.SellItemEligibilityValidator.CanBeSold; status ok */


ulong Merger_MergeBoardSellItemCapability_Logic_SellItemEligibilityValidator__CanBeSold
                (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  undefined8 auStack_80 [6];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007e2a664 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830748);
    func_0x03280a18(PTR_DAT_0777a558);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077c8e78);
    bRam0000000007e2a664 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (param_2 == 0) {
    return 0;
  }
  func_0x03d1b250(auStack_80,param_2,*(undefined8 *)PTR_DAT_0777a488);
  puVar2 = PTR_DAT_07830748;
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_06b60dd8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,9);
LAB_06b60dd8:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,auStack_80[0],puVar3[1]);
    uVar6 = func_0x03d1bff8(param_2,*(undefined8 *)puVar2);
    if ((((uVar6 & 1) != 0) &&
        (uVar6 = func_0x03d1fd24(param_2,&uStack_50,*(undefined8 *)PTR_DAT_0777a558),
        (uVar6 & 1) != 0)) && ((char)uStack_48 != '\0')) {
      return 0;
    }
    puVar2 = PTR_DAT_0777e548;
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_06b60e7c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777e548,3);
LAB_06b60e7c:
      lVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x10) == '\0') {
          return 0;
        }
        uVar6 = func_0x06b868e4(param_2,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        plVar8 = *(long **)(param_1 + 0x10);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c8e78) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06b60f18;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c8e78,0);
LAB_06b60f18:
          lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
          if (lVar4 != 0) {
            lVar5 = *plVar9;
            iVar1 = *(int *)(lVar4 + 0x20);
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                  goto LAB_06b60f7c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,3);
LAB_06b60f7c:
            lVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
            if (lVar4 != 0) {
              return (ulong)(*(int *)(lVar4 + 0x1c) <= iVar1);
            }
          }
        }
      }
    }
  }
  uVar6 = func_0x03280cac();
  return uVar6;
}


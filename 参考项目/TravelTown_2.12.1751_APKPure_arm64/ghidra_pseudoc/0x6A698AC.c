/* Ghidra 12.1.2 native pseudocode; RVA 0x6A698AC; Merger.MergeBoard.Systems.ImmediateToolsConversionSystem.RemoveImmediateToolBehavior; status ok */


ulong Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__RemoveImmediateToolBehavior
                (long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *extraout_x1;
  long *extraout_x1_00;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e2a6bb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a4e8);
    func_0x03280a18(PTR_DAT_07830e10);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a6bb = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_2 != 0) {
    uVar4 = func_0x03d1eef4(param_2,&uStack_58,*(undefined8 *)PTR_DAT_07830e10);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar9 = *param_3;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_06b699ac;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,9);
LAB_06b699ac:
      uVar9 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar1 = *(undefined4 *)(param_3 + 4);
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c16b0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06b69a20;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c16b0,0);
LAB_06b69a20:
        lVar6 = (*(code *)*puVar5)(plVar8,uVar9,param_4,uVar1,0,0,puVar5[1]);
        if (lVar6 != 0) {
          uVar4 = func_0x03d1eb8c(lVar6,&uStack_90,*(undefined8 *)PTR_DAT_0777a4e8);
          if ((uVar4 & 1) != 0) {
            uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_48);
          }
          uVar4 = func_0x06014fb4(param_2,lVar6,0);
          return uVar4;
        }
      }
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a6b8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b8 = 1;
  }
  puVar2 = PTR_DAT_0777e548;
  if (extraout_x1 != (long *)0x0) {
    lVar6 = *extraout_x1;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b1c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777e548,0xc);
LAB_06b69b1c:
    lVar6 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = *extraout_x1;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b7c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar2,0xc);
LAB_06b69b7c:
    lVar6 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (lVar6 != 0) {
      return (ulong)(*(char *)(lVar6 + 0x10) != '\0');
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a6b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b9 = 1;
  }
  puVar2 = PTR_DAT_0777e548;
  if (extraout_x1_00 == (long *)0x0) {
SUB_057da5fc:
    uVar4 = func_0x03280cac();
    return uVar4;
  }
  lVar6 = *extraout_x1_00;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e548) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
        goto LAB_06b69c30;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777e548,0x17);
LAB_06b69c30:
  lVar6 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = *extraout_x1_00;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
          goto LAB_06b69c98;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar2,0x17);
LAB_06b69c98:
    lVar6 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
    if (lVar6 == 0) goto SUB_057da5fc;
    uVar3 = func_0x055f7aac(*(undefined8 *)(lVar6 + 0x10),0);
    uVar3 = uVar3 ^ 1;
  }
  return (ulong)(uVar3 & 1);
}


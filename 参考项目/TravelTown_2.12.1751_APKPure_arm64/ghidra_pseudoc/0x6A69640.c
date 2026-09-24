/* Ghidra 12.1.2 native pseudocode; RVA 0x6A69640; Merger.MergeBoard.Systems.ImmediateToolsConversionSystem.EnforceImmediateToolBehavior; status ok */


ulong Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__EnforceImmediateToolBehavior
                (long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *extraout_x1;
  long *extraout_x1_00;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = param_3;
  if ((bRam0000000007e2a6ba & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830dd0);
    func_0x03280a18(PTR_DAT_07830dd8);
    func_0x03280a18(PTR_DAT_078300e8);
    func_0x03280a18(PTR_DAT_07830de0);
    func_0x03280a18(PTR_DAT_07830de8);
    func_0x03280a18(PTR_DAT_07830df0);
    func_0x03280a18(PTR_DAT_07830df8);
    func_0x03280a18(PTR_DAT_07830e00);
    func_0x03280a18(PTR_DAT_07830e08);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a6ba = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (param_2 != 0) {
    uVar4 = func_0x03d1bb38(param_2,*(undefined8 *)PTR_DAT_078300e8);
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar11 = *param_3;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_06b69774;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,9);
LAB_06b69774:
      uVar11 = (*(code *)*puVar5)(plVar12,uVar11,puVar5[1]);
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_48 = 0;
      uVar4 = func_0x03d20060(param_2,&uStack_58,*(undefined8 *)PTR_DAT_07830e08);
      if ((uVar4 & 1) != 0) {
        func_0x03d1b070(&uStack_90,param_2,*(undefined8 *)PTR_DAT_07830dd0);
        uStack_38 = CONCAT44(uStack_38._4_4_,(undefined4)uStack_90);
        uStack_40 = uStack_50;
        func_0x032809c4(&uStack_40);
        uStack_48 = uStack_58;
        func_0x032809c4(&uStack_48);
      }
      uStack_88 = uStack_40;
      uStack_90 = uStack_48;
      uStack_80 = uStack_38;
      func_0x03d1d0a4(param_2,&uStack_90,*(undefined8 *)PTR_DAT_07830df8);
      func_0x03d1c528(param_2,*(undefined8 *)PTR_DAT_07830df0);
      func_0x03d1c258(param_2,*(undefined8 *)PTR_DAT_07830de0);
      uVar6 = func_0x03d1c3c0(param_2,*(undefined8 *)PTR_DAT_07830de8);
      uVar4 = Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__IsTool(uVar6,uVar11);
      if ((uVar4 & 1) == 0) {
        return uVar4;
      }
      auVar13 = func_0x03d1b52c(param_2,*(undefined8 *)PTR_DAT_07830dd8);
      uVar4 = func_0x03d1d650(param_2,auVar13._0_8_ & 0xffffffff00000000 | 2,auVar13._8_8_,
                              *(undefined8 *)PTR_DAT_07830e00);
      return uVar4;
    }
  }
  auVar13 = func_0x03280cac();
  lVar8 = auVar13._8_8_;
  uStack_d0 = 0x6b698ac;
  if ((bRam0000000007e2a6bb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a4e8);
    func_0x03280a18(PTR_DAT_07830e10);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a6bb = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (lVar8 != 0) {
    uVar4 = func_0x03d1eef4(lVar8,&uStack_e8,*(undefined8 *)PTR_DAT_07830e10);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    plVar12 = *(long **)(auVar13._0_8_ + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar11 = *puVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_06b699ac;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,9);
LAB_06b699ac:
      uVar11 = (*(code *)*puVar7)(plVar12,uVar11,puVar7[1]);
      plVar12 = *(long **)(auVar13._0_8_ + 0x30);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar1 = *(undefined4 *)(puVar5 + 4);
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c16b0) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b69a20;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077c16b0,0);
LAB_06b69a20:
        lVar9 = (*(code *)*puVar5)(plVar12,uVar11,param_4 & 0xffffffff,uVar1,0,0,puVar5[1]);
        if (lVar9 != 0) {
          uVar4 = func_0x03d1eb8c(lVar9,&uStack_120,*(undefined8 *)PTR_DAT_0777a4e8);
          if ((uVar4 & 1) != 0) {
            uStack_120 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_d8);
          }
          uVar4 = func_0x06014fb4(lVar8,lVar9,0);
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
    lVar8 = *extraout_x1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b1c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777e548,0xc);
LAB_06b69b1c:
    lVar8 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = *extraout_x1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b7c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar2,0xc);
LAB_06b69b7c:
    lVar8 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (lVar8 != 0) {
      return (ulong)(*(char *)(lVar8 + 0x10) != '\0');
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
  lVar8 = *extraout_x1_00;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e548) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
        goto LAB_06b69c30;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777e548,0x17);
LAB_06b69c30:
  lVar8 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
  if (lVar8 == 0) {
    uVar3 = 0;
  }
  else {
    lVar8 = *extraout_x1_00;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
          goto LAB_06b69c98;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar2,0x17);
LAB_06b69c98:
    lVar8 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
    if (lVar8 == 0) goto SUB_057da5fc;
    uVar3 = func_0x055f7aac(*(undefined8 *)(lVar8 + 0x10),0);
    uVar3 = uVar3 ^ 1;
  }
  return (ulong)(uVar3 & 1);
}


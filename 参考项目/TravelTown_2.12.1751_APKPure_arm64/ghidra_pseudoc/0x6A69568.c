/* Ghidra 12.1.2 native pseudocode; RVA 0x6A69568; Merger.MergeBoard.Systems.ImmediateToolsConversionSystem.IsToolOrToolbox; status ok */


/* WARNING: Possible PIC construction at 0x06b69614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b69858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b69618) */
/* WARNING: Removing unreachable block (ram,0x06b6962c) */
/* WARNING: Removing unreachable block (ram,0x06b6961c) */
/* WARNING: Removing unreachable block (ram,0x06b6985c) */
/* WARNING: Removing unreachable block (ram,0x06b69860) */

ulong Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__IsToolOrToolbox
                (long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *extraout_x1;
  long *extraout_x1_00;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar3 = (undefined8 *)&stack0xffffffffffffffe0;
  if ((bRam0000000007e2a6b7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a6b7 = 1;
  }
  plVar14 = *(long **)(param_1 + 0x18);
  if (plVar14 == (long *)0x0) {
    auVar16 = func_0x03280cac();
    plVar7 = auVar16._8_8_;
    puVar4 = &uStack_b0;
    uStack_50 = 0x6b69640;
    puVar6 = param_3;
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
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (plVar7 == (long *)0x0) {
LAB_06b698a8:
      auVar16 = func_0x03280cac();
      plVar13 = auVar16._8_8_;
      puVar3 = &uStack_140;
      uStack_f0 = 0x6b698ac;
      if ((bRam0000000007e2a6bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a4e8);
        func_0x03280a18(PTR_DAT_07830e10);
        func_0x03280a18(PTR_DAT_077c16b0);
        func_0x03280a18(PTR_DAT_0777a498);
        bRam0000000007e2a6bb = 1;
      }
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      if (plVar13 != (long *)0x0) {
        uVar11 = func_0x03d1eef4(plVar13,&uStack_108,*(undefined8 *)PTR_DAT_07830e10);
        if ((uVar11 & 1) == 0) {
          return uVar11;
        }
        plVar14 = *(long **)(auVar16._0_8_ + 0x18);
        if (plVar14 != (long *)0x0) {
          lVar9 = *plVar14;
          uVar15 = *puVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_06b699ac;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,9);
LAB_06b699ac:
          uVar15 = (*(code *)*puVar8)(plVar14,uVar15,puVar8[1]);
          plVar14 = *(long **)(auVar16._0_8_ + 0x30);
          if (plVar14 != (long *)0x0) {
            lVar9 = *plVar14;
            uVar1 = *(undefined4 *)(puVar6 + 4);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c16b0) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_06b69a20;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c16b0,0);
LAB_06b69a20:
            lVar9 = (*(code *)*puVar6)(plVar14,uVar15,(ulong)param_4 & 0xffffffff,uVar1,0,0,
                                       puVar6[1]);
            if (lVar9 != 0) {
              uVar11 = func_0x03d1eb8c(lVar9,&uStack_140,*(undefined8 *)PTR_DAT_0777a4e8);
              if ((uVar11 & 1) != 0) {
                uStack_140 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_f8);
              }
              uVar11 = func_0x06014fb4(plVar13,lVar9,0);
              return uVar11;
            }
          }
        }
      }
      uVar15 = 0x6b69a94;
      func_0x03280cac();
      plVar7 = extraout_x1;
      goto SUB_06b69a94;
    }
    uVar11 = func_0x03d1bb38(plVar7,*(undefined8 *)PTR_DAT_078300e8);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    plVar14 = *(long **)(auVar16._0_8_ + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_06b698a8;
    lVar9 = *plVar14;
    uVar15 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_06b69774;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,9);
LAB_06b69774:
    plVar14 = (long *)(*(code *)*puVar6)(plVar14,uVar15,puVar6[1]);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uVar11 = func_0x03d20060(plVar7,&uStack_78,*(undefined8 *)PTR_DAT_07830e08);
    if ((uVar11 & 1) != 0) {
      func_0x03d1b070(&uStack_b0,plVar7,*(undefined8 *)PTR_DAT_07830dd0);
      uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_b0);
      uStack_60 = uStack_70;
      func_0x032809c4(&uStack_60);
      uStack_68 = uStack_78;
      func_0x032809c4(&uStack_68);
    }
    uStack_a8 = uStack_60;
    uStack_b0 = uStack_68;
    uStack_a0 = uStack_58;
    func_0x03d1d0a4(plVar7,&uStack_b0,*(undefined8 *)PTR_DAT_07830df8);
    func_0x03d1c528(plVar7,*(undefined8 *)PTR_DAT_07830df0);
    func_0x03d1c258(plVar7,*(undefined8 *)PTR_DAT_07830de0);
    func_0x03d1c3c0(plVar7,*(undefined8 *)PTR_DAT_07830de8);
    uVar15 = 0x6b6985c;
    plVar13 = plVar14;
  }
  else {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_06b695f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,9);
LAB_06b695f8:
    plVar7 = (long *)(*(code *)*puVar6)(plVar14,param_2,puVar6[1]);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    uVar15 = 0x6b69618;
    plVar13 = plVar7;
    param_4 = plVar14;
SUB_06b69a94:
    puVar4 = (undefined8 *)((long)puVar3 + -0x20);
    *(undefined8 *)((long)puVar3 + -0x20) = uVar15;
    *(long **)((long)puVar3 + -0x10) = param_4;
    *(long **)((long)puVar3 + -8) = plVar13;
    if ((bRam0000000007e2a6b8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e548);
      bRam0000000007e2a6b8 = 1;
    }
    puVar2 = PTR_DAT_0777e548;
    plVar13 = (long *)0x7e2a000;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_06b69b1c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777e548,0xc);
LAB_06b69b1c:
      lVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar9 == 0) {
        return 0;
      }
      lVar10 = *plVar7;
      lVar9 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_06b69b7c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar9,0xc);
LAB_06b69b7c:
      lVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      plVar13 = (long *)puVar2;
      if (lVar9 != 0) {
        return (ulong)(*(char *)(lVar9 + 0x10) != '\0');
      }
    }
    uVar15 = 0x6b69ba8;
    func_0x03280cac();
    plVar14 = extraout_x1_00;
  }
  *(undefined8 *)((long)puVar4 + -0x20) = uVar15;
  *(long **)((long)puVar4 + -0x10) = plVar13;
  *(long **)((long)puVar4 + -8) = plVar7;
  if ((bRam0000000007e2a6b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b9 = 1;
  }
  puVar2 = PTR_DAT_0777e548;
  if (plVar14 == (long *)0x0) {
SUB_057da5fc:
    uVar11 = func_0x03280cac();
    return uVar11;
  }
  lVar9 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
        goto LAB_06b69c30;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777e548,0x17);
LAB_06b69c30:
  lVar9 = (*(code *)*puVar6)(plVar14,puVar6[1]);
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
          goto LAB_06b69c98;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar2,0x17);
LAB_06b69c98:
    lVar9 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    if (lVar9 == 0) goto SUB_057da5fc;
    uVar5 = func_0x055f7aac(*(undefined8 *)(lVar9 + 0x10),0);
    uVar5 = uVar5 ^ 1;
  }
  return (ulong)(uVar5 & 1);
}


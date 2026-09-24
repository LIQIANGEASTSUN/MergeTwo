/* Ghidra 12.1.2 native pseudocode; RVA 0x6A68F9C; Merger.MergeBoard.Systems.ImmediateToolsConversionSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b693a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b69408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b69614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b69858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b69618) */
/* WARNING: Removing unreachable block (ram,0x06b6962c) */
/* WARNING: Removing unreachable block (ram,0x06b6961c) */
/* WARNING: Removing unreachable block (ram,0x06b6940c) */
/* WARNING: Removing unreachable block (ram,0x06b693ac) */
/* WARNING: Removing unreachable block (ram,0x06b693b0) */
/* WARNING: Removing unreachable block (ram,0x06b693e8) */
/* WARNING: Removing unreachable block (ram,0x06b693bc) */
/* WARNING: Removing unreachable block (ram,0x06b6985c) */
/* WARNING: Removing unreachable block (ram,0x06b69860) */

ulong Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__Tick(ulong param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long *extraout_x1;
  long *extraout_x1_00;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  undefined *unaff_x24;
  undefined *puVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  ulong uStack_198;
  ulong uStack_130;
  undefined8 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = param_1;
  if ((bRam0000000007e2a6b6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078306b8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0777e470);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830db8);
    func_0x03280a18(PTR_DAT_07830dc0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077c8e78);
    func_0x03280a18(PTR_DAT_077628d8);
    func_0x03280a18(PTR_DAT_07750da0);
    func_0x03280a18(PTR_DAT_077628e8);
    func_0x03280a18(PTR_DAT_07830dc8);
    uVar5 = func_0x03280a18(PTR_DAT_078306e0);
    bRam0000000007e2a6b6 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plVar20 = *(long **)(param_1 + 0x20);
  uVar16 = 0;
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar5 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e470) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_06b690f0;
        }
        uVar5 = uVar5 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e470,2);
LAB_06b690f0:
    uVar5 = (*(code *)*puVar6)(plVar20,puVar6[1]);
    uVar16 = uVar5;
  }
  plVar20 = *(long **)(param_1 + 0x28);
  if (plVar20 == (long *)0x0) {
    return uVar5;
  }
  lVar14 = *plVar20;
  uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar5 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c8e78) {
        puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_06b6915c;
      }
      uVar5 = uVar5 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c8e78,0);
LAB_06b6915c:
  lVar14 = (*(code *)*puVar6)(plVar20,puVar6[1]);
  if (lVar14 == 0) {
    return 0;
  }
  uStack_130 = 0;
  uVar7 = func_0x0437b6e0(&uStack_130,*(undefined4 *)(lVar14 + 0x20),*(undefined8 *)PTR_DAT_07750da0
                         );
  uVar5 = uStack_130;
  if ((uVar16 & 0xff) == 0) {
    return uVar7;
  }
  if ((uStack_130 & 0xff) == 0) {
    return uVar7;
  }
  puStack_e8 = (undefined8 *)param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  plVar8 = (long *)func_0x03d1a15c(*(undefined8 *)PTR_DAT_078306b8);
  puVar9 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe68);
  func_0x06015d08(puVar9,0,*(undefined8 *)PTR_DAT_0782fe48,0);
  plVar20 = *(long **)PTR_DAT_078306e0;
  puStack_128 = puStack_e8;
  uStack_130 = uStack_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  puVar6 = puVar9;
  func_0x03e65324(&uStack_d0,&uStack_130,plVar8);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  plVar10 = (long *)func_0x0448b3c0(&uStack_80,*(undefined8 *)PTR_DAT_07830dc8);
  if (plVar10 == (long *)0x0) {
    func_0x03280cac();
LAB_06b694a0:
    func_0x03280cac();
    puVar21 = unaff_x24;
    goto LAB_06b694a4;
  }
  lVar14 = *plVar10;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07830db8) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_06b69288;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plVar10);
LAB_06b69288:
  plVar8 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar21 = PTR_DAT_07830dc0;
  if (plVar8 == (long *)0x0) goto LAB_06b694a0;
  uStack_198 = uVar5 >> 0x20;
  lVar14 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8e0) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_06b6931c;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b6931c:
  uVar16 = (*(code *)*puVar11)(plVar8,puVar11[1]);
  if ((uVar16 & 1) == 0) {
    param_1 = 0;
    do {
      if (plVar8 != (long *)0x0) {
        lVar14 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06b6946c;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar6 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b6946c:
        uVar16 = (*(code *)*puVar11)(plVar8,puVar11[1]);
      }
      if (param_1 == 0) {
        return uVar16;
      }
LAB_06b694a4:
      auVar24 = func_0x03280ca4(param_1);
      uVar16 = auVar24._0_8_;
      if (auVar24._8_4_ != 1) goto LAB_06b694e0;
      puVar12 = (ulong *)func_0x072ce910(uVar16);
      param_1 = *puVar12;
      uVar16 = func_0x072ce920();
    } while( true );
  }
  lVar14 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar5 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar21) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_06b69378;
      }
      uVar5 = uVar5 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b69378:
  (*(code *)*puVar9)(&uStack_130,plVar8,puVar9[1]);
  uVar5 = (ulong)uStack_f8;
  uStack_a8 = uStack_118;
  uStack_b0 = uStack_120;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_90 = uStack_100;
  uVar22 = 0x6b693ac;
  puVar11 = puStack_128;
  uVar7 = param_1;
  uVar16 = uStack_130;
  puVar9 = puStack_128;
  goto SUB_06b69568;
LAB_06b694e0:
  uVar7 = 0;
  if (plVar8 != (long *)0x0) {
    lVar14 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b69544;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b69544:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  func_0x03365958(uVar16);
  func_0x03280ca4(0);
  uVar22 = 0x6b69568;
  auVar23 = func_0x02f09514();
  puVar11 = auVar23._8_8_;
  param_1 = auVar23._0_8_;
SUB_06b69568:
  puVar2 = &uStack_1c0;
  uStack_1c0 = uVar22;
  uStack_1b8 = uVar16;
  plStack_1b0 = plVar8;
  uStack_1a8 = uVar7;
  if ((bRam0000000007e2a6b7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a6b7 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x18);
  if (plVar10 == (long *)0x0) {
    auVar23 = func_0x03280cac();
    plVar8 = auVar23._8_8_;
    lVar14 = auVar23._0_8_;
    puVar3 = &uStack_250;
    uStack_1f0 = 0x6b69640;
    uStack_1d8 = 0x7e2a000;
    puVar13 = puVar6;
    puStack_1e0 = puVar9;
    plStack_1d0 = plVar10;
    puStack_1c8 = puVar11;
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
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    if (plVar8 == (long *)0x0) {
LAB_06b698a8:
      auVar23 = func_0x03280cac();
      plVar19 = auVar23._8_8_;
      puVar2 = &uStack_2e0;
      uStack_290 = 0x6b698ac;
      uStack_270 = 0x7e2a000;
      puStack_280 = puVar21;
      uStack_278 = uVar5;
      lStack_268 = lVar14;
      puStack_260 = puVar6;
      plStack_258 = plVar8;
      if ((bRam0000000007e2a6bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a4e8);
        func_0x03280a18(PTR_DAT_07830e10);
        func_0x03280a18(PTR_DAT_077c16b0);
        func_0x03280a18(PTR_DAT_0777a498);
        bRam0000000007e2a6bb = 1;
      }
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      if (plVar19 != (long *)0x0) {
        uVar5 = func_0x03d1eef4(plVar19,&uStack_2a8,*(undefined8 *)PTR_DAT_07830e10);
        if ((uVar5 & 1) == 0) {
          return uVar5;
        }
        plVar10 = *(long **)(auVar23._0_8_ + 0x18);
        if (plVar10 != (long *)0x0) {
          lVar14 = *plVar10;
          uVar22 = *puVar13;
          uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar5 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_06b699ac;
              }
              uVar5 = uVar5 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,9);
LAB_06b699ac:
          uVar22 = (*(code *)*puVar6)(plVar10,uVar22,puVar6[1]);
          plVar10 = *(long **)(auVar23._0_8_ + 0x30);
          if (plVar10 != (long *)0x0) {
            lVar14 = *plVar10;
            uVar1 = *(undefined4 *)(puVar13 + 4);
            uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar5 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c16b0) {
                  puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06b69a20;
                }
                uVar5 = uVar5 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c16b0,0);
LAB_06b69a20:
            lVar14 = (*(code *)*puVar6)(plVar10,uVar22,(ulong)plVar20 & 0xffffffff,uVar1,0,0,
                                        puVar6[1]);
            if (lVar14 != 0) {
              uVar5 = func_0x03d1eb8c(lVar14,&uStack_2e0,*(undefined8 *)PTR_DAT_0777a4e8);
              if ((uVar5 & 1) != 0) {
                uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(undefined4)uStack_298);
              }
              uVar5 = func_0x06014fb4(plVar19,lVar14,0);
              return uVar5;
            }
          }
        }
      }
      uVar22 = 0x6b69a94;
      func_0x03280cac();
      plVar8 = extraout_x1;
      goto SUB_06b69a94;
    }
    uVar16 = func_0x03d1bb38(plVar8,*(undefined8 *)PTR_DAT_078300e8);
    if ((uVar16 & 1) != 0) {
      return uVar16;
    }
    plVar10 = *(long **)(lVar14 + 0x18);
    lVar14 = 0;
    if (plVar10 == (long *)0x0) goto LAB_06b698a8;
    lVar14 = *plVar10;
    uVar22 = *puVar6;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar5 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
          goto LAB_06b69774;
        }
        uVar5 = uVar5 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,9);
LAB_06b69774:
    plVar20 = (long *)(*(code *)*puVar6)(plVar10,uVar22,puVar6[1]);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    uVar5 = func_0x03d20060(plVar8,&uStack_218,*(undefined8 *)PTR_DAT_07830e08);
    if ((uVar5 & 1) != 0) {
      func_0x03d1b070(&uStack_250,plVar8,*(undefined8 *)PTR_DAT_07830dd0);
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_250);
      uStack_200 = uStack_210;
      func_0x032809c4(&uStack_200);
      uStack_208 = uStack_218;
      func_0x032809c4(&uStack_208);
    }
    uStack_248 = uStack_200;
    uStack_250 = uStack_208;
    uStack_240 = uStack_1f8;
    func_0x03d1d0a4(plVar8,&uStack_250,*(undefined8 *)PTR_DAT_07830df8);
    func_0x03d1c528(plVar8,*(undefined8 *)PTR_DAT_07830df0);
    func_0x03d1c258(plVar8,*(undefined8 *)PTR_DAT_07830de0);
    func_0x03d1c3c0(plVar8,*(undefined8 *)PTR_DAT_07830de8);
    uVar22 = 0x6b6985c;
    plVar10 = plVar20;
  }
  else {
    lVar14 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar5 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
          goto LAB_06b695f8;
        }
        uVar5 = uVar5 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,9);
LAB_06b695f8:
    plVar8 = (long *)(*(code *)*puVar6)(plVar10,puVar11,puVar6[1]);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    uVar22 = 0x6b69618;
    plVar19 = plVar8;
    plVar20 = plVar10;
SUB_06b69a94:
    puVar3 = (undefined8 *)((long)puVar2 + -0x20);
    *(undefined8 *)((long)puVar2 + -0x20) = uVar22;
    *(long **)((long)puVar2 + -0x10) = plVar20;
    *(long **)((long)puVar2 + -8) = plVar19;
    if ((bRam0000000007e2a6b8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e548);
      bRam0000000007e2a6b8 = 1;
    }
    puVar21 = PTR_DAT_0777e548;
    plVar10 = (long *)0x7e2a000;
    if (plVar8 != (long *)0x0) {
      lVar14 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
            goto LAB_06b69b1c;
          }
          uVar5 = uVar5 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777e548,0xc);
LAB_06b69b1c:
      lVar14 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if (lVar14 == 0) {
        return 0;
      }
      lVar15 = *plVar8;
      lVar14 = *(long *)puVar21;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar5 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
            goto LAB_06b69b7c;
          }
          uVar5 = uVar5 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,lVar14,0xc);
LAB_06b69b7c:
      lVar14 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      plVar10 = (long *)puVar21;
      if (lVar14 != 0) {
        return (ulong)(*(char *)(lVar14 + 0x10) != '\0');
      }
    }
    uVar22 = 0x6b69ba8;
    func_0x03280cac();
    plVar20 = extraout_x1_00;
  }
  *(undefined8 *)((long)puVar3 + -0x20) = uVar22;
  *(long **)((long)puVar3 + -0x10) = plVar10;
  *(long **)((long)puVar3 + -8) = plVar8;
  if ((bRam0000000007e2a6b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b9 = 1;
  }
  puVar21 = PTR_DAT_0777e548;
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar5 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x17) * 0x10 + 0x138);
          goto LAB_06b69c30;
        }
        uVar5 = uVar5 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e548,0x17);
LAB_06b69c30:
    lVar14 = (*(code *)*puVar6)(plVar20,puVar6[1]);
    if (lVar14 == 0) {
      uVar4 = 0;
    }
    else {
      lVar14 = *plVar20;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar21) {
            puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x17) * 0x10 + 0x138);
            goto LAB_06b69c98;
          }
          uVar5 = uVar5 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar21,0x17);
LAB_06b69c98:
      lVar14 = (*(code *)*puVar6)(plVar20,puVar6[1]);
      if (lVar14 == 0) goto SUB_057da5fc;
      uVar4 = func_0x055f7aac(*(undefined8 *)(lVar14 + 0x10),0);
      uVar4 = uVar4 ^ 1;
    }
    return (ulong)(uVar4 & 1);
  }
SUB_057da5fc:
  uVar5 = func_0x03280cac();
  return uVar5;
}


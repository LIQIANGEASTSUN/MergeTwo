/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean CanBeUpgraded(GameLogic.Player.IPlayer player)
 * Ghidra function entry: 036d9cf8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036da258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036da5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036da5f8) */
/* WARNING: Removing unreachable block (ram,0x036da25c) */
/* WARNING: Removing unreachable block (ram,0x036da264) */
/* WARNING: Removing unreachable block (ram,0x036da274) */
/* WARNING: Removing unreachable block (ram,0x036da27c) */
/* WARNING: Removing unreachable block (ram,0x036da2a4) */
/* WARNING: Removing unreachable block (ram,0x036da288) */
/* WARNING: Removing unreachable block (ram,0x036da294) */
/* WARNING: Removing unreachable block (ram,0x036da2b0) */
/* WARNING: Removing unreachable block (ram,0x036da2c0) */
/* WARNING: Removing unreachable block (ram,0x036da2dc) */
/* WARNING: Removing unreachable block (ram,0x036da2e4) */
/* WARNING: Removing unreachable block (ram,0x036da30c) */
/* WARNING: Removing unreachable block (ram,0x036da2f0) */
/* WARNING: Removing unreachable block (ram,0x036da2fc) */
/* WARNING: Removing unreachable block (ram,0x036da318) */
/* WARNING: Removing unreachable block (ram,0x036da344) */
/* WARNING: Removing unreachable block (ram,0x036da334) */
/* WARNING: Removing unreachable block (ram,0x036da348) */
/* WARNING: Removing unreachable block (ram,0x036da350) */
/* WARNING: Removing unreachable block (ram,0x036da354) */
/* WARNING: Removing unreachable block (ram,0x036da364) */
/* WARNING: Removing unreachable block (ram,0x036da36c) */
/* WARNING: Removing unreachable block (ram,0x036da394) */
/* WARNING: Removing unreachable block (ram,0x036da378) */
/* WARNING: Removing unreachable block (ram,0x036da384) */
/* WARNING: Removing unreachable block (ram,0x036da3a4) */
/* WARNING: Removing unreachable block (ram,0x036da3b4) */
/* WARNING: Removing unreachable block (ram,0x036da3c8) */
/* WARNING: Removing unreachable block (ram,0x036da3d0) */
/* WARNING: Removing unreachable block (ram,0x036da3f8) */
/* WARNING: Removing unreachable block (ram,0x036da3dc) */
/* WARNING: Removing unreachable block (ram,0x036da3e8) */
/* WARNING: Removing unreachable block (ram,0x036da404) */
/* WARNING: Removing unreachable block (ram,0x036da414) */
/* WARNING: Removing unreachable block (ram,0x036da430) */
/* WARNING: Removing unreachable block (ram,0x036da438) */
/* WARNING: Removing unreachable block (ram,0x036da460) */
/* WARNING: Removing unreachable block (ram,0x036da444) */
/* WARNING: Removing unreachable block (ram,0x036da450) */
/* WARNING: Removing unreachable block (ram,0x036da46c) */
/* WARNING: Removing unreachable block (ram,0x036da498) */
/* WARNING: Removing unreachable block (ram,0x036da488) */
/* WARNING: Removing unreachable block (ram,0x036da49c) */
/* WARNING: Removing unreachable block (ram,0x036da4ac) */
/* WARNING: Removing unreachable block (ram,0x036da4b4) */
/* WARNING: Removing unreachable block (ram,0x036da4dc) */
/* WARNING: Removing unreachable block (ram,0x036da4c0) */
/* WARNING: Removing unreachable block (ram,0x036da4cc) */
/* WARNING: Removing unreachable block (ram,0x036da4ec) */
/* WARNING: Removing unreachable block (ram,0x036da4fc) */
/* WARNING: Removing unreachable block (ram,0x036da518) */
/* WARNING: Removing unreachable block (ram,0x036da520) */
/* WARNING: Removing unreachable block (ram,0x036da548) */
/* WARNING: Removing unreachable block (ram,0x036da52c) */
/* WARNING: Removing unreachable block (ram,0x036da538) */
/* WARNING: Removing unreachable block (ram,0x036da554) */
/* WARNING: Removing unreachable block (ram,0x036da5a4) */
/* WARNING: Removing unreachable block (ram,0x036da564) */
/* WARNING: Removing unreachable block (ram,0x036da574) */
/* WARNING: Removing unreachable block (ram,0x036da57c) */
/* WARNING: Removing unreachable block (ram,0x036da604) */
/* WARNING: Removing unreachable block (ram,0x036da588) */
/* WARNING: Removing unreachable block (ram,0x036da594) */
/* WARNING: Removing unreachable block (ram,0x036da614) */
/* WARNING: Removing unreachable block (ram,0x036da624) */
/* WARNING: Removing unreachable block (ram,0x036da638) */
/* WARNING: Removing unreachable block (ram,0x036da640) */
/* WARNING: Removing unreachable block (ram,0x036da668) */
/* WARNING: Removing unreachable block (ram,0x036da64c) */
/* WARNING: Removing unreachable block (ram,0x036da658) */
/* WARNING: Removing unreachable block (ram,0x036da678) */
/* WARNING: Removing unreachable block (ram,0x036da688) */
/* WARNING: Removing unreachable block (ram,0x036da6a4) */
/* WARNING: Removing unreachable block (ram,0x036da6ac) */
/* WARNING: Removing unreachable block (ram,0x036da6d4) */
/* WARNING: Removing unreachable block (ram,0x036da6b8) */
/* WARNING: Removing unreachable block (ram,0x036da6c4) */
/* WARNING: Removing unreachable block (ram,0x036da6e4) */
/* WARNING: Removing unreachable block (ram,0x036da5a8) */
/* WARNING: Removing unreachable block (ram,0x036da5bc) */
/* WARNING: Removing unreachable block (ram,0x036da5c0) */
/* WARNING: Removing unreachable block (ram,0x036da5fc) */
/* WARNING: Removing unreachable block (ram,0x036da5d4) */
/* WARNING: Removing unreachable block (ram,0x036da5e4) */
/* WARNING: Removing unreachable block (ram,0x036da5e8) */
/* WARNING: Removing unreachable block (ram,0x036da700) */
/* WARNING: Removing unreachable block (ram,0x036da704) */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Removing unreachable block (ram,0x036c0c24) */
/* WARNING: Removing unreachable block (ram,0x036c0c3c) */
/* WARNING: Removing unreachable block (ram,0x036c0c44) */
/* WARNING: Removing unreachable block (ram,0x036c0c6c) */
/* WARNING: Removing unreachable block (ram,0x036c0c50) */
/* WARNING: Removing unreachable block (ram,0x036c0c5c) */
/* WARNING: Removing unreachable block (ram,0x036c0c78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036d9cf8(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5,
                   long *param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  int iVar11;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  int *piVar39;
  undefined *puVar40;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 auStack_210 [2];
  long *plStack_200;
  long *plStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 auStack_1d0 [2];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [4];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  ulong in_stack_ffffffffffffffc8;
  
  if ((bRam0000000005e2da2b & 1) == 0) {
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2da2b = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar30 = *param_2;
    uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar37 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036d9da4;
        }
        uVar37 = uVar37 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar37 != 0);
    }
    puVar17 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036d9da4:
    unaff_x23 = (long *)&DAT_059fa1e8;
    uVar18 = (*(code *)*puVar17)(param_2,puVar17[1]);
    param_3 = (long *)0x0;
    lVar30 = func_0x036eb814(param_1,uVar18);
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar30 == 0) {
      if (lVar19 != 0) {
        plVar31 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
        uVar14 = *(undefined4 *)(plVar31[1] + 0xfc);
        uVar18 = func_0x0249f90c(lVar19,*(undefined8 *)(*plVar31 + 0x80));
        func_0x054ed0d0(&stack0xffffffffffffffcc,uVar18,uVar14);
        return (char *)(ulong)((int)(in_stack_ffffffffffffffc8 >> 0x20) != 0);
      }
    }
    else if (lVar19 != 0) {
      plVar31 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
      uVar14 = *(undefined4 *)(plVar31[1] + 0xfc);
      uVar18 = func_0x0249f90c(lVar19,*(undefined8 *)(*plVar31 + 0x80));
      func_0x054ed0d0((long)&uStack_40 + 4,uVar18,uVar14);
      param_3 = (long *)(uStack_40 >> 0x20);
      param_4 = 0;
      uVar37 = func_0x034b6f80(lVar30,param_2,param_3,0);
      if ((uVar37 & 1) != 0) {
        return (char *)0x0;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar31 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
        uVar14 = *(undefined4 *)(plVar31[1] + 0xfc);
        uVar18 = func_0x0249f90c(*(long *)(param_1 + 0x10),*(undefined8 *)(*plVar31 + 0x80));
        func_0x054ed0d0(&stack0xffffffffffffffc8,uVar18,uVar14);
        plVar31 = (long *)func_0x034b6ccc(lVar30,param_2,in_stack_ffffffffffffffc8 & 0xffffffff,0);
        if (plVar31 == (long *)0x0) {
          return (char *)0x0;
        }
        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar8 = &lStack_50;
        uVar37 = 0x5e2d000;
        param_3 = (long *)0x0;
        if ((bRam0000000005e2d9dd & 1) == 0) {
          func_0x0249f8e4(&DAT_059dfbb8);
          func_0x0249f8e4(&DAT_059dfbc0);
          func_0x0249f8e4(&DAT_05a1a758);
          func_0x0249f8e4(&DAT_05a1a760);
          bRam0000000005e2d9dd = 1;
        }
        if (plVar31 != (long *)0x0) {
          lVar30 = *plVar31;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar36 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x38) * 0x10 + 0x138);
                goto LAB_036c0b00;
              }
              uVar36 = uVar36 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar36 != 0);
          }
          puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059dfbc0,0x38);
LAB_036c0b00:
          lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
          if (lVar30 == 0) {
            return (char *)0x1;
          }
          lVar30 = *plVar31;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar36 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x38) * 0x10 + 0x138);
                goto LAB_036c0b60;
              }
              uVar36 = uVar36 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar36 != 0);
          }
          puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059dfbc0,0x38);
LAB_036c0b60:
          lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
          if (lVar30 != 0) {
            uVar13 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar13 < 1) {
              return (char *)0x1;
            }
            uVar37 = 0;
            do {
              lVar30 = *plVar31;
              uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar36 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x38) * 0x10 + 0x138);
                    goto LAB_036c0bd8;
                  }
                  uVar36 = uVar36 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar36 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059dfbc0,0x38);
LAB_036c0bd8:
              lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
              if ((lVar30 == 0) ||
                 (func_0x0282f3c4(lVar30,uVar37,&plStack_48,_DAT_05a1a760),
                 plStack_48 == (long *)0x0)) break;
              uVar36 = (**(code **)(*plStack_48 + 0x1b8))
                                 (plStack_48,param_2,*(undefined8 *)(*plStack_48 + 0x1c0));
              if ((uVar36 & 1) == 0) {
                return (char *)0x0;
              }
              uVar12 = (int)uVar37 + 1;
              uVar37 = (ulong)uVar12;
              if (uVar12 == uVar13) {
                return (char *)0x1;
              }
            } while( true );
          }
        }
        uVar18 = 0x36c0cb8;
        plVar15 = (long *)func_0x0249fb90();
        plVar16 = param_2;
        goto SUB_036c0cb8;
      }
    }
  }
  auVar43 = func_0x0249fb90();
  plVar16 = auVar43._8_8_;
  plVar31 = auVar43._0_8_;
  lStack_50 = param_1;
  plStack_48 = param_2;
  plVar20 = (long *)func_0x03530bf4(param_4,0);
  plVar8 = (long *)auStack_b0;
  plVar26 = param_3;
  plVar27 = plVar20;
  if ((bRam0000000005e2da2c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df188);
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2da2c = 1;
  }
  uStack_a8 = 0;
  uVar36 = 0x5e2d000;
  if (plVar16 != (long *)0x0) {
    lVar30 = *plVar16;
    uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar37 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036da040;
        }
        uVar37 = uVar37 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar37 != 0);
    }
    plVar26 = (long *)0x5;
    puVar17 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036da040:
    uVar37 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    plVar15 = (long *)plVar31[2];
    if (plVar15 != (long *)0x0) {
      plVar26 = *(long **)(*plVar15 + 0x1d0);
      plVar21 = (long *)(**(code **)(*plVar15 + 0x1c8))(plVar15,uVar37);
      uVar36 = uVar37;
      if ((param_3 != (long *)0x0) &&
         (plVar15 = (long *)param_3[2], unaff_x23 = plVar21, plVar15 != (long *)0x0)) {
        plVar26 = *(long **)(*plVar15 + 0x1d0);
        plVar15 = (long *)(**(code **)(*plVar15 + 0x1c8))(plVar15,uVar37);
        if (plVar21 != (long *)0x0) {
          lVar30 = *plVar21;
          unaff_x29 = &DAT_059dfbc0;
          uVar38 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar38 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                goto LAB_036da0ec;
              }
              uVar38 = uVar38 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar38 != 0);
          }
          puVar17 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfbc0,2);
LAB_036da0ec:
          unaff_x27 = (undefined *)(*(code *)*puVar17)(plVar21,puVar17[1]);
          plVar26 = (long *)0x0;
          uVar38 = func_0x036eb114(plVar31,uVar37);
          unaff_x24 = plVar15;
          if ((uVar38 & 1) == 0) {
            uStack_ac = 0;
          }
          else {
            lVar30 = func_0x036d5e58(plVar31);
            if ((lVar30 == 0) || (unaff_x25 = *(long **)(lVar30 + 0x38), unaff_x25 == (long *)0x0))
            goto LAB_036da728;
            lVar30 = *unaff_x25;
            uVar38 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar38 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059df188) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                  goto LAB_036da184;
                }
                uVar38 = uVar38 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar38 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(unaff_x25,_DAT_059df188,5);
LAB_036da184:
            uStack_ac = (*(code *)*puVar17)(unaff_x25,plVar20,puVar17[1]);
          }
          plVar26 = (long *)0x0;
          uVar38 = func_0x036eb114(param_3,uVar37);
          if ((uVar38 & 1) == 0) {
LAB_036da234:
            if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar18 = 0x36da25c;
SUB_036c0cb8:
            *(undefined8 *)((long)plVar8 + -0x30) = uVar18;
            *(ulong *)((long)plVar8 + -0x20) = uVar37;
            *(long **)((long)plVar8 + -0x18) = plVar31;
            *(long **)((long)plVar8 + -0x10) = param_3;
            *(long **)((long)plVar8 + -8) = plVar16;
            if ((bRam0000000005e2d99b & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059dfe38);
              func_0x0249f8e4(&DAT_059ea740);
              bRam0000000005e2d99b = 1;
            }
            if (plVar15 == (long *)0x0) {
              return (char *)0x0;
            }
            lVar30 = *plVar15;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                  goto LAB_036c0d5c;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfbc0,2);
LAB_036c0d5c:
            plVar31 = (long *)(*(code *)*puVar17)(plVar15,puVar17[1]);
            if (plVar31 == (long *)0x0) {
              return (char *)0x0;
            }
            lVar30 = *plVar31;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059dfe38) {
                  puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                  goto LAB_036c0dc4;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059dfe38,0);
LAB_036c0dc4:
            lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
            if (lVar30 == 0) {
              return (char *)0x0;
            }
            lVar30 = *plVar15;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                  goto LAB_036c0e24;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfbc0,2);
LAB_036c0e24:
            plVar16 = (long *)(*(code *)*puVar17)(plVar15,puVar17[1]);
            if (plVar16 != (long *)0x0) {
              lVar30 = *plVar16;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfe38) {
                    puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                    goto LAB_036c0e84;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfe38,0);
LAB_036c0e84:
              plVar31 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
              if (plVar31 == (long *)0x0) {
                return (char *)0x0;
              }
              if (*(byte *)(*plVar31 + 0x130) < *(byte *)(_DAT_059ea740 + 0x130)) {
                return (char *)0x0;
              }
              return (char *)(ulong)(*(long *)(*(long *)(*plVar31 + 200) +
                                               (ulong)*(byte *)(_DAT_059ea740 + 0x130) * 8 + -8) ==
                                    _DAT_059ea740);
            }
            plVar16 = (long *)func_0x0249fb90();
            *(undefined8 *)((long)plVar8 + -0x50) = 0x36c0ee4;
            *(long **)((long)plVar8 + -0x40) = plVar31;
            *(long **)((long)plVar8 + -0x38) = plVar15;
            if ((bRam0000000005e2d99c & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2d99c = 1;
            }
            if (plVar16 != (long *)0x0) {
              lVar30 = *plVar16;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                    goto LAB_036c0f6c;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c0f6c:
              iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
              if (0x5bd < iVar10) {
                lVar30 = *plVar16;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                      goto LAB_036c0fd0;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c0fd0:
                iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
                if (iVar10 < 0x5c4) {
                  return (char *)0x1;
                }
              }
              lVar30 = *plVar16;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                    goto LAB_036c1034;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c1034:
              iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
              if (0x5db < iVar10) {
                lVar30 = *plVar16;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                      goto LAB_036c1098;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c1098:
                iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
                if (iVar10 < 0x5e3) {
                  return (char *)0x1;
                }
              }
              lVar30 = *plVar16;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                    goto LAB_036c1104;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c1104:
              iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
              if (0x5f9 < iVar10) {
                lVar30 = *plVar16;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x1f) * 0x10 + 0x138);
                      goto LAB_036c1170;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0x1f);
LAB_036c1170:
                iVar10 = (*(code *)*puVar17)(plVar16,puVar17[1]);
                return (char *)(ulong)(iVar10 < 0x601);
              }
            }
            return (char *)0x0;
          }
          lVar30 = func_0x036d5e58(param_3);
          if (lVar30 != 0) {
            plVar21 = *(long **)(lVar30 + 0x38);
            unaff_x28 = (undefined *)0x0;
            if (plVar21 != (long *)0x0) {
              lVar30 = *plVar21;
              uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar36 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059df188) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                    goto LAB_036da220;
                  }
                  uVar36 = uVar36 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar36 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df188,5);
LAB_036da220:
              (*(code *)*puVar17)(plVar21,plVar20,puVar17[1]);
              goto LAB_036da234;
            }
          }
        }
      }
    }
  }
LAB_036da728:
  auVar44 = func_0x0249fb90();
  plVar23 = auVar44._8_8_;
  plVar21 = auVar44._0_8_;
  uStack_f0 = 0x36da72c;
  puVar40 = (undefined *)0x5e2d000;
  plVar15 = plVar26;
  plStack_e0 = unaff_x24;
  plStack_d8 = unaff_x23;
  uStack_d0 = uVar36;
  plStack_c0 = param_3;
  if ((bRam0000000005e2da2e & 1) == 0) {
    plStack_c8 = plVar31;
    plStack_b8 = plVar16;
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    auVar43._8_8_ = plStack_b8;
    auVar43._0_8_ = plStack_c8;
    bRam0000000005e2da2e = 1;
  }
  plStack_b8 = auVar43._8_8_;
  plStack_c8 = auVar43._0_8_;
  uStack_110 = 0;
  uStack_108 = 0;
  if (plVar23 != (long *)0x0) {
    lVar30 = *plVar23;
    uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar37 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036da820;
        }
        uVar37 = uVar37 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar37 != 0);
    }
    puVar17 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
    auVar43._8_8_ = plStack_b8;
    auVar43._0_8_ = plStack_c8;
LAB_036da820:
    plStack_b8 = auVar43._8_8_;
    plStack_c8 = auVar43._0_8_;
    puVar40 = (undefined *)(*(code *)*puVar17)(plVar23,puVar17[1]);
    plVar27 = (long *)0x0;
    plVar15 = plVar26;
    func_0x0371f100(&uStack_110,plVar21,plVar26,0);
    auVar43._8_8_ = plStack_b8;
    auVar43._0_8_ = plStack_c8;
    plVar31 = (long *)plVar21[2];
    if (plVar31 != (long *)0x0) {
      plVar26 = (long *)(**(code **)(*plVar31 + 0x1c8))
                                  (plVar31,puVar40,*(undefined8 *)(*plVar31 + 0x1d0));
      plVar15 = (long *)0x0;
      uVar37 = func_0x036ecc48(plVar21,puVar40);
      auVar43._8_8_ = plStack_b8;
      auVar43._0_8_ = plStack_c8;
      auVar44._8_8_ = plStack_b8;
      auVar44._0_8_ = plStack_c8;
      if ((uVar37 & 1) == 0) {
        if (plVar26 != (long *)0x0) {
          lVar30 = *plVar26;
          puVar40 = &DAT_059dfbc0;
          uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar37 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 1) * 0x10 + 0x138);
                goto LAB_036da988;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          plVar15 = (long *)0x1;
          puVar17 = (undefined8 *)func_0x024d927c(plVar26);
LAB_036da988:
          plVar31 = (long *)(*(code *)*puVar17)(plVar26,puVar17[1]);
          auVar43._8_8_ = plStack_b8;
          auVar43._0_8_ = plStack_c8;
          if (plVar31 != (long *)0x0) {
            lVar30 = *plVar31;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059df498) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                  goto LAB_036daa84;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df498,2);
LAB_036daa84:
            plVar21 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
            unaff_x23 = (long *)&DAT_059d4248;
            uStack_100 = uStack_110;
            uStack_f8 = uStack_108;
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              uStack_1a8 = uStack_108;
              uStack_1b0 = uStack_110;
              func_0x0249fa64(_DAT_059d4248);
              uStack_100 = uStack_1b0;
              uStack_f8 = uStack_1a8;
            }
            unaff_x24 = (long *)&DAT_05a29e48;
            func_0x0288f218(&uStack_100,&lStack_128,_DAT_05a29e48);
            plVar15 = &lStack_160;
            plVar27 = (long *)0x0;
            param_5 = 0;
            uStack_158 = uStack_120;
            lStack_160 = lStack_128;
            uStack_150 = uStack_118;
            pcVar22 = (char *)func_0x0371f1bc(plVar21,plVar23,plVar15,0);
            if (pcVar22 != (char *)0x0) {
              return pcVar22;
            }
            lVar30 = *plVar26;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                  puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                  goto LAB_036dab68;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            plVar15 = (long *)0x0;
            puVar17 = (undefined8 *)func_0x024d927c(plVar26);
LAB_036dab68:
            plVar31 = (long *)(*(code *)*puVar17)(plVar26,puVar17[1]);
            auVar43._8_8_ = plStack_b8;
            auVar43._0_8_ = plStack_c8;
            if (plVar31 != (long *)0x0) {
              lVar30 = *plVar31;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059e0788) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 4) * 0x10 + 0x138);
                    goto LAB_036dabd4;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              plVar15 = (long *)0x4;
              puVar17 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dabd4:
              plVar16 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
              plVar21 = plVar31;
              if (plVar16 != (long *)0x0) {
                uVar18 = uStack_110;
                uVar41 = uStack_108;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_1a8 = uStack_108;
                  uStack_1b0 = uStack_110;
                  func_0x0249fa64();
                  uVar18 = uStack_1b0;
                  uVar41 = uStack_1a8;
                }
                uStack_100 = uVar18;
                uStack_f8 = uVar41;
                func_0x0288f218(&uStack_100,&lStack_128,_DAT_05a29e48);
                plVar15 = &lStack_180;
                plVar27 = (long *)0x0;
                param_5 = 0;
                uStack_178 = uStack_120;
                lStack_180 = lStack_128;
                uStack_170 = uStack_118;
                pcVar22 = (char *)func_0x0371f1bc(plVar16,plVar23,plVar15,0);
                plVar21 = plVar16;
                if (pcVar22 != (char *)0x0) {
                  return pcVar22;
                }
              }
              lVar30 = *plVar26;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                    goto LAB_036dac94;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              plVar15 = (long *)0x3;
              puVar17 = (undefined8 *)func_0x024d927c(plVar26);
LAB_036dac94:
              plVar31 = (long *)(*(code *)*puVar17)(plVar26,puVar17[1]);
              auVar43._8_8_ = plStack_b8;
              auVar43._0_8_ = plStack_c8;
              if (plVar31 != (long *)0x0) {
                lVar30 = *plVar31;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 4) * 0x10 + 0x138);
                      goto LAB_036dad00;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059deb70,4);
LAB_036dad00:
                lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
                if (lVar30 == 0) {
                  return (char *)0x0;
                }
                uVar18 = uStack_110;
                uVar41 = uStack_108;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_1a8 = uStack_108;
                  uStack_1b0 = uStack_110;
                  func_0x0249fa64();
                  uVar18 = uStack_1b0;
                  uVar41 = uStack_1a8;
                }
                uStack_100 = uVar18;
                uStack_f8 = uVar41;
                func_0x0288f218(&uStack_100,&lStack_128,_DAT_05a29e48);
                plVar31 = alStack_1a0;
                goto LAB_036daa5c;
              }
            }
          }
        }
      }
      else {
        auVar43 = auVar44;
        if (plVar26 != (long *)0x0) {
          lVar30 = *plVar26;
          uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar37 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 9) * 0x10 + 0x138);
                goto LAB_036da91c;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          plVar15 = (long *)0x9;
          puVar17 = (undefined8 *)func_0x024d927c(plVar26);
LAB_036da91c:
          plVar31 = (long *)(*(code *)*puVar17)(plVar26,puVar17[1]);
          auVar43._8_8_ = plStack_b8;
          auVar43._0_8_ = plStack_c8;
          if (plVar31 != (long *)0x0) {
            lVar30 = *plVar31;
            uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar37 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059e0158) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 4) * 0x10 + 0x138);
                  goto LAB_036da9f4;
                }
                uVar37 = uVar37 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar37 != 0);
            }
            puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059e0158,4);
LAB_036da9f4:
            lVar30 = (*(code *)*puVar17)(plVar31,puVar17[1]);
            if (lVar30 == 0) {
              return (char *)0x0;
            }
            uStack_100 = uStack_110;
            uStack_f8 = uStack_108;
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              uStack_1a8 = uStack_108;
              uStack_1b0 = uStack_110;
              func_0x0249fa64();
              uStack_100 = uStack_1b0;
              uStack_f8 = uStack_1a8;
            }
            func_0x0288f218(&uStack_100,&lStack_128,_DAT_05a29e48);
            plVar31 = &lStack_140;
            uStack_138 = uStack_120;
            lStack_140 = lStack_128;
            uStack_130 = uStack_118;
LAB_036daa5c:
            pcVar22 = (char *)func_0x0371f1bc(lVar30,plVar23,plVar31,0,0);
            return pcVar22;
          }
        }
      }
    }
  }
  plStack_b8 = auVar43._8_8_;
  plStack_c8 = auVar43._0_8_;
  plVar31 = (long *)func_0x0249fb90();
  auStack_1d0[0] = 0x36dad60;
  plStack_1c0 = plVar26;
  plStack_1b8 = plVar23;
  if ((bRam0000000005e2da4a & 1) == 0) {
    func_0x0249f8e4(&DAT_059dd500);
    bRam0000000005e2da4a = 1;
  }
  lVar30 = func_0x036d5e58(plVar31);
  if (lVar30 != 0) {
    if (*(long *)(lVar30 + 0x40) == 0) {
      if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      if (cRam0000000005e27391 == '\0') {
        func_0x0249f8e4(&DAT_059dd500);
        cRam0000000005e27391 = '\x01';
      }
      if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      pcVar22 = (char *)0x10000;
    }
    else {
      pcVar22 = (char *)(ulong)*(uint *)(*(long *)(lVar30 + 0x40) + 0x10);
    }
    return pcVar22;
  }
  auVar43 = func_0x0249fb90();
  plVar16 = auVar43._0_8_;
  puStack_1f0 = (undefined *)0x36dae04;
  plStack_1e0 = (long *)0x5e2d000;
  plStack_1e8 = plVar21;
  plStack_1d8 = plVar31;
  plVar31 = (long *)func_0x03530c84(auVar43._8_8_,0);
  puVar9 = auStack_210;
  auStack_210[0] = puStack_1f0;
  plVar26 = (long *)0x5e2d000;
  plStack_200 = unaff_x24;
  plStack_1f8 = unaff_x23;
  puStack_1f0 = puVar40;
  if ((bRam0000000005e2da30 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2da30 = 1;
  }
  plVar21 = (long *)&DAT_059e2c00;
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar23 = plVar16;
  func_0x0364aa28(plVar15,plVar27,plVar16,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar18 = func_0x03530158(plVar31,0);
  auVar45._8_8_ = uVar18;
  auVar45._0_8_ = plVar16;
  if (extraout_x1 == (undefined *)0x0) {
    uVar37 = 1;
    if (plVar16 != (long *)0x0) goto LAB_036daef0;
LAB_036daf14:
    uVar18 = 0x36daf18;
    auVar45 = func_0x0249fb90();
    puVar40 = extraout_x1;
  }
  else {
    uVar37 = (ulong)*(uint *)(extraout_x1 + 0x1c);
    if (plVar16 == (long *)0x0) goto LAB_036daf14;
LAB_036daef0:
    puVar9 = auStack_1d0;
    plVar23 = plVar15;
    plVar15 = plStack_1d8;
    plVar16 = plStack_1e0;
    plVar31 = plStack_1e8;
    puVar40 = puStack_1f0;
    plVar21 = plStack_1f8;
    plVar26 = plStack_200;
    uVar18 = auStack_210[0];
  }
  plVar27 = auVar45._8_8_;
  lVar30 = auVar45._0_8_;
  *(undefined8 *)((long)puVar9 + -0x50) = uVar18;
  *(long **)((long)puVar9 + -0x40) = plVar20;
  *(long **)((long)puVar9 + -0x38) = unaff_x25;
  *(long **)((long)puVar9 + -0x30) = plVar26;
  *(long **)((long)puVar9 + -0x28) = plVar21;
  *(undefined **)((long)puVar9 + -0x20) = puVar40;
  *(long **)((long)puVar9 + -0x18) = plVar31;
  *(long **)((long)puVar9 + -0x10) = plVar16;
  *(long **)((long)puVar9 + -8) = plVar15;
  plVar16 = (long *)(uVar37 & 0xffffffff);
  plVar31 = plVar23;
  if ((bRam0000000005e2da31 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_05a27ed8);
    func_0x0249f8e4(&DAT_05a27fa0);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a29960);
    func_0x0249f8e4(&DAT_059d3fd0);
    bRam0000000005e2da31 = 1;
  }
  *(undefined8 *)((long)puVar9 + -0x60) = 0;
  *(undefined8 *)((long)puVar9 + -0x58) = 0;
  *(undefined8 *)((long)puVar9 + -0x70) = 0;
  *(undefined8 *)((long)puVar9 + -0x68) = 0;
  *(undefined8 *)((long)puVar9 + -0x78) = 0;
  uVar36 = 0x5e2d000;
  if (plVar23 != (long *)0x0) {
    lVar19 = *plVar23;
    uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar37 != 0) {
      piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar37 = uVar37 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar37 != 0);
    }
    puVar17 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
LAB_036db040:
    uVar36 = (*(code *)*puVar17)(plVar23,puVar17[1]);
    uVar37 = 0;
    uVar38 = func_0x036ee328(lVar30,plVar23,plVar16);
    if ((uVar38 & 1) == 0) {
      return (char *)0x0;
    }
    uVar38 = func_0x036ed7f4(lVar30,uVar36,0);
    if ((uVar38 & 1) != 0) {
      return (char *)0x2;
    }
    plVar31 = (long *)0x0;
    uVar38 = func_0x036edd98(lVar30,uVar36);
    if ((uVar38 & 1) == 0) {
      plVar31 = (long *)0x0;
      uVar38 = func_0x036edf9c(lVar30,uVar36);
      if ((uVar38 & 1) == 0) {
        return (char *)0x0;
      }
      lVar30 = func_0x036d5e58(lVar30);
      if ((lVar30 != 0) && (*(long *)(lVar30 + 0xa8) != 0)) {
        plVar15 = *(long **)(*(long *)(lVar30 + 0xa8) + 0x10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = plVar27;
        auVar45 = auVar3 << 0x40;
        if (plVar15 != (long *)0x0) {
          lVar30 = *plVar15;
          uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar37 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059e0170) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 4) * 0x10 + 0x138);
                goto LAB_036db338;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          puVar17 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0170,4);
LAB_036db338:
          uVar37 = (*(code *)*puVar17)(plVar15,puVar17[1]);
          uVar13 = 1;
          if ((uVar37 & 1) != 0) {
            uVar13 = 2;
          }
          return (char *)(ulong)uVar13;
        }
      }
    }
    else {
      plVar15 = *(long **)(lVar30 + 0x10);
      if (plVar15 != (long *)0x0) {
        plVar23 = (long *)(**(code **)(*plVar15 + 0x1c8))
                                    (plVar15,uVar36,*(undefined8 *)(*plVar15 + 0x1d0));
        plVar31 = (long *)0x0;
        uVar37 = 0;
        func_0x037275b8(lVar30,plVar27);
        lVar19 = func_0x036d5e58(lVar30);
        if ((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
          plVar31 = (long *)0x0;
          func_0x03700cf4(*(long *)(lVar19 + 0x28),plVar16);
          if (plVar23 != (long *)0x0) {
            lVar19 = *plVar23;
            plVar26 = (long *)&DAT_059dfbc0;
            uVar38 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar38 != 0) {
              piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                  puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar38 = uVar38 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar38 != 0);
            }
            plVar31 = (long *)0x3;
            puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036db1dc:
            plVar15 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
            if (plVar15 != (long *)0x0) {
              lVar19 = *plVar15;
              unaff_x25 = (long *)&DAT_059deb70;
              uVar38 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar38 != 0) {
                piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                    puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar38 = uVar38 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar38 != 0);
              }
              plVar31 = (long *)0x2;
              puVar17 = (undefined8 *)func_0x024d927c(plVar15);
LAB_036db248:
              plVar16 = (long *)(*(code *)*puVar17)(plVar15,puVar17[1]);
              lVar19 = func_0x036d5e58(lVar30);
              if (((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) &&
                 (uVar38 = func_0x037537dc(*(long *)(lVar19 + 0x18),0), plVar16 != (long *)0x0)) {
                lVar19 = *plVar16;
                plVar20 = (long *)&DAT_059deb60;
                uVar36 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar36 != 0) {
                  piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059deb60) {
                      puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 0x12) * 0x10 + 0x138);
                      goto LAB_036db2d4;
                    }
                    uVar36 = uVar36 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar36 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb60,0x12);
LAB_036db2d4:
                plVar31 = (long *)puVar17[1];
                uVar24 = (*(code *)*puVar17)(plVar16,uVar38 & 0xffffffff);
                uVar36 = uVar38;
                if ((uVar24 & 1) != 0) {
                  lVar19 = *plVar16;
                  uVar38 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar38 != 0) {
                    piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059deb60) {
                        puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                        goto LAB_036db364;
                      }
                      uVar38 = uVar38 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar38 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb60,3);
LAB_036db364:
                  auVar43 = (*(code *)*puVar17)(plVar16,puVar17[1]);
                  *(undefined1 (*) [16])((long)puVar9 + -0x68) = auVar43;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  plVar31 = _DAT_05a29960;
                  uVar38 = func_0x0288eda8((undefined1 *)((long)puVar9 + -0x68),
                                           (undefined1 *)((long)puVar9 + -0x58));
                  if ((uVar38 & 1) != 0) {
                    lVar19 = func_0x036d5e58(lVar30);
                    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) goto LAB_036db604;
                    uVar37 = 0;
                    plVar31 = plVar27;
                    func_0x03754988(*(long *)(lVar19 + 0x18),*(undefined8 *)((long)puVar9 + -0x58));
                  }
                }
                iVar10 = func_0x036fa7dc(lVar30,0);
                if (0 < iVar10) {
                  return (char *)0x1;
                }
                lVar19 = *plVar23;
                uVar38 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar38 != 0) {
                  piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                      goto LAB_036db434;
                    }
                    uVar38 = uVar38 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar38 != 0);
                }
                plVar31 = (long *)0x3;
                puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036db434:
                plVar15 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
                if (plVar15 != (long *)0x0) {
                  lVar19 = *plVar15;
                  uVar38 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar38 != 0) {
                    piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                        puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 0xe) * 0x10 + 0x138);
                        goto LAB_036db498;
                      }
                      uVar38 = uVar38 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar38 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059deb70,0xe);
LAB_036db498:
                  uVar38 = (*(code *)*puVar17)(plVar15,puVar17[1]);
                  if ((uVar38 & 1) == 0) {
                    return (char *)0x1;
                  }
                  plVar31 = plVar23;
                  plVar21 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                  plVar16 = plVar15;
                  if ((plVar21 != (long *)0x0) &&
                     (plVar15 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar31 = plVar21,
                     plVar15 != (long *)0x0)) {
                    uVar38 = func_0x022bffa8(0,_DAT_059deb60);
                    plVar16 = (long *)(uVar38 & 0xffffffff);
                    lVar19 = func_0x036d5ec8(lVar30);
                    plVar31 = plVar15;
                    if (lVar19 != 0) {
                      uVar38 = func_0x0375380c(lVar19,plVar16,0);
                      if ((uVar38 & 1) != 0) {
                        return (char *)0x1;
                      }
                      plVar31 = plVar23;
                      lVar19 = func_0x022bffa8(3,_DAT_059dfbc0);
                      if (lVar19 != 0) {
                        uVar38 = func_0x022bffa8(0x10,_DAT_059deb70,lVar19);
                        if ((uVar38 & 1) == 0) {
                          return (char *)0x2;
                        }
                        lVar30 = func_0x036d5ec8(lVar30);
                        uVar18 = func_0x03530c84(plVar27,0);
                        auVar2._8_8_ = uVar18;
                        auVar2._0_8_ = lVar30;
                        auVar45._8_8_ = uVar18;
                        auVar45._0_8_ = lVar30;
                        plVar31 = plVar23;
                        plVar15 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                        if (plVar15 != (long *)0x0) {
                          auVar43 = func_0x022bffa8(0xc,_DAT_059deb70);
                          *(undefined1 (*) [16])((long)puVar9 + -0x78) = auVar43;
                          uVar38 = func_0x022bf4f8((undefined1 *)((long)puVar9 + -0x78),
                                                   _DAT_05a27ee0);
                          uVar41 = 0;
                          uVar42 = 0;
                          if ((uVar38 & 1) != 0) {
                            plVar23 = (long *)func_0x023f3ca0((undefined1 *)((long)puVar9 + -0x78),
                                                              _DAT_05a27ed8);
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64(_DAT_059e2ba0);
                            }
                            uVar18 = func_0x0430d994(uVar18,plVar23,0);
                            *(undefined8 *)((long)puVar9 + -0x48) = uVar18;
                            *(undefined8 *)((long)puVar9 + -0x90) = 0;
                            *(undefined8 *)((long)puVar9 + -0x88) = 0;
                            plVar15 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar9 + -0x90),
                                            (undefined1 *)((long)puVar9 + -0x48));
                            uVar42 = *(undefined8 *)((long)puVar9 + -0x88);
                            uVar41 = *(undefined8 *)((long)puVar9 + -0x90);
                          }
                          plVar31 = plVar15;
                          auVar45 = auVar2;
                          if (lVar30 != 0) {
                            *(undefined8 *)(lVar30 + 0x68) = uVar42;
                            *(undefined8 *)(lVar30 + 0x60) = uVar41;
                            return (char *)0x1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036db604:
  auVar43 = func_0x0249fb90();
  lVar30 = auVar43._0_8_;
  *(undefined8 *)((long)puVar9 + -0xe0) = 0x36db608;
  *(long **)((long)puVar9 + -0xd0) = plVar20;
  *(long **)((long)puVar9 + -200) = unaff_x25;
  *(long **)((long)puVar9 + -0xc0) = plVar26;
  *(ulong *)((long)puVar9 + -0xb8) = uVar36;
  *(long **)((long)puVar9 + -0xb0) = plVar16;
  *(long **)((long)puVar9 + -0xa8) = plVar23;
  *(long *)((long)puVar9 + -0xa0) = auVar45._8_8_;
  *(long *)((long)puVar9 + -0x98) = auVar45._0_8_;
  plVar21 = (long *)0x5e2d000;
  plVar27 = (long *)(param_5 & 0xffffffff);
  puVar40 = (undefined *)(uVar37 & 0xffffffff);
  plVar16 = (long *)(auVar43._8_8_ & 0xffffffff);
  plVar15 = plVar31;
  uVar36 = uVar37;
  uVar38 = param_5;
  plVar26 = param_6;
  if ((bRam0000000005e2da32 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e2548);
    bRam0000000005e2da32 = 1;
  }
  *(int *)param_6 = 0;
  plVar23 = plVar31;
  if (plVar31 == (long *)0x0) {
LAB_036dbb68:
    uVar18 = 0x36dbb6c;
    auVar46 = func_0x0249fb90();
    plVar31 = plVar15;
  }
  else {
    lVar19 = *plVar31;
    uVar36 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar36 != 0) {
      piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar36 = uVar36 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar36 != 0);
    }
    puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df8e8,5);
LAB_036db6f0:
    plVar21 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
    uVar36 = func_0x036edd98(lVar30,plVar21,0);
    if (((uVar36 & 1) == 0) && (uVar36 = func_0x036edf9c(lVar30,plVar21,0), (uVar36 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar10 = (int)uVar37;
    uVar13 = iVar10 * auVar43._8_4_;
    plVar20 = (long *)(ulong)uVar13;
    uVar36 = 0;
    plVar15 = plVar20;
    uVar24 = func_0x036ee328(lVar30,plVar31);
    if ((uVar24 & 1) == 0) {
      return (char *)0x0;
    }
    lVar19 = func_0x036d5e58(lVar30);
    if (lVar19 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar19 + 0x50)) {
      lVar19 = func_0x036d5e58();
      if (lVar19 != 0) {
        if ((int)uVar13 < *(int *)(lVar19 + 0x50)) {
          *(int *)param_6 = auVar43._8_4_;
          lVar19 = func_0x036d5e58(lVar30);
          if (lVar19 != 0) {
            *(uint *)(lVar19 + 0x50) = *(int *)(lVar19 + 0x50) - uVar13;
            return (char *)0x1;
          }
        }
        else {
          plVar31 = *(long **)(lVar30 + 0x10);
          if (plVar31 != (long *)0x0) {
            plVar23 = (long *)(**(code **)(*plVar31 + 0x1c8))
                                        (plVar31,plVar21,*(undefined8 *)(*plVar31 + 0x1d0));
            plVar15 = (long *)0x0;
            uVar37 = func_0x036edd98(lVar30,plVar21);
            if (((uVar37 & 1) == 0) || (iVar10 = func_0x036fa7dc(lVar30,0), 0 < iVar10)) {
LAB_036dbaac:
              plVar15 = (long *)0x0;
              uVar37 = func_0x036edf9c(lVar30,plVar21);
              if ((uVar37 & 1) == 0) {
                return (char *)0x1;
              }
              lVar19 = func_0x036d5e58(lVar30);
              if ((lVar19 != 0) && (*(long *)(lVar19 + 0xa8) != 0)) {
                plVar31 = *(long **)(*(long *)(lVar19 + 0xa8) + 0x10);
                lVar30 = 0;
                if (plVar31 != (long *)0x0) {
                  lVar30 = *plVar31;
                  uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar37 != 0) {
                    piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059e0170) {
                        puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 1) * 0x10 + 0x138);
                        goto LAB_036dbb34;
                      }
                      uVar37 = uVar37 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar37 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059e0170,1);
LAB_036dbb34:
                  uVar37 = (*(code *)*puVar17)(plVar31,puVar17[1]);
                  if ((uVar37 & 1) != 0) {
                    return (char *)0x1;
                  }
                  return (char *)0x2;
                }
              }
            }
            else if (plVar23 != (long *)0x0) {
              lVar19 = *plVar23;
              param_6 = (long *)&DAT_059dfbc0;
              uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              plVar15 = (long *)0x3;
              puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036db9cc:
              plVar31 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
              if (plVar31 != (long *)0x0) {
                lVar19 = *plVar31;
                puVar40 = &DAT_059deb70;
                uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                      puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar37 = (*(code *)*puVar17)(plVar31,puVar17[1]);
                plVar27 = plVar31;
                if ((uVar37 & 1) == 0) goto LAB_036dbaac;
                plVar15 = plVar23;
                plVar31 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                if ((plVar31 != (long *)0x0) &&
                   (plVar32 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar15 = plVar31,
                   plVar32 != (long *)0x0)) {
                  uVar37 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar19 = func_0x036d5ec8(lVar30);
                  plVar15 = plVar32;
                  plVar23 = (long *)(uVar37 & 0xffffffff);
                  if (lVar19 != 0) {
                    uVar37 = func_0x0375380c(lVar19,(long *)(uVar37 & 0xffffffff),0);
                    if ((uVar37 & 1) == 0) {
                      return (char *)0x2;
                    }
                    return (char *)0x1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_036dbb68;
    }
    plVar15 = (long *)0x0;
    uVar24 = func_0x036edd98(lVar30,plVar21);
    if ((uVar24 & 1) == 0) {
      plVar15 = (long *)0x0;
      uVar37 = func_0x036edf9c(lVar30,plVar21);
      if ((uVar37 & 1) == 0) {
        return (char *)0x1;
      }
      lVar19 = func_0x036d5e58(lVar30);
      if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) ||
         (plVar21 = *(long **)(*(long *)(lVar19 + 0xa8) + 0x10), plVar21 == (long *)0x0))
      goto LAB_036dbb68;
      lVar19 = *plVar21;
      uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == _DAT_059e0170) {
            puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      puVar17 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059e0170,5);
LAB_036db928:
      iVar11 = (*(code *)*puVar17)(plVar21,puVar17[1]);
      iVar29 = iVar11;
      if (iVar10 < iVar11) {
        iVar35 = (int)*param_6;
        do {
          iVar29 = iVar29 - iVar10;
          iVar35 = iVar35 + 1;
        } while (iVar10 < iVar29);
        *(int *)param_6 = iVar35;
      }
      uVar13 = iVar29 - iVar11;
    }
    else {
      lVar19 = func_0x036d5e58(lVar30);
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x28) == 0)) goto LAB_036dbb68;
      uVar13 = *(uint *)(*(long *)(lVar19 + 0x28) + 0x10);
      plVar21 = (long *)(ulong)uVar13;
      plVar16 = plVar21;
      uVar12 = uVar13;
      while (iVar10 < (int)uVar12) {
        lVar19 = func_0x036d5e58(lVar30);
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x28) == 0)) goto LAB_036dbb68;
        plVar15 = (long *)0x0;
        func_0x03700cf4(*(long *)(lVar19 + 0x28),uVar37 & 0xffffffff);
        uVar12 = (int)plVar16 - iVar10;
        plVar16 = (long *)(ulong)uVar12;
        *(int *)param_6 = (int)*param_6 + 1;
      }
      uVar13 = (int)plVar16 - uVar13;
    }
    puVar40 = (undefined *)(ulong)uVar13;
    param_6 = (long *)func_0x036d5e58(lVar30);
    auVar46._8_4_ = (uint)param_5 & 1;
    auVar46._0_8_ = lVar30;
    auVar46._12_4_ = 0;
    uVar18 = 0x36db980;
  }
  lVar19 = auVar46._0_8_;
  *(undefined8 *)((long)puVar9 + -0x120) = uVar18;
  *(long **)((long)puVar9 + -0x110) = plVar21;
  *(undefined **)((long)puVar9 + -0x108) = puVar40;
  *(long **)((long)puVar9 + -0x100) = param_6;
  *(long **)((long)puVar9 + -0xf8) = plVar27;
  *(long **)((long)puVar9 + -0xf0) = plVar23;
  *(long *)((long)puVar9 + -0xe8) = lVar30;
  plVar23 = (long *)0x5e2d000;
  plVar27 = (long *)(auVar46._8_8_ & 0xffffffff);
  plVar15 = plVar31;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar30 = func_0x036d5e58(lVar19);
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x50) < 1) {
      if (plVar31 != (long *)0x0) {
        lVar30 = *plVar31;
        plVar23 = (long *)&DAT_059df8e8;
        uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar37 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
              puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar37 = uVar37 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar37 != 0);
        }
        puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar18 = (*(code *)*puVar17)(plVar31,puVar17[1]);
        plVar15 = (long *)0x0;
        uVar24 = func_0x036edd98(lVar19,uVar18);
        lVar30 = *plVar31;
        uVar1 = *(ushort *)(lVar30 + 0x12e);
        uVar37 = (ulong)uVar1;
        if ((uVar24 & 1) == 0) {
          if (uVar1 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar18 = (*(code *)*puVar17)(plVar31,puVar17[1]);
          plVar15 = (long *)0x0;
          uVar37 = func_0x036edf9c(lVar19,uVar18);
          if ((uVar37 & 1) == 0) {
            uVar13 = 0;
            goto LAB_036dbc00;
          }
          lVar30 = func_0x036d5e58(lVar19);
          if ((lVar30 != 0) && (*(long *)(lVar30 + 0xa8) != 0)) {
            plVar32 = *(long **)(*(long *)(lVar30 + 0xa8) + 0x10);
            lVar19 = 0;
            if (plVar32 != (long *)0x0) {
              lVar30 = *plVar32;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059e0170) {
                    iVar10 = *piVar39 + 6;
                    goto LAB_036dbfbc;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              uVar18 = 6;
              lVar30 = _DAT_059e0170;
              goto LAB_036dbfac;
            }
          }
        }
        else {
          if (uVar1 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          plVar15 = (long *)0x5;
          puVar17 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dbd14:
          uVar18 = (*(code *)*puVar17)(plVar31,puVar17[1]);
          plVar32 = *(long **)(lVar19 + 0x10);
          if (plVar32 != (long *)0x0) {
            plVar15 = *(long **)(*plVar32 + 0x1d0);
            plVar23 = (long *)(**(code **)(*plVar32 + 0x1c8))(plVar32,uVar18);
            if ((auVar46._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar23 != (long *)0x0) {
                lVar30 = *plVar23;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                plVar15 = (long *)0x3;
                puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dbf58:
                plVar32 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
                if (plVar32 != (long *)0x0) {
                  lVar30 = *plVar32;
                  uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar37 != 0) {
                    piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                        iVar10 = *piVar39 + 0x14;
LAB_036dbfbc:
                        puVar17 = (undefined8 *)(lVar30 + (long)iVar10 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar37 = uVar37 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar37 != 0);
                  }
                  uVar18 = 0x14;
                  lVar30 = _DAT_059deb70;
LAB_036dbfac:
                  puVar17 = (undefined8 *)func_0x024d927c(plVar32,lVar30,uVar18);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar22 = (char *)(*(code *)*puVar17)(plVar32,puVar17[1]);
                  return pcVar22;
                }
              }
            }
            else if (plVar23 != (long *)0x0) {
              lVar30 = *plVar23;
              puVar40 = &DAT_059dfbc0;
              uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar37 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar37 = uVar37 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar37 != 0);
              }
              plVar15 = (long *)0x19;
              puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dbe38:
              plVar32 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
              if (plVar32 != (long *)0x0) {
                lVar30 = *plVar32;
                plVar21 = (long *)&DAT_059e0150;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059e0150) {
                      puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                plVar15 = (long *)0x0;
                puVar17 = (undefined8 *)func_0x024d927c(plVar32);
LAB_036dbeac:
                uVar37 = (*(code *)*puVar17)(plVar32,puVar17[1]);
                plVar27 = plVar32;
                if ((uVar37 & 1) == 0) goto LAB_036dbefc;
                lVar30 = *plVar23;
                uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar37 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar37 = uVar37 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar37 != 0);
                }
                plVar15 = (long *)0x19;
                puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dbff0:
                plVar32 = (long *)(*(code *)*puVar17)(plVar23,puVar17[1]);
                if (plVar32 != (long *)0x0) {
                  lVar30 = *plVar32;
                  uVar37 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar37 != 0) {
                    piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059e0150) {
                        puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar37 = uVar37 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar37 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar22 = (char *)(*(code *)*puVar17)(plVar32,lVar19,plVar31,puVar17[1]);
                  return pcVar22;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar30 = func_0x036d5e58(lVar19);
      if (lVar30 != 0) {
        uVar13 = *(uint *)(lVar30 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar13;
      }
    }
  }
  auVar47 = func_0x0249fb90();
  plVar32 = auVar47._8_8_;
  lVar30 = auVar47._0_8_;
  *(undefined **)((long)puVar9 + -0x180) = unaff_x29;
  *(undefined8 *)((long)puVar9 + -0x178) = 0x36dc07c;
  *(undefined **)((long)puVar9 + -0x170) = unaff_x28;
  *(undefined **)((long)puVar9 + -0x168) = unaff_x27;
  *(long **)((long)puVar9 + -0x160) = plVar20;
  *(long **)((long)puVar9 + -0x158) = plVar16;
  *(long **)((long)puVar9 + -0x150) = plVar21;
  *(undefined **)((long)puVar9 + -0x148) = puVar40;
  *(long **)((long)puVar9 + -0x140) = plVar27;
  *(long **)((long)puVar9 + -0x138) = plVar23;
  *(long **)((long)puVar9 + -0x130) = plVar31;
  *(long *)((long)puVar9 + -0x128) = lVar19;
  uVar24 = uVar38 & 0xffffffff;
  uVar37 = uVar36;
  uVar28 = uVar38;
  if ((bRam0000000005e2da33 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a27fb0);
    func_0x0249f8e4(&DAT_05a28018);
    func_0x0249f8e4(&DAT_05a27fa0);
    func_0x0249f8e4(&DAT_05a27fc8);
    func_0x0249f8e4(&DAT_05a27fd0);
    bRam0000000005e2da33 = 1;
  }
  plVar31 = (long *)0x0;
  *(undefined8 *)((long)puVar9 + -0x198) = 0;
  *(undefined8 *)((long)puVar9 + -400) = 0;
  *(undefined8 *)((long)puVar9 + -0x1a8) = 0;
  *(undefined8 *)((long)puVar9 + -0x1a0) = 0;
  *(undefined8 *)((long)puVar9 + -0x1b8) = 0;
  *(undefined8 *)((long)puVar9 + -0x1b0) = 0;
  *(undefined8 *)((long)puVar9 + -0x1c8) = 0;
  *(undefined8 *)((long)puVar9 + -0x1c0) = 0;
  uVar25 = func_0x036fa5f8(lVar30,plVar32);
  if ((uVar25 & 1) != 0) {
    return (char *)0x0;
  }
  lVar19 = func_0x036d5e58(lVar30);
  plVar27 = (long *)0x5e2d000;
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) {
    auVar43 = func_0x03753e70(*(long *)(lVar19 + 0x18),0);
    unaff_x28 = &DAT_05a27fc8;
    *(undefined1 (*) [16])((long)puVar9 + -0x198) = auVar43;
    lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x024d8f40();
    }
    pcVar22 = (char *)func_0x0249f90c((undefined1 *)((long)puVar9 + -0x198),
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
    if (*pcVar22 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844((undefined1 *)((long)puVar9 + -0x198),(undefined1 *)((long)puVar9 + -0x1d8),
                    _DAT_05a27fd0);
    unaff_x27 = &DAT_059e2c00;
    plVar27 = *(long **)((long)puVar9 + -0x1d8);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar18 = func_0x03530158(plVar27,0);
    plVar31 = (long *)0x0;
    uVar25 = func_0x0352ff64(uVar18,plVar15);
    if ((uVar25 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar32 != (long *)0x0) {
      lVar19 = *plVar32;
      plVar20 = (long *)&DAT_059df8e8;
      uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar25 != 0) {
        piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
            puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar25 = uVar25 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar25 != 0);
      }
      plVar31 = (long *)0x5;
      puVar17 = (undefined8 *)func_0x024d927c(plVar32);
LAB_036dc294:
      uVar18 = (*(code *)*puVar17)(plVar32,puVar17[1]);
      plVar21 = *(long **)(lVar30 + 0x10);
      if (plVar21 != (long *)0x0) {
        plVar31 = *(long **)(*plVar21 + 0x1d0);
        plVar21 = (long *)(**(code **)(*plVar21 + 0x1c8))(plVar21,uVar18);
        if (plVar21 != (long *)0x0) {
          lVar19 = *plVar21;
          uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar25 != 0) {
            piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar25 = uVar25 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar25 != 0);
          }
          plVar31 = (long *)0x3;
          puVar17 = (undefined8 *)func_0x024d927c(plVar21);
LAB_036dc31c:
          plVar27 = (long *)(*(code *)*puVar17)(plVar21,puVar17[1]);
          lVar19 = func_0x036d5e58(lVar30);
          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) {
            uVar13 = *(uint *)(*(long *)(lVar19 + 0x18) + 0x38);
            plVar16 = (long *)(ulong)uVar13;
            if ((int)uVar13 < 1) {
              lVar19 = *plVar32;
              uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar25 != 0) {
                piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
                    puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar25 = uVar25 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar25 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar18 = (*(code *)*puVar17)(plVar32,puVar17[1]);
              plVar21 = (long *)0x0;
              uVar25 = func_0x036f2f04(lVar30,uVar18);
              if ((uVar25 & 1) == 0) {
                plVar21 = (long *)0x0;
                uVar25 = func_0x036f2fec(lVar30,plVar32);
                plVar31 = plVar21;
                if ((uVar25 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar27 != (long *)0x0) {
                  plVar31 = plVar27;
                  plVar21 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar19 = func_0x036d5ec8(lVar30);
                  plVar16 = plVar21;
                  if (lVar19 != 0) {
                    auVar43 = func_0x037537dc(lVar19,0);
                    uVar25 = auVar43._0_8_;
                    if (plVar21 != (long *)0x0) {
                      uVar28 = auVar43._8_8_ & 0xffffffff;
                      uVar37 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      plVar16 = (long *)(uVar37 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar19 = func_0x036d5e58(lVar30);
                plVar31 = plVar21;
                if ((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar19 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  plVar16 = (long *)0x0;
                  uVar25 = uVar37;
LAB_036dc558:
                  lVar19 = *plVar32;
                  uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar37 != 0) {
                    piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
                        puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138);
                        uVar37 = uVar25;
                        goto LAB_036dc5a8;
                      }
                      uVar37 = uVar37 - 1;
                      piVar39 = piVar39 + 4;
                    } while (uVar37 != 0);
                  }
                  plVar21 = (long *)0x5;
                  puVar17 = (undefined8 *)func_0x024d927c(plVar32);
                  uVar37 = uVar25;
LAB_036dc5a8:
                  uVar18 = (*(code *)*puVar17)(plVar32,puVar17[1]);
                  plVar23 = *(long **)(lVar30 + 0x10);
                  plVar31 = plVar21;
                  if (plVar23 != (long *)0x0) {
                    plVar31 = *(long **)(*plVar23 + 0x1d0);
                    uVar18 = (**(code **)(*plVar23 + 0x1c8))(plVar23,uVar18);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar25 = func_0x036c47c0(uVar18,plVar32);
                    plVar20 = (long *)(uVar25 & 0xffffffff);
                    lVar19 = func_0x036d5e58(lVar30);
                    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
                      uVar37 = 0;
                      plVar31 = plVar20;
                      iVar10 = func_0x03700d78(*(long *)(lVar19 + 0x28),plVar16);
                      uVar13 = (int)plVar16 - iVar10;
                      plVar16 = (long *)(ulong)uVar13;
                      if (uVar13 == 0) {
                        if (plVar27 != (long *)0x0) {
                          plVar21 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          plVar16 = (long *)func_0x036d5ec8(lVar30);
                          plVar23 = (long *)func_0x03530c84(plVar15,0);
                          plVar31 = plVar27;
                          plVar27 = plVar21;
                          if (plVar21 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar21,plVar16,plVar32);
                            func_0x037275b8(lVar30,plVar15,1,0);
                            func_0x03727828(lVar30,plVar32,plVar15,0);
                            plVar31 = (long *)(ulong)((uint)uVar36 & 1);
                            uVar37 = (ulong)((uint)uVar38 & 1);
                            uVar28 = 0;
                            uVar13 = func_0x036fa00c(lVar30,plVar32);
                            auVar47._8_4_ = uVar13;
                            auVar47._0_8_ = lVar30;
                            auVar47._12_4_ = 0;
                            lVar19 = func_0x036d5ec8(lVar30);
                            plVar26 = plVar23;
                            if (lVar19 != 0) {
                              auVar43 = func_0x03753e70(lVar19,0);
                              *(undefined1 (*) [16])((long)puVar9 + -0x1c8) = auVar43;
                              uVar12 = func_0x022bf4f8((undefined1 *)((long)puVar9 + -0x1c8),
                                                       _DAT_05a27fc8);
                              if ((uVar13 & uVar12 & 1) == 0) {
                                uVar18 = *(undefined8 *)((long)puVar9 + -0x1c8);
                                uVar24 = *(ulong *)((long)puVar9 + -0x1c0);
                                uVar41 = func_0x03530c84(plVar15,0);
                                *(undefined8 *)((long)puVar9 + -0x188) = uVar41;
                                *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                                (undefined1 *)((long)puVar9 + -0x188),_DAT_05a27fa0)
                                ;
                                uVar37 = *(ulong *)((long)puVar9 + -0x1d0);
                                uVar28 = 0;
                                auVar43 = func_0x03489150(uVar18,uVar24,
                                                          *(undefined8 *)((long)puVar9 + -0x1d8));
                                plVar26 = plVar23;
                              }
                              else {
                                uVar18 = func_0x03530c84(plVar15,0);
                                *(undefined8 *)((long)puVar9 + -0x188) = uVar18;
                                *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                                (undefined1 *)((long)puVar9 + -0x188),_DAT_05a27fa0)
                                ;
                                auVar43 = *(undefined1 (*) [16])((long)puVar9 + -0x1d8);
                                plVar26 = plVar23;
                              }
                              plVar15 = auVar43._0_8_;
                              lVar30 = func_0x036d5ec8(lVar30);
                              *(undefined1 (*) [16])((long)puVar9 + -0x1b8) = auVar43;
                              uVar38 = func_0x022bf4f8((undefined1 *)((long)puVar9 + -0x1b8),
                                                       _DAT_05a27fc8);
                              if ((uVar38 & 1) == 0) {
                                plVar31 = (long *)0x0;
                                uVar18 = 0;
                              }
                              else {
                                plVar15 = (long *)func_0x023f3ca0((undefined1 *)
                                                                  ((long)puVar9 + -0x1b8),
                                                                  _DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uVar18 = func_0x03530158(plVar15,0);
                                *(undefined8 *)((long)puVar9 + -0x188) = uVar18;
                                *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                                (undefined1 *)((long)puVar9 + -0x188),_DAT_05a28018)
                                ;
                                uVar18 = *(undefined8 *)((long)puVar9 + -0x1d8);
                                plVar31 = *(long **)((long)puVar9 + -0x1d0);
                              }
                              auVar7._8_8_ = 0;
                              auVar7._0_8_ = auVar43._8_8_;
                              auVar47 = auVar7 << 0x40;
                              if (lVar30 != 0) {
                                func_0x03753f18(lVar30,uVar18,plVar31,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar10 < 1) {
                          return (char *)0x0;
                        }
                        lVar30 = func_0x036d5ec8(lVar30);
                        if (lVar30 != 0) {
                          *(uint *)(lVar30 + 0x38) = uVar13;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar19 = func_0x036d5e58(lVar30);
              if ((lVar19 != 0) && (plVar27 != (long *)0x0)) {
                lVar33 = *plVar27;
                plVar20 = *(long **)(lVar19 + 0x28);
                uVar25 = (ulong)*(ushort *)(lVar33 + 0x12e);
                if (uVar25 != 0) {
                  piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                      puVar17 = (undefined8 *)(lVar33 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar25 = uVar25 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar25 != 0);
                }
                plVar31 = (long *)0x3;
                puVar17 = (undefined8 *)func_0x024d927c(plVar27);
LAB_036dc3f8:
                uVar25 = (*(code *)*puVar17)(plVar27,puVar17[1]);
                if (plVar20 != (long *)0x0) {
                  plVar31 = (long *)(uVar25 & 0xffffffff);
                  uVar37 = 0;
                  uVar12 = func_0x03700d78(plVar20,plVar16);
                  if (uVar12 == uVar13) {
                    lVar19 = *plVar27;
                    uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar25 != 0) {
                      piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                          puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar25 = uVar25 - 1;
                        piVar39 = piVar39 + 4;
                      } while (uVar25 != 0);
                    }
                    plVar31 = (long *)0x2;
                    puVar17 = (undefined8 *)func_0x024d927c(plVar27);
LAB_036dc760:
                    plVar27 = (long *)(*(code *)*puVar17)(plVar27,puVar17[1]);
                    lVar19 = func_0x036d5e58(lVar30);
                    if (lVar19 != 0) {
                      plVar16 = *(long **)(lVar19 + 0x18);
                      plVar21 = (long *)func_0x03530c84(plVar15,0);
                      if (plVar27 != (long *)0x0) {
                        lVar19 = *plVar27;
                        uVar37 = (ulong)*(ushort *)(lVar19 + 0x12e);
                        if (uVar37 != 0) {
                          piVar39 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar39 + -2) == _DAT_059deb60) {
                              puVar17 = (undefined8 *)(lVar19 + (long)(*piVar39 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar37 = uVar37 - 1;
                            piVar39 = piVar39 + 4;
                          } while (uVar37 != 0);
                        }
                        puVar17 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar17)(plVar27,plVar16,plVar32,plVar21,puVar17[1]);
                        func_0x037275b8(lVar30,plVar15,1,0);
                        func_0x03727828(lVar30,plVar32,plVar15,0);
                        plVar31 = (long *)(ulong)((uint)uVar36 & 1);
                        uVar37 = (ulong)((uint)uVar38 & 1);
                        uVar28 = 0;
                        uVar13 = func_0x036fa00c(lVar30,plVar32);
                        auVar4._8_4_ = uVar13;
                        auVar4._0_8_ = lVar30;
                        auVar4._12_4_ = 0;
                        auVar47._8_4_ = uVar13;
                        auVar47._0_8_ = lVar30;
                        auVar47._12_4_ = 0;
                        lVar19 = func_0x036d5e58(lVar30);
                        plVar20 = plVar21;
                        if ((lVar19 != 0) && (auVar47 = auVar4, *(long *)(lVar19 + 0x18) != 0)) {
                          auVar43 = func_0x03753e70(*(long *)(lVar19 + 0x18),0);
                          *(undefined1 (*) [16])((long)puVar9 + -0x1a8) = auVar43;
                          lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                            lVar19 = func_0x024d8f40();
                          }
                          pcVar22 = (char *)func_0x0249f90c((undefined1 *)((long)puVar9 + -0x1a8),
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar19 + 0xc0) + 8
                                                                       ) + 0x80));
                          if ((uVar13 & *pcVar22 != '\0') == 0) {
                            uVar18 = *(undefined8 *)((long)puVar9 + -0x1a8);
                            uVar41 = *(undefined8 *)((long)puVar9 + -0x1a0);
                            uVar42 = func_0x03530c84(plVar15,0);
                            *(undefined8 *)((long)puVar9 + -0x188) = uVar42;
                            *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                            func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                            (undefined1 *)((long)puVar9 + -0x188),_DAT_05a27fa0);
                            plVar31 = *(long **)((long)puVar9 + -0x1d8);
                            uVar37 = *(ulong *)((long)puVar9 + -0x1d0);
                            uVar28 = 0;
                            auVar43 = func_0x03489150(uVar18,uVar41);
                          }
                          else {
                            uVar18 = func_0x03530c84(plVar15,0);
                            *(undefined8 *)((long)puVar9 + -0x188) = uVar18;
                            *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                            plVar31 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                            (undefined1 *)((long)puVar9 + -0x188));
                            auVar43 = *(undefined1 (*) [16])((long)puVar9 + -0x1d8);
                          }
                          uVar24 = auVar43._8_8_;
                          uVar18 = auVar43._0_8_;
                          auVar47._8_8_ = uVar18;
                          lVar19 = func_0x036d5e58(lVar30);
                          if (lVar19 != 0) {
                            *(undefined1 (*) [16])((long)puVar9 + -0x1b8) = auVar43;
                            plVar15 = *(long **)(lVar19 + 0x18);
                            lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                              lVar19 = func_0x024d8f40();
                            }
                            pcVar22 = (char *)func_0x0249f90c((undefined1 *)((long)puVar9 + -0x1b8),
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar19 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar22 == '\0') {
                              plVar31 = (long *)0x0;
                              uVar41 = 0;
                            }
                            else {
                              uVar18 = func_0x023f3ca0((undefined1 *)((long)puVar9 + -0x1b8),
                                                       _DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uVar41 = func_0x03530158(uVar18,0);
                              *(undefined8 *)((long)puVar9 + -0x188) = uVar41;
                              *(undefined8 *)((long)puVar9 + -0x1d8) = 0;
                              *(undefined8 *)((long)puVar9 + -0x1d0) = 0;
                              func_0x028866e4((undefined1 *)((long)puVar9 + -0x1d8),
                                              (undefined1 *)((long)puVar9 + -0x188),_DAT_05a28018);
                              uVar41 = *(undefined8 *)((long)puVar9 + -0x1d8);
                              plVar31 = *(long **)((long)puVar9 + -0x1d0);
                            }
                            auVar6._8_8_ = uVar18;
                            auVar6._0_8_ = lVar30;
                            auVar5._8_8_ = uVar18;
                            auVar5._0_8_ = lVar30;
                            auVar47._8_8_ = uVar18;
                            if (plVar15 != (long *)0x0) {
                              uVar37 = 0;
                              func_0x03753f18(plVar15,uVar41);
                              lVar30 = func_0x036d5e58(lVar30);
                              auVar47 = auVar5;
                              if ((lVar30 != 0) && (auVar47 = auVar6, *(long *)(lVar30 + 0x18) != 0)
                                 ) {
                                func_0x03754328(*(long *)(lVar30 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    plVar20 = (long *)(ulong)uVar12;
                    if ((int)uVar12 < 1) {
                      return (char *)0x0;
                    }
                    lVar30 = func_0x036d5ec8(lVar30);
                    if (lVar30 != 0) {
                      func_0x03754330(lVar30,plVar20,0);
                      return (char *)0x1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar18 = auVar47._8_8_;
  func_0x0249fb90();
  *(undefined8 *)((long)puVar9 + -0x1f0) = 0x36dcaf8;
  lVar30 = func_0x036d5e58();
  if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x18), lVar30 != 0)) {
    *(undefined8 *)((long)puVar9 + -0x210) = *(undefined8 *)((long)puVar9 + -0x1f0);
    *(ulong *)((long)puVar9 + -0x200) = uVar24;
    *(undefined8 *)((long)puVar9 + -0x1f8) = uVar18;
    *(long **)((long)puVar9 + -0x1f0) = plVar15;
    *(long *)((long)puVar9 + -0x1e8) = auVar47._0_8_;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x024d8f40();
    }
    pcVar22 = (char *)func_0x0249f90c(lVar30 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
    if (*pcVar22 != '\0') {
      func_0x02886844(lVar30 + 0x50,(undefined1 *)((long)puVar9 + -0x208),_DAT_05a27fd0);
      uVar18 = *(undefined8 *)((long)puVar9 + -0x208);
      uVar41 = *(undefined8 *)(lVar30 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar37 = func_0x0430deb0(uVar18,uVar41,0);
      if ((uVar37 & 1) != 0) {
        func_0x02886844(lVar30 + 0x50,(undefined1 *)((long)puVar9 + -0x208),_DAT_05a27fd0);
        return *(char **)((long)puVar9 + -0x208);
      }
    }
    return *(char **)(lVar30 + 0x28);
  }
  auVar43 = func_0x0249fb90();
  uVar41 = auVar43._0_8_;
  *(undefined8 *)((long)puVar9 + -0x210) = 0x36dcb1c;
  *(long **)((long)puVar9 + -0x200) = plVar15;
  *(long *)((long)puVar9 + -0x1f8) = auVar47._0_8_;
  *(long *)((long)puVar9 + -0x208) = auVar43._8_8_;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar30 = func_0x036d5e58(uVar41);
  if (lVar30 != 0) {
    lVar30 = *(long *)(lVar30 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar42 = func_0x0352eeec((undefined1 *)((long)puVar9 + -0x208),0);
    uVar41 = 0;
    if (lVar30 != 0) {
      pcVar22 = (char *)func_0x03753bf0(lVar30,uVar42,0);
      return pcVar22;
    }
  }
  func_0x0249fb90();
  *(undefined8 *)((long)puVar9 + -0x220) = 0x36dcba8;
  *(undefined8 *)((long)puVar9 + -0x218) = uVar41;
  lVar30 = func_0x036d5e58();
  if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x18), lVar30 != 0)) {
    *(undefined8 *)((long)puVar9 + -0x250) = *(undefined8 *)((long)puVar9 + -0x220);
    *(long **)((long)puVar9 + -0x248) = plVar16;
    *(long **)((long)puVar9 + -0x240) = plVar27;
    *(ulong *)((long)puVar9 + -0x238) = uVar36 & 0xffffffff;
    *(ulong *)((long)puVar9 + -0x230) = uVar24;
    *(undefined8 *)((long)puVar9 + -0x228) = uVar18;
    *(undefined8 *)((long)puVar9 + -0x220) = 0x5e2d000;
    *(undefined8 *)((long)puVar9 + -0x218) = *(undefined8 *)((long)puVar9 + -0x218);
    *(undefined8 *)((long)puVar9 + -0x260) = extraout_x1_00;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    *(undefined8 *)((long)puVar9 + -0x270) = 0;
    *(undefined8 *)((long)puVar9 + -0x268) = 0;
    uVar37 = func_0x0375309c(lVar30);
    if ((uVar37 & 1) != 0) {
      uVar18 = *(undefined8 *)(lVar30 + 0x60);
      iVar10 = *(int *)(_DAT_059e2be8 + 0xe4);
      *(undefined8 *)((long)puVar9 + -0x268) = *(undefined8 *)(lVar30 + 0x68);
      *(undefined8 *)((long)puVar9 + -0x270) = uVar18;
      if (iVar10 == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0352eeec((undefined1 *)((long)puVar9 + -0x260),0);
      lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x024d8f40(lVar19);
      }
      pcVar22 = (char *)func_0x0249f90c((undefined1 *)((long)puVar9 + -0x270),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
      lVar19 = _DAT_05a27fb0;
      if (*pcVar22 == '\0') {
        uVar18 = 0;
        uVar41 = 0;
      }
      else {
        lVar34 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar34 + 0x135);
        lVar33 = lVar34;
        if ((uVar1 & 1) == 0) {
          lVar34 = func_0x024d8f40(lVar34);
          uVar1 = *(ushort *)(*(long *)(lVar19 + 0x20) + 0x135);
          lVar33 = *(long *)(lVar19 + 0x20);
        }
        uVar14 = *(undefined4 *)(**(long **)(lVar34 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar33 = func_0x024d8f40(lVar33);
        }
        uVar41 = func_0x0249f90c((undefined1 *)((long)puVar9 + -0x270),
                                 *(long *)(*(long *)(*(long *)(lVar33 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0((undefined1 *)((long)puVar9 + -0x280),uVar41,uVar14);
        uVar41 = *(undefined8 *)((long)puVar9 + -0x280);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar18 = func_0x0430d994(uVar41,uVar18,0);
        *(undefined8 *)((long)puVar9 + -600) = uVar18;
        *(undefined8 *)((long)puVar9 + -0x280) = 0;
        *(undefined8 *)((long)puVar9 + -0x278) = 0;
        func_0x028866e4((undefined1 *)((long)puVar9 + -0x280),(undefined1 *)((long)puVar9 + -600),
                        _DAT_05a27fa0);
        uVar41 = *(undefined8 *)((long)puVar9 + -0x278);
        uVar18 = *(undefined8 *)((long)puVar9 + -0x280);
      }
      *(undefined8 *)(lVar30 + 0x68) = uVar41;
      *(undefined8 *)(lVar30 + 0x60) = uVar18;
    }
    lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x024d8f40();
    }
    pcVar22 = (char *)func_0x0249f90c(lVar30 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
    if (*pcVar22 != '\0') {
      func_0x02886844(lVar30 + 0x18,(undefined1 *)((long)puVar9 + -0x280),_DAT_05a27fd0);
      uVar18 = *(undefined8 *)((long)puVar9 + -0x280);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar41 = func_0x0352eeec((undefined1 *)((long)puVar9 + -0x260),0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      uVar18 = func_0x0430d994(uVar18,uVar41,0);
      *(undefined8 *)((long)puVar9 + -600) = uVar18;
      *(undefined8 *)((long)puVar9 + -0x280) = 0;
      *(undefined8 *)((long)puVar9 + -0x278) = 0;
      pcVar22 = (char *)func_0x028866e4((undefined1 *)((long)puVar9 + -0x280),
                                        (undefined1 *)((long)puVar9 + -600),_DAT_05a27fa0);
      uVar18 = *(undefined8 *)((long)puVar9 + -0x280);
      *(undefined8 *)(lVar30 + 0x20) = *(undefined8 *)((long)puVar9 + -0x278);
      *(undefined8 *)(lVar30 + 0x18) = uVar18;
    }
    return pcVar22;
  }
  auVar43 = func_0x0249fb90();
  plVar23 = auVar43._8_8_;
  plVar21 = auVar43._0_8_;
  *(undefined8 *)((long)puVar9 + -0x280) = 0x36dcbd4;
  *(undefined **)((long)puVar9 + -0x270) = unaff_x28;
  *(undefined **)((long)puVar9 + -0x268) = unaff_x27;
  *(long **)((long)puVar9 + -0x260) = plVar20;
  *(long **)((long)puVar9 + -600) = plVar16;
  *(long **)((long)puVar9 + -0x250) = plVar27;
  *(ulong *)((long)puVar9 + -0x248) = uVar36 & 0xffffffff;
  *(ulong *)((long)puVar9 + -0x240) = uVar24;
  *(undefined8 *)((long)puVar9 + -0x238) = uVar18;
  *(undefined8 *)((long)puVar9 + -0x230) = 0x5e2d000;
  *(undefined8 *)((long)puVar9 + -0x228) = extraout_x1_00;
  plVar27 = (long *)0x5e2d000;
  plVar16 = plVar31;
  uVar36 = uVar37;
  uVar38 = uVar28;
  plVar15 = plVar26;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar23 != (long *)0x0) {
    lVar30 = *plVar23;
    uVar24 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar24 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == _DAT_059df8e8) {
          puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar24 = uVar24 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar24 != 0);
    }
    plVar16 = (long *)0x5;
    puVar17 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dccc4:
    uVar18 = (*(code *)*puVar17)(plVar23,puVar17[1]);
    plVar20 = (long *)plVar21[2];
    if (plVar20 != (long *)0x0) {
      plVar27 = (long *)(**(code **)(*plVar20 + 0x1c8))
                                  (plVar20,uVar18,*(undefined8 *)(*plVar20 + 0x1d0));
      pcVar22 = (char *)0x0;
      if (plVar27 != (long *)0x0) {
        plVar16 = (long *)0x0;
        uVar24 = func_0x036edd98(plVar21,uVar18);
        if ((uVar24 & 1) != 0) {
          lVar30 = *plVar27;
          uVar24 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar24 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar24 = uVar24 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar24 != 0);
          }
          plVar16 = (long *)0x19;
          puVar17 = (undefined8 *)func_0x024d927c(plVar27);
LAB_036dce14:
          plVar20 = (long *)(*(code *)*puVar17)(plVar27,puVar17[1]);
          if (plVar20 != (long *)0x0) {
            lVar30 = *plVar20;
            uVar24 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar24 != 0) {
              piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == _DAT_059e0150) {
                  puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar24 = uVar24 - 1;
                piVar39 = piVar39 + 4;
              } while (uVar24 != 0);
            }
            plVar16 = (long *)0x0;
            puVar17 = (undefined8 *)func_0x024d927c(plVar20);
LAB_036dce7c:
            uVar24 = (*(code *)*puVar17)(plVar20,puVar17[1]);
            if ((uVar24 & 1) == 0) {
LAB_036dcf40:
              lVar30 = *plVar27;
              uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar36 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar36 = uVar36 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar36 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar16 = (long *)(*(code *)*puVar17)(plVar27,puVar17[1]);
              *(undefined8 *)((long)puVar9 + -0x260) = *(undefined8 *)((long)puVar9 + -0x280);
              *(undefined8 *)((long)puVar9 + -600) = *(undefined8 *)((long)puVar9 + -600);
              *(undefined8 *)((long)puVar9 + -0x250) = *(undefined8 *)((long)puVar9 + -0x250);
              *(undefined8 *)((long)puVar9 + -0x248) = *(undefined8 *)((long)puVar9 + -0x248);
              *(undefined8 *)((long)puVar9 + -0x240) = *(undefined8 *)((long)puVar9 + -0x240);
              *(undefined8 *)((long)puVar9 + -0x238) = *(undefined8 *)((long)puVar9 + -0x238);
              *(undefined8 *)((long)puVar9 + -0x230) = *(undefined8 *)((long)puVar9 + -0x230);
              *(undefined8 *)((long)puVar9 + -0x228) = *(undefined8 *)((long)puVar9 + -0x228);
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar16 == (long *)0x0) {
                lVar30 = func_0x0249fb90();
                return *(char **)(lVar30 + 0x10);
              }
              lVar30 = *plVar16;
              uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar36 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059deb70) {
                    puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar36 = uVar36 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar36 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb70,0);
LAB_03751b38:
              uVar18 = (*(code *)*puVar17)(plVar16,puVar17[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              *(long **)((long)puVar9 + -0x270) = plVar31;
              *(ulong *)((long)puVar9 + -0x268) = uVar37;
              func_0x0288f218((undefined1 *)((long)puVar9 + -0x270),
                              (undefined1 *)((long)puVar9 + -0x288),_DAT_05a29e48);
              *(undefined8 *)((long)puVar9 + -0x298) = *(undefined8 *)((long)puVar9 + -0x280);
              *(undefined8 *)((long)puVar9 + -0x2a0) = *(undefined8 *)((long)puVar9 + -0x288);
              *(undefined8 *)((long)puVar9 + -0x290) = *(undefined8 *)((long)puVar9 + -0x278);
              pcVar22 = (char *)func_0x0371f1bc(uVar18,plVar23,(undefined1 *)((long)puVar9 + -0x2a0)
                                                ,param_7,0);
              return pcVar22;
            }
            plVar21 = plVar20;
            if (plVar31 != (long *)0x0) {
              lVar30 = *plVar31;
              uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar36 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059defb8) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar36 = uVar36 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar36 != 0);
              }
              puVar17 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059defb8,0xb);
LAB_036dcee8:
              uVar36 = puVar17[1];
              plVar16 = plVar26;
              uVar24 = (*(code *)*puVar17)(plVar31,uVar28);
              if ((uVar24 & 1) == 0) goto LAB_036dcf40;
              lVar30 = *plVar27;
              uVar24 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar24 != 0) {
                piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar39 + -2) == _DAT_059dfbc0) {
                    puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dcfe0;
                  }
                  uVar24 = uVar24 - 1;
                  piVar39 = piVar39 + 4;
                } while (uVar24 != 0);
              }
              plVar16 = (long *)0x19;
              puVar17 = (undefined8 *)func_0x024d927c(plVar27);
LAB_036dcfe0:
              plVar20 = (long *)(*(code *)*puVar17)(plVar27,puVar17[1]);
              if (plVar20 != (long *)0x0) {
                lVar30 = *plVar20;
                uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar36 != 0) {
                  piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar39 + -2) == _DAT_059e0150) {
                      puVar17 = (undefined8 *)(lVar30 + (long)(*piVar39 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar36 = uVar36 - 1;
                    piVar39 = piVar39 + 4;
                  } while (uVar36 != 0);
                }
                puVar17 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar22 = (char *)(*(code *)*puVar17)(plVar20,plVar23,plVar31,uVar37,param_7,
                                                      puVar17[1]);
                return pcVar22;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar16 = (long *)0x0;
        uVar24 = func_0x036edf9c(plVar21,uVar18);
        pcVar22 = (char *)0x0;
        if ((uVar24 & 1) != 0) {
          lVar30 = func_0x036d5e58(plVar21);
          if ((lVar30 == 0) || (*(long *)(lVar30 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar18 = *(undefined8 *)(*(long *)(lVar30 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          *(long **)((long)puVar9 + -0x290) = plVar31;
          *(ulong *)((long)puVar9 + -0x288) = uVar37;
          func_0x0288f218((undefined1 *)((long)puVar9 + -0x290),
                          (undefined1 *)((long)puVar9 + -0x2a8),_DAT_05a29e48);
          *(undefined8 *)((long)puVar9 + -0x2b8) = *(undefined8 *)((long)puVar9 + -0x2a0);
          *(undefined8 *)((long)puVar9 + -0x2c0) = *(undefined8 *)((long)puVar9 + -0x2a8);
          *(undefined8 *)((long)puVar9 + -0x2b0) = *(undefined8 *)((long)puVar9 + -0x298);
          pcVar22 = (char *)func_0x0371f1bc(uVar18,plVar23,(undefined1 *)((long)puVar9 + -0x2c0),
                                            param_7,0);
        }
      }
      return pcVar22;
    }
  }
LAB_036dd07c:
  auVar43 = func_0x0249fb90();
  *(undefined8 *)((long)puVar9 + -0x310) = 0x36dd080;
  *(long **)((long)puVar9 + -0x300) = plVar21;
  *(long **)((long)puVar9 + -0x2f8) = plVar27;
  *(ulong *)((long)puVar9 + -0x2f0) = uVar28;
  *(long **)((long)puVar9 + -0x2e8) = plVar26;
  *(long **)((long)puVar9 + -0x2e0) = plVar31;
  *(ulong *)((long)puVar9 + -0x2d8) = uVar37;
  *(long **)((long)puVar9 + -0x2d0) = plVar23;
  *(undefined8 *)((long)puVar9 + -0x2c8) = param_7;
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar22 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar22,0);
  pcVar22[0x10] = -2;
  pcVar22[0x11] = -1;
  pcVar22[0x12] = -1;
  pcVar22[0x13] = -1;
  uVar14 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar22 + 0x20) = uVar14;
  *(long *)(pcVar22 + 0x28) = auVar43._0_8_;
  func_0x0249f888(pcVar22 + 0x28,auVar43._0_8_);
  *(long *)(pcVar22 + 0x78) = auVar43._8_8_;
  func_0x0249f888(pcVar22 + 0x78,auVar43._8_8_);
  *(long **)(pcVar22 + 0x38) = plVar16;
  func_0x0249f888(pcVar22 + 0x38,plVar16);
  *(ulong *)(pcVar22 + 0x68) = uVar36;
  *(ulong *)(pcVar22 + 0x50) = uVar38;
  *(long **)(pcVar22 + 0x58) = plVar15;
  func_0x0249f888(pcVar22 + 0x50,0);
  return pcVar22;
}


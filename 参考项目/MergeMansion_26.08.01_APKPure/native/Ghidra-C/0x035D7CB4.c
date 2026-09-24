/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean UpdateVisibility(GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.Board.Coordinate coordinate)
 * Ghidra function entry: 036d7cb4
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036d8148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036d814c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_036d7cb4(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 extraout_x1;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long *unaff_x25;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  auVar22._8_8_ = param_4;
  auVar22._0_8_ = param_3;
  plVar14 = param_3;
  plVar15 = param_5;
  if ((bRam0000000005e2da27 & 1) == 0) {
    func_0x0249f8e4(&DAT_059dc098);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2da27 = 1;
  }
  iVar1 = (int)param_1[3];
  if ((iVar1 != 3) && (iVar1 != 1)) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 3) = 1;
    }
    return (long *)(ulong)(iVar1 == 0);
  }
  *(undefined4 *)(param_1 + 3) = 2;
  if (param_3 != (long *)0x0) {
    lVar16 = *param_3;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 5) * 0x10 + 0x138);
          goto LAB_036d7dd8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    plVar14 = (long *)0x5;
    puVar5 = (undefined8 *)func_0x024d927c(param_3);
LAB_036d7dd8:
    uVar6 = (*(code *)*puVar5)(param_3,puVar5[1]);
    plVar17 = (long *)param_1[2];
    if (plVar17 != (long *)0x0) {
      plVar14 = *(long **)(*plVar17 + 0x1d0);
      plVar17 = (long *)(**(code **)(*plVar17 + 0x1c8))(plVar17,uVar6);
      if (plVar17 != (long *)0x0) {
        lVar16 = *plVar17;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _DAT_059dfbc0) {
              puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_036d7e60;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        plVar14 = (long *)0x1;
        puVar5 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036d7e60:
        plVar7 = (long *)(*(code *)*puVar5)(plVar17,puVar5[1]);
        if (plVar7 != (long *)0x0) {
          lVar16 = *plVar7;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059df498) {
                puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 9) * 0x10 + 0x138);
                goto LAB_036d7ecc;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar14 = (long *)0x9;
          puVar5 = (undefined8 *)func_0x024d927c(plVar7);
LAB_036d7ecc:
          uVar18 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar18 & 1) != 0) {
            unaff_x25 = (long *)func_0x036d5e58(param_1);
            uVar6 = func_0x03530c84(param_2,0);
            lVar16 = func_0x0249fb80(_DAT_059dc098);
            plVar14 = (long *)0x0;
            func_0x037304b8(lVar16,uVar6);
            if (unaff_x25 == (long *)0x0) goto LAB_036d816c;
            plVar7 = unaff_x25 + 2;
            *plVar7 = lVar16;
            func_0x0249f888(plVar7,lVar16);
            plVar14 = param_3;
            func_0x036d6344(param_1,param_2);
          }
          lVar16 = *plVar17;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059dfbc0) {
                puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                goto LAB_036d7f90;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar14 = (long *)0x3;
          puVar5 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036d7f90:
          plVar8 = (long *)(*(code *)*puVar5)(plVar17,puVar5[1]);
          unaff_x25 = plVar7;
          if (plVar8 != (long *)0x0) {
            lVar16 = *plVar8;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059deb70) {
                  puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
                  goto LAB_036d7ffc;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            plVar14 = (long *)0xd;
            puVar5 = (undefined8 *)func_0x024d927c(plVar8);
LAB_036d7ffc:
            uVar18 = (*(code *)*puVar5)(plVar8,puVar5[1]);
            if ((uVar18 & 1) != 0) {
              func_0x037275b8(param_1,param_2,1,0);
              param_4 = (long *)0x0;
              plVar14 = param_2;
              func_0x03727828(param_1,param_3);
            }
            lVar16 = *plVar17;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059dfbc0) {
                  puVar5 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_036d8080;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            plVar14 = (long *)0x0;
            puVar5 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036d8080:
            plVar17 = (long *)(*(code *)*puVar5)(plVar17,puVar5[1]);
            unaff_x25 = plVar8;
            if (plVar17 != (long *)0x0) {
              lVar16 = *plVar17;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == _DAT_059e0788) {
                    puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                    goto LAB_036d80ec;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar5 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0788,6);
LAB_036d80ec:
              uVar18 = (*(code *)*puVar5)(plVar17,puVar5[1]);
              if ((uVar18 & 1) != 0) {
                func_0x03727e60(param_1,param_2,0);
                func_0x03727ff0(param_1,param_3,param_2,0);
              }
              if (*(int *)(_DAT_059e2700 + 0xe4) == 0) {
                func_0x0249fa64();
                auVar22 = auVar3;
              }
              goto SUB_036d8170;
            }
          }
        }
      }
    }
  }
LAB_036d816c:
  param_1 = param_4;
  param_5 = plVar14;
  auVar22 = func_0x0249fb90();
  plVar8 = unaff_x25;
SUB_036d8170:
  plVar20 = auVar22._8_8_;
  plVar9 = auVar22._0_8_;
  plVar17 = (long *)0x5e2d000;
  plVar10 = plVar9;
  plVar14 = param_5;
  plVar7 = param_1;
  if ((bRam0000000005e2da28 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8a40);
    func_0x0249f8e4(&DAT_059d8be0);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a02640);
    func_0x0249f8e4(&DAT_05a02648);
    func_0x0249f8e4(&DAT_05a02650);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059cd818);
    func_0x0249f8e4(&DAT_059cd830);
    func_0x0249f8e4(&DAT_05a15438);
    func_0x0249f8e4(&DAT_05a1fd20);
    plVar10 = (long *)func_0x0249f8e4(&DAT_05a7fca0);
    bRam0000000005e2da28 = 1;
  }
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  if (plVar20 != (long *)0x0) {
    if (plVar9 == (long *)0x0) goto LAB_036d88c0;
    lVar16 = *plVar9;
    param_2 = (long *)plVar20[6];
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 5) * 0x10 + 0x138);
          goto LAB_036d82c8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    plVar14 = (long *)0x5;
    puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_036d82c8:
    plVar10 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    if (plVar10 == (long *)0x0) goto LAB_036d88c0;
    lVar16 = *plVar10;
    plVar17 = (long *)&DAT_059dfe60;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _DAT_059dfe60) {
          puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x36) * 0x10 + 0x138);
          goto LAB_036d8334;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    plVar14 = (long *)0x36;
    puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe60,0x36);
LAB_036d8334:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    if (plVar10 == (long *)0x0) goto LAB_036d88c0;
    lVar16 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _DAT_059cd830) {
          puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_036d83a0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059cd830,1);
LAB_036d83a0:
    plVar7 = (long *)puVar5[1];
    plVar14 = &lStack_d0;
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,param_2,plVar14,plVar7);
    if (((ulong)plVar10 & 1) != 0) {
      if (lStack_d0 == 0) goto LAB_036d88c0;
      iVar1 = *(int *)(lStack_d0 + 100);
      if (0 < iVar1) {
        lVar16 = *plVar9;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 5) * 0x10 + 0x138);
              goto LAB_036d841c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        plVar14 = (long *)0x5;
        puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_036d841c:
        plVar10 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        if (plVar10 == (long *)0x0) goto LAB_036d88c0;
        lVar16 = *plVar10;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _DAT_059dfe60) {
              puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 9) * 0x10 + 0x138);
              goto LAB_036d8480;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        plVar14 = (long *)0x9;
        puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe60,9);
LAB_036d8480:
        plVar11 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
        plVar8 = plVar10;
        if (plVar11 == (long *)0x0) goto LAB_036d88c0;
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _DAT_059cd818) {
              puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_036d84ec;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059cd818,1);
LAB_036d84ec:
        plVar7 = (long *)puVar5[1];
        plVar14 = &lStack_d8;
        uVar18 = (*(code *)*puVar5)(plVar11,param_2,plVar14,plVar7);
        plVar8 = param_1;
        plVar10 = plVar20;
        plVar21 = param_5;
        if ((uVar18 & 1) == 0) goto LAB_036d8734;
        plVar8 = plVar11;
        plStack_120 = plVar20;
        plStack_118 = param_1;
        plStack_110 = param_5;
        if (lStack_d8 == 0) goto LAB_036d88c0;
        func_0x028310e8(lStack_d8,&lStack_108,_DAT_05a15438);
        plStack_e8 = plStack_100;
        lStack_f0 = lStack_108;
        uStack_e0 = uStack_f8;
        plVar17 = (long *)&DAT_05a1fd20;
        plStack_100 = &lStack_f0;
        param_1 = (long *)&DAT_059d8be0;
        plVar20 = (long *)&DAT_05a7fca0;
        lStack_108 = 0;
        do {
          uVar18 = func_0x02a5d2d0(&lStack_f0,_DAT_05a02648);
          lVar16 = _DAT_05a02650;
          if ((uVar18 & 1) == 0) {
            func_0x02a5d2cc(&lStack_f0,_DAT_05a02640);
            plVar8 = plStack_118;
            plVar10 = plStack_120;
            plVar21 = plStack_110;
            goto LAB_036d8734;
          }
          lVar12 = *(long *)(_DAT_05a02650 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
          lVar13 = lVar12;
          if ((uVar2 & 1) == 0) {
            lVar13 = func_0x024d8f40();
            lVar12 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar12 + 0x135);
          }
          plVar14 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar12 = func_0x024d8f40();
          }
          uVar6 = func_0x0249f90c(&lStack_f0,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
          func_0x054ed0d0(&plStack_c8,uVar6,plVar14);
          plVar11 = plStack_c8;
          lVar16 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
                puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x34) * 0x10 + 0x138);
                goto LAB_036d8640;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar14 = (long *)0x34;
          puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0220,0x34);
LAB_036d8640:
          lVar16 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          if (lVar16 == 0) goto LAB_036d88c4;
          lVar16 = func_0x0284c460(lVar16,plVar11,_DAT_05a1fd20);
          if (lVar16 != 0) {
            func_0x03905844(lVar16,plVar9,iVar1,0);
            param_5 = (long *)func_0x0249fb80(_DAT_059d8be0);
            plVar15 = (long *)0x0;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            func_0x03868e14(param_5,plVar11,param_2,iVar1,0,_DAT_05a7fca0,0,0);
            lVar16 = *plVar9;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
                  puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x65) * 0x10 + 0x138);
                  goto LAB_036d86f8;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0220,0x65);
LAB_036d86f8:
            plVar7 = (long *)puVar5[1];
            (*(code *)*puVar5)(plVar9,param_5,0);
          }
        } while( true );
      }
    }
  }
  return plVar10;
LAB_036d88c4:
  auVar23 = func_0x0249fb90();
  uStack_170 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) goto LAB_036d8924;
  plVar8 = (long *)func_0x054ed080(uStack_170);
  lVar16 = *plVar8;
  lStack_108 = lVar16;
  func_0x054ed090();
  func_0x02a5d2cc(plStack_100,_DAT_05a02640);
  plVar8 = plStack_118;
  plVar10 = plStack_120;
  plVar21 = plStack_110;
  if (lVar16 != 0) {
    uStack_170 = func_0x0249fb88(lVar16);
    goto LAB_036d8924;
  }
LAB_036d8734:
  plVar20 = plVar10;
  param_1 = plVar8;
  plVar14 = (long *)0x0;
  plVar10 = (long *)func_0x037863b8(plVar20,plVar9,0);
  plVar8 = plVar11;
  param_5 = plVar21;
  if (param_2 != (long *)0x0) {
    plVar14 = (long *)param_2[2];
    plVar20 = (long *)((ulong)plVar21 >> 0x20);
    plVar17 = (long *)0x0;
    if (param_1 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      lVar16 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 5) * 0x10 + 0x138);
            goto LAB_036d87c4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_036d87c4:
      uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      plVar8 = (long *)func_0x036eabc4(param_1,uVar6,0);
      plVar17 = plVar9;
    }
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    param_1 = (long *)func_0x0249fb80(_DAT_059d8a40);
    plVar7 = plVar8;
    plVar15 = plVar20;
    func_0x0385d55c(param_1,plVar10,plVar14,plVar8,plVar20,(ulong)plVar21 & 0xffffffff,0);
    param_2 = plVar10;
    if (plVar9 != (long *)0x0) {
      lVar16 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 == 0) goto LAB_036d886c;
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      goto LAB_036d8854;
    }
  }
LAB_036d88c0:
  plVar11 = plVar8;
  func_0x0249fb90();
  goto LAB_036d88c4;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_036d8854:
    if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
      puVar5 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x65) * 0x10 + 0x138);
      goto LAB_036d888c;
    }
  }
LAB_036d886c:
  puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0220,0x65);
LAB_036d888c:
  plVar14 = (long *)(*(code *)*puVar5)(plVar9,param_1,0,puVar5[1]);
  return plVar14;
LAB_036d8924:
  func_0x0240c2b4(&lStack_108);
  func_0x0258f7ac(uStack_170);
  auVar22 = func_0x022bd790();
  uStack_190 = 0x36d8938;
  plStack_180 = param_5;
  plStack_178 = plVar11;
  plStack_168 = param_2;
  plStack_160 = plVar20;
  plStack_158 = param_1;
  plStack_150 = plVar17;
  plStack_148 = plVar9;
  if ((bRam0000000005e2da29 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a34ad8);
    bRam0000000005e2da29 = 1;
  }
  if (*(int *)(auVar22._0_8_ + 0x18) == 2) {
    uVar4 = func_0x036d8ac0(auVar22._0_8_,auVar22._8_8_,plVar14,plVar7);
    if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar6 = func_0x04253c54(1,0);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar6 = func_0x0352ed34(uVar6,0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    uVar6 = func_0x035301e8(plVar15,uVar6,0);
    uVar18 = func_0x0352ff00(extraout_x1,uVar6,0);
    uStack_194 = uVar4;
    uStack_188 = extraout_x1;
    if ((uVar18 & 1) != 0) goto LAB_036d8a90;
  }
  uStack_188 = 0;
  uStack_194 = 0;
LAB_036d8a90:
  uStack_1a0 = 0;
  plStack_1a8 = (long *)0x0;
  func_0x02953678(&plStack_1a8,&uStack_194,&uStack_188,_DAT_05a34ad8);
  return plStack_1a8;
}


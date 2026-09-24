/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Boolean WouldBeValidMergeAttempt(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, Metaplay.Core.MetaTime actionTimestamp)
 * Ghidra function entry: 03783b3c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_03783b3c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5,ulong *param_6,undefined8 param_7)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long **pplVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar15;
  ulong *puVar16;
  long *plVar17;
  char *pcVar18;
  int iVar12;
  int iVar13;
  ulong uVar19;
  long lVar20;
  uint uVar14;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined8 uVar28;
  ulong *puVar29;
  char *pcVar30;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  long *extraout_x1_01;
  ulong *puVar31;
  ulong *puVar32;
  undefined8 uVar33;
  int iVar34;
  long lVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long *plVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  ulong uVar44;
  int *piVar45;
  long **pplVar46;
  undefined *puVar47;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long *plVar48;
  undefined *unaff_x28;
  undefined *unaff_x29;
  long *plVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  ulong *puStack_198;
  long *plStack_190;
  long **pplStack_188;
  ulong *puStack_180;
  long *plStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong auStack_160 [2];
  undefined *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  char *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar36 = param_4;
  uVar28 = param_5;
  if ((bRam0000000005e2dfa2 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2dfa2 = 1;
  }
  plVar17 = param_4;
  uVar25 = func_0x037839a8(param_1,param_3);
  if ((uVar25 & 1) != 0) {
    return (char *)0x0;
  }
  puVar26 = (ulong *)func_0x0376e450(param_1,param_3);
  puVar27 = (ulong *)func_0x0376e450(param_1,param_4);
  if (puVar26 == (ulong *)0x0) {
    return (char *)0x0;
  }
  if (puVar27 == (ulong *)0x0) {
    return (char *)0x0;
  }
  uVar25 = func_0x036f883c(puVar26,0);
  if ((uVar25 & 1) == 0) {
    return (char *)0x0;
  }
  uVar25 = func_0x036f883c(puVar27,0);
  if ((uVar25 & 1) == 0) {
    return (char *)0x0;
  }
  if (param_2 == (long *)0x0) {
    func_0x0249fb90();
    uStack_70 = 0x3783c80;
    plVar48 = plVar36;
    uStack_68 = param_1;
    if ((bRam0000000005e2dfa5 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df0b8);
      func_0x0249f8e4(&DAT_059dfbc0);
      func_0x0249f8e4(&DAT_059e0b88);
      func_0x0249f8e4(&DAT_059e46b8);
      func_0x0249f8e4(&DAT_059e48c8);
      bRam0000000005e2dfa5 = 1;
    }
    plStack_78 = (long *)0x0;
    if (extraout_x1_01 != (long *)0x0) {
      if ((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*extraout_x1_01 + 0x130)) &&
         (*(long *)(*(long *)(*extraout_x1_01 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 +
                   -8) == _DAT_059e48c8)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar50 = 0;
        uVar25 = func_0x03651384(extraout_x1_01,&plStack_78);
        if ((uVar25 & 1) != 0) {
          if (plVar17 == (long *)0x0) goto LAB_037840c4;
          lVar35 = *plVar17;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0xc) * 0x10 + 0x138);
                goto LAB_03783db0;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          uVar50 = 0xc;
          puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_03783db0:
          plVar40 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
          if (plVar40 == (long *)0x0) goto LAB_037840c4;
          lVar35 = *plVar40;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059e0b88) {
                puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                goto LAB_03783e18;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          uVar50 = 0;
          puVar15 = (undefined8 *)func_0x024d927c(plVar40);
LAB_03783e18:
          uVar25 = (*(code *)*puVar15)(plVar40,puVar15[1]);
          if ((uVar25 & 1) != 0) {
            if (plVar36 == (long *)0x0) goto LAB_037840c4;
            lVar35 = *plVar36;
            uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar25 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                  puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0xb) * 0x10 + 0x138);
                  goto LAB_03783e7c;
                }
                uVar25 = uVar25 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar25 != 0);
            }
            uVar50 = 0xb;
            puVar15 = (undefined8 *)func_0x024d927c(plVar36);
LAB_03783e7c:
            plVar40 = (long *)(*(code *)*puVar15)(plVar36,puVar15[1]);
            if (plVar40 == (long *)0x0) goto LAB_037840c4;
            lVar35 = *plVar40;
            uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar25 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059df0b8) {
                  puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                  goto LAB_03783ee4;
                }
                uVar25 = uVar25 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar25 != 0);
            }
            uVar50 = 0;
            puVar15 = (undefined8 *)func_0x024d927c(plVar40);
LAB_03783ee4:
            uVar25 = (*(code *)*puVar15)(plVar40,puVar15[1]);
            if ((uVar25 & 1) == 0) goto LAB_03783f04;
joined_r0x03783ef8:
            if (plStack_78 == (long *)0x0) {
LAB_037840c4:
              auVar52 = func_0x0249fb90();
              uVar51 = auVar52._8_8_;
              pcVar30 = auVar52._0_8_;
              func_0x03787050();
              pcVar18 = pcVar30;
              if ((bRam0000000005e2dfbc & 1) == 0) {
                func_0x0249f8e4(&DAT_059db250);
                pcVar18 = (char *)func_0x0249f8e4(&DAT_059fb928);
                bRam0000000005e2dfbc = 1;
              }
              uVar11 = *(uint *)(pcVar30 + 0x2c);
              uStack_f8 = 0;
              uStack_f0 = 0;
              if (0 < (int)uVar11) {
                uVar25 = 0;
                uVar14 = *(uint *)(pcVar30 + 0x28);
                do {
                  if (0 < (int)uVar14) {
                    uVar43 = 0;
                    do {
                      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                        func_0x0249fa64();
                      }
                      uVar19 = uVar25;
                      func_0x0376e3ec(&uStack_f0,uVar43);
                      uVar37 = uStack_f0;
                      lVar35 = func_0x0376e450(pcVar30,uStack_f0);
                      pcVar18 = (char *)0x0;
                      if (lVar35 != 0) {
                        if (*(long *)(pcVar30 + 0xa0) == 0) {
                          auVar53 = func_0x0249fb90();
                          uVar21 = auVar53._8_8_;
                          plVar17 = auVar53._0_8_;
                          auStack_160[1] = 0x37872c8;
                          puStack_150 = &DAT_059fb928;
                          puStack_148 = &DAT_059db250;
                          uStack_138 = uVar37;
                          uVar38 = uVar19;
                          plVar36 = plVar48;
                          uVar33 = uVar28;
                          auStack_160[0] = (ulong)uVar14;
                          uStack_140 = (ulong)uVar11;
                          lStack_130 = lVar35;
                          uStack_128 = uVar43;
                          uStack_120 = uVar25;
                          uStack_110 = uVar50;
                          if ((bRam0000000005e2dfbb & 1) == 0) {
                            pcStack_118 = pcVar30;
                            uStack_108 = uVar51;
                            func_0x0249f8e4(&DAT_059fb920);
                            func_0x0249f8e4(&DAT_059fb930);
                            func_0x0249f8e4(&DAT_059fb938);
                            func_0x0249f8e4(&DAT_05a02748);
                            func_0x0249f8e4(&DAT_05a02750);
                            func_0x0249f8e4(&DAT_05a02758);
                            func_0x0249f8e4(&DAT_059dd500);
                            func_0x0249f8e4(&DAT_059c6000);
                            func_0x0249f8e4(&DAT_059df008);
                            func_0x0249f8e4(&DAT_05a157b8);
                            auVar52._8_8_ = uStack_108;
                            auVar52._0_8_ = pcStack_118;
                            bRam0000000005e2dfbb = 1;
                          }
                          uStack_108 = auVar52._8_8_;
                          pcStack_118 = auVar52._0_8_;
                          uVar11 = (uint)uVar33;
                          uVar10 = (undefined4)uVar38;
                          plStack_190 = (long *)0x0;
                          pplStack_188 = (long **)0x0;
                          puStack_180 = (ulong *)0x0;
                          uVar25 = 0x5e2d000;
                          if (uVar19 == 0) goto LAB_0378776c;
                          uVar43 = func_0x036debdc(uVar19,uVar28,0);
                          uVar43 = uVar43 & 0xffffffff;
                          uVar39 = func_0x036ded8c(uVar19,uVar28,0);
                          uVar38 = uVar39 & 0xffffffff;
                          uVar10 = 0;
                          plVar40 = (long *)func_0x036def3c(uVar19,uVar28);
                          uVar50 = func_0x0249fb80(_DAT_059c6000);
                          auVar52._8_8_ = uStack_108;
                          auVar52._0_8_ = pcStack_118;
                          uVar25 = uVar43;
                          uVar37 = uVar38;
                          if (plVar17 == (long *)0x0) goto LAB_0378776c;
                          plVar36 = (long *)0x0;
                          uVar51 = *(undefined8 *)(*plVar17 + 0x250);
                          func_0x02a9aa34(uVar50,plVar17,uVar51,0);
                          auVar52._8_8_ = uStack_108;
                          auVar52._0_8_ = pcStack_118;
                          uVar10 = (undefined4)uVar51;
                          if (plVar40 == (long *)0x0) goto LAB_0378776c;
                          lVar35 = *plVar40;
                          uVar44 = (ulong)*(ushort *)(lVar35 + 0x12e);
                          if (uVar44 == 0) goto LAB_03787438;
                          piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                          goto LAB_03787420;
                        }
                        uStack_e8 = uVar37;
                        uVar37 = func_0x02a40640(*(long *)(pcVar30 + 0xa0),&uStack_e8,&uStack_f8,
                                                 _DAT_059fb928);
                        if ((uVar37 & 1) == 0) {
                          plVar48 = (long *)0x0;
                          pcVar18 = (char *)func_0x036e0198(lVar35,uVar50,uVar51);
                        }
                        else {
                          plVar48 = (long *)(uStack_f8 >> 0x20);
                          uVar28 = uVar51;
                          pcVar18 = (char *)func_0x036df8d8(lVar35,uVar50,uStack_f8 & 0xffffffff,
                                                            plVar48,uVar51,0);
                        }
                      }
                      uVar1 = (int)uVar43 + 1;
                      uVar43 = (ulong)uVar1;
                    } while (uVar14 != uVar1);
                  }
                  uVar1 = (int)uVar25 + 1;
                  uVar25 = (ulong)uVar1;
                } while (uVar1 != uVar11);
              }
              return pcVar18;
            }
            uVar11 = func_0x03905498(plStack_78,plVar17,0);
            goto LAB_037840ac;
          }
LAB_03783f04:
          lVar35 = *plVar17;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0xb) * 0x10 + 0x138);
                goto LAB_03783f54;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          uVar50 = 0xb;
          puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_03783f54:
          plVar17 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
          if (plVar17 == (long *)0x0) goto LAB_037840c4;
          lVar35 = *plVar17;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059df0b8) {
                puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                goto LAB_03783fbc;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          uVar50 = 0;
          puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_03783fbc:
          uVar25 = (*(code *)*puVar15)(plVar17,puVar15[1]);
          if ((uVar25 & 1) != 0) {
            if (plVar36 == (long *)0x0) goto LAB_037840c4;
            lVar35 = *plVar36;
            uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar25 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                  puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0xc) * 0x10 + 0x138);
                  goto LAB_03784020;
                }
                uVar25 = uVar25 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar25 != 0);
            }
            uVar50 = 0xc;
            puVar15 = (undefined8 *)func_0x024d927c(plVar36);
LAB_03784020:
            plVar17 = (long *)(*(code *)*puVar15)(plVar36,puVar15[1]);
            if (plVar17 == (long *)0x0) goto LAB_037840c4;
            lVar35 = *plVar17;
            uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar25 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059e0b88) {
                  puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                  goto LAB_03784080;
                }
                uVar25 = uVar25 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar25 != 0);
            }
            uVar50 = 0;
            puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_03784080:
            uVar25 = (*(code *)*puVar15)(plVar17,puVar15[1]);
            plVar17 = plVar36;
            if ((uVar25 & 1) != 0) goto joined_r0x03783ef8;
          }
        }
      }
    }
    uVar11 = 0;
LAB_037840ac:
    return (char *)(ulong)(uVar11 & 1);
  }
  uVar28 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
  uVar25 = func_0x036eb4a0(puVar26,uVar28,0);
  if ((uVar25 & 1) == 0) {
    return (char *)0x0;
  }
  uVar28 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
  uVar25 = func_0x036eb4a0(puVar27,uVar28,0);
  if ((uVar25 & 1) == 0) {
    return (char *)0x0;
  }
  puVar29 = (ulong *)func_0x03530bf4(param_5,0);
  uVar25 = 0;
  puVar31 = puVar27;
  puVar32 = puVar29;
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
  uStack_68 = 0;
  if (param_2 != (long *)0x0) {
    lVar35 = *param_2;
    uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar43 != 0) {
      piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
          puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 5) * 0x10 + 0x138);
          goto LAB_036da040;
        }
        uVar43 = uVar43 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar43 != 0);
    }
    puVar31 = (ulong *)0x5;
    puVar15 = (undefined8 *)func_0x024d927c(param_2);
LAB_036da040:
    puVar16 = (ulong *)(*(code *)*puVar15)(param_2,puVar15[1]);
    plVar36 = (long *)puVar26[2];
    if (plVar36 != (long *)0x0) {
      puVar31 = *(ulong **)(*plVar36 + 0x1d0);
      plVar36 = (long *)(**(code **)(*plVar36 + 0x1c8))(plVar36,puVar16);
      if ((puVar27 != (ulong *)0x0) &&
         (plVar17 = (long *)puVar27[2], unaff_x23 = plVar36, plVar17 != (long *)0x0)) {
        puVar31 = *(ulong **)(*plVar17 + 0x1d0);
        plVar17 = (long *)(**(code **)(*plVar17 + 0x1c8))(plVar17,puVar16);
        if (plVar36 != (long *)0x0) {
          lVar35 = *plVar36;
          unaff_x29 = &DAT_059dfbc0;
          uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar43 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                goto LAB_036da0ec;
              }
              uVar43 = uVar43 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar43 != 0);
          }
          puVar15 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfbc0,2);
LAB_036da0ec:
          unaff_x27 = (long *)(*(code *)*puVar15)(plVar36,puVar15[1]);
          puVar31 = (ulong *)0x0;
          uVar43 = func_0x036eb114(puVar26,puVar16);
          unaff_x24 = plVar17;
          if ((uVar43 & 1) == 0) {
            uStack_70 = uStack_70 & 0xffffffff;
          }
          else {
            lVar35 = func_0x036d5e58(puVar26);
            if ((lVar35 == 0) || (unaff_x25 = *(long **)(lVar35 + 0x38), unaff_x25 == (long *)0x0))
            goto LAB_036da728;
            lVar35 = *unaff_x25;
            uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar43 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059df188) {
                  puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                  goto LAB_036da184;
                }
                uVar43 = uVar43 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar43 != 0);
            }
            puVar15 = (undefined8 *)func_0x024d927c(unaff_x25,_DAT_059df188,5);
LAB_036da184:
            uVar10 = (*(code *)*puVar15)(unaff_x25,puVar29,puVar15[1]);
            uStack_70 = CONCAT44(uVar10,(undefined4)uStack_70);
          }
          puVar31 = (ulong *)0x0;
          uVar43 = func_0x036eb114(puVar27,puVar16);
          if ((uVar43 & 1) == 0) {
            puVar29 = (ulong *)0x0;
LAB_036da234:
            if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            unaff_x25 = (long *)&DAT_059dfe38;
            uVar11 = func_0x036c0cb8(plVar17);
            unaff_x28 = (undefined *)(ulong)uVar11;
            if (unaff_x27 != (long *)0x0) {
              lVar35 = *unaff_x27;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfe38) {
                    puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                    goto LAB_036da2b0;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar31 = (ulong *)0x0;
              puVar15 = (undefined8 *)func_0x024d927c(unaff_x27);
LAB_036da2b0:
              plVar48 = (long *)(*(code *)*puVar15)(unaff_x27,puVar15[1]);
              if (plVar48 == (long *)0x0) goto LAB_036da728;
              lVar35 = *plVar48;
              uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar25 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfe68) {
                    puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                    goto LAB_036da318;
                  }
                  uVar25 = uVar25 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar25 != 0);
              }
              puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059dfe68,0);
LAB_036da318:
              uVar25 = puVar15[1];
              puVar31 = puVar27;
              puVar32 = puVar16;
              uVar43 = (*(code *)*puVar15)(plVar48,puVar26,puVar27,puVar16);
              if ((uVar43 & 1) == 0) {
                unaff_x27 = (long *)0x0;
              }
              else {
                unaff_x27 = (long *)(ulong)(uStack_70._4_4_ & (uint)puVar29 ^ 1);
              }
            }
            if ((uVar11 & ((uint)unaff_x27 ^ 0xffffffff) & 1) == 0) {
LAB_036da49c:
              lVar35 = *plVar36;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x12) * 0x10 + 0x138);
                    goto LAB_036da4ec;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar31 = (ulong *)0x12;
              puVar15 = (undefined8 *)func_0x024d927c(plVar36);
LAB_036da4ec:
              plVar48 = (long *)(*(code *)*puVar15)(plVar36,puVar15[1]);
              unaff_x24 = plVar17;
              if (plVar48 != (long *)0x0) {
                lVar35 = *plVar48;
                unaff_x25 = (long *)&DAT_059df2a8;
                uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar43 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059df2a8) {
                      puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                      goto LAB_036da554;
                    }
                    uVar43 = uVar43 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar43 != 0);
                }
                puVar31 = (ulong *)0x0;
                puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036da554:
                uVar43 = (*(code *)*puVar15)(plVar48,puVar15[1]);
                if ((uVar43 & 1) == 0) {
joined_r0x036da5a4:
                  if (((ulong)unaff_x27 & 1) == 0) {
                    uVar11 = 0;
                  }
                  else {
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64();
                    }
                    uVar25 = func_0x036c69cc(plVar36,puVar16,&uStack_68);
                    uVar28 = uStack_68;
                    if ((uVar25 & 1) == 0) {
                      uVar11 = 1;
                    }
                    else {
                      if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                        func_0x0249fa64();
                      }
                      uVar11 = func_0x036c0a40(uVar28,param_2,0);
                    }
                  }
                  return (char *)(ulong)(uVar11 & 1);
                }
                lVar35 = *plVar36;
                uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar43 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x12) * 0x10 + 0x138);
                      goto LAB_036da614;
                    }
                    uVar43 = uVar43 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar43 != 0);
                }
                puVar31 = (ulong *)0x12;
                puVar15 = (undefined8 *)func_0x024d927c(plVar36);
LAB_036da614:
                plVar17 = (long *)(*(code *)*puVar15)(plVar36,puVar15[1]);
                unaff_x24 = plVar48;
                if (plVar17 != (long *)0x0) {
                  lVar35 = *plVar17;
                  uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar43 != 0) {
                    piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059df2a8) {
                        puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 1) * 0x10 + 0x138);
                        goto LAB_036da678;
                      }
                      uVar43 = uVar43 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar43 != 0);
                  }
                  puVar31 = (ulong *)0x1;
                  puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036da678:
                  plVar48 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
                  unaff_x24 = plVar17;
                  if (plVar48 != (long *)0x0) {
                    lVar35 = *plVar48;
                    uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                    if (uVar25 != 0) {
                      piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar45 + -2) == _DAT_059df2c0) {
                          puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 1) * 0x10 + 0x138);
                          goto LAB_036da6e4;
                        }
                        uVar25 = uVar25 - 1;
                        piVar45 = piVar45 + 4;
                      } while (uVar25 != 0);
                    }
                    puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df2c0,1);
LAB_036da6e4:
                    unaff_x27 = (long *)(*(code *)*puVar15)(plVar48,puVar26,puVar27,param_2,
                                                            puVar15[1]);
                    goto joined_r0x036da5a4;
                  }
                }
              }
            }
            else if (plVar17 != (long *)0x0) {
              lVar35 = *plVar17;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                    goto LAB_036da3a4;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar31 = (ulong *)0x2;
              puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036da3a4:
              plVar48 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
              if (plVar48 != (long *)0x0) {
                lVar35 = *plVar48;
                uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar43 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059dfe38) {
                      puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                      goto LAB_036da404;
                    }
                    uVar43 = uVar43 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar43 != 0);
                }
                puVar31 = (ulong *)0x0;
                puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036da404:
                plVar17 = (long *)(*(code *)*puVar15)(plVar48,puVar15[1]);
                unaff_x24 = plVar48;
                if (plVar17 != (long *)0x0) {
                  lVar35 = *plVar17;
                  uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar25 != 0) {
                    piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059dfe68) {
                        puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                        goto LAB_036da46c;
                      }
                      uVar25 = uVar25 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe68,0);
LAB_036da46c:
                  uVar25 = puVar15[1];
                  puVar31 = puVar26;
                  puVar32 = puVar16;
                  uVar43 = (*(code *)*puVar15)(plVar17,puVar27,puVar26,puVar16);
                  if ((uVar43 & 1) == 0) {
                    unaff_x27 = (long *)0x0;
                  }
                  else {
                    unaff_x27 = (long *)(ulong)(uStack_70._4_4_ & (uint)puVar29 ^ 1);
                  }
                  goto LAB_036da49c;
                }
              }
            }
          }
          else {
            lVar35 = func_0x036d5e58(puVar27);
            if (lVar35 != 0) {
              plVar48 = *(long **)(lVar35 + 0x38);
              unaff_x28 = (undefined *)0x0;
              if (plVar48 != (long *)0x0) {
                lVar35 = *plVar48;
                uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar43 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059df188) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                      goto LAB_036da220;
                    }
                    uVar43 = uVar43 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar43 != 0);
                }
                puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df188,5);
LAB_036da220:
                puVar31 = (ulong *)puVar15[1];
                uVar43 = (*(code *)*puVar15)(plVar48,puVar29);
                puVar29 = (ulong *)(uVar43 & 0xffffffff);
                goto LAB_036da234;
              }
            }
          }
        }
      }
    }
  }
LAB_036da728:
  auVar52 = func_0x0249fb90();
  plVar17 = auVar52._8_8_;
  plVar36 = auVar52._0_8_;
  puVar47 = (undefined *)0x5e2d000;
  puVar26 = puVar31;
  plStack_78 = param_2;
  if ((bRam0000000005e2da2e & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da2e = 1;
  }
  if (plVar17 != (long *)0x0) {
    lVar35 = *plVar17;
    uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar43 != 0) {
      piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
          puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 5) * 0x10 + 0x138);
          goto LAB_036da820;
        }
        uVar43 = uVar43 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar43 != 0);
    }
    puVar15 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059df8e8,5);
LAB_036da820:
    puVar47 = (undefined *)(*(code *)*puVar15)(plVar17,puVar15[1]);
    puVar32 = (ulong *)0x0;
    puVar26 = puVar31;
    func_0x0371f100(&stack0xffffffffffffff30,plVar36,puVar31,0);
    plVar48 = (long *)plVar36[2];
    if (plVar48 != (long *)0x0) {
      puVar31 = (ulong *)(**(code **)(*plVar48 + 0x1c8))
                                   (plVar48,puVar47,*(undefined8 *)(*plVar48 + 0x1d0));
      puVar26 = (ulong *)0x0;
      uVar43 = func_0x036ecc48(plVar36,puVar47);
      if ((uVar43 & 1) == 0) {
        if (puVar31 != (ulong *)0x0) {
          uVar37 = *puVar31;
          puVar47 = &DAT_059dfbc0;
          uVar43 = (ulong)*(ushort *)(uVar37 + 0x12e);
          if (uVar43 != 0) {
            piVar45 = (int *)(*(long *)(uVar37 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(uVar37 + (long)(*piVar45 + 1) * 0x10 + 0x138);
                goto LAB_036da988;
              }
              uVar43 = uVar43 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar43 != 0);
          }
          puVar26 = (ulong *)0x1;
          puVar15 = (undefined8 *)func_0x024d927c(puVar31);
LAB_036da988:
          plVar48 = (long *)(*(code *)*puVar15)(puVar31,puVar15[1]);
          if (plVar48 != (long *)0x0) {
            lVar35 = *plVar48;
            uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar25 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059df498) {
                  puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                  goto LAB_036daa84;
                }
                uVar25 = uVar25 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar25 != 0);
            }
            puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df498,2);
LAB_036daa84:
            plVar36 = (long *)(*(code *)*puVar15)(plVar48,puVar15[1]);
            unaff_x23 = (long *)&DAT_059d4248;
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              uStack_168 = 0;
              uStack_170 = 0;
              func_0x0249fa64(_DAT_059d4248);
            }
            unaff_x24 = (long *)&DAT_05a29e48;
            func_0x0288f218(&stack0xffffffffffffff40,&uStack_e8,_DAT_05a29e48);
            puVar26 = &uStack_120;
            puVar32 = (ulong *)0x0;
            uVar25 = 0;
            uStack_120 = uStack_e8;
            pcVar18 = (char *)func_0x0371f1bc(plVar36,plVar17,puVar26,0);
            if (pcVar18 != (char *)0x0) {
              return pcVar18;
            }
            uVar37 = *puVar31;
            uVar43 = (ulong)*(ushort *)(uVar37 + 0x12e);
            if (uVar43 != 0) {
              piVar45 = (int *)(*(long *)(uVar37 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                  puVar15 = (undefined8 *)(uVar37 + (long)*piVar45 * 0x10 + 0x138);
                  goto LAB_036dab68;
                }
                uVar43 = uVar43 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar43 != 0);
            }
            puVar26 = (ulong *)0x0;
            puVar15 = (undefined8 *)func_0x024d927c(puVar31);
LAB_036dab68:
            plVar48 = (long *)(*(code *)*puVar15)(puVar31,puVar15[1]);
            if (plVar48 != (long *)0x0) {
              lVar35 = *plVar48;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059e0788) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 4) * 0x10 + 0x138);
                    goto LAB_036dabd4;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar26 = (ulong *)0x4;
              puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dabd4:
              plVar40 = (long *)(*(code *)*puVar15)(plVar48,puVar15[1]);
              plVar36 = plVar48;
              if (plVar40 != (long *)0x0) {
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = 0;
                  uStack_170 = 0;
                  func_0x0249fa64();
                }
                func_0x0288f218(&stack0xffffffffffffff40,&uStack_e8,_DAT_05a29e48);
                puVar26 = &uStack_140;
                puVar32 = (ulong *)0x0;
                uVar25 = 0;
                uStack_140 = uStack_e8;
                pcVar18 = (char *)func_0x0371f1bc(plVar40,plVar17,puVar26,0);
                plVar36 = plVar40;
                if (pcVar18 != (char *)0x0) {
                  return pcVar18;
                }
              }
              uVar37 = *puVar31;
              uVar43 = (ulong)*(ushort *)(uVar37 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(uVar37 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(uVar37 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                    goto LAB_036dac94;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar26 = (ulong *)0x3;
              puVar15 = (undefined8 *)func_0x024d927c(puVar31);
LAB_036dac94:
              plVar48 = (long *)(*(code *)*puVar15)(puVar31,puVar15[1]);
              if (plVar48 != (long *)0x0) {
                lVar35 = *plVar48;
                uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar25 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 4) * 0x10 + 0x138);
                      goto LAB_036dad00;
                    }
                    uVar25 = uVar25 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059deb70,4);
LAB_036dad00:
                lVar35 = (*(code *)*puVar15)(plVar48,puVar15[1]);
                if (lVar35 == 0) {
                  return (char *)0x0;
                }
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = 0;
                  uStack_170 = 0;
                  func_0x0249fa64();
                }
                func_0x0288f218(&stack0xffffffffffffff40,&uStack_e8,_DAT_05a29e48);
                puVar26 = auStack_160;
                goto LAB_036daa5c;
              }
            }
          }
        }
      }
      else if (puVar31 != (ulong *)0x0) {
        uVar37 = *puVar31;
        uVar43 = (ulong)*(ushort *)(uVar37 + 0x12e);
        if (uVar43 != 0) {
          piVar45 = (int *)(*(long *)(uVar37 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
              puVar15 = (undefined8 *)(uVar37 + (long)(*piVar45 + 9) * 0x10 + 0x138);
              goto LAB_036da91c;
            }
            uVar43 = uVar43 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar43 != 0);
        }
        puVar26 = (ulong *)0x9;
        puVar15 = (undefined8 *)func_0x024d927c(puVar31);
LAB_036da91c:
        plVar48 = (long *)(*(code *)*puVar15)(puVar31,puVar15[1]);
        if (plVar48 != (long *)0x0) {
          lVar35 = *plVar48;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059e0158) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 4) * 0x10 + 0x138);
                goto LAB_036da9f4;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0158,4);
LAB_036da9f4:
          lVar35 = (*(code *)*puVar15)(plVar48,puVar15[1]);
          if (lVar35 == 0) {
            return (char *)0x0;
          }
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            uStack_168 = 0;
            uStack_170 = 0;
            func_0x0249fa64();
          }
          func_0x0288f218(&stack0xffffffffffffff40,&uStack_e8,_DAT_05a29e48);
          puVar26 = &uStack_100;
          uStack_100 = uStack_e8;
LAB_036daa5c:
          pcVar18 = (char *)func_0x0371f1bc(lVar35,plVar17,puVar26,0,0);
          return pcVar18;
        }
      }
    }
  }
  puVar27 = (ulong *)func_0x0249fb90();
  plStack_190 = (long *)0x36dad60;
  puStack_180 = puVar31;
  plStack_178 = plVar17;
  if ((bRam0000000005e2da4a & 1) == 0) {
    func_0x0249f8e4(&DAT_059dd500);
    bRam0000000005e2da4a = 1;
  }
  lVar35 = func_0x036d5e58(puVar27);
  if (lVar35 != 0) {
    if (*(long *)(lVar35 + 0x40) == 0) {
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
      pcVar18 = (char *)0x10000;
    }
    else {
      pcVar18 = (char *)(ulong)*(uint *)(*(long *)(lVar35 + 0x40) + 0x10);
    }
    return pcVar18;
  }
  auVar52 = func_0x0249fb90();
  pplVar46 = auVar52._0_8_;
  plStack_1b0 = (long *)0x36dae04;
  pplStack_1a0 = (long **)0x5e2d000;
  plStack_1a8 = plVar36;
  puStack_198 = puVar27;
  plVar36 = (long *)func_0x03530c84(auVar52._8_8_,0);
  pplVar9 = &plStack_1d0;
  plStack_1d0 = plStack_1b0;
  plVar17 = (long *)0x5e2d000;
  plStack_1c0 = unaff_x24;
  plStack_1b8 = unaff_x23;
  plStack_1b0 = (long *)puVar47;
  if ((bRam0000000005e2da30 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2da30 = 1;
  }
  plVar48 = (long *)&DAT_059e2c00;
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar27 = (ulong *)pplVar46;
  func_0x0364aa28(puVar26,puVar32,pplVar46,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar28 = func_0x03530158(plVar36,0);
  auVar53._8_8_ = uVar28;
  auVar53._0_8_ = pplVar46;
  if (extraout_x1 == (undefined *)0x0) {
    uVar43 = 1;
    if (pplVar46 == (long **)0x0) goto LAB_036daf14;
LAB_036daef0:
    pplVar9 = &plStack_190;
    puVar27 = puVar26;
    puVar26 = puStack_198;
    pplVar46 = pplStack_1a0;
    plVar36 = plStack_1a8;
    plVar40 = plStack_1b0;
    plVar48 = plStack_1b8;
    plVar17 = plStack_1c0;
    plVar49 = plStack_1d0;
  }
  else {
    uVar43 = (ulong)*(uint *)(extraout_x1 + 0x1c);
    if (pplVar46 != (long **)0x0) goto LAB_036daef0;
LAB_036daf14:
    plVar49 = (long *)0x36daf18;
    auVar53 = func_0x0249fb90();
    plVar40 = (long *)extraout_x1;
  }
  puVar31 = auVar53._8_8_;
  lVar35 = auVar53._0_8_;
  *(long **)((long)pplVar9 + -0x50) = plVar49;
  *(ulong **)((long)pplVar9 + -0x40) = puVar29;
  *(long **)((long)pplVar9 + -0x38) = unaff_x25;
  *(long **)((long)pplVar9 + -0x30) = plVar17;
  *(long **)((long)pplVar9 + -0x28) = plVar48;
  *(long **)((long)pplVar9 + -0x20) = plVar40;
  *(long **)((long)pplVar9 + -0x18) = plVar36;
  *(long ***)((long)pplVar9 + -0x10) = pplVar46;
  *(ulong **)((long)pplVar9 + -8) = puVar26;
  plVar36 = (long *)(uVar43 & 0xffffffff);
  puVar26 = puVar27;
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
  *(undefined8 *)((long)pplVar9 + -0x60) = 0;
  *(undefined8 *)((long)pplVar9 + -0x58) = 0;
  *(undefined8 *)((long)pplVar9 + -0x70) = 0;
  *(undefined8 *)((long)pplVar9 + -0x68) = 0;
  *(undefined8 *)((long)pplVar9 + -0x78) = 0;
  uVar37 = 0x5e2d000;
  if (puVar27 != (ulong *)0x0) {
    uVar37 = *puVar27;
    uVar43 = (ulong)*(ushort *)(uVar37 + 0x12e);
    if (uVar43 != 0) {
      piVar45 = (int *)(*(long *)(uVar37 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
          puVar15 = (undefined8 *)(uVar37 + (long)(*piVar45 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar43 = uVar43 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar43 != 0);
    }
    puVar15 = (undefined8 *)func_0x024d927c(puVar27,_DAT_059df8e8,5);
LAB_036db040:
    uVar37 = (*(code *)*puVar15)(puVar27,puVar15[1]);
    uVar43 = 0;
    uVar19 = func_0x036ee328(lVar35,puVar27,plVar36);
    if ((uVar19 & 1) == 0) {
      return (char *)0x0;
    }
    uVar19 = func_0x036ed7f4(lVar35,uVar37,0);
    if ((uVar19 & 1) != 0) {
      return (char *)0x2;
    }
    puVar26 = (ulong *)0x0;
    uVar19 = func_0x036edd98(lVar35,uVar37);
    if ((uVar19 & 1) == 0) {
      puVar26 = (ulong *)0x0;
      uVar19 = func_0x036edf9c(lVar35,uVar37);
      if ((uVar19 & 1) == 0) {
        return (char *)0x0;
      }
      lVar35 = func_0x036d5e58(lVar35);
      if ((lVar35 != 0) && (*(long *)(lVar35 + 0xa8) != 0)) {
        plVar48 = *(long **)(*(long *)(lVar35 + 0xa8) + 0x10);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar31;
        auVar53 = auVar4 << 0x40;
        if (plVar48 != (long *)0x0) {
          lVar35 = *plVar48;
          uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar25 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059e0170) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 4) * 0x10 + 0x138);
                goto LAB_036db338;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0170,4);
LAB_036db338:
          uVar25 = (*(code *)*puVar15)(plVar48,puVar15[1]);
          uVar11 = 1;
          if ((uVar25 & 1) != 0) {
            uVar11 = 2;
          }
          return (char *)(ulong)uVar11;
        }
      }
    }
    else {
      plVar48 = *(long **)(lVar35 + 0x10);
      if (plVar48 != (long *)0x0) {
        puVar27 = (ulong *)(**(code **)(*plVar48 + 0x1c8))
                                     (plVar48,uVar37,*(undefined8 *)(*plVar48 + 0x1d0));
        puVar26 = (ulong *)0x0;
        uVar43 = 0;
        func_0x037275b8(lVar35,puVar31);
        lVar20 = func_0x036d5e58(lVar35);
        if ((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) {
          puVar26 = (ulong *)0x0;
          func_0x03700cf4(*(long *)(lVar20 + 0x28),plVar36);
          if (puVar27 != (ulong *)0x0) {
            uVar38 = *puVar27;
            plVar17 = (long *)&DAT_059dfbc0;
            uVar19 = (ulong)*(ushort *)(uVar38 + 0x12e);
            if (uVar19 != 0) {
              piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                  puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar19 = uVar19 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar19 != 0);
            }
            puVar26 = (ulong *)0x3;
            puVar15 = (undefined8 *)func_0x024d927c(puVar27);
LAB_036db1dc:
            plVar48 = (long *)(*(code *)*puVar15)(puVar27,puVar15[1]);
            if (plVar48 != (long *)0x0) {
              lVar20 = *plVar48;
              unaff_x25 = (long *)&DAT_059deb70;
              uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar19 != 0) {
                piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                    puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar19 = uVar19 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar19 != 0);
              }
              puVar26 = (ulong *)0x2;
              puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036db248:
              plVar36 = (long *)(*(code *)*puVar15)(plVar48,puVar15[1]);
              lVar20 = func_0x036d5e58(lVar35);
              if (((lVar20 != 0) && (*(long *)(lVar20 + 0x18) != 0)) &&
                 (uVar19 = func_0x037537dc(*(long *)(lVar20 + 0x18),0), plVar36 != (long *)0x0)) {
                lVar20 = *plVar36;
                puVar29 = (ulong *)&DAT_059deb60;
                uVar37 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar37 != 0) {
                  piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059deb60) {
                      puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 0x12) * 0x10 + 0x138);
                      goto LAB_036db2d4;
                    }
                    uVar37 = uVar37 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar37 != 0);
                }
                puVar15 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059deb60,0x12);
LAB_036db2d4:
                puVar26 = (ulong *)puVar15[1];
                uVar38 = (*(code *)*puVar15)(plVar36,uVar19 & 0xffffffff);
                uVar37 = uVar19;
                if ((uVar38 & 1) != 0) {
                  lVar20 = *plVar36;
                  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar19 != 0) {
                    piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059deb60) {
                        puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                        goto LAB_036db364;
                      }
                      uVar19 = uVar19 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059deb60,3);
LAB_036db364:
                  auVar52 = (*(code *)*puVar15)(plVar36,puVar15[1]);
                  *(undefined1 (*) [16])((long)pplVar9 + -0x68) = auVar52;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  puVar26 = _DAT_05a29960;
                  uVar19 = func_0x0288eda8((undefined1 *)((long)pplVar9 + -0x68),
                                           (undefined1 *)((long)pplVar9 + -0x58));
                  if ((uVar19 & 1) != 0) {
                    lVar20 = func_0x036d5e58(lVar35);
                    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x18) == 0)) goto LAB_036db604;
                    uVar43 = 0;
                    puVar26 = puVar31;
                    func_0x03754988(*(long *)(lVar20 + 0x18),*(undefined8 *)((long)pplVar9 + -0x58))
                    ;
                  }
                }
                iVar12 = func_0x036fa7dc(lVar35,0);
                if (0 < iVar12) {
                  return (char *)0x1;
                }
                uVar38 = *puVar27;
                uVar19 = (ulong)*(ushort *)(uVar38 + 0x12e);
                if (uVar19 != 0) {
                  piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                      puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                      goto LAB_036db434;
                    }
                    uVar19 = uVar19 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar19 != 0);
                }
                puVar26 = (ulong *)0x3;
                puVar15 = (undefined8 *)func_0x024d927c(puVar27);
LAB_036db434:
                plVar48 = (long *)(*(code *)*puVar15)(puVar27,puVar15[1]);
                if (plVar48 != (long *)0x0) {
                  lVar20 = *plVar48;
                  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar19 != 0) {
                    piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                        puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 0xe) * 0x10 + 0x138);
                        goto LAB_036db498;
                      }
                      uVar19 = uVar19 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059deb70,0xe);
LAB_036db498:
                  uVar19 = (*(code *)*puVar15)(plVar48,puVar15[1]);
                  if ((uVar19 & 1) == 0) {
                    return (char *)0x1;
                  }
                  puVar26 = puVar27;
                  puVar32 = (ulong *)func_0x022bffa8(3,_DAT_059dfbc0);
                  plVar36 = plVar48;
                  if ((puVar32 != (ulong *)0x0) &&
                     (puVar16 = (ulong *)func_0x022bffa8(2,_DAT_059deb70), puVar26 = puVar32,
                     puVar16 != (ulong *)0x0)) {
                    uVar19 = func_0x022bffa8(0,_DAT_059deb60);
                    plVar36 = (long *)(uVar19 & 0xffffffff);
                    lVar20 = func_0x036d5ec8(lVar35);
                    puVar26 = puVar16;
                    if (lVar20 != 0) {
                      uVar19 = func_0x0375380c(lVar20,plVar36,0);
                      if ((uVar19 & 1) != 0) {
                        return (char *)0x1;
                      }
                      puVar26 = puVar27;
                      lVar20 = func_0x022bffa8(3,_DAT_059dfbc0);
                      if (lVar20 != 0) {
                        uVar19 = func_0x022bffa8(0x10,_DAT_059deb70,lVar20);
                        if ((uVar19 & 1) == 0) {
                          return (char *)0x2;
                        }
                        lVar35 = func_0x036d5ec8(lVar35);
                        uVar28 = func_0x03530c84(puVar31,0);
                        auVar3._8_8_ = uVar28;
                        auVar3._0_8_ = lVar35;
                        auVar53._8_8_ = uVar28;
                        auVar53._0_8_ = lVar35;
                        puVar26 = puVar27;
                        puVar31 = (ulong *)func_0x022bffa8(3,_DAT_059dfbc0);
                        if (puVar31 != (ulong *)0x0) {
                          auVar52 = func_0x022bffa8(0xc,_DAT_059deb70);
                          *(undefined1 (*) [16])((long)pplVar9 + -0x78) = auVar52;
                          uVar19 = func_0x022bf4f8((undefined1 *)((long)pplVar9 + -0x78),
                                                   _DAT_05a27ee0);
                          uVar50 = 0;
                          uVar51 = 0;
                          if ((uVar19 & 1) != 0) {
                            puVar27 = (ulong *)func_0x023f3ca0((undefined1 *)((long)pplVar9 + -0x78)
                                                               ,_DAT_05a27ed8);
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64(_DAT_059e2ba0);
                            }
                            uVar28 = func_0x0430d994(uVar28,puVar27,0);
                            *(undefined8 *)((long)pplVar9 + -0x48) = uVar28;
                            *(undefined8 *)((long)pplVar9 + -0x90) = 0;
                            *(undefined8 *)((long)pplVar9 + -0x88) = 0;
                            puVar31 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)pplVar9 + -0x90),
                                            (undefined1 *)((long)pplVar9 + -0x48));
                            uVar51 = *(undefined8 *)((long)pplVar9 + -0x88);
                            uVar50 = *(undefined8 *)((long)pplVar9 + -0x90);
                          }
                          puVar26 = puVar31;
                          auVar53 = auVar3;
                          if (lVar35 != 0) {
                            *(undefined8 *)(lVar35 + 0x68) = uVar51;
                            *(undefined8 *)(lVar35 + 0x60) = uVar50;
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
  auVar52 = func_0x0249fb90();
  lVar35 = auVar52._0_8_;
  *(undefined8 *)((long)pplVar9 + -0xe0) = 0x36db608;
  *(ulong **)((long)pplVar9 + -0xd0) = puVar29;
  *(long **)((long)pplVar9 + -200) = unaff_x25;
  *(long **)((long)pplVar9 + -0xc0) = plVar17;
  *(ulong *)((long)pplVar9 + -0xb8) = uVar37;
  *(long **)((long)pplVar9 + -0xb0) = plVar36;
  *(ulong **)((long)pplVar9 + -0xa8) = puVar27;
  *(long *)((long)pplVar9 + -0xa0) = auVar53._8_8_;
  *(long *)((long)pplVar9 + -0x98) = auVar53._0_8_;
  puVar16 = (ulong *)0x5e2d000;
  plVar36 = (long *)(uVar25 & 0xffffffff);
  puVar47 = (undefined *)(uVar43 & 0xffffffff);
  puVar27 = (ulong *)(auVar52._8_8_ & 0xffffffff);
  puVar31 = puVar26;
  uVar37 = uVar43;
  uVar19 = uVar25;
  puVar32 = param_6;
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
  puVar23 = puVar26;
  if (puVar26 == (ulong *)0x0) {
LAB_036dbb68:
    uVar28 = 0x36dbb6c;
    auVar54 = func_0x0249fb90();
    puVar26 = puVar31;
  }
  else {
    uVar38 = *puVar26;
    uVar37 = (ulong)*(ushort *)(uVar38 + 0x12e);
    if (uVar37 != 0) {
      piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
          puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar37 = uVar37 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar37 != 0);
    }
    puVar15 = (undefined8 *)func_0x024d927c(puVar26,_DAT_059df8e8,5);
LAB_036db6f0:
    puVar16 = (ulong *)(*(code *)*puVar15)(puVar26,puVar15[1]);
    uVar37 = func_0x036edd98(lVar35,puVar16,0);
    if (((uVar37 & 1) == 0) && (uVar37 = func_0x036edf9c(lVar35,puVar16,0), (uVar37 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar12 = (int)uVar43;
    uVar11 = iVar12 * auVar52._8_4_;
    puVar29 = (ulong *)(ulong)uVar11;
    uVar37 = 0;
    puVar31 = puVar29;
    uVar38 = func_0x036ee328(lVar35,puVar26);
    if ((uVar38 & 1) == 0) {
      return (char *)0x0;
    }
    lVar20 = func_0x036d5e58(lVar35);
    if (lVar20 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar20 + 0x50)) {
      lVar20 = func_0x036d5e58();
      if (lVar20 != 0) {
        if ((int)uVar11 < *(int *)(lVar20 + 0x50)) {
          *(int *)param_6 = auVar52._8_4_;
          lVar20 = func_0x036d5e58(lVar35);
          if (lVar20 != 0) {
            *(uint *)(lVar20 + 0x50) = *(int *)(lVar20 + 0x50) - uVar11;
            return (char *)0x1;
          }
        }
        else {
          plVar17 = *(long **)(lVar35 + 0x10);
          if (plVar17 != (long *)0x0) {
            puVar23 = (ulong *)(**(code **)(*plVar17 + 0x1c8))
                                         (plVar17,puVar16,*(undefined8 *)(*plVar17 + 0x1d0));
            puVar31 = (ulong *)0x0;
            uVar25 = func_0x036edd98(lVar35,puVar16);
            if (((uVar25 & 1) == 0) || (iVar12 = func_0x036fa7dc(lVar35,0), 0 < iVar12)) {
LAB_036dbaac:
              puVar31 = (ulong *)0x0;
              uVar25 = func_0x036edf9c(lVar35,puVar16);
              if ((uVar25 & 1) == 0) {
                return (char *)0x1;
              }
              lVar20 = func_0x036d5e58(lVar35);
              if ((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) {
                plVar17 = *(long **)(*(long *)(lVar20 + 0xa8) + 0x10);
                lVar35 = 0;
                if (plVar17 != (long *)0x0) {
                  lVar35 = *plVar17;
                  uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar25 != 0) {
                    piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059e0170) {
                        puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 1) * 0x10 + 0x138);
                        goto LAB_036dbb34;
                      }
                      uVar25 = uVar25 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0170,1);
LAB_036dbb34:
                  uVar25 = (*(code *)*puVar15)(plVar17,puVar15[1]);
                  if ((uVar25 & 1) != 0) {
                    return (char *)0x1;
                  }
                  return (char *)0x2;
                }
              }
            }
            else if (puVar23 != (ulong *)0x0) {
              uVar43 = *puVar23;
              param_6 = (ulong *)&DAT_059dfbc0;
              uVar25 = (ulong)*(ushort *)(uVar43 + 0x12e);
              if (uVar25 != 0) {
                piVar45 = (int *)(*(long *)(uVar43 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(uVar43 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar25 = uVar25 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar25 != 0);
              }
              puVar31 = (ulong *)0x3;
              puVar15 = (undefined8 *)func_0x024d927c(puVar23);
LAB_036db9cc:
              plVar17 = (long *)(*(code *)*puVar15)(puVar23,puVar15[1]);
              if (plVar17 != (long *)0x0) {
                lVar20 = *plVar17;
                puVar47 = &DAT_059deb70;
                uVar25 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar25 != 0) {
                  piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                      puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar25 = uVar25 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar25 = (*(code *)*puVar15)(plVar17,puVar15[1]);
                plVar36 = plVar17;
                if ((uVar25 & 1) == 0) goto LAB_036dbaac;
                puVar31 = puVar23;
                puVar26 = (ulong *)func_0x022bffa8(3,_DAT_059dfbc0);
                if ((puVar26 != (ulong *)0x0) &&
                   (puVar22 = (ulong *)func_0x022bffa8(2,_DAT_059deb70), puVar31 = puVar26,
                   puVar22 != (ulong *)0x0)) {
                  uVar25 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar20 = func_0x036d5ec8(lVar35);
                  puVar31 = puVar22;
                  puVar23 = (ulong *)(uVar25 & 0xffffffff);
                  if (lVar20 != 0) {
                    uVar25 = func_0x0375380c(lVar20,(ulong *)(uVar25 & 0xffffffff),0);
                    if ((uVar25 & 1) == 0) {
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
    puVar31 = (ulong *)0x0;
    uVar38 = func_0x036edd98(lVar35,puVar16);
    if ((uVar38 & 1) == 0) {
      puVar31 = (ulong *)0x0;
      uVar43 = func_0x036edf9c(lVar35,puVar16);
      if ((uVar43 & 1) == 0) {
        return (char *)0x1;
      }
      lVar20 = func_0x036d5e58(lVar35);
      if (((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) ||
         (puVar16 = *(ulong **)(*(long *)(lVar20 + 0xa8) + 0x10), puVar16 == (ulong *)0x0))
      goto LAB_036dbb68;
      uVar38 = *puVar16;
      uVar43 = (ulong)*(ushort *)(uVar38 + 0x12e);
      if (uVar43 != 0) {
        piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar45 + -2) == _DAT_059e0170) {
            puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar43 = uVar43 - 1;
          piVar45 = piVar45 + 4;
        } while (uVar43 != 0);
      }
      puVar15 = (undefined8 *)func_0x024d927c(puVar16,_DAT_059e0170,5);
LAB_036db928:
      iVar13 = (*(code *)*puVar15)(puVar16,puVar15[1]);
      iVar34 = iVar13;
      if (iVar12 < iVar13) {
        iVar42 = (int)*param_6;
        do {
          iVar34 = iVar34 - iVar12;
          iVar42 = iVar42 + 1;
        } while (iVar12 < iVar34);
        *(int *)param_6 = iVar42;
      }
      uVar11 = iVar34 - iVar13;
    }
    else {
      lVar20 = func_0x036d5e58(lVar35);
      if ((lVar20 == 0) || (*(long *)(lVar20 + 0x28) == 0)) goto LAB_036dbb68;
      uVar11 = *(uint *)(*(long *)(lVar20 + 0x28) + 0x10);
      puVar16 = (ulong *)(ulong)uVar11;
      puVar27 = puVar16;
      uVar14 = uVar11;
      while (iVar12 < (int)uVar14) {
        lVar20 = func_0x036d5e58(lVar35);
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x28) == 0)) goto LAB_036dbb68;
        puVar31 = (ulong *)0x0;
        func_0x03700cf4(*(long *)(lVar20 + 0x28),uVar43 & 0xffffffff);
        uVar14 = (int)puVar27 - iVar12;
        puVar27 = (ulong *)(ulong)uVar14;
        *(int *)param_6 = (int)*param_6 + 1;
      }
      uVar11 = (int)puVar27 - uVar11;
    }
    puVar47 = (undefined *)(ulong)uVar11;
    param_6 = (ulong *)func_0x036d5e58(lVar35);
    auVar54._8_4_ = (uint)uVar25 & 1;
    auVar54._0_8_ = lVar35;
    auVar54._12_4_ = 0;
    uVar28 = 0x36db980;
  }
  lVar20 = auVar54._0_8_;
  *(undefined8 *)((long)pplVar9 + -0x120) = uVar28;
  *(ulong **)((long)pplVar9 + -0x110) = puVar16;
  *(undefined **)((long)pplVar9 + -0x108) = puVar47;
  *(ulong **)((long)pplVar9 + -0x100) = param_6;
  *(long **)((long)pplVar9 + -0xf8) = plVar36;
  *(ulong **)((long)pplVar9 + -0xf0) = puVar23;
  *(long *)((long)pplVar9 + -0xe8) = lVar35;
  plVar17 = (long *)0x5e2d000;
  plVar36 = (long *)(auVar54._8_8_ & 0xffffffff);
  puVar31 = puVar26;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar35 = func_0x036d5e58(lVar20);
  if (lVar35 != 0) {
    if (*(int *)(lVar35 + 0x50) < 1) {
      if (puVar26 != (ulong *)0x0) {
        uVar43 = *puVar26;
        plVar17 = (long *)&DAT_059df8e8;
        uVar25 = (ulong)*(ushort *)(uVar43 + 0x12e);
        if (uVar25 != 0) {
          piVar45 = (int *)(*(long *)(uVar43 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
              puVar15 = (undefined8 *)(uVar43 + (long)(*piVar45 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar25 = uVar25 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar25 != 0);
        }
        puVar15 = (undefined8 *)func_0x024d927c(puVar26,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar28 = (*(code *)*puVar15)(puVar26,puVar15[1]);
        puVar31 = (ulong *)0x0;
        uVar43 = func_0x036edd98(lVar20,uVar28);
        uVar38 = *puVar26;
        uVar2 = *(ushort *)(uVar38 + 0x12e);
        uVar25 = (ulong)uVar2;
        if ((uVar43 & 1) == 0) {
          if (uVar2 != 0) {
            piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
                puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          puVar15 = (undefined8 *)func_0x024d927c(puVar26,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar28 = (*(code *)*puVar15)(puVar26,puVar15[1]);
          puVar31 = (ulong *)0x0;
          uVar25 = func_0x036edf9c(lVar20,uVar28);
          if ((uVar25 & 1) == 0) {
            uVar11 = 0;
            goto LAB_036dbc00;
          }
          lVar35 = func_0x036d5e58(lVar20);
          if ((lVar35 != 0) && (*(long *)(lVar35 + 0xa8) != 0)) {
            plVar48 = *(long **)(*(long *)(lVar35 + 0xa8) + 0x10);
            lVar20 = 0;
            if (plVar48 != (long *)0x0) {
              lVar35 = *plVar48;
              uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar25 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059e0170) {
                    iVar12 = *piVar45 + 6;
                    goto LAB_036dbfbc;
                  }
                  uVar25 = uVar25 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar25 != 0);
              }
              uVar28 = 6;
              lVar35 = _DAT_059e0170;
              goto LAB_036dbfac;
            }
          }
        }
        else {
          if (uVar2 != 0) {
            piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
                puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar25 = uVar25 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar25 != 0);
          }
          puVar31 = (ulong *)0x5;
          puVar15 = (undefined8 *)func_0x024d927c(puVar26);
LAB_036dbd14:
          uVar28 = (*(code *)*puVar15)(puVar26,puVar15[1]);
          plVar48 = *(long **)(lVar20 + 0x10);
          if (plVar48 != (long *)0x0) {
            puVar31 = *(ulong **)(*plVar48 + 0x1d0);
            plVar17 = (long *)(**(code **)(*plVar48 + 0x1c8))(plVar48,uVar28);
            if ((auVar54._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar17 != (long *)0x0) {
                lVar35 = *plVar17;
                uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar25 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar25 = uVar25 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar25 != 0);
                }
                puVar31 = (ulong *)0x3;
                puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dbf58:
                plVar48 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
                if (plVar48 != (long *)0x0) {
                  lVar35 = *plVar48;
                  uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar25 != 0) {
                    piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                        iVar12 = *piVar45 + 0x14;
LAB_036dbfbc:
                        puVar15 = (undefined8 *)(lVar35 + (long)iVar12 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar25 = uVar25 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar25 != 0);
                  }
                  uVar28 = 0x14;
                  lVar35 = _DAT_059deb70;
LAB_036dbfac:
                  puVar15 = (undefined8 *)func_0x024d927c(plVar48,lVar35,uVar28);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar18 = (char *)(*(code *)*puVar15)(plVar48,puVar15[1]);
                  return pcVar18;
                }
              }
            }
            else if (plVar17 != (long *)0x0) {
              lVar35 = *plVar17;
              puVar47 = &DAT_059dfbc0;
              uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar25 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar25 = uVar25 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar25 != 0);
              }
              puVar31 = (ulong *)0x19;
              puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dbe38:
              plVar48 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
              if (plVar48 != (long *)0x0) {
                lVar35 = *plVar48;
                puVar16 = (ulong *)&DAT_059e0150;
                uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar25 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059e0150) {
                      puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar25 = uVar25 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar25 != 0);
                }
                puVar31 = (ulong *)0x0;
                puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dbeac:
                uVar25 = (*(code *)*puVar15)(plVar48,puVar15[1]);
                plVar36 = plVar48;
                if ((uVar25 & 1) == 0) goto LAB_036dbefc;
                lVar35 = *plVar17;
                uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar25 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar25 = uVar25 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar25 != 0);
                }
                puVar31 = (ulong *)0x19;
                puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dbff0:
                plVar48 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
                if (plVar48 != (long *)0x0) {
                  lVar35 = *plVar48;
                  uVar25 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar25 != 0) {
                    piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059e0150) {
                        puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar25 = uVar25 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar18 = (char *)(*(code *)*puVar15)(plVar48,lVar20,puVar26,puVar15[1]);
                  return pcVar18;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar35 = func_0x036d5e58(lVar20);
      if (lVar35 != 0) {
        uVar11 = *(uint *)(lVar35 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar11;
      }
    }
  }
  auVar55 = func_0x0249fb90();
  plVar48 = auVar55._8_8_;
  lVar35 = auVar55._0_8_;
  *(undefined **)((long)pplVar9 + -0x180) = unaff_x29;
  *(undefined8 *)((long)pplVar9 + -0x178) = 0x36dc07c;
  *(undefined **)((long)pplVar9 + -0x170) = unaff_x28;
  *(long **)((long)pplVar9 + -0x168) = unaff_x27;
  *(ulong **)((long)pplVar9 + -0x160) = puVar29;
  *(ulong **)((long)pplVar9 + -0x158) = puVar27;
  *(ulong **)((long)pplVar9 + -0x150) = puVar16;
  *(undefined **)((long)pplVar9 + -0x148) = puVar47;
  *(long **)((long)pplVar9 + -0x140) = plVar36;
  *(long **)((long)pplVar9 + -0x138) = plVar17;
  *(ulong **)((long)pplVar9 + -0x130) = puVar26;
  *(long *)((long)pplVar9 + -0x128) = lVar20;
  uVar43 = uVar19 & 0xffffffff;
  uVar25 = uVar37;
  uVar38 = uVar19;
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
  puVar26 = (ulong *)0x0;
  *(undefined8 *)((long)pplVar9 + -0x198) = 0;
  *(undefined8 *)((long)pplVar9 + -400) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1a8) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1a0) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1b8) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1b0) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1c8) = 0;
  *(undefined8 *)((long)pplVar9 + -0x1c0) = 0;
  uVar21 = func_0x036fa5f8(lVar35,plVar48);
  if ((uVar21 & 1) != 0) {
    return (char *)0x0;
  }
  lVar20 = func_0x036d5e58(lVar35);
  puVar16 = (ulong *)0x5e2d000;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x18) != 0)) {
    auVar52 = func_0x03753e70(*(long *)(lVar20 + 0x18),0);
    unaff_x28 = &DAT_05a27fc8;
    *(undefined1 (*) [16])((long)pplVar9 + -0x198) = auVar52;
    lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)pplVar9 + -0x198),
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80));
    if (*pcVar18 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844((undefined1 *)((long)pplVar9 + -0x198),(undefined1 *)((long)pplVar9 + -0x1d8),
                    _DAT_05a27fd0);
    unaff_x27 = (long *)&DAT_059e2c00;
    puVar16 = *(ulong **)((long)pplVar9 + -0x1d8);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar28 = func_0x03530158(puVar16,0);
    puVar26 = (ulong *)0x0;
    uVar21 = func_0x0352ff64(uVar28,puVar31);
    if ((uVar21 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar48 != (long *)0x0) {
      lVar20 = *plVar48;
      puVar29 = (ulong *)&DAT_059df8e8;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
            puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar21 = uVar21 - 1;
          piVar45 = piVar45 + 4;
        } while (uVar21 != 0);
      }
      puVar26 = (ulong *)0x5;
      puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dc294:
      uVar28 = (*(code *)*puVar15)(plVar48,puVar15[1]);
      plVar36 = *(long **)(lVar35 + 0x10);
      if (plVar36 != (long *)0x0) {
        puVar26 = *(ulong **)(*plVar36 + 0x1d0);
        plVar36 = (long *)(**(code **)(*plVar36 + 0x1c8))(plVar36,uVar28);
        if (plVar36 != (long *)0x0) {
          lVar20 = *plVar36;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar21 = uVar21 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar21 != 0);
          }
          puVar26 = (ulong *)0x3;
          puVar15 = (undefined8 *)func_0x024d927c(plVar36);
LAB_036dc31c:
          puVar16 = (ulong *)(*(code *)*puVar15)(plVar36,puVar15[1]);
          lVar20 = func_0x036d5e58(lVar35);
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x18) != 0)) {
            uVar11 = *(uint *)(*(long *)(lVar20 + 0x18) + 0x38);
            puVar27 = (ulong *)(ulong)uVar11;
            if ((int)uVar11 < 1) {
              lVar20 = *plVar48;
              uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar21 != 0) {
                piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
                    puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar21 = uVar21 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar21 != 0);
              }
              puVar15 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar28 = (*(code *)*puVar15)(plVar48,puVar15[1]);
              puVar23 = (ulong *)0x0;
              uVar21 = func_0x036f2f04(lVar35,uVar28);
              if ((uVar21 & 1) == 0) {
                puVar23 = (ulong *)0x0;
                uVar21 = func_0x036f2fec(lVar35,plVar48);
                puVar26 = puVar23;
                if ((uVar21 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (puVar16 != (ulong *)0x0) {
                  puVar26 = puVar16;
                  puVar23 = (ulong *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar20 = func_0x036d5ec8(lVar35);
                  puVar27 = puVar23;
                  if (lVar20 != 0) {
                    auVar52 = func_0x037537dc(lVar20,0);
                    uVar21 = auVar52._0_8_;
                    if (puVar23 != (ulong *)0x0) {
                      uVar38 = auVar52._8_8_ & 0xffffffff;
                      uVar25 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      puVar27 = (ulong *)(uVar25 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar20 = func_0x036d5e58(lVar35);
                puVar26 = puVar23;
                if ((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar20 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  puVar27 = (ulong *)0x0;
                  uVar21 = uVar25;
LAB_036dc558:
                  lVar20 = *plVar48;
                  uVar25 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar25 != 0) {
                    piVar45 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
                        puVar15 = (undefined8 *)(lVar20 + (long)(*piVar45 + 5) * 0x10 + 0x138);
                        uVar25 = uVar21;
                        goto LAB_036dc5a8;
                      }
                      uVar25 = uVar25 - 1;
                      piVar45 = piVar45 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar23 = (ulong *)0x5;
                  puVar15 = (undefined8 *)func_0x024d927c(plVar48);
                  uVar25 = uVar21;
LAB_036dc5a8:
                  uVar28 = (*(code *)*puVar15)(plVar48,puVar15[1]);
                  plVar36 = *(long **)(lVar35 + 0x10);
                  puVar26 = puVar23;
                  if (plVar36 != (long *)0x0) {
                    puVar26 = *(ulong **)(*plVar36 + 0x1d0);
                    uVar28 = (**(code **)(*plVar36 + 0x1c8))(plVar36,uVar28);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar21 = func_0x036c47c0(uVar28,plVar48);
                    puVar29 = (ulong *)(uVar21 & 0xffffffff);
                    lVar20 = func_0x036d5e58(lVar35);
                    if ((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) {
                      uVar25 = 0;
                      puVar26 = puVar29;
                      iVar12 = func_0x03700d78(*(long *)(lVar20 + 0x28),puVar27);
                      uVar11 = (int)puVar27 - iVar12;
                      puVar27 = (ulong *)(ulong)uVar11;
                      if (uVar11 == 0) {
                        if (puVar16 != (ulong *)0x0) {
                          puVar23 = (ulong *)func_0x022bffa8(2,_DAT_059deb70);
                          puVar27 = (ulong *)func_0x036d5ec8(lVar35);
                          puVar22 = (ulong *)func_0x03530c84(puVar31,0);
                          puVar26 = puVar16;
                          puVar16 = puVar23;
                          if (puVar23 != (ulong *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,puVar23,puVar27,plVar48);
                            func_0x037275b8(lVar35,puVar31,1,0);
                            func_0x03727828(lVar35,plVar48,puVar31,0);
                            puVar26 = (ulong *)(ulong)((uint)uVar37 & 1);
                            uVar25 = (ulong)((uint)uVar19 & 1);
                            uVar38 = 0;
                            uVar11 = func_0x036fa00c(lVar35,plVar48);
                            auVar55._8_4_ = uVar11;
                            auVar55._0_8_ = lVar35;
                            auVar55._12_4_ = 0;
                            lVar20 = func_0x036d5ec8(lVar35);
                            puVar32 = puVar22;
                            if (lVar20 != 0) {
                              auVar52 = func_0x03753e70(lVar20,0);
                              *(undefined1 (*) [16])((long)pplVar9 + -0x1c8) = auVar52;
                              uVar14 = func_0x022bf4f8((undefined1 *)((long)pplVar9 + -0x1c8),
                                                       _DAT_05a27fc8);
                              if ((uVar11 & uVar14 & 1) == 0) {
                                uVar28 = *(undefined8 *)((long)pplVar9 + -0x1c8);
                                uVar43 = *(ulong *)((long)pplVar9 + -0x1c0);
                                uVar50 = func_0x03530c84(puVar31,0);
                                *(undefined8 *)((long)pplVar9 + -0x188) = uVar50;
                                *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                                (undefined1 *)((long)pplVar9 + -0x188),_DAT_05a27fa0
                                               );
                                uVar25 = *(ulong *)((long)pplVar9 + -0x1d0);
                                uVar38 = 0;
                                auVar52 = func_0x03489150(uVar28,uVar43,
                                                          *(undefined8 *)((long)pplVar9 + -0x1d8));
                                puVar32 = puVar22;
                              }
                              else {
                                uVar28 = func_0x03530c84(puVar31,0);
                                *(undefined8 *)((long)pplVar9 + -0x188) = uVar28;
                                *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                                (undefined1 *)((long)pplVar9 + -0x188),_DAT_05a27fa0
                                               );
                                auVar52 = *(undefined1 (*) [16])((long)pplVar9 + -0x1d8);
                                puVar32 = puVar22;
                              }
                              puVar31 = auVar52._0_8_;
                              lVar35 = func_0x036d5ec8(lVar35);
                              *(undefined1 (*) [16])((long)pplVar9 + -0x1b8) = auVar52;
                              uVar19 = func_0x022bf4f8((undefined1 *)((long)pplVar9 + -0x1b8),
                                                       _DAT_05a27fc8);
                              if ((uVar19 & 1) == 0) {
                                puVar26 = (ulong *)0x0;
                                uVar28 = 0;
                              }
                              else {
                                puVar31 = (ulong *)func_0x023f3ca0((undefined1 *)
                                                                   ((long)pplVar9 + -0x1b8),
                                                                   _DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uVar28 = func_0x03530158(puVar31,0);
                                *(undefined8 *)((long)pplVar9 + -0x188) = uVar28;
                                *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                                *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                                (undefined1 *)((long)pplVar9 + -0x188),_DAT_05a28018
                                               );
                                uVar28 = *(undefined8 *)((long)pplVar9 + -0x1d8);
                                puVar26 = *(ulong **)((long)pplVar9 + -0x1d0);
                              }
                              auVar8._8_8_ = 0;
                              auVar8._0_8_ = auVar52._8_8_;
                              auVar55 = auVar8 << 0x40;
                              if (lVar35 != 0) {
                                func_0x03753f18(lVar35,uVar28,puVar26,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar12 < 1) {
                          return (char *)0x0;
                        }
                        lVar35 = func_0x036d5ec8(lVar35);
                        if (lVar35 != 0) {
                          *(uint *)(lVar35 + 0x38) = uVar11;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar20 = func_0x036d5e58(lVar35);
              if ((lVar20 != 0) && (puVar16 != (ulong *)0x0)) {
                uVar39 = *puVar16;
                puVar29 = *(ulong **)(lVar20 + 0x28);
                uVar21 = (ulong)*(ushort *)(uVar39 + 0x12e);
                if (uVar21 != 0) {
                  piVar45 = (int *)(*(long *)(uVar39 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                      puVar15 = (undefined8 *)(uVar39 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar21 = uVar21 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar21 != 0);
                }
                puVar26 = (ulong *)0x3;
                puVar15 = (undefined8 *)func_0x024d927c(puVar16);
LAB_036dc3f8:
                uVar21 = (*(code *)*puVar15)(puVar16,puVar15[1]);
                if (puVar29 != (ulong *)0x0) {
                  puVar26 = (ulong *)(uVar21 & 0xffffffff);
                  uVar25 = 0;
                  uVar14 = func_0x03700d78(puVar29,puVar27);
                  if (uVar14 == uVar11) {
                    uVar39 = *puVar16;
                    uVar21 = (ulong)*(ushort *)(uVar39 + 0x12e);
                    if (uVar21 != 0) {
                      piVar45 = (int *)(*(long *)(uVar39 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                          puVar15 = (undefined8 *)(uVar39 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar21 = uVar21 - 1;
                        piVar45 = piVar45 + 4;
                      } while (uVar21 != 0);
                    }
                    puVar26 = (ulong *)0x2;
                    puVar15 = (undefined8 *)func_0x024d927c(puVar16);
LAB_036dc760:
                    puVar16 = (ulong *)(*(code *)*puVar15)(puVar16,puVar15[1]);
                    lVar20 = func_0x036d5e58(lVar35);
                    if (lVar20 != 0) {
                      puVar27 = *(ulong **)(lVar20 + 0x18);
                      puVar23 = (ulong *)func_0x03530c84(puVar31,0);
                      if (puVar16 != (ulong *)0x0) {
                        uVar38 = *puVar16;
                        uVar25 = (ulong)*(ushort *)(uVar38 + 0x12e);
                        if (uVar25 != 0) {
                          piVar45 = (int *)(*(long *)(uVar38 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar45 + -2) == _DAT_059deb60) {
                              puVar15 = (undefined8 *)(uVar38 + (long)(*piVar45 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar25 = uVar25 - 1;
                            piVar45 = piVar45 + 4;
                          } while (uVar25 != 0);
                        }
                        puVar15 = (undefined8 *)func_0x024d927c(puVar16,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar15)(puVar16,puVar27,plVar48,puVar23,puVar15[1]);
                        func_0x037275b8(lVar35,puVar31,1,0);
                        func_0x03727828(lVar35,plVar48,puVar31,0);
                        puVar26 = (ulong *)(ulong)((uint)uVar37 & 1);
                        uVar25 = (ulong)((uint)uVar19 & 1);
                        uVar38 = 0;
                        uVar11 = func_0x036fa00c(lVar35,plVar48);
                        auVar5._8_4_ = uVar11;
                        auVar5._0_8_ = lVar35;
                        auVar5._12_4_ = 0;
                        auVar55._8_4_ = uVar11;
                        auVar55._0_8_ = lVar35;
                        auVar55._12_4_ = 0;
                        lVar20 = func_0x036d5e58(lVar35);
                        puVar29 = puVar23;
                        if ((lVar20 != 0) && (auVar55 = auVar5, *(long *)(lVar20 + 0x18) != 0)) {
                          auVar52 = func_0x03753e70(*(long *)(lVar20 + 0x18),0);
                          *(undefined1 (*) [16])((long)pplVar9 + -0x1a8) = auVar52;
                          lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                            lVar20 = func_0x024d8f40();
                          }
                          pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)pplVar9 + -0x1a8),
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar20 + 0xc0) + 8
                                                                       ) + 0x80));
                          if ((uVar11 & *pcVar18 != '\0') == 0) {
                            uVar28 = *(undefined8 *)((long)pplVar9 + -0x1a8);
                            uVar50 = *(undefined8 *)((long)pplVar9 + -0x1a0);
                            uVar51 = func_0x03530c84(puVar31,0);
                            *(undefined8 *)((long)pplVar9 + -0x188) = uVar51;
                            *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                            *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                            func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                            (undefined1 *)((long)pplVar9 + -0x188),_DAT_05a27fa0);
                            puVar26 = *(ulong **)((long)pplVar9 + -0x1d8);
                            uVar25 = *(ulong *)((long)pplVar9 + -0x1d0);
                            uVar38 = 0;
                            auVar52 = func_0x03489150(uVar28,uVar50);
                          }
                          else {
                            uVar28 = func_0x03530c84(puVar31,0);
                            *(undefined8 *)((long)pplVar9 + -0x188) = uVar28;
                            *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                            *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                            puVar26 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                            (undefined1 *)((long)pplVar9 + -0x188));
                            auVar52 = *(undefined1 (*) [16])((long)pplVar9 + -0x1d8);
                          }
                          uVar43 = auVar52._8_8_;
                          uVar28 = auVar52._0_8_;
                          auVar55._8_8_ = uVar28;
                          lVar20 = func_0x036d5e58(lVar35);
                          if (lVar20 != 0) {
                            *(undefined1 (*) [16])((long)pplVar9 + -0x1b8) = auVar52;
                            puVar31 = *(ulong **)(lVar20 + 0x18);
                            lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                              lVar20 = func_0x024d8f40();
                            }
                            pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)pplVar9 + -0x1b8)
                                                              ,*(undefined8 *)
                                                                (*(long *)(*(long *)(lVar20 + 0xc0)
                                                                          + 8) + 0x80));
                            if (*pcVar18 == '\0') {
                              puVar26 = (ulong *)0x0;
                              uVar50 = 0;
                            }
                            else {
                              uVar28 = func_0x023f3ca0((undefined1 *)((long)pplVar9 + -0x1b8),
                                                       _DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uVar50 = func_0x03530158(uVar28,0);
                              *(undefined8 *)((long)pplVar9 + -0x188) = uVar50;
                              *(undefined8 *)((long)pplVar9 + -0x1d8) = 0;
                              *(undefined8 *)((long)pplVar9 + -0x1d0) = 0;
                              func_0x028866e4((undefined1 *)((long)pplVar9 + -0x1d8),
                                              (undefined1 *)((long)pplVar9 + -0x188),_DAT_05a28018);
                              uVar50 = *(undefined8 *)((long)pplVar9 + -0x1d8);
                              puVar26 = *(ulong **)((long)pplVar9 + -0x1d0);
                            }
                            auVar7._8_8_ = uVar28;
                            auVar7._0_8_ = lVar35;
                            auVar6._8_8_ = uVar28;
                            auVar6._0_8_ = lVar35;
                            auVar55._8_8_ = uVar28;
                            if (puVar31 != (ulong *)0x0) {
                              uVar25 = 0;
                              func_0x03753f18(puVar31,uVar50);
                              lVar35 = func_0x036d5e58(lVar35);
                              auVar55 = auVar6;
                              if ((lVar35 != 0) && (auVar55 = auVar7, *(long *)(lVar35 + 0x18) != 0)
                                 ) {
                                func_0x03754328(*(long *)(lVar35 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    puVar29 = (ulong *)(ulong)uVar14;
                    if ((int)uVar14 < 1) {
                      return (char *)0x0;
                    }
                    lVar35 = func_0x036d5ec8(lVar35);
                    if (lVar35 != 0) {
                      func_0x03754330(lVar35,puVar29,0);
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
  uVar28 = auVar55._8_8_;
  func_0x0249fb90();
  *(undefined8 *)((long)pplVar9 + -0x1f0) = 0x36dcaf8;
  lVar35 = func_0x036d5e58();
  if ((lVar35 != 0) && (lVar35 = *(long *)(lVar35 + 0x18), lVar35 != 0)) {
    *(undefined8 *)((long)pplVar9 + -0x210) = *(undefined8 *)((long)pplVar9 + -0x1f0);
    *(ulong *)((long)pplVar9 + -0x200) = uVar43;
    *(undefined8 *)((long)pplVar9 + -0x1f8) = uVar28;
    *(ulong **)((long)pplVar9 + -0x1f0) = puVar31;
    *(long *)((long)pplVar9 + -0x1e8) = auVar55._0_8_;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c(lVar35 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80));
    if (*pcVar18 != '\0') {
      func_0x02886844(lVar35 + 0x50,(undefined1 *)((long)pplVar9 + -0x208),_DAT_05a27fd0);
      uVar28 = *(undefined8 *)((long)pplVar9 + -0x208);
      uVar50 = *(undefined8 *)(lVar35 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar25 = func_0x0430deb0(uVar28,uVar50,0);
      if ((uVar25 & 1) != 0) {
        func_0x02886844(lVar35 + 0x50,(undefined1 *)((long)pplVar9 + -0x208),_DAT_05a27fd0);
        return *(char **)((long)pplVar9 + -0x208);
      }
    }
    return *(char **)(lVar35 + 0x28);
  }
  auVar52 = func_0x0249fb90();
  uVar50 = auVar52._0_8_;
  *(undefined8 *)((long)pplVar9 + -0x210) = 0x36dcb1c;
  *(ulong **)((long)pplVar9 + -0x200) = puVar31;
  *(long *)((long)pplVar9 + -0x1f8) = auVar55._0_8_;
  *(long *)((long)pplVar9 + -0x208) = auVar52._8_8_;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar35 = func_0x036d5e58(uVar50);
  if (lVar35 != 0) {
    lVar35 = *(long *)(lVar35 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar51 = func_0x0352eeec((undefined1 *)((long)pplVar9 + -0x208),0);
    uVar50 = 0;
    if (lVar35 != 0) {
      pcVar18 = (char *)func_0x03753bf0(lVar35,uVar51,0);
      return pcVar18;
    }
  }
  func_0x0249fb90();
  *(undefined8 *)((long)pplVar9 + -0x220) = 0x36dcba8;
  *(undefined8 *)((long)pplVar9 + -0x218) = uVar50;
  lVar35 = func_0x036d5e58();
  if ((lVar35 != 0) && (lVar35 = *(long *)(lVar35 + 0x18), lVar35 != 0)) {
    *(undefined8 *)((long)pplVar9 + -0x250) = *(undefined8 *)((long)pplVar9 + -0x220);
    *(ulong **)((long)pplVar9 + -0x248) = puVar27;
    *(ulong **)((long)pplVar9 + -0x240) = puVar16;
    *(ulong *)((long)pplVar9 + -0x238) = uVar37 & 0xffffffff;
    *(ulong *)((long)pplVar9 + -0x230) = uVar43;
    *(undefined8 *)((long)pplVar9 + -0x228) = uVar28;
    *(undefined8 *)((long)pplVar9 + -0x220) = 0x5e2d000;
    *(undefined8 *)((long)pplVar9 + -0x218) = *(undefined8 *)((long)pplVar9 + -0x218);
    *(undefined8 *)((long)pplVar9 + -0x260) = extraout_x1_00;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    *(undefined8 *)((long)pplVar9 + -0x270) = 0;
    *(undefined8 *)((long)pplVar9 + -0x268) = 0;
    uVar25 = func_0x0375309c(lVar35);
    if ((uVar25 & 1) != 0) {
      uVar28 = *(undefined8 *)(lVar35 + 0x60);
      iVar12 = *(int *)(_DAT_059e2be8 + 0xe4);
      *(undefined8 *)((long)pplVar9 + -0x268) = *(undefined8 *)(lVar35 + 0x68);
      *(undefined8 *)((long)pplVar9 + -0x270) = uVar28;
      if (iVar12 == 0) {
        func_0x0249fa64();
      }
      uVar28 = func_0x0352eeec((undefined1 *)((long)pplVar9 + -0x260),0);
      lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x024d8f40(lVar20);
      }
      pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)pplVar9 + -0x270),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80));
      lVar20 = _DAT_05a27fb0;
      if (*pcVar18 == '\0') {
        uVar28 = 0;
        uVar50 = 0;
      }
      else {
        lVar41 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar2 = *(ushort *)(lVar41 + 0x135);
        lVar24 = lVar41;
        if ((uVar2 & 1) == 0) {
          lVar41 = func_0x024d8f40(lVar41);
          uVar2 = *(ushort *)(*(long *)(lVar20 + 0x20) + 0x135);
          lVar24 = *(long *)(lVar20 + 0x20);
        }
        uVar10 = *(undefined4 *)(**(long **)(lVar41 + 0xc0) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar24 = func_0x024d8f40(lVar24);
        }
        uVar50 = func_0x0249f90c((undefined1 *)((long)pplVar9 + -0x270),
                                 *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0((undefined1 *)((long)pplVar9 + -0x280),uVar50,uVar10);
        uVar50 = *(undefined8 *)((long)pplVar9 + -0x280);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar28 = func_0x0430d994(uVar50,uVar28,0);
        *(undefined8 *)((long)pplVar9 + -600) = uVar28;
        *(undefined8 *)((long)pplVar9 + -0x280) = 0;
        *(undefined8 *)((long)pplVar9 + -0x278) = 0;
        func_0x028866e4((undefined1 *)((long)pplVar9 + -0x280),(undefined1 *)((long)pplVar9 + -600),
                        _DAT_05a27fa0);
        uVar50 = *(undefined8 *)((long)pplVar9 + -0x278);
        uVar28 = *(undefined8 *)((long)pplVar9 + -0x280);
      }
      *(undefined8 *)(lVar35 + 0x68) = uVar50;
      *(undefined8 *)(lVar35 + 0x60) = uVar28;
    }
    lVar20 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c(lVar35 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80));
    if (*pcVar18 != '\0') {
      func_0x02886844(lVar35 + 0x18,(undefined1 *)((long)pplVar9 + -0x280),_DAT_05a27fd0);
      uVar28 = *(undefined8 *)((long)pplVar9 + -0x280);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar50 = func_0x0352eeec((undefined1 *)((long)pplVar9 + -0x260),0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      uVar28 = func_0x0430d994(uVar28,uVar50,0);
      *(undefined8 *)((long)pplVar9 + -600) = uVar28;
      *(undefined8 *)((long)pplVar9 + -0x280) = 0;
      *(undefined8 *)((long)pplVar9 + -0x278) = 0;
      pcVar18 = (char *)func_0x028866e4((undefined1 *)((long)pplVar9 + -0x280),
                                        (undefined1 *)((long)pplVar9 + -600),_DAT_05a27fa0);
      uVar28 = *(undefined8 *)((long)pplVar9 + -0x280);
      *(undefined8 *)(lVar35 + 0x20) = *(undefined8 *)((long)pplVar9 + -0x278);
      *(undefined8 *)(lVar35 + 0x18) = uVar28;
    }
    return pcVar18;
  }
  auVar52 = func_0x0249fb90();
  plVar48 = auVar52._8_8_;
  plVar36 = auVar52._0_8_;
  *(undefined8 *)((long)pplVar9 + -0x280) = 0x36dcbd4;
  *(undefined **)((long)pplVar9 + -0x270) = unaff_x28;
  *(long **)((long)pplVar9 + -0x268) = unaff_x27;
  *(ulong **)((long)pplVar9 + -0x260) = puVar29;
  *(ulong **)((long)pplVar9 + -600) = puVar27;
  *(ulong **)((long)pplVar9 + -0x250) = puVar16;
  *(ulong *)((long)pplVar9 + -0x248) = uVar37 & 0xffffffff;
  *(ulong *)((long)pplVar9 + -0x240) = uVar43;
  *(undefined8 *)((long)pplVar9 + -0x238) = uVar28;
  *(undefined8 *)((long)pplVar9 + -0x230) = 0x5e2d000;
  *(undefined8 *)((long)pplVar9 + -0x228) = extraout_x1_00;
  plVar17 = (long *)0x5e2d000;
  puVar27 = puVar26;
  uVar43 = uVar25;
  uVar37 = uVar38;
  puVar31 = puVar32;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar48 != (long *)0x0) {
    lVar35 = *plVar48;
    uVar19 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar19 != 0) {
      piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == _DAT_059df8e8) {
          puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar19 = uVar19 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar19 != 0);
    }
    puVar27 = (ulong *)0x5;
    puVar15 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dccc4:
    uVar28 = (*(code *)*puVar15)(plVar48,puVar15[1]);
    plVar40 = (long *)plVar36[2];
    if (plVar40 != (long *)0x0) {
      plVar17 = (long *)(**(code **)(*plVar40 + 0x1c8))
                                  (plVar40,uVar28,*(undefined8 *)(*plVar40 + 0x1d0));
      pcVar18 = (char *)0x0;
      if (plVar17 != (long *)0x0) {
        puVar27 = (ulong *)0x0;
        uVar19 = func_0x036edd98(plVar36,uVar28);
        if ((uVar19 & 1) != 0) {
          lVar35 = *plVar17;
          uVar19 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar19 != 0) {
            piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar19 = uVar19 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar19 != 0);
          }
          puVar27 = (ulong *)0x19;
          puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dce14:
          plVar40 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
          if (plVar40 != (long *)0x0) {
            lVar35 = *plVar40;
            uVar19 = (ulong)*(ushort *)(lVar35 + 0x12e);
            if (uVar19 != 0) {
              piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == _DAT_059e0150) {
                  puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar19 = uVar19 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar19 != 0);
            }
            puVar27 = (ulong *)0x0;
            puVar15 = (undefined8 *)func_0x024d927c(plVar40);
LAB_036dce7c:
            uVar19 = (*(code *)*puVar15)(plVar40,puVar15[1]);
            if ((uVar19 & 1) == 0) {
LAB_036dcf40:
              lVar35 = *plVar17;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar15 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar36 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
              *(undefined8 *)((long)pplVar9 + -0x260) = *(undefined8 *)((long)pplVar9 + -0x280);
              *(undefined8 *)((long)pplVar9 + -600) = *(undefined8 *)((long)pplVar9 + -600);
              *(undefined8 *)((long)pplVar9 + -0x250) = *(undefined8 *)((long)pplVar9 + -0x250);
              *(undefined8 *)((long)pplVar9 + -0x248) = *(undefined8 *)((long)pplVar9 + -0x248);
              *(undefined8 *)((long)pplVar9 + -0x240) = *(undefined8 *)((long)pplVar9 + -0x240);
              *(undefined8 *)((long)pplVar9 + -0x238) = *(undefined8 *)((long)pplVar9 + -0x238);
              *(undefined8 *)((long)pplVar9 + -0x230) = *(undefined8 *)((long)pplVar9 + -0x230);
              *(undefined8 *)((long)pplVar9 + -0x228) = *(undefined8 *)((long)pplVar9 + -0x228);
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar36 == (long *)0x0) {
                lVar35 = func_0x0249fb90();
                return *(char **)(lVar35 + 0x10);
              }
              lVar35 = *plVar36;
              uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059deb70) {
                    puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar15 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059deb70,0);
LAB_03751b38:
              uVar28 = (*(code *)*puVar15)(plVar36,puVar15[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              *(ulong **)((long)pplVar9 + -0x270) = puVar26;
              *(ulong *)((long)pplVar9 + -0x268) = uVar25;
              func_0x0288f218((undefined1 *)((long)pplVar9 + -0x270),
                              (undefined1 *)((long)pplVar9 + -0x288),_DAT_05a29e48);
              *(undefined8 *)((long)pplVar9 + -0x298) = *(undefined8 *)((long)pplVar9 + -0x280);
              *(undefined8 *)((long)pplVar9 + -0x2a0) = *(undefined8 *)((long)pplVar9 + -0x288);
              *(undefined8 *)((long)pplVar9 + -0x290) = *(undefined8 *)((long)pplVar9 + -0x278);
              pcVar18 = (char *)func_0x0371f1bc(uVar28,plVar48,
                                                (undefined1 *)((long)pplVar9 + -0x2a0),param_7,0);
              return pcVar18;
            }
            plVar36 = plVar40;
            if (puVar26 != (ulong *)0x0) {
              uVar19 = *puVar26;
              uVar43 = (ulong)*(ushort *)(uVar19 + 0x12e);
              if (uVar43 != 0) {
                piVar45 = (int *)(*(long *)(uVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059defb8) {
                    puVar15 = (undefined8 *)(uVar19 + (long)(*piVar45 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar43 = uVar43 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar43 != 0);
              }
              puVar15 = (undefined8 *)func_0x024d927c(puVar26,_DAT_059defb8,0xb);
LAB_036dcee8:
              uVar43 = puVar15[1];
              puVar27 = puVar32;
              uVar19 = (*(code *)*puVar15)(puVar26,uVar38);
              if ((uVar19 & 1) == 0) goto LAB_036dcf40;
              lVar35 = *plVar17;
              uVar19 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar19 != 0) {
                piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar45 + -2) == _DAT_059dfbc0) {
                    puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dcfe0;
                  }
                  uVar19 = uVar19 - 1;
                  piVar45 = piVar45 + 4;
                } while (uVar19 != 0);
              }
              puVar27 = (ulong *)0x19;
              puVar15 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dcfe0:
              plVar40 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
              if (plVar40 != (long *)0x0) {
                lVar35 = *plVar40;
                uVar43 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar43 != 0) {
                  piVar45 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar45 + -2) == _DAT_059e0150) {
                      puVar15 = (undefined8 *)(lVar35 + (long)(*piVar45 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar43 = uVar43 - 1;
                    piVar45 = piVar45 + 4;
                  } while (uVar43 != 0);
                }
                puVar15 = (undefined8 *)func_0x024d927c(plVar40,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar18 = (char *)(*(code *)*puVar15)(plVar40,plVar48,puVar26,uVar25,param_7,
                                                      puVar15[1]);
                return pcVar18;
              }
            }
          }
          goto LAB_036dd07c;
        }
        puVar27 = (ulong *)0x0;
        uVar19 = func_0x036edf9c(plVar36,uVar28);
        pcVar18 = (char *)0x0;
        if ((uVar19 & 1) != 0) {
          lVar35 = func_0x036d5e58(plVar36);
          if ((lVar35 == 0) || (*(long *)(lVar35 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar28 = *(undefined8 *)(*(long *)(lVar35 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          *(ulong **)((long)pplVar9 + -0x290) = puVar26;
          *(ulong *)((long)pplVar9 + -0x288) = uVar25;
          func_0x0288f218((undefined1 *)((long)pplVar9 + -0x290),
                          (undefined1 *)((long)pplVar9 + -0x2a8),_DAT_05a29e48);
          *(undefined8 *)((long)pplVar9 + -0x2b8) = *(undefined8 *)((long)pplVar9 + -0x2a0);
          *(undefined8 *)((long)pplVar9 + -0x2c0) = *(undefined8 *)((long)pplVar9 + -0x2a8);
          *(undefined8 *)((long)pplVar9 + -0x2b0) = *(undefined8 *)((long)pplVar9 + -0x298);
          pcVar18 = (char *)func_0x0371f1bc(uVar28,plVar48,(undefined1 *)((long)pplVar9 + -0x2c0),
                                            param_7,0);
        }
      }
      return pcVar18;
    }
  }
LAB_036dd07c:
  auVar52 = func_0x0249fb90();
  *(undefined8 *)((long)pplVar9 + -0x310) = 0x36dd080;
  *(long **)((long)pplVar9 + -0x300) = plVar36;
  *(long **)((long)pplVar9 + -0x2f8) = plVar17;
  *(ulong *)((long)pplVar9 + -0x2f0) = uVar38;
  *(ulong **)((long)pplVar9 + -0x2e8) = puVar32;
  *(ulong **)((long)pplVar9 + -0x2e0) = puVar26;
  *(ulong *)((long)pplVar9 + -0x2d8) = uVar25;
  *(long **)((long)pplVar9 + -0x2d0) = plVar48;
  *(undefined8 *)((long)pplVar9 + -0x2c8) = param_7;
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar18 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar18,0);
  pcVar18[0x10] = -2;
  pcVar18[0x11] = -1;
  pcVar18[0x12] = -1;
  pcVar18[0x13] = -1;
  uVar10 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar18 + 0x20) = uVar10;
  *(long *)(pcVar18 + 0x28) = auVar52._0_8_;
  func_0x0249f888(pcVar18 + 0x28,auVar52._0_8_);
  *(long *)(pcVar18 + 0x78) = auVar52._8_8_;
  func_0x0249f888(pcVar18 + 0x78,auVar52._8_8_);
  *(ulong **)(pcVar18 + 0x38) = puVar27;
  func_0x0249f888(pcVar18 + 0x38,puVar27);
  *(ulong *)(pcVar18 + 0x68) = uVar43;
  *(ulong *)(pcVar18 + 0x50) = uVar37;
  *(ulong **)(pcVar18 + 0x58) = puVar31;
  func_0x0249f888(pcVar18 + 0x50,0);
  return pcVar18;
  while( true ) {
    uVar44 = uVar44 - 1;
    piVar45 = piVar45 + 4;
    if (uVar44 == 0) break;
LAB_03787420:
    if (*(long *)(piVar45 + -2) == _DAT_059df008) {
      puVar15 = (undefined8 *)(lVar35 + (long)*piVar45 * 0x10 + 0x138);
      goto LAB_03787454;
    }
  }
LAB_03787438:
  puVar15 = (undefined8 *)func_0x024d927c(plVar40,_DAT_059df008,0);
LAB_03787454:
  plVar36 = (long *)puVar15[1];
  lVar35 = (*(code *)*puVar15)(plVar40,uVar21,uVar50,plVar36);
  auVar52._8_8_ = uStack_108;
  auVar52._0_8_ = pcStack_118;
  uVar10 = (undefined4)uVar50;
  if (lVar35 != 0) {
    func_0x028310e8(lVar35,&plStack_1a8,_DAT_05a157b8);
    puStack_180 = puStack_198;
    plStack_1b0 = (long *)(uVar39 << 0x20);
    pplStack_188 = pplStack_1a0;
    plStack_190 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    pplStack_1a0 = &plStack_190;
    while( true ) {
      do {
        do {
          do {
            uVar25 = func_0x02a5d2d0(&plStack_190,_DAT_05a02750);
            lVar35 = _DAT_05a02758;
            if ((uVar25 & 1) == 0) {
              pcVar18 = (char *)func_0x02a5d2cc(&plStack_190,_DAT_05a02748);
              return pcVar18;
            }
            lVar24 = *(long *)(_DAT_05a02758 + 0x20);
            uVar2 = *(ushort *)(lVar24 + 0x135);
            lVar20 = lVar24;
            if ((uVar2 & 1) == 0) {
              lVar20 = func_0x024d8f40();
              lVar24 = *(long *)(lVar35 + 0x20);
              uVar2 = *(ushort *)(lVar24 + 0x135);
            }
            uVar10 = *(undefined4 *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar24 = func_0x024d8f40();
            }
            uVar50 = func_0x0249f90c(&plStack_190,
                                     *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0(&uStack_168,uVar50,uVar10);
            uVar37 = uStack_168;
            lVar35 = func_0x0376e450(plVar17,uStack_168);
          } while (lVar35 == 0);
          uVar11 = 0;
          uVar25 = func_0x036fb888(lVar35,plVar48,uVar28,plVar17,0);
        } while ((uVar25 & 1) == 0);
        uVar10 = func_0x036d392c(lVar35,0);
        plVar36 = (long *)0x0;
        uVar50 = uVar28;
        uVar25 = func_0x036df160(uVar19,uVar10,uVar28,0);
        uVar10 = (undefined4)uVar50;
      } while ((uVar25 & 1) == 0);
      uVar21 = uVar43;
      uVar25 = uVar38;
      if (plVar17[0x14] == 0) break;
      uVar10 = (undefined4)_DAT_059fb920;
      uStack_168 = uVar37;
      uVar44 = func_0x02a3cb7c(plVar17[0x14],&uStack_168);
      lVar35 = plVar17[0x14];
      if ((uVar44 & 1) == 0) {
        if (lVar35 == 0) goto LAB_03787778;
        uStack_170 = uVar43 | uVar39 << 0x20;
        uStack_168 = uVar37;
        func_0x02a3bfd0(lVar35,&uStack_168,&uStack_170,_DAT_059fb938);
      }
      else {
        if (lVar35 == 0) goto LAB_03787770;
        uStack_170 = uVar37;
        plVar36 = _DAT_059fb930;
        func_0x02a3be14(lVar35,&uStack_170,&uStack_168,_DAT_059fb930);
        uVar44 = uStack_168 & 0xffffffff;
        if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar10 = 0;
        uVar44 = func_0x043bea3c(uVar44,uVar43);
        if ((uVar44 & 1) != 0) {
          if (plVar17[0x14] == 0) goto LAB_03787784;
          uStack_170 = uVar37;
          puVar26 = &uStack_168;
          plVar36 = _DAT_059fb930;
          func_0x02a3be14(plVar17[0x14],&uStack_170,puVar26,_DAT_059fb930);
          uVar10 = SUB84(puVar26,0);
          if (plVar17[0x14] == 0) goto LAB_03787780;
          uStack_170 = uStack_168 & 0xffffffff00000000 | uVar43;
          puVar26 = &uStack_170;
          plVar36 = _DAT_059fb938;
          uStack_168 = uVar37;
          func_0x02a3bfd0(plVar17[0x14],&uStack_168,puVar26,_DAT_059fb938);
          uVar10 = SUB84(puVar26,0);
        }
        if (plVar17[0x14] == 0) goto LAB_03787774;
        uStack_170 = uVar37;
        plVar36 = _DAT_059fb930;
        func_0x02a3be14(plVar17[0x14],&uStack_170,&uStack_168,_DAT_059fb930);
        uVar25 = uStack_168;
        if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar10 = 0;
        uVar25 = func_0x043bea3c(uVar25 >> 0x20,uVar38);
        if ((uVar25 & 1) != 0) {
          if (plVar17[0x14] == 0) goto LAB_03787788;
          uStack_170 = uVar37;
          puVar26 = &uStack_168;
          plVar36 = _DAT_059fb930;
          func_0x02a3be14(plVar17[0x14],&uStack_170,puVar26,_DAT_059fb930);
          uVar10 = SUB84(puVar26,0);
          if (plVar17[0x14] == 0) goto LAB_0378777c;
          uStack_170 = uStack_168 & 0xffffffff | (ulong)plStack_1b0;
          uStack_168 = uVar37;
          func_0x02a3bfd0(plVar17[0x14],&uStack_168,&uStack_170,_DAT_059fb938);
        }
      }
    }
    func_0x0249fb90();
    auVar52._8_8_ = uStack_108;
    auVar52._0_8_ = pcStack_118;
  }
LAB_0378776c:
  uStack_108 = auVar52._8_8_;
  pcStack_118 = auVar52._0_8_;
  func_0x0249fb90();
LAB_03787770:
  func_0x0249fb90();
LAB_03787774:
  func_0x0249fb90();
  uVar43 = uVar21;
  uVar38 = uVar25;
LAB_03787778:
  func_0x0249fb90();
LAB_0378777c:
  func_0x0249fb90();
LAB_03787780:
  func_0x0249fb90();
LAB_03787784:
  func_0x0249fb90();
LAB_03787788:
  auVar56 = func_0x0249fb90();
  plStack_1b8 = auVar56._0_8_;
  if (auVar56._8_4_ == 1) {
    plVar40 = (long *)func_0x054ed080(plStack_1b8);
    plVar40 = (long *)*plVar40;
    plStack_1a8 = plVar40;
    func_0x054ed090();
    pcVar18 = (char *)func_0x02a5d2cc(pplStack_1a0,_DAT_05a02748);
    if (plVar40 == (long *)0x0) {
      return pcVar18;
    }
    plStack_1b8 = (long *)func_0x0249fb88(plVar40);
  }
  func_0x0240cdb0(&plStack_1a8);
  func_0x0258f7ac(plStack_1b8);
  auVar52 = func_0x022bd790();
  uStack_1f0 = 0x3787848;
  uStack_1e8 = uVar37;
  uStack_1e0 = uVar38;
  uStack_1d8 = uVar43;
  plStack_1d0 = plVar17;
  uStack_1c8 = uVar19;
  plStack_1c0 = plVar48;
  if ((bRam0000000005e2dfbd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7d8);
    bRam0000000005e2dfbd = 1;
  }
  uStack_1f4 = uVar10;
  uVar28 = func_0x026bf824(&uStack_1f4,_DAT_05a3c7d8);
  uVar11 = func_0x037878dc(auVar52._0_8_,auVar52._8_8_,uVar28,plVar36,uVar11 & 1);
  return (char *)(ulong)(uVar11 & 1);
}


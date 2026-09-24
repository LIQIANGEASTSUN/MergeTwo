/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void SendAddMergeItemAnalytics(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem mergeItem)
 * Ghidra function entry: 037858d4
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03785e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03785cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03785e20) */
/* WARNING: Removing unreachable block (ram,0x03785e34) */
/* WARNING: Removing unreachable block (ram,0x03785e3c) */
/* WARNING: Removing unreachable block (ram,0x03785e7c) */
/* WARNING: Removing unreachable block (ram,0x03785ea4) */
/* WARNING: Removing unreachable block (ram,0x03785eac) */
/* WARNING: Removing unreachable block (ram,0x03785edc) */
/* WARNING: Removing unreachable block (ram,0x03785eb8) */
/* WARNING: Removing unreachable block (ram,0x03785ec4) */
/* WARNING: Removing unreachable block (ram,0x03785eec) */
/* WARNING: Removing unreachable block (ram,0x03785cb4) */
/* WARNING: Removing unreachable block (ram,0x03785cc8) */
/* WARNING: Removing unreachable block (ram,0x03785cd0) */
/* WARNING: Removing unreachable block (ram,0x03785d10) */
/* WARNING: Removing unreachable block (ram,0x03785d38) */
/* WARNING: Removing unreachable block (ram,0x03785d40) */
/* WARNING: Removing unreachable block (ram,0x03785d70) */
/* WARNING: Removing unreachable block (ram,0x03785d4c) */
/* WARNING: Removing unreachable block (ram,0x03785d58) */
/* WARNING: Removing unreachable block (ram,0x03785d80) */
/* WARNING: Removing unreachable block (ram,0x03785ef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long *******
FUN_037858d4(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            long *******param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  long *******ppppppplVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *plVar16;
  long lVar17;
  long ******pppppplVar18;
  long lVar19;
  ulong uVar20;
  long *****ppppplVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 auStack_268 [2];
  long ******pppppplStack_258;
  undefined8 uStack_250;
  long ******pppppplStack_248;
  undefined8 uStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  long ******pppppplStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long ******apppppplStack_f8 [11];
  undefined4 uStack_34;
  
  if ((bRam0000000005e2dfb0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8bd8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2dfb0 = 1;
  }
  ppppppplVar13 = (long *******)&uStack_34;
  ppppppplVar14 = (long *******)0x0;
  uStack_34 = 0;
  ppppppplVar4 = (long *******)func_0x036d3c20(param_3,param_2);
  if (((ulong)ppppppplVar4 & 1) == 0) {
    return ppppppplVar4;
  }
  uVar5 = func_0x037863b8(param_1,param_2);
  if ((*(long *)(param_1 + 0x30) != 0) && (param_2 != (long *)0x0)) {
    lVar17 = *param_2;
    uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
          puVar6 = (undefined8 *)(lVar17 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_037859bc;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    ppppppplVar13 = (long *******)0x5;
    puVar6 = (undefined8 *)func_0x024d927c(param_2);
LAB_037859bc:
    uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (param_3 != 0) {
      uVar7 = func_0x036d62d4(param_3,uVar7,0);
      uVar2 = uStack_34;
      uVar8 = func_0x0249fb80(_DAT_059d8bd8);
      func_0x03868b50(uVar8,uVar5,uVar23,uVar7,uVar2,0);
      lVar17 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == _DAT_059e0220) {
            puVar6 = (undefined8 *)(lVar17 + (long)(*piVar22 + 0x65) * 0x10 + 0x138);
            goto LAB_03785a6c;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0x65);
LAB_03785a6c:
      ppppppplVar13 = (long *******)(*(code *)*puVar6)(param_2,uVar8,0,puVar6[1]);
      return ppppppplVar13;
    }
  }
  auVar24 = func_0x0249fb90();
  ppppppplVar9 = auVar24._0_8_;
  uVar23 = 0x5e2d000;
  ppppppplVar10 = ppppppplVar13;
  ppppppplVar4 = ppppppplVar14;
  uVar5 = param_5;
  ppppppplVar15 = param_6;
  if ((bRam0000000005e2dfad & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059deff0);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059e1488);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfad = 1;
  }
  apppppplStack_f8[0] = (long ******)0x0;
  lVar17 = func_0x0376e450(ppppppplVar9,ppppppplVar13);
  auVar1 = auVar24;
  if (lVar17 == 0) {
    if (ppppppplVar14 == (long *******)0x0) goto LAB_03785f34;
    pppppplVar18 = *ppppppplVar14;
    if (pppppplVar18 == _DAT_059e2700) {
      if (ppppppplVar9 == (long *******)0x0) goto LAB_03785f34;
    }
    else {
      uVar20 = (ulong)*(ushort *)((long)pppppplVar18 + 0x12e);
      if (uVar20 != 0) {
        ppppplVar21 = pppppplVar18[0x16] + 1;
        do {
          if (ppppplVar21[-1] == _DAT_059deff0) {
            pppppplVar18 = pppppplVar18 + (long)*(int *)ppppplVar21 * 2 + 0x27;
            goto LAB_03785c30;
          }
          uVar20 = uVar20 - 1;
          ppppplVar21 = ppppplVar21 + 2;
        } while (uVar20 != 0);
      }
      pppppplVar18 = (long ******)func_0x024d927c(ppppppplVar14,_DAT_059deff0,0);
LAB_03785c30:
      uVar2 = (*(code *)*pppppplVar18)(ppppppplVar14,pppppplVar18[1]);
      uVar23 = func_0x0249fb80(_DAT_059e1488);
      func_0x03516a08(uVar23,uVar2,0);
      pppppplVar18 = ppppppplVar9[6];
      ppppppplVar14 = (long *******)func_0x0249fb80(_DAT_059e2700);
      uStack_200 = 0;
      func_0x036d1444(ppppppplVar14,auVar24._8_8_,uVar23,param_6,pppppplVar18,2,0,0);
    }
    ppppppplVar10 = ppppppplVar14;
    uVar7 = 0x3785cb4;
    ppppppplVar12 = ppppppplVar13;
    ppppppplVar4 = param_6;
    uVar5 = param_5;
    pppppplStack_230 = (long ******)ppppppplVar10;
  }
  else {
    ppppppplVar4 = apppppplStack_f8;
    uVar5 = 0;
    ppppppplVar10 = ppppppplVar9;
    uVar20 = func_0x037c7a80(ppppppplVar9[0x12],ppppppplVar13,ppppppplVar9,ppppppplVar4,0);
    ppppppplVar12 = (long *******)apppppplStack_f8[0];
    if ((uVar20 & 1) == 0) {
      return (long *******)0x0;
    }
    if (ppppppplVar14 == (long *******)0x0) {
LAB_03785f34:
      uVar7 = 0x3785f38;
      auVar25 = func_0x0249fb90();
      auVar1._8_8_ = ppppppplVar15;
      auVar1._0_8_ = auVar25._0_8_;
      ppppppplVar12 = auVar25._8_8_;
      pppppplStack_230 = (long ******)ppppppplVar14;
    }
    else {
      pppppplVar18 = *ppppppplVar14;
      ppppppplVar10 = ppppppplVar14;
      if (pppppplVar18 != _DAT_059e2700) {
        uVar20 = (ulong)*(ushort *)((long)pppppplVar18 + 0x12e);
        if (uVar20 != 0) {
          ppppplVar21 = pppppplVar18[0x16] + 1;
          do {
            if (ppppplVar21[-1] == _DAT_059deff0) {
              pppppplVar18 = pppppplVar18 + (long)*(int *)ppppplVar21 * 2 + 0x27;
              goto LAB_03785d9c;
            }
            uVar20 = uVar20 - 1;
            ppppplVar21 = ppppplVar21 + 2;
          } while (uVar20 != 0);
        }
        pppppplVar18 = (long ******)func_0x024d927c(ppppppplVar14,_DAT_059deff0,0);
LAB_03785d9c:
        uVar2 = (*(code *)*pppppplVar18)(ppppppplVar14,pppppplVar18[1]);
        uVar23 = func_0x0249fb80(_DAT_059e1488);
        func_0x03516a08(uVar23,uVar2,0);
        pppppplVar18 = ppppppplVar9[6];
        ppppppplVar10 = (long *******)func_0x0249fb80(_DAT_059e2700);
        uStack_200 = 0;
        func_0x036d1444(ppppppplVar10,auVar24._8_8_,uVar23,param_6,pppppplVar18,2,0,0);
      }
      uVar7 = 0x3785e20;
      ppppppplVar4 = param_6;
      uVar5 = param_5;
      pppppplStack_230 = (long ******)ppppppplVar10;
      ppppppplVar13 = ppppppplVar12;
    }
  }
  plVar16 = auVar1._8_8_;
  lVar17 = auVar1._0_8_;
  ppppppplVar14 = ppppppplVar4;
  uStack_250 = uVar7;
  uStack_240 = uVar23;
  pppppplStack_238 = (long ******)ppppppplVar13;
  uStack_218 = param_5;
  pppppplStack_210 = (long ******)param_6;
  uStack_208 = param_7;
  auStack_228 = auVar24;
  if ((bRam0000000005e2dfaf & 1) == 0) {
    func_0x0249f8e4(&DAT_059fb920);
    func_0x0249f8e4(&DAT_059fb930);
    func_0x0249f8e4(&DAT_059df180);
    func_0x0249f8e4(&DAT_059df188);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2dfaf = 1;
  }
  func_0x037743ac(lVar17,ppppppplVar12,ppppppplVar10);
  uVar23 = func_0x03530c84(ppppppplVar4,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2c00);
  }
  uVar23 = func_0x03530158(uVar23,0);
  func_0x03787050(lVar17,uVar23,plVar16);
  func_0x0378717c(lVar17,plVar16,uVar23);
  if (*(long *)(lVar17 + 0xa0) == 0) goto LAB_03786374;
  pppppplStack_248 = (long ******)ppppppplVar12;
  uVar20 = func_0x02a3cb7c(*(long *)(lVar17 + 0xa0),&pppppplStack_248,_DAT_059fb920);
  if ((uVar20 & 1) != 0) {
    if (*(long *)(lVar17 + 0xa0) == 0) goto LAB_03786374;
    ppppppplVar14 = _DAT_059fb930;
    pppppplStack_258 = (long ******)ppppppplVar12;
    func_0x02a3be14(*(long *)(lVar17 + 0xa0),&pppppplStack_258,&pppppplStack_248,_DAT_059fb930);
    if (*(long *)(lVar17 + 0xa0) == 0) goto LAB_03786374;
    uVar20 = (ulong)pppppplStack_248 & 0xffffffff;
    ppppppplVar14 = _DAT_059fb930;
    pppppplStack_258 = (long ******)ppppppplVar12;
    func_0x02a3be14(*(long *)(lVar17 + 0xa0),&pppppplStack_258,&pppppplStack_248,_DAT_059fb930);
    if (ppppppplVar10 == (long *******)0x0) goto LAB_03786374;
    ppppppplVar14 = (long *******)((ulong)pppppplStack_248 >> 0x20);
    func_0x036df8d8(ppppppplVar10,plVar16,uVar20,ppppppplVar14,ppppppplVar4,0);
  }
  if (plVar16 != (long *)0x0) {
    lVar19 = *plVar16;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
          puVar6 = (undefined8 *)(lVar19 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_03786124;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_03786124:
    uVar23 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    uVar20 = func_0x036eb114(ppppppplVar10,uVar23,0);
    if ((uVar20 & 1) == 0) goto LAB_03786330;
    if (ppppppplVar10 != (long *******)0x0) {
      plVar11 = (long *)func_0x036d5f38(ppppppplVar10,0);
      if (plVar11 != (long *)0x0) {
        lVar19 = *plVar11;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059df188) {
              puVar6 = (undefined8 *)(lVar19 + (long)(*piVar22 + 10) * 0x10 + 0x138);
              goto LAB_037861b4;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df188,10);
LAB_037861b4:
        uVar20 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if ((uVar20 & 1) != 0) {
LAB_03786330:
          FUN_037858d4(lVar17,plVar16,ppppppplVar10);
          uVar5 = func_0x03530c84(ppppppplVar4,0);
          *(undefined8 *)(lVar17 + 0x20) = uVar5;
          return ppppppplVar10;
        }
        lVar19 = *plVar16;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
              puVar6 = (undefined8 *)(lVar19 + (long)(*piVar22 + 5) * 0x10 + 0x138);
              goto LAB_03786214;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_03786214:
        uVar23 = (*(code *)*puVar6)(plVar16,puVar6[1]);
        plVar11 = (long *)func_0x036d3908(ppppppplVar10,uVar23,0);
        if (plVar11 != (long *)0x0) {
          lVar19 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == _DAT_059dfbc0) {
                puVar6 = (undefined8 *)(lVar19 + (long)(*piVar22 + 4) * 0x10 + 0x138);
                goto LAB_03786290;
              }
              uVar20 = uVar20 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar20 != 0);
          }
          puVar6 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfbc0,4);
LAB_03786290:
          plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
          if (plVar11 != (long *)0x0) {
            lVar19 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == _DAT_059df180) {
                  puVar6 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                  goto LAB_037862fc;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar6 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df180,7);
LAB_037862fc:
            uVar20 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            if ((uVar20 & 1) != 0) {
              func_0x036faf48(ppppppplVar10,0);
              func_0x036fb060(ppppppplVar10,plVar16,uVar5,lVar17,0);
            }
            goto LAB_03786330;
          }
        }
      }
    }
  }
LAB_03786374:
  lVar17 = func_0x0249fb90();
  auStack_268[0] = 0;
  uVar3 = func_0x037c7a80(*(undefined8 *)(lVar17 + 0x90),ppppppplVar14,lVar17,auStack_268,0);
  return (long *******)(ulong)(uVar3 & 1);
}


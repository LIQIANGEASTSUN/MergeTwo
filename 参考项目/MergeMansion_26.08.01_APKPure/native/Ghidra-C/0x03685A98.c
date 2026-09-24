/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Boolean TryToPlacePocketItemToBoard(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate primaryCoordinate, GameLogic.Player.Items.IBoardItem item, GameLogic.Random.IGenerationContext generationContext, GameLogic.Config.Types.MetacoreTime timestamp, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03785a98
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

long *****
FUN_03785a98(long *****param_1,long *****param_2,long *****param_3,long *****param_4,
            undefined8 param_5,long *****param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  undefined8 uVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 auStack_228 [2];
  long ****pppplStack_218;
  undefined8 uStack_210;
  long ****pppplStack_208;
  undefined8 uStack_200;
  long ****pppplStack_1f8;
  long ****pppplStack_1f0;
  long ****pppplStack_1e8;
  long ****pppplStack_1e0;
  undefined8 uStack_1d8;
  long ****pppplStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long ****apppplStack_b8 [11];
  
  uVar17 = 0x5e2d000;
  ppppplVar5 = param_3;
  ppppplVar10 = param_4;
  uVar12 = param_5;
  ppppplVar13 = param_6;
  if ((bRam0000000005e2dfad & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059deff0);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059e1488);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfad = 1;
  }
  apppplStack_b8[0] = (long ****)0x0;
  lVar3 = func_0x0376e450(param_1,param_3);
  ppppplVar6 = param_1;
  if (lVar3 == 0) {
    if (param_4 == (long *****)0x0) goto LAB_03785f34;
    pppplVar14 = *param_4;
    if (pppplVar14 == _DAT_059e2700) {
      if (param_1 == (long *****)0x0) goto LAB_03785f34;
    }
    else {
      uVar4 = (ulong)*(ushort *)((long)pppplVar14 + 0x12e);
      if (uVar4 != 0) {
        ppplVar15 = pppplVar14[0x16] + 1;
        do {
          if (ppplVar15[-1] == _DAT_059deff0) {
            pppplVar14 = pppplVar14 + (long)*(int *)ppplVar15 * 2 + 0x27;
            goto LAB_03785c30;
          }
          uVar4 = uVar4 - 1;
          ppplVar15 = ppplVar15 + 2;
        } while (uVar4 != 0);
      }
      pppplVar14 = (long ****)func_0x024d927c(param_4,_DAT_059deff0,0);
LAB_03785c30:
      uVar1 = (*(code *)*pppplVar14)(param_4,pppplVar14[1]);
      uVar17 = func_0x0249fb80(_DAT_059e1488);
      func_0x03516a08(uVar17,uVar1,0);
      pppplVar14 = param_1[6];
      param_4 = (long *****)func_0x0249fb80(_DAT_059e2700);
      uStack_1c0 = 0;
      func_0x036d1444(param_4,param_2,uVar17,param_6,pppplVar14,2,0,0);
    }
    ppppplVar5 = param_4;
    uVar18 = 0x3785cb4;
    ppppplVar9 = param_3;
    ppppplVar10 = param_6;
    uVar12 = param_5;
    ppppplVar13 = param_2;
    pppplStack_1f0 = (long ****)ppppplVar5;
  }
  else {
    ppppplVar10 = apppplStack_b8;
    uVar12 = 0;
    ppppplVar5 = param_1;
    uVar4 = func_0x037c7a80(param_1[0x12],param_3,param_1,ppppplVar10,0);
    ppppplVar9 = (long *****)apppplStack_b8[0];
    if ((uVar4 & 1) == 0) {
      return (long *****)0x0;
    }
    if (param_4 == (long *****)0x0) {
LAB_03785f34:
      uVar18 = 0x3785f38;
      auVar19 = func_0x0249fb90();
      ppppplVar6 = auVar19._0_8_;
      ppppplVar9 = auVar19._8_8_;
      pppplStack_1f0 = (long ****)param_4;
    }
    else {
      pppplVar14 = *param_4;
      ppppplVar5 = param_4;
      if (pppplVar14 != _DAT_059e2700) {
        uVar4 = (ulong)*(ushort *)((long)pppplVar14 + 0x12e);
        if (uVar4 != 0) {
          ppplVar15 = pppplVar14[0x16] + 1;
          do {
            if (ppplVar15[-1] == _DAT_059deff0) {
              pppplVar14 = pppplVar14 + (long)*(int *)ppplVar15 * 2 + 0x27;
              goto LAB_03785d9c;
            }
            uVar4 = uVar4 - 1;
            ppplVar15 = ppplVar15 + 2;
          } while (uVar4 != 0);
        }
        pppplVar14 = (long ****)func_0x024d927c(param_4,_DAT_059deff0,0);
LAB_03785d9c:
        uVar1 = (*(code *)*pppplVar14)(param_4,pppplVar14[1]);
        uVar17 = func_0x0249fb80(_DAT_059e1488);
        func_0x03516a08(uVar17,uVar1,0);
        pppplVar14 = param_1[6];
        ppppplVar5 = (long *****)func_0x0249fb80(_DAT_059e2700);
        uStack_1c0 = 0;
        func_0x036d1444(ppppplVar5,param_2,uVar17,param_6,pppplVar14,2,0,0);
      }
      uVar18 = 0x3785e20;
      ppppplVar10 = param_6;
      uVar12 = param_5;
      ppppplVar13 = param_2;
      pppplStack_1f0 = (long ****)ppppplVar5;
      param_3 = ppppplVar9;
    }
  }
  ppppplVar11 = ppppplVar10;
  uStack_210 = uVar18;
  uStack_200 = uVar17;
  pppplStack_1f8 = (long ****)param_3;
  pppplStack_1e8 = (long ****)param_1;
  pppplStack_1e0 = (long ****)param_2;
  uStack_1d8 = param_5;
  pppplStack_1d0 = (long ****)param_6;
  uStack_1c8 = param_7;
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
  func_0x037743ac(ppppplVar6,ppppplVar9,ppppplVar5);
  uVar17 = func_0x03530c84(ppppplVar10,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2c00);
  }
  uVar17 = func_0x03530158(uVar17,0);
  func_0x03787050(ppppplVar6,uVar17,ppppplVar13);
  func_0x0378717c(ppppplVar6,ppppplVar13,uVar17);
  if (ppppplVar6[0x14] == (long ****)0x0) goto LAB_03786374;
  pppplStack_208 = (long ****)ppppplVar9;
  uVar4 = func_0x02a3cb7c(ppppplVar6[0x14],&pppplStack_208,_DAT_059fb920);
  if ((uVar4 & 1) != 0) {
    if (ppppplVar6[0x14] == (long ****)0x0) goto LAB_03786374;
    ppppplVar11 = _DAT_059fb930;
    pppplStack_218 = (long ****)ppppplVar9;
    func_0x02a3be14(ppppplVar6[0x14],&pppplStack_218,&pppplStack_208,_DAT_059fb930);
    if (ppppplVar6[0x14] == (long ****)0x0) goto LAB_03786374;
    uVar4 = (ulong)pppplStack_208 & 0xffffffff;
    ppppplVar11 = _DAT_059fb930;
    pppplStack_218 = (long ****)ppppplVar9;
    func_0x02a3be14(ppppplVar6[0x14],&pppplStack_218,&pppplStack_208,_DAT_059fb930);
    if (ppppplVar5 == (long *****)0x0) goto LAB_03786374;
    ppppplVar11 = (long *****)((ulong)pppplStack_208 >> 0x20);
    func_0x036df8d8(ppppplVar5,ppppplVar13,uVar4,ppppplVar11,ppppplVar10,0);
  }
  if (ppppplVar13 != (long *****)0x0) {
    pppplVar14 = *ppppplVar13;
    uVar4 = (ulong)*(ushort *)((long)pppplVar14 + 0x12e);
    if (uVar4 != 0) {
      ppplVar15 = pppplVar14[0x16] + 1;
      do {
        if (ppplVar15[-1] == _DAT_059df8e8) {
          pppplVar14 = pppplVar14 + (long)(*(int *)ppplVar15 + 5) * 2 + 0x27;
          goto LAB_03786124;
        }
        uVar4 = uVar4 - 1;
        ppplVar15 = ppplVar15 + 2;
      } while (uVar4 != 0);
    }
    pppplVar14 = (long ****)func_0x024d927c(ppppplVar13,_DAT_059df8e8,5);
LAB_03786124:
    uVar17 = (*(code *)*pppplVar14)(ppppplVar13,pppplVar14[1]);
    uVar4 = func_0x036eb114(ppppplVar5,uVar17,0);
    if ((uVar4 & 1) == 0) {
LAB_03786330:
      func_0x037858d4(ppppplVar6,ppppplVar13,ppppplVar5);
      pppplVar14 = (long ****)func_0x03530c84(ppppplVar10,0);
      ppppplVar6[4] = pppplVar14;
      return ppppplVar5;
    }
    if ((ppppplVar5 != (long *****)0x0) &&
       (plVar7 = (long *)func_0x036d5f38(ppppplVar5,0), plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _DAT_059df188) {
            puVar8 = (undefined8 *)(lVar3 + (long)(*piVar16 + 10) * 0x10 + 0x138);
            goto LAB_037861b4;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df188,10);
LAB_037861b4:
      uVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar4 & 1) != 0) goto LAB_03786330;
      pppplVar14 = *ppppplVar13;
      uVar4 = (ulong)*(ushort *)((long)pppplVar14 + 0x12e);
      if (uVar4 != 0) {
        ppplVar15 = pppplVar14[0x16] + 1;
        do {
          if (ppplVar15[-1] == _DAT_059df8e8) {
            pppplVar14 = pppplVar14 + (long)(*(int *)ppplVar15 + 5) * 2 + 0x27;
            goto LAB_03786214;
          }
          uVar4 = uVar4 - 1;
          ppplVar15 = ppplVar15 + 2;
        } while (uVar4 != 0);
      }
      pppplVar14 = (long ****)func_0x024d927c(ppppplVar13,_DAT_059df8e8,5);
LAB_03786214:
      uVar17 = (*(code *)*pppplVar14)(ppppplVar13,pppplVar14[1]);
      plVar7 = (long *)func_0x036d3908(ppppplVar5,uVar17,0);
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto LAB_03786290;
            }
            uVar4 = uVar4 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059dfbc0,4);
LAB_03786290:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _DAT_059df180) {
                puVar8 = (undefined8 *)(lVar3 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                goto LAB_037862fc;
              }
              uVar4 = uVar4 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar4 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df180,7);
LAB_037862fc:
          uVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar4 & 1) != 0) {
            func_0x036faf48(ppppplVar5,0);
            func_0x036fb060(ppppplVar5,ppppplVar13,uVar12,ppppplVar6,0);
          }
          goto LAB_03786330;
        }
      }
    }
  }
LAB_03786374:
  lVar3 = func_0x0249fb90();
  auStack_228[0] = 0;
  uVar2 = func_0x037c7a80(*(undefined8 *)(lVar3 + 0x90),ppppplVar11,lVar3,auStack_228,0);
  return (long *****)(ulong)(uVar2 & 1);
}


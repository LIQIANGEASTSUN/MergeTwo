/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: MergeResult GetMoveResult(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime actionTimestamp)
 * Ghidra function entry: 0377930c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_0377930c(undefined *param_1,long param_2,undefined8 param_3,undefined *param_4,
            undefined *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  puVar13 = param_4;
  puVar14 = param_5;
  uStack_48 = param_3;
  if ((bRam0000000005e2dfa4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2dfa4 = 1;
  }
  uVar5 = func_0x03774280(param_1,param_3);
  if (((uVar5 & 1) == 0) || (uVar5 = func_0x03774280(param_1,param_4), (uVar5 & 1) == 0)) {
    return (undefined *)0x1;
  }
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar5 = func_0x037737e4(&uStack_48,param_4);
  if ((uVar5 & 1) != 0) {
    return (undefined *)0x0;
  }
  lVar6 = func_0x0376e450(param_1,param_3);
  if (lVar6 == 0) {
    return (undefined *)0x0;
  }
  uVar5 = func_0x036d7b74(lVar6,param_2,0);
  if ((uVar5 & 1) == 0) {
    return (undefined *)0x0;
  }
  uVar5 = func_0x036d06c8(lVar6,0);
  if ((uVar5 & 1) == 0) {
    return (undefined *)0x0;
  }
  lVar7 = func_0x0376e450(param_1,param_4);
  if (lVar7 == 0) {
    return (undefined *)0x2;
  }
  puVar12 = (undefined *)0x0;
  uVar5 = func_0x036d7b74(lVar7,param_2,0);
  if ((uVar5 & 1) == 0) {
    return (undefined *)0x2;
  }
  uVar5 = func_0x036f883c(lVar7,0);
  if ((uVar5 & 1) == 0) {
    return (undefined *)0x2;
  }
  if (param_2 == 0) goto LAB_03779794;
  uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
  param_1 = (undefined *)func_0x036d3908(lVar6,uVar8,0);
  uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
  puVar9 = (undefined *)func_0x036d3908(lVar7,uVar8,0);
  puVar13 = puVar9;
  uVar5 = func_0x03783c80(puVar9,param_2,param_1);
  if ((uVar5 & 1) != 0) {
    return (undefined *)0xa;
  }
  uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
  uVar5 = func_0x036eb4a0(lVar6,uVar8,0);
  if ((uVar5 & 1) != 0) {
    uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
    uVar5 = func_0x036eb4a0(lVar7,uVar8,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar12 = (undefined *)0x0;
      uVar5 = func_0x03646774(param_2,lVar6,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar12 = (undefined *)0x0;
        uVar5 = func_0x03646774(param_2,lVar7,0);
        if ((uVar5 & 1) != 0) {
          puVar14 = (undefined *)0x0;
          puVar13 = param_5;
          uVar5 = func_0x036d9f40(lVar6,param_2,lVar7,param_5,0);
          if ((uVar5 & 1) != 0) {
            return (undefined *)0x3;
          }
          goto LAB_037795ac;
        }
      }
      if (*(long *)(lVar6 + 0x10) != 0) {
        param_5 = &DAT_059fa1e8;
        iVar3 = func_0x023e7f88(*(long *)(lVar6 + 0x10),_DAT_059fa1e8);
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_03779794;
        iVar4 = func_0x023e7f88(*(long *)(lVar7 + 0x10),_DAT_059fa1e8);
        if (iVar3 == iVar4) {
          return (undefined *)0x8;
        }
        goto LAB_03779774;
      }
      goto LAB_03779794;
    }
  }
LAB_037795ac:
  if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar5 = func_0x036c0cb8(param_1,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar5 = func_0x036c0cb8(puVar9,0);
    if ((uVar5 & 1) != 0) goto LAB_037795f4;
  }
  else {
LAB_037795f4:
    uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
    uVar5 = func_0x036eb4a0(lVar6,uVar8,0);
    if ((uVar5 & 1) != 0) {
      uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
      uVar5 = func_0x036eb4a0(lVar7,uVar8,0);
      if ((uVar5 & 1) != 0) {
        uVar5 = func_0x036d9f40(lVar6,param_2,lVar7,param_5,0);
        if ((uVar5 & 1) != 0) {
          return (undefined *)0x3;
        }
        puVar14 = (undefined *)0x0;
        puVar13 = param_5;
        uVar5 = func_0x036d9f40(lVar7,param_2,lVar6,param_5,0);
        if ((uVar5 & 1) != 0) {
          return (undefined *)0x3;
        }
      }
    }
  }
  puVar12 = (undefined *)0x0;
  uVar5 = func_0x036e15dc(lVar6,param_2,0);
  if ((uVar5 & 1) == 0) goto LAB_03779774;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar1 = func_0x023e7f88(*(long *)(lVar6 + 0x10),_DAT_059fa1e8);
    if (*(long *)(lVar7 + 0x10) != 0) {
      param_5 = (undefined *)(ulong)uVar1;
      uVar2 = func_0x023e7f88(*(long *)(lVar7 + 0x10),_DAT_059fa1e8);
      if (uVar1 == uVar2) {
        if (((param_1 == (undefined *)0x0) ||
            (puVar12 = param_1, puVar9 = (undefined *)func_0x022bffa8(0x12,_DAT_059dfbc0,param_1),
            puVar9 == (undefined *)0x0)) ||
           (lVar10 = func_0x022bffa8(1,_DAT_059df2a8,puVar9), puVar12 = puVar9, lVar10 == 0))
        goto LAB_03779794;
        uVar5 = func_0x023ec3f8(1,_DAT_059df2c0,lVar10,lVar6,lVar7,param_2);
        if ((uVar5 & 1) == 0) {
          return (undefined *)0x7;
        }
      }
LAB_03779774:
      uVar5 = func_0x036e21f8(lVar7,0);
      uVar1 = 2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 4;
      }
      return (undefined *)(ulong)uVar1;
    }
  }
LAB_03779794:
  auVar15 = func_0x0249fb90();
  uVar8 = auVar15._8_8_;
  lVar10 = auVar15._0_8_;
  uStack_80 = 0x3779798;
  puStack_88 = puVar13;
  puStack_78 = param_1;
  lStack_70 = lVar6;
  lStack_68 = lVar7;
  puStack_60 = param_5;
  lStack_58 = param_2;
  lVar6 = func_0x0376e450(lVar10,puVar13);
  if ((lVar6 == 0) ||
     (uVar5 = func_0x037c7a80(*(undefined8 *)(lVar10 + 0x90),puVar13,lVar10,&puStack_88,0),
     puVar13 = puStack_88, (uVar5 & 1) != 0)) {
    uVar11 = func_0x0376e450(lVar10,puVar12);
    func_0x037743ac(lVar10,puVar13,uVar11);
    func_0x037789bc(lVar10,uVar8,puVar12,puVar14,0);
    func_0x03787050(lVar10,puVar14,uVar8);
    func_0x0378717c(lVar10,uVar8,puVar14);
    uVar8 = func_0x03530c84(puVar14,0);
    *(undefined8 *)(lVar10 + 0x20) = uVar8;
    puVar12 = puStack_88;
  }
  return puVar12;
}


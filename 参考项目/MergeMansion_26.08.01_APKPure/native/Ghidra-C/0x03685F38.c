/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Items.MergeItem AddMergeItem(GameLogic.Player.Board.Coordinate itemCoordinate, GameLogic.Player.Items.MergeItem mergeItem, GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Random.IGenerationContext generationContext, GameLogic.Player.IPlayer player)
 * Ghidra function entry: 03785f38
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_03785f38(long param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  long *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 auStack_68 [2];
  ulong uStack_58;
  ulong uStack_48;
  
  uVar6 = param_4;
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
  func_0x037743ac(param_1,param_2,param_3);
  uVar2 = func_0x03530c84(param_4,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2c00);
  }
  uVar2 = func_0x03530158(uVar2,0);
  func_0x03787050(param_1,uVar2,param_6);
  func_0x0378717c(param_1,param_6,uVar2);
  if (*(long *)(param_1 + 0xa0) == 0) goto LAB_03786374;
  uStack_48 = param_2;
  uVar3 = func_0x02a3cb7c(*(long *)(param_1 + 0xa0),&uStack_48,_DAT_059fb920);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_03786374;
    uVar6 = _DAT_059fb930;
    uStack_58 = param_2;
    func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_58,&uStack_48,_DAT_059fb930);
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_03786374;
    uVar3 = uStack_48 & 0xffffffff;
    uVar6 = _DAT_059fb930;
    uStack_58 = param_2;
    func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_58,&uStack_48,_DAT_059fb930);
    if (param_3 == 0) goto LAB_03786374;
    uVar6 = uStack_48 >> 0x20;
    func_0x036df8d8(param_3,param_6,uVar3,uVar6,param_4,0);
  }
  if (param_6 != (long *)0x0) {
    lVar7 = *param_6;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _DAT_059df8e8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_03786124;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_03786124:
    uVar2 = (*(code *)*puVar4)(param_6,puVar4[1]);
    uVar3 = func_0x036eb114(param_3,uVar2,0);
    if ((uVar3 & 1) == 0) {
LAB_03786330:
      func_0x037858d4(param_1,param_6,param_3);
      uVar2 = func_0x03530c84(param_4,0);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      return param_3;
    }
    if ((param_3 != 0) && (plVar5 = (long *)func_0x036d5f38(param_3,0), plVar5 != (long *)0x0)) {
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _DAT_059df188) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 10) * 0x10 + 0x138);
            goto LAB_037861b4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059df188,10);
LAB_037861b4:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar3 & 1) != 0) goto LAB_03786330;
      lVar7 = *param_6;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _DAT_059df8e8) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03786214;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_03786214:
      uVar2 = (*(code *)*puVar4)(param_6,puVar4[1]);
      plVar5 = (long *)func_0x036d3908(param_3,uVar2,0);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _DAT_059dfbc0) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_03786290;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059dfbc0,4);
LAB_03786290:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _DAT_059df180) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                goto LAB_037862fc;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059df180,7);
LAB_037862fc:
          uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar6 & 1) != 0) {
            func_0x036faf48(param_3,0);
            func_0x036fb060(param_3,param_6,param_5,param_1,0);
          }
          goto LAB_03786330;
        }
      }
    }
  }
LAB_03786374:
  lVar7 = func_0x0249fb90();
  auStack_68[0] = 0;
  uVar1 = func_0x037c7a80(*(undefined8 *)(lVar7 + 0x90),uVar6,lVar7,auStack_68,0);
  return (ulong)(uVar1 & 1);
}


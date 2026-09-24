/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Boolean TryToSpawnFromSpawner(GameLogic.Player.IPlayer player, Metaplay.Core.MetaTime timestamp, GameLogic.Player.Items.MergeItem item, System.Collections.Generic.ICollection`1<GameLogic.Player.Board.Coordinate> possibleSpawnCoordinates, System.Boolean takeFromStorage, GameLogic.Random.IGenerationContext generationContext, out GameLogic.Player.Board.Coordinate spawnCoordinate)
 * Ghidra function entry: 03778ca4
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03778ca4(long param_1,long *param_2,undefined8 *param_3,long param_4,long *param_5,
                undefined8 param_6,ulong param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = param_6;
  uVar14 = param_7;
  puVar7 = param_8;
  if ((bRam0000000005e2df8c & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a41860);
    func_0x0249f8e4(&DAT_05a41ff0);
    func_0x0249f8e4(&DAT_059c98a0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2df8c = 1;
  }
  uStack_60 = 0;
  uVar2 = func_0x036f8310(param_4,param_2,param_1,0);
  puVar11 = &uStack_60;
  lVar10 = 1;
  uVar12 = 0;
  uVar3 = func_0x036cf0a0(uVar2,param_2,1,puVar11,0);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)func_0x026e290c(uStack_60,_DAT_05a41860);
    lVar13 = param_1;
    if (param_4 == 0) goto LAB_03779220;
  }
  else {
    if (param_4 == 0) goto LAB_03779220;
    lVar13 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  puVar11 = puVar4;
  lVar10 = lVar13;
  uVar12 = 0;
  puVar4 = (undefined8 *)func_0x036dd594(param_4,param_2,lVar10,puVar11,0);
  if (puVar4 == (undefined8 *)0x0) {
LAB_03778ed0:
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    *param_8 = **(undefined8 **)(_DAT_059db250 + 0xb8);
    return 0;
  }
  if (param_5 != (long *)0x0) {
    lVar13 = *param_5;
    uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar3 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == _DAT_059c98a0) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03778e34;
        }
        uVar3 = uVar3 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar3 != 0);
    }
    lVar10 = 0;
    puVar5 = (undefined8 *)func_0x024d927c(param_5,_DAT_059c98a0,0);
LAB_03778e34:
    iVar1 = (*(code *)*puVar5)(param_5,puVar5[1]);
    if (iVar1 < 1) goto LAB_03778ed0;
    if (param_4 != 0) {
      uVar12 = 0;
      puVar11 = param_3;
      func_0x036dddd0(param_4,param_2,(uint)param_6 & 1,param_3,0);
      lVar10 = _DAT_05a41ff0;
      func_0x026e4be0(param_5,&uStack_58,_DAT_05a41ff0);
      *param_8 = uStack_58;
      if (param_2 != (long *)0x0) {
        lVar10 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar15 + 5) * 0x10 + 0x138);
              goto LAB_03778f10;
            }
            uVar3 = uVar3 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03778f10:
        uVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
        lVar10 = 0;
        plVar6 = (long *)func_0x036d3908(param_4,uVar2,0);
        if (plVar6 != (long *)0x0) {
          lVar13 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar3 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == _DAT_059dfbc0) {
                puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03778f88;
              }
              uVar3 = uVar3 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar3 != 0);
          }
          lVar10 = 0;
          puVar5 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059dfbc0,0);
LAB_03778f88:
          plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
          if (plVar6 != (long *)0x0) {
            lVar10 = *plVar6;
            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == _DAT_059e0788) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                  goto LAB_03778ff4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059e0788,5);
LAB_03778ff4:
            uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            uVar2 = *param_8;
            uVar14 = uVar14 & 0xffffffff;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64(_DAT_059e2c00);
            }
            uVar8 = func_0x03530158(param_3,0);
            puVar7 = (undefined8 *)0x0;
            func_0x03774f00(param_1,param_2,uVar2,puVar4,param_7,uVar8,uVar14,0);
            lVar10 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == _DAT_059df8e8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                  puVar11 = puVar4;
                  uVar12 = param_7;
                  goto LAB_037790a4;
                }
                uVar12 = uVar12 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
            puVar11 = puVar4;
            uVar12 = param_7;
LAB_037790a4:
            uVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
            lVar10 = 0;
            uVar3 = func_0x036f619c(param_4,uVar2,0);
            if (((uVar3 & 1) == 0) || (lVar13 = func_0x036d5ee4(param_4,0), lVar13 == 0)) {
              lVar10 = *param_2;
              uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar3 != 0) {
                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == _DAT_059df8e8) {
                    puVar4 = (undefined8 *)(lVar10 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                    goto LAB_03779144;
                  }
                  uVar3 = uVar3 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03779144:
              uVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
              lVar10 = 0;
              uVar3 = func_0x036f8034(param_4,uVar2,0);
              if ((((uVar3 & 1) != 0) && (lVar13 = func_0x036d3170(param_4,0), lVar13 != 0)) &&
                 (*(long *)(lVar13 + 0x10) != 0)) {
                lVar13 = func_0x036d3170(param_4,0);
                if ((lVar13 == 0) || (plVar6 = *(long **)(lVar13 + 0x10), plVar6 == (long *)0x0))
                goto LAB_03779220;
                lVar10 = *plVar6;
                uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == _DAT_059e0170) {
                      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                      goto LAB_037791ec;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059e0170,3);
LAB_037791ec:
                (*(code *)*puVar7)(plVar6,puVar7[1]);
              }
            }
            else {
              lVar13 = func_0x036d5ee4(param_4,0);
              if (lVar13 == 0) goto LAB_03779220;
              *(long *)(lVar13 + 0x68) = *(long *)(lVar13 + 0x68) + 1;
            }
            *(undefined8 **)(param_1 + 0x20) = param_3;
            return 1;
          }
        }
      }
    }
  }
LAB_03779220:
  auVar16 = func_0x0249fb90();
  uVar9 = auVar16._8_8_;
  uVar2 = auVar16._0_8_;
  iVar1 = func_0x0377930c(uVar2,uVar12,uVar9,lVar10,puVar11);
  if (iVar1 == 4) {
    func_0x0377986c(uVar2,uVar9,lVar10,puVar11,uVar12,0);
  }
  else if (iVar1 == 3) {
    func_0x03779dcc(uVar2,uVar9,lVar10,puVar11,uVar12,uVar8,uVar14,puVar7);
  }
  else if (iVar1 == 2) {
    func_0x03779798(uVar2,uVar12,uVar9,lVar10,puVar11);
  }
  return iVar1;
}


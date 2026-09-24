/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Int32 GetUnlockedSpawnItemCount(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard board)
 * Ghidra function entry: 036dd9ac
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036dd9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  long **pplVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [12];
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  long **pplStack_48;
  long *plStack_38;
  
  if ((bRam0000000005e2da3d & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca7d0);
    func_0x0249f8e4(&DAT_059cbb28);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2da3d = 1;
  }
  plStack_38 = (long *)0x0;
  plVar2 = (long *)func_0x036f8310(param_1,param_2,param_3,0);
  if (plVar2 == (long *)0x0) {
LAB_036ddc54:
    func_0x0249fb90();
  }
  else {
    lVar5 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _DAT_059ca7d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036dda90;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x024d927c(plVar2,_DAT_059ca7d0,0);
LAB_036dda90:
    plStack_38 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    pplStack_48 = &plStack_38;
    lStack_50 = 0;
    if (plStack_38 != (long *)0x0) {
      uVar8 = 0;
      do {
        plVar2 = plStack_38;
        lVar5 = *plStack_38;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _DAT_059df6e0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036ddb18;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x024d927c(plStack_38,_DAT_059df6e0,0);
LAB_036ddb18:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        plVar2 = plStack_38;
        if ((uVar9 & 1) == 0) goto LAB_036ddbc0;
        if (plStack_38 == (long *)0x0) {
          func_0x0249fb90();
          goto LAB_036ddc54;
        }
        lVar5 = *plStack_38;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _DAT_059cbb28) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036ddb7c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x024d927c(plStack_38,_DAT_059cbb28,0);
LAB_036ddb7c:
        uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar1 = func_0x036c0a40(uVar4,param_2,0);
        uVar8 = (ulong)((int)uVar8 + (uVar1 & 1));
      } while (plStack_38 != (long *)0x0);
      goto LAB_036ddbbc;
    }
  }
  uVar8 = 0;
LAB_036ddbbc:
  func_0x0249fb90();
LAB_036ddbc0:
  lVar5 = 0;
  pplVar6 = &plStack_38;
  do {
    plVar2 = *pplVar6;
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _DAT_059df598) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036ddc24;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x024d927c(plVar2,_DAT_059df598,0);
LAB_036ddc24:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    if (lVar5 == 0) {
      return uVar8;
    }
    auVar11 = func_0x0249fb88(lVar5);
    uStack_60 = auVar11._0_8_;
    if (auVar11._8_4_ != 1) {
      func_0x022bd79c(&lStack_50);
      func_0x0258f7ac(uStack_60);
      func_0x022bd790();
      uStack_68 = 0;
      uStack_58 = uVar8;
      uVar8 = func_0x036f8310();
      uVar9 = func_0x036cf0a0(uVar8,extraout_x1,1,&uStack_68);
      if ((uVar9 & 1) == 0) {
        uVar8 = uStack_68;
      }
      return uVar8;
    }
    plVar2 = (long *)func_0x054ed080(uStack_60);
    lVar5 = *plVar2;
    lStack_50 = lVar5;
    func_0x054ed090();
    pplVar6 = pplStack_48;
  } while( true );
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void UpdateVisibilityOfNeighborsRecursive(GameLogic.Player.IPlayer player, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> mergeBoardActs, GameLogic.Player.Board.Coordinate position, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 03783264
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0378384c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03783850) */
/* WARNING: Removing unreachable block (ram,0x0378385c) */
/* WARNING: Removing unreachable block (ram,0x03783884) */
/* WARNING: Removing unreachable block (ram,0x03783888) */
/* WARNING: Removing unreachable block (ram,0x03783898) */
/* WARNING: Removing unreachable block (ram,0x037838a8) */
/* WARNING: Removing unreachable block (ram,0x037839a4) */
/* WARNING: Removing unreachable block (ram,0x037838ac) */
/* WARNING: Removing unreachable block (ram,0x037838dc) */
/* WARNING: Removing unreachable block (ram,0x037838f0) */
/* WARNING: Removing unreachable block (ram,0x037838fc) */
/* WARNING: Removing unreachable block (ram,0x03783928) */
/* WARNING: Removing unreachable block (ram,0x0378393c) */
/* WARNING: Removing unreachable block (ram,0x03783950) */
/* WARNING: Removing unreachable block (ram,0x0378395c) */
/* WARNING: Removing unreachable block (ram,0x0378398c) */
/* WARNING: Removing unreachable block (ram,0x03783980) */
/* WARNING: Removing unreachable block (ram,0x03783920) */
/* WARNING: Removing unreachable block (ram,0x03783990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_03783264(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long **pplVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [80];
  undefined1 auStack_170 [80];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [80];
  
  plVar7 = param_3;
  plVar8 = param_4;
  plVar9 = param_5;
  plStack_b8 = param_4;
  if ((bRam0000000005e2dfa7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a447b8);
    func_0x0249f8e4(&DAT_059c6000);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca360);
    func_0x0249f8e4(&DAT_059cb6b8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2dfa7 = 1;
  }
  plStack_c0 = (long *)0x0;
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar2 = (long *)func_0x03773874(&plStack_b8);
  uVar3 = func_0x0249fb80(_DAT_059c6000);
  if (param_1 != (long *)0x0) {
    plVar8 = (long *)0x0;
    func_0x02a9aa34(uVar3,param_1,*(undefined8 *)(*param_1 + 0x250));
    plVar7 = _DAT_05a447b8;
    plVar4 = (long *)func_0x026ec554(plVar2,uVar3);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == _DAT_059ca360) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_037833d8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      plVar7 = (long *)0x0;
      puVar5 = (undefined8 *)func_0x024d927c(plVar4);
LAB_037833d8:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      pplStack_c8 = &plStack_c0;
      plStack_d0 = (long *)0x0;
      do {
        plStack_c0 = plVar6;
        if (plVar6 == (long *)0x0) {
          uVar13 = func_0x0249fb90();
LAB_037836e0:
          param_5 = (long *)0x0;
          pplVar12 = &plStack_c0;
          goto LAB_037836e8;
        }
        lVar10 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == _DAT_059df6e0) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0378345c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        plVar7 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x024d927c(plVar6);
LAB_0378345c:
        uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        plVar2 = plStack_c0;
        plVar4 = plVar6;
        if ((uVar13 & 1) == 0) goto LAB_037836e0;
        if (plStack_c0 == (long *)0x0) {
          func_0x0249fb90();
          break;
        }
        lVar10 = *plStack_c0;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == _DAT_059cb6b8) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_037834c0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        plVar7 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x024d927c(plStack_c0);
LAB_037834c0:
        plVar2 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
        lVar10 = func_0x0376e450(param_1,plVar2);
        plVar4 = plStack_c0;
        plVar6 = plStack_c0;
        if (((lVar10 != 0) &&
            (uVar13 = func_0x036e2208(lVar10,0), plVar4 = plStack_c0, plVar6 = plStack_c0,
            (uVar13 & 1) != 0)) &&
           (plVar7 = param_2, plVar8 = param_1, plVar9 = param_4,
           uVar13 = func_0x036d7cb4(lVar10,param_5), plVar4 = plStack_c0, plVar6 = plStack_c0,
           (uVar13 & 1) != 0)) {
          if (*(int *)(lVar10 + 0x18) == 1) {
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_1d0 = 0;
            plVar7 = plVar2;
            plVar8 = plVar2;
            plVar9 = param_5;
            func_0x034ba874(&uStack_120,0xe);
            lVar10 = _DAT_059c9978;
            if (param_3 == (long *)0x0) goto LAB_03783780;
            func_0x054ed0d0(auStack_1c0,&uStack_120,0x50);
            lVar11 = *param_3;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_037836b0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(param_3,lVar10,2);
LAB_037836b0:
            pcVar15 = (code *)*puVar5;
            func_0x054ed0d0(auStack_b0,auStack_1c0,0x50);
            plVar7 = (long *)puVar5[1];
            (*pcVar15)(param_3,auStack_b0);
            plVar4 = plStack_c0;
            plVar6 = plStack_c0;
          }
          else if (*(int *)(lVar10 + 0x18) == 2) {
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_1d0 = 0;
            plVar7 = plVar2;
            plVar8 = plVar2;
            plVar9 = param_5;
            func_0x034ba874(&uStack_120,0xd);
            lVar10 = _DAT_059c9978;
            if (param_3 == (long *)0x0) goto LAB_0378377c;
            func_0x054ed0d0(auStack_170,&uStack_120,0x50);
            lVar11 = *param_3;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_03783660;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(param_3,lVar10,2);
LAB_03783660:
            pcVar15 = (code *)*puVar5;
            func_0x054ed0d0(auStack_b0,auStack_170,0x50);
            (*pcVar15)(param_3,auStack_b0,puVar5[1]);
            plVar7 = param_3;
            plVar9 = param_5;
            FUN_03783264(param_1,param_2);
            plVar4 = plStack_c0;
            plVar6 = plStack_c0;
            plVar8 = plVar2;
          }
        }
      } while( true );
    }
  }
  func_0x0249fb90();
LAB_0378377c:
  func_0x0249fb90();
LAB_03783780:
  func_0x0249fb90();
  plVar4 = plVar2;
  do {
    auVar17 = func_0x0249fb88(param_5);
    uStack_1d8 = auVar17._0_8_;
    if (auVar17._8_4_ != 1) {
      func_0x022bd79c(&plStack_d0);
      func_0x0258f7ac(uStack_1d8);
      auVar16 = func_0x022bd790();
      uStack_220 = auVar16._8_8_;
      uStack_210 = 0x37837f8;
      plStack_200 = plVar4;
      plStack_1f8 = param_1;
      plStack_1f0 = param_2;
      plStack_1e8 = param_3;
      plStack_1e0 = param_4;
      if ((bRam0000000005e2dfa0 & 1) == 0) {
        func_0x0249f8e4(&DAT_059df8e8);
        bRam0000000005e2dfa0 = 1;
      }
      *(undefined1 *)plVar9 = 0;
      plStack_238 = plVar7;
      plStack_230 = plVar8;
      plStack_228 = plVar7;
      plStack_218 = plVar9;
      if ((bRam0000000005e2dfa3 & 1) == 0) {
        func_0x0249f8e4(&DAT_059db250);
        bRam0000000005e2dfa3 = 1;
      }
      uVar13 = func_0x03774280(auVar16._0_8_,plVar7);
      if (((uVar13 & 1) == 0) || (uVar13 = func_0x03774280(auVar16._0_8_,plVar8), (uVar13 & 1) == 0)
         ) {
        uVar1 = 1;
      }
      else {
        if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar1 = func_0x037737e4(&plStack_238,plVar8);
      }
      return (ulong)(uVar1 & 1);
    }
    puVar5 = (undefined8 *)func_0x054ed080(uStack_1d8);
    param_5 = (long *)*puVar5;
    plStack_d0 = param_5;
    uVar13 = func_0x054ed090();
    pplVar12 = pplStack_c8;
LAB_037836e8:
    param_4 = *pplVar12;
    if (param_4 != (long *)0x0) {
      lVar10 = *param_4;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == _DAT_059df598) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03783744;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      plVar7 = (long *)0x0;
      puVar5 = (undefined8 *)func_0x024d927c(param_4);
LAB_03783744:
      uVar13 = (*(code *)*puVar5)(param_4,puVar5[1]);
    }
    if (param_5 == (long *)0x0) {
      return uVar13;
    }
  } while( true );
}


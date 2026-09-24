/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessUnlockItemForCoordinate(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Config.Types.MetacoreTime currentTime, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 037830c4
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03783240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03783698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0378384c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0378369c) */
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

ulong FUN_037830c4(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  code *unaff_x25;
  code *pcVar20;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  code *unaff_x29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [80];
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  if ((bRam0000000005e2df9f & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df9f = 1;
  }
  plVar4 = (long *)func_0x0376e450(param_1,param_3);
  uVar5 = 0;
  if ((plVar4 == (long *)0x0) || (uVar5 = func_0x036e21f8(plVar4,0), (uVar5 & 1) == 0)) {
    return uVar5;
  }
  func_0x036d7cb4(plVar4,param_4,param_2,param_1,param_3,0);
  uVar6 = func_0x03530c84(param_4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  auStack_150[0] = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plVar10 = param_3;
  plVar8 = param_3;
  plVar18 = param_4;
  func_0x034ba874(&uStack_f0,0xd);
  lVar16 = _DAT_059c9978;
  if (param_5 == (long *)0x0) {
    uVar6 = 0x3783264;
    auVar21 = func_0x0249fb90();
    puVar2 = auStack_150;
  }
  else {
    func_0x054ed0d0(auStack_140,&uStack_f0,0x50);
    lVar15 = *param_5;
    uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar5 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar16) {
          plVar4 = (long *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_03783208;
        }
        uVar5 = uVar5 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar5 != 0);
    }
    plVar4 = (long *)func_0x024d927c(param_5,lVar16,2);
LAB_03783208:
    unaff_x25 = (code *)*plVar4;
    func_0x054ed0d0(auStack_a0,auStack_140,0x50);
    (*unaff_x25)(param_5,auStack_a0,plVar4[1]);
    uVar6 = 0x3783244;
    puVar2 = auStack_150;
    plVar10 = param_5;
    plVar8 = param_3;
    plVar18 = param_4;
    auVar21 = auVar22;
  }
SUB_03783264:
  plVar19 = plVar8;
  plVar7 = auVar21._0_8_;
  *(code **)((long)puVar2 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar2 + -0x58) = uVar6;
  *(undefined **)((long)puVar2 + -0x50) = unaff_x28;
  *(undefined **)((long)puVar2 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar2 + -0x40) = unaff_x26;
  *(code **)((long)puVar2 + -0x38) = unaff_x25;
  *(long **)((long)puVar2 + -0x30) = plVar4;
  *(undefined1 (*) [16])((long)puVar2 + -0x28) = auVar22;
  *(long **)((long)puVar2 + -0x18) = param_3;
  *(long **)((long)puVar2 + -0x10) = param_5;
  *(long **)((long)puVar2 + -8) = param_4;
  *(long **)((long)puVar2 + -0xb8) = plVar19;
  plVar8 = plVar10;
  plVar13 = plVar19;
  plVar14 = plVar18;
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
  iVar1 = *(int *)(_DAT_059db250 + 0xe4);
  *(undefined8 *)((long)puVar2 + -0xc0) = 0;
  if (iVar1 == 0) {
    func_0x0249fa64();
  }
  plVar4 = (long *)func_0x03773874((undefined1 *)((long)puVar2 + -0xb8));
  uVar6 = func_0x0249fb80(_DAT_059c6000);
  auVar24._8_8_ = plVar8;
  auVar24._0_8_ = plVar13;
  if (plVar7 != (long *)0x0) {
    uVar12 = 0;
    func_0x02a9aa34(uVar6,plVar7,*(undefined8 *)(*plVar7 + 0x250));
    uVar11 = _DAT_05a447b8;
    plVar8 = (long *)func_0x026ec554(plVar4,uVar6);
    auVar24._8_8_ = uVar11;
    auVar24._0_8_ = uVar12;
    if (plVar8 != (long *)0x0) {
      lVar16 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059ca360) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_037833d8;
          }
          uVar5 = uVar5 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar5 != 0);
      }
      uVar11 = 0;
      puVar9 = (undefined8 *)func_0x024d927c(plVar8);
LAB_037833d8:
      plVar4 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      auVar24._8_8_ = uVar11;
      auVar24._0_8_ = uVar12;
      *(long **)((long)puVar2 + -0xc0) = plVar4;
      *(undefined8 *)((long)puVar2 + -0xd0) = 0;
      *(undefined1 **)((long)puVar2 + -200) = (undefined1 *)((long)puVar2 + -0xc0);
      if (plVar4 == (long *)0x0) {
LAB_037836dc:
        uVar5 = func_0x0249fb90();
LAB_037836e0:
        plVar18 = (long *)0x0;
        puVar9 = (undefined8 *)((long)puVar2 + -0xc0);
        goto LAB_037836e8;
      }
      unaff_x26 = &DAT_059df6e0;
      unaff_x27 = &DAT_059cb6b8;
      unaff_x28 = &DAT_059c9978;
      plVar8 = plVar4;
      do {
        uVar6 = auVar24._0_8_;
        lVar16 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059df6e0) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0378345c;
            }
            uVar5 = uVar5 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar5 != 0);
        }
        uVar11 = 0;
        puVar9 = (undefined8 *)func_0x024d927c(plVar8);
        auVar24._8_8_ = uVar11;
        auVar24._0_8_ = uVar6;
LAB_0378345c:
        uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        uVar6 = auVar24._0_8_;
        if ((uVar5 & 1) == 0) goto LAB_037836e0;
        plVar4 = *(long **)((long)puVar2 + -0xc0);
        if (plVar4 == (long *)0x0) {
          func_0x0249fb90();
          plVar4 = (long *)0x0;
          break;
        }
        lVar16 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059cb6b8) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_037834c0;
            }
            uVar5 = uVar5 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar5 != 0);
        }
        uVar11 = 0;
        puVar9 = (undefined8 *)func_0x024d927c(plVar4);
        auVar24._8_8_ = uVar11;
        auVar24._0_8_ = uVar6;
LAB_037834c0:
        plVar4 = (long *)(*(code *)*puVar9)(plVar4,puVar9[1]);
        lVar16 = func_0x0376e450(plVar7,plVar4);
        if (((lVar16 != 0) && (uVar5 = func_0x036e2208(lVar16,0), (uVar5 & 1) != 0)) &&
           (plVar14 = plVar19, auVar24 = auVar21, uVar5 = func_0x036d7cb4(lVar16,plVar18),
           (uVar5 & 1) != 0)) {
          if (*(int *)(lVar16 + 0x18) == 1) {
            *(undefined8 *)((long)puVar2 + -0x108) = 0;
            *(undefined8 *)((long)puVar2 + -0x110) = 0;
            *(undefined8 *)((long)puVar2 + -0xf8) = 0;
            *(undefined8 *)((long)puVar2 + -0x100) = 0;
            *(undefined8 *)((long)puVar2 + -0xe8) = 0;
            *(undefined8 *)((long)puVar2 + -0xf0) = 0;
            *(undefined8 *)((long)puVar2 + -0xd8) = 0;
            *(undefined8 *)((long)puVar2 + -0xe0) = 0;
            *(undefined8 *)((long)puVar2 + -0x118) = 0;
            *(undefined8 *)((long)puVar2 + -0x120) = 0;
            *(undefined8 *)((long)puVar2 + -0x1d0) = 0;
            plVar8 = plVar4;
            plVar13 = plVar4;
            plVar14 = plVar18;
            func_0x034ba874((undefined1 *)((long)puVar2 + -0x120),0xe);
            lVar16 = _DAT_059c9978;
            auVar24._8_8_ = plVar8;
            auVar24._0_8_ = plVar13;
            if (plVar10 == (long *)0x0) goto LAB_03783780;
            func_0x054ed0d0((undefined1 *)((long)puVar2 + -0x1c0),
                            (undefined1 *)((long)puVar2 + -0x120),0x50);
            lVar15 = *plVar10;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar16) {
                  puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_037836b0;
                }
                uVar5 = uVar5 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)func_0x024d927c(plVar10,lVar16,2);
LAB_037836b0:
            pcVar20 = (code *)*puVar9;
            func_0x054ed0d0((undefined1 *)((long)puVar2 + -0xb0),
                            (undefined1 *)((long)puVar2 + -0x1c0),0x50);
            uVar6 = puVar9[1];
            (*pcVar20)(plVar10,(undefined1 *)((long)puVar2 + -0xb0));
            auVar24._8_8_ = uVar6;
            auVar24._0_8_ = plVar13;
          }
          else if (*(int *)(lVar16 + 0x18) == 2) goto code_r0x03783528;
        }
        plVar8 = *(long **)((long)puVar2 + -0xc0);
        if (plVar8 == (long *)0x0) goto LAB_037836dc;
      } while( true );
    }
  }
  func_0x0249fb90();
  goto LAB_0378377c;
code_r0x03783528:
  *(undefined8 *)((long)puVar2 + -0x108) = 0;
  *(undefined8 *)((long)puVar2 + -0x110) = 0;
  *(undefined8 *)((long)puVar2 + -0xf8) = 0;
  *(undefined8 *)((long)puVar2 + -0x100) = 0;
  *(undefined8 *)((long)puVar2 + -0xe8) = 0;
  *(undefined8 *)((long)puVar2 + -0xf0) = 0;
  *(undefined8 *)((long)puVar2 + -0xd8) = 0;
  *(undefined8 *)((long)puVar2 + -0xe0) = 0;
  *(undefined8 *)((long)puVar2 + -0x118) = 0;
  *(undefined8 *)((long)puVar2 + -0x120) = 0;
  *(undefined8 *)((long)puVar2 + -0x1d0) = 0;
  plVar8 = plVar4;
  plVar13 = plVar4;
  plVar14 = plVar18;
  func_0x034ba874((undefined1 *)((long)puVar2 + -0x120),0xd);
  lVar16 = _DAT_059c9978;
  auVar24._8_8_ = plVar8;
  auVar24._0_8_ = plVar13;
  if (plVar10 == (long *)0x0) {
LAB_0378377c:
    func_0x0249fb90();
LAB_03783780:
    func_0x0249fb90();
    plVar8 = plVar4;
    do {
      auVar23 = func_0x0249fb88(plVar18);
      uVar6 = auVar23._0_8_;
      if (auVar23._8_4_ != 1) {
        func_0x022bd79c((undefined1 *)((long)puVar2 + -0xd0));
        func_0x0258f7ac(uVar6);
        auVar22 = func_0x022bd790();
        *(undefined8 *)((long)puVar2 + -0x210) = 0x37837f8;
        *(long **)((long)puVar2 + -0x200) = plVar8;
        *(undefined1 (*) [16])((long)puVar2 + -0x1f8) = auVar21;
        *(long **)((long)puVar2 + -0x1e8) = plVar10;
        *(long **)((long)puVar2 + -0x1e0) = plVar19;
        *(undefined8 *)((long)puVar2 + -0x1d8) = uVar6;
        if ((bRam0000000005e2dfa0 & 1) == 0) {
          func_0x0249f8e4(&DAT_059df8e8);
          bRam0000000005e2dfa0 = 1;
        }
        *(undefined1 *)plVar14 = 0;
        *(undefined8 *)((long)puVar2 + -0x240) = 0x3783850;
        *(undefined1 (*) [16])((long)puVar2 + -0x230) = auVar24;
        *(long *)((long)puVar2 + -0x220) = auVar22._8_8_;
        *(long **)((long)puVar2 + -0x218) = plVar14;
        *(long *)((long)puVar2 + -0x238) = auVar24._8_8_;
        if ((bRam0000000005e2dfa3 & 1) == 0) {
          func_0x0249f8e4(&DAT_059db250);
          bRam0000000005e2dfa3 = 1;
        }
        uVar5 = func_0x03774280(auVar22._0_8_,auVar24._8_8_);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = func_0x03774280(auVar22._0_8_,auVar24._0_8_), (uVar5 & 1) == 0)) {
          uVar3 = 1;
        }
        else {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar3 = func_0x037737e4((undefined1 *)((long)puVar2 + -0x238),auVar24._0_8_);
        }
        return (ulong)(uVar3 & 1);
      }
      puVar9 = (undefined8 *)func_0x054ed080(uVar6);
      plVar18 = (long *)*puVar9;
      *(long **)((long)puVar2 + -0xd0) = plVar18;
      uVar5 = func_0x054ed090();
      puVar9 = *(undefined8 **)((long)puVar2 + -200);
LAB_037836e8:
      uVar6 = auVar24._0_8_;
      plVar19 = (long *)*puVar9;
      if (plVar19 != (long *)0x0) {
        lVar16 = *plVar19;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059df598) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03783744;
            }
            uVar5 = uVar5 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar5 != 0);
        }
        uVar11 = 0;
        puVar9 = (undefined8 *)func_0x024d927c(plVar19);
        auVar24._8_8_ = uVar11;
        auVar24._0_8_ = uVar6;
LAB_03783744:
        uVar5 = (*(code *)*puVar9)(plVar19,puVar9[1]);
      }
      if (plVar18 == (long *)0x0) {
        return uVar5;
      }
    } while( true );
  }
  func_0x054ed0d0((undefined1 *)((long)puVar2 + -0x170),(undefined1 *)((long)puVar2 + -0x120),0x50);
  lVar15 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar5 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == lVar16) {
        unaff_x25 = (code *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_03783660;
      }
      uVar5 = uVar5 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar5 != 0);
  }
  unaff_x25 = (code *)func_0x024d927c(plVar10,lVar16,2);
LAB_03783660:
  unaff_x29 = *(code **)unaff_x25;
  func_0x054ed0d0((undefined1 *)((long)puVar2 + -0xb0),(undefined1 *)((long)puVar2 + -0x170),0x50);
  (*unaff_x29)(plVar10,(undefined1 *)((long)puVar2 + -0xb0),*(undefined8 *)(unaff_x25 + 8));
  uVar6 = 0x378369c;
  puVar2 = (undefined8 *)((long)puVar2 + -0x1d0);
  plVar8 = plVar4;
  param_4 = plVar18;
  param_5 = plVar19;
  param_3 = plVar10;
  auVar22 = auVar21;
  goto SUB_03783264;
}


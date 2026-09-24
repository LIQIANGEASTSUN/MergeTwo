/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MergePairFinder.txt
 * Cpp2IL method: System.ValueTuple`2<GameLogic.Player.Board.Coordinate, GameLogic.Player.Board.Coordinate> FindMatchingItemsImpl(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<GameLogic.Player.Board.Coordinate, GameLogic.Player.Items.MergeItem>> items, GameLogic.Player.Board.IBoard mergeBoard, System.Int32 itemId, PartialLevel partialLevel, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033b793c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_033b793c(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined *param_5,
            undefined *param_6)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined8 unaff_x19;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined *puVar19;
  ulong unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_1;
code_r0x033b793c:
  puVar5 = auVar21._8_8_;
  uVar12 = auVar21._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  unaff_x26 = (undefined *)0x5e2c000;
  uVar15 = (ulong)param_5 & 0xffffffff;
  puVar19 = (undefined *)(param_4 & 0xffffffff);
  puVar6 = puVar5;
  uVar7 = param_4;
  puVar8 = param_5;
  if ((bRam0000000005e2c39e & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a44708);
    func_0x0249f8e4(&DAT_059c59a8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059c9f90);
    func_0x0249f8e4(&DAT_059cb2d8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_05a6a4d0);
    func_0x0249f8e4(&DAT_059f00c0);
    func_0x0249f8e4(&DAT_05a34850);
    bRam0000000005e2c39e = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  unaff_x25 = func_0x0249fb80(_DAT_059f00c0);
  func_0x045ecdec(unaff_x25,0);
  if (unaff_x25 != 0) {
    unaff_x26 = &DAT_059db250;
    *(int *)(unaff_x25 + 0x10) = (int)param_4;
    *(ulong *)(unaff_x25 + 0x18) = uVar12;
    func_0x0249f888((ulong *)(unaff_x25 + 0x18),uVar12);
    *(long *)(unaff_x25 + 0x28) = (long)puVar5;
    *(undefined **)(unaff_x25 + 0x20) = param_6;
    func_0x0249f888((long *)(unaff_x25 + 0x28),puVar5);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar9 = *(undefined8 **)(_DAT_059db250 + 0xb8);
    puVar16 = (undefined8 *)(unaff_x25 + 0x30);
    auVar21._8_8_ = puVar16;
    auVar21._0_8_ = uVar12;
    param_6 = (undefined *)*puVar16;
    *(undefined8 *)((long)register0x00000008 + -0x78) = *puVar9;
    puVar19 = &DAT_05a44708;
    *(undefined8 *)((long)register0x00000008 + -0x80) = *puVar9;
    if (param_6 == (undefined *)0x0) {
      param_6 = (undefined *)func_0x0249fb80(_DAT_059c59a8);
      uVar7 = 0;
      func_0x02a9aa34(param_6,unaff_x25,_DAT_05a6a4d0);
      *(undefined **)(unaff_x25 + 0x30) = param_6;
      func_0x0249f888(puVar16,param_6);
    }
    puVar6 = _DAT_05a44708;
    plVar3 = (long *)func_0x026ec554(param_2,param_6);
    if (plVar3 != (long *)0x0) {
      lVar10 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == _DAT_059c9f90) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033b7b38;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined1 *)0x0;
      puVar9 = (undefined8 *)func_0x024d927c(plVar3);
LAB_033b7b38:
      plVar3 = (long *)(*(code *)*puVar9)(plVar3,puVar9[1]);
      *(long **)((long)register0x00000008 + -0x88) = plVar3;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xa8) =
           (undefined1 *)((long)register0x00000008 + -0x88);
      if (plVar3 == (long *)0x0) {
LAB_033b7d68:
        func_0x0249fb90();
LAB_033b7d6c:
        uVar15 = 0;
        uVar17 = 0xf;
        puVar9 = (undefined8 *)((long)register0x00000008 + -0x88);
        goto LAB_033b7dbc;
      }
      param_6 = &DAT_059cb2d8;
      iVar14 = (int)param_5;
      puVar19 = (undefined *)(ulong)(iVar14 - 1U);
      do {
        auVar21._8_8_ = &DAT_059df6e0;
        auVar21._0_8_ = uVar12;
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _DAT_059df6e0) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_033b7bb8;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined1 *)0x0;
        puVar9 = (undefined8 *)func_0x024d927c(plVar3);
LAB_033b7bb8:
        uVar11 = (*(code *)*puVar9)(plVar3,puVar9[1]);
        if ((uVar11 & 1) == 0) goto LAB_033b7d6c;
        param_2 = *(long **)((long)register0x00000008 + -0x88);
        if (param_2 == (long *)0x0) goto LAB_033b7e98;
        lVar10 = *param_2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _DAT_059cb2d8) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_033b7c1c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined1 *)0x0;
        puVar9 = (undefined8 *)func_0x024d927c(param_2);
LAB_033b7c1c:
        auVar20 = (*(code *)*puVar9)(param_2,puVar9[1]);
        if (auVar20._8_8_ == 0) goto LAB_033b7e94;
        uVar1 = *(uint *)(auVar20._8_8_ + 0x18);
        uVar12 = (ulong)uVar1;
        if (iVar14 - 1U < 2) {
          if (uVar1 == 2) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
LAB_033b7d18:
            if ((uVar11 & 1) != 0) {
LAB_033b7d1c:
              *(long *)((long)register0x00000008 + -0x80) = auVar20._0_8_;
            }
          }
          else if (uVar1 == 1) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
            if ((uVar11 & 1) != 0) goto LAB_033b7cd4;
          }
        }
        else if (iVar14 == 0) {
          if (uVar1 == 2) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
            if ((uVar11 & 1) == 0) {
              if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
              goto LAB_033b7d18;
            }
            goto LAB_033b7cd4;
          }
        }
        else if (iVar14 == 3) {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          bVar2 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
          if ((uVar1 == 2 & bVar2) == 0) goto LAB_033b7d1c;
LAB_033b7cd4:
          *(long *)((long)register0x00000008 + -0x78) = auVar20._0_8_;
        }
        if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar11 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
          if ((uVar11 & 1) == 0) {
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            *(undefined8 *)((long)register0x00000008 + -0x58) =
                 *(undefined8 *)((long)register0x00000008 + -0x80);
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x58);
            uVar7 = _DAT_05a34850;
            func_0x02953678((undefined1 *)((long)register0x00000008 + -0xc0),
                            (undefined1 *)((long)register0x00000008 + -0x48));
            uVar15 = 0;
            uVar17 = 0xe;
            puVar9 = (undefined8 *)((long)register0x00000008 + -0x88);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0xb8);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xc0);
            goto LAB_033b7dbc;
          }
        }
        plVar3 = *(long **)((long)register0x00000008 + -0x88);
        if (plVar3 == (long *)0x0) goto LAB_033b7d68;
      } while( true );
    }
  }
  goto LAB_033b7e9c;
LAB_033b7e94:
  func_0x0249fb90();
LAB_033b7e98:
  func_0x0249fb90();
LAB_033b7e9c:
  func_0x0249fb90();
  while( true ) {
    uVar18 = auVar21._8_8_;
    uVar12 = auVar21._0_8_;
    auVar22 = func_0x0249fb88(uVar15);
    uVar17 = auVar22._0_8_;
    if (auVar22._8_4_ != 1) break;
    puVar4 = (ulong *)func_0x054ed080(uVar17);
    uVar15 = *puVar4;
    *(ulong *)((long)register0x00000008 + -0xb0) = uVar15;
    func_0x054ed090();
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0xa8);
    uVar17 = 0;
LAB_033b7dbc:
    auVar21._8_8_ = uVar17;
    auVar21._0_8_ = uVar12;
    param_2 = (long *)*puVar9;
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == _DAT_059df598) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033b7e18;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined1 *)0x0;
      puVar9 = (undefined8 *)func_0x024d927c(param_2);
LAB_033b7e18:
      (*(code *)*puVar9)(param_2,puVar9[1]);
    }
    if (uVar15 == 0) {
      iVar14 = (int)uVar17;
      if (iVar14 != 0xf) {
        if (iVar14 == 0xe) {
          *(undefined8 *)((long)register0x00000008 + -0x68) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          goto LAB_033b7e74;
        }
        if (iVar14 != 0) goto LAB_033b7e74;
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      func_0x02953678((undefined1 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0xb0),
                      (undefined1 *)((long)register0x00000008 + -0xc0),_DAT_05a34850);
LAB_033b7e74:
      return *(undefined1 (*) [16])((long)register0x00000008 + -0x70);
    }
  }
  func_0x022bd79c((undefined1 *)((long)register0x00000008 + -0xb0));
  func_0x0258f7ac(uVar17);
  auVar21 = func_0x022bd790();
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x33b7f20;
  *(undefined **)((long)register0x00000008 + -0xe8) = puVar19;
  *(undefined **)((long)register0x00000008 + -0xe0) = param_6;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar18;
  *(long **)((long)register0x00000008 + -0xd0) = param_2;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar17;
  param_5 = (undefined *)(uVar7 & 0xffffffff);
  param_4 = (ulong)puVar6 & 0xffffffff;
  param_2 = (long *)func_0x0376e0dc(auVar21._8_8_,0);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xd0);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -200);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xe0);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xd8);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xf0);
  unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0xe8);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  param_6 = puVar8;
  unaff_x24 = uVar12;
  goto code_r0x033b793c;
}


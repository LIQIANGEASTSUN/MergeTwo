/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MergePairFinder.txt
 * Cpp2IL method: System.ValueTuple`2<GameLogic.Player.Board.Coordinate, GameLogic.Player.Board.Coordinate> FindMatchingItemsImpl(GameLogic.Player.IPlayer player, GameLogic.Player.Board.IBoard mergeBoard, System.Int32 itemId, PartialLevel partialLevel, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033b7f20
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_033b7f20(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4,
            undefined *param_5)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 unaff_x19;
  int iVar11;
  long *unaff_x20;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  code *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  
  auVar16._8_8_ = unaff_x21;
  auVar16._0_8_ = unaff_x24;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
SUB_033b793c:
  puVar4 = auVar17._8_8_;
  uVar9 = auVar17._0_8_;
  *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x18) = auVar16._8_8_;
  *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  puVar12 = (undefined *)((ulong)param_4 & 0xffffffff);
  unaff_x23 = (undefined *)((ulong)param_3 & 0xffffffff);
  unaff_x20 = (long *)func_0x0376e0dc(puVar4,0);
  uVar13 = SUB84(param_3,0);
  iVar11 = (int)param_4;
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x30) = auVar16._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  unaff_x26 = (undefined *)0x5e2c000;
  param_3 = puVar4;
  param_4 = unaff_x23;
  puVar5 = puVar12;
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
    *(undefined4 *)(unaff_x25 + 0x10) = uVar13;
    *(ulong *)(unaff_x25 + 0x18) = uVar9;
    func_0x0249f888((ulong *)(unaff_x25 + 0x18),uVar9);
    *(long *)(unaff_x25 + 0x28) = (long)puVar4;
    *(undefined **)(unaff_x25 + 0x20) = param_5;
    func_0x0249f888((long *)(unaff_x25 + 0x28),puVar4);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar6 = *(undefined8 **)(_DAT_059db250 + 0xb8);
    puVar14 = (undefined8 *)(unaff_x25 + 0x30);
    auVar17._8_8_ = puVar14;
    auVar17._0_8_ = uVar9;
    param_5 = (undefined *)*puVar14;
    *(undefined8 *)((long)register0x00000008 + -0x78) = *puVar6;
    unaff_x23 = &DAT_05a44708;
    *(undefined8 *)((long)register0x00000008 + -0x80) = *puVar6;
    if (param_5 == (undefined *)0x0) {
      param_5 = (undefined *)func_0x0249fb80(_DAT_059c59a8);
      param_4 = (undefined *)0x0;
      func_0x02a9aa34(param_5,unaff_x25,_DAT_05a6a4d0);
      *(undefined **)(unaff_x25 + 0x30) = param_5;
      func_0x0249f888(puVar14,param_5);
    }
    param_3 = _DAT_05a44708;
    plVar3 = (long *)func_0x026ec554(unaff_x20,param_5);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _DAT_059c9f90) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033b7b38;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      param_3 = (undefined1 *)0x0;
      puVar6 = (undefined8 *)func_0x024d927c(plVar3);
LAB_033b7b38:
      plVar3 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
      *(long **)((long)register0x00000008 + -0x88) = plVar3;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xa8) =
           (undefined1 *)((long)register0x00000008 + -0x88);
      if (plVar3 == (long *)0x0) {
LAB_033b7d68:
        func_0x0249fb90();
LAB_033b7d6c:
        puVar12 = (undefined *)0x0;
        uVar15 = 0xf;
        puVar6 = (undefined8 *)((long)register0x00000008 + -0x88);
        goto LAB_033b7dbc;
      }
      param_5 = &DAT_059cb2d8;
      unaff_x23 = (undefined *)(ulong)(iVar11 - 1U);
      do {
        auVar17._8_8_ = &DAT_059df6e0;
        auVar17._0_8_ = uVar9;
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _DAT_059df6e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033b7bb8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        param_3 = (undefined1 *)0x0;
        puVar6 = (undefined8 *)func_0x024d927c(plVar3);
LAB_033b7bb8:
        uVar8 = (*(code *)*puVar6)(plVar3,puVar6[1]);
        if ((uVar8 & 1) == 0) goto LAB_033b7d6c;
        unaff_x20 = *(long **)((long)register0x00000008 + -0x88);
        if (unaff_x20 == (long *)0x0) goto LAB_033b7e98;
        lVar7 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _DAT_059cb2d8) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033b7c1c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        param_3 = (undefined1 *)0x0;
        puVar6 = (undefined8 *)func_0x024d927c(unaff_x20);
LAB_033b7c1c:
        auVar16 = (*(code *)*puVar6)(unaff_x20,puVar6[1]);
        if (auVar16._8_8_ == 0) goto LAB_033b7e94;
        uVar1 = *(uint *)(auVar16._8_8_ + 0x18);
        uVar9 = (ulong)uVar1;
        if (iVar11 - 1U < 2) {
          if (uVar1 == 2) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
LAB_033b7d18:
            if ((uVar8 & 1) != 0) {
LAB_033b7d1c:
              *(long *)((long)register0x00000008 + -0x80) = auVar16._0_8_;
            }
          }
          else if (uVar1 == 1) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
            if ((uVar8 & 1) != 0) goto LAB_033b7cd4;
          }
        }
        else if (iVar11 == 0) {
          if (uVar1 == 2) {
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
              goto LAB_033b7d18;
            }
            goto LAB_033b7cd4;
          }
        }
        else if (iVar11 == 3) {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          bVar2 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
          if ((uVar1 == 2 & bVar2) == 0) goto LAB_033b7d1c;
LAB_033b7cd4:
          *(long *)((long)register0x00000008 + -0x78) = auVar16._0_8_;
        }
        if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x78),0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar8 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0x80),0);
          if ((uVar8 & 1) == 0) {
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            *(undefined8 *)((long)register0x00000008 + -0x58) =
                 *(undefined8 *)((long)register0x00000008 + -0x80);
            param_3 = (undefined1 *)((long)register0x00000008 + -0x58);
            param_4 = _DAT_05a34850;
            func_0x02953678((undefined1 *)((long)register0x00000008 + -0xc0),
                            (undefined1 *)((long)register0x00000008 + -0x48));
            puVar12 = (undefined *)0x0;
            uVar15 = 0xe;
            puVar6 = (undefined8 *)((long)register0x00000008 + -0x88);
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
  unaff_x22 = param_5;
  auVar16 = auVar17;
  while( true ) {
    uVar9 = auVar16._0_8_;
    auVar18 = func_0x0249fb88(puVar12);
    unaff_x19 = auVar18._0_8_;
    if (auVar18._8_4_ != 1) break;
    puVar6 = (undefined8 *)func_0x054ed080(unaff_x19);
    puVar12 = (undefined *)*puVar6;
    *(undefined **)((long)register0x00000008 + -0xb0) = puVar12;
    func_0x054ed090();
    puVar6 = *(undefined8 **)((long)register0x00000008 + -0xa8);
    uVar15 = 0;
    param_5 = unaff_x22;
LAB_033b7dbc:
    auVar16._8_8_ = uVar15;
    auVar16._0_8_ = uVar9;
    unaff_x20 = (long *)*puVar6;
    if (unaff_x20 != (long *)0x0) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _DAT_059df598) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033b7e18;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      param_3 = (undefined1 *)0x0;
      puVar6 = (undefined8 *)func_0x024d927c(unaff_x20);
LAB_033b7e18:
      (*(code *)*puVar6)(unaff_x20,puVar6[1]);
    }
    unaff_x22 = param_5;
    if (puVar12 == (undefined *)0x0) {
      iVar11 = (int)uVar15;
      if (iVar11 != 0xf) {
        if (iVar11 == 0xe) {
          *(undefined8 *)((long)register0x00000008 + -0x68) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          goto LAB_033b7e74;
        }
        if (iVar11 != 0) goto LAB_033b7e74;
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
  func_0x0258f7ac(unaff_x19);
  unaff_x30 = FUN_033b7f20;
  auVar17 = func_0x022bd790();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  param_5 = puVar5;
  goto SUB_033b793c;
}


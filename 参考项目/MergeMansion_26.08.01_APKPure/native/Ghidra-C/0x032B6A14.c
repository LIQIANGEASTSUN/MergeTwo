/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MergePairFinder.txt
 * Cpp2IL method: System.ValueTuple`2<System.Int32, System.Int32> PopulateItemEntries(GameLogic.Player.IPlayer player, System.Collections.Generic.List`1<GameLogic.Player.Items.MergeItem> boardItems, System.Collections.Generic.ICollection`1<System.Int32> excludedItems, GameLogic.Config.Types.MetacoreTime currentTime, MergePairFinder+ItemEntry[] visibleItemEntriesBuffer, MergePairFinder+ItemEntry[] partiallyVisibleItemEntriesBuffer)
 * Ghidra function entry: 033b6a14
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_033b6a14(long *param_1,ulong param_2,long *param_3,ulong param_4,undefined *param_5,
                   long *param_6)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long *unaff_x25;
  long *plVar22;
  ulong unaff_x26;
  int iVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  ulong uStack_140;
  long *plStack_138;
  long *plStack_130;
  ulong uStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  long *plStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  
  uVar20 = 0x5e2c000;
  plVar11 = param_3;
  uVar17 = param_4;
  puVar12 = param_5;
  if ((bRam0000000005e2c39f & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9948);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_05a193d8);
    func_0x0249f8e4(&DAT_05a193e0);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a34a88);
    bRam0000000005e2c39f = 1;
  }
  uStack_80 = 0;
  puVar24 = param_5;
  if (param_1 != (long *)0x0) {
    lVar14 = *param_1;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar18 + 5) * 0x10 + 0x138);
          goto LAB_033b6b10;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    plVar11 = (long *)0x5;
    puVar5 = (undefined8 *)func_0x024d927c(param_1);
LAB_033b6b10:
    plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
    if (param_2 != 0) {
      uVar13 = *(uint *)(param_2 + 0x18);
      unaff_x26 = (ulong)uVar13;
      if ((int)uVar13 < 1) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = 0;
        puVar24 = &DAT_05a193e0;
        uVar21 = 0;
        puStack_90 = param_5;
        do {
          uVar17 = _DAT_05a193e0;
          func_0x0282f3c4(param_2,uVar21,&uStack_70);
          lVar14 = CONCAT44(uStack_6c,uStack_70);
          if (lVar14 != 0) {
            plVar11 = (long *)0x0;
            uVar16 = func_0x036eb4a0(lVar14,plVar6);
            if (((uVar16 & 1) != 0) && (uVar16 = func_0x036f883c(lVar14,0), (uVar16 & 1) != 0)) {
              uVar16 = func_0x036d392c(lVar14,0);
              unaff_x25 = plVar6;
              if (param_3 == (long *)0x0) goto LAB_033b6d74;
              lVar15 = *param_3;
              uVar20 = uVar16 & 0xffffffff;
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == _DAT_059c9948) {
                    puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
                    goto LAB_033b6bec;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar5 = (undefined8 *)func_0x024d927c(param_3,_DAT_059c9948,4);
LAB_033b6bec:
              uVar17 = (*(code *)*puVar5)(param_3,uVar20,puVar5[1]);
              if ((((uVar17 & 1) == 0) &&
                  (uVar17 = func_0x033b7f7c(lVar14,plVar6,param_4), (uVar17 & 1) == 0)) &&
                 (uVar17 = func_0x036eba58(lVar14,param_4,plVar6,0), (uVar17 & 1) == 0)) {
                if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                uVar17 = func_0x03646774(param_1,lVar14,0);
                if ((uVar17 & 1) != 0) {
                  plStack_98 = param_6;
                  uVar7 = func_0x036d3908(lVar14,plVar6,0);
                  if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                    func_0x0249fa64(_DAT_059e1498);
                  }
                  uVar17 = func_0x036c0534(uVar7,param_1,&uStack_80,0);
                  param_6 = plStack_98;
                  if (((uVar17 & 1) != 0) &&
                     (uVar17 = func_0x036e1938(lVar14,param_1,0), param_6 = plStack_98,
                     (uVar17 & 1) != 0)) {
                    uVar17 = func_0x036d06c8(lVar14,0);
                    if ((uVar17 & 1) == 0) {
                      uVar17 = func_0x036e21f8(lVar14,0);
                      if ((uVar17 & 1) != 0) {
                        uVar2 = func_0x033b7fc4(param_6,uStack_88 & 0xffffffff,uVar20);
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
                      }
                    }
                    else {
                      uVar2 = func_0x033b7fc4(puStack_90,uStack_88._4_4_,uVar20);
                      uStack_88 = CONCAT44(uVar2,(undefined4)uStack_88);
                    }
                  }
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar13);
      }
      plStack_78 = (long *)0x0;
      uStack_70 = uStack_88._4_4_;
      uStack_64 = (undefined4)uStack_88;
      func_0x02953678(&plStack_78,&uStack_70,&uStack_64,_DAT_05a34a88);
      return plStack_78;
    }
  }
LAB_033b6d74:
  auVar25 = func_0x0249fb90();
  lVar14 = auVar25._0_8_;
  uStack_f0 = 0x33b6d78;
  if (auVar25._8_4_ < 1) {
    return (long *)0x0;
  }
  plVar6 = plVar11;
  plVar22 = unaff_x25;
  uVar16 = unaff_x26;
  puStack_e8 = puVar24;
  uStack_e0 = unaff_x26;
  plStack_d8 = unaff_x25;
  plStack_d0 = param_1;
  uStack_c8 = param_2;
  plStack_c0 = param_3;
  uStack_b8 = param_4;
  plStack_b0 = param_6;
  uStack_a8 = uVar20;
  if (lVar14 != 0) {
    uVar20 = uVar17 & 0xffffffff;
    param_1 = (long *)0x0;
    param_3 = (long *)0x0;
    plVar22 = (long *)(auVar25._8_8_ & 0xffffffff);
    uVar16 = lVar14 + 0x20;
    while (uVar13 = *(uint *)(lVar14 + 0x18), param_1 < (long *)(ulong)uVar13) {
      param_2 = *(ulong *)(uVar16 + (long)param_1 * 8);
      iVar23 = (int)(param_2 >> 0x20);
      if (iVar23 < 2) {
        plVar6 = (long *)(param_2 & 0xffffffff);
        iVar3 = func_0x033b8098(plVar11,uVar20);
        if (1 < iVar3 + iVar23) {
          uVar13 = (uint)*(undefined8 *)(lVar14 + 0x18);
          goto LAB_033b6df0;
        }
      }
      else {
LAB_033b6df0:
        uVar21 = (uint)param_3;
        if (uVar13 <= uVar21) break;
        param_3 = (long *)(ulong)(uVar21 + 1);
        *(ulong *)(lVar14 + (long)(int)uVar21 * 8 + 0x20) = param_2;
      }
      param_1 = (long *)((long)param_1 + 1);
      if (plVar22 == param_1) {
        return param_3;
      }
    }
    func_0x0249fb98();
    param_6 = plVar11;
  }
  auVar26 = func_0x0249fb90();
  uVar21 = auVar26._8_4_;
  uStack_100 = 0x33b6e3c;
  uVar4 = (uint)uVar17;
  auVar1._8_4_ = uVar4;
  auVar1._0_8_ = plVar6;
  uVar13 = uVar21;
  if ((int)uVar4 <= (int)uVar21) {
    uVar13 = uVar4;
  }
  plVar11 = auVar26._0_8_;
  if ((int)uVar4 <= (int)uVar21) {
    plVar11 = plVar6;
    auVar1 = auVar26;
  }
  lVar15 = auVar1._0_8_;
  if ((int)uVar13 < 1) {
    return (long *)0x0;
  }
  if (plVar11 != (long *)0x0) {
    uVar21 = *(uint *)(plVar11 + 3);
    uVar19 = 0;
    plVar8 = (long *)0x0;
    while (uVar19 != uVar21) {
      if (0 < auVar1._8_4_) {
        if (lVar15 == 0) goto LAB_033b6efc;
        iVar23 = *(int *)(lVar15 + 0x18);
        puVar9 = (uint *)(lVar15 + 0x20);
        iVar3 = auVar1._8_4_;
        do {
          if (iVar23 == 0) goto LAB_033b6ef8;
          plVar6 = (long *)(ulong)*puVar9;
          if (*puVar9 == *(uint *)(plVar11 + uVar19 + 4)) {
            if (puVar12 == (undefined *)0x0) goto LAB_033b6efc;
            uVar4 = (uint)plVar8;
            if (*(uint *)(puVar12 + 0x18) <= uVar4) goto LAB_033b6ef8;
            plVar8 = (long *)(ulong)(uVar4 + 1);
            *(uint *)(puVar12 + (long)(int)uVar4 * 4 + 0x20) = *(uint *)(plVar11 + uVar19 + 4);
            break;
          }
          iVar3 = iVar3 + -1;
          puVar9 = puVar9 + 2;
          iVar23 = iVar23 + -1;
        } while (iVar3 != 0);
      }
      uVar19 = uVar19 + 1;
      if (uVar19 == uVar13) {
        return plVar8;
      }
    }
LAB_033b6ef8:
    func_0x0249fb98();
  }
LAB_033b6efc:
  auVar25 = func_0x0249fb90();
  uVar10 = auVar25._8_8_;
  plStack_130 = (long *)0x33b6f00;
  uVar19 = (ulong)plVar6 & 0xffffffff;
  uStack_128 = param_2;
  plStack_120 = param_3;
  lStack_118 = lVar14;
  plStack_110 = param_6;
  uStack_108 = uVar20;
  uVar7 = func_0x0376e0dc(uVar10,0);
  uStack_150 = plStack_130;
  uStack_140 = uVar16;
  plStack_138 = plVar22;
  plStack_130 = param_1;
  if ((bRam0000000005e2c39d & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250,uVar7,uVar10,uVar19,uVar17 & 0xffffffff);
    bRam0000000005e2c39d = 1;
  }
  auStack_160._0_8_ = 0;
  auStack_160._8_8_ = 0;
  auStack_160 = func_0x033b793c(auVar25._0_8_,uVar7,uVar10,uVar19,uVar17 & 0xffffffff,puVar12);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar17 = func_0x0376edd4(auStack_160,0);
  if ((uVar17 & 1) == 0) {
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar17 = func_0x0376edd4(auStack_160 + 8,0);
    if ((uVar17 & 1) == 0) {
      return (long *)auStack_160._0_8_;
    }
  }
  uVar7 = func_0x0376e0dc(uVar10,0);
  plVar11 = (long *)func_0x033b793c(auVar25._0_8_,uVar7,uVar10,uVar19,0,puVar12);
  return plVar11;
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Actions/Multi/TryMergeBoardProcessActivationForCoordinate.txt
 * Cpp2IL method: Metaplay.Core.Model.MetaActionResult Execute(GameLogic.Player.PlayerModel player, System.Boolean commit)
 * Ghidra function entry: 037ee3e8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_037ee3e8(long param_1,long param_2,ulong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  long lVar25;
  int *piVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined1 auVar29 [12];
  uint uStack_1ac;
  ulong uStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined4 uStack_64;
  
  if ((bRam0000000005e2e649 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8540);
    func_0x0249f8e4(&DAT_059d8578);
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059db528);
    func_0x0249f8e4(&DAT_059db550);
    func_0x0249f8e4(&DAT_05a422e8);
    func_0x0249f8e4(&DAT_05a03a28);
    func_0x0249f8e4(&DAT_05a03f30);
    func_0x0249f8e4(&DAT_05a03a30);
    func_0x0249f8e4(&DAT_05a03f38);
    func_0x0249f8e4(&DAT_05a03f40);
    func_0x0249f8e4(&DAT_05a03a38);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_05a18690);
    func_0x0249f8e4(&DAT_05a1c090);
    func_0x0249f8e4(&DAT_05a192c8);
    func_0x0249f8e4(&DAT_05a186c0);
    func_0x0249f8e4(&DAT_05a18678);
    func_0x0249f8e4(&DAT_05a1c078);
    func_0x0249f8e4(&DAT_05a192a0);
    func_0x0249f8e4(&DAT_05a192d8);
    func_0x0249f8e4(&DAT_059d02d0);
    func_0x0249f8e4(&DAT_059d0510);
    func_0x0249f8e4(&DAT_059d0df0);
    func_0x0249f8e4(&DAT_059e2940);
    func_0x0249f8e4(&DAT_05a22c18);
    func_0x0249f8e4(&DAT_05a22c30);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a27a70);
    func_0x0249f8e4(&DAT_05a536e0);
    func_0x0249f8e4(&DAT_05a53710);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a2aaf0);
    func_0x0249f8e4(&DAT_059e5098);
    func_0x0249f8e4(&DAT_059e50b0);
    func_0x0249f8e4(&DAT_05a97240);
    func_0x0249f8e4(&DAT_05a97268);
    func_0x0249f8e4(&DAT_05a73e58);
    bRam0000000005e2e649 = 1;
  }
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  auStack_f0._0_8_ = 0;
  auStack_f0._8_8_ = 0;
  plStack_110 = (long *)0x0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auVar2 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (param_2 == 0) goto LAB_037ef484;
  lVar8 = func_0x0367263c(param_2,*(undefined8 *)(param_1 + 0x10),0);
  if (lVar8 == 0) {
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar19 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x40);
    goto LAB_037ef460;
  }
  uVar9 = func_0x03774280(lVar8,*(undefined8 *)(param_1 + 0x18),0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar19 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x20);
    goto LAB_037ef460;
  }
  lVar10 = func_0x0376e450(lVar8,*(undefined8 *)(param_1 + 0x18),0);
  if (lVar10 == 0) {
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar19 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x30);
    goto LAB_037ef460;
  }
  uVar9 = func_0x036d06c8(lVar10,0);
  if ((uVar9 & 1) == 0) {
LAB_037ee82c:
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar19 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x38);
    goto LAB_037ef460;
  }
  uVar11 = func_0x03659ee0(param_2,0);
  uVar9 = func_0x036edd98(lVar10,uVar11,0);
  if ((uVar9 & 1) == 0) {
    uVar11 = func_0x03659ee0(param_2,0);
    uVar9 = func_0x036edf9c(lVar10,uVar11,0);
    if ((uVar9 & 1) == 0) goto LAB_037ee82c;
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  auStack_78 = func_0x0364aa28(param_2,lVar8,lVar10,0);
  uVar9 = auStack_78._0_8_;
  uVar12 = func_0x0363c070(param_2,0);
  auVar3._8_8_ = auStack_f0._8_8_;
  auVar3._0_8_ = auStack_f0._0_8_;
  auVar2 = auStack_78;
  if (*(long *)(param_2 + 0x218) == 0) goto LAB_037ef484;
  uVar13 = func_0x036870e0(*(long *)(param_2 + 0x218),uVar9 & 0xffffffff,(long)uVar9 >> 0x20,0);
  if ((uVar13 & 1) == 0) {
    if ((uVar12 & 1) != 0) {
      uVar13 = func_0x036334a4(uVar9 & 0xffffffff,0);
      if ((uVar13 & 1) != 0) goto LAB_037ee718;
    }
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar19 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0xa8);
    goto LAB_037ef460;
  }
LAB_037ee718:
  if ((param_3 & 1) == 0) goto LAB_037ef440;
  uVar11 = func_0x028a379c(param_2,_DAT_05a2aaf0);
  uVar5 = func_0x036d392c(lVar10,0);
  uVar14 = func_0x03659ee0(param_2,0);
  uVar14 = func_0x036d62d4(lVar10,uVar14,0);
  lVar15 = func_0x0249fb80(_DAT_059d0510);
  func_0x0282ee2c(lVar15,_DAT_05a192a0);
  uVar13 = func_0x037889b0(lVar8,param_2,*(undefined8 *)(param_1 + 0x18),_DAT_05a97268,0);
  if ((uVar13 & 1) == 0) {
    uVar13 = func_0x03778aa0(lVar8,param_2,0,0);
    if ((uVar13 & 1) != 0) goto LAB_037ee7d0;
    uStack_1ac = func_0x03778bf0(lVar8,param_2,0);
  }
  else {
LAB_037ee7d0:
    uStack_1ac = 1;
  }
  lVar16 = func_0x0249fb80(_DAT_059d8578);
  func_0x0376ddf4(lVar16,0);
  uVar28 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar28 = func_0x03646d30(param_2,uVar28,uVar9 >> 0x20,0);
  auVar3._8_8_ = auStack_f0._8_8_;
  auVar3._0_8_ = auStack_f0._0_8_;
  auVar2 = auStack_78;
  if (lVar16 == 0) {
LAB_037ef484:
    auStack_f0 = auVar3;
    auStack_78 = auVar2;
    uVar28 = func_0x0249fb90();
    func_0x022c21d0(&plStack_170);
LAB_037ef4ec:
    func_0x0258f7ac(uVar28);
    lVar8 = func_0x022bd790();
    return *(undefined8 *)(lVar8 + 0x10);
  }
  *(undefined8 *)(lVar16 + 0x18) = uVar28;
  func_0x0249f888();
  uVar28 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar17 = func_0x03530158(uVar11,0);
  uVar18 = func_0x0249fb80(_DAT_059de230);
  func_0x034a1470(uVar18,param_2,0);
  func_0x0377bb50(lVar8,param_2,uVar28,uVar17,uVar18,lVar15,lVar16,auStack_78,0);
  if (auStack_78._8_8_ == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)(auStack_78._8_8_ + 0x18);
  }
  uVar18 = func_0x0249fb80(_DAT_059e5098);
  func_0x038cecfc(uVar18,uVar6,0);
  uVar28 = *(undefined8 *)(param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar28 = func_0x03627c8c(uVar28,0);
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e46b8);
  }
  func_0x03652274(param_2,uVar18,lVar8,uVar17,uVar28,lVar15,0);
  func_0x033bfe1c(param_2,lVar15,lVar8,*(undefined8 *)(param_2 + 0x220),0);
  auVar3._8_8_ = auStack_f0._8_8_;
  auVar3._0_8_ = auStack_f0._0_8_;
  plVar27 = *(long **)(param_2 + 0x1e0);
  auVar2 = auStack_78;
  if (plVar27 == (long *)0x0) goto LAB_037ef484;
  lVar25 = *plVar27;
  uVar28 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar9 != 0) {
    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == _DAT_059e0280) {
        puVar19 = (undefined8 *)(lVar25 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_037eeabc;
      }
      uVar9 = uVar9 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar9 != 0);
  }
  puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059e0280,0);
LAB_037eeabc:
  (*(code *)*puVar19)(plVar27,uVar28,lVar15,puVar19[1]);
  auVar3._8_8_ = auStack_f0._8_8_;
  auVar3._0_8_ = auStack_f0._0_8_;
  auVar2 = auStack_78;
  if (lVar15 == 0) goto LAB_037ef484;
  func_0x028310e8(lVar15,&plStack_170,_DAT_05a192c8);
  func_0x054ed0d0(&uStack_e0,&plStack_170,0x60);
  uStack_180 = 0;
  puStack_178 = &uStack_e0;
  while( true ) {
    uVar9 = func_0x02a5d2d0(&uStack_e0,_DAT_05a03f38);
    lVar25 = _DAT_05a03f40;
    if ((uVar9 & 1) == 0) break;
    lVar20 = *(long *)(_DAT_05a03f40 + 0x20);
    uVar1 = *(ushort *)(lVar20 + 0x135);
    lVar21 = lVar20;
    if ((uVar1 & 1) == 0) {
      lVar21 = func_0x024d8f40();
      lVar20 = *(long *)(lVar25 + 0x20);
      uVar1 = *(ushort *)(lVar20 + 0x135);
    }
    uVar6 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar20 = func_0x024d8f40();
    }
    uVar28 = func_0x0249f90c(&uStack_e0,
                             *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x054ed0d0(&plStack_170,uVar28,uVar6);
    uVar28 = CONCAT44(uStack_160,uStack_168._4_4_);
    lVar25 = func_0x0376e450(lVar8,uVar28,0);
    if (lVar25 != 0) {
      func_0x036e5348(lVar25,param_2,0,0);
      func_0x036e5938(lVar25,param_2,uVar28,0);
    }
  }
  func_0x02a5d2cc(&uStack_e0,_DAT_05a03f30);
  if (0 < *(int *)(lVar15 + 0x18)) {
    uVar28 = func_0x0249fb80(_DAT_059e50b0);
    func_0x0389f210(uVar28,uVar5,0);
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    func_0x0276a1a0(param_2,uVar28,_DAT_05a53710);
    auStack_f0 = func_0x03647798(param_2,1,auStack_78._4_4_,0);
    uVar9 = func_0x03648460(param_2,auStack_f0._0_8_,auStack_f0._8_8_,0);
    if ((uVar9 & 1) != 0) {
      uVar28 = func_0x03670c04(param_2,0);
      func_0x026e55c8(uVar28,&plStack_170,_DAT_05a422e8);
      plVar27 = plStack_170;
      lVar25 = *(long *)(param_2 + 0x218);
      func_0x02886844(auStack_f0,&plStack_170,_DAT_05a27a70);
      plVar4 = plStack_170;
      lVar21 = (long)(int)auStack_f0._12_4_;
      if (plVar27 == (long *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar28 = (**(code **)(*plVar27 + 0x238))(plVar27,*(undefined8 *)(*plVar27 + 0x240));
      }
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar28 = func_0x03629930(uVar28,0);
      auVar2 = auStack_78;
      auVar3 = auStack_f0;
      if (lVar25 == 0) goto LAB_037ef484;
      func_0x03684430(lVar25,param_2,(ulong)plVar4 & 0xffffffff,lVar21,0x35,0,uVar28,0);
      uVar17 = auStack_f0._8_8_;
      uVar28 = auStack_f0._0_8_;
      uVar18 = func_0x03659ee0(param_2,0);
      uVar18 = func_0x036d62d4(lVar10,uVar18,0);
      func_0x033c7a10(param_2,plVar27,uVar28,uVar17,uVar18,_DAT_05a97240,0,0);
    }
    lVar25 = func_0x0249fb80(_DAT_059d02d0);
    func_0x0282ee2c(lVar25,_DAT_05a18678);
    lVar21 = func_0x0249fb80(_DAT_059d0df0);
    func_0x0282ee2c(lVar21,_DAT_05a1c078);
    func_0x028310e8(lVar15,&plStack_170,_DAT_05a192c8);
    func_0x054ed0d0(&uStack_e0,&plStack_170,0x60);
    uStack_180 = 0;
    puStack_178 = &uStack_e0;
LAB_037eee10:
    do {
      uVar9 = func_0x02a5d2d0(&uStack_e0,_DAT_05a03f38);
      lVar20 = _DAT_05a03f40;
      if ((uVar9 & 1) == 0) goto LAB_037eef58;
      lVar22 = *(long *)(_DAT_05a03f40 + 0x20);
      uVar1 = *(ushort *)(lVar22 + 0x135);
      lVar23 = lVar22;
      if ((uVar1 & 1) == 0) {
        lVar23 = func_0x024d8f40();
        lVar22 = *(long *)(lVar20 + 0x20);
        uVar1 = *(ushort *)(lVar22 + 0x135);
      }
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(lVar23 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar22 = func_0x024d8f40();
      }
      uVar28 = func_0x0249f90c(&uStack_e0,
                               *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x054ed0d0(&plStack_170,uVar28,uVar6);
      lVar20 = func_0x0376e450(lVar8,CONCAT44(uStack_160,uStack_168._4_4_),0);
      if (lVar20 != 0) {
        uVar28 = func_0x03659ee0(param_2,0);
        uVar28 = func_0x036d62d4(lVar20,uVar28,0);
        uVar6 = func_0x036d392c(lVar20,0);
        if (lVar25 != 0) {
          uStack_64 = uVar6;
          func_0x025a1da8(lVar25,&uStack_64,_DAT_05a18690);
          if (lVar21 != 0) {
            func_0x025a1da8(lVar21,uVar28,_DAT_05a1c090);
            goto LAB_037eee10;
          }
          func_0x0249fb90();
        }
        auVar29 = func_0x0249fb90();
        uVar28 = auVar29._0_8_;
        if (auVar29._8_4_ != 1) goto LAB_037ef1a0;
        puVar24 = (ulong *)func_0x054ed080(uVar28);
        uStack_180 = *puVar24;
        func_0x054ed090();
        goto LAB_037eef58;
      }
    } while( true );
  }
LAB_037ef440:
  if (*(int *)(_DAT_059e2940 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar19 = *(undefined8 **)(_DAT_059e2940 + 0xb8);
LAB_037ef460:
  return *puVar19;
LAB_037eef58:
  func_0x02407410(&uStack_180);
  uVar6 = auStack_78._4_4_;
  if ((int)auStack_78._4_4_ < 1) {
    auVar2 = auStack_78;
    auVar3 = auStack_f0;
    if ((*(long *)(param_2 + 0x220) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 0x220) + 0x1b0), lVar8 == 0)) goto LAB_037ef484;
    plStack_170 = (long *)0x0;
    func_0x02852768(lVar8,*(undefined8 *)(param_1 + 0x10),&plStack_170,&uStack_180,_DAT_05a22c18);
    auVar2 = auStack_78;
    auVar3 = auStack_f0;
    if ((*(long *)(param_2 + 0x220) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 0x220) + 0x1b0), lVar8 == 0)) goto LAB_037ef484;
    plVar27 = (long *)(uStack_180 + 1);
    plStack_170 = plVar27;
    func_0x028524cc(lVar8,*(undefined8 *)(param_1 + 0x10),&plStack_170,_DAT_05a22c30);
    uVar11 = _DAT_05a73e58;
    uVar28 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar14 = func_0x03627590(uVar28,uVar14,lVar21,uStack_1ac & 1,0);
    func_0x03672f54(param_2,1,plVar27,0xc,uVar5,uVar14,uVar11,0,0);
  }
  else {
    func_0x033bfa90(param_2,lVar8,lVar10,*(undefined8 *)(param_1 + 0x18),lVar15,
                    *(undefined1 *)(lVar16 + 0x20),0);
    if (*(char *)(lVar16 + 0x20) == '\0') {
      if ((uVar12 & 1) != 0) {
        uVar9 = func_0x036334a4(auStack_78._0_8_ & 0xffffffff,0);
        if ((uVar9 & 1) != 0) {
          uVar11 = func_0x0249fb80(_DAT_059db528);
          func_0x0389ea78(uVar11,0xe,-(long)(int)uVar6,0);
          if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          func_0x0276a1a0(param_2,uVar11,_DAT_05a536e0);
          uVar11 = auStack_78._0_8_;
          auVar2 = auStack_78;
          auVar3 = auStack_f0;
          if (*(long *)(param_2 + 0x218) == 0) goto LAB_037ef484;
          lVar8 = *(long *)(*(long *)(param_2 + 0x218) + 0x100);
          if (lVar8 != 0) {
            if (*(int *)(_DAT_059db550 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar7 = func_0x0348af34(uVar11 & 0xffffffff,0);
            uVar11 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
              func_0x0249fa64(_DAT_059d89a0);
            }
            uVar11 = func_0x03627590(uVar11,uVar14,lVar21,uStack_1ac & 1,0);
            func_0x03632fe4(lVar8,uVar7,uVar6,0,0x12,uVar5,0,uVar11,0);
          }
          goto LAB_037ef440;
        }
      }
      uVar11 = auStack_78._0_8_;
      if (auStack_78._8_8_ == 0) {
        uVar7 = 0xc;
      }
      else {
        uVar7 = *(undefined4 *)(auStack_78._8_8_ + 0x24);
      }
      lVar8 = *(long *)(param_2 + 0x218);
      uVar28 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar14 = func_0x03627590(uVar28,uVar14,lVar21,uStack_1ac & 1,0);
      auVar2 = auStack_78;
      auVar3 = auStack_f0;
      if (lVar8 == 0) goto LAB_037ef484;
      func_0x03685710(lVar8,param_2,uVar11 & 0xffffffff,uVar6,uVar7,uVar5,uVar14,0);
      if (auStack_78._0_4_ == 0) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar11 = func_0x0364f9d4(param_2,0);
        lVar8 = *(long *)(param_2 + 0x218);
        uVar14 = func_0x028a379c(param_2,_DAT_05a2aaf0);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2ba0);
        }
        uVar11 = func_0x0430d994(uVar14,uVar11,0);
        if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2c00);
        }
        uVar11 = func_0x03530158(uVar11,0);
        auVar2 = auStack_78;
        auVar3 = auStack_f0;
        if (lVar8 == 0) goto LAB_037ef484;
        func_0x036872ec(lVar8,param_2,uVar11,0,0);
      }
    }
    else {
      auVar2 = auStack_78;
      auVar3 = auStack_f0;
      if (lVar25 == 0) goto LAB_037ef484;
      func_0x028310e8(lVar25,&plStack_170,_DAT_05a186c0);
      uStack_108 = CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
      uStack_100 = CONCAT44(uStack_15c,uStack_160);
      uStack_168 = &plStack_110;
      plStack_110 = plStack_170;
      plStack_170 = (long *)0x0;
      while( true ) {
        uVar9 = func_0x02a5d2d0(&plStack_110,_DAT_05a03a30);
        lVar8 = _DAT_05a03a38;
        if ((uVar9 & 1) == 0) break;
        lVar15 = *(long *)(_DAT_05a03a38 + 0x20);
        uVar1 = *(ushort *)(lVar15 + 0x135);
        lVar10 = lVar15;
        if ((uVar1 & 1) == 0) {
          lVar10 = func_0x024d8f40();
          lVar15 = *(long *)(lVar8 + 0x20);
          uVar1 = *(ushort *)(lVar15 + 0x135);
        }
        uVar5 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar15 = func_0x024d8f40();
        }
        uVar14 = func_0x0249f90c(&plStack_110,
                                 *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x054ed0d0(&uStack_180,uVar14,uVar5);
        uVar9 = uStack_180;
        lVar8 = *(long *)(param_2 + 0x3a0);
        if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar14 = func_0x03530158(uVar11,0);
        if (lVar8 == 0) {
          uVar28 = func_0x0249fb90();
LAB_037ef1a0:
          func_0x02407410(&uStack_180);
          goto LAB_037ef4ec;
        }
        func_0x0363967c(lVar8,uVar9 & 0xffffffff,uVar14,0);
      }
      func_0x022c21d0(&plStack_170);
    }
  }
  goto LAB_037ef440;
}


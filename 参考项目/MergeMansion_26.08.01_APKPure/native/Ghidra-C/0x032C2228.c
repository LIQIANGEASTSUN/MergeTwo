/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void TryToUndoSellItem(GameLogic.Player.PlayerModel player, GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Config.Types.MetacoreTime currentTime, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 033c2228
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033c2818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c2a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c2b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c3a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c3c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c3ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c48dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c52c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033c48e0) */
/* WARNING: Removing unreachable block (ram,0x033c3ca4) */
/* WARNING: Removing unreachable block (ram,0x033c3c34) */
/* WARNING: Removing unreachable block (ram,0x033c3a24) */
/* WARNING: Removing unreachable block (ram,0x033c3a28) */
/* WARNING: Removing unreachable block (ram,0x033c3a38) */
/* WARNING: Removing unreachable block (ram,0x033c3a40) */
/* WARNING: Removing unreachable block (ram,0x033c3a68) */
/* WARNING: Removing unreachable block (ram,0x033c3a4c) */
/* WARNING: Removing unreachable block (ram,0x033c3a58) */
/* WARNING: Removing unreachable block (ram,0x033c3a78) */
/* WARNING: Removing unreachable block (ram,0x033c3a88) */
/* WARNING: Removing unreachable block (ram,0x033c3a98) */
/* WARNING: Removing unreachable block (ram,0x033c3aa0) */
/* WARNING: Removing unreachable block (ram,0x033c3ac8) */
/* WARNING: Removing unreachable block (ram,0x033c3aac) */
/* WARNING: Removing unreachable block (ram,0x033c3ab8) */
/* WARNING: Removing unreachable block (ram,0x033c3ad8) */
/* WARNING: Removing unreachable block (ram,0x033c3ae8) */
/* WARNING: Removing unreachable block (ram,0x033c3aec) */
/* WARNING: Removing unreachable block (ram,0x033c3b04) */
/* WARNING: Removing unreachable block (ram,0x033c3b0c) */
/* WARNING: Removing unreachable block (ram,0x033c3b34) */
/* WARNING: Removing unreachable block (ram,0x033c3b18) */
/* WARNING: Removing unreachable block (ram,0x033c3b24) */
/* WARNING: Removing unreachable block (ram,0x033c3b44) */
/* WARNING: Removing unreachable block (ram,0x033c3b64) */
/* WARNING: Removing unreachable block (ram,0x033c3b6c) */
/* WARNING: Removing unreachable block (ram,0x033c3b94) */
/* WARNING: Removing unreachable block (ram,0x033c3b78) */
/* WARNING: Removing unreachable block (ram,0x033c3b84) */
/* WARNING: Removing unreachable block (ram,0x033c3ba4) */
/* WARNING: Removing unreachable block (ram,0x033c3bb4) */
/* WARNING: Removing unreachable block (ram,0x033c3bc8) */
/* WARNING: Removing unreachable block (ram,0x033c3bd8) */
/* WARNING: Removing unreachable block (ram,0x033c3be0) */
/* WARNING: Removing unreachable block (ram,0x033c3c08) */
/* WARNING: Removing unreachable block (ram,0x033c3bec) */
/* WARNING: Removing unreachable block (ram,0x033c3bf8) */
/* WARNING: Removing unreachable block (ram,0x033c3c18) */
/* WARNING: Removing unreachable block (ram,0x033c3c38) */
/* WARNING: Removing unreachable block (ram,0x033c3c48) */
/* WARNING: Removing unreachable block (ram,0x033c3c50) */
/* WARNING: Removing unreachable block (ram,0x033c3c78) */
/* WARNING: Removing unreachable block (ram,0x033c3c5c) */
/* WARNING: Removing unreachable block (ram,0x033c3c68) */
/* WARNING: Removing unreachable block (ram,0x033c3c88) */
/* WARNING: Removing unreachable block (ram,0x033c3ca8) */
/* WARNING: Removing unreachable block (ram,0x033c3c98) */
/* WARNING: Removing unreachable block (ram,0x033c3c28) */
/* WARNING: Removing unreachable block (ram,0x033c2b0c) */
/* WARNING: Removing unreachable block (ram,0x033c2b14) */
/* WARNING: Removing unreachable block (ram,0x033c2b18) */
/* WARNING: Removing unreachable block (ram,0x033c2be4) */
/* WARNING: Removing unreachable block (ram,0x033c2b2c) */
/* WARNING: Removing unreachable block (ram,0x033c2b48) */
/* WARNING: Removing unreachable block (ram,0x033c2b50) */
/* WARNING: Removing unreachable block (ram,0x033c2b78) */
/* WARNING: Removing unreachable block (ram,0x033c2b5c) */
/* WARNING: Removing unreachable block (ram,0x033c2b68) */
/* WARNING: Removing unreachable block (ram,0x033c2b88) */
/* WARNING: Removing unreachable block (ram,0x033c2bac) */
/* WARNING: Removing unreachable block (ram,0x033c2bc8) */
/* WARNING: Removing unreachable block (ram,0x033c2a40) */
/* WARNING: Removing unreachable block (ram,0x033c281c) */
/* WARNING: Removing unreachable block (ram,0x033c2828) */
/* WARNING: Removing unreachable block (ram,0x033c282c) */
/* WARNING: Removing unreachable block (ram,0x033c287c) */
/* WARNING: Removing unreachable block (ram,0x033c2838) */
/* WARNING: Removing unreachable block (ram,0x033c2844) */
/* WARNING: Removing unreachable block (ram,0x033c2898) */
/* WARNING: Removing unreachable block (ram,0x033c289c) */
/* WARNING: Removing unreachable block (ram,0x033c284c) */
/* WARNING: Removing unreachable block (ram,0x033c2868) */
/* WARNING: Removing unreachable block (ram,0x033c2878) */
/* WARNING: Removing unreachable block (ram,0x033c2820) */
/* WARNING: Removing unreachable block (ram,0x033c2880) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033c2228(long param_1,long param_2,long *param_3,long *param_4,long *param_5,long *param_6
                  ,ulong param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  int iVar8;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long **pplVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  code *pcVar32;
  undefined *puVar33;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  long *unaff_x25;
  long *plVar37;
  undefined *puVar38;
  ulong uVar39;
  undefined8 *unaff_x26;
  uint uVar40;
  undefined *unaff_x28;
  undefined8 uVar41;
  undefined *unaff_x29;
  undefined8 uVar42;
  undefined *puVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_590 [16];
  undefined8 uStack_580;
  undefined *puStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined8 uStack_520;
  long lStack_510;
  undefined8 uStack_508;
  long lStack_500;
  long *plStack_4f8;
  ulong uStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined1 auStack_4c0 [80];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  ulong uStack_3c0;
  long *plStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  undefined1 auStack_374 [4];
  undefined *puStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long **pplStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  long *plStack_308;
  undefined1 auStack_300 [16];
  long *plStack_2f0;
  long *plStack_2e8;
  undefined1 uStack_2d4;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined1 auStack_2b8 [16];
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined1 auStack_290 [16];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined1 auStack_240 [16];
  long *plStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  long lStack_208;
  long *plStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1c8;
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
  long *plStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_70;
  undefined4 uStack_64;
  
  lVar34 = 0x5e2c000;
  pcVar32 = (code *)&DAT_059efcf8;
  plVar13 = param_3;
  plVar20 = param_4;
  if ((bRam0000000005e2c3cc & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_05a42428);
    func_0x0249f8e4(&DAT_059c6530);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_05a30640);
    func_0x0249f8e4(&DAT_059d55a8);
    func_0x0249f8e4(&DAT_05a69f48);
    func_0x0249f8e4(&DAT_059efcf8);
    func_0x0249f8e4(&DAT_05a34898);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3cc = 1;
  }
  plStack_c8 = (long *)0x0;
  puVar11 = (undefined *)func_0x0249fb80(_DAT_059efcf8);
  func_0x0378ae54(puVar11,0);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x220) != 0)) {
    lStack_1c8 = *(long *)(param_1 + 0x218);
    func_0x0387f3b8(&puStack_c0,*(long *)(param_1 + 0x220),0);
    lVar25 = lStack_b8;
    if (puVar11 != (undefined *)0x0) {
      unaff_x26 = (undefined8 *)(puVar11 + 0x10);
      *unaff_x26 = puStack_c0;
      uVar12 = func_0x0249f888(unaff_x26);
      if (param_2 == 0) {
        return uVar12;
      }
      pcVar32 = (code *)&DAT_05a30640;
      uVar41 = *(undefined8 *)(param_2 + 0x30);
      uVar42 = *unaff_x26;
      if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar12 = func_0x02903704(uVar41,uVar42,_DAT_05a30640);
      if ((uVar12 & 1) == 0) {
        return uVar12;
      }
      uVar12 = func_0x037885f4(param_2,plStack_b0,0);
      unaff_x25 = plStack_b0;
      if ((uVar12 & 1) == 0) {
        param_5 = (long *)0x0;
        uVar12 = func_0x037c7a80(*(undefined8 *)(param_2 + 0x90),plStack_b0,param_2,&plStack_c8);
        unaff_x25 = plStack_c8;
        if ((uVar12 & 1) == 0) {
          unaff_x25 = plStack_b0;
        }
      }
      unaff_x28 = (undefined *)func_0x03633aec(param_1,0);
      unaff_x29 = (undefined *)func_0x0249fb80(_DAT_059c6530);
      func_0x02a9aa34(unaff_x29,puVar11,_DAT_05a69f48,0);
      plVar20 = _DAT_05a42428;
      func_0x026e5b0c(unaff_x28,unaff_x29,&puStack_c0);
      puVar11 = puStack_c0;
      uVar12 = func_0x037885f4(param_2,unaff_x25,0);
      lVar34 = lVar25;
      if ((uVar12 & 1) == 0) {
        unaff_x28 = (undefined *)func_0x0376e450(param_2,unaff_x25,0);
        plVar13 = (long *)func_0x03659ee0(param_1,0);
        if (lStack_1c8 != 0) {
          func_0x03687a50(lStack_1c8,unaff_x28,plVar13,*unaff_x26,puVar11,0);
          func_0x037789bc(param_2,param_1,unaff_x25,param_3,1,0);
          param_6 = (long *)0x0;
          param_7 = 0;
          uStack_1e0 = 0;
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
          plVar13 = unaff_x25;
          plVar20 = unaff_x25;
          param_5 = param_3;
          func_0x034ba874(&uStack_120,10);
          lVar26 = _DAT_059c9978;
          if (param_4 != (long *)0x0) {
            func_0x054ed0d0(auStack_170,&uStack_120,0x50);
            lVar23 = *param_4;
            uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar26) {
                  puVar14 = (undefined8 *)(lVar23 + (long)(*piVar28 + 2) * 0x10 + 0x138);
                  goto LAB_033c253c;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)func_0x024d927c(param_4,lVar26,2);
LAB_033c253c:
            pcVar32 = (code *)*puVar14;
            func_0x054ed0d0(&puStack_c0,auStack_170,0x50);
            (*pcVar32)(param_4,&puStack_c0,puVar14[1]);
            goto LAB_033c2560;
          }
        }
      }
      else {
LAB_033c2560:
        unaff_x26 = (undefined8 *)func_0x0249fb80(_DAT_059de230);
        func_0x034a1470(unaff_x26,param_1,0);
        func_0x03785f38(param_2,unaff_x25,lVar25,param_3,unaff_x26,param_1,0);
        param_6 = (long *)0x0;
        param_7 = 0;
        uStack_1e0 = 0;
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
        plVar13 = unaff_x25;
        plVar20 = unaff_x25;
        param_5 = param_3;
        func_0x034ba874(&uStack_120,9);
        lVar26 = _DAT_059c9978;
        if (param_4 != (long *)0x0) {
          func_0x054ed0d0(auStack_1c0,&uStack_120,0x50);
          lVar23 = *param_4;
          uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar26) {
                param_3 = (long *)(lVar23 + (long)(*piVar28 + 2) * 0x10 + 0x138);
                goto LAB_033c264c;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          param_3 = (long *)func_0x024d927c(param_4,lVar26,2);
LAB_033c264c:
          pcVar32 = (code *)*param_3;
          func_0x054ed0d0(&puStack_c0,auStack_1c0,0x50);
          (*pcVar32)(param_4,&puStack_c0,param_3[1]);
          plVar13 = (long *)func_0x03659ee0(param_1,0);
          plVar20 = (long *)0x0;
          auVar44 = func_0x03788520(param_2,lVar25);
          if (lVar25 != 0) {
            uVar12 = func_0x036d392c(lVar25,0);
            param_4 = (long *)(uVar12 & 0xffffffff);
            uVar41 = func_0x03659ee0(param_1,0);
            lVar34 = func_0x036d62d4(lVar25,uVar41,0);
            puStack_c0 = (undefined *)0x0;
            lStack_b8 = 0;
            uStack_64 = auVar44._0_4_;
            plStack_70 = auVar44._8_8_;
            func_0x02953678(&puStack_c0,&uStack_64,&plStack_70,_DAT_05a34898);
            param_2 = *(long *)(param_2 + 0x30);
            if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar13 = (long *)0x0;
            plVar20 = (long *)0x0;
            param_5 = (long *)0x0;
            uVar41 = func_0x03627590(param_2,lVar34);
            param_3 = auVar44._0_8_;
            unaff_x25 = auVar44._8_8_;
            if (lStack_1c8 != 0) {
              uStack_1e0 = _DAT_05a93bf8;
              uStack_1d8 = 0;
              uVar12 = func_0x03685074(lStack_1c8,param_1,puStack_c0,lStack_b8,0xb,param_4,0,uVar41)
              ;
              return uVar12;
            }
          }
        }
      }
    }
  }
  auVar44 = func_0x0249fb90();
  uStack_220 = 0x33c2780;
  plStack_218 = unaff_x25;
  plStack_210 = param_3;
  lStack_208 = lVar34;
  plStack_200 = param_4;
  pcStack_1f8 = pcVar32;
  lStack_1f0 = param_2;
  lStack_1e8 = param_1;
  if ((bRam0000000005e2c3cd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a43c28);
    func_0x0249f8e4(&DAT_059d7400);
    bRam0000000005e2c3cd = 1;
  }
  plVar15 = (long *)func_0x0249fa68(plVar20,_DAT_059d7400);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)func_0x026ebbf4(plVar20,_DAT_05a43c28);
  }
  uStack_278 = 0x33c281c;
  puStack_258 = &DAT_059d7400;
  plVar19 = plVar13;
  plVar31 = plVar15;
  plVar29 = param_5;
  puStack_280 = unaff_x29;
  puStack_270 = unaff_x28;
  puStack_268 = puVar11;
  puStack_260 = unaff_x26;
  plStack_250 = plVar20;
  plStack_248 = plVar15;
  plStack_230 = plVar13;
  plStack_228 = param_5;
  auStack_240 = auVar44;
  if ((bRam0000000005e2c3ce & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_05a29a88);
    func_0x0249f8e4(&DAT_059d4060);
    bRam0000000005e2c3ce = 1;
  }
  auStack_290._0_8_ = 0;
  auStack_290._8_8_ = 0;
  plVar20 = (long *)0x5e2c000;
  plVar22 = (long *)&DAT_059d7400;
  auVar45 = ZEXT816(0);
  if (auVar44._8_8_ == 0) {
LAB_033c2a80:
    plVar16 = plVar20;
    plVar37 = plVar31;
    auStack_290 = auVar45;
    func_0x0249fb90();
  }
  else {
    plVar19 = (long *)0x0;
    plVar16 = (long *)func_0x0376e450(auVar44._8_8_,plVar13);
    if (plVar16 == (long *)0x0) {
      return 0;
    }
    auVar45 = auStack_290;
    if (plVar15 == (long *)0x0) goto LAB_033c2a80;
    uVar7 = *(uint *)(plVar15 + 3);
    bVar1 = 0 < (int)uVar7;
    if ((int)uVar7 < 1) {
      return 0;
    }
    unaff_x28 = &DAT_059d4060;
    unaff_x29 = &DAT_05a29a88;
    puVar11 = (undefined *)0x0;
    while( true ) {
      unaff_x26 = (undefined8 *)(ulong)bVar1;
      uVar40 = (uint)puVar11;
      plVar37 = plVar31;
      if (uVar7 <= uVar40) break;
      plVar37 = (long *)plVar15[(long)(int)uVar40 + 4];
      plVar20 = plVar16;
      plVar22 = plVar37;
      auVar45 = auStack_290;
      if (plVar37 == (long *)0x0) goto LAB_033c2a80;
      lVar34 = *plVar37;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x28) * 0x10 + 0x138);
            goto LAB_033c29c0;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059defe8,0x28);
LAB_033c29c0:
      plVar29 = (long *)puVar14[1];
      plVar19 = plVar16;
      plVar31 = param_5;
      auVar45 = (*(code *)*puVar14)(plVar37,auVar44._0_8_);
      auStack_290 = auVar45;
      if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar34 = *(long *)(_DAT_05a29a88 + 0x20);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40();
      }
      pcVar17 = (char *)func_0x0249f90c(auStack_290,
                                        *(long *)(**(long **)(lVar34 + 0xc0) + 0x80) + 0x20);
      if (*pcVar17 != '\0') {
        uVar41 = 0x33c2a40;
        plVar19 = plVar13;
        plVar29 = param_5;
        auVar45 = auVar44;
        goto SUB_033c2a88;
      }
      uVar7 = *(uint *)(plVar15 + 3);
      uVar40 = uVar40 + 1;
      puVar11 = (undefined *)(ulong)uVar40;
      bVar1 = (int)uVar40 < (int)uVar7;
      if ((int)uVar7 <= (int)uVar40) {
        return 0;
      }
    }
  }
  uVar41 = 0x33c2a88;
  auVar45 = func_0x0249fb98();
SUB_033c2a88:
  plVar20 = auVar45._8_8_;
  plVar31 = auVar45._0_8_;
  puVar38 = (undefined *)0x5e2c000;
  uStack_2d0 = uVar41;
  plStack_2c8 = plVar22;
  plStack_2c0 = plVar16;
  plStack_2a8 = plVar13;
  plStack_2a0 = plVar15;
  plStack_298 = param_5;
  auStack_2b8 = auVar44;
  if ((bRam0000000005e2c3d0 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7c0);
    func_0x0249f8e4(&DAT_059defe8);
    bRam0000000005e2c3d0 = 1;
  }
  uStack_2d4 = 0;
  plVar16 = (long *)func_0x026bf824(plVar37,_DAT_05a3c7c0);
  uStack_330 = 0x33c2b0c;
  uStack_318 = 0x5e2c000;
  puStack_310 = &DAT_05a3c7c0;
  puVar36 = (undefined *)0x5e2c000;
  plVar15 = plVar19;
  plVar13 = plVar16;
  plVar22 = plVar29;
  puStack_320 = unaff_x26;
  plStack_308 = plVar37;
  plStack_2f0 = plVar19;
  plStack_2e8 = plVar29;
  auStack_300 = auVar45;
  if ((bRam0000000005e2c3cf & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3cf = 1;
  }
  plStack_328 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar15 = (long *)0x0;
    plVar37 = (long *)func_0x0376e450(plVar20,plVar19);
    if (plVar37 == (long *)0x0) {
      plVar16 = (long *)0x0;
      goto LAB_033c2f48;
    }
    if (plVar16 != (long *)0x0) {
      lVar34 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca768) {
            puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033c2ce4;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      plVar15 = (long *)0x0;
      puVar14 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033c2ce4:
      plStack_328 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
      pplStack_338 = &plStack_328;
      plStack_340 = (long *)0x0;
      if (plStack_328 != (long *)0x0) {
        puVar36 = &DAT_059df6e0;
        puVar38 = &DAT_059cbac8;
        unaff_x26 = (undefined8 *)&DAT_059defe8;
        do {
          plVar19 = plStack_328;
          lVar34 = *plStack_328;
          uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033c2d68;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          plVar15 = (long *)0x0;
          puVar14 = (undefined8 *)func_0x024d927c(plStack_328);
LAB_033c2d68:
          uVar12 = (*(code *)*puVar14)(plVar19,puVar14[1]);
          plVar19 = plStack_328;
          plVar16 = (long *)(uVar12 & 0xffffffff);
          if ((uVar12 & 1) == 0) goto LAB_033c2ed0;
          if (plStack_328 == (long *)0x0) {
            func_0x0249fb90();
            plVar20 = (long *)0x0;
LAB_033c2f74:
            func_0x0249fb90();
            plVar19 = plVar37;
            goto LAB_033c2f78;
          }
          lVar34 = *plStack_328;
          uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059cbac8) {
                puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033c2dd0;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plStack_328,_DAT_059cbac8,0);
LAB_033c2dd0:
          plVar20 = (long *)(*(code *)*puVar14)(plVar19,puVar14[1]);
          plVar13 = (long *)0x0;
          plVar15 = plVar29;
          uVar12 = func_0x036d05a4(plVar37,plVar31);
          if ((uVar12 & 1) != 0) {
            if (plVar20 == (long *)0x0) goto LAB_033c2f74;
            lVar34 = *plVar20;
            uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
                  puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x27) * 0x10 + 0x138);
                  goto LAB_033c2e4c;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059defe8,0x27);
LAB_033c2e4c:
            plVar13 = (long *)puVar14[1];
            plVar15 = plVar31;
            uVar12 = (*(code *)*puVar14)(plVar20,plVar37);
            if ((uVar12 & 1) != 0) {
              lVar34 = *plVar20;
              uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
              if (uVar12 != 0) {
                piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
                    puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                    goto LAB_033c2eb4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar12 != 0);
              }
              plVar15 = (long *)0x3;
              puVar14 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c2eb4:
              uVar12 = (*(code *)*puVar14)(plVar20,puVar14[1]);
              if ((uVar12 & 1) == 0) goto LAB_033c2ed8;
            }
          }
        } while (plStack_328 != (long *)0x0);
      }
      func_0x0249fb90();
LAB_033c2ed0:
      plVar16 = (long *)0x0;
LAB_033c2ed8:
      plVar29 = (long *)0x0;
      pplVar24 = &plStack_328;
      goto LAB_033c2edc;
    }
  }
LAB_033c2f78:
  func_0x0249fb90();
  plVar37 = plVar19;
  do {
    auVar44._8_8_ = plVar16;
    auVar44._0_8_ = plVar37;
    auVar50 = func_0x0249fb88(plVar29);
    plStack_348 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      func_0x022bd79c(&plStack_340);
      func_0x0258f7ac(plStack_348);
      auVar45 = func_0x022bd790();
      lVar34 = auVar45._8_8_;
      uVar41 = auVar45._0_8_;
      uStack_380 = 0x33c2fe4;
      auStack_374[0] = 0;
      plVar19 = plVar15;
      plVar21 = plVar13;
      plVar29 = plVar22;
      plVar30 = plStack_348;
      puStack_370 = puVar36;
      plStack_368 = plVar20;
      plStack_360 = plVar16;
      plStack_358 = plVar37;
      plStack_350 = plVar31;
      if (lVar34 != 0) {
        puVar36 = (undefined *)func_0x0376e450(lVar34,plVar15,0);
        if (puVar36 == (undefined *)0x0) {
          return 0;
        }
        plVar21 = (long *)0x0;
        plVar19 = plVar22;
        uVar12 = func_0x036d05a4(puVar36,uVar41);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        plVar20 = (long *)0x0;
        plVar30 = plVar22;
        plVar31 = plVar15;
        auVar44 = auVar45;
        if (plVar13 != (long *)0x0) {
          uVar12 = func_0x0362cd70(plVar13,0);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          func_0x0362d1c8(plVar13,uVar41,puVar36,plVar22,auStack_374,0);
          func_0x037789bc(lVar34,uVar41,plVar15,plVar22,0,0);
          return 1;
        }
      }
      auVar45 = func_0x0249fb90();
      plVar15 = auVar45._0_8_;
      uStack_3b0 = 0x33c30ac;
      uVar12 = auVar45._8_8_ & 0xffffffff;
      plVar13 = plVar19;
      plStack_390 = plVar31;
      plStack_388 = plVar30;
      if ((bRam0000000005e2c3d1 & 1) == 0) {
        uStack_3a0 = auVar44._8_8_;
        uStack_398 = auVar44._0_8_;
        func_0x0249f8e4(&DAT_059db250);
        func_0x0249f8e4(&DAT_059defe8);
        auVar44._8_8_ = uStack_3a0;
        auVar44._0_8_ = uStack_398;
        bRam0000000005e2c3d1 = 1;
      }
      uStack_3a0 = auVar44._8_8_;
      uStack_398 = auVar44._0_8_;
      uStack_3a8 = 0;
      if (plVar15 != (long *)0x0) {
        lVar34 = *plVar15;
        uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar27 == 0) goto LAB_033c3130;
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        goto LAB_033c3118;
      }
      auVar45 = func_0x0249fb90();
      plVar37 = auVar45._8_8_;
      lVar34 = auVar45._0_8_;
      uStack_408 = 0x33c31c0;
      uStack_3d0 = 0x5e2c000;
      uVar27 = param_7 & 0xffffffff;
      uVar39 = (ulong)plVar13 & 0xffffffff;
      auVar46._8_8_ = 0x5e2c000;
      auVar46._0_8_ = uVar39;
      plVar31 = plVar21;
      plVar22 = plVar29;
      plVar16 = param_6;
      puStack_410 = unaff_x29;
      puStack_400 = unaff_x28;
      puStack_3f8 = puVar11;
      puStack_3f0 = unaff_x26;
      puStack_3e8 = puVar38;
      puStack_3e0 = puVar36;
      plStack_3d8 = plVar20;
      plStack_3c8 = plVar15;
      uStack_3c0 = uVar12;
      plStack_3b8 = plVar19;
      if ((bRam0000000005e2c3d2 & 1) == 0) {
        func_0x0249f8e4(&DAT_059db250);
        func_0x0249f8e4(&DAT_059defe8);
        func_0x0249f8e4(&DAT_059df8e8);
        func_0x0249f8e4(&DAT_059e0280);
        func_0x0249f8e4(&DAT_059e0220);
        func_0x0249f8e4(&DAT_05a192a8);
        func_0x0249f8e4(&DAT_05a192a0);
        func_0x0249f8e4(&DAT_059d0510);
        func_0x0249f8e4(&DAT_059e2c00);
        bRam0000000005e2c3d2 = 1;
      }
      plStack_418 = (long *)0x0;
      if (plVar37 == (long *)0x0) goto LAB_033c36d4;
      lVar25 = *plVar37;
      puVar11 = &DAT_059defe8;
      uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar12 == 0) goto LAB_033c32b8;
      piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      goto LAB_033c32a0;
    }
    puVar14 = (undefined8 *)func_0x054ed080(plStack_348);
    plVar29 = (long *)*puVar14;
    plStack_340 = plVar29;
    func_0x054ed090();
    plVar16 = (long *)0x0;
    pplVar24 = pplStack_338;
LAB_033c2edc:
    plVar31 = *pplVar24;
    if (plVar31 != (long *)0x0) {
      lVar34 = *plVar31;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df598) {
            puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033c2f38;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      plVar15 = (long *)0x0;
      puVar14 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033c2f38:
      (*(code *)*puVar14)(plVar31,puVar14[1]);
    }
  } while (plVar29 != (long *)0x0);
LAB_033c2f48:
  return (ulong)((uint)plVar16 & 1);
code_r0x033c4070:
  uVar12 = (**(code **)(*plVar15 + 0x1b8))(plVar15,auVar44._8_8_,*(undefined8 *)(*plVar15 + 0x1c0));
  if ((uVar12 & 1) == 0) {
LAB_033c4084:
    uVar7 = uVar7 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppuVar6 + -0xb0));
  func_0x0258f7ac(uVar42);
  auVar44 = func_0x022bd790();
  plVar19 = auVar44._8_8_;
  plVar29 = auVar44._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0xe0) = 0x33c45c4;
  *(undefined **)((long)ppuVar6 + -0xd0) = puVar33;
  *(long **)((long)ppuVar6 + -200) = plVar15;
  *(long **)((long)ppuVar6 + -0xc0) = plVar13;
  *(undefined8 *)((long)ppuVar6 + -0xb8) = uVar42;
  uVar42 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar19 != (long *)0x0) {
    lVar34 = *plVar19;
    uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    uVar41 = 6;
    puVar14 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033c466c:
    lVar34 = (*(code *)*puVar14)(plVar19,puVar14[1]);
    if (plVar29 != (long *)0x0) {
      lVar26 = *plVar29;
      puVar33 = &DAT_059dfa78;
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
            puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      uVar41 = 1;
      puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033c46d8:
      uVar9 = (*(code *)*puVar14)(plVar29,puVar14[1]);
      uVar42 = 0;
      if (lVar34 != 0) {
        uVar12 = func_0x0387c57c(lVar34,uVar9,0);
        if ((uVar12 & 1) != 0) {
          return 3;
        }
        lVar26 = *plVar29;
        uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
              puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar12 = (*(code *)*puVar14)(plVar29,puVar14[1]);
        if ((uVar12 & 1) == 0) {
          lVar26 = *plVar29;
          uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
                puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar12 = (*(code *)*puVar14)(plVar29,puVar14[1]);
          if ((uVar12 & 1) == 0) {
            lVar26 = *plVar29;
            uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
                  puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,1);
LAB_033c4814:
            uVar9 = (*(code *)*puVar14)(plVar29,puVar14[1]);
            uVar12 = func_0x0387cc50(lVar34,uVar9,0);
            if ((uVar12 & 1) != 0) {
              return 2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar20 = (long *)0x0;
        uVar12 = func_0x03603060(plVar29,plVar19,1);
        if ((uVar12 & 1) == 0) {
          return 5;
        }
        lVar26 = *plVar29;
        uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
              puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar12 = (*(code *)*puVar14)(plVar29,puVar14[1]);
        if ((uVar12 & 1) == 0) {
          uVar7 = func_0x033c4128(plVar29,plVar19);
          return (ulong)((uVar7 ^ 0xffffffff) & 1);
        }
        uVar41 = 0x33c48e0;
        ppuVar6 = (undefined **)((long)ppuVar6 + -0xe0);
        auVar45 = auVar44;
        goto SUB_033c3e04;
      }
    }
  }
  auVar45 = func_0x0249fb90();
  plVar13 = auVar45._8_8_;
  lVar34 = auVar45._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppuVar6 + -0xf8) = uVar42;
  *(undefined1 (*) [16])((long)ppuVar6 + -0xf0) = auVar44;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar13 == (long *)0x0) goto LAB_033c4a08;
  lVar26 = *plVar13;
  uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar12 == 0) goto LAB_033c4978;
  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
  goto LAB_033c4960;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
LAB_033c3118:
    if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
      puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059defe8,0xd);
  auVar44._8_8_ = uStack_3a0;
  auVar44._0_8_ = uStack_398;
LAB_033c3150:
  uStack_3a0 = auVar44._8_8_;
  uStack_398 = auVar44._0_8_;
  lVar34 = (*(code *)*puVar14)(plVar15,uVar12,puVar14[1]);
  if (lVar34 == 0) {
    uVar7 = 0;
  }
  else {
    uStack_3a8 = func_0x0376eb00(plVar19,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar7 = func_0x0376edd4(&uStack_3a8,0);
    uVar7 = uVar7 ^ 1;
  }
  return (ulong)(uVar7 & 1);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
      puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  return (ulong)(iVar8 == iVar10);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
      puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar14 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059defe8,0x16);
LAB_033c32d8:
  plVar13 = (long *)puVar14[1];
  auVar46 = (*(code *)*puVar14)(plVar37,uVar39);
  uVar41 = auVar46._8_8_;
  lVar25 = auVar46._0_8_;
  if (lVar25 == 0) {
    return 0;
  }
  unaff_x28 = &DAT_059db250;
  plStack_418 = (long *)func_0x0376eb00(lVar34,0);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar12 = func_0x0376edd4(&plStack_418,0);
  if ((uVar12 & 1) != 0) {
    return 0;
  }
  if (param_6 != (long *)0x0) {
    lVar26 = *param_6;
    unaff_x28 = &DAT_059df8e8;
    uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c3394:
    uVar42 = (*(code *)*puVar14)(param_6,puVar14[1]);
    plVar13 = (long *)0x0;
    uVar12 = func_0x036ec4b4(lVar25,uVar42);
    if ((uVar12 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar41 = func_0x03530158(uVar41,0);
      uVar41 = func_0x03530310(plVar21,uVar41,0);
      lVar26 = *param_6;
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
            puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c343c:
      plVar13 = (long *)(*(code *)*puVar14)(param_6,puVar14[1]);
      plVar31 = (long *)0x0;
      func_0x036e24f4(lVar25,uVar41);
    }
    auVar4._8_8_ = uVar41;
    auVar4._0_8_ = lVar25;
    auVar3._8_8_ = uVar41;
    auVar3._0_8_ = lVar25;
    auVar46._8_8_ = uVar41;
    auVar46._0_8_ = lVar25;
    if (lVar34 != 0) {
      func_0x03785f38(lVar34,plStack_418,lVar25,plVar21,plVar29,param_6,0);
      if ((param_7 & 1) == 0) {
        return 1;
      }
      uVar27 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar27,_DAT_05a192a0);
      plVar29 = plStack_418;
      lVar26 = *param_6;
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
            puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar41 = (*(code *)*puVar14)(param_6,puVar14[1]);
      plVar16 = (long *)func_0x036d3908(lVar25,uVar41,0);
      uStack_4d0 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      plVar13 = plVar29;
      plVar31 = plVar29;
      plVar22 = plVar21;
      func_0x034ba874(&uStack_470,9);
      auVar46 = auVar3;
      if (uVar27 != 0) {
        func_0x054ed0d0(auStack_4c0,&uStack_470,0x50);
        plVar13 = _DAT_05a192a8;
        func_0x025a1da8(uVar27,auStack_4c0);
        lVar25 = *param_6;
        uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        plVar13 = (long *)0x17;
        puVar14 = (undefined8 *)func_0x024d927c(param_6);
LAB_033c35d4:
        plVar20 = (long *)(*(code *)*puVar14)(param_6,puVar14[1]);
        lVar25 = *plVar37;
        uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        plVar13 = (long *)0x2;
        puVar14 = (undefined8 *)func_0x024d927c(plVar37);
LAB_033c3634:
        uVar41 = (*(code *)*puVar14)(plVar37,puVar14[1]);
        param_6 = (long *)0x0;
        auVar46 = auVar4;
        if (plVar20 != (long *)0x0) {
          lVar34 = *plVar20;
          uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar12 != 0) {
            piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059e0280) {
                puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar12 = uVar12 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar12 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar14)(plVar20,uVar41,uVar27,puVar14[1]);
          return 1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar25 = auVar46._8_8_;
  auVar44 = func_0x0249fb90();
  puVar33 = auVar44._8_8_;
  puVar35 = auVar44._0_8_;
  uStack_520 = 0x33c36d8;
  puVar38 = (undefined *)0x5e2c000;
  puVar36 = (undefined *)((ulong)plVar31 & 0xffffffff);
  plVar20 = plVar31;
  plStack_4f8 = plVar29;
  uStack_4f0 = uVar27;
  plStack_4e8 = plVar21;
  plStack_4e0 = param_6;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_510 = lVar25;
    uStack_508 = auVar46._0_8_;
    lStack_500 = lVar34;
    plStack_4d8 = plVar37;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar46._8_8_ = lStack_510;
    auVar46._0_8_ = uStack_508;
    auVar45._8_8_ = plStack_4d8;
    auVar45._0_8_ = lStack_500;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_510 = auVar46._8_8_;
  uStack_508 = auVar46._0_8_;
  plStack_4d8 = auVar45._8_8_;
  lStack_500 = auVar45._0_8_;
  if (puVar35 != (undefined *)0x0) {
    uVar41 = func_0x0376e450(puVar35,puVar33,0);
    auVar45._8_8_ = plStack_4d8;
    auVar45._0_8_ = lStack_500;
    auVar46._8_8_ = lStack_510;
    auVar46._0_8_ = uStack_508;
    if (plVar16 != (long *)0x0) {
      lVar34 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 5) * 0x10 + 0x138);
            goto LAB_033c3798;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_033c3798:
      uVar42 = (*(code *)*puVar14)(plVar16,puVar14[1]);
      uVar7 = func_0x036edd98(uVar41,uVar42,0);
      if ((uVar7 & 1) != 0) {
        if (((ulong)plVar31 & 1) == 0) {
          func_0x03780be8(puVar35,puVar33,plVar13,plVar22,0,plVar16,0);
        }
        else {
          func_0x036eaf0c(uVar41,0);
          func_0x03780be8(puVar35,puVar33,plVar13,plVar22,0,plVar16,0);
          func_0x036eadfc(uVar41,0);
        }
      }
      return (ulong)(uVar7 & 1);
    }
  }
  plStack_4d8 = auVar45._8_8_;
  lStack_500 = auVar45._0_8_;
  lStack_510 = auVar46._8_8_;
  uStack_508 = auVar46._0_8_;
  lVar34 = func_0x0249fb90();
  puVar14 = &uStack_540;
  uStack_540 = 0x33c383c;
  uVar41 = 0x5e2c000;
  plStack_538 = plVar13;
  plStack_530 = plVar22;
  plStack_528 = plVar16;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar34 != 0) {
    plVar13 = (long *)func_0x0367613c(lVar34,0);
    iVar8 = func_0x03676288(lVar34,0);
    if ((plVar13 != (long *)0x0) && (*(long *)(lVar34 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar34 + 0x338) + 0x10) = *(int *)((long)plVar13 + 0x24) * iVar8;
      func_0x03675f48(lVar34,iVar8,0);
      if ((iVar8 != 0) || (*(int *)(lVar34 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar12 = func_0x03633f50(lVar34,0);
        if ((uVar12 & 1) != 0) {
          return uVar12;
        }
      }
      *(undefined4 *)(lVar34 + 0x358) = 0;
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      uVar12 = func_0x028a379c(lVar34,_DAT_05a2aaf0);
      *(ulong *)(lVar34 + 0x340) = uVar12;
      return uVar12;
    }
  }
  uVar42 = 0x33c3914;
  auVar47 = func_0x0249fb90();
  if (auVar47._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar14 + -0x20) = uVar42;
      *(long **)((long)puVar14 + -0x18) = plVar13;
      *(undefined8 *)((long)puVar14 + -0x10) = uVar41;
      *(long *)((long)puVar14 + -8) = lVar34;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar34 = *(long *)(auVar47._8_8_ + 0x38);
      if (lVar34 != 0) {
        *(int *)((long)puVar14 + -0x24) = auVar47._0_4_;
        uVar7 = func_0x02893128(lVar34,(undefined1 *)((long)puVar14 + -0x24),_DAT_05a2a588);
        return (ulong)(uVar7 & 1);
      }
      auVar44 = func_0x0249fb90();
      plVar13 = auVar44._8_8_;
      *(undefined8 *)((long)puVar14 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar14 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar14 + -0x40) = auVar47._8_8_;
      *(ulong *)((long)puVar14 + -0x38) = auVar47._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar13 == (long *)0x0) {
        auVar45 = func_0x0249fb90();
        *(undefined8 *)((long)puVar14 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar14 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar14 + -0x60) = 0;
        *(long *)((long)puVar14 + -0x58) = auVar44._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar34 = *(long *)(auVar45._0_8_ + 0xe8);
        if (lVar34 != 0) {
          *(int *)((long)puVar14 + -0x74) = auVar45._8_4_;
          uVar7 = func_0x02893128(lVar34,(undefined1 *)((long)puVar14 + -0x74),_DAT_05a2a588);
          return (ulong)(uVar7 & 1);
        }
        auVar44 = func_0x0249fb90();
        *(undefined8 *)((long)puVar14 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar14 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar14 + -0x90) = auVar45._0_8_;
        *(ulong *)((long)puVar14 + -0x88) = auVar45._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar34 = *(long *)(auVar44._0_8_ + 0xe8);
        if (lVar34 != 0) {
          *(int *)((long)puVar14 + -0xa4) = auVar44._8_4_;
          uVar12 = func_0x028926c4(lVar34,(undefined1 *)((long)puVar14 + -0xa4),_DAT_05a2a578);
          return uVar12;
        }
        lVar34 = func_0x0249fb90();
        *(undefined8 *)((long)puVar14 + -0xd0) = 0x387e970;
        *(long *)((long)puVar14 + -0xc0) = auVar44._0_8_;
        *(ulong *)((long)puVar14 + -0xb8) = auVar44._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar34 + 0xf0) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)*(uint *)(*(long *)(lVar34 + 0xf0) + 0x20);
        }
        return uVar12;
      }
      lVar34 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfbc0) {
            puVar18 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar18 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar41 = (*(code *)*puVar18)(plVar13,puVar18[1]);
      auVar47._8_8_ = auVar44._0_8_;
      auVar47._0_8_ = uVar41;
      uVar41 = *(undefined8 *)((long)puVar14 + -0x40);
      lVar34 = *(long *)((long)puVar14 + -0x38);
      uVar42 = *(undefined8 *)((long)puVar14 + -0x50);
      plVar13 = *(long **)((long)puVar14 + -0x48);
      puVar14 = (undefined8 *)((long)puVar14 + -0x30);
    } while( true );
  }
  uStack_550 = 0x33c3914;
  auVar44 = func_0x0249fb90();
  plVar15 = auVar44._0_8_;
  uStack_580 = 0x33c3934;
  uStack_560 = 0x5e2c000;
  puStack_570 = puVar33;
  plStack_568 = plVar13;
  lStack_558 = lVar34;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar15 == (long *)0x0) {
    puVar43 = (undefined *)0x33c3cc8;
    auVar45 = func_0x0249fb90();
  }
  else {
    lVar34 = *plVar15;
    puVar33 = &DAT_059dfa78;
    uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar34 = (*(code *)*puVar14)(plVar15,puVar14[1]);
    if (lVar34 == 0) {
      return 0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar12 = func_0x035fb854(plVar15,auVar44._8_8_,0);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    puVar43 = (undefined *)0x33c3a24;
    auVar45 = auVar44;
  }
  plVar15 = auVar45._8_8_;
  plVar13 = auVar45._0_8_;
  uStack_598 = 0x5e2c000;
  lVar34 = 0x5e2c000;
  puStack_5a0 = puVar43;
  auStack_590 = auVar44;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar13 == (long *)0x0) {
    uVar41 = 0x33c3e04;
    auVar44 = func_0x0249fb90();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = plVar15;
    ppuVar6 = &puStack_5a0;
    auVar45 = auVar5 << 0x40;
SUB_033c3e04:
    plVar13 = auVar44._0_8_;
    *(undefined8 *)((long)ppuVar6 + -0x30) = uVar41;
    *(undefined **)((long)ppuVar6 + -0x28) = puVar35;
    *(undefined **)((long)ppuVar6 + -0x20) = puVar33;
    *(long *)((long)ppuVar6 + -0x18) = lVar34;
    *(undefined1 (*) [16])((long)ppuVar6 + -0x10) = auVar45;
    puVar43 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)((long)ppuVar6 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x40) = 0;
    if (plVar13 != (long *)0x0) {
      lVar34 = *plVar13;
      puVar43 = &DAT_059dfa78;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar12 & 1) == 0) goto LAB_033c40ec;
      lVar34 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,auVar44._8_8_,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        lVar34 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059dec98) {
              puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dec98,4);
LAB_033c3fac:
        lVar34 = (*(code *)*puVar14)(plVar15,puVar14[1]);
        plVar13 = plVar15;
        if (lVar34 != 0) {
          func_0x028310e8(lVar34,(undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a1a750);
          puVar33 = &DAT_05a047f0;
          puVar35 = &DAT_05a047f8;
          *(undefined8 *)((long)ppuVar6 + -0x60) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x58) = (undefined1 *)((long)ppuVar6 + -0x50);
LAB_033c3fe8:
          uVar7 = func_0x02a5d2d0((undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a047f0);
          lVar34 = _DAT_05a047f8;
          plVar13 = (long *)(ulong)uVar7;
          if ((uVar7 & 1) == 0) goto LAB_033c4084;
          lVar23 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar2 = *(ushort *)(lVar23 + 0x135);
          lVar26 = lVar23;
          if ((uVar2 & 1) == 0) {
            lVar26 = func_0x024d8f40();
            lVar23 = *(long *)(lVar34 + 0x20);
            uVar2 = *(ushort *)(lVar23 + 0x135);
          }
          puVar43 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar2 & 1) == 0) {
            lVar23 = func_0x024d8f40();
          }
          uVar41 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x38),uVar41,puVar43);
          plVar15 = *(long **)((long)ppuVar6 + -0x38);
          if (plVar15 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar50 = func_0x0249fb90();
    uVar41 = auVar50._0_8_;
    if (auVar50._8_4_ == 1) {
      plVar15 = (long *)func_0x054ed080(uVar41);
      lVar34 = *plVar15;
      *(long *)((long)ppuVar6 + -0x60) = lVar34;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)((long)ppuVar6 + -0x58),_DAT_05a047e8);
      if (lVar34 == 0) {
LAB_033c40ec:
        uVar7 = 1;
LAB_033c40f0:
        return (ulong)(uVar7 & 1);
      }
      uVar41 = func_0x0249fb88(lVar34);
    }
    func_0x022c29f0((undefined1 *)((long)ppuVar6 + -0x60));
    func_0x0258f7ac(uVar41);
    auVar44 = func_0x022bd790();
    plVar29 = auVar44._8_8_;
    plVar15 = auVar44._0_8_;
    *(undefined8 *)((long)ppuVar6 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppuVar6 + -0x90) = puVar36;
    *(undefined **)((long)ppuVar6 + -0x88) = puVar35;
    *(undefined **)((long)ppuVar6 + -0x80) = puVar33;
    *(undefined **)((long)ppuVar6 + -0x78) = puVar43;
    *(long **)((long)ppuVar6 + -0x70) = plVar13;
    *(undefined8 *)((long)ppuVar6 + -0x68) = uVar41;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar33 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar6 + -0x98) = 0;
    if ((plVar15 != (long *)0x0) && (plVar29 != (long *)0x0)) {
      lVar34 = *plVar29;
      uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0220,6);
LAB_033c4208:
      lVar34 = (*(code *)*puVar14)(plVar29,puVar14[1]);
      lVar26 = *plVar15;
      puVar33 = &DAT_059dfa78;
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar12 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
            puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar12 = uVar12 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar41 = puVar14[1];
      plVar13 = (long *)(*(code *)*puVar14)(plVar15,plVar29);
      if (plVar13 != (long *)0x0) {
        lVar26 = *plVar13;
        uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059ca7c8) {
              puVar14 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        uVar41 = 0;
        puVar14 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c42e4:
        plVar29 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        *(long **)((long)ppuVar6 + -0x98) = plVar29;
        *(undefined8 *)((long)ppuVar6 + -0xb0) = 0;
        *(undefined1 **)((long)ppuVar6 + -0xa8) = (undefined1 *)((long)ppuVar6 + -0x98);
        if (plVar29 != (long *)0x0) {
          puVar35 = &DAT_059df6e0;
          puVar36 = &DAT_059cbb20;
          do {
            lVar26 = *plVar29;
            uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                  puVar14 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            uVar41 = 0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033c4360:
            uVar12 = (*(code *)*puVar14)(plVar29,puVar14[1]);
            plVar13 = (long *)(uVar12 & 0xffffffff);
            if ((uVar12 & 1) == 0) goto LAB_033c44b8;
            plVar15 = *(long **)((long)ppuVar6 + -0x98);
            if (plVar15 == (long *)0x0) {
              func_0x0249fb90();
              plVar15 = (long *)0x0;
LAB_033c4550:
              auVar48 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar48._0_8_,auVar48._8_8_);
              goto LAB_033c4558;
            }
            lVar26 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059cbb20) {
                  puVar14 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            uVar41 = 0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c43c8:
            plVar15 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
            if (plVar15 == (long *)0x0) goto LAB_033c4550;
            lVar26 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
                  puVar14 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            uVar41 = 0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c4428:
            iVar8 = (*(code *)*puVar14)(plVar15,puVar14[1]);
            if (iVar8 != 0) {
              lVar26 = *plVar15;
              uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar12 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
                    puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar12 = uVar12 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar12 != 0);
              }
              uVar41 = 1;
              puVar14 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c4488:
              uVar12 = (*(code *)*puVar14)(plVar15,puVar14[1]);
              auVar48._8_8_ = uVar12 & 0xffffffff;
              auVar48._0_8_ = uVar12;
              if (lVar34 == 0) goto LAB_033c4554;
              uVar41 = 0;
              uVar12 = func_0x0387cc50(lVar34);
              if ((uVar12 & 1) == 0) goto LAB_033c44b8;
            }
            plVar29 = *(long **)((long)ppuVar6 + -0x98);
            plVar13 = (long *)0x0;
          } while (plVar29 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar34 = 0;
        puVar33 = (undefined *)(ulong)((uint)plVar13 ^ 1);
        puVar14 = (undefined8 *)((long)ppuVar6 + -0x98);
        do {
          plVar13 = (long *)*puVar14;
          if (plVar13 != (long *)0x0) {
            lVar26 = *plVar13;
            uVar12 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar12 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                  puVar14 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar12 = uVar12 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar12 != 0);
            }
            uVar41 = 0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c4520:
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
          if (lVar34 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar50 = func_0x0249fb88(lVar34);
          uVar42 = auVar50._0_8_;
          if (auVar50._8_4_ != 1) goto LAB_033c45b0;
          plVar13 = (long *)func_0x054ed080(uVar42);
          lVar34 = *plVar13;
          *(long *)((long)ppuVar6 + -0xb0) = lVar34;
          func_0x054ed090();
          puVar14 = *(undefined8 **)((long)ppuVar6 + -0xa8);
          puVar33 = (undefined *)0x1;
        } while( true );
      }
      puVar33 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong)((uint)puVar33 & 1);
  }
  lVar34 = *plVar13;
  uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
  if (uVar12 != 0) {
    piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
        puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar12 = uVar12 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if ((uVar12 & 1) != 0) {
    lVar34 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar12 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar12 = uVar12 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar41 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    uVar41 = func_0x033c88e0(uVar41,plVar15,0,0);
    uVar12 = func_0x033c9114(uVar41,plVar15);
    if ((uVar12 & 1) == 0) {
      puStack_5a0 = puVar33;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar13 != (long *)0x0) {
        lVar34 = *plVar13;
        uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
              puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar41 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        lVar34 = func_0x033c97d4(uVar41,plVar15);
        if (lVar34 != 0) {
          uVar7 = *(uint *)(lVar34 + 0x18);
          if (0 < (int)uVar7) {
            if (plVar15 == (long *)0x0) goto LAB_033ca068;
            uVar12 = 0;
            do {
              lVar25 = *plVar15;
              uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
                    puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0220,6);
LAB_033c9f74:
              lVar25 = (*(code *)*puVar14)(plVar15,puVar14[1]);
              if (*(uint *)(lVar34 + 0x18) <= uVar12) goto LAB_033ca06c;
              plVar20 = (long *)(lVar34 + uVar12 * 8 + 0x20);
              lVar26 = *plVar20;
              if (lVar26 == 0) goto LAB_033ca068;
              uVar9 = func_0x0353efa0(lVar26,0);
              if (lVar25 == 0) goto LAB_033ca068;
              uVar27 = func_0x0387cc50(lVar25,uVar9,0);
              if ((uVar27 & 1) == 0) {
                if (*(uint *)(lVar34 + 0x18) <= uVar12) goto LAB_033ca06c;
                lVar34 = *plVar20;
                if (lVar34 == 0) goto LAB_033ca068;
                iVar8 = func_0x0353efa0(lVar34,0);
                lVar34 = *plVar13;
                uVar12 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar12 == 0) goto LAB_033ca020;
                piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar7);
          }
          return 0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar44 = func_0x0249fb98();
      uVar41 = func_0x033c88e0(auVar44._0_8_,auVar44._8_8_,0,0);
      uVar12 = func_0x033c7ab8(uVar41,auVar44._8_8_);
      return uVar12;
    }
  }
  return 1;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar28 = piVar28 + 4;
    if (uVar12 == 0) break;
LAB_033c4960:
    if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
      puVar14 = (undefined8 *)(lVar26 + (long)(*piVar28 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar41 = 6;
  puVar14 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c4998:
  lVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if ((lVar34 != 0) && (plVar13 = (long *)0x0, lVar26 != 0)) {
    uVar12 = func_0x0387c57c(lVar26,*(undefined4 *)(lVar34 + 0x10),0);
    if ((uVar12 & 1) == 0) {
      uVar12 = 2;
    }
    else {
      uVar12 = func_0x0353f618(lVar34,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = func_0x0387cc50(lVar26,*(undefined4 *)(lVar34 + 0x10),0);
        if ((uVar12 & 1) != 0) {
          return 1;
        }
      }
      uVar12 = 0;
    }
    return uVar12;
  }
LAB_033c4a08:
  auVar44 = func_0x0249fb90();
  *(undefined **)((long)ppuVar6 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -0x158) = 0x33c4a0c;
  *(undefined **)((long)ppuVar6 + -0x150) = unaff_x28;
  *(undefined **)((long)ppuVar6 + -0x148) = puVar11;
  *(long *)((long)ppuVar6 + -0x140) = lVar25;
  *(undefined8 *)((long)ppuVar6 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppuVar6 + -0x130) = puVar36;
  *(undefined **)((long)ppuVar6 + -0x128) = puVar35;
  *(undefined **)((long)ppuVar6 + -0x120) = puVar33;
  *(undefined8 *)((long)ppuVar6 + -0x118) = 0x5e2c000;
  *(long **)((long)ppuVar6 + -0x110) = plVar13;
  *(long *)((long)ppuVar6 + -0x108) = lVar34;
  plVar15 = (long *)0x5e2c000;
  uVar12 = auVar44._0_8_ & 0xffffffff;
  plVar13 = plVar20;
  if ((bRam0000000005e2c3da & 1) == 0) {
    func_0x0249f8e4(&DAT_059f5d10);
    func_0x0249f8e4(&DAT_059f5cd8);
    func_0x0249f8e4(&DAT_059c1e78);
    func_0x0249f8e4(&DAT_059c1eb0);
    func_0x0249f8e4(&DAT_059f5d38);
    func_0x0249f8e4(&DAT_059f5d98);
    func_0x0249f8e4(&DAT_059c1ef8);
    func_0x0249f8e4(&DAT_059c1ed8);
    func_0x0249f8e4(&DAT_059db3a0);
    func_0x0249f8e4(&DAT_05a047e8);
    func_0x0249f8e4(&DAT_05a047f0);
    func_0x0249f8e4(&DAT_05a047f8);
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059cd750);
    func_0x0249f8e4(&DAT_05a1a750);
    func_0x0249f8e4(&DAT_05a1a758);
    func_0x0249f8e4(&DAT_05a2eda0);
    func_0x0249f8e4(&DAT_05a2ed98);
    func_0x0249f8e4(&DAT_05a2f0a8);
    func_0x0249f8e4(&DAT_05a2f0b0);
    bRam0000000005e2c3da = 1;
  }
  *(undefined1 *)((long)ppuVar6 + -0x16c) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x180) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x178) = 0;
  *(undefined8 *)((long)ppuVar6 + -400) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x188) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1a0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x198) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1c0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1b8) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1b0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1c8) = 0;
  if (plVar20 == (long *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar41 = func_0x0249fb88(uVar41);
    func_0x022c29f0((undefined1 *)((long)ppuVar6 + -0x1e0));
    func_0x0258f7ac(uVar41);
    uVar42 = 0x33c5404;
    auVar49 = func_0x022bd790();
    puVar11 = puVar36;
  }
  else {
    lVar34 = *plVar20;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar29 = (long *)(*(code *)*puVar14)(plVar20,puVar14[1]);
    if (plVar29 == (long *)0x0) goto LAB_033c53e0;
    lVar34 = *plVar29;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar15 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
    lVar34 = *plVar20;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0220,6);
LAB_033c4cac:
    puVar11 = (undefined *)(*(code *)*puVar14)(plVar20,puVar14[1]);
    if (plVar15 == (long *)0x0) goto LAB_033c53e0;
    lVar34 = *plVar15;
    puVar38 = &DAT_059cd750;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
          puVar14 = (undefined8 *)(lVar34 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cd750,0);
LAB_033c4d14:
    uVar27 = (*(code *)*puVar14)(plVar15,uVar12,puVar14[1]);
    if ((uVar27 & 1) == 0) {
      return 4;
    }
    puVar36 = puVar11;
    if (puVar11 == (undefined *)0x0) goto LAB_033c53e0;
    uVar27 = func_0x0387c57c(puVar11,uVar12,0);
    if ((uVar27 & 1) == 0) {
      return 1;
    }
    lVar34 = *plVar15;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cd750,2);
LAB_033c4da0:
    uVar12 = (*(code *)*puVar14)(plVar15,uVar12,puVar14[1]);
    auVar49._8_8_ = plVar20;
    auVar49._0_8_ = uVar12;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar27 = func_0x035fb854(uVar12,plVar20,0);
    if ((uVar27 & 1) == 0) {
      return 3;
    }
    *(undefined1 *)((long)ppuVar6 + -0x16c) = 0;
    if (uVar12 == 0) goto LAB_033c53e0;
    uVar27 = func_0x0353f608(uVar12,0);
    if ((uVar27 & 1) != 0) {
LAB_033c4e0c:
      plVar15 = *(long **)(uVar12 + 0x28);
      if (plVar15 == (long *)0x0) {
LAB_033c52d0:
        uVar7 = 0;
        if (*(char *)((long)ppuVar6 + -0x16c) != '\0') {
          uVar7 = 6;
        }
        return (ulong)uVar7;
      }
      uVar7 = *(uint *)(plVar15 + 3);
      puVar36 = (undefined *)(ulong)uVar7;
      if ((int)uVar7 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar38 = _DAT_059f5cd8;
      lVar34 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40();
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40();
      }
      if (*(int *)(lVar34 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar34 = *(long *)(puVar38 + 0x20);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40();
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40();
      }
      plVar29 = (long *)**(long **)(lVar34 + 0xb8);
      if (plVar29 != (long *)0x0) {
        puVar38 = (undefined *)
                  (**(code **)(*plVar29 + 0x178))(plVar29,puVar36,*(undefined8 *)(*plVar29 + 0x180))
        ;
        *(undefined **)((long)ppuVar6 + -0x178) = puVar38;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar25 = _DAT_059f5d10;
        lVar34 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
          lVar34 = func_0x024d8f40();
        }
        lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
        if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
          lVar34 = func_0x024d8f40();
        }
        if (*(int *)(lVar34 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar34 = *(long *)(lVar25 + 0x20);
        if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
          lVar34 = func_0x024d8f40();
        }
        lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
        if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
          lVar34 = func_0x024d8f40();
        }
        plVar29 = (long *)**(long **)(lVar34 + 0xb8);
        if (plVar29 != (long *)0x0) {
          uVar42 = (**(code **)(*plVar29 + 0x178))(plVar29,uVar7,*(undefined8 *)(*plVar29 + 0x180));
          *(undefined8 *)((long)ppuVar6 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x1d8) = (undefined1 *)((long)ppuVar6 + -0x180);
          *(undefined8 *)((long)ppuVar6 + -0x180) = uVar42;
          *(undefined1 **)((long)ppuVar6 + -0x1d0) = (undefined1 *)((long)ppuVar6 + -0x178);
          auVar45 = func_0x028ff200(puVar38,_DAT_05a2eda0);
          auVar46 = func_0x028ff200(*(undefined8 *)((long)ppuVar6 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar8 = func_0x035fdf8c(plVar15,auVar45._0_8_,auVar45._8_8_,auVar46._0_8_,auVar46._8_8_,0)
          ;
          if (0 < iVar8) {
            uVar42 = *(undefined8 *)((long)ppuVar6 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar6 + -400),uVar42,0,iVar8,_DAT_059f5d38);
            uVar42 = *(undefined8 *)((long)ppuVar6 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar6 + -0x1a0),uVar42,0,iVar8,_DAT_059f5d98);
            auVar45 = func_0x028ff244(*(undefined8 *)((long)ppuVar6 + -400),
                                      *(undefined8 *)((long)ppuVar6 + -0x188),_DAT_05a2ed98);
            auVar46 = func_0x028ff244(*(undefined8 *)((long)ppuVar6 + -0x1a0),
                                      *(undefined8 *)((long)ppuVar6 + -0x198),_DAT_05a2f0a8);
            uVar12 = func_0x033bae94(plVar20,auVar44._8_8_,uVar41,auVar45._0_8_,auVar45._8_8_,
                                     auVar46._0_8_,auVar46._8_8_,
                                     (undefined1 *)((long)ppuVar6 + -0x16c));
            if ((uVar12 & 1) == 0) {
              func_0x02408624((undefined1 *)((long)ppuVar6 + -0x1e0));
              return 2;
            }
          }
          func_0x02408624((undefined1 *)((long)ppuVar6 + -0x1e0));
          func_0x028310e8(plVar15,(undefined1 *)((long)ppuVar6 + -0x1e0),_DAT_05a1a750);
          *(undefined8 *)((long)ppuVar6 + -0x1b8) = *(undefined8 *)((long)ppuVar6 + -0x1d8);
          *(undefined8 *)((long)ppuVar6 + -0x1c0) = *(undefined8 *)((long)ppuVar6 + -0x1e0);
          *(undefined8 *)((long)ppuVar6 + -0x1b0) = *(undefined8 *)((long)ppuVar6 + -0x1d0);
          *(undefined8 *)((long)ppuVar6 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x1d8) = (undefined1 *)((long)ppuVar6 + -0x1c0);
          while( true ) {
            uVar12 = func_0x02a5d2d0((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047f0);
            lVar34 = _DAT_05a047f8;
            if ((uVar12 & 1) == 0) break;
            lVar26 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar2 = *(ushort *)(lVar26 + 0x135);
            lVar25 = lVar26;
            if ((uVar2 & 1) == 0) {
              lVar25 = func_0x024d8f40();
              lVar26 = *(long *)(lVar34 + 0x20);
              uVar2 = *(ushort *)(lVar26 + 0x135);
            }
            uVar9 = *(undefined4 *)(*(long *)(*(long *)(lVar25 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar26 = func_0x024d8f40();
            }
            uVar41 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x168),uVar41,uVar9);
            plVar13 = *(long **)((long)ppuVar6 + -0x168);
            if (plVar13 != (long *)0x0) {
              lVar34 = *plVar13;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar34 + 0x130)) &&
                 (*(long *)(*(long *)(lVar34 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar12 = (**(code **)(lVar34 + 0x1b8))
                                   (plVar13,plVar20,*(undefined8 *)(lVar34 + 0x1c0));
                if ((uVar12 & 1) == 0) {
                  func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047e8);
                  return 5;
                }
              }
            }
          }
          func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar27 = func_0x0353f618(uVar12,0);
    if ((uVar27 & 1) != 0) goto LAB_033c4e0c;
    uVar27 = func_0x0353f5f8(uVar12,0);
    if ((uVar27 & 1) == 0) {
      uVar27 = func_0x0353f628(uVar12,0);
      if ((uVar27 & 1) != 0) {
        return 3;
      }
      uVar27 = func_0x0353f638(uVar12,0);
      if ((uVar27 & 1) != 0) {
        return 3;
      }
      uVar27 = func_0x0353f648(uVar12,0);
      if ((uVar27 & 1) == 0) {
        uVar27 = func_0x0353f658(uVar12,0);
        if ((uVar27 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar27 = func_0x03600068(uVar12,(undefined1 *)((long)ppuVar6 + -0x1c8),0);
        if ((uVar27 & 1) == 0) goto LAB_033c52d0;
        lVar34 = func_0x022bffa8(6,_DAT_059e0220,plVar20);
        if (*(long *)((long)ppuVar6 + -0x1c8) != 0) {
          uVar42 = func_0x03693f98(*(long *)((long)ppuVar6 + -0x1c8),0);
          uVar41 = 0;
          if (lVar34 != 0) {
            uVar12 = func_0x03887158(lVar34,plVar20,uVar42,0);
            if ((uVar12 & 1) != 0) {
              return 3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar34 = func_0x022bffa8(6,_DAT_059e0220,plVar20);
        if (lVar34 != 0) {
          uVar12 = func_0x03884e60(lVar34,*(undefined4 *)(uVar12 + 0x10),0,0);
          if ((uVar12 & 1) == 0) {
            return 3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar42 = 0x33c52cc;
  }
  plVar19 = auVar49._8_8_;
  plVar29 = auVar49._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0x210) = uVar42;
  *(long *)((long)ppuVar6 + -0x208) = auVar44._8_8_;
  *(undefined8 *)((long)ppuVar6 + -0x200) = uVar41;
  *(long **)((long)ppuVar6 + -0x1f8) = plVar20;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar41 = 0;
  *(undefined8 *)((long)ppuVar6 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x218) = 0;
  uVar27 = func_0x036a531c(plVar29,plVar19);
  if ((uVar27 & 1) == 0) {
    return 0;
  }
  if (plVar29 != (long *)0x0) {
    lVar34 = *plVar29;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfa78) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar41 = puVar14[1];
    plVar20 = (long *)(*(code *)*puVar14)(plVar29,plVar19);
    if (plVar19 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar19 + 0x130)) &&
          (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar29 = (long *)0x0, plVar20 != (long *)0x0)) {
        lVar25 = *plVar20;
        lVar34 = plVar19[0x9c];
        uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar12 != 0) {
          piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059dec98) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar12 = uVar12 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar44 = (*(code *)*puVar14)(plVar20,plVar19,(char)lVar34 != '\0',puVar14[1]);
        *(undefined1 (*) [16])((long)ppuVar6 + -0x220) = auVar44;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar34 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
          lVar34 = func_0x024d8f40();
        }
        pcVar17 = (char *)func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x220),
                                          *(long *)(**(long **)(lVar34 + 0xc0) + 0x80) + 0x20);
        return (ulong)(*pcVar17 == '\0');
      }
    }
  }
  auVar44 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar6 + -0x270) = 0x33c5620;
  *(long *)((long)ppuVar6 + -0x260) = lVar25;
  *(undefined **)((long)ppuVar6 + -600) = puVar38;
  *(undefined **)((long)ppuVar6 + -0x250) = puVar11;
  *(long **)((long)ppuVar6 + -0x248) = plVar15;
  *(ulong *)((long)ppuVar6 + -0x240) = uVar12;
  *(undefined8 *)((long)ppuVar6 + -0x238) = 0x5e2c000;
  *(long **)((long)ppuVar6 + -0x230) = plVar29;
  *(long **)((long)ppuVar6 + -0x228) = plVar19;
  uVar12 = auVar44._0_8_ & 0xffffffff;
  if ((bRam0000000005e2c3db & 1) == 0) {
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059cd750);
    func_0x0249f8e4(&DAT_059d7518);
    bRam0000000005e2c3db = 1;
  }
  *(undefined1 *)((long)ppuVar6 + -0x268) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x278) = 0;
  if (plVar13 != (long *)0x0) {
    lVar34 = *plVar13;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df8e8,5);
LAB_033c5714:
    plVar20 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
    if (plVar20 != (long *)0x0) {
      lVar34 = *plVar20;
      uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar20 = (long *)(*(code *)*puVar14)(plVar20,puVar14[1]);
      lVar34 = *plVar13;
      uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
            puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059e0220,6);
LAB_033c57e8:
      lVar34 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar20 != (long *)0x0) {
        lVar25 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c5850:
        uVar27 = (*(code *)*puVar14)(plVar20,uVar12,puVar14[1]);
        if ((uVar27 & 1) == 0) {
          return 4;
        }
        if (lVar34 != 0) {
          uVar27 = func_0x0387c57c(lVar34,uVar12,0);
          if ((uVar27 & 1) == 0) {
            return 1;
          }
          lVar34 = *plVar20;
          uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
                puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c58dc:
          lVar34 = (*(code *)*puVar14)(plVar20,uVar12,puVar14[1]);
          if (lVar34 != 0) {
            uVar27 = func_0x0353f648(lVar34,0);
            if ((uVar27 & 1) == 0) {
              uVar12 = func_0x0353f658(lVar34,0);
              if ((uVar12 & 1) == 0) {
                return 3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar12 = func_0x03600068(lVar34,(undefined1 *)((long)ppuVar6 + -0x278),0);
              if ((uVar12 & 1) == 0) {
                return 3;
              }
              lVar34 = func_0x022bffa8(6,_DAT_059e0220,plVar13);
              if (*(long *)((long)ppuVar6 + -0x278) != 0) {
                uVar42 = func_0x03693f98(*(long *)((long)ppuVar6 + -0x278),0);
                uVar41 = 0;
                if (lVar34 != 0) {
                  func_0x03887758(lVar34,plVar13,uVar42,0);
                  return 3;
                }
              }
            }
            else {
              lVar34 = *plVar13;
              uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
                    puVar14 = (undefined8 *)(lVar34 + (long)(*piVar28 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059e0220,6);
LAB_033c59d0:
              lVar34 = (*(code *)*puVar14)(plVar13,puVar14[1]);
              if (lVar34 != 0) {
                lVar34 = func_0x03885c68(lVar34,plVar13,uVar12,0);
                if (lVar34 == 0) {
                  return 3;
                }
                lVar25 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar34 + 0x10) != 0) {
                  plVar20 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar9 = *(undefined4 *)(plVar20[1] + 0xfc);
                  uVar42 = func_0x0249f90c(*(long *)(lVar34 + 0x10),*(undefined8 *)(*plVar20 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x264),uVar42,uVar9);
                  uVar42 = _DAT_059d7518;
                  if (lVar25 != 0) {
                    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar25 + 0x20) = *(undefined4 *)((long)ppuVar6 + -0x264);
                    lVar34 = func_0x0249f9d4(uVar42,1);
                    if (lVar34 != 0) {
                      if (*(int *)(lVar34 + 0x18) != 0) {
                        *(undefined4 *)(lVar34 + 0x20) = 1;
                        uVar12 = func_0x033bacb8(plVar13,auVar44._8_8_,uVar41,lVar25,lVar34,
                                                 (undefined1 *)((long)ppuVar6 + -0x268));
                        if ((uVar12 & 1) == 0) {
                          return 2;
                        }
                        uVar7 = 0;
                        if (*(char *)((long)ppuVar6 + -0x268) != '\0') {
                          uVar7 = 6;
                        }
                        return (ulong)uVar7;
                      }
                      goto LAB_033c5ae4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x0249fb90();
LAB_033c5ae4:
  lVar34 = func_0x0249fb98();
  if (lVar34 != 0) {
    return (ulong)*(byte *)(lVar34 + 0x4e0);
  }
  *(undefined8 *)((long)ppuVar6 + -0x290) = 0x33c5ae8;
  auVar45 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar6 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppuVar6 + -0x2a8) = auVar44._8_8_;
  *(undefined8 *)((long)ppuVar6 + -0x2a0) = uVar41;
  *(long **)((long)ppuVar6 + -0x298) = plVar13;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppuVar6 + -0x2c0) = 0;
  lVar25 = func_0x033c5be8(auVar45._0_8_,auVar45._8_8_);
  lVar34 = _DAT_05a27d90;
  if (lVar25 == 0) {
    uVar41 = 0;
    *(undefined8 *)((long)ppuVar6 + -0x2c0) = 0;
  }
  else {
    uVar41 = *(undefined8 *)(lVar25 + 0x10);
  }
  *(undefined8 *)((long)ppuVar6 + -0x2c0) = uVar41;
  lVar26 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar2 = *(ushort *)(lVar26 + 0x135);
  lVar25 = lVar26;
  if ((uVar2 & 1) == 0) {
    lVar26 = func_0x024d8f40(lVar26);
    uVar2 = *(ushort *)(*(long *)(lVar34 + 0x20) + 0x135);
    lVar25 = *(long *)(lVar34 + 0x20);
  }
  uVar9 = *(undefined4 *)(**(long **)(lVar26 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar25 = func_0x024d8f40(lVar25);
  }
  uVar41 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x2b4),uVar41,uVar9);
  return (ulong)*(uint *)((long)ppuVar6 + -0x2b4);
}


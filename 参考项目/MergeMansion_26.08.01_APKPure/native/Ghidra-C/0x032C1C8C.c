/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void TryToSellItemFromBoard(GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.Items.MergeItem itemToSell, GameLogic.Player.Board.Coordinate sellCoordinate, GameLogic.Player.PlayerModel player, GameLogic.Config.Types.MetacoreTime currentTime, CurrencySource currencySource, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs, System.Boolean checkTagRestriction)
 * Ghidra function entry: 033c1c8c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03781db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x037828c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03783240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03783698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0378384c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0378369c) */
/* WARNING: Removing unreachable block (ram,0x037828c8) */
/* WARNING: Removing unreachable block (ram,0x03782904) */
/* WARNING: Removing unreachable block (ram,0x0378292c) */
/* WARNING: Removing unreachable block (ram,0x03782934) */
/* WARNING: Removing unreachable block (ram,0x03782964) */
/* WARNING: Removing unreachable block (ram,0x03782940) */
/* WARNING: Removing unreachable block (ram,0x0378294c) */
/* WARNING: Removing unreachable block (ram,0x03782974) */
/* WARNING: Removing unreachable block (ram,0x03781db4) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_033c1c8c(long param_1,long param_2,long *******param_3,undefined *param_4,
                   undefined *param_5,long *******param_6,long *******param_7,long *******param_8)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  ulong uVar26;
  undefined8 uVar27;
  long *******ppppppplVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  undefined8 uVar34;
  uint uVar23;
  long *plVar35;
  long **pplVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int iVar24;
  undefined8 *puVar39;
  long *******ppppppplVar40;
  char *pcVar41;
  int iVar25;
  undefined8 *puVar42;
  long ******extraout_x1;
  long *******extraout_x1_00;
  long *****extraout_x1_01;
  long *******ppppppplVar44;
  long *******ppppppplVar45;
  undefined *puVar46;
  long *******ppppppplVar47;
  undefined *puVar48;
  long *******ppppppplVar49;
  long *******ppppppplVar50;
  long *******ppppppplVar51;
  long *******ppppppplVar52;
  long ******pppppplVar53;
  long ****pppplVar54;
  long ***ppplVar55;
  long lVar56;
  long ******pppppplVar57;
  long ****pppplVar58;
  ulong uVar59;
  ulong uVar60;
  int *piVar61;
  long *******ppppppplVar62;
  long *******ppppppplVar63;
  undefined *puVar64;
  long *****ppppplVar65;
  long ******pppppplVar66;
  undefined *puVar67;
  long *****ppppplVar68;
  undefined *puVar69;
  long lVar70;
  long unaff_x26;
  long *******ppppppplVar71;
  uint uVar72;
  long *******ppppppplVar73;
  long *****unaff_x29;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [12];
  undefined1 auVar93 [16];
  undefined8 auStack_840 [2];
  undefined1 auStack_830 [80];
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [80];
  long *****ppppplStack_740;
  long *plStack_738;
  long ******pppppplStack_730;
  long ******pppppplStack_728;
  long lStack_720;
  long *plStack_718;
  undefined *puStack_710;
  long *******ppppppplStack_708;
  long *******ppppppplStack_700;
  long *******ppppppplStack_6f8;
  undefined1 auStack_6f0 [16];
  undefined8 auStack_6e0 [2];
  long ******pppppplStack_6d0;
  long *******ppppppplStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  long *******ppppppplStack_698;
  long *******ppppppplStack_690;
  long *******ppppppplStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  undefined8 uStack_668;
  long lStack_660;
  long *******ppppppplStack_658;
  ulong uStack_650;
  long *******ppppppplStack_648;
  long *******ppppppplStack_640;
  long *plStack_638;
  undefined8 auStack_630 [2];
  undefined1 auStack_620 [64];
  long *****ppppplStack_5e0;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  long *******ppppppplStack_5c0;
  long ******pppppplStack_5b8;
  long *plStack_5b0;
  long *******ppppppplStack_5a8;
  long *******ppppppplStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  long *******ppppppplStack_588;
  undefined8 uStack_580;
  long *******ppppppplStack_578;
  long *******ppppppplStack_570;
  undefined *puStack_568;
  long *******ppppppplStack_560;
  long ******pppppplStack_558;
  long *plStack_550;
  undefined *puStack_548;
  long *******ppppppplStack_540;
  long *plStack_538;
  long *******ppppppplStack_530;
  long *******ppppppplStack_528;
  long *plStack_520;
  long *******ppppppplStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  long *******ppppppplStack_4f0;
  long *******ppppppplStack_4e8;
  long *plStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined *puStack_4d0;
  long *plStack_4c8;
  long *******ppppppplStack_4c0;
  long *******ppppppplStack_4b8;
  long *******ppppppplStack_4b0;
  long *******ppppppplStack_4a8;
  long *******ppppppplStack_4a0;
  long **pplStack_498;
  long ******pppppplStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined *puStack_470;
  long *******ppppppplStack_468;
  undefined1 auStack_460 [16];
  long *******ppppppplStack_450;
  long *******ppppppplStack_448;
  undefined8 uStack_440;
  uint5 uStack_438;
  undefined3 uStack_433;
  undefined8 uStack_430;
  long *******ppppppplStack_428;
  long *******ppppppplStack_420;
  undefined1 auStack_418 [16];
  long *******ppppppplStack_408;
  long *******ppppppplStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  long *****ppppplStack_3e0;
  long ****pppplStack_3d8;
  long *******ppppppplStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined8 uStack_3b0;
  long *******ppppppplStack_3a8;
  undefined1 auStack_3a0 [8];
  undefined8 uStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  long *******ppppppplStack_368;
  long *******ppppppplStack_360;
  long *****ppppplStack_358;
  long *******ppppppplStack_350;
  long ******pppppplStack_348;
  long *******ppppppplStack_340;
  long *******ppppppplStack_338;
  long *******ppppppplStack_330;
  long *******ppppppplStack_328;
  undefined8 uStack_320;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  undefined *puStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  long *******ppppppplStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  long *******ppppppplStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [48];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *******ppppppplStack_228;
  undefined *puStack_220;
  long lStack_218;
  long *******ppppppplStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  long *******ppppppplStack_1d8;
  undefined1 auStack_1d0 [16];
  long *****ppppplStack_1c0;
  undefined8 uStack_1b8;
  long *******ppppppplStack_1b0;
  undefined *puStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long *******ppppppplStack_188;
  long *plStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *plStack_160;
  undefined *puStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long lStack_140;
  long *******ppppppplStack_138;
  undefined *puStack_130;
  long *******ppppppplStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  long *******ppppppplStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long *******ppppppplStack_98;
  undefined8 uStack_90;
  long *******ppppppplStack_80;
  undefined *puStack_78;
  long ******pppppplStack_70;
  undefined4 uStack_64;
  long *plVar43;
  
  lVar70 = 0x5e2c000;
  ppppppplVar73 = (long *******)((ulong)param_8 & 0xffffffff);
  puVar69 = (undefined *)((ulong)param_6 & 0xffffffff);
  ppppppplVar44 = param_3;
  puVar46 = param_4;
  puVar48 = param_5;
  ppppppplVar51 = param_7;
  ppppppplVar63 = param_8;
  if ((bRam0000000005e2c3c9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_05a34898);
    bRam0000000005e2c3c9 = 1;
  }
  if ((param_4 != (undefined *)0x0) && (param_1 != 0)) {
    lVar70 = *(long *)(param_4 + 0x220);
    unaff_x26 = *(long *)(param_4 + 0x218);
    param_6 = (long *******)(ulong)((uint)param_8 & 1);
    ppppppplVar51 = (long *******)0x0;
    puVar48 = param_4;
    uVar26 = func_0x03780a5c(param_1,param_3,param_5,param_7);
    if ((uVar26 & 1) == 0) {
LAB_033c1e24:
      plVar29 = (long *)func_0x033bfe1c(param_4,param_7,param_1,lVar70);
      return plVar29;
    }
    param_5 = *(undefined **)(param_1 + 0x30);
    uVar27 = func_0x03659ee0(param_4,0);
    uStack_64 = func_0x03788520(param_1,param_2,uVar27,0);
    puStack_78 = (undefined *)0x0;
    ppppppplVar44 = &pppppplStack_70;
    ppppppplStack_80 = (long *******)0x0;
    puVar46 = _DAT_05a34898;
    pppppplStack_70 = extraout_x1;
    func_0x02953678(&ppppppplStack_80,&uStack_64);
    if (param_2 != 0) {
      uVar26 = func_0x036d392c(param_2,0);
      ppppppplVar73 = (long *******)(uVar26 & 0xffffffff);
      uVar27 = func_0x03659ee0(param_4,0);
      unaff_x29 = (long *****)func_0x036d62d4(param_2,uVar27,0);
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059d89a0);
      }
      ppppppplVar44 = (long *******)0x0;
      puVar46 = (undefined *)0x0;
      puVar48 = (undefined *)0x0;
      ppppppplVar28 = (long *******)func_0x03627590(param_5,unaff_x29);
      if (unaff_x26 != 0) {
        ppppppplVar51 = (long *******)0x0;
        uStack_90 = 0;
        ppppppplVar44 = ppppppplStack_80;
        puVar46 = puStack_78;
        puVar48 = puVar69;
        param_6 = ppppppplVar73;
        func_0x03683960(unaff_x26,param_4);
        ppppppplVar63 = ppppppplVar28;
        if (lVar70 != 0) {
          func_0x0387f2c8(lVar70,param_5,param_2,param_3,0);
          goto LAB_033c1e24;
        }
      }
    }
  }
  auVar74 = func_0x0249fb90();
  lVar31 = auVar74._8_8_;
  ppppppplVar40 = auVar74._0_8_;
  uStack_f0 = 0x33c1e5c;
  ppppppplVar28 = param_6;
  ppppppplVar52 = ppppppplVar51;
  ppppppplStack_e0 = ppppppplVar73;
  puStack_d8 = param_5;
  lStack_d0 = unaff_x26;
  lStack_c8 = lVar70;
  puStack_c0 = puVar69;
  lStack_b8 = param_2;
  ppppppplStack_b0 = param_3;
  lStack_a8 = param_1;
  puStack_a0 = param_4;
  ppppppplStack_98 = param_7;
  if ((bRam0000000005e2c3ca & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a34898);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3ca = 1;
  }
  ppppppplVar49 = (long *******)0x0;
  plVar29 = (long *)func_0x036f6778(puVar46,lVar31,param_6,ppppppplVar40);
  puVar69 = (undefined *)0x0;
  ppppppplVar71 = ppppppplVar44;
  plVar30 = (long *)func_0x036f58fc(puVar46,ppppppplVar40);
  if (((ulong)plVar30 & 1) == 0) {
    return plVar30;
  }
  if (ppppppplVar40 != (long *******)0x0) {
    pppppplVar53 = *ppppppplVar40;
    uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar26 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059e0220) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 4) * 2 + 0x27;
          goto LAB_033c1f80;
        }
        uVar26 = uVar26 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar26 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar40,_DAT_059e0220,4);
LAB_033c1f80:
    lVar31 = (*(code *)*pppppplVar53)(ppppppplVar40,pppppplVar53[1]);
    ppppppplVar73 = (long *******)((long)plVar29 >> 0x20);
    param_5 = &DAT_05a34898;
    ppppppplVar71 = (long *******)&ppppppplStack_f8;
    uStack_108 = 0;
    ppppppplStack_100 = (long *******)0x0;
    puVar69 = _DAT_05a34898;
    ppppppplStack_f8 = ppppppplVar73;
    uStack_e4 = (int)plVar29;
    func_0x02953678(&uStack_108,&uStack_e4);
    if (lVar31 != 0) {
      puVar69 = (undefined *)0x0;
      ppppppplVar71 = ppppppplStack_100;
      plVar30 = (long *)func_0x03684c6c(lVar31,uStack_108);
      if (((ulong)plVar30 & 1) == 0) {
        return plVar30;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar26 = func_0x0364fbdc(ppppppplVar40,0);
      if (ppppppplVar44 != (long *******)0x0) {
        ppppppplVar49 = (long *******)(uVar26 & 0xffffffff);
        ppppppplVar52 = (long *******)0x0;
        ppppppplVar28 = ppppppplVar40;
        plVar30 = (long *)func_0x03780be8(ppppppplVar44,puVar48,param_6,ppppppplVar51);
        if (((ulong)plVar30 & 1) == 0) {
          return plVar30;
        }
        ppppppplVar71 = (long *******)&ppppppplStack_f8;
        uStack_108 = 0;
        ppppppplStack_100 = (long *******)0x0;
        puVar69 = _DAT_05a34898;
        ppppppplStack_f8 = ppppppplVar73;
        uStack_e4 = (int)plVar29;
        func_0x02953678(&uStack_108,&uStack_e4);
        if (puVar46 != (undefined *)0x0) {
          uVar22 = func_0x036d392c(puVar46,0);
          pppppplVar53 = *ppppppplVar40;
          pppppplVar66 = ppppppplVar44[6];
          uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
          if (uVar26 != 0) {
            ppppplVar65 = pppppplVar53[0x16] + 1;
            do {
              if (ppppplVar65[-1] == _DAT_059df8e8) {
                pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
                goto LAB_033c20b0;
              }
              uVar26 = uVar26 - 1;
              ppppplVar65 = ppppplVar65 + 2;
            } while (uVar26 != 0);
          }
          pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar40,_DAT_059df8e8,5);
LAB_033c20b0:
          uVar27 = (*(code *)*pppppplVar53)(ppppppplVar40,pppppplVar53[1]);
          uVar27 = func_0x036d62d4(puVar46,uVar27,0);
          if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059d89a0);
          }
          uVar27 = func_0x03627590(pppppplVar66,uVar27,0,0,0);
          uStack_120 = _DAT_05a93bf8;
          uStack_118 = 0;
          plVar29 = (long *)func_0x03685074(lVar31,ppppppplVar40,uStack_108,ppppppplStack_100,8,
                                            uVar22,0,uVar27);
          return plVar29;
        }
      }
    }
  }
  plVar30 = (long *)func_0x0249fb90();
  plStack_160 = (long *)0x33c2158;
  ppppppplVar50 = ppppppplVar49;
  ppppppplVar45 = ppppppplVar52;
  puStack_158 = puVar48;
  ppppppplStack_150 = param_6;
  ppppppplStack_148 = ppppppplVar51;
  lStack_140 = lVar31;
  ppppppplStack_138 = ppppppplVar44;
  puStack_130 = puVar46;
  ppppppplStack_128 = ppppppplVar40;
  if ((bRam0000000005e2c3cb & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3cb = 1;
  }
  ppppppplVar51 = (long *******)0x0;
  ppppppplVar44 = ppppppplVar71;
  plVar32 = (long *)func_0x036f58fc(puVar69,plVar30);
  if (((ulong)plVar32 & 1) == 0) {
    return plVar32;
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar26 = func_0x0364fbdc(plVar30,0);
  ppppppplVar40 = ppppppplStack_150;
  if (ppppppplVar71 == (long *******)0x0) {
    auVar75 = func_0x0249fb90();
    auVar80._8_8_ = 0x5e2c000;
    auVar80._0_8_ = ppppppplVar44;
    auVar91._8_8_ = 0x5e2c000;
    auVar91._0_8_ = ppppppplVar44;
    auVar74._8_8_ = 0x5e2c000;
    auVar74._0_8_ = ppppppplVar44;
    lVar56 = auVar75._8_8_;
    lVar31 = auVar75._0_8_;
    uStack_1b8 = 0x33c2228;
    uStack_198 = 0x5e2c000;
    lVar70 = 0x5e2c000;
    ppppplVar65 = (long *****)&DAT_059efcf8;
    ppppppplVar40 = ppppppplVar44;
    ppppppplVar47 = ppppppplVar51;
    ppppplStack_1c0 = unaff_x29;
    ppppppplStack_1b0 = ppppppplVar73;
    puStack_1a8 = param_5;
    plStack_1a0 = plVar29;
    puStack_190 = puVar69;
    ppppppplStack_188 = ppppppplVar71;
    plStack_180 = plVar30;
    ppppppplStack_178 = ppppppplVar49;
    ppppppplStack_170 = ppppppplVar52;
    ppppppplStack_168 = ppppppplVar63;
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
    ppppppplStack_228 = (long *******)0x0;
    puVar46 = (undefined *)func_0x0249fb80(_DAT_059efcf8);
    func_0x0378ae54(puVar46,0);
    if ((lVar31 != 0) && (auVar74 = auVar91, *(long *)(lVar31 + 0x220) != 0)) {
      ppppppplStack_328 = *(long ********)(lVar31 + 0x218);
      func_0x0387f3b8(&puStack_220,*(long *)(lVar31 + 0x220),0);
      lVar33 = lStack_218;
      auVar74 = auVar80;
      if (puVar46 != (undefined *)0x0) {
        plVar29 = (long *)(puVar46 + 0x10);
        *plVar29 = (long)puStack_220;
        plVar30 = (long *)func_0x0249f888(plVar29);
        if (lVar56 == 0) {
          return plVar30;
        }
        ppppplVar65 = (long *****)&DAT_05a30640;
        uVar27 = *(undefined8 *)(lVar56 + 0x30);
        lVar70 = *plVar29;
        if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar30 = (long *)func_0x02903704(uVar27,lVar70,_DAT_05a30640);
        if (((ulong)plVar30 & 1) == 0) {
          return plVar30;
        }
        uVar26 = func_0x037885f4(lVar56,ppppppplStack_210,0);
        ppppppplVar63 = ppppppplStack_210;
        if ((uVar26 & 1) == 0) {
          ppppppplVar50 = (long *******)0x0;
          uVar26 = func_0x037c7a80(*(undefined8 *)(lVar56 + 0x90),ppppppplStack_210,lVar56,
                                   &ppppppplStack_228);
          ppppppplVar63 = ppppppplStack_228;
          if ((uVar26 & 1) == 0) {
            ppppppplVar63 = ppppppplStack_210;
          }
        }
        auVar5._8_8_ = ppppppplVar63;
        auVar5._0_8_ = ppppppplVar44;
        auVar75._8_8_ = ppppppplVar63;
        auVar75._0_8_ = ppppppplVar44;
        auVar74._8_8_ = ppppppplVar63;
        ppppppplVar73 = (long *******)func_0x03633aec(lVar31,0);
        unaff_x29 = (long *****)func_0x0249fb80(_DAT_059c6530);
        func_0x02a9aa34(unaff_x29,puVar46,_DAT_05a69f48,0);
        ppppppplVar47 = _DAT_05a42428;
        func_0x026e5b0c(ppppppplVar73,unaff_x29,&puStack_220);
        puVar46 = puStack_220;
        uVar26 = func_0x037885f4(lVar56,ppppppplVar63,0);
        lVar70 = lVar33;
        if ((uVar26 & 1) == 0) {
          ppppppplVar73 = (long *******)func_0x0376e450(lVar56,ppppppplVar63,0);
          ppppppplVar40 = (long *******)func_0x03659ee0(lVar31,0);
          if (ppppppplStack_328 != (long *******)0x0) {
            func_0x03687a50(ppppppplStack_328,ppppppplVar73,ppppppplVar40,*plVar29,puVar46,0);
            func_0x037789bc(lVar56,lVar31,ppppppplVar63,ppppppplVar44,1,0);
            ppppppplVar28 = (long *******)0x0;
            ppppppplVar45 = (long *******)0x0;
            ppppppplStack_340 = (long *******)0x0;
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            ppppppplVar40 = ppppppplVar63;
            ppppppplVar47 = ppppppplVar63;
            ppppppplVar50 = ppppppplVar44;
            func_0x034ba874(&uStack_280,10);
            pppplVar58 = _DAT_059c9978;
            auVar74 = auVar75;
            if (ppppppplVar51 != (long *******)0x0) {
              func_0x054ed0d0(&ppppppplStack_2d0,&uStack_280,0x50);
              pppppplVar53 = *ppppppplVar51;
              uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
              if (uVar26 != 0) {
                ppppplVar65 = pppppplVar53[0x16] + 1;
                do {
                  if (ppppplVar65[-1] == pppplVar58) {
                    pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
                    goto LAB_033c253c;
                  }
                  uVar26 = uVar26 - 1;
                  ppppplVar65 = ppppplVar65 + 2;
                } while (uVar26 != 0);
              }
              pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,pppplVar58,2);
LAB_033c253c:
              ppppplVar65 = *pppppplVar53;
              func_0x054ed0d0(&puStack_220,&ppppppplStack_2d0,0x50);
              (*(code *)ppppplVar65)(ppppppplVar51,&puStack_220,pppppplVar53[1]);
              goto LAB_033c2560;
            }
          }
        }
        else {
LAB_033c2560:
          plVar29 = (long *)func_0x0249fb80(_DAT_059de230);
          func_0x034a1470(plVar29,lVar31,0);
          func_0x03785f38(lVar56,ppppppplVar63,lVar33,ppppppplVar44,plVar29,lVar31,0);
          ppppppplVar28 = (long *******)0x0;
          ppppppplVar45 = (long *******)0x0;
          ppppppplStack_340 = (long *******)0x0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          ppppppplVar40 = ppppppplVar63;
          ppppppplVar47 = ppppppplVar63;
          func_0x034ba874(&uStack_280,9);
          pppplVar58 = _DAT_059c9978;
          ppppppplVar50 = ppppppplVar44;
          auVar74 = auVar5;
          if (ppppppplVar51 != (long *******)0x0) {
            func_0x054ed0d0(&uStack_320,&uStack_280,0x50);
            pppppplVar53 = *ppppppplVar51;
            uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
            if (uVar26 != 0) {
              ppppplVar65 = pppppplVar53[0x16] + 1;
              do {
                if (ppppplVar65[-1] == pppplVar58) {
                  pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
                  ppppppplVar50 = ppppppplVar44;
                  goto LAB_033c264c;
                }
                uVar26 = uVar26 - 1;
                ppppplVar65 = ppppplVar65 + 2;
              } while (uVar26 != 0);
            }
            pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,pppplVar58,2);
            ppppppplVar50 = ppppppplVar44;
LAB_033c264c:
            auVar74._0_8_ = pppppplVar53;
            ppppplVar65 = *pppppplVar53;
            func_0x054ed0d0(&puStack_220,&uStack_320,0x50);
            (*(code *)ppppplVar65)(ppppppplVar51,&puStack_220,pppppplVar53[1]);
            ppppppplVar40 = (long *******)func_0x03659ee0(lVar31,0);
            ppppppplVar47 = (long *******)0x0;
            auVar91 = func_0x03788520(lVar56,lVar33);
            if (lVar33 != 0) {
              uVar26 = func_0x036d392c(lVar33,0);
              ppppppplVar51 = (long *******)(uVar26 & 0xffffffff);
              uVar27 = func_0x03659ee0(lVar31,0);
              lVar70 = func_0x036d62d4(lVar33,uVar27,0);
              puStack_220 = (undefined *)0x0;
              lStack_218 = 0;
              auStack_1d0._12_4_ = auVar91._0_4_;
              auStack_1d0._0_8_ = auVar91._8_8_;
              func_0x02953678(&puStack_220,auStack_1d0 + 0xc,auStack_1d0,_DAT_05a34898);
              lVar56 = *(long *)(lVar56 + 0x30);
              if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              ppppppplVar40 = (long *******)0x0;
              ppppppplVar47 = (long *******)0x0;
              ppppppplVar50 = (long *******)0x0;
              uVar27 = func_0x03627590(lVar56,lVar70);
              auVar74 = auVar91;
              if (ppppppplStack_328 != (long *******)0x0) {
                ppppppplStack_340 = (long *******)_DAT_05a93bf8;
                ppppppplStack_338 = (long *******)0x0;
                plVar29 = (long *)func_0x03685074(ppppppplStack_328,lVar31,puStack_220,lStack_218,
                                                  0xb,ppppppplVar51,0,uVar27);
                return plVar29;
              }
            }
          }
        }
      }
    }
    auVar91 = func_0x0249fb90();
    ppppppplStack_380 = (long *******)0x33c2780;
    ppppppplStack_368 = (long *******)lVar70;
    ppppppplStack_360 = ppppppplVar51;
    ppppplStack_358 = ppppplVar65;
    ppppppplStack_350 = (long *******)lVar56;
    pppppplStack_348 = (long ******)lVar31;
    if ((bRam0000000005e2c3cd & 1) == 0) {
      ppppppplStack_378 = (long *******)auVar74._8_8_;
      ppppppplStack_370 = (long *******)auVar74._0_8_;
      func_0x0249f8e4(&DAT_05a43c28);
      func_0x0249f8e4(&DAT_059d7400);
      auVar74._8_8_ = ppppppplStack_378;
      auVar74._0_8_ = ppppppplStack_370;
      bRam0000000005e2c3cd = 1;
    }
    ppppppplStack_378 = auVar74._8_8_;
    ppppppplStack_370 = auVar74._0_8_;
    ppppppplVar44 = (long *******)func_0x0249fa68(ppppppplVar47,_DAT_059d7400);
    if (ppppppplVar44 == (long *******)0x0) {
      ppppppplVar44 = (long *******)func_0x026ebbf4(ppppppplVar47,_DAT_05a43c28);
    }
    pppplStack_3d8 = (long ****)0x33c281c;
    auStack_3b8 = (undefined1  [8])&DAT_059d7400;
    ppppppplVar63 = ppppppplVar40;
    ppppppplVar52 = ppppppplVar44;
    ppppppplVar51 = ppppppplVar50;
    ppppplStack_3e0 = unaff_x29;
    ppppppplStack_3d0 = ppppppplVar73;
    uStack_3c8 = (long *)puVar46;
    plStack_3c0 = plVar29;
    uStack_3b0 = ppppppplVar47;
    ppppppplStack_3a8 = ppppppplVar44;
    ppppppplStack_390 = ppppppplVar40;
    ppppppplStack_388 = ppppppplVar50;
    _auStack_3a0 = auVar91;
    if ((bRam0000000005e2c3ce & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_05a29a88);
      func_0x0249f8e4(&DAT_059d4060);
      bRam0000000005e2c3ce = 1;
    }
    auStack_3f0 = (undefined1  [8])0x0;
    uStack_3e8 = (undefined *)0x0;
    ppppppplVar71 = (long *******)0x5e2c000;
    ppppppplVar49 = (long *******)&DAT_059d7400;
    auVar74 = ZEXT816(0);
    if (auVar91._8_8_ == 0) {
LAB_033c2a80:
      ppppppplVar47 = ppppppplVar71;
      ppppppplVar62 = ppppppplVar52;
      _auStack_3f0 = auVar74;
      func_0x0249fb90();
    }
    else {
      ppppppplVar63 = (long *******)0x0;
      ppppppplVar47 = (long *******)func_0x0376e450(auVar91._8_8_,ppppppplVar40);
      if (ppppppplVar47 == (long *******)0x0) {
        return (long *)0x0;
      }
      auVar74 = _auStack_3f0;
      if (ppppppplVar44 == (long *******)0x0) goto LAB_033c2a80;
      uVar23 = *(uint *)(ppppppplVar44 + 3);
      bVar1 = 0 < (int)uVar23;
      if ((int)uVar23 < 1) {
        return (long *)0x0;
      }
      ppppppplVar73 = (long *******)&DAT_059d4060;
      unaff_x29 = (long *****)&DAT_05a29a88;
      puVar46 = (undefined *)0x0;
      while( true ) {
        plVar29 = (long *)(ulong)bVar1;
        uVar72 = (uint)puVar46;
        ppppppplVar62 = ppppppplVar52;
        if (uVar23 <= uVar72) break;
        ppppppplVar62 = (long *******)ppppppplVar44[(long)(int)uVar72 + 4];
        ppppppplVar71 = ppppppplVar47;
        ppppppplVar49 = ppppppplVar62;
        auVar74 = _auStack_3f0;
        if (ppppppplVar62 == (long *******)0x0) goto LAB_033c2a80;
        pppppplVar53 = *ppppppplVar62;
        uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
        if (uVar26 != 0) {
          ppppplVar65 = pppppplVar53[0x16] + 1;
          do {
            if (ppppplVar65[-1] == _DAT_059defe8) {
              pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 0x28) * 2 + 0x27;
              goto LAB_033c29c0;
            }
            uVar26 = uVar26 - 1;
            ppppplVar65 = ppppplVar65 + 2;
          } while (uVar26 != 0);
        }
        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar62,_DAT_059defe8,0x28);
LAB_033c29c0:
        ppppppplVar51 = (long *******)pppppplVar53[1];
        ppppppplVar63 = ppppppplVar47;
        ppppppplVar52 = ppppppplVar50;
        auVar74 = (*(code *)*pppppplVar53)(ppppppplVar62,auVar91._0_8_);
        _auStack_3f0 = auVar74;
        if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar70 = *(long *)(_DAT_05a29a88 + 0x20);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        pcVar41 = (char *)func_0x0249f90c(auStack_3f0,
                                          *(long *)(**(long **)(lVar70 + 0xc0) + 0x80) + 0x20);
        if (*pcVar41 != '\0') {
          uVar27 = 0x33c2a40;
          ppppppplVar63 = ppppppplVar40;
          ppppppplVar51 = ppppppplVar50;
          auVar74 = auVar91;
          goto SUB_033c2a88;
        }
        uVar23 = *(uint *)(ppppppplVar44 + 3);
        uVar72 = uVar72 + 1;
        puVar46 = (undefined *)(ulong)uVar72;
        bVar1 = (int)uVar72 < (int)uVar23;
        if ((int)uVar23 <= (int)uVar72) {
          return (long *)0x0;
        }
      }
    }
    uVar27 = 0x33c2a88;
    auVar74 = func_0x0249fb98();
SUB_033c2a88:
    plVar30 = auVar74._8_8_;
    ppppppplVar52 = auVar74._0_8_;
    puVar48 = (undefined *)0x5e2c000;
    uStack_430 = uVar27;
    ppppppplStack_428 = ppppppplVar49;
    ppppppplStack_420 = ppppppplVar47;
    ppppppplStack_408 = ppppppplVar40;
    ppppppplStack_400 = ppppppplVar44;
    uStack_3f8 = ppppppplVar50;
    auStack_418 = auVar91;
    if ((bRam0000000005e2c3d0 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a3c7c0);
      func_0x0249f8e4(&DAT_059defe8);
      bRam0000000005e2c3d0 = 1;
    }
    uStack_438 = (uint5)(uint)uStack_438;
    ppppppplVar49 = (long *******)func_0x026bf824(ppppppplVar62,_DAT_05a3c7c0);
    pppppplStack_490 = (long ******)0x33c2b0c;
    plStack_478 = (long *)0x5e2c000;
    puStack_470 = &DAT_05a3c7c0;
    puVar69 = (undefined *)0x5e2c000;
    ppppppplVar40 = ppppppplVar63;
    ppppppplVar44 = ppppppplVar49;
    ppppppplVar71 = ppppppplVar51;
    plStack_480 = plVar29;
    ppppppplStack_468 = ppppppplVar62;
    ppppppplStack_450 = ppppppplVar63;
    ppppppplStack_448 = ppppppplVar51;
    auStack_460 = auVar74;
    if ((bRam0000000005e2c3cf & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca768);
      func_0x0249f8e4(&DAT_059cbac8);
      func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e2c3cf = 1;
    }
    plStack_488 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      ppppppplVar40 = (long *******)0x0;
      ppppppplVar50 = (long *******)func_0x0376e450(plVar30,ppppppplVar63);
      if (ppppppplVar50 == (long *******)0x0) {
        ppppppplVar49 = (long *******)0x0;
        goto LAB_033c2f48;
      }
      if (ppppppplVar49 != (long *******)0x0) {
        pppppplVar53 = *ppppppplVar49;
        uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
        if (uVar26 != 0) {
          ppppplVar65 = pppppplVar53[0x16] + 1;
          do {
            if (ppppplVar65[-1] == _DAT_059ca768) {
              pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar65 * 2 + 0x27;
              goto LAB_033c2ce4;
            }
            uVar26 = uVar26 - 1;
            ppppplVar65 = ppppplVar65 + 2;
          } while (uVar26 != 0);
        }
        ppppppplVar40 = (long *******)0x0;
        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar49);
LAB_033c2ce4:
        plStack_488 = (long *)(*(code *)*pppppplVar53)(ppppppplVar49,pppppplVar53[1]);
        pplStack_498 = &plStack_488;
        ppppppplStack_4a0 = (long *******)0x0;
        if (plStack_488 != (long *)0x0) {
          puVar69 = &DAT_059df6e0;
          puVar48 = &DAT_059cbac8;
          plVar29 = (long *)&DAT_059defe8;
          do {
            plVar32 = plStack_488;
            lVar70 = *plStack_488;
            uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
              do {
                if (*(long *****)(piVar61 + -2) == _DAT_059df6e0) {
                  puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c2d68;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            ppppppplVar40 = (long *******)0x0;
            puVar39 = (undefined8 *)func_0x024d927c(plStack_488);
LAB_033c2d68:
            uVar26 = (*(code *)*puVar39)(plVar32,puVar39[1]);
            plVar32 = plStack_488;
            ppppppplVar49 = (long *******)(uVar26 & 0xffffffff);
            if ((uVar26 & 1) == 0) goto LAB_033c2ed0;
            if (plStack_488 == (long *)0x0) {
              func_0x0249fb90();
              plVar30 = (long *)0x0;
LAB_033c2f74:
              func_0x0249fb90();
              ppppppplVar63 = ppppppplVar50;
              goto LAB_033c2f78;
            }
            lVar70 = *plStack_488;
            uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059cbac8) {
                  puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c2dd0;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(plStack_488,_DAT_059cbac8,0);
LAB_033c2dd0:
            plVar30 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
            ppppppplVar44 = (long *******)0x0;
            ppppppplVar40 = ppppppplVar51;
            uVar26 = func_0x036d05a4(ppppppplVar50,ppppppplVar52);
            if ((uVar26 & 1) != 0) {
              if (plVar30 == (long *)0x0) goto LAB_033c2f74;
              lVar70 = *plVar30;
              uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                do {
                  if (*(long *****)(piVar61 + -2) == _DAT_059defe8) {
                    puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x27) * 0x10 + 0x138);
                    goto LAB_033c2e4c;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059defe8,0x27);
LAB_033c2e4c:
              ppppppplVar44 = (long *******)puVar39[1];
              ppppppplVar40 = ppppppplVar52;
              uVar26 = (*(code *)*puVar39)(plVar30,ppppppplVar50);
              if ((uVar26 & 1) != 0) {
                lVar70 = *plVar30;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long *****)(piVar61 + -2) == _DAT_059defe8) {
                      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 3) * 0x10 + 0x138);
                      goto LAB_033c2eb4;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                ppppppplVar40 = (long *******)0x3;
                puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c2eb4:
                uVar26 = (*(code *)*puVar39)(plVar30,puVar39[1]);
                if ((uVar26 & 1) == 0) goto LAB_033c2ed8;
              }
            }
          } while (plStack_488 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c2ed0:
        ppppppplVar49 = (long *******)0x0;
LAB_033c2ed8:
        ppppppplVar51 = (long *******)0x0;
        pplVar36 = &plStack_488;
        goto LAB_033c2edc;
      }
    }
LAB_033c2f78:
    func_0x0249fb90();
    ppppppplVar50 = ppppppplVar63;
    do {
      auVar6._8_8_ = ppppppplVar49;
      auVar6._0_8_ = ppppppplVar50;
      auVar92 = func_0x0249fb88(ppppppplVar51);
      ppppppplStack_4a8 = auVar92._0_8_;
      if (auVar92._8_4_ != 1) {
        func_0x022bd79c(&ppppppplStack_4a0);
        func_0x0258f7ac(ppppppplStack_4a8);
        auVar74 = func_0x022bd790();
        lVar70 = auVar74._8_8_;
        uVar27 = auVar74._0_8_;
        plStack_4e0 = (long *)0x33c2fe4;
        auStack_4d8[4] = 0;
        ppppppplVar63 = ppppppplVar40;
        ppppppplVar47 = ppppppplVar44;
        ppppppplVar51 = ppppppplVar71;
        ppppppplVar62 = ppppppplStack_4a8;
        puStack_4d0 = puVar69;
        plStack_4c8 = plVar30;
        ppppppplStack_4c0 = ppppppplVar49;
        ppppppplStack_4b8 = ppppppplVar50;
        ppppppplStack_4b0 = ppppppplVar52;
        if (lVar70 != 0) {
          puVar69 = (undefined *)func_0x0376e450(lVar70,ppppppplVar40,0);
          if (puVar69 == (undefined *)0x0) {
            return (long *)0x0;
          }
          ppppppplVar47 = (long *******)0x0;
          ppppppplVar63 = ppppppplVar71;
          uVar26 = func_0x036d05a4(puVar69,uVar27);
          if ((uVar26 & 1) == 0) {
            return (long *)0x0;
          }
          plVar30 = (long *)0x0;
          ppppppplVar62 = ppppppplVar71;
          ppppppplVar52 = ppppppplVar40;
          auVar6 = auVar74;
          if (ppppppplVar44 != (long *******)0x0) {
            uVar26 = func_0x0362cd70(ppppppplVar44,0);
            if ((uVar26 & 1) != 0) {
              return (long *)0x0;
            }
            func_0x0362d1c8(ppppppplVar44,uVar27,puVar69,ppppppplVar71,auStack_4d8 + 4,0);
            func_0x037789bc(lVar70,uVar27,ppppppplVar40,ppppppplVar71,0,0);
            return (long *)0x1;
          }
        }
        auVar74 = func_0x0249fb90();
        plVar32 = auVar74._0_8_;
        uStack_510 = 0x33c30ac;
        plVar35 = (long *)(auVar74._8_8_ & 0xffffffff);
        ppppppplVar44 = ppppppplVar63;
        ppppppplStack_4f0 = ppppppplVar52;
        ppppppplStack_4e8 = ppppppplVar62;
        if ((bRam0000000005e2c3d1 & 1) == 0) {
          uStack_500 = auVar6._8_8_;
          puStack_4f8 = (undefined *)auVar6._0_8_;
          func_0x0249f8e4(&DAT_059db250);
          func_0x0249f8e4(&DAT_059defe8);
          auVar6._8_8_ = uStack_500;
          auVar6._0_8_ = puStack_4f8;
          bRam0000000005e2c3d1 = 1;
        }
        uStack_500 = auVar6._8_8_;
        puStack_4f8 = auVar6._0_8_;
        uStack_508 = 0;
        if (plVar32 != (long *)0x0) {
          lVar70 = *plVar32;
          uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
          if (uVar26 == 0) goto LAB_033c3130;
          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
          goto LAB_033c3118;
        }
        auVar76 = func_0x0249fb90();
        plVar43 = auVar76._8_8_;
        lVar70 = auVar76._0_8_;
        puStack_568 = (undefined *)0x33c31c0;
        ppppppplStack_530 = (long *******)0x5e2c000;
        uVar26 = (ulong)ppppppplVar45 & 0xffffffff;
        uVar60 = (ulong)ppppppplVar44 & 0xffffffff;
        auVar77._8_8_ = 0x5e2c000;
        auVar77._0_8_ = uVar60;
        ppppppplVar52 = ppppppplVar47;
        ppppppplVar40 = ppppppplVar51;
        ppppppplVar71 = ppppppplVar28;
        ppppppplStack_570 = (long *******)unaff_x29;
        ppppppplStack_560 = ppppppplVar73;
        pppppplStack_558 = (long ******)puVar46;
        plStack_550 = plVar29;
        puStack_548 = puVar48;
        ppppppplStack_540 = (long *******)puVar69;
        plStack_538 = plVar30;
        ppppppplStack_528 = (long *******)plVar32;
        plStack_520 = plVar35;
        ppppppplStack_518 = ppppppplVar63;
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
        ppppppplStack_578 = (long *******)0x0;
        if (plVar43 == (long *)0x0) goto LAB_033c36d4;
        lVar31 = *plVar43;
        puVar46 = &DAT_059defe8;
        uVar59 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar59 == 0) goto LAB_033c32b8;
        piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        goto LAB_033c32a0;
      }
      puVar39 = (undefined8 *)func_0x054ed080(ppppppplStack_4a8);
      ppppppplVar51 = (long *******)*puVar39;
      ppppppplStack_4a0 = ppppppplVar51;
      func_0x054ed090();
      ppppppplVar49 = (long *******)0x0;
      pplVar36 = pplStack_498;
LAB_033c2edc:
      ppppppplVar52 = (long *******)*pplVar36;
      if (ppppppplVar52 != (long *******)0x0) {
        pppppplVar53 = *ppppppplVar52;
        uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
        if (uVar26 != 0) {
          ppppplVar65 = pppppplVar53[0x16] + 1;
          do {
            if (ppppplVar65[-1] == _DAT_059df598) {
              pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar65 * 2 + 0x27;
              goto LAB_033c2f38;
            }
            uVar26 = uVar26 - 1;
            ppppplVar65 = ppppplVar65 + 2;
          } while (uVar26 != 0);
        }
        ppppppplVar40 = (long *******)0x0;
        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar52);
LAB_033c2f38:
        (*(code *)*pppppplVar53)(ppppppplVar52,pppppplVar53[1]);
      }
    } while (ppppppplVar51 != (long *******)0x0);
LAB_033c2f48:
    return (long *)(ulong)((uint)ppppppplVar49 & 1);
  }
  ppppppplVar50 = (long *******)(uVar26 & 0xffffffff);
  ppppppplStack_168 = (long *******)plStack_160;
  ppppppplVar44 = ppppppplVar52;
  ppppppplVar51 = ppppppplVar63;
  ppppppplVar28 = ppppppplVar50;
  ppppppplStack_170 = (long *******)unaff_x29;
  plStack_160 = plVar29;
  if ((bRam0000000005e2df98 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a27ee8);
    func_0x0249f8e4(&DAT_05a29c88);
    func_0x0249f8e4(&DAT_05a29c90);
    func_0x0249f8e4(&DAT_059d4170);
    bRam0000000005e2df98 = 1;
  }
  auStack_1d0._0_8_ = 0;
  auStack_1d0._8_8_ = 0;
  auStack_1e8._8_8_ = 0;
  ppppppplStack_1d8 = (long *******)0x0;
  auStack_1f8._8_8_ = 0;
  auStack_1e8._0_8_ = 0;
  auStack_208._8_8_ = 0;
  auStack_1f8._0_8_ = 0;
  auStack_208._0_8_ = 0;
  lVar31 = func_0x0376e450(ppppppplVar71,ppppppplVar49);
  lVar70 = 0x5e2d000;
  if (plVar30 != (long *)0x0) {
    lVar70 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *****)(piVar61 + -2) == _DAT_059e0220) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xc) * 0x10 + 0x138);
          goto LAB_0378149c;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0220,0xc);
LAB_0378149c:
    ppppppplVar40 = (long *******)(*(code *)*puVar39)(plVar30,puVar39[1]);
    if ((lVar31 == 0) ||
       (uVar26 = func_0x036f58fc(lVar31,plVar30,ppppppplVar71,0), (uVar26 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar70 = *plVar30;
    ppppppplVar71 = (long *******)&DAT_059df8e8;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
          goto LAB_03781528;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03781528:
    uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
    uVar26 = func_0x036edd98(lVar31,uVar27,0);
    if (((uVar26 & 1) == 0) || (uVar26 = func_0x036ee320(lVar31,plVar30,0), (uVar26 & 1) != 0)) {
LAB_037815f0:
      lVar70 = *plVar30;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
            goto LAB_03781640;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03781640:
      uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
      uVar26 = func_0x036edd98(lVar31,uVar27,0);
      if (((uVar26 & 1) == 0) || (uVar26 = func_0x036ee320(lVar31,plVar30,0), (uVar26 & 1) != 0)) {
        lVar70 = *plVar30;
        uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
          do {
            if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
              puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
              goto LAB_03781750;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03781750:
        uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
        uVar26 = func_0x036f619c(lVar31,uVar27,0);
        if ((uVar26 & 1) != 0) {
          lVar70 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
            do {
              if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
                puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
                goto LAB_037817c0;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_037817c0:
          uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
          uVar26 = func_0x036f66a8(lVar31,uVar27,0);
          if ((uVar26 & 1) == 0) {
            auStack_208 = func_0x036f56f8(lVar31,ppppppplVar40,0);
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            lVar70 = *(long *)(_DAT_05a29c90 + 0x20);
            if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
              lVar70 = func_0x024d8f40();
            }
            pcVar41 = (char *)func_0x0249f90c(auStack_208,
                                              *(long *)(**(long **)(lVar70 + 0xc0) + 0x80) + 0x20);
            if (*pcVar41 != '\0') {
              if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar27 = func_0x0352ece0(ppppppplVar52,0);
              goto LAB_03781874;
            }
          }
        }
      }
      else {
        auStack_1f8 = func_0x036f52d8(lVar31,ppppppplVar40,0);
        lVar70 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        pcVar41 = (char *)func_0x0249f90c(auStack_1f8,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar70 + 0xc0) + 8) + 0x80));
        if (*pcVar41 != '\0') {
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar27 = func_0x0352ece0(ppppppplVar52,0);
LAB_03781728:
          func_0x037812b8(plVar30,lVar31,uVar27,ppppppplVar50);
        }
      }
    }
    else {
      lVar70 = *plVar30;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
            goto LAB_037815ac;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_037815ac:
      uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
      uVar26 = func_0x036f619c(lVar31,uVar27,0);
      if ((uVar26 & 1) == 0) goto LAB_037815f0;
      uVar27 = func_0x022bffa8(5,_DAT_059df8e8,plVar30);
      uVar26 = func_0x036f66a8(lVar31,uVar27,0);
      if ((uVar26 & 1) != 0) goto LAB_037815f0;
      auStack_1d0 = func_0x036f52d8(lVar31,ppppppplVar40,0);
      auStack_1e8 = func_0x036f56f8(lVar31,ppppppplVar40,0);
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar26 = func_0x0288eda8(auStack_1e8,&ppppppplStack_1d8,_DAT_05a29c88);
      ppppppplVar52 = (long *******)(uVar26 & 0xffffffff);
      uVar60 = func_0x022bf4f8(auStack_1d0,_DAT_05a27ee0);
      if ((uVar60 & 1) != 0) {
        if ((uVar26 & 1) != 0) {
          func_0x02886844(auStack_1d0,&ppppplStack_1c0,_DAT_05a27ee8);
          ppppplVar65 = ppppplStack_1c0;
          ppppppplVar71 = ppppppplStack_1d8;
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar26 = func_0x042542f4(ppppplVar65,ppppppplVar71,0);
          if ((uVar26 & 1) == 0) goto LAB_03781ab4;
        }
        func_0x02886844(auStack_1d0,&ppppplStack_1c0,_DAT_05a27ee8);
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        ppppppplVar52 = (long *******)func_0x0425449c(ppppplStack_1c0,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar27 = func_0x0352ed34(ppppppplVar52,0);
        goto LAB_03781728;
      }
      if ((uVar26 & 1) != 0) {
LAB_03781ab4:
        ppppppplVar44 = ppppppplStack_1d8;
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        ppppppplVar52 = (long *******)func_0x0425449c(ppppppplVar44,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar27 = func_0x0352ed34(ppppppplVar52,0);
LAB_03781874:
        func_0x0378130c(plVar30,lVar31,uVar27,ppppppplVar50);
      }
    }
    uStack_2c0 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    ppppppplStack_228 = (long *******)0x0;
    uStack_230 = 0;
    lStack_218 = 0;
    puStack_220 = (undefined *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    ppppppplVar44 = ppppppplVar49;
    ppppppplVar51 = ppppppplVar49;
    ppppppplVar28 = ppppppplVar40;
    func_0x034ba874(&uStack_260,0x11);
    pppplVar58 = _DAT_059c9978;
    lVar70 = lVar31;
    if (ppppppplVar63 != (long *******)0x0) {
      func_0x054ed0d0(auStack_2b0,&uStack_260,0x50);
      pppppplVar53 = *ppppppplVar63;
      uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
      if (uVar26 != 0) {
        ppppplVar65 = pppppplVar53[0x16] + 1;
        do {
          if (ppppplVar65[-1] == pppplVar58) {
            pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
            goto LAB_03781934;
          }
          uVar26 = uVar26 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar26 != 0);
      }
      pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar63,pppplVar58,2);
LAB_03781934:
      ppppplVar65 = *pppppplVar53;
      func_0x054ed0d0(&ppppplStack_1c0,auStack_2b0,0x50);
      (*(code *)ppppplVar65)(ppppppplVar63,&ppppplStack_1c0,pppppplVar53[1]);
      return (long *)0x1;
    }
  }
  auVar85 = func_0x0249fb90();
  ppppplVar65 = auVar85._8_8_;
  uStack_320 = 0x3781b10;
  ppppppplVar62 = (long *******)((ulong)ppppppplVar28 & 0xffffffff);
  pppppplVar53 = (long ******)&DAT_059efeb0;
  ppppppplVar45 = ppppppplVar44;
  ppppppplVar47 = ppppppplVar51;
  ppppppplStack_310 = ppppppplVar73;
  puStack_308 = param_5;
  ppppppplStack_300 = ppppppplVar71;
  ppppppplStack_2f8 = ppppppplVar52;
  ppppppplStack_2f0 = ppppppplVar40;
  lStack_2e8 = lVar70;
  plStack_2e0 = plVar30;
  ppppppplStack_2d8 = ppppppplVar50;
  ppppppplStack_2d0 = ppppppplVar49;
  ppppppplStack_2c8 = ppppppplVar63;
  if ((bRam0000000005e2df99 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a44708);
    func_0x0249f8e4(&DAT_059c59a8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059c9f90);
    func_0x0249f8e4(&DAT_059cb2d8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_05a6a1d8);
    func_0x0249f8e4(&DAT_059efeb0);
    bRam0000000005e2df99 = 1;
  }
  ppppppplStack_318 = (long *******)0x0;
  pppppplVar66 = (long ******)func_0x0249fb80(_DAT_059efeb0);
  func_0x037c51f0(pppppplVar66,0);
  ppppppplVar63 = ppppppplVar44;
  if (pppppplVar66 == (long ******)0x0) {
LAB_03781e4c:
    func_0x0249fb90();
    ppppppplVar40 = ppppppplVar62;
    ppppppplVar52 = ppppppplVar51;
    while( true ) {
      ppppppplVar62 = ppppppplVar28;
      ppppppplVar44 = ppppppplVar45;
      auVar92 = func_0x0249fb88(ppppppplVar40);
      ppppppplStack_338 = auVar92._0_8_;
      if (auVar92._8_4_ != 1) break;
      puVar39 = (undefined8 *)func_0x054ed080(ppppppplStack_338);
      ppppppplVar40 = (long *******)*puVar39;
      ppppppplStack_330 = ppppppplVar40;
      plVar29 = (long *)func_0x054ed090();
      ppppppplVar45 = ppppppplVar44;
      ppppppplVar28 = ppppppplVar62;
      ppppppplVar63 = ppppppplStack_328;
      ppppppplVar51 = ppppppplVar52;
LAB_03781dc0:
      ppppppplVar63 = (long *******)*ppppppplVar63;
      if (ppppppplVar63 != (long *******)0x0) {
        pppppplVar57 = *ppppppplVar63;
        uVar26 = (ulong)*(ushort *)((long)pppppplVar57 + 0x12e);
        if (uVar26 != 0) {
          ppppplVar65 = pppppplVar57[0x16] + 1;
          do {
            if (ppppplVar65[-1] == (long ****)*auVar85._0_8_) {
              pppppplVar57 = pppppplVar57 + (long)*(int *)ppppplVar65 * 2 + 0x27;
              goto LAB_03781e14;
            }
            uVar26 = uVar26 - 1;
            ppppplVar65 = ppppplVar65 + 2;
          } while (uVar26 != 0);
        }
        ppppppplVar45 = (long *******)0x0;
        pppppplVar57 = (long ******)func_0x024d927c(ppppppplVar63);
LAB_03781e14:
        plVar29 = (long *)(*(code *)*pppppplVar57)(ppppppplVar63,pppppplVar57[1]);
      }
      ppppppplVar52 = ppppppplVar51;
      if (ppppppplVar40 == (long *******)0x0) {
        return plVar29;
      }
    }
    func_0x022bd79c(&ppppppplStack_330);
    func_0x0258f7ac(ppppppplStack_338);
    uVar27 = 0x3781ea8;
    func_0x022bd790();
    ppppplVar65 = extraout_x1_01;
  }
  else {
    ppppppplVar71 = (long *******)&DAT_059c59a8;
    param_5 = &DAT_05a6a1d8;
    ppppppplVar73 = (long *******)&DAT_05a44708;
    pppppplVar53 = pppppplVar66 + 2;
    *pppppplVar53 = ppppplVar65;
    func_0x0249f888(pppppplVar53,ppppplVar65);
    pppppplVar66[3] = (long *****)ppppppplVar51;
    func_0x0249f888(pppppplVar66 + 3,ppppppplVar51);
    ppppppplVar51 = (long *******)func_0x0376e0dc(auVar85._0_8_);
    uVar27 = func_0x0249fb80(_DAT_059c59a8);
    auVar85._8_8_ = ppppplVar65;
    auVar85._0_8_ = uVar27;
    ppppppplVar47 = (long *******)0x0;
    func_0x02a9aa34(uVar27,pppppplVar66,_DAT_05a6a1d8);
    ppppppplVar45 = _DAT_05a44708;
    plVar29 = (long *)func_0x026ec554(ppppppplVar51,uVar27);
    if (plVar29 == (long *)0x0) goto LAB_03781e4c;
    lVar70 = *plVar29;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059c9f90) {
          puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
          goto LAB_03781cac;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    ppppppplVar45 = (long *******)0x0;
    puVar39 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03781cac:
    pppppplVar66 = (long ******)&DAT_059cb2d8;
    auVar21._8_8_ = &DAT_059df6e0;
    auVar21._0_8_ = &DAT_059df598;
    auVar15._8_8_ = &DAT_059df6e0;
    auVar15._0_8_ = &DAT_059df598;
    auVar85._8_8_ = &DAT_059df6e0;
    auVar85._0_8_ = &DAT_059df598;
    ppppppplVar51 = (long *******)(*(code *)*puVar39)(plVar29,puVar39[1]);
    ppppppplStack_328 = (long *******)&ppppppplStack_318;
    ppppppplStack_330 = (long *******)0x0;
    ppppppplStack_318 = ppppppplVar51;
    if (ppppppplVar51 == (long *******)0x0) {
      func_0x0249fb90();
LAB_03781e48:
      func_0x0249fb90();
      goto LAB_03781e4c;
    }
    pppppplVar57 = *ppppppplVar51;
    uVar26 = (ulong)*(ushort *)((long)pppppplVar57 + 0x12e);
    if (uVar26 != 0) {
      ppppplVar65 = pppppplVar57[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df6e0) {
          pppppplVar57 = pppppplVar57 + (long)*(int *)ppppplVar65 * 2 + 0x27;
          goto LAB_03781d30;
        }
        uVar26 = uVar26 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar26 != 0);
    }
    ppppppplVar45 = (long *******)0x0;
    pppppplVar57 = (long ******)func_0x024d927c(ppppppplVar51);
LAB_03781d30:
    plVar29 = (long *)(*(code *)*pppppplVar57)(ppppppplVar51,pppppplVar57[1]);
    ppppppplVar52 = ppppppplStack_318;
    if (((ulong)plVar29 & 1) == 0) {
      ppppppplVar40 = (long *******)0x0;
      ppppppplVar63 = (long *******)&ppppppplStack_318;
      auVar85 = auVar21;
      goto LAB_03781dc0;
    }
    ppppppplVar51 = ppppppplStack_318;
    if (ppppppplStack_318 == (long *******)0x0) goto LAB_03781e48;
    pppppplVar57 = *ppppppplStack_318;
    uVar26 = (ulong)*(ushort *)((long)pppppplVar57 + 0x12e);
    if (uVar26 != 0) {
      ppppplVar65 = pppppplVar57[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059cb2d8) {
          pppppplVar57 = pppppplVar57 + (long)*(int *)ppppplVar65 * 2 + 0x27;
          goto LAB_03781d94;
        }
        uVar26 = uVar26 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar26 != 0);
    }
    pppppplVar57 = (long ******)func_0x024d927c(ppppppplStack_318,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*pppppplVar57)(ppppppplVar52,pppppplVar57[1]);
    ppppplVar65 = *pppppplVar53;
    uVar27 = 0x3781db4;
    ppppppplVar47 = extraout_x1_00;
    ppppppplStack_338 = ppppppplVar62;
    auVar85 = auVar15;
  }
  puVar46 = auVar85._8_8_;
  ppppplStack_358 = auVar85._0_8_;
  plVar29 = (long *)0x5e2d000;
  uVar26 = (ulong)ppppppplVar62 & 0xffffffff;
  ppppppplVar28 = ppppppplVar44;
  ppppppplVar51 = ppppppplVar47;
  ppppppplStack_360 = (long *******)uVar27;
  ppppppplStack_350 = ppppppplVar52;
  pppppplStack_348 = pppppplVar53;
  ppppppplStack_340 = ppppppplVar63;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  ppppppplStack_390 = (long *******)puVar46;
  ppppppplStack_368 = ppppppplVar44;
  if (ppppplVar65 != (long *****)0x0) {
    pppplVar58 = *ppppplVar65;
    uVar60 = (ulong)*(ushort *)((long)pppplVar58 + 0x12e);
    if (uVar60 != 0) {
      ppplVar55 = pppplVar58[0x16] + 1;
      do {
        if ((long ****)ppplVar55[-1] == _DAT_059df8e8) {
          pppplVar58 = pppplVar58 + (long)(*(int *)ppplVar55 + 5) * 2 + 0x27;
          goto LAB_03781f64;
        }
        uVar60 = uVar60 - 1;
        ppplVar55 = ppplVar55 + 2;
      } while (uVar60 != 0);
    }
    ppppppplVar28 = (long *******)0x5;
    pppplVar58 = (long ****)func_0x024d927c(ppppplVar65);
LAB_03781f64:
    uVar27 = (*(code *)*pppplVar58)(ppppplVar65,pppplVar58[1]);
    if (ppppppplVar47 != (long *******)0x0) {
      ppppppplVar28 = (long *******)0x0;
      plVar30 = (long *)func_0x036d3908(ppppppplVar47,uVar27);
      if (plVar30 != (long *)0x0) {
        lVar70 = *plVar30;
        uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
        if (uVar60 != 0) {
          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
          do {
            if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
              puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
              goto LAB_03781fe0;
            }
            uVar60 = uVar60 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar60 != 0);
        }
        ppppppplVar28 = (long *******)0x0;
        puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03781fe0:
        plVar32 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
        plVar29 = plVar30;
        if (plVar32 != (long *)0x0) {
          lVar70 = *plVar32;
          uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
          if (uVar60 != 0) {
            piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059e0788) {
                puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar60 = uVar60 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar60 != 0);
          }
          ppppppplVar28 = (long *******)0x2;
          puVar39 = (undefined8 *)func_0x024d927c(plVar32);
LAB_0378204c:
          plVar29 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
          if (plVar29 == (long *)0x0) {
            return (long *)0x0;
          }
          if (*(byte *)(*plVar29 + 0x130) < *(byte *)(_DAT_059e73b0 + 0x130)) {
            return plVar29;
          }
          if (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(_DAT_059e73b0 + 0x130) * 8 + -8
                       ) != _DAT_059e73b0) {
            return plVar29;
          }
          lVar70 = func_0x036d5ee4(ppppppplVar47,0);
          if (lVar70 != 0) {
            func_0x037040b8(lVar70,(int)plVar29[6],uVar26,0);
            ppppplVar68 = ppppplStack_358;
            uVar27 = 0;
            pppplVar58 = (long ****)0x5e2d000;
            ppppppplVar51 = ppppppplVar44;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,ppppplVar65,ppppppplVar44,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (ppppplVar65 != (long *****)0x0) {
              pppplVar54 = *ppppplVar65;
              uVar26 = (ulong)*(ushort *)((long)pppplVar54 + 0x12e);
              if (uVar26 != 0) {
                ppplVar55 = pppplVar54[0x16] + 1;
                do {
                  if ((long ****)ppplVar55[-1] == _DAT_059df8e8) {
                    pppplVar54 = pppplVar54 + (long)(*(int *)ppplVar55 + 5) * 2 + 0x27;
                    goto LAB_036e2904;
                  }
                  uVar26 = uVar26 - 1;
                  ppplVar55 = ppplVar55 + 2;
                } while (uVar26 != 0);
              }
              ppppppplVar51 = (long *******)0x5;
              pppplVar54 = (long ****)func_0x024d927c(ppppplVar65);
LAB_036e2904:
              uVar34 = (*(code *)*pppplVar54)(ppppplVar65,pppplVar54[1]);
              pppppplVar53 = ppppppplVar47[2];
              if (pppppplVar53 != (long ******)0x0) {
                ppppppplVar51 = (long *******)(*pppppplVar53)[0x3a];
                pppplVar54 = (long ****)(*(code *)(*pppppplVar53)[0x39])(pppppplVar53,uVar34);
                if (pppplVar54 != (long ****)0x0) {
                  ppplVar55 = *pppplVar54;
                  uVar26 = (ulong)*(ushort *)((long)ppplVar55 + 0x12e);
                  if (uVar26 != 0) {
                    pplVar36 = ppplVar55[0x16] + 1;
                    do {
                      if ((long ***)pplVar36[-1] == _DAT_059dfbc0) {
                        ppplVar55 = ppplVar55 + (long)*(int *)pplVar36 * 2 + 0x27;
                        goto LAB_036e2988;
                      }
                      uVar26 = uVar26 - 1;
                      pplVar36 = pplVar36 + 2;
                    } while (uVar26 != 0);
                  }
                  ppppppplVar51 = (long *******)0x0;
                  ppplVar55 = (long ***)func_0x024d927c(pppplVar54);
LAB_036e2988:
                  plVar29 = (long *)(*(code *)*ppplVar55)(pppplVar54,ppplVar55[1]);
                  pppplVar58 = pppplVar54;
                  if (plVar29 != (long *)0x0) {
                    lVar70 = *plVar29;
                    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                    if (uVar26 != 0) {
                      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar61 + -2) == _DAT_059e0788) {
                          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar26 = uVar26 - 1;
                        piVar61 = piVar61 + 4;
                      } while (uVar26 != 0);
                    }
                    puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0788,6);
LAB_036e29f4:
                    plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                    if (((ulong)plVar29 & 1) == 0) {
                      return plVar29;
                    }
                    func_0x03727e60(ppppppplVar47,ppppppplVar44,0);
                    ppppppplStack_388 = ppppppplStack_360;
                    ppppppplStack_390 = (long *******)unaff_x29;
                    ppppppplStack_380 = ppppppplVar73;
                    ppppppplStack_378 = (long *******)param_5;
                    ppppppplStack_370 = ppppppplVar71;
                    ppppppplStack_368 = (long *******)pppppplVar66;
                    ppppppplStack_360 = (long *******)puVar46;
                    ppppplStack_358 = ppppplVar68;
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,ppppplVar65,ppppppplVar44,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    auStack_3a0 = (undefined1  [8])0x0;
                    uStack_398 = (long ******)0x0;
                    plVar29 = (long *)0x5e2d000;
                    auVar14 = ZEXT816(0);
                    if (ppppplVar65 != (long *****)0x0) {
                      pppplVar58 = *ppppplVar65;
                      uVar26 = (ulong)*(ushort *)((long)pppplVar58 + 0x12e);
                      if (uVar26 != 0) {
                        ppplVar55 = pppplVar58[0x16] + 1;
                        do {
                          if ((long ****)ppplVar55[-1] == _DAT_059df8e8) {
                            pppplVar58 = pppplVar58 + (long)(*(int *)ppplVar55 + 5) * 2 + 0x27;
                            goto LAB_037280d4;
                          }
                          uVar26 = uVar26 - 1;
                          ppplVar55 = ppplVar55 + 2;
                        } while (uVar26 != 0);
                      }
                      pppplVar58 = (long ****)func_0x024d927c(ppppplVar65,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar30 = (long *)(*(code *)*pppplVar58)(ppppplVar65,pppplVar58[1]);
                      auVar14._8_8_ = uStack_398;
                      auVar14._0_8_ = auStack_3a0;
                      if (ppppppplVar47 != (long *******)0x0) {
                        pppppplVar53 = *ppppppplVar47;
                        uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                        if (uVar26 != 0) {
                          ppppplVar68 = pppppplVar53[0x16] + 1;
                          do {
                            if (ppppplVar68[-1] == _DAT_059dfe48) {
                              pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar68 * 2 + 0x27;
                              goto LAB_0372813c;
                            }
                            uVar26 = uVar26 - 1;
                            ppppplVar68 = ppppplVar68 + 2;
                          } while (uVar26 != 0);
                        }
                        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar47,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar32 = (long *)(*(code *)*pppppplVar53)
                                                    (ppppppplVar47,plVar30,pppppplVar53[1]);
                        auVar14._8_8_ = uStack_398;
                        auVar14._0_8_ = auStack_3a0;
                        plVar29 = plVar30;
                        if (plVar32 != (long *)0x0) {
                          lVar70 = *plVar32;
                          uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                          if (uVar26 != 0) {
                            piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                            do {
                              if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                                puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar26 = uVar26 - 1;
                              piVar61 = piVar61 + 4;
                            } while (uVar26 != 0);
                          }
                          puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar30 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
                          auVar14._8_8_ = uStack_398;
                          auVar14._0_8_ = auStack_3a0;
                          plVar29 = plVar32;
                          if (plVar30 != (long *)0x0) {
                            lVar70 = *plVar30;
                            uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                            if (uVar26 != 0) {
                              piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar61 + -2) == _DAT_059e0788) {
                                  puVar39 = (undefined8 *)
                                            (lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar26 = uVar26 - 1;
                                piVar61 = piVar61 + 4;
                              } while (uVar26 != 0);
                            }
                            puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0788,2);
LAB_03728214:
                            plVar30 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
                            pppppplVar53 = *ppppppplVar47;
                            uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                            if (uVar26 != 0) {
                              ppppplVar68 = pppppplVar53[0x16] + 1;
                              do {
                                if (ppppplVar68[-1] == _DAT_059dfe48) {
                                  pppppplVar53 = pppppplVar53 +
                                                 (long)(*(int *)ppppplVar68 + 6) * 2 + 0x27;
                                  goto LAB_03728274;
                                }
                                uVar26 = uVar26 - 1;
                                ppppplVar68 = ppppplVar68 + 2;
                              } while (uVar26 != 0);
                            }
                            pppppplVar53 = (long ******)
                                           func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_03728274:
                            lVar70 = (*(code *)*pppppplVar53)(ppppppplVar47,pppppplVar53[1]);
                            auVar14._8_8_ = uStack_398;
                            auVar14._0_8_ = auStack_3a0;
                            if (lVar70 != 0) {
                              pppppplVar53 = *ppppppplVar47;
                              uVar27 = *(undefined8 *)(lVar70 + 0x28);
                              uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                              if (uVar26 != 0) {
                                ppppplVar68 = pppppplVar53[0x16] + 1;
                                do {
                                  if (ppppplVar68[-1] == _DAT_059dfe48) {
                                    pppppplVar53 = pppppplVar53 +
                                                   (long)(*(int *)ppppplVar68 + 6) * 2 + 0x27;
                                    goto LAB_037282d8;
                                  }
                                  uVar26 = uVar26 - 1;
                                  ppppplVar68 = ppppplVar68 + 2;
                                } while (uVar26 != 0);
                              }
                              pppppplVar53 = (long ******)
                                             func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar70 = (*(code *)*pppppplVar53)(ppppppplVar47,pppppplVar53[1]);
                              auVar14._8_8_ = uStack_398;
                              auVar14._0_8_ = auStack_3a0;
                              if (lVar70 != 0) {
                                pppppplVar53 = *ppppppplVar47;
                                uVar34 = *(undefined8 *)(lVar70 + 0x30);
                                uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                                if (uVar26 != 0) {
                                  ppppplVar68 = pppppplVar53[0x16] + 1;
                                  do {
                                    if (ppppplVar68[-1] == _DAT_059dfe48) {
                                      pppppplVar53 = pppppplVar53 +
                                                     (long)(*(int *)ppppplVar68 + 0x24) * 2 + 0x27;
                                      goto LAB_0372833c;
                                    }
                                    uVar26 = uVar26 - 1;
                                    ppppplVar68 = ppppplVar68 + 2;
                                  } while (uVar26 != 0);
                                }
                                pppppplVar53 = (long ******)
                                               func_0x024d927c(ppppppplVar47,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar22 = (*(code *)*pppppplVar53)(ppppppplVar47,pppppplVar53[1]);
                                pppppplVar53 = *ppppppplVar47;
                                uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                                if (uVar26 != 0) {
                                  ppppplVar68 = pppppplVar53[0x16] + 1;
                                  do {
                                    if (ppppplVar68[-1] == _DAT_059dfe48) {
                                      pppppplVar53 = pppppplVar53 +
                                                     (long)(*(int *)ppppplVar68 + 6) * 2 + 0x27;
                                      goto LAB_0372839c;
                                    }
                                    uVar26 = uVar26 - 1;
                                    ppppplVar68 = ppppplVar68 + 2;
                                  } while (uVar26 != 0);
                                }
                                pppppplVar53 = (long ******)
                                               func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar37 = (*(code *)*pppppplVar53)(ppppppplVar47,pppppplVar53[1]);
                                uVar38 = func_0x03530c84(ppppppplVar44,0);
                                auVar14._8_8_ = uStack_398;
                                auVar14._0_8_ = auStack_3a0;
                                if (plVar30 != (long *)0x0) {
                                  lVar70 = *plVar30;
                                  uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                                  if (uVar26 != 0) {
                                    piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar61 + -2) == _DAT_059e0780) {
                                        puVar39 = (undefined8 *)
                                                  (lVar70 + (long)*piVar61 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar26 = uVar26 - 1;
                                      piVar61 = piVar61 + 4;
                                    } while (uVar26 != 0);
                                  }
                                  puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0780,0);
LAB_03728418:
                                  uStack_3b0 = (long *******)puVar39[1];
                                  auVar74 = (*(code *)*puVar39)(plVar30,ppppplVar65,plVar32,uVar27,
                                                                uVar34,uVar37,uVar22,uVar38);
                                  pppppplVar53 = *ppppppplVar47;
                                  uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                                  _auStack_3a0 = auVar74;
                                  if (uVar26 != 0) {
                                    ppppplVar65 = pppppplVar53[0x16] + 1;
                                    do {
                                      if (ppppplVar65[-1] == _DAT_059dfe48) {
                                        pppppplVar53 = pppppplVar53 +
                                                       (long)(*(int *)ppppplVar65 + 6) * 2 + 0x27;
                                        goto LAB_037284a0;
                                      }
                                      uVar26 = uVar26 - 1;
                                      ppppplVar65 = ppppplVar65 + 2;
                                    } while (uVar26 != 0);
                                  }
                                  pppppplVar53 = (long ******)
                                                 func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar70 = (*(code *)*pppppplVar53)(ppppppplVar47,pppppplVar53[1]);
                                  auVar14 = _auStack_3a0;
                                  if (lVar70 != 0) {
                                    *(undefined1 (*) [16])(lVar70 + 0x18) = auVar74;
                                    lVar70 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
                                      lVar70 = func_0x024d8f40();
                                    }
                                    plVar30 = (long *)func_0x0249f90c(auStack_3a0,
                                                                      *(undefined8 *)
                                                                       (*(long *)(*(long *)(lVar70 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80));
                                    if ((char)*plVar30 != '\0') {
                                      return plVar30;
                                    }
                                    lVar70 = *plVar32;
                                    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                                    if (uVar26 != 0) {
                                      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                                      do {
                                        if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                                          puVar39 = (undefined8 *)
                                                    (lVar70 + (long)*piVar61 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar26 = uVar26 - 1;
                                        piVar61 = piVar61 + 4;
                                      } while (uVar26 != 0);
                                    }
                                    puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar30 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
                                    auVar14 = _auStack_3a0;
                                    if (plVar30 != (long *)0x0) {
                                      lVar70 = *plVar30;
                                      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                                      if (uVar26 != 0) {
                                        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar61 + -2) == _DAT_059e0788) {
                                            puVar39 = (undefined8 *)
                                                      (lVar70 + (long)(*piVar61 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar26 = uVar26 - 1;
                                          piVar61 = piVar61 + 4;
                                        } while (uVar26 != 0);
                                      }
                                      puVar39 = (undefined8 *)
                                                func_0x024d927c(plVar30,_DAT_059e0788,7);
LAB_037285a8:
                                      plVar29 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
                                      if (((ulong)plVar29 & 1) == 0) {
                                        return plVar29;
                                      }
                                      pppppplVar53 = *ppppppplVar47;
                                      uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                                      if (uVar26 != 0) {
                                        ppppplVar65 = pppppplVar53[0x16] + 1;
                                        do {
                                          if (ppppplVar65[-1] == _DAT_059dfe48) {
                                            pppppplVar53 = pppppplVar53 +
                                                           (long)(*(int *)ppppplVar65 + 6) * 2 +
                                                           0x27;
                                            goto LAB_03728608;
                                          }
                                          uVar26 = uVar26 - 1;
                                          ppppplVar65 = ppppplVar65 + 2;
                                        } while (uVar26 != 0);
                                      }
                                      pppppplVar53 = (long ******)
                                                     func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar29 = (long *)(*(code *)*pppppplVar53)
                                                                  (ppppppplVar47,pppppplVar53[1]);
                                      pppppplVar53 = *ppppppplVar47;
                                      uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                                      if (uVar26 != 0) {
                                        ppppplVar65 = pppppplVar53[0x16] + 1;
                                        do {
                                          if (ppppplVar65[-1] == _DAT_059dfe48) {
                                            pppppplVar53 = pppppplVar53 +
                                                           (long)(*(int *)ppppplVar65 + 6) * 2 +
                                                           0x27;
                                            goto LAB_03728668;
                                          }
                                          uVar26 = uVar26 - 1;
                                          ppppplVar65 = ppppplVar65 + 2;
                                        } while (uVar26 != 0);
                                      }
                                      pppppplVar53 = (long ******)
                                                     func_0x024d927c(ppppppplVar47,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar70 = (*(code *)*pppppplVar53)
                                                         (ppppppplVar47,pppppplVar53[1]);
                                      auVar14 = _auStack_3a0;
                                      if ((lVar70 != 0) && (plVar29 != (long *)0x0)) {
                                        plVar29 = (long *)func_0x03704874(plVar29,*(undefined8 *)
                                                                                   (lVar70 + 0x28),0
                                                                         );
                                        return plVar29;
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
                    _auStack_3a0 = auVar14;
                    plVar30 = (long *)func_0x0249fb90();
                    ppppppplStack_3d0 = (long *******)0x37286b0;
                    plStack_3c0 = plVar29;
                    auStack_3b8 = (undefined1  [8])ppppppplVar47;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    pppplStack_3d8 = (long ****)0x0;
                    if (plVar30 != (long *)0x0) {
                      lVar70 = *plVar30;
                      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                      if (uVar26 != 0) {
                        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                        do {
                          if (*(long *****)(piVar61 + -2) == _DAT_059dfe48) {
                            puVar39 = (undefined8 *)
                                      (lVar70 + (long)(*piVar61 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar26 = uVar26 - 1;
                          piVar61 = piVar61 + 4;
                        } while (uVar26 != 0);
                      }
                      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar70 = (*(code *)*puVar39)(plVar30,puVar39[1]);
                      if ((lVar70 == 0) || (*(long *)(lVar70 + 0x68) == 0)) {
                        pppplStack_3d8 = (long ****)0x0;
                      }
                      else {
                        ppppplStack_3e0 = (long *****)0x0;
                        uStack_3c8 = (long *)CONCAT44(*(undefined4 *)
                                                       (*(long *)(lVar70 + 0x68) + 0x10),
                                                      (undefined4)uStack_3c8);
                        func_0x028866e4(&ppppplStack_3e0,(long)&uStack_3c8 + 4,_DAT_05a27d88);
                        pppplStack_3d8 = (long ****)ppppplStack_3e0;
                      }
                      lVar70 = _DAT_05a27d90;
                      lVar56 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar4 = *(ushort *)(lVar56 + 0x135);
                      lVar31 = lVar56;
                      if ((uVar4 & 1) == 0) {
                        lVar56 = func_0x024d8f40(lVar56);
                        uVar4 = *(ushort *)(*(long *)(lVar70 + 0x20) + 0x135);
                        lVar31 = *(long *)(lVar70 + 0x20);
                      }
                      uVar22 = *(undefined4 *)(**(long **)(lVar56 + 0xc0) + 0xfc);
                      if ((uVar4 & 1) == 0) {
                        lVar31 = func_0x024d8f40(lVar31);
                      }
                      uVar27 = func_0x0249f90c(&pppplStack_3d8,
                                               *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0(&ppppplStack_3e0,uVar27,uVar22);
                      return (long *)((ulong)ppppplStack_3e0 & 0xffffffff);
                    }
                    auVar74 = func_0x0249fb90();
                    lVar70 = auVar74._8_8_;
                    auStack_3f0 = (undefined1  [8])0x372883c;
                    if (lVar70 != 0) {
                      if (*(int *)(auVar74._0_8_ + 0x10) < *(int *)(lVar70 + 0x18)) {
                        uVar23 = 0;
LAB_03728870:
                        return (long *)(ulong)(uVar23 & 1);
                      }
                      lVar31 = *(long *)(auVar74._0_8_ + 0x18);
                      if (lVar31 != 0) {
                        uVar23 = func_0x0387f210(lVar31,lVar70,0);
                        uVar23 = uVar23 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar74 = func_0x0249fb90();
                    lVar70 = auVar74._8_8_;
                    ppppppplStack_400 = (long *******)0x3728880;
                    if (lVar70 != 0) {
                      if (*(int *)(auVar74._0_8_ + 0x10) < *(int *)(lVar70 + 0x18)) {
                        lVar31 = *(long *)(auVar74._0_8_ + 0x18);
                        if (lVar31 == 0) goto LAB_037288c0;
                        uVar23 = func_0x0387f210(lVar31,lVar70,0);
                        uVar23 = uVar23 ^ 1;
                      }
                      else {
                        uVar23 = 0;
                      }
                      return (long *)(ulong)(uVar23 & 1);
                    }
LAB_037288c0:
                    lVar70 = func_0x0249fb90();
                    return *(long **)(lVar70 + 0x10);
                  }
                }
              }
            }
            uVar34 = func_0x0249fb90();
            auStack_3a0 = (undefined1  [8])0x36e2a48;
            ppppppplStack_388 = (long *******)ppppplVar68;
            ppplVar55 = (long ***)0x5e2d000;
            ppppppplStack_380 = (long *******)pppplVar58;
            ppppppplStack_378 = ppppppplVar47;
            ppppppplStack_370 = (long *******)ppppplVar65;
            if ((bRam0000000005e2da62 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              func_0x0249f8e4(&DAT_05a27fb0);
              func_0x0249f8e4(&DAT_05a27fc8);
              func_0x0249f8e4(&DAT_059e7a38);
              func_0x0249f8e4(&DAT_05a79720);
              func_0x0249f8e4(&DAT_05a934d8);
              func_0x0249f8e4(&DAT_05a7a1e0);
              func_0x0249f8e4(&DAT_05a9e3c0);
              func_0x0249f8e4(&DAT_05a9fca8);
              func_0x0249f8e4(&DAT_05a815a8);
              func_0x0249f8e4(&DAT_05a9e920);
              bRam0000000005e2da62 = 1;
            }
            uStack_3b0 = (long *******)0x0;
            ppppppplStack_3a8 = (long *******)0x0;
            plStack_3c0 = (long *)0x0;
            auStack_3b8 = (undefined1  [8])0x0;
            plVar29 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar29,0);
            if (plVar29 != (long *)0x0) {
              ppppppplVar51 = (long *******)0x0;
              func_0x0442b590(plVar29,_DAT_05a9e920);
              lVar70 = func_0x036d5e58(uVar34);
              auVar9._8_8_ = uStack_3b0;
              auVar9._0_8_ = auStack_3b8;
              if ((lVar70 != 0) && (_auStack_3b8 = auVar9, *(long *)(lVar70 + 0x28) != 0)) {
                ppplVar55 = (long ***)&DAT_05a9fca8;
                func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar70 + 0x28) + 0x10),0);
                func_0x0442b540(plVar29,10,0);
                ppppppplVar51 = (long *******)0x0;
                func_0x0442b590(plVar29,_DAT_05a9fca8);
                lVar70 = func_0x036d5e58(uVar34);
                auVar10._8_8_ = uStack_3b0;
                auVar10._0_8_ = auStack_3b8;
                if ((lVar70 != 0) && (_auStack_3b8 = auVar10, *(long *)(lVar70 + 0x18) != 0)) {
                  ppplVar55 = (long ***)&DAT_05a7a1e0;
                  func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar70 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar29,10,0);
                  ppppppplVar51 = (long *******)0x0;
                  func_0x0442b590(plVar29,_DAT_05a7a1e0);
                  lVar70 = func_0x036d5e58(uVar34);
                  auVar11._8_8_ = uStack_3b0;
                  auVar11._0_8_ = auStack_3b8;
                  if ((lVar70 != 0) && (_auStack_3b8 = auVar11, *(long *)(lVar70 + 0x18) != 0)) {
                    ppplVar55 = (long ***)&DAT_05a815a8;
                    func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar70 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar29,10,0);
                    ppppppplVar51 = (long *******)0x0;
                    func_0x0442b590(plVar29,_DAT_05a815a8);
                    lVar70 = func_0x036d5e58(uVar34);
                    auVar12._8_8_ = uStack_3b0;
                    auVar12._0_8_ = auStack_3b8;
                    if ((lVar70 != 0) && (_auStack_3b8 = auVar12, *(long *)(lVar70 + 0x18) != 0)) {
                      ppplVar55 = (long ***)&DAT_05a934d8;
                      func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar70 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar29,10,0);
                      ppppppplVar51 = (long *******)0x0;
                      func_0x0442b590(plVar29,_DAT_05a934d8);
                      lVar70 = func_0x036d5e58(uVar34);
                      auVar13._8_8_ = uStack_3b0;
                      auVar13._0_8_ = auStack_3b8;
                      if ((lVar70 != 0) && (_auStack_3b8 = auVar13, *(long *)(lVar70 + 0x18) != 0))
                      {
                        ppplVar55 = (long ***)&DAT_05a27fc8;
                        _auStack_3b8 = func_0x03753e70(*(long *)(lVar70 + 0x18),0);
                        lVar70 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar70 + 0x135) & 1) == 0) {
                          lVar70 = func_0x024d8f40();
                        }
                        pppplVar58 = (long ****)&DAT_059e2ba0;
                        ppppplVar68 = (long *****)&DAT_05a79720;
                        puVar46 = &DAT_05a9e3c0;
                        pcVar41 = (char *)func_0x0249f90c(auStack_3b8,
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar70 + 0xc0) + 8)
                                                           + 0x80));
                        lVar70 = _DAT_05a27fb0;
                        if (*pcVar41 == '\0') {
                          lVar70 = 0;
                        }
                        else {
                          lVar56 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar4 = *(ushort *)(lVar56 + 0x135);
                          lVar31 = lVar56;
                          if ((uVar4 & 1) == 0) {
                            lVar56 = func_0x024d8f40(lVar56);
                            uVar4 = *(ushort *)(*(long *)(lVar70 + 0x20) + 0x135);
                            lVar31 = *(long *)(lVar70 + 0x20);
                          }
                          ppplVar55 = (long ***)(ulong)*(uint *)(**(long **)(lVar56 + 0xc0) + 0xfc);
                          if ((uVar4 & 1) == 0) {
                            lVar31 = func_0x024d8f40(lVar31);
                          }
                          uVar37 = func_0x0249f90c(auStack_3b8,
                                                   *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
                          func_0x054ed0d0(&uStack_398,uVar37,ppplVar55);
                          plStack_3c0 = (long *)uStack_398;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64();
                          }
                          lVar70 = func_0x0430e224(&plStack_3c0,0);
                        }
                        lVar31 = _DAT_05a79720;
                        if (lVar70 != 0) {
                          lVar31 = lVar70;
                        }
                        func_0x0442b590(plVar29,lVar31,0);
                        func_0x0442b540(plVar29,10,0);
                        ppppppplVar51 = (long *******)0x0;
                        func_0x0442b590(plVar29,_DAT_05a9e3c0);
                        lVar70 = func_0x036d5e58(uVar34);
                        if ((lVar70 != 0) && (*(long *)(lVar70 + 0x18) != 0)) {
                          pppppplVar53 = (long ******)func_0x03753af4(*(long *)(lVar70 + 0x18),0);
                          ppppppplStack_3a8 = (long *******)pppppplVar53;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar26 = func_0x0430dd84(pppppplVar53,
                                                   *(undefined8 *)
                                                    (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar70 = _DAT_05a79720;
                          if ((uVar26 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar70 = func_0x0430e224(&ppppppplStack_3a8,0);
                          }
                          func_0x0442b590(plVar29,lVar70,0);
                          plVar29 = (long *)(**(code **)(*plVar29 + 0x168))
                                                      (plVar29,*(undefined8 *)(*plVar29 + 0x170));
                          return plVar29;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar70 = func_0x0249fb90();
            ppppppplStack_400 = (long *******)0x36e2e70;
            auStack_3f0 = (undefined1  [8])puVar46;
            uStack_3e8 = (undefined *)ppppplVar68;
            ppppplStack_3e0 = (long *****)pppplVar58;
            pppplStack_3d8 = (long ****)ppplVar55;
            ppppppplStack_3d0 = (long *******)uVar34;
            uStack_3c8 = plVar29;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar29 = (long *)func_0x03962be0(0);
            if (((ulong)plVar29 & 1) == 0) {
              return plVar29;
            }
            uVar34 = 0x5e2d000;
            pppppplVar53 = (long ******)&DAT_059da1f8;
            if (ppppppplVar51 != (long *******)0x0) {
              pppppplVar66 = *ppppppplVar51;
              uVar26 = (ulong)*(ushort *)((long)pppppplVar66 + 0x12e);
              if (uVar26 != 0) {
                ppppplVar65 = pppppplVar66[0x16] + 1;
                do {
                  if (ppppplVar65[-1] == _DAT_059df8e8) {
                    pppppplVar66 = pppppplVar66 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
                    goto LAB_036e2f54;
                  }
                  uVar26 = uVar26 - 1;
                  ppppplVar65 = ppppplVar65 + 2;
                } while (uVar26 != 0);
              }
              pppppplVar66 = (long ******)func_0x024d927c(ppppppplVar51,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar37 = (*(code *)*pppppplVar66)(ppppppplVar51,pppppplVar66[1]);
              if (lVar70 != 0) {
                pppppplVar66 = (long ******)func_0x036eb814(lVar70,uVar37,0);
                uVar34 = uVar37;
                if (*(long *)(lVar70 + 0x10) != 0) {
                  puVar46 = &DAT_059fa1e8;
                  plVar29 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  ppppplVar68 = (long *****)(ulong)*(uint *)(plVar29[1] + 0xfc);
                  uVar27 = func_0x0249f90c(*(long *)(lVar70 + 0x10),*(undefined8 *)(*plVar29 + 0x80)
                                          );
                  func_0x054ed0d0((long)&uStack_3f8 + 4,uVar27,ppppplVar68);
                  uVar27 = 0;
                  func_0x034b666c(pppppplVar66,ppppppplVar51,uStack_3f8._4_4_,0);
                  pppppplVar53 = pppppplVar66;
                  if (*(long *)(lVar70 + 0x10) != 0) {
                    plVar29 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    ppppplVar68 = (long *****)(ulong)*(uint *)(plVar29[1] + 0xfc);
                    uVar27 = func_0x0249f90c(*(long *)(lVar70 + 0x10),
                                             *(undefined8 *)(*plVar29 + 0x80));
                    func_0x054ed0d0((long)&uStack_3f8 + 4,uVar27,ppppplVar68);
                    uVar27 = 0;
                    func_0x034b676c(pppppplVar66,ppppppplVar51,uStack_3f8._4_4_,0);
                    if (*(long *)(lVar70 + 0x10) != 0) {
                      plVar29 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      ppppplVar68 = (long *****)(ulong)*(uint *)(plVar29[1] + 0xfc);
                      uVar27 = func_0x0249f90c(*(long *)(lVar70 + 0x10),
                                               *(undefined8 *)(*plVar29 + 0x80));
                      func_0x054ed0d0((long)&uStack_3f8 + 4,uVar27,ppppplVar68);
                      uVar27 = 0;
                      func_0x034b6ccc(pppppplVar66,ppppppplVar51,uStack_3f8._4_4_,0);
                      if (*(long *)(lVar70 + 0x10) != 0) {
                        plVar29 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        ppppppplVar51 = (long *******)(ulong)*(uint *)(plVar29[1] + 0xfc);
                        uVar27 = func_0x0249f90c(*(long *)(lVar70 + 0x10),
                                                 *(undefined8 *)(*plVar29 + 0x80));
                        func_0x054ed0d0((long)&uStack_3f8 + 4,uVar27,ppppppplVar51);
                        uVar27 = 0;
                        func_0x034b6dc0(pppppplVar66,uVar37,uStack_3f8._4_4_,0);
                        plVar29 = *(long **)(lVar70 + 0x10);
                        if (plVar29 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar29 = (long *)(**(code **)(*plVar29 + 0x1c8))
                                                      (plVar29,uVar37,
                                                       *(undefined8 *)(*plVar29 + 0x1d0));
                          return plVar29;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar82 = func_0x0249fb90();
            plVar29 = auVar82._8_8_;
            ppppppplStack_420 = (long *******)0x36e30d4;
            auStack_418._0_8_ = uVar34;
            auStack_418._8_8_ = ppppppplVar51;
            ppppppplStack_408 = (long *******)lVar70;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar29 != (long *)0x0) {
              lVar70 = *plVar29;
              uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                do {
                  if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
                    puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df8e8,5);
LAB_036e3178:
              uVar34 = (*(code *)*puVar39)(plVar29,puVar39[1]);
              plVar29 = *(long **)(auVar82._0_8_ + 0x10);
              if (plVar29 != (long *)0x0) {
                plVar29 = (long *)(**(code **)(*plVar29 + 0x1c8))
                                            (plVar29,uVar34,*(undefined8 *)(*plVar29 + 0x1d0));
                if (plVar29 == (long *)0x0) {
                  return (long *)0x1;
                }
                lVar70 = *plVar29;
                auVar82._8_8_ = &DAT_059dfbc0;
                auVar82._0_8_ = plVar29;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar70 = (*(code *)*puVar39)(plVar29,puVar39[1]);
                if (lVar70 == 0) {
                  return (long *)0x1;
                }
                lVar70 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                if (plVar29 != (long *)0x0) {
                  lVar70 = *plVar29;
                  uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                  if (uVar26 != 0) {
                    piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar61 + -2) == _DAT_059df2a8) {
                        puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar26 = uVar26 - 1;
                      piVar61 = piVar61 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                  return plVar29;
                }
              }
            }
            auVar83 = func_0x0249fb90();
            plVar29 = auVar83._8_8_;
            uStack_440 = 0x36e32f4;
            _uStack_438 = 0x5e2d000;
            if ((bRam0000000005e2da65 & 1) == 0) {
              uStack_430 = auVar82._8_8_;
              ppppppplStack_428 = (long *******)auVar82._0_8_;
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              auVar82._8_8_ = uStack_430;
              auVar82._0_8_ = ppppppplStack_428;
              bRam0000000005e2da65 = 1;
            }
            uStack_430 = auVar82._8_8_;
            ppppppplStack_428 = auVar82._0_8_;
            if (plVar29 != (long *)0x0) {
              lVar70 = *plVar29;
              uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                do {
                  if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
                    puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df8e8,5);
              auVar82._8_8_ = uStack_430;
              auVar82._0_8_ = ppppppplStack_428;
LAB_036e3398:
              uStack_430 = auVar82._8_8_;
              ppppppplStack_428 = auVar82._0_8_;
              uVar34 = (*(code *)*puVar39)(plVar29,puVar39[1]);
              auVar82._8_8_ = uStack_430;
              auVar82._0_8_ = ppppppplStack_428;
              plVar29 = *(long **)(auVar83._0_8_ + 0x10);
              if (plVar29 != (long *)0x0) {
                plVar29 = (long *)(**(code **)(*plVar29 + 0x1c8))
                                            (plVar29,uVar34,*(undefined8 *)(*plVar29 + 0x1d0));
                if (plVar29 == (long *)0x0) {
                  return (long *)0x0;
                }
                lVar70 = *plVar29;
                auVar83._8_8_ = &DAT_059dfbc0;
                auVar83._0_8_ = plVar29;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar70 = (*(code *)*puVar39)(plVar29,puVar39[1]);
                if (lVar70 == 0) {
                  return (long *)0x0;
                }
                lVar70 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                auVar82._8_8_ = uStack_430;
                auVar82._0_8_ = ppppppplStack_428;
                if (plVar29 != (long *)0x0) {
                  lVar70 = *plVar29;
                  uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                  if (uVar26 != 0) {
                    piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar61 + -2) == _DAT_059df2a8) {
                        puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar26 = uVar26 - 1;
                      piVar61 = piVar61 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                  return plVar29;
                }
              }
            }
            uStack_430 = auVar82._8_8_;
            ppppppplStack_428 = auVar82._0_8_;
            auVar74 = func_0x0249fb90();
            plVar30 = auVar74._8_8_;
            plVar29 = auVar74._0_8_;
            puStack_470 = (undefined *)0x36e3514;
            auStack_460._8_8_ = 0x5e2d000;
            plVar32 = (long *)0x5e2d000;
            auStack_460._0_8_ = pppppplVar53;
            if ((bRam0000000005e2da66 & 1) == 0) {
              ppppppplStack_450 = (long *******)auVar83._8_8_;
              ppppppplStack_448 = (long *******)auVar83._0_8_;
              func_0x0249f8e4(&DAT_059dfbc0);
              auVar83._8_8_ = ppppppplStack_450;
              auVar83._0_8_ = ppppppplStack_448;
              bRam0000000005e2da66 = 1;
            }
            ppppppplStack_450 = auVar83._8_8_;
            ppppppplStack_448 = auVar83._0_8_;
            lVar70 = func_0x036d5e58(plVar29);
            if (lVar70 != 0) {
              plVar32 = *(long **)(lVar70 + 0x20);
              pppppplVar53 = (long ******)&DAT_059dfbc0;
              if (plVar32 != (long *)0x0) {
                if (plVar30 == (long *)0x0) goto LAB_036e3670;
                lVar70 = *plVar30;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                      puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar34 = (*(code *)*puVar39)(plVar30,puVar39[1]);
                func_0x03704ea8(plVar32,uVar34,0);
              }
              plVar35 = (long *)func_0x036d5e58(plVar29);
              if (plVar35 != (long *)0x0) {
                plVar29 = (long *)plVar35[3];
                if (plVar29 == (long *)0x0) {
                  return plVar35;
                }
                if (plVar30 != (long *)0x0) {
                  lVar70 = *plVar30;
                  uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                  if (uVar26 != 0) {
                    piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                    do {
                      if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                        puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar26 = uVar26 - 1;
                      piVar61 = piVar61 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,3);
LAB_036e3648:
                  pplVar36 = (long **)(*(code *)*puVar39)(plVar30,puVar39[1]);
                  uVar34 = auStack_460._0_8_;
                  uVar37 = 0;
                  plStack_480 = (long *)puStack_470;
                  uVar26 = 0x5e2d000;
                  puStack_470 = puVar46;
                  ppppppplStack_468 = (long *******)ppppplVar68;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (pplVar36 != (long **)0x0) {
                    plVar30 = *pplVar36;
                    uVar26 = (ulong)*(uint *)((long)plVar29 + 0x14);
                    uVar60 = (ulong)*(ushort *)((long)plVar30 + 0x12e);
                    if (uVar60 != 0) {
                      piVar61 = (int *)(plVar30[0x16] + 8);
                      do {
                        if (*(long *)(piVar61 + -2) == _DAT_059deb70) {
                          plVar30 = plVar30 + (long)(*piVar61 + 2) * 2 + 0x27;
                          goto LAB_037548ac;
                        }
                        uVar60 = uVar60 - 1;
                        piVar61 = piVar61 + 4;
                      } while (uVar60 != 0);
                    }
                    uVar37 = 2;
                    plVar30 = (long *)func_0x024d927c(pplVar36);
LAB_037548ac:
                    plVar30 = (long *)(*(code *)*plVar30)(pplVar36,plVar30[1]);
                    if (plVar30 != (long *)0x0) {
                      lVar56 = *plVar30;
                      lVar70 = plVar29[0xe];
                      lVar31 = plVar29[2];
                      uVar3 = *(undefined1 *)((long)plVar29 + 0x94);
                      uVar60 = (ulong)*(ushort *)(lVar56 + 0x12e);
                      if (uVar60 != 0) {
                        piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar61 + -2) == _DAT_059deb60) {
                            puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar60 = uVar60 - 1;
                          piVar61 = piVar61 + 4;
                        } while (uVar60 != 0);
                      }
                      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar22 = (*(code *)*puVar39)(plVar30,CONCAT44((int)lVar70,(int)lVar31),uVar3,
                                                   puVar39[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      plVar30 = (long *)func_0x045a9bd0(uVar26,uVar22,0);
                      *(int *)((long)plVar29 + 0x14) = (int)plVar30;
                      return plVar30;
                    }
                  }
                  auVar84 = func_0x0249fb90();
                  plVar30 = auVar84._8_8_;
                  lVar70 = auVar84._0_8_;
                  ppppppplStack_4b0 = (long *******)0x3754988;
                  ppppppplStack_4a0 = (long *******)uVar34;
                  uVar34 = uVar37;
                  ppppppplStack_4a8 = (long *******)ppppplVar68;
                  pplStack_498 = pplVar36;
                  pppppplStack_490 = (long ******)uVar26;
                  plStack_488 = plVar29;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar30 != (long *)0x0) {
                    lVar31 = *plVar30;
                    iVar25 = *(int *)(lVar70 + 0x90);
                    uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
                    if (uVar26 != 0) {
                      piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar61 + -2) == _DAT_059deb78) {
                          puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar26 = uVar26 - 1;
                        piVar61 = piVar61 + 4;
                      } while (uVar26 != 0);
                    }
                    puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb78,2);
LAB_03754a3c:
                    plVar29 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
                    if (iVar25 < (int)plVar29) {
                      uVar27 = func_0x03530c84(uVar37,0);
                      lVar31 = *plVar30;
                      uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
                      if (uVar26 != 0) {
                        piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar61 + -2) == _DAT_059deb78) {
                            puVar39 = (undefined8 *)(lVar31 + (long)*piVar61 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar26 = uVar26 - 1;
                          piVar61 = piVar61 + 4;
                        } while (uVar26 != 0);
                      }
                      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb78,0);
LAB_03754aac:
                      uVar34 = (*(code *)*puVar39)(plVar30,puVar39[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      ppppppplStack_4b8 = (long *******)func_0x0430d994(uVar27,uVar34,0);
                      puStack_4d0 = (undefined *)0x0;
                      plStack_4c8 = (long *)0x0;
                      plVar29 = (long *)func_0x028866e4(&puStack_4d0,&ppppppplStack_4b8,
                                                        _DAT_05a27fa0);
                      *(long **)(lVar70 + 0x88) = plStack_4c8;
                      *(undefined **)(lVar70 + 0x80) = puStack_4d0;
                    }
                    return plVar29;
                  }
                  auVar74 = func_0x0249fb90();
                  ppppppplStack_518 = auVar74._8_8_;
                  lVar31 = auVar74._0_8_;
                  uStack_500 = 0x3754b28;
                  ppppppplStack_4f0 = (long *******)0x5e2d000;
                  uStack_510 = uVar34;
                  puStack_4f8 = (undefined *)ppppplVar68;
                  ppppppplStack_4e8 = (long *******)uVar37;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    plStack_4e0 = plVar30;
                    auStack_4d8 = (undefined1  [8])lVar70;
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    auVar84._8_8_ = plStack_4e0;
                    auVar84._0_8_ = auStack_4d8;
                    bRam0000000005e2de67 = 1;
                  }
                  plStack_4e0 = auVar84._8_8_;
                  auStack_4d8 = auVar84._0_8_;
                  plStack_520 = (long *)0x0;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                    auVar84._8_8_ = plStack_4e0;
                    auVar84._0_8_ = auStack_4d8;
                  }
                  plStack_4e0 = auVar84._8_8_;
                  auStack_4d8 = auVar84._0_8_;
                  plVar30 = (long *)func_0x0288eda8(&ppppppplStack_518,&plStack_520,_DAT_05a29960);
                  plVar29 = plStack_520;
                  if (((ulong)plVar30 & 1) == 0) {
                    *(undefined4 *)(lVar31 + 0x90) = 0;
                    return plVar30;
                  }
                  iVar25 = *(int *)(lVar31 + 0x90) + 1;
                  *(int *)(lVar31 + 0x90) = iVar25;
                  if (plStack_520 != (long *)0x0) {
                    lVar70 = *plStack_520;
                    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                    if (uVar26 != 0) {
                      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar61 + -2) == _DAT_059deb78) {
                          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar26 = uVar26 - 1;
                        piVar61 = piVar61 + 4;
                      } while (uVar26 != 0);
                    }
                    puVar39 = (undefined8 *)func_0x024d927c(plStack_520,_DAT_059deb78,2);
LAB_03754c40:
                    iVar24 = (*(code *)*puVar39)(plVar29,puVar39[1]);
                    plVar29 = plStack_520;
                    if (iVar25 < iVar24) {
                      uVar27 = func_0x03530c84(uVar27,0);
                      plVar29 = plStack_520;
                      if (plStack_520 != (long *)0x0) {
                        lVar70 = *plStack_520;
                        uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                        if (uVar26 != 0) {
                          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar61 + -2) == _DAT_059deb78) {
                              puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar26 = uVar26 - 1;
                            piVar61 = piVar61 + 4;
                          } while (uVar26 != 0);
                        }
                        puVar39 = (undefined8 *)func_0x024d927c(plStack_520,_DAT_059deb78,1);
LAB_03754d04:
                        uVar34 = (*(code *)*puVar39)(plVar29,puVar39[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uStack_508 = func_0x0430d994(uVar27,uVar34,0);
                        ppppppplStack_530 = (long *******)0x0;
                        ppppppplStack_528 = (long *******)0x0;
                        plVar29 = (long *)func_0x028866e4(&ppppppplStack_530,&uStack_508,
                                                          _DAT_05a27fa0);
                        *(long ********)(lVar31 + 0x88) = ppppppplStack_528;
                        *(long ********)(lVar31 + 0x80) = ppppppplStack_530;
                        return plVar29;
                      }
                    }
                    else if (plStack_520 != (long *)0x0) {
                      lVar70 = *plStack_520;
                      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                      if (uVar26 != 0) {
                        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar61 + -2) == _DAT_059deb78) {
                            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                            goto LAB_03754d7c;
                          }
                          uVar26 = uVar26 - 1;
                          piVar61 = piVar61 + 4;
                        } while (uVar26 != 0);
                      }
                      puVar39 = (undefined8 *)func_0x024d927c(plStack_520,_DAT_059deb78,2);
LAB_03754d7c:
                      plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
                      *(undefined8 *)(lVar31 + 0x80) = 0;
                      *(undefined8 *)(lVar31 + 0x88) = 0;
                      *(int *)(lVar31 + 0x90) = (int)plVar29;
                      return plVar29;
                    }
                  }
                  plVar29 = (long *)func_0x0249fb90();
                  return plVar29;
                }
              }
            }
LAB_036e3670:
            auVar74 = func_0x0249fb90();
            ppppppplStack_4a0 = (long *******)0x36e3674;
            pppppplStack_490 = pppppplVar53;
            plStack_488 = plVar32;
            plStack_480 = plVar29;
            plStack_478 = plVar30;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar70 = *(long *)(auVar74._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar70,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pplStack_498 = (long **)0x0;
            func_0x042539d4(&pplStack_498,auVar74._8_8_ - lVar70,0);
            return (long *)pplStack_498;
          }
        }
      }
    }
  }
  auVar86 = func_0x0249fb90();
  lVar70 = auVar86._8_8_;
  plVar30 = auVar86._0_8_;
  auStack_3a0 = (undefined1  [8])0x37820e8;
  pppppplVar53 = (long ******)0x5e2d000;
  uStack_398 = pppppplVar66;
  ppppppplStack_388 = (long *******)plVar29;
  ppppppplStack_380 = (long *******)ppppplVar65;
  ppppppplStack_378 = (long *******)uVar26;
  ppppppplStack_370 = ppppppplVar47;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
  }
  if (lVar70 != 0) {
    pppppplVar53 = (long ******)func_0x036d5ec8(lVar70,0);
    ppppppplVar44 = (long *******)func_0x036d5f00(lVar70,0);
    if (plVar30 != (long *)0x0) {
      lVar31 = *plVar30;
      puVar46 = &DAT_059df8e8;
      uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
            puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_037821d0:
      uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
      ppppppplVar28 = (long *******)0x0;
      plVar32 = (long *)func_0x036d3908(lVar70,uVar27);
      ppppppplVar47 = ppppppplVar44;
      if (plVar32 != (long *)0x0) {
        lVar31 = *plVar32;
        uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
              puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 3) * 0x10 + 0x138);
              goto LAB_0378224c;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        ppppppplVar28 = (long *******)0x3;
        puVar39 = (undefined8 *)func_0x024d927c(plVar32);
LAB_0378224c:
        plVar35 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
        plVar29 = plVar32;
        if (plVar35 != (long *)0x0) {
          lVar31 = *plVar35;
          uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059deb70) {
                puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb70,2);
LAB_037822b8:
          pppppplVar66 = (long ******)&DAT_059e1498;
          plVar29 = (long *)(*(code *)*puVar39)(plVar35,puVar39[1]);
          lVar31 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
                puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03782320:
          uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
          uVar27 = func_0x036d3908(lVar70,uVar27,0);
          auVar16._8_8_ = uVar27;
          auVar16._0_8_ = plVar30;
          auVar86._8_8_ = uVar27;
          auVar86._0_8_ = plVar30;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          ppppppplVar28 = (long *******)0x0;
          uVar23 = func_0x036c47c0(uVar27,plVar30);
          if ((pppppplVar53 != (long ******)0x0) && (auVar86 = auVar16, plVar29 != (long *)0x0)) {
            pppppplVar66 = (long ******)&DAT_059deb60;
            lVar70 = *plVar29;
            ppppppplVar28 = (long *******)(ulong)*(byte *)((long)pppppplVar53 + 0x94);
            auVar86[8] = *(byte *)((long)pppppplVar53 + 0x94);
            auVar86._0_8_ = CONCAT44(0,uVar23);
            auVar86._9_7_ = 0;
            uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
            puVar46 = (undefined *)
                      CONCAT44(*(undefined4 *)(pppppplVar53 + 0xe),*(undefined4 *)(pppppplVar53 + 2)
                              );
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059deb60) {
                  puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xd) * 0x10 + 0x138);
                  goto LAB_037823d8;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb60,0xd);
LAB_037823d8:
            ppppppplVar51 = (long *******)puVar39[1];
            iVar25 = (*(code *)*puVar39)(plVar29,puVar46);
            if (ppppppplVar44 != (long *******)0x0) {
              func_0x03700d78(ppppppplVar44,(uVar23 - *(int *)(ppppppplVar44 + 2)) - iVar25,
                              CONCAT44(0,uVar23),0);
              *(undefined4 *)(pppppplVar53 + 7) = 0;
              uVar22 = *(undefined4 *)(pppppplVar53 + 2);
              uVar2 = *(undefined4 *)(pppppplVar53 + 0xe);
              lVar70 = *plVar29;
              uVar3 = *(undefined1 *)((long)pppppplVar53 + 0x94);
              uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar61 + -2) == _DAT_059deb60) {
                    puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xd) * 0x10 + 0x138);
                    goto LAB_0378246c;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb60,0xd);
LAB_0378246c:
              plVar29 = (long *)(*(code *)*puVar39)(plVar29,CONCAT44(uVar2,uVar22),uVar3,puVar39[1])
              ;
              *(int *)((long)pppppplVar53 + 0x14) = (int)plVar29 + -1;
              return plVar29;
            }
          }
        }
      }
    }
  }
  plVar32 = auVar86._8_8_;
  auVar87 = func_0x0249fb90();
  lVar31 = auVar87._8_8_;
  plVar30 = auVar87._0_8_;
  ppppplStack_3e0 = (long *****)0x37824a0;
  lVar70 = 0x5e2d000;
  ppppppplStack_3d0 = (long *******)puVar46;
  uStack_3c8 = plVar29;
  uStack_3b0 = ppppppplVar47;
  ppppppplStack_3a8 = (long *******)pppppplVar53;
  if ((bRam0000000005e2df9c & 1) == 0) {
    plStack_3c0 = plVar32;
    auStack_3b8 = (undefined1  [8])auVar86._0_8_;
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    auVar86._8_8_ = plStack_3c0;
    auVar86._0_8_ = auStack_3b8;
    bRam0000000005e2df9c = 1;
  }
  plStack_3c0 = auVar86._8_8_;
  auStack_3b8 = auVar86._0_8_;
  if (plVar30 != (long *)0x0) {
    lVar56 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
      do {
        if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
          puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    ppppppplVar28 = (long *******)0x5;
    puVar39 = (undefined8 *)func_0x024d927c(plVar30);
    auVar86._8_8_ = plStack_3c0;
    auVar86._0_8_ = auStack_3b8;
LAB_03782564:
    plStack_3c0 = auVar86._8_8_;
    auStack_3b8 = auVar86._0_8_;
    uVar27 = (*(code *)*puVar39)(plVar30,puVar39[1]);
    auVar86._8_8_ = plStack_3c0;
    auVar86._0_8_ = auStack_3b8;
    if (lVar31 != 0) {
      ppppppplVar28 = (long *******)0x0;
      plVar29 = (long *)func_0x036d3908(lVar31,uVar27);
      lVar70 = func_0x036d5ee4(lVar31,0);
      lVar31 = func_0x036d5f1c(lVar31,0);
      auVar86._8_8_ = plStack_3c0;
      auVar86._0_8_ = auStack_3b8;
      auVar18._8_8_ = lVar31;
      auVar18._0_8_ = plVar30;
      auVar17._8_8_ = lVar31;
      auVar17._0_8_ = plVar30;
      if (plVar29 != (long *)0x0) {
        lVar56 = *plVar29;
        uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
          do {
            if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
              puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
              goto LAB_03782600;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        ppppppplVar28 = (long *******)0x0;
        puVar39 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03782600:
        plVar35 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
        auVar86._8_8_ = plStack_3c0;
        auVar86._0_8_ = auStack_3b8;
        auVar87 = auVar17;
        if (plVar35 != (long *)0x0) {
          lVar56 = *plVar35;
          uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
          puVar46 = &DAT_059e1498;
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059e0788) {
                puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059e0788,2);
LAB_03782674:
          plVar32 = (long *)(*(code *)*puVar39)(plVar35,puVar39[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          ppppppplVar28 = (long *******)0x0;
          uVar23 = func_0x036c49d4(plVar29,plVar30);
          auVar86._8_8_ = plStack_3c0;
          auVar86._0_8_ = auStack_3b8;
          auVar87 = auVar18;
          if (plVar32 != (long *)0x0) {
            lVar56 = *plVar32;
            ppppppplVar44 = (long *******)CONCAT44(0,uVar23);
            auVar19._8_8_ = lVar31;
            auVar19._0_8_ = ppppppplVar44;
            auVar87._8_8_ = lVar31;
            auVar87._0_8_ = ppppppplVar44;
            plVar29 = (long *)&DAT_059e0780;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059e0780) {
                  puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            ppppppplVar28 = (long *******)0x7;
            puVar39 = (undefined8 *)func_0x024d927c(plVar32);
LAB_03782708:
            iVar25 = (*(code *)*puVar39)(plVar32,puVar39[1]);
            auVar86._8_8_ = plStack_3c0;
            auVar86._0_8_ = auStack_3b8;
            if (lVar31 != 0) {
              ppppppplVar51 = (long *******)0x0;
              func_0x03700d78(lVar31,(uVar23 - *(int *)(lVar31 + 0x10)) - iVar25);
              auVar86._8_8_ = plStack_3c0;
              auVar86._0_8_ = auStack_3b8;
              ppppppplVar28 = ppppppplVar44;
              auVar87 = auVar19;
              if (lVar70 != 0) {
                func_0x03704850(lVar70,0);
                lVar31 = *plVar32;
                uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar61 + -2) == _DAT_059e0780) {
                      puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0780,2);
LAB_03782794:
                plVar29 = (long *)(*(code *)*puVar39)(plVar32,puVar39[1]);
                *(int *)(lVar70 + 0x14) = (int)plVar29 + -1;
                return plVar29;
              }
            }
          }
        }
      }
    }
  }
  plStack_3c0 = auVar86._8_8_;
  auStack_3b8 = auVar86._0_8_;
  auVar88 = func_0x0249fb90();
  auStack_418._0_8_ = 0x37827c0;
  ppppppplVar44 = ppppppplVar28;
  ppppppplVar63 = ppppppplVar51;
  ppppppplVar52 = ppppppplVar62;
  ppppppplStack_420 = (long *******)unaff_x29;
  auStack_418._8_8_ = puVar46;
  ppppppplStack_408 = (long *******)plVar29;
  ppppppplStack_400 = (long *******)plVar32;
  uStack_3e8 = (undefined *)lVar70;
  if ((bRam0000000005e2df9d & 1) == 0) {
    uStack_3f8 = (long *******)auVar87._8_8_;
    auStack_3f0 = (undefined1  [8])auVar87._0_8_;
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    auVar87._8_8_ = uStack_3f8;
    auVar87._0_8_ = auStack_3f0;
    bRam0000000005e2df9d = 1;
  }
  uStack_3f8 = auVar87._8_8_;
  auStack_3f0 = auVar87._0_8_;
  plVar30 = (long *)func_0x0376e450(auVar88._0_8_,auVar88._8_8_);
  plVar29 = (long *)0x5e2d000;
  if (plVar30 == (long *)0x0) {
LAB_037829b0:
    uVar27 = 0x37829b4;
    auVar89 = func_0x0249fb90();
  }
  else {
    ppppppplVar44 = (long *******)0x0;
    plVar29 = (long *)func_0x036d9cf8(plVar30,ppppppplVar51);
    if (((ulong)plVar29 & 1) == 0) {
      return plVar29;
    }
    plVar29 = plVar30;
    if (ppppppplVar51 == (long *******)0x0) goto LAB_037829b0;
    pppppplVar53 = *ppppppplVar51;
    uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar26 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df8e8) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
          goto LAB_03782894;
        }
        uVar26 = uVar26 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar26 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,_DAT_059df8e8,5);
LAB_03782894:
    uVar27 = (*(code *)*pppppplVar53)(ppppppplVar51,pppppplVar53[1]);
    plVar30 = (long *)func_0x036eb4a0(plVar30,uVar27,0);
    if (((ulong)plVar30 & 1) == 0) {
      return plVar30;
    }
    uVar27 = 0x37828c8;
    ppppppplVar44 = ppppppplVar51;
    ppppppplVar63 = ppppppplVar28;
    auVar89 = auVar88;
  }
  uVar34 = auVar89._8_8_;
  lVar70 = auVar89._0_8_;
  ppppppplVar40 = ppppppplVar44;
  ppppppplVar49 = ppppppplVar63;
  uStack_580 = uVar27;
  ppppppplStack_570 = ppppppplVar73;
  puStack_568 = param_5;
  ppppppplStack_560 = ppppppplVar71;
  pppppplStack_558 = pppppplVar66;
  plStack_550 = plVar29;
  ppppppplStack_540 = ppppppplVar51;
  ppppppplStack_530 = ppppppplVar28;
  ppppppplStack_528 = ppppppplVar62;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    puStack_548 = (undefined *)auVar88._0_8_;
    plStack_538 = (long *)auVar88._8_8_;
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    auVar88._8_8_ = plStack_538;
    auVar88._0_8_ = puStack_548;
    bRam0000000005e2dfb7 = 1;
  }
  plStack_538 = auVar88._8_8_;
  puStack_548 = auVar88._0_8_;
  ppppppplVar28 = (long *******)func_0x0376e450(lVar70,uVar34);
  ppppppplVar51 = (long *******)0x5e2d000;
  if (ppppppplVar44 != (long *******)0x0) {
    pppppplVar53 = *ppppppplVar44;
    uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar26 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df8e8) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
          goto LAB_03782a98;
        }
        uVar26 = uVar26 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar26 != 0);
    }
    ppppppplVar40 = (long *******)0x5;
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar44);
LAB_03782a98:
    uVar27 = (*(code *)*pppppplVar53)(ppppppplVar44,pppppplVar53[1]);
    ppppppplVar51 = ppppppplVar28;
    if (ppppppplVar28 != (long *******)0x0) {
      ppppppplVar40 = (long *******)0x0;
      plVar30 = (long *)func_0x036d3908(ppppppplVar28,uVar27);
      if (plVar30 != (long *)0x0) {
        lVar31 = *plVar30;
        param_5 = &DAT_059dfbc0;
        uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
              puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        ppppppplVar40 = (long *******)0x2;
        puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03782b18:
        pppppplVar53 = (long ******)(*(code *)*puVar39)(plVar30,puVar39[1]);
        plVar29 = plVar30;
        if (pppppplVar53 != (long ******)0x0) {
          ppppplVar65 = *pppppplVar53;
          ppppppplVar73 = (long *******)&DAT_059dfe38;
          uVar26 = (ulong)*(ushort *)((long)ppppplVar65 + 0x12e);
          if (uVar26 != 0) {
            pppplVar58 = ppppplVar65[0x16] + 1;
            do {
              if (pppplVar58[-1] == _DAT_059dfe38) {
                ppppplVar65 = ppppplVar65 + (long)(*(int *)pppplVar58 + 2) * 2 + 0x27;
                goto LAB_03782b84;
              }
              uVar26 = uVar26 - 1;
              pppplVar58 = pppplVar58 + 2;
            } while (uVar26 != 0);
          }
          ppppppplVar40 = (long *******)0x2;
          ppppplVar65 = (long *****)func_0x024d927c(pppppplVar53);
LAB_03782b84:
          plVar32 = (long *)(*(code *)*ppppplVar65)(pppppplVar53,ppppplVar65[1]);
          if (((ulong)plVar32 & 1) == 0) {
            return plVar32;
          }
          pppppplVar57 = (long ******)func_0x036d5ffc(ppppppplVar28,0);
          pppppplVar66 = pppppplVar53;
          if (pppppplVar57 != (long ******)0x0) {
            ppppppplVar71 = *(long ********)(lVar70 + 0x30);
            uVar26 = func_0x036d392c(ppppppplVar28,0);
            ppppppplVar49 = (long *******)(uVar26 & 0xffffffff);
            ppppppplVar52 = (long *******)0x0;
            ppppppplVar40 = ppppppplVar71;
            func_0x0374def0(pppppplVar57,ppppppplVar44);
            pppppplVar66 = pppppplVar57;
          }
          lVar31 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
                puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          ppppppplVar40 = (long *******)0x2;
          puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03782c20:
          plVar30 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
          if (plVar30 != (long *)0x0) {
            lVar31 = *plVar30;
            uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long ****)(piVar61 + -2) == _DAT_059dfe38) {
                  puVar39 = (undefined8 *)(lVar31 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            ppppppplVar40 = (long *******)0x0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03782c80:
            plVar32 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
            plVar29 = plVar30;
            if (plVar32 != (long *)0x0) {
              lVar31 = *plVar32;
              uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar61 + -2) == _DAT_059dfe68) {
                    puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfe68,1);
LAB_03782cec:
              ppppppplVar49 = ppppppplVar28;
              ppppppplVar52 = ppppppplVar28;
              ppppppplVar40 =
                   (long *******)
                   (*(code *)*puVar39)(plVar32,ppppppplVar44,lVar70,ppppppplVar28,ppppppplVar28,
                                       ppppppplVar63,puVar39[1]);
              if ((ppppppplVar40 == (long *******)0x0) || (*ppppppplVar40 == _DAT_059e2700)) {
                func_0x037743ac(lVar70,uVar34);
                plVar29 = (long *)func_0x03530c84(ppppppplVar63,0);
                *(long **)(lVar70 + 0x20) = plVar29;
                return plVar29;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar32 = plVar29;
  func_0x0249fb90();
LAB_03782d68:
  auVar90 = func_0x0249ff10(ppppppplVar40);
  plVar29 = auVar90._8_8_;
  lVar31 = auVar90._0_8_;
  uStack_5d0 = 0x3782d70;
  ppppppplVar28 = ppppppplVar40;
  ppppppplVar50 = ppppppplVar49;
  ppppppplVar45 = ppppppplVar52;
  ppppplStack_5e0 = unaff_x29;
  puStack_5c8 = param_5;
  ppppppplStack_5c0 = ppppppplVar71;
  pppppplStack_5b8 = pppppplVar66;
  plStack_5b0 = plVar32;
  ppppppplStack_5a8 = ppppppplVar51;
  ppppppplStack_5a0 = ppppppplVar44;
  ppppppplStack_588 = ppppppplVar63;
  if ((bRam0000000005e2df9e & 1) == 0) {
    uStack_598 = uVar34;
    lStack_590 = lVar70;
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    auVar89._8_8_ = uStack_598;
    auVar89._0_8_ = lStack_590;
    bRam0000000005e2df9e = 1;
  }
  uStack_598 = auVar89._8_8_;
  lStack_590 = auVar89._0_8_;
  plStack_5d8 = (long *)0x0;
  lVar70 = func_0x0376e450(lVar31,ppppppplVar40);
  plVar30 = (long *)0x0;
  if (lVar70 != 0) {
    plVar30 = (long *)func_0x036d06d8(lVar70,0);
    if (((ulong)plVar30 & 1) != 0) {
      ppppppplVar44 = (long *******)func_0x036d5f70(lVar70,0);
      if (plVar29 != (long *)0x0) {
        lVar56 = *plVar29;
        uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
          do {
            if (*(long *****)(piVar61 + -2) == _DAT_059df8e8) {
              puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 5) * 0x10 + 0x138);
              goto LAB_03782e80;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df8e8,5);
LAB_03782e80:
        uVar27 = (*(code *)*puVar39)(plVar29,puVar39[1]);
        ppppppplVar28 = (long *******)0x0;
        pppppplVar53 = (long ******)func_0x036d3908(lVar70,uVar27);
        ppppppplVar71 = ppppppplVar44;
        if (pppppplVar53 != (long ******)0x0) {
          ppppplVar65 = *pppppplVar53;
          uVar26 = (ulong)*(ushort *)((long)ppppplVar65 + 0x12e);
          if (uVar26 != 0) {
            pppplVar58 = ppppplVar65[0x16] + 1;
            do {
              if (pppplVar58[-1] == _DAT_059dfbc0) {
                ppppplVar65 = ppppplVar65 + (long)(*(int *)pppplVar58 + 6) * 2 + 0x27;
                goto LAB_03782efc;
              }
              uVar26 = uVar26 - 1;
              pppplVar58 = pppplVar58 + 2;
            } while (uVar26 != 0);
          }
          ppppppplVar28 = (long *******)0x6;
          ppppplVar65 = (long *****)func_0x024d927c(pppppplVar53);
LAB_03782efc:
          plVar30 = (long *)(*(code *)*ppppplVar65)(pppppplVar53,ppppplVar65[1]);
          pppppplVar66 = pppppplVar53;
          if ((ppppppplVar44 != (long *******)0x0) &&
             (param_5 = (undefined *)0x0, plVar30 != (long *)0x0)) {
            lVar56 = *plVar30;
            pppppplVar66 = ppppppplVar44[5];
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059df030) {
                  puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 9) * 0x10 + 0x138);
                  goto LAB_03782f70;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df030,9);
LAB_03782f70:
            uVar26 = (*(code *)*puVar39)(plVar30,plVar29,pppppplVar66,puVar39[1]);
            func_0x0374a538(&plStack_5d8,uVar26,uVar26 >> 0x20,0);
            func_0x036e1be4(lVar70,0);
            plVar29 = (long *)func_0x03530c84(ppppppplVar49,0);
            *(long **)(lVar31 + 0x20) = plVar29;
            if (ppppppplVar52 == (long *******)0x0) {
              return plVar29;
            }
            plStack_638 = plStack_5d8;
            uVar27 = func_0x0249fa6c(_DAT_059d9ea8,&plStack_638);
            auStack_6f0._0_8_ = 0;
            uStack_678 = 0;
            uStack_680 = 0;
            uStack_668 = 0;
            lStack_670 = 0;
            ppppppplStack_658 = (long *******)0x0;
            lStack_660 = 0;
            ppppppplStack_648 = (long *******)0x0;
            uStack_650 = 0;
            ppppppplStack_688 = (long *******)0x0;
            ppppppplStack_690 = (long *******)0x0;
            func_0x034ba874(&ppppppplStack_690,7,ppppppplVar40,ppppppplVar40,ppppppplVar49,
                            pppppplVar53,0,uVar27);
            pppplVar58 = _DAT_059c9978;
            func_0x054ed0d0(auStack_6e0,&ppppppplStack_690,0x50);
            pppppplVar53 = *ppppppplVar52;
            uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
            if (uVar26 != 0) {
              ppppplVar65 = pppppplVar53[0x16] + 1;
              do {
                if (ppppplVar65[-1] == pppplVar58) {
                  pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
                  goto LAB_0378307c;
                }
                uVar26 = uVar26 - 1;
                ppppplVar65 = ppppplVar65 + 2;
              } while (uVar26 != 0);
            }
            pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar52,pppplVar58,2);
LAB_0378307c:
            ppppplVar65 = *pppppplVar53;
            func_0x054ed0d0(auStack_630,auStack_6e0,0x50);
            plVar29 = (long *)(*(code *)ppppplVar65)(ppppppplVar52,auStack_630,pppppplVar53[1]);
            return plVar29;
          }
        }
      }
      auVar74 = func_0x0249fb90();
      lVar56 = auVar74._0_8_;
      pppppplStack_730 = (long ******)0x37830c4;
      ppppplStack_740 = unaff_x29;
      pppppplStack_728 = pppppplVar66;
      lStack_720 = lVar70;
      ppppppplStack_708 = ppppppplVar40;
      ppppppplStack_700 = ppppppplVar49;
      ppppppplStack_6f8 = ppppppplVar52;
      if ((bRam0000000005e2df9f & 1) == 0) {
        plStack_718 = plVar29;
        puStack_710 = (undefined *)lVar31;
        func_0x0249f8e4(&DAT_059c9978);
        auVar90._8_8_ = plStack_718;
        auVar90._0_8_ = puStack_710;
        bRam0000000005e2df9f = 1;
      }
      plStack_718 = auVar90._8_8_;
      puStack_710 = auVar90._0_8_;
      ppppppplVar44 = (long *******)func_0x0376e450(lVar56,ppppppplVar28);
      plVar29 = (long *)0x0;
      if (ppppppplVar44 != (long *******)0x0) {
        plVar29 = (long *)func_0x036e21f8(ppppppplVar44,0);
        if (((ulong)plVar29 & 1) != 0) {
          func_0x036d7cb4(ppppppplVar44,ppppppplVar50,auVar74._8_8_,lVar56,ppppppplVar28,0);
          uVar27 = func_0x03530c84(ppppppplVar50,0);
          *(undefined8 *)(lVar56 + 0x20) = uVar27;
          auStack_840[0] = 0;
          uStack_7c8 = 0;
          uStack_7d0 = 0;
          uStack_7b8 = 0;
          uStack_7c0 = 0;
          uStack_7a8 = 0;
          uStack_7b0 = 0;
          uStack_798 = 0;
          uStack_7a0 = 0;
          uStack_7d8 = 0;
          uStack_7e0 = 0;
          ppppppplVar51 = ppppppplVar28;
          ppppppplVar63 = ppppppplVar28;
          ppppppplVar52 = ppppppplVar50;
          func_0x034ba874(&uStack_7e0,0xd);
          pppplVar58 = _DAT_059c9978;
          if (ppppppplVar45 == (long *******)0x0) {
            uVar27 = 0x3783264;
            auVar91 = func_0x0249fb90();
            puVar39 = auStack_840;
          }
          else {
            func_0x054ed0d0(auStack_830,&uStack_7e0,0x50);
            pppppplVar53 = *ppppppplVar45;
            uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
            if (uVar26 != 0) {
              ppppplVar65 = pppppplVar53[0x16] + 1;
              do {
                if (ppppplVar65[-1] == pppplVar58) {
                  ppppppplVar44 =
                       (long *******)(pppppplVar53 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27);
                  goto LAB_03783208;
                }
                uVar26 = uVar26 - 1;
                ppppplVar65 = ppppplVar65 + 2;
              } while (uVar26 != 0);
            }
            ppppppplVar44 = (long *******)func_0x024d927c(ppppppplVar45,pppplVar58,2);
LAB_03783208:
            pppppplVar66 = *ppppppplVar44;
            func_0x054ed0d0(auStack_790,auStack_830,0x50);
            (*(code *)pppppplVar66)(ppppppplVar45,auStack_790,ppppppplVar44[1]);
            uVar27 = 0x3783244;
            puVar39 = auStack_840;
            ppppppplVar51 = ppppppplVar45;
            ppppppplVar63 = ppppppplVar28;
            ppppppplVar52 = ppppppplVar50;
            auVar91 = auVar74;
          }
SUB_03783264:
          ppppppplVar40 = ppppppplVar63;
          plVar29 = auVar91._0_8_;
          *(long ******)((long)puVar39 + -0x60) = unaff_x29;
          *(undefined8 *)((long)puVar39 + -0x58) = uVar27;
          *(long ********)((long)puVar39 + -0x50) = ppppppplVar73;
          *(undefined **)((long)puVar39 + -0x48) = param_5;
          *(long ********)((long)puVar39 + -0x40) = ppppppplVar71;
          *(long *******)((long)puVar39 + -0x38) = pppppplVar66;
          *(long ********)((long)puVar39 + -0x30) = ppppppplVar44;
          *(undefined1 (*) [16])((long)puVar39 + -0x28) = auVar74;
          *(long ********)((long)puVar39 + -0x18) = ppppppplVar28;
          *(long ********)((long)puVar39 + -0x10) = ppppppplVar45;
          *(long ********)((long)puVar39 + -8) = ppppppplVar50;
          *(long ********)((long)puVar39 + -0xb8) = ppppppplVar40;
          ppppppplVar63 = ppppppplVar51;
          ppppppplVar73 = ppppppplVar40;
          ppppppplVar28 = ppppppplVar52;
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
          iVar25 = *(int *)(_DAT_059db250 + 0xe4);
          *(undefined8 *)((long)puVar39 + -0xc0) = 0;
          if (iVar25 == 0) {
            func_0x0249fa64();
          }
          ppppppplVar44 = (long *******)func_0x03773874((undefined1 *)((long)puVar39 + -0xb8));
          uVar27 = func_0x0249fb80(_DAT_059c6000);
          auVar93._8_8_ = ppppppplVar63;
          auVar93._0_8_ = ppppppplVar73;
          if (plVar29 != (long *)0x0) {
            uVar37 = 0;
            func_0x02a9aa34(uVar27,plVar29,*(undefined8 *)(*plVar29 + 0x250));
            uVar34 = _DAT_05a447b8;
            ppppppplVar63 = (long *******)func_0x026ec554(ppppppplVar44,uVar27);
            auVar93._8_8_ = uVar34;
            auVar93._0_8_ = uVar37;
            if (ppppppplVar63 != (long *******)0x0) {
              pppppplVar53 = *ppppppplVar63;
              uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
              if (uVar26 != 0) {
                ppppplVar65 = pppppplVar53[0x16] + 1;
                do {
                  if (ppppplVar65[-1] == _DAT_059ca360) {
                    pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar65 * 2 + 0x27;
                    goto LAB_037833d8;
                  }
                  uVar26 = uVar26 - 1;
                  ppppplVar65 = ppppplVar65 + 2;
                } while (uVar26 != 0);
              }
              uVar34 = 0;
              pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar63);
LAB_037833d8:
              ppppppplVar44 = (long *******)(*(code *)*pppppplVar53)(ppppppplVar63,pppppplVar53[1]);
              auVar93._8_8_ = uVar34;
              auVar93._0_8_ = uVar37;
              *(long ********)((long)puVar39 + -0xc0) = ppppppplVar44;
              *(undefined8 *)((long)puVar39 + -0xd0) = 0;
              *(undefined1 **)((long)puVar39 + -200) = (undefined1 *)((long)puVar39 + -0xc0);
              if (ppppppplVar44 == (long *******)0x0) {
LAB_037836dc:
                plVar30 = (long *)func_0x0249fb90();
LAB_037836e0:
                ppppppplVar52 = (long *******)0x0;
                puVar42 = (undefined8 *)((long)puVar39 + -0xc0);
                goto LAB_037836e8;
              }
              ppppppplVar71 = (long *******)&DAT_059df6e0;
              param_5 = &DAT_059cb6b8;
              ppppppplVar73 = (long *******)&DAT_059c9978;
              ppppppplVar63 = ppppppplVar44;
              do {
                uVar27 = auVar93._0_8_;
                pppppplVar53 = *ppppppplVar63;
                uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                if (uVar26 != 0) {
                  ppppplVar65 = pppppplVar53[0x16] + 1;
                  do {
                    if (ppppplVar65[-1] == _DAT_059df6e0) {
                      pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar65 * 2 + 0x27;
                      goto LAB_0378345c;
                    }
                    uVar26 = uVar26 - 1;
                    ppppplVar65 = ppppplVar65 + 2;
                  } while (uVar26 != 0);
                }
                uVar34 = 0;
                pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar63);
                auVar93._8_8_ = uVar34;
                auVar93._0_8_ = uVar27;
LAB_0378345c:
                plVar30 = (long *)(*(code *)*pppppplVar53)(ppppppplVar63,pppppplVar53[1]);
                uVar27 = auVar93._0_8_;
                if (((ulong)plVar30 & 1) == 0) goto LAB_037836e0;
                plVar30 = *(long **)((long)puVar39 + -0xc0);
                if (plVar30 == (long *)0x0) {
                  func_0x0249fb90();
                  ppppppplVar44 = (long *******)0x0;
                  break;
                }
                lVar70 = *plVar30;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 != 0) {
                  piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar61 + -2) == _DAT_059cb6b8) {
                      puVar42 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                      goto LAB_037834c0;
                    }
                    uVar26 = uVar26 - 1;
                    piVar61 = piVar61 + 4;
                  } while (uVar26 != 0);
                }
                uVar34 = 0;
                puVar42 = (undefined8 *)func_0x024d927c(plVar30);
                auVar93._8_8_ = uVar34;
                auVar93._0_8_ = uVar27;
LAB_037834c0:
                ppppppplVar44 = (long *******)(*(code *)*puVar42)(plVar30,puVar42[1]);
                lVar70 = func_0x0376e450(plVar29,ppppppplVar44);
                if (lVar70 != 0) {
                  uVar26 = func_0x036e2208(lVar70,0);
                  if ((uVar26 & 1) != 0) {
                    ppppppplVar28 = ppppppplVar40;
                    auVar93 = auVar91;
                    uVar26 = func_0x036d7cb4(lVar70,ppppppplVar52);
                    if ((uVar26 & 1) != 0) {
                      if (*(int *)(lVar70 + 0x18) == 1) {
                        *(undefined8 *)((long)puVar39 + -0x108) = 0;
                        *(undefined8 *)((long)puVar39 + -0x110) = 0;
                        *(undefined8 *)((long)puVar39 + -0xf8) = 0;
                        *(undefined8 *)((long)puVar39 + -0x100) = 0;
                        *(undefined8 *)((long)puVar39 + -0xe8) = 0;
                        *(undefined8 *)((long)puVar39 + -0xf0) = 0;
                        *(undefined8 *)((long)puVar39 + -0xd8) = 0;
                        *(undefined8 *)((long)puVar39 + -0xe0) = 0;
                        *(undefined8 *)((long)puVar39 + -0x118) = 0;
                        *(undefined8 *)((long)puVar39 + -0x120) = 0;
                        *(undefined8 *)((long)puVar39 + -0x1d0) = 0;
                        ppppppplVar63 = ppppppplVar44;
                        ppppppplVar49 = ppppppplVar44;
                        ppppppplVar28 = ppppppplVar52;
                        func_0x034ba874((undefined1 *)((long)puVar39 + -0x120),0xe);
                        pppplVar58 = _DAT_059c9978;
                        auVar93._8_8_ = ppppppplVar63;
                        auVar93._0_8_ = ppppppplVar49;
                        if (ppppppplVar51 == (long *******)0x0) goto LAB_03783780;
                        func_0x054ed0d0((undefined1 *)((long)puVar39 + -0x1c0),
                                        (undefined1 *)((long)puVar39 + -0x120),0x50);
                        pppppplVar53 = *ppppppplVar51;
                        uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
                        if (uVar26 != 0) {
                          ppppplVar65 = pppppplVar53[0x16] + 1;
                          do {
                            if (ppppplVar65[-1] == pppplVar58) {
                              pppppplVar53 = pppppplVar53 +
                                             (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
                              goto LAB_037836b0;
                            }
                            uVar26 = uVar26 - 1;
                            ppppplVar65 = ppppplVar65 + 2;
                          } while (uVar26 != 0);
                        }
                        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,pppplVar58,2);
LAB_037836b0:
                        ppppplVar68 = *pppppplVar53;
                        func_0x054ed0d0((undefined1 *)((long)puVar39 + -0xb0),
                                        (undefined1 *)((long)puVar39 + -0x1c0),0x50);
                        ppppplVar65 = pppppplVar53[1];
                        (*(code *)ppppplVar68)(ppppppplVar51,(undefined1 *)((long)puVar39 + -0xb0));
                        auVar93._8_8_ = ppppplVar65;
                        auVar93._0_8_ = ppppppplVar49;
                      }
                      else if (*(int *)(lVar70 + 0x18) == 2) goto code_r0x03783528;
                    }
                  }
                }
                ppppppplVar63 = *(long ********)((long)puVar39 + -0xc0);
                if (ppppppplVar63 == (long *******)0x0) goto LAB_037836dc;
              } while( true );
            }
          }
          func_0x0249fb90();
          goto LAB_0378377c;
        }
      }
      return plVar29;
    }
  }
  return plVar30;
code_r0x033c4070:
  uVar26 = (**(code **)(*plVar30 + 0x1b8))(plVar30,auVar74._8_8_,*(undefined8 *)(*plVar30 + 0x1c0));
  if ((uVar26 & 1) == 0) {
LAB_033c4084:
    uVar23 = uVar23 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppppppplVar44 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppppppplVar44 + -0xb0));
  func_0x0258f7ac(uVar34);
  auVar74 = func_0x022bd790();
  plVar35 = auVar74._8_8_;
  plVar32 = auVar74._0_8_;
  *(undefined8 *)((long)ppppppplVar44 + -0xe0) = 0x33c45c4;
  *(long *******)((long)ppppppplVar44 + -0xd0) = pppppplVar53;
  *(long **)((long)ppppppplVar44 + -200) = plVar30;
  *(long **)((long)ppppppplVar44 + -0xc0) = plVar29;
  *(undefined8 *)((long)ppppppplVar44 + -0xb8) = uVar34;
  uVar34 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar35 != (long *)0x0) {
    lVar70 = *plVar35;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *****)(piVar61 + -2) == _DAT_059e0220) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    uVar27 = 6;
    puVar39 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033c466c:
    lVar70 = (*(code *)*puVar39)(plVar35,puVar39[1]);
    if (plVar32 != (long *)0x0) {
      lVar56 = *plVar32;
      pppppplVar53 = (long ******)&DAT_059dfa78;
      uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
        do {
          if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
            puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      uVar27 = 1;
      puVar39 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033c46d8:
      uVar22 = (*(code *)*puVar39)(plVar32,puVar39[1]);
      uVar34 = 0;
      if (lVar70 != 0) {
        uVar26 = func_0x0387c57c(lVar70,uVar22,0);
        if ((uVar26 & 1) != 0) {
          return (long *)0x3;
        }
        lVar56 = *plVar32;
        uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
              puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar26 = (*(code *)*puVar39)(plVar32,puVar39[1]);
        if ((uVar26 & 1) == 0) {
          lVar56 = *plVar32;
          uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
          if (uVar26 != 0) {
            piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
                puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar26 = uVar26 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar26 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar26 = (*(code *)*puVar39)(plVar32,puVar39[1]);
          if ((uVar26 & 1) == 0) {
            lVar56 = *plVar32;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
                  puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,1);
LAB_033c4814:
            uVar22 = (*(code *)*puVar39)(plVar32,puVar39[1]);
            uVar26 = func_0x0387cc50(lVar70,uVar22,0);
            if ((uVar26 & 1) != 0) {
              return (long *)0x2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        ppppppplVar63 = (long *******)0x0;
        uVar26 = func_0x03603060(plVar32,plVar35,1);
        if ((uVar26 & 1) == 0) {
          return (long *)0x5;
        }
        lVar56 = *plVar32;
        uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
              puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar26 = (*(code *)*puVar39)(plVar32,puVar39[1]);
        if ((uVar26 & 1) == 0) {
          uVar23 = func_0x033c4128(plVar32,plVar35);
          return (long *)(ulong)((uVar23 ^ 0xffffffff) & 1);
        }
        uVar27 = 0x33c48e0;
        ppppppplVar44 = (long *******)((long)ppppppplVar44 + -0xe0);
        auVar91 = auVar74;
        goto SUB_033c3e04;
      }
    }
  }
  auVar91 = func_0x0249fb90();
  plVar29 = auVar91._8_8_;
  lVar70 = auVar91._0_8_;
  *(undefined8 *)((long)ppppppplVar44 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppppppplVar44 + -0xf8) = uVar34;
  *(undefined1 (*) [16])((long)ppppppplVar44 + -0xf0) = auVar74;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar29 == (long *)0x0) goto LAB_033c4a08;
  lVar56 = *plVar29;
  uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
  if (uVar26 == 0) goto LAB_033c4978;
  piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
  goto LAB_033c4960;
code_r0x03783528:
  *(undefined8 *)((long)puVar39 + -0x108) = 0;
  *(undefined8 *)((long)puVar39 + -0x110) = 0;
  *(undefined8 *)((long)puVar39 + -0xf8) = 0;
  *(undefined8 *)((long)puVar39 + -0x100) = 0;
  *(undefined8 *)((long)puVar39 + -0xe8) = 0;
  *(undefined8 *)((long)puVar39 + -0xf0) = 0;
  *(undefined8 *)((long)puVar39 + -0xd8) = 0;
  *(undefined8 *)((long)puVar39 + -0xe0) = 0;
  *(undefined8 *)((long)puVar39 + -0x118) = 0;
  *(undefined8 *)((long)puVar39 + -0x120) = 0;
  *(undefined8 *)((long)puVar39 + -0x1d0) = 0;
  ppppppplVar63 = ppppppplVar44;
  ppppppplVar49 = ppppppplVar44;
  ppppppplVar28 = ppppppplVar52;
  func_0x034ba874((undefined1 *)((long)puVar39 + -0x120),0xd);
  pppplVar58 = _DAT_059c9978;
  auVar93._8_8_ = ppppppplVar63;
  auVar93._0_8_ = ppppppplVar49;
  if (ppppppplVar51 == (long *******)0x0) goto LAB_0378377c;
  func_0x054ed0d0((undefined1 *)((long)puVar39 + -0x170),(undefined1 *)((long)puVar39 + -0x120),0x50
                 );
  pppppplVar66 = *ppppppplVar51;
  uVar26 = (ulong)*(ushort *)((long)pppppplVar66 + 0x12e);
  if (uVar26 != 0) {
    ppppplVar65 = pppppplVar66[0x16] + 1;
    do {
      if (ppppplVar65[-1] == pppplVar58) {
        pppppplVar66 = pppppplVar66 + (long)(*(int *)ppppplVar65 + 2) * 2 + 0x27;
        goto LAB_03783660;
      }
      uVar26 = uVar26 - 1;
      ppppplVar65 = ppppplVar65 + 2;
    } while (uVar26 != 0);
  }
  pppppplVar66 = (long ******)func_0x024d927c(ppppppplVar51,pppplVar58,2);
LAB_03783660:
  unaff_x29 = *pppppplVar66;
  func_0x054ed0d0((undefined1 *)((long)puVar39 + -0xb0),(undefined1 *)((long)puVar39 + -0x170),0x50)
  ;
  (*(code *)unaff_x29)(ppppppplVar51,(undefined1 *)((long)puVar39 + -0xb0),pppppplVar66[1]);
  uVar27 = 0x378369c;
  puVar39 = (undefined8 *)((long)puVar39 + -0x1d0);
  ppppppplVar63 = ppppppplVar44;
  ppppppplVar50 = ppppppplVar52;
  ppppppplVar45 = ppppppplVar40;
  ppppppplVar28 = ppppppplVar51;
  auVar74 = auVar91;
  goto SUB_03783264;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar61 = piVar61 + 4;
    if (uVar26 == 0) break;
LAB_033c3118:
    if (*(long *****)(piVar61 + -2) == _DAT_059defe8) {
      puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059defe8,0xd);
  auVar6._8_8_ = uStack_500;
  auVar6._0_8_ = puStack_4f8;
LAB_033c3150:
  uStack_500 = auVar6._8_8_;
  puStack_4f8 = auVar6._0_8_;
  lVar70 = (*(code *)*puVar39)(plVar32,plVar35,puVar39[1]);
  if (lVar70 == 0) {
    uVar23 = 0;
  }
  else {
    uStack_508 = func_0x0376eb00(ppppppplVar63,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar23 = func_0x0376edd4(&uStack_508,0);
    uVar23 = uVar23 ^ 1;
  }
  return (long *)(ulong)(uVar23 & 1);
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar61 = piVar61 + 4;
    if (uVar26 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
      puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar24 = (*(code *)*puVar39)(plVar29,puVar39[1]);
  return (long *)(ulong)(iVar25 == iVar24);
  while( true ) {
    uVar59 = uVar59 - 1;
    piVar61 = piVar61 + 4;
    if (uVar59 == 0) break;
LAB_033c32a0:
    if (*(long *****)(piVar61 + -2) == _DAT_059defe8) {
      puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar39 = (undefined8 *)func_0x024d927c(plVar43,_DAT_059defe8,0x16);
LAB_033c32d8:
  ppppppplVar44 = (long *******)puVar39[1];
  auVar77 = (*(code *)*puVar39)(plVar43,uVar60);
  uVar27 = auVar77._8_8_;
  lVar31 = auVar77._0_8_;
  if (lVar31 == 0) {
    return (long *)0x0;
  }
  ppppppplVar73 = (long *******)&DAT_059db250;
  ppppppplStack_578 = (long *******)func_0x0376eb00(lVar70,0);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar60 = func_0x0376edd4(&ppppppplStack_578,0);
  if ((uVar60 & 1) != 0) {
    return (long *)0x0;
  }
  if (ppppppplVar28 != (long *******)0x0) {
    pppppplVar53 = *ppppppplVar28;
    ppppppplVar73 = (long *******)&DAT_059df8e8;
    uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar60 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df8e8) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
          goto LAB_033c3394;
        }
        uVar60 = uVar60 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar60 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar28,_DAT_059df8e8,5);
LAB_033c3394:
    uVar34 = (*(code *)*pppppplVar53)(ppppppplVar28,pppppplVar53[1]);
    ppppppplVar44 = (long *******)0x0;
    uVar60 = func_0x036ec4b4(lVar31,uVar34);
    if ((uVar60 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar27 = func_0x03530158(uVar27,0);
      uVar27 = func_0x03530310(ppppppplVar47,uVar27,0);
      pppppplVar53 = *ppppppplVar28;
      uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
      if (uVar60 != 0) {
        ppppplVar65 = pppppplVar53[0x16] + 1;
        do {
          if (ppppplVar65[-1] == _DAT_059df8e8) {
            pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
            goto LAB_033c343c;
          }
          uVar60 = uVar60 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar60 != 0);
      }
      pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar28,_DAT_059df8e8,5);
LAB_033c343c:
      ppppppplVar44 = (long *******)(*(code *)*pppppplVar53)(ppppppplVar28,pppppplVar53[1]);
      ppppppplVar52 = (long *******)0x0;
      func_0x036e24f4(lVar31,uVar27);
    }
    auVar8._8_8_ = uVar27;
    auVar8._0_8_ = lVar31;
    auVar7._8_8_ = uVar27;
    auVar7._0_8_ = lVar31;
    auVar77._8_8_ = uVar27;
    auVar77._0_8_ = lVar31;
    if (lVar70 != 0) {
      func_0x03785f38(lVar70,ppppppplStack_578,lVar31,ppppppplVar47,ppppppplVar51,ppppppplVar28,0);
      if (((ulong)ppppppplVar45 & 1) == 0) {
        return (long *)0x1;
      }
      uVar26 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar26,_DAT_05a192a0);
      ppppppplVar51 = ppppppplStack_578;
      pppppplVar53 = *ppppppplVar28;
      uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
      if (uVar60 != 0) {
        ppppplVar65 = pppppplVar53[0x16] + 1;
        do {
          if (ppppplVar65[-1] == _DAT_059df8e8) {
            pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
            goto LAB_033c34fc;
          }
          uVar60 = uVar60 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar60 != 0);
      }
      pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar28,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar27 = (*(code *)*pppppplVar53)(ppppppplVar28,pppppplVar53[1]);
      ppppppplVar71 = (long *******)func_0x036d3908(lVar31,uVar27,0);
      auStack_630[0] = 0;
      pppppplStack_5b8 = (long ******)0x0;
      ppppppplStack_5c0 = (long *******)0x0;
      ppppppplStack_5a8 = (long *******)0x0;
      plStack_5b0 = (long *)0x0;
      uStack_598 = 0;
      ppppppplStack_5a0 = (long *******)0x0;
      ppppppplStack_588 = (long *******)0x0;
      lStack_590 = 0;
      puStack_5c8 = (undefined *)0x0;
      uStack_5d0 = 0;
      ppppppplVar44 = ppppppplVar51;
      ppppppplVar52 = ppppppplVar51;
      ppppppplVar40 = ppppppplVar47;
      func_0x034ba874(&uStack_5d0,9);
      auVar77 = auVar7;
      if (uVar26 != 0) {
        func_0x054ed0d0(auStack_620,&uStack_5d0,0x50);
        ppppppplVar44 = _DAT_05a192a8;
        func_0x025a1da8(uVar26,auStack_620);
        pppppplVar53 = *ppppppplVar28;
        uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
        if (uVar60 != 0) {
          ppppplVar65 = pppppplVar53[0x16] + 1;
          do {
            if (ppppplVar65[-1] == _DAT_059e0220) {
              pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 0x17) * 2 + 0x27;
              goto LAB_033c35d4;
            }
            uVar60 = uVar60 - 1;
            ppppplVar65 = ppppplVar65 + 2;
          } while (uVar60 != 0);
        }
        ppppppplVar44 = (long *******)0x17;
        pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar28);
LAB_033c35d4:
        plVar29 = (long *)(*(code *)*pppppplVar53)(ppppppplVar28,pppppplVar53[1]);
        lVar31 = *plVar43;
        uVar60 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar60 != 0) {
          piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *****)(piVar61 + -2) == _DAT_059defe8) {
              puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar60 = uVar60 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar60 != 0);
        }
        ppppppplVar44 = (long *******)0x2;
        puVar39 = (undefined8 *)func_0x024d927c(plVar43);
LAB_033c3634:
        uVar27 = (*(code *)*puVar39)(plVar43,puVar39[1]);
        ppppppplVar28 = (long *******)0x0;
        auVar77 = auVar8;
        if (plVar29 != (long *)0x0) {
          lVar70 = *plVar29;
          uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
          if (uVar60 != 0) {
            piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059e0280) {
                puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar60 = uVar60 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar60 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar39)(plVar29,uVar27,uVar26,puVar39[1]);
          return (long *)0x1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar31 = auVar77._8_8_;
  auVar74 = func_0x0249fb90();
  pppppplVar53 = auVar74._8_8_;
  puVar67 = auVar74._0_8_;
  uStack_680 = 0x33c36d8;
  puVar48 = (undefined *)0x5e2c000;
  puVar69 = (undefined *)((ulong)ppppppplVar52 & 0xffffffff);
  ppppppplVar63 = ppppppplVar52;
  ppppppplStack_658 = ppppppplVar51;
  uStack_650 = uVar26;
  ppppppplStack_648 = ppppppplVar47;
  ppppppplStack_640 = ppppppplVar28;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_670 = lVar31;
    uStack_668 = auVar77._0_8_;
    lStack_660 = lVar70;
    plStack_638 = plVar43;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar77._8_8_ = lStack_670;
    auVar77._0_8_ = uStack_668;
    auVar76._8_8_ = plStack_638;
    auVar76._0_8_ = lStack_660;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_670 = auVar77._8_8_;
  uStack_668 = auVar77._0_8_;
  plStack_638 = auVar76._8_8_;
  lStack_660 = auVar76._0_8_;
  if (puVar67 != (undefined *)0x0) {
    uVar27 = func_0x0376e450(puVar67,pppppplVar53,0);
    auVar76._8_8_ = plStack_638;
    auVar76._0_8_ = lStack_660;
    auVar77._8_8_ = lStack_670;
    auVar77._0_8_ = uStack_668;
    if (ppppppplVar71 != (long *******)0x0) {
      pppppplVar66 = *ppppppplVar71;
      uVar26 = (ulong)*(ushort *)((long)pppppplVar66 + 0x12e);
      if (uVar26 != 0) {
        ppppplVar65 = pppppplVar66[0x16] + 1;
        do {
          if (ppppplVar65[-1] == _DAT_059df8e8) {
            pppppplVar66 = pppppplVar66 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
            goto LAB_033c3798;
          }
          uVar26 = uVar26 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar26 != 0);
      }
      pppppplVar66 = (long ******)func_0x024d927c(ppppppplVar71,_DAT_059df8e8,5);
LAB_033c3798:
      uVar34 = (*(code *)*pppppplVar66)(ppppppplVar71,pppppplVar66[1]);
      uVar23 = func_0x036edd98(uVar27,uVar34,0);
      if ((uVar23 & 1) != 0) {
        if (((ulong)ppppppplVar52 & 1) == 0) {
          func_0x03780be8(puVar67,pppppplVar53,ppppppplVar44,ppppppplVar40,0,ppppppplVar71,0);
        }
        else {
          func_0x036eaf0c(uVar27,0);
          func_0x03780be8(puVar67,pppppplVar53,ppppppplVar44,ppppppplVar40,0,ppppppplVar71,0);
          func_0x036eadfc(uVar27,0);
        }
      }
      return (long *)(ulong)(uVar23 & 1);
    }
  }
  plStack_638 = auVar76._8_8_;
  lStack_660 = auVar76._0_8_;
  lStack_670 = auVar77._8_8_;
  uStack_668 = auVar77._0_8_;
  lVar70 = func_0x0249fb90();
  puVar39 = &uStack_6a0;
  uStack_6a0 = 0x33c383c;
  uVar27 = 0x5e2c000;
  ppppppplStack_698 = ppppppplVar44;
  ppppppplStack_690 = ppppppplVar40;
  ppppppplStack_688 = ppppppplVar71;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar70 != 0) {
    ppppppplVar44 = (long *******)func_0x0367613c(lVar70,0);
    iVar25 = func_0x03676288(lVar70,0);
    if ((ppppppplVar44 != (long *******)0x0) && (*(long *)(lVar70 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar70 + 0x338) + 0x10) = *(int *)((long)ppppppplVar44 + 0x24) * iVar25;
      func_0x03675f48(lVar70,iVar25,0);
      if ((iVar25 != 0) || (*(int *)(lVar70 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar29 = (long *)func_0x03633f50(lVar70,0);
        if (((ulong)plVar29 & 1) != 0) {
          return plVar29;
        }
      }
      *(undefined4 *)(lVar70 + 0x358) = 0;
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      plVar29 = (long *)func_0x028a379c(lVar70,_DAT_05a2aaf0);
      *(long **)(lVar70 + 0x340) = plVar29;
      return plVar29;
    }
  }
  uVar34 = 0x33c3914;
  auVar78 = func_0x0249fb90();
  if (auVar78._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar39 + -0x20) = uVar34;
      *(long ********)((long)puVar39 + -0x18) = ppppppplVar44;
      *(undefined8 *)((long)puVar39 + -0x10) = uVar27;
      *(long *)((long)puVar39 + -8) = lVar70;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar70 = *(long *)(auVar78._8_8_ + 0x38);
      if (lVar70 != 0) {
        *(int *)((long)puVar39 + -0x24) = auVar78._0_4_;
        uVar23 = func_0x02893128(lVar70,(undefined1 *)((long)puVar39 + -0x24),_DAT_05a2a588);
        return (long *)(ulong)(uVar23 & 1);
      }
      auVar74 = func_0x0249fb90();
      plVar29 = auVar74._8_8_;
      *(undefined8 *)((long)puVar39 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar39 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar39 + -0x40) = auVar78._8_8_;
      *(ulong *)((long)puVar39 + -0x38) = auVar78._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar29 == (long *)0x0) {
        auVar91 = func_0x0249fb90();
        *(undefined8 *)((long)puVar39 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar39 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar39 + -0x60) = 0;
        *(long *)((long)puVar39 + -0x58) = auVar74._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar70 = *(long *)(auVar91._0_8_ + 0xe8);
        if (lVar70 != 0) {
          *(int *)((long)puVar39 + -0x74) = auVar91._8_4_;
          uVar23 = func_0x02893128(lVar70,(undefined1 *)((long)puVar39 + -0x74),_DAT_05a2a588);
          return (long *)(ulong)(uVar23 & 1);
        }
        auVar74 = func_0x0249fb90();
        *(undefined8 *)((long)puVar39 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar39 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar39 + -0x90) = auVar91._0_8_;
        *(ulong *)((long)puVar39 + -0x88) = auVar91._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar70 = *(long *)(auVar74._0_8_ + 0xe8);
        if (lVar70 != 0) {
          *(int *)((long)puVar39 + -0xa4) = auVar74._8_4_;
          plVar29 = (long *)func_0x028926c4(lVar70,(undefined1 *)((long)puVar39 + -0xa4),
                                            _DAT_05a2a578);
          return plVar29;
        }
        lVar70 = func_0x0249fb90();
        *(undefined8 *)((long)puVar39 + -0xd0) = 0x387e970;
        *(long *)((long)puVar39 + -0xc0) = auVar74._0_8_;
        *(ulong *)((long)puVar39 + -0xb8) = auVar74._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar70 + 0xf0) == 0) {
          plVar29 = (long *)0x0;
        }
        else {
          plVar29 = (long *)(ulong)*(uint *)(*(long *)(lVar70 + 0xf0) + 0x20);
        }
        return plVar29;
      }
      lVar70 = *plVar29;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar61 + -2) == _DAT_059dfbc0) {
            puVar42 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar42 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar27 = (*(code *)*puVar42)(plVar29,puVar42[1]);
      auVar78._8_8_ = auVar74._0_8_;
      auVar78._0_8_ = uVar27;
      uVar27 = *(undefined8 *)((long)puVar39 + -0x40);
      lVar70 = *(long *)((long)puVar39 + -0x38);
      uVar34 = *(undefined8 *)((long)puVar39 + -0x50);
      ppppppplVar44 = *(long ********)((long)puVar39 + -0x48);
      puVar39 = (undefined8 *)((long)puVar39 + -0x30);
    } while( true );
  }
  uStack_6b0 = 0x33c3914;
  auVar74 = func_0x0249fb90();
  plVar29 = auVar74._0_8_;
  auStack_6e0[0] = 0x33c3934;
  uStack_6c0 = 0x5e2c000;
  pppppplStack_6d0 = pppppplVar53;
  ppppppplStack_6c8 = ppppppplVar44;
  lStack_6b8 = lVar70;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar29 == (long *)0x0) {
    pppppplVar66 = (long ******)0x33c3cc8;
    auVar91 = func_0x0249fb90();
  }
  else {
    lVar70 = *plVar29;
    pppppplVar53 = (long ******)&DAT_059dfa78;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar70 = (*(code *)*puVar39)(plVar29,puVar39[1]);
    if (lVar70 == 0) {
      return (long *)0x0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar26 = func_0x035fb854(plVar29,auVar74._8_8_,0);
    if ((uVar26 & 1) == 0) {
      return (long *)0x0;
    }
    pppppplVar66 = (long ******)0x33c3a24;
    auVar91 = auVar74;
  }
  plVar30 = auVar91._8_8_;
  plVar29 = auVar91._0_8_;
  ppppppplStack_6f8 = (long *******)0x5e2c000;
  lVar70 = 0x5e2c000;
  ppppppplStack_700 = (long *******)pppppplVar66;
  auStack_6f0 = auVar74;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar29 == (long *)0x0) {
    uVar27 = 0x33c3e04;
    auVar74 = func_0x0249fb90();
    auVar20._8_8_ = 0;
    auVar20._0_8_ = plVar30;
    ppppppplVar44 = (long *******)&ppppppplStack_700;
    auVar91 = auVar20 << 0x40;
SUB_033c3e04:
    plVar29 = auVar74._0_8_;
    *(undefined8 *)((long)ppppppplVar44 + -0x30) = uVar27;
    *(undefined **)((long)ppppppplVar44 + -0x28) = puVar67;
    *(long *******)((long)ppppppplVar44 + -0x20) = pppppplVar53;
    *(long *)((long)ppppppplVar44 + -0x18) = lVar70;
    *(undefined1 (*) [16])((long)ppppppplVar44 + -0x10) = auVar91;
    puVar64 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)((long)ppppppplVar44 + -0x50) = 0;
    *(undefined8 *)((long)ppppppplVar44 + -0x48) = 0;
    *(undefined8 *)((long)ppppppplVar44 + -0x40) = 0;
    if (plVar29 != (long *)0x0) {
      lVar70 = *plVar29;
      puVar64 = &DAT_059dfa78;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar26 = (*(code *)*puVar39)(plVar29,puVar39[1]);
      if ((uVar26 & 1) == 0) goto LAB_033c40ec;
      lVar70 = *plVar29;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar30 = (long *)(*(code *)*puVar39)(plVar29,auVar74._8_8_,puVar39[1]);
      if (plVar30 != (long *)0x0) {
        lVar70 = *plVar30;
        uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059dec98) {
              puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dec98,4);
LAB_033c3fac:
        lVar70 = (*(code *)*puVar39)(plVar30,puVar39[1]);
        plVar29 = plVar30;
        if (lVar70 != 0) {
          func_0x028310e8(lVar70,(undefined1 *)((long)ppppppplVar44 + -0x50),_DAT_05a1a750);
          pppppplVar53 = (long ******)&DAT_05a047f0;
          puVar67 = &DAT_05a047f8;
          *(undefined8 *)((long)ppppppplVar44 + -0x60) = 0;
          *(undefined1 **)((long)ppppppplVar44 + -0x58) =
               (undefined1 *)((long)ppppppplVar44 + -0x50);
LAB_033c3fe8:
          uVar23 = func_0x02a5d2d0((undefined1 *)((long)ppppppplVar44 + -0x50),_DAT_05a047f0);
          lVar70 = _DAT_05a047f8;
          plVar29 = (long *)(ulong)uVar23;
          if ((uVar23 & 1) == 0) goto LAB_033c4084;
          lVar33 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar4 = *(ushort *)(lVar33 + 0x135);
          lVar56 = lVar33;
          if ((uVar4 & 1) == 0) {
            lVar56 = func_0x024d8f40();
            lVar33 = *(long *)(lVar70 + 0x20);
            uVar4 = *(ushort *)(lVar33 + 0x135);
          }
          puVar64 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar56 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar4 & 1) == 0) {
            lVar33 = func_0x024d8f40();
          }
          uVar27 = func_0x0249f90c((undefined1 *)((long)ppppppplVar44 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar33 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppppppplVar44 + -0x38),uVar27,puVar64);
          plVar30 = *(long **)((long)ppppppplVar44 + -0x38);
          if (plVar30 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar92 = func_0x0249fb90();
    uVar27 = auVar92._0_8_;
    if (auVar92._8_4_ == 1) {
      plVar30 = (long *)func_0x054ed080(uVar27);
      lVar70 = *plVar30;
      *(long *)((long)ppppppplVar44 + -0x60) = lVar70;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)((long)ppppppplVar44 + -0x58),_DAT_05a047e8);
      if (lVar70 == 0) {
LAB_033c40ec:
        uVar23 = 1;
LAB_033c40f0:
        return (long *)(ulong)(uVar23 & 1);
      }
      uVar27 = func_0x0249fb88(lVar70);
    }
    func_0x022c29f0((undefined1 *)((long)ppppppplVar44 + -0x60));
    func_0x0258f7ac(uVar27);
    auVar74 = func_0x022bd790();
    plVar32 = auVar74._8_8_;
    plVar30 = auVar74._0_8_;
    *(undefined8 *)((long)ppppppplVar44 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppppppplVar44 + -0x90) = puVar69;
    *(undefined **)((long)ppppppplVar44 + -0x88) = puVar67;
    *(long *******)((long)ppppppplVar44 + -0x80) = pppppplVar53;
    *(undefined **)((long)ppppppplVar44 + -0x78) = puVar64;
    *(long **)((long)ppppppplVar44 + -0x70) = plVar29;
    *(undefined8 *)((long)ppppppplVar44 + -0x68) = uVar27;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    pppppplVar53 = (long ******)0x0;
    *(undefined8 *)((long)ppppppplVar44 + -0x98) = 0;
    if ((plVar30 != (long *)0x0) && (plVar32 != (long *)0x0)) {
      lVar70 = *plVar32;
      uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *****)(piVar61 + -2) == _DAT_059e0220) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0220,6);
LAB_033c4208:
      lVar70 = (*(code *)*puVar39)(plVar32,puVar39[1]);
      lVar56 = *plVar30;
      pppppplVar53 = (long ******)&DAT_059dfa78;
      uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
      if (uVar26 != 0) {
        piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
        do {
          if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
            puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar26 = uVar26 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar26 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar27 = puVar39[1];
      plVar29 = (long *)(*(code *)*puVar39)(plVar30,plVar32);
      if (plVar29 != (long *)0x0) {
        lVar56 = *plVar29;
        uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059ca7c8) {
              puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        uVar27 = 0;
        puVar39 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033c42e4:
        plVar32 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
        *(long **)((long)ppppppplVar44 + -0x98) = plVar32;
        *(undefined8 *)((long)ppppppplVar44 + -0xb0) = 0;
        *(undefined1 **)((long)ppppppplVar44 + -0xa8) = (undefined1 *)((long)ppppppplVar44 + -0x98);
        if (plVar32 != (long *)0x0) {
          puVar67 = &DAT_059df6e0;
          puVar69 = &DAT_059cbb20;
          do {
            lVar56 = *plVar32;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *****)(piVar61 + -2) == _DAT_059df6e0) {
                  puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            uVar27 = 0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033c4360:
            uVar26 = (*(code *)*puVar39)(plVar32,puVar39[1]);
            plVar29 = (long *)(uVar26 & 0xffffffff);
            if ((uVar26 & 1) == 0) goto LAB_033c44b8;
            plVar30 = *(long **)((long)ppppppplVar44 + -0x98);
            if (plVar30 == (long *)0x0) {
              func_0x0249fb90();
              plVar30 = (long *)0x0;
LAB_033c4550:
              auVar79 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar79._0_8_,auVar79._8_8_);
              goto LAB_033c4558;
            }
            lVar56 = *plVar30;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059cbb20) {
                  puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            uVar27 = 0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c43c8:
            plVar30 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
            if (plVar30 == (long *)0x0) goto LAB_033c4550;
            lVar56 = *plVar30;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
                  puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            uVar27 = 0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c4428:
            iVar25 = (*(code *)*puVar39)(plVar30,puVar39[1]);
            if (iVar25 != 0) {
              lVar56 = *plVar30;
              uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
              if (uVar26 != 0) {
                piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
                    puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar26 = uVar26 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar26 != 0);
              }
              uVar27 = 1;
              puVar39 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c4488:
              uVar26 = (*(code *)*puVar39)(plVar30,puVar39[1]);
              auVar79._8_8_ = uVar26 & 0xffffffff;
              auVar79._0_8_ = uVar26;
              if (lVar70 == 0) goto LAB_033c4554;
              uVar27 = 0;
              uVar26 = func_0x0387cc50(lVar70);
              if ((uVar26 & 1) == 0) goto LAB_033c44b8;
            }
            plVar32 = *(long **)((long)ppppppplVar44 + -0x98);
            plVar29 = (long *)0x0;
          } while (plVar32 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar70 = 0;
        pppppplVar53 = (long ******)(ulong)((uint)plVar29 ^ 1);
        puVar39 = (undefined8 *)((long)ppppppplVar44 + -0x98);
        do {
          plVar29 = (long *)*puVar39;
          if (plVar29 != (long *)0x0) {
            lVar56 = *plVar29;
            uVar26 = (ulong)*(ushort *)(lVar56 + 0x12e);
            if (uVar26 != 0) {
              piVar61 = (int *)(*(long *)(lVar56 + 0xb0) + 8);
              do {
                if (*(long *****)(piVar61 + -2) == _DAT_059df598) {
                  puVar39 = (undefined8 *)(lVar56 + (long)*piVar61 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar26 = uVar26 - 1;
                piVar61 = piVar61 + 4;
              } while (uVar26 != 0);
            }
            uVar27 = 0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033c4520:
            (*(code *)*puVar39)(plVar29,puVar39[1]);
          }
          if (lVar70 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar92 = func_0x0249fb88(lVar70);
          uVar34 = auVar92._0_8_;
          if (auVar92._8_4_ != 1) goto LAB_033c45b0;
          plVar29 = (long *)func_0x054ed080(uVar34);
          lVar70 = *plVar29;
          *(long *)((long)ppppppplVar44 + -0xb0) = lVar70;
          func_0x054ed090();
          puVar39 = *(undefined8 **)((long)ppppppplVar44 + -0xa8);
          pppppplVar53 = (long ******)0x1;
        } while( true );
      }
      pppppplVar53 = (long ******)0x1;
    }
LAB_033c4530:
    return (long *)(ulong)((uint)pppppplVar53 & 1);
  }
  lVar70 = *plVar29;
  uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
  if (uVar26 != 0) {
    piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
    do {
      if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
        puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar26 = uVar26 - 1;
      piVar61 = piVar61 + 4;
    } while (uVar26 != 0);
  }
  puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar26 = (*(code *)*puVar39)(plVar29,puVar39[1]);
  if ((uVar26 & 1) != 0) {
    lVar70 = *plVar29;
    uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar26 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar26 = uVar26 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar26 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar27 = (*(code *)*puVar39)(plVar29,puVar39[1]);
    uVar27 = func_0x033c88e0(uVar27,plVar30,0,0);
    uVar26 = func_0x033c9114(uVar27,plVar30);
    if ((uVar26 & 1) == 0) {
      pppppplStack_730 = (long ******)ppppppplStack_700;
      plStack_718 = (long *)0x5e2c000;
      pppppplStack_728 = (long ******)puVar46;
      lStack_720 = lVar31;
      puStack_710 = puVar69;
      ppppppplStack_708 = (long *******)puVar67;
      ppppppplStack_700 = (long *******)pppppplVar53;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar29 != (long *)0x0) {
        lVar70 = *plVar29;
        uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
              puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar27 = (*(code *)*puVar39)(plVar29,puVar39[1]);
        lVar70 = func_0x033c97d4(uVar27,plVar30);
        if (lVar70 != 0) {
          uVar23 = *(uint *)(lVar70 + 0x18);
          if (0 < (int)uVar23) {
            if (plVar30 == (long *)0x0) goto LAB_033ca068;
            uVar26 = 0;
            do {
              lVar31 = *plVar30;
              uVar60 = (ulong)*(ushort *)(lVar31 + 0x12e);
              if (uVar60 != 0) {
                piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                do {
                  if (*(long *****)(piVar61 + -2) == _DAT_059e0220) {
                    puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar60 = uVar60 - 1;
                  piVar61 = piVar61 + 4;
                } while (uVar60 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0220,6);
LAB_033c9f74:
              lVar31 = (*(code *)*puVar39)(plVar30,puVar39[1]);
              if (*(uint *)(lVar70 + 0x18) <= uVar26) goto LAB_033ca06c;
              plVar32 = (long *)(lVar70 + uVar26 * 8 + 0x20);
              lVar56 = *plVar32;
              if (lVar56 == 0) goto LAB_033ca068;
              uVar22 = func_0x0353efa0(lVar56,0);
              if (lVar31 == 0) goto LAB_033ca068;
              uVar60 = func_0x0387cc50(lVar31,uVar22,0);
              if ((uVar60 & 1) == 0) {
                if (*(uint *)(lVar70 + 0x18) <= uVar26) goto LAB_033ca06c;
                lVar70 = *plVar32;
                if (lVar70 == 0) goto LAB_033ca068;
                iVar25 = func_0x0353efa0(lVar70,0);
                lVar70 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar70 + 0x12e);
                if (uVar26 == 0) goto LAB_033ca020;
                piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar23);
          }
          return (long *)0x0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar74 = func_0x0249fb98();
      ppppplStack_740 = (long *****)0x33ca070;
      plStack_738 = plVar29;
      uVar27 = func_0x033c88e0(auVar74._0_8_,auVar74._8_8_,0,0);
      plVar29 = (long *)func_0x033c7ab8(uVar27,auVar74._8_8_);
      return plVar29;
    }
  }
  return (long *)0x1;
LAB_0378377c:
  func_0x0249fb90();
LAB_03783780:
  func_0x0249fb90();
  ppppppplVar63 = ppppppplVar44;
  while( true ) {
    auVar92 = func_0x0249fb88(ppppppplVar52);
    uVar27 = auVar92._0_8_;
    if (auVar92._8_4_ != 1) break;
    puVar42 = (undefined8 *)func_0x054ed080(uVar27);
    ppppppplVar52 = (long *******)*puVar42;
    *(long ********)((long)puVar39 + -0xd0) = ppppppplVar52;
    plVar30 = (long *)func_0x054ed090();
    puVar42 = *(undefined8 **)((long)puVar39 + -200);
LAB_037836e8:
    uVar27 = auVar93._0_8_;
    ppppppplVar40 = (long *******)*puVar42;
    if (ppppppplVar40 != (long *******)0x0) {
      pppppplVar53 = *ppppppplVar40;
      uVar26 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
      if (uVar26 != 0) {
        ppppplVar65 = pppppplVar53[0x16] + 1;
        do {
          if (ppppplVar65[-1] == _DAT_059df598) {
            pppppplVar53 = pppppplVar53 + (long)*(int *)ppppplVar65 * 2 + 0x27;
            goto LAB_03783744;
          }
          uVar26 = uVar26 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar26 != 0);
      }
      uVar34 = 0;
      pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar40);
      auVar93._8_8_ = uVar34;
      auVar93._0_8_ = uVar27;
LAB_03783744:
      plVar30 = (long *)(*(code *)*pppppplVar53)(ppppppplVar40,pppppplVar53[1]);
    }
    if (ppppppplVar52 == (long *******)0x0) {
      return plVar30;
    }
  }
  func_0x022bd79c((undefined1 *)((long)puVar39 + -0xd0));
  func_0x0258f7ac(uVar27);
  auVar74 = func_0x022bd790();
  *(undefined8 *)((long)puVar39 + -0x210) = 0x37837f8;
  *(long ********)((long)puVar39 + -0x200) = ppppppplVar63;
  *(undefined1 (*) [16])((long)puVar39 + -0x1f8) = auVar91;
  *(long ********)((long)puVar39 + -0x1e8) = ppppppplVar51;
  *(long ********)((long)puVar39 + -0x1e0) = ppppppplVar40;
  *(undefined8 *)((long)puVar39 + -0x1d8) = uVar27;
  if ((bRam0000000005e2dfa0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2dfa0 = 1;
  }
  *(undefined1 *)ppppppplVar28 = 0;
  *(undefined8 *)((long)puVar39 + -0x240) = 0x3783850;
  *(undefined1 (*) [16])((long)puVar39 + -0x230) = auVar93;
  *(long *)((long)puVar39 + -0x220) = auVar74._8_8_;
  *(long ********)((long)puVar39 + -0x218) = ppppppplVar28;
  *(long *)((long)puVar39 + -0x238) = auVar93._8_8_;
  if ((bRam0000000005e2dfa3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    bRam0000000005e2dfa3 = 1;
  }
  uVar26 = func_0x03774280(auVar74._0_8_,auVar93._8_8_);
  if ((uVar26 & 1) != 0) {
    uVar26 = func_0x03774280(auVar74._0_8_,auVar93._0_8_);
    if ((uVar26 & 1) != 0) {
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar23 = func_0x037737e4((undefined1 *)((long)puVar39 + -0x238),auVar93._0_8_);
      goto LAB_03783a30;
    }
  }
  uVar23 = 1;
LAB_03783a30:
  return (long *)(ulong)(uVar23 & 1);
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar61 = piVar61 + 4;
    if (uVar26 == 0) break;
LAB_033c4960:
    if (*(long *****)(piVar61 + -2) == _DAT_059e0220) {
      puVar39 = (undefined8 *)(lVar56 + (long)(*piVar61 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar27 = 6;
  puVar39 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033c4998:
  lVar56 = (*(code *)*puVar39)(plVar29,puVar39[1]);
  if ((lVar70 != 0) && (plVar29 = (long *)0x0, lVar56 != 0)) {
    uVar26 = func_0x0387c57c(lVar56,*(undefined4 *)(lVar70 + 0x10),0);
    if ((uVar26 & 1) == 0) {
      plVar29 = (long *)0x2;
    }
    else {
      uVar26 = func_0x0353f618(lVar70,0);
      if ((uVar26 & 1) == 0) {
        uVar26 = func_0x0387cc50(lVar56,*(undefined4 *)(lVar70 + 0x10),0);
        if ((uVar26 & 1) != 0) {
          return (long *)0x1;
        }
      }
      plVar29 = (long *)0x0;
    }
    return plVar29;
  }
LAB_033c4a08:
  auVar74 = func_0x0249fb90();
  *(long ******)((long)ppppppplVar44 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppppppplVar44 + -0x158) = 0x33c4a0c;
  *(long ********)((long)ppppppplVar44 + -0x150) = ppppppplVar73;
  *(undefined **)((long)ppppppplVar44 + -0x148) = puVar46;
  *(long *)((long)ppppppplVar44 + -0x140) = lVar31;
  *(undefined8 *)((long)ppppppplVar44 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppppppplVar44 + -0x130) = puVar69;
  *(undefined **)((long)ppppppplVar44 + -0x128) = puVar67;
  *(long *******)((long)ppppppplVar44 + -0x120) = pppppplVar53;
  *(undefined8 *)((long)ppppppplVar44 + -0x118) = 0x5e2c000;
  *(long **)((long)ppppppplVar44 + -0x110) = plVar29;
  *(long *)((long)ppppppplVar44 + -0x108) = lVar70;
  plVar29 = (long *)0x5e2c000;
  uVar26 = auVar74._0_8_ & 0xffffffff;
  ppppppplVar51 = ppppppplVar63;
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
  *(undefined1 *)((long)ppppppplVar44 + -0x16c) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x180) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x178) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -400) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x188) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x1a0) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x198) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x1c0) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x1b8) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x1b0) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x1c8) = 0;
  if (ppppppplVar63 == (long *******)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar27 = func_0x0249fb88(uVar27);
    func_0x022c29f0((undefined1 *)((long)ppppppplVar44 + -0x1e0));
    func_0x0258f7ac(uVar27);
    uVar34 = 0x33c5404;
    auVar81 = func_0x022bd790();
    puVar46 = puVar69;
  }
  else {
    pppppplVar53 = *ppppppplVar63;
    uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar60 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df8e8) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
          goto LAB_033c4bd8;
        }
        uVar60 = uVar60 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar60 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar63,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar30 = (long *)(*(code *)*pppppplVar53)(ppppppplVar63,pppppplVar53[1]);
    if (plVar30 == (long *)0x0) goto LAB_033c53e0;
    lVar70 = *plVar30;
    uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar60 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059dfe60) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar60 = uVar60 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar60 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar29 = (long *)(*(code *)*puVar39)(plVar30,puVar39[1]);
    pppppplVar53 = *ppppppplVar63;
    uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar60 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059e0220) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 6) * 2 + 0x27;
          goto LAB_033c4cac;
        }
        uVar60 = uVar60 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar60 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar63,_DAT_059e0220,6);
LAB_033c4cac:
    puVar46 = (undefined *)(*(code *)*pppppplVar53)(ppppppplVar63,pppppplVar53[1]);
    if (plVar29 == (long *)0x0) goto LAB_033c53e0;
    lVar70 = *plVar29;
    puVar48 = &DAT_059cd750;
    uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar60 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059cd750) {
          puVar39 = (undefined8 *)(lVar70 + (long)*piVar61 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar60 = uVar60 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar60 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059cd750,0);
LAB_033c4d14:
    uVar60 = (*(code *)*puVar39)(plVar29,uVar26,puVar39[1]);
    if ((uVar60 & 1) == 0) {
      return (long *)0x4;
    }
    puVar69 = puVar46;
    if (puVar46 == (undefined *)0x0) goto LAB_033c53e0;
    uVar60 = func_0x0387c57c(puVar46,uVar26,0);
    if ((uVar60 & 1) == 0) {
      return (long *)0x1;
    }
    lVar70 = *plVar29;
    uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar60 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059cd750) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar60 = uVar60 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar60 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059cd750,2);
LAB_033c4da0:
    uVar26 = (*(code *)*puVar39)(plVar29,uVar26,puVar39[1]);
    auVar81._8_8_ = ppppppplVar63;
    auVar81._0_8_ = uVar26;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar60 = func_0x035fb854(uVar26,ppppppplVar63,0);
    if ((uVar60 & 1) == 0) {
      return (long *)0x3;
    }
    *(undefined1 *)((long)ppppppplVar44 + -0x16c) = 0;
    if (uVar26 == 0) goto LAB_033c53e0;
    uVar60 = func_0x0353f608(uVar26,0);
    if ((uVar60 & 1) != 0) {
LAB_033c4e0c:
      plVar29 = *(long **)(uVar26 + 0x28);
      if (plVar29 == (long *)0x0) {
LAB_033c52d0:
        uVar23 = 0;
        if (*(char *)((long)ppppppplVar44 + -0x16c) != '\0') {
          uVar23 = 6;
        }
        return (long *)(ulong)uVar23;
      }
      uVar23 = *(uint *)(plVar29 + 3);
      puVar69 = (undefined *)(ulong)uVar23;
      if ((int)uVar23 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar48 = _DAT_059f5cd8;
      lVar70 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
        lVar70 = func_0x024d8f40();
      }
      lVar70 = *(long *)(*(long *)(lVar70 + 0xc0) + 8);
      if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
        lVar70 = func_0x024d8f40();
      }
      if (*(int *)(lVar70 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar70 = *(long *)(puVar48 + 0x20);
      if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
        lVar70 = func_0x024d8f40();
      }
      lVar70 = *(long *)(*(long *)(lVar70 + 0xc0) + 8);
      if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
        lVar70 = func_0x024d8f40();
      }
      plVar30 = (long *)**(long **)(lVar70 + 0xb8);
      if (plVar30 != (long *)0x0) {
        puVar48 = (undefined *)
                  (**(code **)(*plVar30 + 0x178))(plVar30,puVar69,*(undefined8 *)(*plVar30 + 0x180))
        ;
        *(undefined **)((long)ppppppplVar44 + -0x178) = puVar48;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar31 = _DAT_059f5d10;
        lVar70 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        lVar70 = *(long *)(*(long *)(lVar70 + 0xc0) + 8);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        if (*(int *)(lVar70 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar70 = *(long *)(lVar31 + 0x20);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        lVar70 = *(long *)(*(long *)(lVar70 + 0xc0) + 8);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        plVar30 = (long *)**(long **)(lVar70 + 0xb8);
        if (plVar30 != (long *)0x0) {
          uVar34 = (**(code **)(*plVar30 + 0x178))(plVar30,uVar23,*(undefined8 *)(*plVar30 + 0x180))
          ;
          *(undefined8 *)((long)ppppppplVar44 + -0x1e0) = 0;
          *(undefined1 **)((long)ppppppplVar44 + -0x1d8) =
               (undefined1 *)((long)ppppppplVar44 + -0x180);
          *(undefined8 *)((long)ppppppplVar44 + -0x180) = uVar34;
          *(undefined1 **)((long)ppppppplVar44 + -0x1d0) =
               (undefined1 *)((long)ppppppplVar44 + -0x178);
          auVar91 = func_0x028ff200(puVar48,_DAT_05a2eda0);
          auVar80 = func_0x028ff200(*(undefined8 *)((long)ppppppplVar44 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar25 = func_0x035fdf8c(plVar29,auVar91._0_8_,auVar91._8_8_,auVar80._0_8_,auVar80._8_8_,0
                                  );
          if (0 < iVar25) {
            uVar34 = *(undefined8 *)((long)ppppppplVar44 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppppppplVar44 + -400),uVar34,0,iVar25,_DAT_059f5d38
                           );
            uVar34 = *(undefined8 *)((long)ppppppplVar44 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppppppplVar44 + -0x1a0),uVar34,0,iVar25,
                            _DAT_059f5d98);
            auVar91 = func_0x028ff244(*(undefined8 *)((long)ppppppplVar44 + -400),
                                      *(undefined8 *)((long)ppppppplVar44 + -0x188),_DAT_05a2ed98);
            auVar80 = func_0x028ff244(*(undefined8 *)((long)ppppppplVar44 + -0x1a0),
                                      *(undefined8 *)((long)ppppppplVar44 + -0x198),_DAT_05a2f0a8);
            uVar26 = func_0x033bae94(ppppppplVar63,auVar74._8_8_,uVar27,auVar91._0_8_,auVar91._8_8_,
                                     auVar80._0_8_,auVar80._8_8_,
                                     (undefined1 *)((long)ppppppplVar44 + -0x16c));
            if ((uVar26 & 1) == 0) {
              func_0x02408624((undefined1 *)((long)ppppppplVar44 + -0x1e0));
              return (long *)0x2;
            }
          }
          func_0x02408624((undefined1 *)((long)ppppppplVar44 + -0x1e0));
          func_0x028310e8(plVar29,(undefined1 *)((long)ppppppplVar44 + -0x1e0),_DAT_05a1a750);
          *(undefined8 *)((long)ppppppplVar44 + -0x1b8) =
               *(undefined8 *)((long)ppppppplVar44 + -0x1d8);
          *(undefined8 *)((long)ppppppplVar44 + -0x1c0) =
               *(undefined8 *)((long)ppppppplVar44 + -0x1e0);
          *(undefined8 *)((long)ppppppplVar44 + -0x1b0) =
               *(undefined8 *)((long)ppppppplVar44 + -0x1d0);
          *(undefined8 *)((long)ppppppplVar44 + -0x1e0) = 0;
          *(undefined1 **)((long)ppppppplVar44 + -0x1d8) =
               (undefined1 *)((long)ppppppplVar44 + -0x1c0);
          while( true ) {
            uVar26 = func_0x02a5d2d0((undefined1 *)((long)ppppppplVar44 + -0x1c0),_DAT_05a047f0);
            lVar70 = _DAT_05a047f8;
            if ((uVar26 & 1) == 0) break;
            lVar56 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar4 = *(ushort *)(lVar56 + 0x135);
            lVar31 = lVar56;
            if ((uVar4 & 1) == 0) {
              lVar31 = func_0x024d8f40();
              lVar56 = *(long *)(lVar70 + 0x20);
              uVar4 = *(ushort *)(lVar56 + 0x135);
            }
            uVar22 = *(undefined4 *)(*(long *)(*(long *)(lVar31 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar56 = func_0x024d8f40();
            }
            uVar27 = func_0x0249f90c((undefined1 *)((long)ppppppplVar44 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar56 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppppppplVar44 + -0x168),uVar27,uVar22);
            plVar29 = *(long **)((long)ppppppplVar44 + -0x168);
            if (plVar29 != (long *)0x0) {
              lVar70 = *plVar29;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar70 + 0x130)) &&
                 (*(long *)(*(long *)(lVar70 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar26 = (**(code **)(lVar70 + 0x1b8))
                                   (plVar29,ppppppplVar63,*(undefined8 *)(lVar70 + 0x1c0));
                if ((uVar26 & 1) == 0) {
                  func_0x02a5d2cc((undefined1 *)((long)ppppppplVar44 + -0x1c0),_DAT_05a047e8);
                  return (long *)0x5;
                }
              }
            }
          }
          func_0x02a5d2cc((undefined1 *)((long)ppppppplVar44 + -0x1c0),_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar60 = func_0x0353f618(uVar26,0);
    if ((uVar60 & 1) != 0) goto LAB_033c4e0c;
    uVar60 = func_0x0353f5f8(uVar26,0);
    if ((uVar60 & 1) == 0) {
      uVar60 = func_0x0353f628(uVar26,0);
      if ((uVar60 & 1) != 0) {
        return (long *)0x3;
      }
      uVar60 = func_0x0353f638(uVar26,0);
      if ((uVar60 & 1) != 0) {
        return (long *)0x3;
      }
      uVar60 = func_0x0353f648(uVar26,0);
      if ((uVar60 & 1) == 0) {
        uVar60 = func_0x0353f658(uVar26,0);
        if ((uVar60 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar60 = func_0x03600068(uVar26,(undefined1 *)((long)ppppppplVar44 + -0x1c8),0);
        if ((uVar60 & 1) == 0) goto LAB_033c52d0;
        lVar70 = func_0x022bffa8(6,_DAT_059e0220,ppppppplVar63);
        if (*(long *)((long)ppppppplVar44 + -0x1c8) != 0) {
          uVar34 = func_0x03693f98(*(long *)((long)ppppppplVar44 + -0x1c8),0);
          uVar27 = 0;
          if (lVar70 != 0) {
            uVar26 = func_0x03887158(lVar70,ppppppplVar63,uVar34,0);
            if ((uVar26 & 1) != 0) {
              return (long *)0x3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar70 = func_0x022bffa8(6,_DAT_059e0220,ppppppplVar63);
        if (lVar70 != 0) {
          uVar26 = func_0x03884e60(lVar70,*(undefined4 *)(uVar26 + 0x10),0,0);
          if ((uVar26 & 1) == 0) {
            return (long *)0x3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar34 = 0x33c52cc;
  }
  plVar32 = auVar81._8_8_;
  plVar30 = auVar81._0_8_;
  *(undefined8 *)((long)ppppppplVar44 + -0x210) = uVar34;
  *(long *)((long)ppppppplVar44 + -0x208) = auVar74._8_8_;
  *(undefined8 *)((long)ppppppplVar44 + -0x200) = uVar27;
  *(long ********)((long)ppppppplVar44 + -0x1f8) = ppppppplVar63;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar27 = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x220) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x218) = 0;
  uVar60 = func_0x036a531c(plVar30,plVar32);
  if ((uVar60 & 1) == 0) {
    return (long *)0x0;
  }
  if (plVar30 != (long *)0x0) {
    lVar70 = *plVar30;
    uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
    if (uVar60 != 0) {
      piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
      do {
        if (*(long *)(piVar61 + -2) == _DAT_059dfa78) {
          puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar60 = uVar60 - 1;
        piVar61 = piVar61 + 4;
      } while (uVar60 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar27 = puVar39[1];
    plVar35 = (long *)(*(code *)*puVar39)(plVar30,plVar32);
    if (plVar32 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar32 + 0x130)) &&
          (*(long *)(*(long *)(*plVar32 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar30 = (long *)0x0, plVar35 != (long *)0x0)) {
        lVar31 = *plVar35;
        lVar70 = plVar32[0x9c];
        uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar26 != 0) {
          piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059dec98) {
              puVar39 = (undefined8 *)(lVar31 + (long)(*piVar61 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar26 = uVar26 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar26 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar74 = (*(code *)*puVar39)(plVar35,plVar32,(char)lVar70 != '\0',puVar39[1]);
        *(undefined1 (*) [16])((long)ppppppplVar44 + -0x220) = auVar74;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar70 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar70 + 0x135) & 1) == 0) {
          lVar70 = func_0x024d8f40();
        }
        pcVar41 = (char *)func_0x0249f90c((undefined1 *)((long)ppppppplVar44 + -0x220),
                                          *(long *)(**(long **)(lVar70 + 0xc0) + 0x80) + 0x20);
        return (long *)(ulong)(*pcVar41 == '\0');
      }
    }
  }
  auVar74 = func_0x0249fb90();
  *(undefined8 *)((long)ppppppplVar44 + -0x270) = 0x33c5620;
  *(long *)((long)ppppppplVar44 + -0x260) = lVar31;
  *(undefined **)((long)ppppppplVar44 + -600) = puVar48;
  *(undefined **)((long)ppppppplVar44 + -0x250) = puVar46;
  *(long **)((long)ppppppplVar44 + -0x248) = plVar29;
  *(ulong *)((long)ppppppplVar44 + -0x240) = uVar26;
  *(undefined8 *)((long)ppppppplVar44 + -0x238) = 0x5e2c000;
  *(long **)((long)ppppppplVar44 + -0x230) = plVar30;
  *(long **)((long)ppppppplVar44 + -0x228) = plVar32;
  uVar26 = auVar74._0_8_ & 0xffffffff;
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
  *(undefined1 *)((long)ppppppplVar44 + -0x268) = 0;
  *(undefined8 *)((long)ppppppplVar44 + -0x278) = 0;
  if (ppppppplVar51 != (long *******)0x0) {
    pppppplVar53 = *ppppppplVar51;
    uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
    if (uVar60 != 0) {
      ppppplVar65 = pppppplVar53[0x16] + 1;
      do {
        if (ppppplVar65[-1] == _DAT_059df8e8) {
          pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 5) * 2 + 0x27;
          goto LAB_033c5714;
        }
        uVar60 = uVar60 - 1;
        ppppplVar65 = ppppplVar65 + 2;
      } while (uVar60 != 0);
    }
    pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,_DAT_059df8e8,5);
LAB_033c5714:
    plVar29 = (long *)(*(code *)*pppppplVar53)(ppppppplVar51,pppppplVar53[1]);
    if (plVar29 != (long *)0x0) {
      lVar70 = *plVar29;
      uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
      if (uVar60 != 0) {
        piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
        do {
          if (*(long *)(piVar61 + -2) == _DAT_059dfe60) {
            puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar60 = uVar60 - 1;
          piVar61 = piVar61 + 4;
        } while (uVar60 != 0);
      }
      puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar29 = (long *)(*(code *)*puVar39)(plVar29,puVar39[1]);
      pppppplVar53 = *ppppppplVar51;
      uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
      if (uVar60 != 0) {
        ppppplVar65 = pppppplVar53[0x16] + 1;
        do {
          if (ppppplVar65[-1] == _DAT_059e0220) {
            pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 6) * 2 + 0x27;
            goto LAB_033c57e8;
          }
          uVar60 = uVar60 - 1;
          ppppplVar65 = ppppplVar65 + 2;
        } while (uVar60 != 0);
      }
      pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,_DAT_059e0220,6);
LAB_033c57e8:
      lVar70 = (*(code *)*pppppplVar53)(ppppppplVar51,pppppplVar53[1]);
      if (plVar29 != (long *)0x0) {
        lVar31 = *plVar29;
        uVar60 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar60 != 0) {
          piVar61 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar61 + -2) == _DAT_059cd750) {
              puVar39 = (undefined8 *)(lVar31 + (long)*piVar61 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar60 = uVar60 - 1;
            piVar61 = piVar61 + 4;
          } while (uVar60 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059cd750,0);
LAB_033c5850:
        uVar60 = (*(code *)*puVar39)(plVar29,uVar26,puVar39[1]);
        if ((uVar60 & 1) == 0) {
          return (long *)0x4;
        }
        if (lVar70 != 0) {
          uVar60 = func_0x0387c57c(lVar70,uVar26,0);
          if ((uVar60 & 1) == 0) {
            return (long *)0x1;
          }
          lVar70 = *plVar29;
          uVar60 = (ulong)*(ushort *)(lVar70 + 0x12e);
          if (uVar60 != 0) {
            piVar61 = (int *)(*(long *)(lVar70 + 0xb0) + 8);
            do {
              if (*(long *)(piVar61 + -2) == _DAT_059cd750) {
                puVar39 = (undefined8 *)(lVar70 + (long)(*piVar61 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar60 = uVar60 - 1;
              piVar61 = piVar61 + 4;
            } while (uVar60 != 0);
          }
          puVar39 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059cd750,2);
LAB_033c58dc:
          lVar70 = (*(code *)*puVar39)(plVar29,uVar26,puVar39[1]);
          if (lVar70 != 0) {
            uVar60 = func_0x0353f648(lVar70,0);
            if ((uVar60 & 1) == 0) {
              uVar26 = func_0x0353f658(lVar70,0);
              if ((uVar26 & 1) == 0) {
                return (long *)0x3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar26 = func_0x03600068(lVar70,(undefined1 *)((long)ppppppplVar44 + -0x278),0);
              if ((uVar26 & 1) == 0) {
                return (long *)0x3;
              }
              lVar70 = func_0x022bffa8(6,_DAT_059e0220,ppppppplVar51);
              if (*(long *)((long)ppppppplVar44 + -0x278) != 0) {
                uVar34 = func_0x03693f98(*(long *)((long)ppppppplVar44 + -0x278),0);
                uVar27 = 0;
                if (lVar70 != 0) {
                  func_0x03887758(lVar70,ppppppplVar51,uVar34,0);
                  return (long *)0x3;
                }
              }
            }
            else {
              pppppplVar53 = *ppppppplVar51;
              uVar60 = (ulong)*(ushort *)((long)pppppplVar53 + 0x12e);
              if (uVar60 != 0) {
                ppppplVar65 = pppppplVar53[0x16] + 1;
                do {
                  if (ppppplVar65[-1] == _DAT_059e0220) {
                    pppppplVar53 = pppppplVar53 + (long)(*(int *)ppppplVar65 + 6) * 2 + 0x27;
                    goto LAB_033c59d0;
                  }
                  uVar60 = uVar60 - 1;
                  ppppplVar65 = ppppplVar65 + 2;
                } while (uVar60 != 0);
              }
              pppppplVar53 = (long ******)func_0x024d927c(ppppppplVar51,_DAT_059e0220,6);
LAB_033c59d0:
              lVar70 = (*(code *)*pppppplVar53)(ppppppplVar51,pppppplVar53[1]);
              if (lVar70 != 0) {
                lVar70 = func_0x03885c68(lVar70,ppppppplVar51,uVar26,0);
                if (lVar70 == 0) {
                  return (long *)0x3;
                }
                lVar31 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar70 + 0x10) != 0) {
                  plVar29 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar22 = *(undefined4 *)(plVar29[1] + 0xfc);
                  uVar34 = func_0x0249f90c(*(long *)(lVar70 + 0x10),*(undefined8 *)(*plVar29 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)ppppppplVar44 + -0x264),uVar34,uVar22);
                  uVar34 = _DAT_059d7518;
                  if (lVar31 != 0) {
                    if (*(int *)(lVar31 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar31 + 0x20) = *(undefined4 *)((long)ppppppplVar44 + -0x264);
                    lVar70 = func_0x0249f9d4(uVar34,1);
                    if (lVar70 != 0) {
                      if (*(int *)(lVar70 + 0x18) != 0) {
                        *(undefined4 *)(lVar70 + 0x20) = 1;
                        uVar26 = func_0x033bacb8(ppppppplVar51,auVar74._8_8_,uVar27,lVar31,lVar70,
                                                 (undefined1 *)((long)ppppppplVar44 + -0x268));
                        if ((uVar26 & 1) == 0) {
                          return (long *)0x2;
                        }
                        uVar23 = 0;
                        if (*(char *)((long)ppppppplVar44 + -0x268) != '\0') {
                          uVar23 = 6;
                        }
                        return (long *)(ulong)uVar23;
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
  lVar70 = func_0x0249fb98();
  if (lVar70 != 0) {
    return (long *)(ulong)*(byte *)(lVar70 + 0x4e0);
  }
  *(undefined8 *)((long)ppppppplVar44 + -0x290) = 0x33c5ae8;
  auVar91 = func_0x0249fb90();
  *(undefined8 *)((long)ppppppplVar44 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppppppplVar44 + -0x2a8) = auVar74._8_8_;
  *(undefined8 *)((long)ppppppplVar44 + -0x2a0) = uVar27;
  *(long ********)((long)ppppppplVar44 + -0x298) = ppppppplVar51;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppppppplVar44 + -0x2c0) = 0;
  lVar31 = func_0x033c5be8(auVar91._0_8_,auVar91._8_8_);
  lVar70 = _DAT_05a27d90;
  if (lVar31 == 0) {
    uVar27 = 0;
    *(undefined8 *)((long)ppppppplVar44 + -0x2c0) = 0;
  }
  else {
    uVar27 = *(undefined8 *)(lVar31 + 0x10);
  }
  *(undefined8 *)((long)ppppppplVar44 + -0x2c0) = uVar27;
  lVar56 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar4 = *(ushort *)(lVar56 + 0x135);
  lVar31 = lVar56;
  if ((uVar4 & 1) == 0) {
    lVar56 = func_0x024d8f40(lVar56);
    uVar4 = *(ushort *)(*(long *)(lVar70 + 0x20) + 0x135);
    lVar31 = *(long *)(lVar70 + 0x20);
  }
  uVar22 = *(undefined4 *)(**(long **)(lVar56 + 0xc0) + 0xfc);
  if ((uVar4 & 1) == 0) {
    lVar31 = func_0x024d8f40(lVar31);
  }
  uVar27 = func_0x0249f90c((undefined1 *)((long)ppppppplVar44 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppppppplVar44 + -0x2b4),uVar27,uVar22);
  return (long *)(ulong)*(uint *)((long)ppppppplVar44 + -0x2b4);
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void SetItemsDiscoveredBasedOnBoardActs(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Merge.MergeBoardAct> boardActs, GameLogic.Player.Board.MergeBoard board, Game.Logic.ProgressState progressState)
 * Ghidra function entry: 033bfe1c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033c0010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0387dc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0387e480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0368a41c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0368a420) */
/* WARNING: Removing unreachable block (ram,0x0368a4c4) */
/* WARNING: Removing unreachable block (ram,0x0368a424) */
/* WARNING: Removing unreachable block (ram,0x0368a43c) */
/* WARNING: Removing unreachable block (ram,0x0368a4a8) */
/* WARNING: Removing unreachable block (ram,0x0368a490) */
/* WARNING: Removing unreachable block (ram,0x0368a4ac) */
/* WARNING: Removing unreachable block (ram,0x0387e484) */
/* WARNING: Removing unreachable block (ram,0x033c0014) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_033bfe1c(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined8 param_5,
                    ulong param_6,ulong *param_7,ulong *param_8)

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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined4 uVar28;
  ulong *puVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined8 uVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  undefined8 *puVar39;
  long lVar40;
  undefined *puVar41;
  uint uVar29;
  int iVar30;
  undefined8 uVar42;
  char *pcVar43;
  code *pcVar44;
  int iVar31;
  code *pcVar45;
  ulong *puVar46;
  long *plVar47;
  long *plVar48;
  long lVar49;
  long lVar50;
  undefined8 extraout_x1;
  ulong *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  ulong *puVar51;
  ulong *puVar52;
  long *plVar53;
  long *plVar54;
  ulong *puVar55;
  ulong *puVar56;
  long lVar57;
  long **pplVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  int *piVar62;
  ulong *puVar63;
  ulong *puVar64;
  ulong *puVar65;
  undefined *puVar66;
  undefined8 uVar67;
  code *pcVar68;
  undefined *puVar69;
  undefined *puVar70;
  long *plVar71;
  undefined8 uVar72;
  undefined *puVar73;
  undefined *unaff_x24;
  undefined *puVar74;
  undefined *unaff_x25;
  undefined8 uVar75;
  ulong *unaff_x26;
  uint uVar76;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined *unaff_x29;
  code *pcVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined1 auVar80 [12];
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auStack_b84 [160];
  undefined1 auStack_ae4 [2404];
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  long alStack_150 [10];
  undefined1 auStack_100 [80];
  ulong *puStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  
  plVar53 = alStack_150;
  plVar54 = alStack_150;
  plVar71 = (long *)0x5e2c000;
  puVar32 = param_1;
  puVar51 = param_3;
  puVar46 = param_4;
  if ((bRam0000000005e2c3c0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    puVar32 = (ulong *)func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3c0 = 1;
  }
  plStack_48 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 == (long *)0x0) {
    return puVar32;
  }
  lVar57 = *param_2;
  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
  if (uVar61 != 0) {
    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
    do {
      if (*(long *)(piVar62 + -2) == _DAT_059ca9b8) {
        puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
        goto LAB_033bfef0;
      }
      uVar61 = uVar61 - 1;
      piVar62 = piVar62 + 4;
    } while (uVar61 != 0);
  }
  puVar51 = (ulong *)0x0;
  puVar33 = (undefined8 *)func_0x024d927c(param_2);
LAB_033bfef0:
  plVar34 = (long *)(*(code *)*puVar33)(param_2,puVar33[1]);
  pplStack_a8 = &plStack_48;
  puStack_b0 = (ulong *)0x0;
  plStack_48 = plVar34;
  if (plVar34 == (long *)0x0) {
    puVar32 = (ulong *)func_0x0249fb90();
LAB_033c0020:
    plVar47 = param_2;
    param_4 = puVar46;
    param_3 = puVar51;
    puVar63 = (ulong *)0x0;
    pplVar58 = &plStack_48;
    goto LAB_033c0028;
  }
  plVar71 = (long *)&DAT_059df6e0;
  unaff_x24 = &DAT_059cbd38;
  lVar57 = *plVar34;
  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
  if (uVar61 != 0) {
    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
    do {
      if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
        puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
        goto LAB_033bff6c;
      }
      uVar61 = uVar61 - 1;
      piVar62 = piVar62 + 4;
    } while (uVar61 != 0);
  }
  puVar51 = (ulong *)0x0;
  puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033bff6c:
  puVar32 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
  plVar47 = plStack_48;
  param_2 = plVar34;
  if (((ulong)puVar32 & 1) == 0) goto LAB_033c0020;
  puVar64 = param_3;
  if (plStack_48 == (long *)0x0) {
    func_0x0249fb90();
    puVar63 = param_4;
    while( true ) {
      param_4 = puVar46;
      param_3 = puVar51;
      auVar80 = func_0x0249fb88(puVar63);
      puStack_158 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) break;
      puVar33 = (undefined8 *)func_0x054ed080(puStack_158);
      puVar63 = (ulong *)*puVar33;
      puStack_b0 = puVar63;
      puVar32 = (ulong *)func_0x054ed090();
      pplVar58 = pplStack_a8;
LAB_033c0028:
      puVar64 = (ulong *)*pplVar58;
      if (puVar64 != (ulong *)0x0) {
        uVar59 = *puVar64;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df598) {
              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_033c0084;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        param_3 = (ulong *)0x0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar64);
LAB_033c0084:
        puVar32 = (ulong *)(*(code *)*puVar33)(puVar64,puVar33[1]);
      }
      puVar51 = param_3;
      puVar46 = param_4;
      if (puVar63 == (ulong *)0x0) {
        return puVar32;
      }
    }
    func_0x022bd79c(&puStack_b0);
    func_0x0258f7ac(puStack_158);
    uVar78 = 0x33c0108;
    auVar81 = func_0x022bd790();
    plVar53 = auVar81._8_8_;
    puVar32 = auVar81._0_8_;
  }
  else {
    lVar57 = *plStack_48;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059cbd38) {
          puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_033bffd0;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plStack_48,_DAT_059cbd38,0);
LAB_033bffd0:
    (*(code *)*puVar33)(auStack_100,plVar47,puVar33[1]);
    func_0x054ed0d0(&uStack_a0,auStack_100,0x50);
    func_0x054ed0d0(alStack_150,&uStack_a0,0x50);
    uVar78 = 0x33c0014;
    puVar32 = param_1;
    puStack_158 = param_4;
  }
  auVar81._8_8_ = param_3;
  auVar81._0_8_ = puVar32;
  auVar94._8_8_ = param_3;
  auVar94._0_8_ = puVar32;
  uStack_180 = uVar78;
  plStack_178 = plVar71;
  plStack_170 = plVar47;
  puStack_168 = param_1;
  puStack_160 = puVar64;
  plVar71 = (long *)0x5e2c000;
  puVar63 = puVar32;
  puVar51 = param_3;
  puVar46 = param_4;
  if ((bRam0000000005e2c3c1 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df1f0);
    func_0x0249f8e4(&DAT_059dfbc0);
    puVar63 = (ulong *)func_0x0249f8e4(&DAT_059e89b0);
    bRam0000000005e2c3c1 = 1;
  }
  iVar31 = (int)*plVar53;
  if (iVar31 < 8) {
    if (iVar31 < 5) {
      if ((iVar31 != 1) && (iVar31 != 3)) {
        return puVar63;
      }
      plVar34 = plVar71;
      if (param_3 == (ulong *)0x0) goto LAB_033c0330;
      uVar78 = *(undefined8 *)((long)plVar53 + 0xc);
LAB_033c01dc:
      puVar51 = (ulong *)func_0x0376e450(param_3,uVar78,0);
      plVar54 = alStack_150;
      puVar46 = param_4;
      param_4 = puStack_158;
      param_3 = puStack_160;
      puVar32 = puStack_168;
      plVar53 = plStack_170;
      plVar34 = plStack_178;
      uVar78 = uStack_180;
      auVar81 = auVar94;
    }
    else {
      if (iVar31 != 5) {
        if (iVar31 != 6) {
          return puVar63;
        }
        goto LAB_033c01d4;
      }
      puVar51 = (ulong *)plVar53[6];
      puVar46 = param_4;
      param_4 = puStack_158;
      param_3 = puStack_160;
      puVar32 = puStack_168;
      plVar53 = plStack_170;
      plVar34 = plStack_178;
      uVar78 = uStack_180;
    }
  }
  else {
    if (iVar31 < 0xc) {
      if ((iVar31 != 8) && (iVar31 != 9)) {
        return puVar63;
      }
LAB_033c01d4:
      plVar34 = plVar71;
      if (param_3 != (ulong *)0x0) {
        uVar78 = *(undefined8 *)((long)plVar53 + 4);
        goto LAB_033c01dc;
      }
    }
    else {
      if (iVar31 != 0xc) {
        if ((iVar31 != 0xd) && (iVar31 != 0xe)) {
          return puVar63;
        }
        goto LAB_033c01d4;
      }
      plVar34 = (long *)plVar53[3];
      if (plVar34 != (long *)0x0) {
        lVar57 = *plVar34;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xe) * 0x10 + 0x138);
              goto LAB_033c0270;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar51 = (ulong *)0xe;
        puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c0270:
        plVar71 = (long *)(*(code *)*puVar33)(plVar34,puVar33[1]);
        if (plVar71 != (long *)0x0) {
          lVar57 = *plVar71;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df1f0) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                goto LAB_033c02dc;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar51 = (ulong *)0x1;
          puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c02dc:
          puVar63 = (ulong *)(*(code *)*puVar33)(plVar71,puVar33[1]);
          if (puVar63 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          if (*(byte *)(*puVar63 + 0x130) < *(byte *)(_DAT_059e89b0 + 0x130)) {
            return puVar63;
          }
          if (*(long *)(*(long *)(*puVar63 + 200) + (ulong)*(byte *)(_DAT_059e89b0 + 0x130) * 8 + -8
                       ) != _DAT_059e89b0) {
            return puVar63;
          }
          goto LAB_033c01d4;
        }
      }
    }
LAB_033c0330:
    auVar81 = func_0x0249fb90();
    plVar54 = &uStack_180;
    uVar78 = 0x33c0334;
  }
  plVar71 = auVar81._8_8_;
  puVar63 = auVar81._0_8_;
  if (puVar51 == (ulong *)0x0) {
    return puVar63;
  }
  if (puVar46 == (ulong *)0x0) {
    *(undefined8 *)((long)plVar54 + -0x10) = uVar78;
    auVar81 = func_0x0249fb90();
    puVar65 = auVar81._8_8_;
    puVar56 = auVar81._0_8_;
    *(undefined8 *)((long)plVar54 + -0x50) = 0x33c0364;
    *(undefined **)((long)plVar54 + -0x40) = unaff_x24;
    *(long **)((long)plVar54 + -0x38) = plVar34;
    *(long **)((long)plVar54 + -0x30) = plVar53;
    *(ulong **)((long)plVar54 + -0x28) = puVar32;
    *(ulong **)((long)plVar54 + -0x20) = param_3;
    *(ulong **)((long)plVar54 + -0x18) = param_4;
    puVar63 = (ulong *)(param_6 & 0xffffffff);
    plVar71 = (long *)func_0x03530bf4(param_5,0);
    *(undefined **)((long)plVar54 + -0x70) = unaff_x29;
    *(undefined8 *)((long)plVar54 + -0x68) = *(undefined8 *)((long)plVar54 + -0x50);
    *(long **)((long)plVar54 + -0x60) = unaff_x28;
    *(undefined8 *)((long)plVar54 + -0x58) = unaff_x27;
    *(ulong **)((long)plVar54 + -0x50) = unaff_x26;
    *(undefined **)((long)plVar54 + -0x48) = unaff_x25;
    *(undefined8 *)((long)plVar54 + -0x40) = *(undefined8 *)((long)plVar54 + -0x40);
    *(undefined8 *)((long)plVar54 + -0x38) = *(undefined8 *)((long)plVar54 + -0x38);
    *(undefined8 *)((long)plVar54 + -0x30) = *(undefined8 *)((long)plVar54 + -0x30);
    *(undefined8 *)((long)plVar54 + -0x28) = *(undefined8 *)((long)plVar54 + -0x28);
    *(undefined8 *)((long)plVar54 + -0x20) = *(undefined8 *)((long)plVar54 + -0x20);
    *(undefined8 *)((long)plVar54 + -0x18) = *(undefined8 *)((long)plVar54 + -0x18);
    uVar78 = 0x5e2c000;
    puVar52 = puVar51;
    puVar32 = puVar46;
    plVar53 = plVar71;
    puVar64 = puVar63;
    puVar55 = param_7;
    if ((bRam0000000005e2c3c2 & 1) == 0) {
      func_0x0249f8e4(&DAT_059dac08);
      func_0x0249f8e4(&DAT_059df1d0);
      func_0x0249f8e4(&DAT_059df1f0);
      func_0x0249f8e4(&DAT_059c9978);
      func_0x0249f8e4(&DAT_059dfbc0);
      bRam0000000005e2c3c2 = 1;
    }
    if ((puVar46 != (ulong *)0x0) && (uVar35 = func_0x03659ee0(puVar46,0), puVar65 != (ulong *)0x0))
    {
      puVar52 = (ulong *)0x0;
      puVar36 = (ulong *)func_0x036d3908(puVar65,uVar35);
      if (puVar36 != (ulong *)0x0) {
        uVar59 = *puVar36;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0xe) * 0x10 + 0x138);
              goto LAB_033c04d4;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar52 = (ulong *)0xe;
        puVar33 = (undefined8 *)func_0x024d927c(puVar36);
LAB_033c04d4:
        plVar34 = (long *)(*(code *)*puVar33)(puVar36,puVar33[1]);
        unaff_x26 = puVar36;
        if (plVar34 != (long *)0x0) {
          lVar57 = *plVar34;
          unaff_x29 = &DAT_059df1f0;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df1f0) {
                puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                goto LAB_033c053c;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df1f0,0);
LAB_033c053c:
          uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
          if ((uVar61 & 1) == 0) {
            return (ulong *)0x0;
          }
          uVar78 = func_0x0249fb80(_DAT_059dac08);
          plVar53 = (long *)0x0;
          puVar52 = puVar56;
          puVar32 = puVar63;
          func_0x0373956c(uVar78,puVar46);
          lVar57 = *plVar34;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df1f0) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                goto LAB_033c05c4;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar52 = (ulong *)0x1;
          puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c05c4:
          puVar37 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
          unaff_x28 = plVar34;
          if (puVar37 != (ulong *)0x0) {
            uVar59 = *puVar37;
            unaff_x28 = (long *)&DAT_059df1d0;
            uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059df1d0) {
                  puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c062c;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar33 = (undefined8 *)func_0x024d927c(puVar37,_DAT_059df1d0,0);
LAB_033c062c:
            puVar64 = (ulong *)puVar33[1];
            puVar52 = puVar36;
            puVar32 = puVar65;
            plVar53 = plVar71;
            uVar61 = (*(code *)*puVar33)(puVar37,uVar78);
            if ((uVar61 & 1) == 0) {
              return (ulong *)0x0;
            }
            puVar63 = puVar37;
            if (puVar56 != (ulong *)0x0) {
              func_0x037789bc(puVar56,puVar46,puVar51,plVar71,1,0);
              puVar55 = (ulong *)0x0;
              param_8 = (ulong *)0x0;
              *(undefined8 *)((long)plVar54 + -0x170) = 0;
              *(undefined8 *)((long)plVar54 + -0xf8) = 0;
              *(undefined8 *)((long)plVar54 + -0x100) = 0;
              *(undefined8 *)((long)plVar54 + -0xe8) = 0;
              *(undefined8 *)((long)plVar54 + -0xf0) = 0;
              *(undefined8 *)((long)plVar54 + -0xd8) = 0;
              *(undefined8 *)((long)plVar54 + -0xe0) = 0;
              *(undefined8 *)((long)plVar54 + -200) = 0;
              *(undefined8 *)((long)plVar54 + -0xd0) = 0;
              *(undefined8 *)((long)plVar54 + -0x108) = 0;
              *(undefined8 *)((long)plVar54 + -0x110) = 0;
              puVar52 = puVar51;
              puVar32 = puVar51;
              plVar53 = plVar71;
              puVar64 = puVar36;
              func_0x034ba874((undefined1 *)((long)plVar54 + -0x110),0xc);
              lVar57 = _DAT_059c9978;
              if (param_7 != (ulong *)0x0) {
                func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x160),
                                (undefined1 *)((long)plVar54 + -0x110),0x50);
                uVar59 = *param_7;
                uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == lVar57) {
                      puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                      goto LAB_033c0720;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(param_7,lVar57,2);
LAB_033c0720:
                pcVar77 = (code *)*puVar33;
                func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xc0),
                                (undefined1 *)((long)plVar54 + -0x160),0x50);
                (*pcVar77)(param_7,(undefined1 *)((long)plVar54 + -0xc0),puVar33[1]);
                uVar59 = *puVar37;
                uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059df1d0) {
                      puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                      goto LAB_033c0794;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(puVar37,_DAT_059df1d0,1);
LAB_033c0794:
                (*(code *)*puVar33)(puVar37,uVar78,puVar51,puVar65,plVar71,param_7,puVar33[1]);
                FUN_033bfe1c(puVar46,param_7,puVar56,puVar46[0x44]);
                return (ulong *)0x1;
              }
            }
          }
        }
      }
    }
    auVar81 = func_0x0249fb90();
    pcVar77 = auVar81._8_8_;
    puVar36 = auVar81._0_8_;
    *(undefined **)((long)plVar54 + -0x1d0) = unaff_x29;
    *(undefined8 *)((long)plVar54 + -0x1c8) = 0x33c07f0;
    *(long **)((long)plVar54 + -0x1c0) = unaff_x28;
    *(ulong **)((long)plVar54 + -0x1b8) = puVar63;
    *(ulong **)((long)plVar54 + -0x1b0) = unaff_x26;
    *(undefined8 *)((long)plVar54 + -0x1a8) = uVar78;
    *(ulong **)((long)plVar54 + -0x1a0) = puVar51;
    *(ulong **)((long)plVar54 + -0x198) = puVar65;
    *(long **)((long)plVar54 + -400) = plVar71;
    *(ulong **)((long)plVar54 + -0x188) = puVar56;
    *(ulong **)((long)plVar54 + -0x180) = puVar46;
    *(ulong **)((long)plVar54 + -0x178) = param_7;
    puVar65 = (ulong *)0x5e2c000;
    puVar73 = &DAT_059efcc8;
    puVar46 = puVar52;
    puVar51 = puVar32;
    plVar71 = plVar53;
    puVar56 = puVar55;
    if ((bRam0000000005e2c3c3 & 1) == 0) {
      func_0x0249f8e4(&DAT_059dac08);
      func_0x0249f8e4(&DAT_059df188);
      func_0x0249f8e4(&DAT_059df1d0);
      func_0x0249f8e4(&DAT_059df1f0);
      func_0x0249f8e4(&DAT_059c9978);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7d0);
      func_0x0249f8e4(&DAT_059cbb28);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfbc0);
      func_0x0249f8e4(&DAT_059d47f0);
      func_0x0249f8e4(&DAT_05a69f00);
      func_0x0249f8e4(&DAT_059efcc8);
      bRam0000000005e2c3c3 = 1;
    }
    *(undefined8 *)((long)plVar54 + -0x228) = 0;
    lVar57 = func_0x0249fb80(_DAT_059efcc8);
    func_0x0378a120(lVar57,0);
    if (lVar57 != 0) {
      *(undefined8 *)(lVar57 + 0x20) = puVar52;
      *(ulong **)(lVar57 + 0x18) = puVar64;
      func_0x0249f888((undefined8 *)(lVar57 + 0x20),puVar52);
      if (pcVar77 != (code *)0x0) {
        lVar50 = func_0x036d5f38(pcVar77,0);
        if (lVar50 == 0) {
          return (ulong *)0x0;
        }
        if (plVar53 != (long *)0x0) {
          uVar78 = func_0x03659ee0(plVar53,0);
          puVar51 = (ulong *)func_0x036eb114(pcVar77,uVar78,0);
          if (((ulong)puVar51 & 1) == 0) {
            return puVar51;
          }
          uVar78 = func_0x0249fb80(_DAT_059dac08);
          plVar71 = (long *)0x0;
          func_0x0373956c(uVar78,plVar53,puVar36,9);
          *(undefined8 *)(lVar57 + 0x10) = uVar78;
          func_0x0249f888((undefined8 *)(lVar57 + 0x10),uVar78);
          plVar34 = (long *)func_0x036d5f38(pcVar77,0);
          puVar64 = (ulong *)func_0x0249fb80(_DAT_059d47f0);
          puVar51 = (ulong *)0x0;
          puVar46 = _DAT_05a69f00;
          func_0x028b4b8c(puVar64,lVar57);
          puVar37 = (ulong *)func_0x03659ee0(plVar53,0);
          puVar52 = (ulong *)0x0;
          if (plVar34 != (long *)0x0) {
            lVar50 = *plVar34;
            uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059df188) {
                  puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 0x10) * 0x10 + 0x138);
                  goto LAB_033c0a2c;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df188,0x10);
LAB_033c0a2c:
            puVar51 = (ulong *)puVar33[1];
            puVar46 = puVar37;
            plVar34 = (long *)(*(code *)*puVar33)(plVar34,puVar64);
            if (plVar34 == (long *)0x0) {
              return (ulong *)0x0;
            }
            lVar50 = *plVar34;
            *(code **)((long)plVar54 + -0x2e0) = pcVar77;
            *(ulong **)((long)plVar54 + -0x2d8) = puVar32;
            uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059ca7d0) {
                  puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c0aa0;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar46 = (ulong *)0x0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c0aa0:
            uVar78 = (*(code *)*puVar33)(plVar34,puVar33[1]);
            pcVar77 = (code *)&DAT_059df6e0;
            *(undefined8 *)((long)plVar54 + -0x228) = uVar78;
            puVar73 = &DAT_059df1f0;
            puVar65 = (ulong *)&DAT_059df1d0;
            *(undefined8 *)((long)plVar54 + -0x220) = 0;
            *(undefined1 **)((long)plVar54 + -0x218) = (undefined1 *)((long)plVar54 + -0x228);
            while (plVar34 = *(long **)((long)plVar54 + -0x228), plVar34 != (long *)0x0) {
              lVar50 = *plVar34;
              uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
                    puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                    goto LAB_033c0b24;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar46 = (ulong *)0x0;
              puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c0b24:
              puVar38 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
              if (((ulong)puVar38 & 1) == 0) {
                puVar52 = (ulong *)0x0;
                puVar73 = (undefined *)0x7;
                puVar33 = (undefined8 *)((long)plVar54 + -0x228);
                puVar65 = puVar55;
                goto LAB_033c0d04;
              }
              plVar34 = *(long **)((long)plVar54 + -0x228);
              puVar52 = (ulong *)0x0;
              if (plVar34 == (long *)0x0) goto LAB_033c0f48;
              lVar50 = *plVar34;
              uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059cbb28) {
                    puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                    goto LAB_033c0b90;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar46 = (ulong *)0x0;
              puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c0b90:
              puVar52 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
              if (puVar52 == (ulong *)0x0) goto LAB_033c0f4c;
              uVar59 = *puVar52;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                    puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0xe) * 0x10 + 0x138);
                    goto LAB_033c0bfc;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar46 = (ulong *)0xe;
              puVar33 = (undefined8 *)func_0x024d927c(puVar52);
LAB_033c0bfc:
              plVar34 = (long *)(*(code *)*puVar33)(puVar52,puVar33[1]);
              puVar64 = (ulong *)0x0;
              if (plVar34 == (long *)0x0) goto LAB_033c0f44;
              lVar50 = *plVar34;
              uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df1f0) {
                    puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                    goto LAB_033c0c60;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar46 = (ulong *)0x1;
              puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c0c60:
              puVar64 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
              if (puVar64 == (ulong *)0x0) goto LAB_033c0f50;
              uVar59 = *puVar64;
              puVar32 = *(ulong **)(lVar57 + 0x10);
              puVar37 = *(ulong **)(lVar57 + 0x18);
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df1d0) {
                    puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 3) * 0x10 + 0x138);
                    goto LAB_033c0cc8;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059df1d0,3);
LAB_033c0cc8:
              plVar71 = (long *)puVar33[1];
              (*(code *)*puVar33)(puVar64,puVar32,puVar52,puVar37);
              puVar51 = (ulong *)plVar53[0x44];
              puVar46 = puVar36;
              FUN_033bfe1c(plVar53,puVar55);
            }
            func_0x0249fb90();
            puVar52 = (ulong *)0x0;
LAB_033c0f44:
            func_0x0249fb90();
LAB_033c0f48:
            func_0x0249fb90();
LAB_033c0f4c:
            func_0x0249fb90();
LAB_033c0f50:
            func_0x0249fb90();
            puVar63 = puVar37;
          }
        }
      }
    }
    do {
      do {
        do {
          func_0x0249fb90();
          do {
            auVar80 = func_0x0249fb88(puVar52);
            puVar70 = auVar80._0_8_;
            if (auVar80._8_4_ != 1) {
              func_0x022bd79c((undefined1 *)((long)plVar54 + -0x220));
              func_0x0258f7ac(puVar70);
              auVar81 = func_0x022bd790();
              puVar74 = auVar81._8_8_;
              puVar52 = auVar81._0_8_;
              *(code **)((long)plVar54 + -0x330) = pcVar77;
              *(undefined8 *)((long)plVar54 + -0x328) = 0x33c0fcc;
              *(long *)((long)plVar54 + -800) = lVar57;
              *(ulong **)((long)plVar54 + -0x318) = puVar36;
              *(ulong **)((long)plVar54 + -0x310) = puVar55;
              *(ulong **)((long)plVar54 + -0x308) = puVar65;
              *(long **)((long)plVar54 + -0x300) = plVar53;
              *(undefined **)((long)plVar54 + -0x2f8) = puVar73;
              puVar55 = puVar52;
              if ((bRam0000000005e2c3c4 & 1) == 0) {
                func_0x0249f8e4(&DAT_059c9978);
                puVar55 = (ulong *)func_0x0249f8e4(&DAT_059df8e8);
                bRam0000000005e2c3c4 = 1;
              }
              if (puVar74 == (undefined *)0x0) {
                return puVar55;
              }
              lVar57 = func_0x0376e450(puVar74,puVar46,0);
              if (lVar57 == 0) {
                return (ulong *)0x0;
              }
              puVar65 = (ulong *)0x1;
              plVar53 = (long *)0x0;
              puVar36 = puVar46;
              puVar55 = puVar51;
              func_0x037789bc(puVar74,puVar52);
              if (puVar52 == (ulong *)0x0) goto LAB_033c11b8;
              uVar59 = *puVar52;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 == 0) goto LAB_033c1094;
              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
              goto LAB_033c107c;
            }
            puVar33 = (undefined8 *)func_0x054ed080(puVar70);
            puVar52 = (ulong *)*puVar33;
            *(ulong **)((long)plVar54 + -0x220) = puVar52;
            puVar38 = (ulong *)func_0x054ed090();
            puVar33 = *(undefined8 **)((long)plVar54 + -0x218);
            puVar73 = (undefined *)0x0;
            puVar65 = puVar55;
LAB_033c0d04:
            puVar63 = *(ulong **)((long)plVar54 + -0x2e0);
            puVar55 = *(ulong **)((long)plVar54 + -0x2d8);
            puVar64 = (ulong *)*puVar33;
            if (puVar64 != (ulong *)0x0) {
              uVar59 = *puVar64;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df598) {
                    puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
                    goto LAB_033c0d68;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar46 = (ulong *)0x0;
              puVar33 = (undefined8 *)func_0x024d927c(puVar64);
LAB_033c0d68:
              puVar38 = (ulong *)(*(code *)*puVar33)(puVar64,puVar33[1]);
            }
          } while (puVar52 != (ulong *)0x0);
          if (((int)puVar73 != 7) && ((int)puVar73 != 0)) {
            return puVar38;
          }
          puVar37 = (ulong *)func_0x036d5f38(puVar63,0);
        } while (puVar37 == (ulong *)0x0);
        uVar59 = *puVar37;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df188) {
              puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0xe) * 0x10 + 0x138);
              goto LAB_033c0df0;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0xe;
        puVar33 = (undefined8 *)func_0x024d927c(puVar37);
LAB_033c0df0:
        puVar52 = (ulong *)(*(code *)*puVar33)(puVar37,puVar33[1]);
        if ((int)puVar52 != 0) {
          return puVar52;
        }
        puVar52 = puVar37;
      } while (puVar36 == (ulong *)0x0);
      func_0x037789bc(puVar36,plVar53,puVar55,*(undefined8 *)(lVar57 + 0x18),1,0);
      uVar78 = func_0x03659ee0(plVar53,0);
      func_0x036d3908(puVar63,uVar78,0);
      plVar71 = *(long **)(lVar57 + 0x18);
      puVar56 = (ulong *)0x0;
      param_8 = (ulong *)0x0;
      *(undefined8 *)((long)plVar54 + -0x2f0) = 0;
      *(undefined8 *)((long)plVar54 + -0x268) = 0;
      *(undefined8 *)((long)plVar54 + -0x270) = 0;
      *(undefined8 *)((long)plVar54 + -600) = 0;
      *(undefined8 *)((long)plVar54 + -0x260) = 0;
      *(undefined8 *)((long)plVar54 + -0x248) = 0;
      *(undefined8 *)((long)plVar54 + -0x250) = 0;
      *(undefined8 *)((long)plVar54 + -0x238) = 0;
      *(undefined8 *)((long)plVar54 + -0x240) = 0;
      *(undefined8 *)((long)plVar54 + -0x278) = 0;
      *(undefined8 *)((long)plVar54 + -0x280) = 0;
      puVar46 = puVar55;
      puVar51 = puVar55;
      func_0x034ba874((undefined1 *)((long)plVar54 + -0x280),10);
      lVar50 = _DAT_059c9978;
    } while (puVar65 == (ulong *)0x0);
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x2d0),(undefined1 *)((long)plVar54 + -0x280),
                    0x50);
    uVar59 = *puVar65;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == lVar50) {
          puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
          goto LAB_033c0ee8;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar65,lVar50,2);
LAB_033c0ee8:
    pcVar77 = (code *)*puVar33;
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x220),(undefined1 *)((long)plVar54 + -0x2d0),
                    0x50);
    (*pcVar77)(puVar65,(undefined1 *)((long)plVar54 + -0x220),puVar33[1]);
    puVar32 = (ulong *)FUN_033bfe1c(plVar53,puVar65,puVar36,plVar53[0x44]);
    return puVar32;
  }
  puVar26 = (undefined1 *)((long)plVar54 + -0x30);
  *(undefined8 *)((long)plVar54 + -0x30) = uVar78;
  *(long **)((long)plVar54 + -0x28) = plVar34;
  *(long **)((long)plVar54 + -0x20) = plVar53;
  *(ulong **)((long)plVar54 + -0x18) = puVar32;
  *(ulong **)((long)plVar54 + -0x10) = param_3;
  *(ulong **)((long)plVar54 + -8) = param_4;
  puVar73 = (undefined *)0x5e2e000;
  plVar53 = plVar71;
  puVar32 = puVar51;
  if ((bRam0000000005e2eb0b & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    bRam0000000005e2eb0b = 1;
  }
  if (puVar51 != (ulong *)0x0) {
    uVar59 = *puVar51;
    puVar73 = &DAT_059dfe48;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
          puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
          goto LAB_0387da20;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    plVar53 = (long *)0x2;
    puVar33 = (undefined8 *)func_0x024d927c(puVar51);
LAB_0387da20:
    puVar64 = (ulong *)(*(code *)*puVar33)(puVar51,puVar33[1]);
    if ((int)puVar64 != 2) {
      return puVar64;
    }
    uVar59 = *puVar51;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
          puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0x18) * 0x10 + 0x138);
          goto LAB_0387da84;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    plVar53 = (long *)0x18;
    puVar33 = (undefined8 *)func_0x024d927c(puVar51);
LAB_0387da84:
    puVar64 = (ulong *)(*(code *)*puVar33)(puVar51,puVar33[1]);
    if (((ulong)puVar64 & 1) != 0) {
      return puVar64;
    }
    if (puVar63 != (ulong *)0x0) {
      uVar59 = *puVar63;
      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_0387db00;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(puVar63,_DAT_059df8e8,5);
LAB_0387db00:
      puVar73 = (undefined *)(*(code *)*puVar33)(puVar63,puVar33[1]);
      uVar59 = *puVar51;
      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
            puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
            goto LAB_0387db5c;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(puVar51,_DAT_059dfe48,0);
LAB_0387db5c:
      plVar53 = (long *)puVar33[1];
      plVar34 = (long *)(*(code *)*puVar33)(puVar51,puVar73);
      if (plVar34 != (long *)0x0) {
        lVar57 = *plVar34;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x1f) * 0x10 + 0x138);
              goto LAB_0387dbcc;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dfbc0,0x1f);
LAB_0387dbcc:
        uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
        puVar32 = (ulong *)(uVar61 & 0xffffffff);
        auVar95._8_8_ = *(undefined8 *)((long)plVar54 + -0x10);
        auVar95._0_8_ = puVar46;
        plVar71 = *(long **)((long)plVar54 + -8);
        puVar51 = *(ulong **)((long)plVar54 + -0x20);
        puVar46 = *(ulong **)((long)plVar54 + -0x18);
        uVar78 = *(undefined8 *)((long)plVar54 + -0x30);
        puVar73 = *(undefined **)((long)plVar54 + -0x28);
        puVar26 = (undefined1 *)plVar54;
        goto SUB_0387dbfc;
      }
    }
  }
  uVar78 = 0x387dbfc;
  auVar94 = func_0x0249fb90();
  auVar81._8_8_ = plVar53;
  auVar81._0_8_ = auVar94._8_8_;
  auVar95._8_8_ = puVar63;
  auVar95._0_8_ = auVar94._0_8_;
SUB_0387dbfc:
  do {
    puVar70 = auVar95._0_8_;
    plVar34 = auVar81._8_8_;
    plVar53 = auVar81._0_8_;
    *(undefined8 *)(puVar26 + -0x30) = uVar78;
    *(undefined **)(puVar26 + -0x28) = puVar73;
    *(ulong **)(puVar26 + -0x20) = puVar51;
    *(ulong **)(puVar26 + -0x18) = puVar46;
    *(long *)(puVar26 + -0x10) = auVar95._8_8_;
    *(long **)(puVar26 + -8) = plVar71;
    puVar73 = (undefined *)0x5e2e000;
    plVar54 = plVar34;
    puVar51 = puVar32;
    if ((bRam0000000005e2eb0c & 1) == 0) {
      func_0x0249f8e4(&DAT_05a2a578);
      bRam0000000005e2eb0c = 1;
    }
    lVar57 = *(long *)(puVar70 + 0x38);
    if (lVar57 == 0) {
LAB_0387dcac:
      uVar78 = 0x387dcb0;
      func_0x0249fb90();
      plVar53 = extraout_x1_02;
    }
    else {
      puVar73 = &DAT_05a2a578;
      *(int *)(puVar26 + -0x38) = (int)puVar32;
      plVar54 = _DAT_05a2a578;
      puVar46 = (ulong *)func_0x028926c4(lVar57,puVar26 + -0x38);
      if (((ulong)puVar46 & 1) == 0) {
        if (plVar34 == (long *)0x0) {
          return puVar46;
        }
        lVar57 = plVar34[0xe];
        if (lVar57 != 0) {
          *(int *)(puVar26 + -0x34) = (int)puVar32;
          puVar32 = (ulong *)func_0x028926c4(lVar57,puVar26 + -0x34,_DAT_05a2a578);
          return puVar32;
        }
        goto LAB_0387dcac;
      }
      if (*(long *)(puVar70 + 0x78) != 0) {
        func_0x03873a10(*(long *)(puVar70 + 0x78),(ulong)puVar32 & 0xffffffff);
      }
      plVar54 = (long *)((ulong)puVar32 & 0xffffffff);
      uVar78 = 0x387dc7c;
    }
    *(undefined8 *)(puVar26 + -0x80) = uVar78;
    *(undefined **)(puVar26 + -0x70) = unaff_x24;
    *(undefined **)(puVar26 + -0x68) = puVar73;
    *(undefined **)(puVar26 + -0x60) = puVar70;
    *(undefined1 (*) [16])(puVar26 + -0x58) = auVar81;
    *(ulong *)(puVar26 + -0x48) = (ulong)puVar32 & 0xffffffff;
    plVar71 = (long *)((ulong)plVar54 & 0xffffffff);
    if ((bRam0000000005e2eb0d & 1) == 0) {
      func_0x0249f8e4(&DAT_059dcc98);
      func_0x0249f8e4(&DAT_059df560);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca798);
      func_0x0249f8e4(&DAT_059cbaf8);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059df8e8);
      func_0x0249f8e4(&DAT_059dfe60);
      func_0x0249f8e4(&DAT_059cd7b8);
      bRam0000000005e2eb0d = 1;
    }
    *(undefined8 *)(puVar26 + -0x78) = 0;
    *(undefined8 *)(puVar26 + -0x88) = 0;
    plVar34 = (long *)0x5e2e000;
    if (plVar53 != (long *)0x0) {
      lVar57 = *plVar53;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_0387ddb0;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      plVar54 = (long *)0x5;
      puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_0387ddb0:
      plVar47 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
      if (plVar47 != (long *)0x0) {
        lVar57 = *plVar47;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x2e) * 0x10 + 0x138);
              goto LAB_0387de1c;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        plVar54 = (long *)0x2e;
        puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_0387de1c:
        plVar48 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
        plVar34 = plVar47;
        if (plVar48 != (long *)0x0) {
          lVar57 = *plVar48;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059cd7b8) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                goto LAB_0387de88;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059cd7b8,1);
LAB_0387de88:
          puVar51 = (ulong *)puVar33[1];
          plVar54 = (long *)(puVar26 + -0x78);
          puVar32 = (ulong *)(*(code *)*puVar33)(plVar48,plVar71);
          if (((ulong)puVar32 & 1) == 0) {
            return puVar32;
          }
          plVar71 = (long *)&DAT_059dcc98;
          if (*(int *)(_DAT_059dcc98 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          plVar34 = plVar48;
          if (*(long *)(puVar26 + -0x78) != 0) {
            plVar71 = (long *)**(undefined8 **)(_DAT_059dcc98 + 0xb8);
            plVar47 = (long *)func_0x036bc734(*(long *)(puVar26 + -0x78),0);
            if (plVar47 != (long *)0x0) {
              lVar57 = *plVar47;
              uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059ca798) {
                    puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                    goto LAB_0387df34;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              plVar54 = (long *)0x0;
              puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_0387df34:
              uVar78 = (*(code *)*puVar33)(plVar47,puVar33[1]);
              puVar70 = &DAT_059df6e0;
              *(undefined8 *)(puVar26 + -0x88) = uVar78;
              puVar73 = &DAT_059cbaf8;
              unaff_x24 = &DAT_059df560;
              *(undefined8 *)(puVar26 + -0x98) = 0;
              *(undefined1 **)(puVar26 + -0x90) = puVar26 + -0x88;
              while (plVar34 = *(long **)(puVar26 + -0x88), plVar34 != (long *)0x0) {
                lVar57 = *plVar34;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
                      puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                      goto LAB_0387dfb8;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                plVar54 = (long *)0x0;
                puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_0387dfb8:
                puVar32 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
                if (((ulong)puVar32 & 1) == 0) {
                  plVar53 = (long *)0x0;
                  puVar33 = (undefined8 *)(puVar26 + -0x88);
                  goto LAB_0387e0a0;
                }
                plVar47 = *(long **)(puVar26 + -0x88);
                plVar34 = (long *)0x0;
                if (plVar47 == (long *)0x0) goto LAB_0387e128;
                lVar57 = *plVar47;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059cbaf8) {
                      puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                      goto LAB_0387e01c;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                plVar54 = (long *)0x0;
                puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_0387e01c:
                plVar47 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                plVar34 = (long *)0x0;
                if (plVar47 == (long *)0x0) goto LAB_0387e12c;
                lVar57 = *plVar47;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059df560) {
                      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                      goto LAB_0387e080;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df560,1);
LAB_0387e080:
                puVar51 = (ulong *)puVar33[1];
                plVar54 = plVar71;
                (*(code *)*puVar33)(plVar47,plVar53);
              }
              func_0x0249fb90();
LAB_0387e128:
              func_0x0249fb90();
LAB_0387e12c:
              func_0x0249fb90();
            }
          }
        }
      }
    }
    func_0x0249fb90();
    while( true ) {
      auVar80 = func_0x0249fb88(plVar53);
      uVar78 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) break;
      puVar33 = (undefined8 *)func_0x054ed080(uVar78);
      plVar53 = (long *)*puVar33;
      *(long **)(puVar26 + -0x98) = plVar53;
      puVar32 = (ulong *)func_0x054ed090();
      puVar33 = *(undefined8 **)(puVar26 + -0x90);
LAB_0387e0a0:
      plVar71 = (long *)*puVar33;
      if (plVar71 != (long *)0x0) {
        lVar57 = *plVar71;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df598) {
              puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_0387e0fc;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        plVar54 = (long *)0x0;
        puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_0387e0fc:
        puVar32 = (ulong *)(*(code *)*puVar33)(plVar71,puVar33[1]);
      }
      if (plVar53 == (long *)0x0) {
        return puVar32;
      }
    }
    func_0x022bd79c(puVar26 + -0x98);
    func_0x0258f7ac(uVar78);
    auVar95 = func_0x022bd790();
    uVar35 = auVar95._8_8_;
    puVar27 = puVar26 + -0xf0;
    *(undefined8 *)(puVar26 + -0xf0) = 0x387e190;
    *(ulong **)(puVar26 + -0xe0) = unaff_x26;
    *(undefined **)(puVar26 + -0xd8) = unaff_x25;
    *(undefined **)(puVar26 + -0xd0) = unaff_x24;
    *(undefined **)(puVar26 + -200) = puVar73;
    *(undefined **)(puVar26 + -0xc0) = puVar70;
    *(long **)(puVar26 + -0xb8) = plVar34;
    *(long **)(puVar26 + -0xb0) = plVar71;
    *(undefined8 *)(puVar26 + -0xa8) = uVar78;
    unaff_x25 = &DAT_059f1b60;
    puVar32 = puVar51;
    if ((bRam0000000005e2eb0e & 1) == 0) {
      func_0x0249f8e4(&DAT_05a43228);
      func_0x0249f8e4(&DAT_059c6b48);
      func_0x0249f8e4(&DAT_05a6c788);
      func_0x0249f8e4(&DAT_059f1b60);
      bRam0000000005e2eb0e = 1;
    }
    if (*(int *)(_DAT_059f1b60 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar33 = *(undefined8 **)(_DAT_059f1b60 + 0xb8);
    lVar57 = puVar33[3];
    unaff_x26 = (ulong *)&DAT_05a43228;
    if (lVar57 == 0) {
      if (*(int *)(_DAT_059f1b60 + 0xe4) == 0) {
        func_0x0249fa64();
        puVar33 = *(undefined8 **)(_DAT_059f1b60 + 0xb8);
      }
      unaff_x24 = (undefined *)*puVar33;
      lVar57 = func_0x0249fb80(_DAT_059c6b48);
      puVar32 = (ulong *)0x0;
      func_0x02a9aa34(lVar57,unaff_x24,_DAT_05a6c788);
      plVar53 = (long *)(*(long *)(_DAT_059f1b60 + 0xb8) + 0x18);
      *plVar53 = lVar57;
      func_0x0249f888(plVar53,lVar57);
    }
    plVar71 = _DAT_05a43228;
    puVar46 = (ulong *)func_0x026e8e9c(puVar51,lVar57);
    if (auVar95._0_8_ == 0) {
      uVar79 = 0x387e2c0;
      auVar95 = func_0x0249fb90();
      uVar78 = 0;
    }
    else {
      uVar35 = *(undefined8 *)(puVar26 + -0xb0);
      puVar51 = *(ulong **)(puVar26 + -0xc0);
      uVar78 = *(undefined8 *)(puVar26 + -0xb8);
      unaff_x24 = *(undefined **)(puVar26 + -0xd0);
      lVar57 = *(long *)(puVar26 + -200);
      unaff_x26 = *(ulong **)(puVar26 + -0xe0);
      unaff_x25 = *(undefined **)(puVar26 + -0xd8);
      uVar79 = *(undefined8 *)(puVar26 + -0xf0);
      puVar27 = puVar26 + -0xa0;
      plVar71 = plVar54;
      puVar32 = puVar46;
      plVar54 = *(long **)(puVar26 + -0xa8);
    }
    plVar53 = auVar95._8_8_;
    puVar46 = auVar95._0_8_;
    auVar81._8_8_ = plVar71;
    auVar81._0_8_ = plVar53;
    puVar26 = puVar27 + -0x50;
    *(undefined8 *)(puVar27 + -0x40) = uVar79;
    *(undefined **)(puVar27 + -0x30) = unaff_x24;
    *(long *)(puVar27 + -0x28) = lVar57;
    *(ulong **)(puVar27 + -0x20) = puVar51;
    *(undefined8 *)(puVar27 + -0x18) = uVar78;
    *(undefined8 *)(puVar27 + -0x10) = uVar35;
    *(long **)(puVar27 + -8) = plVar54;
    puVar51 = puVar46;
    if ((bRam0000000005e2eb0f & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca8c8);
      func_0x0249f8e4(&DAT_059cbc38);
      puVar51 = (ulong *)func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e2eb0f = 1;
    }
    *(undefined8 *)(puVar27 + -0x38) = 0;
    if (puVar32 == (ulong *)0x0) {
      return puVar51;
    }
    uVar59 = *puVar32;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059ca8c8) {
          puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_0387e384;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059ca8c8,0);
LAB_0387e384:
    puVar73 = &DAT_059df6e0;
    unaff_x24 = &DAT_059cbc38;
    uVar78 = (*(code *)*puVar33)(puVar32,puVar33[1]);
    *(undefined8 *)(puVar27 + -0x38) = uVar78;
    *(undefined8 *)(puVar27 + -0x50) = 0;
    *(undefined1 **)(puVar27 + -0x48) = puVar27 + -0x38;
    plVar54 = *(long **)(puVar27 + -0x38);
    if (plVar54 == (long *)0x0) {
      func_0x0249fb90();
LAB_0387e518:
      func_0x0249fb90();
      do {
        auVar80 = func_0x0249fb88(plVar71);
        uVar78 = auVar80._0_8_;
        if (auVar80._8_4_ != 1) {
          func_0x022bd79c(puVar27 + -0x50);
          func_0x0258f7ac(uVar78);
          auVar81 = func_0x022bd790();
          *(undefined8 *)(puVar27 + -0x80) = 0x387e574;
          *(undefined **)(puVar27 + -0x78) = &DAT_059df6e0;
          *(long **)(puVar27 + -0x70) = plVar54;
          *(ulong **)(puVar27 + -0x68) = puVar46;
          *(long **)(puVar27 + -0x60) = plVar53;
          *(undefined8 *)(puVar27 + -0x58) = uVar78;
          puVar32 = auVar81._0_8_;
          if ((bRam0000000005e2eb10 & 1) == 0) {
            func_0x0249f8e4(&DAT_05a03a28);
            func_0x0249f8e4(&DAT_05a03a30);
            func_0x0249f8e4(&DAT_05a03a38);
            puVar32 = (ulong *)func_0x0249f8e4(&DAT_05a186c0);
            bRam0000000005e2eb10 = 1;
          }
          *(undefined8 *)(puVar27 + -0xa0) = 0;
          *(undefined8 *)(puVar27 + -0x98) = 0;
          *(undefined8 *)(puVar27 + -0x90) = 0;
          if (auVar81._8_8_ != 0) {
            func_0x028310e8(auVar81._8_8_,puVar27 + -0xa0,_DAT_05a186c0);
            *(undefined8 *)(puVar27 + -0xb0) = 0;
            *(undefined1 **)(puVar27 + -0xa8) = puVar27 + -0xa0;
            while (uVar61 = func_0x02a5d2d0(puVar27 + -0xa0,_DAT_05a03a30), lVar57 = _DAT_05a03a38,
                  (uVar61 & 1) != 0) {
              lVar49 = *(long *)(_DAT_05a03a38 + 0x20);
              uVar4 = *(ushort *)(lVar49 + 0x135);
              lVar50 = lVar49;
              if ((uVar4 & 1) == 0) {
                lVar50 = func_0x024d8f40();
                lVar49 = *(long *)(lVar57 + 0x20);
                uVar4 = *(ushort *)(lVar49 + 0x135);
              }
              uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar50 + 0xc0) + 0x10) + 0xfc);
              if ((uVar4 & 1) == 0) {
                lVar49 = func_0x024d8f40();
              }
              uVar78 = func_0x0249f90c(puVar27 + -0xa0,
                                       *(long *)(*(long *)(*(long *)(lVar49 + 0xc0) + 8) + 0x80) +
                                       0x60);
              func_0x054ed0d0(puVar27 + -0x84,uVar78,uVar28);
              func_0x0387e718(auVar81._0_8_,*(undefined4 *)(puVar27 + -0x84));
            }
            puVar32 = (ulong *)func_0x02a5d2cc(puVar27 + -0xa0,_DAT_05a03a28);
          }
          return puVar32;
        }
        puVar33 = (undefined8 *)func_0x054ed080(uVar78);
        plVar71 = (long *)*puVar33;
        *(long **)(puVar27 + -0x50) = plVar71;
        puVar32 = (ulong *)func_0x054ed090();
        puVar33 = *(undefined8 **)(puVar27 + -0x48);
LAB_0387e490:
        plVar53 = (long *)*puVar33;
        if (plVar53 != (long *)0x0) {
          lVar57 = *plVar53;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df598) {
                puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                goto LAB_0387e4ec;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df598,0);
LAB_0387e4ec:
          puVar32 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
        }
        if (plVar71 == (long *)0x0) {
          return puVar32;
        }
      } while( true );
    }
    lVar57 = *plVar54;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
          puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_0387e400;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059df6e0,0);
LAB_0387e400:
    puVar32 = (ulong *)(*(code *)*puVar33)(plVar54,puVar33[1]);
    if (((ulong)puVar32 & 1) == 0) {
      plVar71 = (long *)0x0;
      puVar33 = (undefined8 *)(puVar27 + -0x38);
      goto LAB_0387e490;
    }
    puVar51 = *(ulong **)(puVar27 + -0x38);
    plVar54 = (long *)0x0;
    if (puVar51 == (ulong *)0x0) goto LAB_0387e518;
    uVar59 = *puVar51;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059cbc38) {
          puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_0387e464;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar51,_DAT_059cbc38,0);
LAB_0387e464:
    uVar61 = (*(code *)*puVar33)(puVar51,puVar33[1]);
    puVar32 = (ulong *)(uVar61 & 0xffffffff);
    uVar78 = 0x387e484;
  } while( true );
  while( true ) {
    uVar61 = uVar61 - 1;
    piVar62 = piVar62 + 4;
    if (uVar61 == 0) break;
LAB_033c107c:
    if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
      puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 5) * 0x10 + 0x138);
      goto LAB_033c10b4;
    }
  }
LAB_033c1094:
  puVar33 = (undefined8 *)func_0x024d927c(puVar52,_DAT_059df8e8,5);
LAB_033c10b4:
  uVar78 = (*(code *)*puVar33)(puVar52,puVar33[1]);
  plVar53 = (long *)func_0x036d3908(lVar57,uVar78,0);
  puVar56 = (ulong *)0x0;
  param_8 = (ulong *)0x0;
  *(undefined8 *)((long)plVar54 + -0x430) = 0;
  *(undefined8 *)((long)plVar54 + -0x3b8) = 0;
  *(undefined8 *)((long)plVar54 + -0x3c0) = 0;
  *(undefined8 *)((long)plVar54 + -0x3a8) = 0;
  *(undefined8 *)((long)plVar54 + -0x3b0) = 0;
  *(undefined8 *)((long)plVar54 + -0x398) = 0;
  *(undefined8 *)((long)plVar54 + -0x3a0) = 0;
  *(undefined8 *)((long)plVar54 + -0x388) = 0;
  *(undefined8 *)((long)plVar54 + -0x390) = 0;
  *(undefined8 *)((long)plVar54 + -0x3c8) = 0;
  *(undefined8 *)((long)plVar54 + -0x3d0) = 0;
  puVar36 = puVar46;
  puVar55 = puVar46;
  puVar65 = puVar51;
  func_0x034ba874((undefined1 *)((long)plVar54 + -0x3d0),10);
  lVar50 = _DAT_059c9978;
  if (plVar71 != (long *)0x0) {
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x420),(undefined1 *)((long)plVar54 + -0x3d0),
                    0x50);
    lVar57 = *plVar71;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == lVar50) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
          goto LAB_033c117c;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar71,lVar50,2);
LAB_033c117c:
    pcVar77 = (code *)*puVar33;
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x380),(undefined1 *)((long)plVar54 + -0x420),
                    0x50);
    puVar32 = (ulong *)(*pcVar77)(plVar71,(undefined1 *)((long)plVar54 + -0x380),puVar33[1]);
    return puVar32;
  }
LAB_033c11b8:
  auVar82 = func_0x0249fb90();
  uVar61 = auVar82._8_8_;
  puVar25 = (undefined1 *)((long)plVar54 + -0x4b0);
  *(code **)((long)plVar54 + -0x490) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0x488) = 0x33c11bc;
  *(ulong **)((long)plVar54 + -0x480) = puVar32;
  *(ulong **)((long)plVar54 + -0x478) = puVar63;
  *(ulong **)((long)plVar54 + -0x470) = puVar64;
  *(undefined **)((long)plVar54 + -0x468) = puVar70;
  *(undefined **)((long)plVar54 + -0x460) = puVar74;
  *(long *)((long)plVar54 + -0x458) = lVar57;
  *(ulong **)((long)plVar54 + -0x450) = puVar52;
  *(ulong **)((long)plVar54 + -0x448) = puVar46;
  *(ulong **)((long)plVar54 + -0x440) = puVar51;
  *(long **)((long)plVar54 + -0x438) = plVar71;
  plVar71 = (long *)0x5e2c000;
  puVar51 = puVar36;
  if ((bRam0000000005e2c3c6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c1700);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059d4870);
    func_0x0249f8e4(&DAT_05a69f18);
    func_0x0249f8e4(&DAT_05a69f20);
    func_0x0249f8e4(&DAT_059efce0);
    bRam0000000005e2c3c6 = 1;
  }
  *(undefined8 *)((long)plVar54 + -0x498) = 0;
  lVar57 = func_0x0249fb80(_DAT_059efce0);
  func_0x0378a758(lVar57,0);
  if (lVar57 != 0) {
    plVar71 = (long *)(lVar57 + 0x10);
    *plVar71 = auVar82._0_8_;
    func_0x0249f888(plVar71,auVar82._0_8_);
    puVar46 = (ulong *)(lVar57 + 0x18);
    auVar5._8_8_ = uVar61;
    auVar5._0_8_ = puVar46;
    auVar82._8_8_ = uVar61;
    auVar82._0_8_ = puVar46;
    *puVar46 = uVar61;
    func_0x0249f888(puVar46,uVar61);
    *(undefined8 *)(lVar57 + 0x20) = puVar36;
    func_0x0249f888((undefined8 *)(lVar57 + 0x20),puVar36);
    if (*plVar71 != 0) {
      puVar51 = (ulong *)0x7;
      puVar55 = (ulong *)0x0;
      puVar65 = (ulong *)0x0;
      puVar52 = (ulong *)func_0x0366f6f8(*plVar71,*puVar46);
      auVar82 = auVar5;
      if (*plVar71 != 0) {
        puVar33 = (undefined8 *)(lVar57 + 0x28);
        auVar6._8_8_ = puVar33;
        auVar6._0_8_ = puVar46;
        auVar82._8_8_ = puVar33;
        *puVar33 = *(undefined8 *)(*plVar71 + 0x218);
        func_0x0249f888(puVar33);
        puVar36 = puVar52;
        if (*(long *)(lVar57 + 0x10) != 0) {
          plVar34 = (long *)func_0x03659ee0(*(long *)(lVar57 + 0x10),0);
          auVar7._8_8_ = plVar34;
          auVar7._0_8_ = puVar46;
          auVar82 = auVar6;
          if (plVar34 != (long *)0x0) {
            lVar50 = *plVar34;
            uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
                  puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                  goto LAB_033c1384;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar51 = (ulong *)0x2;
            puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c1384:
            uVar78 = (*(code *)*puVar33)(plVar34,puVar33[1]);
            *(undefined8 *)(lVar57 + 0x30) = uVar78;
            func_0x0249f888();
            auVar82 = auVar7;
            if (puVar52 != (ulong *)0x0) {
              uVar59 = *puVar52;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059ca768) {
                    puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
                    goto LAB_033c13f8;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar51 = (ulong *)0x0;
              puVar33 = (undefined8 *)func_0x024d927c(puVar52);
LAB_033c13f8:
              puVar74 = &DAT_059df6e0;
              puVar70 = &DAT_059cbac8;
              puVar64 = (ulong *)&DAT_059d4870;
              puVar63 = (ulong *)&DAT_05a69f20;
              puVar32 = (ulong *)&DAT_059c1700;
              pcVar77 = (code *)&DAT_05a69f18;
              plVar71 = (long *)&DAT_059defe8;
              uVar78 = (*(code *)*puVar33)(puVar52,puVar33[1]);
              *(undefined8 *)((long)plVar54 + -0x498) = uVar78;
              *(undefined8 *)((long)plVar54 + -0x4a8) = 0;
              *(undefined1 **)((long)plVar54 + -0x4a0) = (undefined1 *)((long)plVar54 + -0x498);
              while( true ) {
                auVar82._8_8_ = plVar34;
                auVar82._0_8_ = puVar46;
                plVar47 = *(long **)((long)plVar54 + -0x498);
                if (plVar47 == (long *)0x0) break;
                lVar50 = *plVar47;
                uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
                      puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                      goto LAB_033c149c;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar51 = (ulong *)0x0;
                puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c149c:
                puVar52 = (ulong *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                if (((ulong)puVar52 & 1) == 0) {
                  lVar57 = 0;
                  puVar33 = (undefined8 *)((long)plVar54 + -0x498);
                  goto LAB_033c15d4;
                }
                plVar47 = *(long **)((long)plVar54 + -0x498);
                if (plVar47 == (long *)0x0) goto LAB_033c1664;
                lVar50 = *plVar47;
                uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059cbac8) {
                      puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                      goto LAB_033c1500;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059cbac8,0);
LAB_033c1500:
                plVar47 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                plVar34 = (long *)func_0x0249fb80(_DAT_059d4870);
                puVar55 = (ulong *)0x0;
                puVar51 = _DAT_05a69f20;
                func_0x028b4b8c(plVar34,lVar57);
                puVar46 = *(ulong **)(lVar57 + 0x38);
                if (puVar46 == (ulong *)0x0) {
                  puVar46 = (ulong *)func_0x0249fb80(_DAT_059c1700);
                  puVar55 = (ulong *)0x0;
                  puVar51 = _DAT_05a69f18;
                  func_0x029bb7f8(puVar46,lVar57);
                  *(ulong **)(lVar57 + 0x38) = puVar46;
                  func_0x0249f888(lVar57 + 0x38,puVar46);
                }
                if (plVar47 == (long *)0x0) goto LAB_033c1668;
                lVar50 = *plVar47;
                uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
                      puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 0x1a) * 0x10 + 0x138);
                      goto LAB_033c15b4;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059defe8,0x1a);
LAB_033c15b4:
                puVar55 = (ulong *)puVar33[1];
                puVar51 = puVar46;
                (*(code *)*puVar33)(plVar47,plVar34);
              }
              func_0x0249fb90();
LAB_033c1664:
              func_0x0249fb90();
LAB_033c1668:
              auVar82._8_8_ = plVar34;
              auVar82._0_8_ = puVar46;
              puVar36 = (ulong *)0x0;
              func_0x0249fb90();
            }
          }
        }
      }
    }
  }
  func_0x0249fb90();
  while( true ) {
    auVar80 = func_0x0249fb88(lVar57);
    uVar78 = auVar80._0_8_;
    if (auVar80._8_4_ != 1) break;
    plVar34 = (long *)func_0x054ed080(uVar78);
    lVar57 = *plVar34;
    *(long *)((long)plVar54 + -0x4a8) = lVar57;
    puVar52 = (ulong *)func_0x054ed090();
    puVar33 = *(undefined8 **)((long)plVar54 + -0x4a0);
LAB_033c15d4:
    puVar36 = (ulong *)*puVar33;
    if (puVar36 != (ulong *)0x0) {
      uVar59 = *puVar36;
      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df598) {
            puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
            goto LAB_033c1630;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar51 = (ulong *)0x0;
      puVar33 = (undefined8 *)func_0x024d927c(puVar36);
LAB_033c1630:
      puVar52 = (ulong *)(*(code *)*puVar33)(puVar36,puVar33[1]);
    }
    if (lVar57 == 0) {
      return puVar52;
    }
  }
  func_0x022bd79c((undefined1 *)((long)plVar54 + -0x4a8));
  func_0x0258f7ac(uVar78);
  auVar83 = func_0x022bd790();
  uVar61 = auVar83._0_8_;
  *(undefined8 *)((long)plVar54 + -0x4f0) = 0x33c16d8;
  *(undefined **)((long)plVar54 + -0x4e8) = puVar70;
  *(undefined **)((long)plVar54 + -0x4e0) = puVar74;
  *(long **)((long)plVar54 + -0x4d8) = plVar71;
  *(undefined1 (*) [16])((long)plVar54 + -0x4d0) = auVar82;
  *(ulong **)((long)plVar54 + -0x4c0) = puVar36;
  *(undefined8 *)((long)plVar54 + -0x4b8) = uVar78;
  puVar52 = (ulong *)&DAT_059efce8;
  puVar46 = puVar51;
  if ((bRam0000000005e2c3c7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c1668);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059d4820);
    func_0x0249f8e4(&DAT_05a69f28);
    func_0x0249f8e4(&DAT_05a69f30);
    func_0x0249f8e4(&DAT_059efce8);
    bRam0000000005e2c3c7 = 1;
  }
  lVar57 = func_0x0249fb80(_DAT_059efce8);
  func_0x0378a914(lVar57,0);
  if (lVar57 != 0) {
    *(undefined8 *)(lVar57 + 0x10) = puVar51;
    func_0x0249f888((undefined8 *)(lVar57 + 0x10),puVar51);
    puVar51 = (ulong *)(lVar57 + 0x20);
    *puVar51 = uVar61;
    func_0x0249f888(puVar51,uVar61);
    *(undefined8 *)(lVar57 + 0x30) = auVar83._8_8_;
    func_0x0249f888((undefined8 *)(lVar57 + 0x30),auVar83._8_8_);
    plVar71 = (long *)*puVar51;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar61;
    if (plVar71 != (long *)0x0) {
      lVar50 = *plVar71;
      uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
            puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 4) * 0x10 + 0x138);
            goto LAB_033c181c;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar46 = (ulong *)0x4;
      puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c181c:
      uVar78 = (*(code *)*puVar33)(plVar71,puVar33[1]);
      *(undefined8 *)(lVar57 + 0x18) = uVar78;
      func_0x0249f888((undefined8 *)(lVar57 + 0x18),uVar78);
      plVar71 = *(long **)(lVar57 + 0x20);
      auVar8._8_8_ = plVar71;
      auVar8._0_8_ = uVar61;
      auVar83._8_8_ = plVar71;
      if (plVar71 != (long *)0x0) {
        lVar50 = *plVar71;
        uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 5) * 0x10 + 0x138);
              goto LAB_033c189c;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0x5;
        puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c189c:
        plVar71 = (long *)(*(code *)*puVar33)(plVar71,puVar33[1]);
        auVar83 = auVar8;
        if (plVar71 != (long *)0x0) {
          lVar50 = *plVar71;
          puVar70 = &DAT_05a69f30;
          puVar74 = &DAT_059c1668;
          uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
                puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_033c1928;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfe60,2);
LAB_033c1928:
          uVar78 = (*(code *)*puVar33)(plVar71,puVar33[1]);
          *(undefined8 *)(lVar57 + 0x28) = uVar78;
          func_0x0249f888();
          uVar61 = *(ulong *)(lVar57 + 0x18);
          puVar36 = *(ulong **)(lVar57 + 0x30);
          puVar51 = (ulong *)func_0x0249fb80(_DAT_059d4820);
          func_0x028b4b8c(puVar51,lVar57,_DAT_05a69f30,0);
          puVar52 = (ulong *)func_0x0249fb80(_DAT_059c1668);
          puVar55 = (ulong *)0x0;
          puVar46 = _DAT_05a69f28;
          func_0x029bb7f8(puVar52,lVar57);
          auVar83._8_8_ = 0;
          auVar83._0_8_ = puVar36;
          if (uVar61 != 0) {
            uVar78 = *(undefined8 *)((long)plVar54 + -0x4c0);
            uVar42 = *(undefined8 *)((long)plVar54 + -0x4b8);
            uVar35 = *(undefined8 *)((long)plVar54 + -0x4d0);
            uVar67 = *(undefined8 *)((long)plVar54 + -0x4c8);
            puVar73 = *(undefined **)((long)plVar54 + -0x4e0);
            uVar72 = *(undefined8 *)((long)plVar54 + -0x4d8);
            uVar79 = *(undefined8 *)((long)plVar54 + -0x4f0);
            uVar75 = *(undefined8 *)((long)plVar54 + -0x4e8);
            goto LAB_0368a1a8;
          }
        }
      }
    }
  }
  auVar84 = func_0x0249fb90();
  uVar61 = auVar84._0_8_;
  *(undefined8 *)((long)plVar54 + -0x530) = 0x33c19b4;
  *(undefined **)((long)plVar54 + -0x528) = puVar70;
  *(undefined **)((long)plVar54 + -0x520) = puVar74;
  *(ulong **)((long)plVar54 + -0x518) = puVar52;
  *(ulong **)((long)plVar54 + -0x510) = puVar51;
  *(undefined1 (*) [16])((long)plVar54 + -0x508) = auVar83;
  *(long *)((long)plVar54 + -0x4f8) = lVar57;
  puVar52 = (ulong *)&DAT_059efcf0;
  puVar37 = puVar46;
  if ((bRam0000000005e2c3c8 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c1668);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059d4820);
    func_0x0249f8e4(&DAT_05a69f38);
    func_0x0249f8e4(&DAT_05a69f40);
    func_0x0249f8e4(&DAT_059efcf0);
    bRam0000000005e2c3c8 = 1;
  }
  lVar57 = func_0x0249fb80(_DAT_059efcf0);
  func_0x0378ab80(lVar57,0);
  puVar36 = puVar46;
  if (lVar57 != 0) {
    puVar52 = (ulong *)(lVar57 + 0x10);
    *puVar52 = uVar61;
    func_0x0249f888(puVar52,uVar61);
    *(undefined8 *)(lVar57 + 0x18) = puVar46;
    func_0x0249f888((undefined8 *)(lVar57 + 0x18),puVar46);
    *(undefined8 *)(lVar57 + 0x30) = auVar84._8_8_;
    func_0x0249f888((undefined8 *)(lVar57 + 0x30),auVar84._8_8_);
    plVar71 = (long *)*puVar52;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar61;
    if (plVar71 != (long *)0x0) {
      lVar50 = *plVar71;
      uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
            puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 4) * 0x10 + 0x138);
            goto LAB_033c1af8;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar37 = (ulong *)0x4;
      puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c1af8:
      uVar78 = (*(code *)*puVar33)(plVar71,puVar33[1]);
      *(undefined8 *)(lVar57 + 0x28) = uVar78;
      func_0x0249f888((undefined8 *)(lVar57 + 0x28),uVar78);
      plVar71 = *(long **)(lVar57 + 0x10);
      auVar9._8_8_ = plVar71;
      auVar9._0_8_ = uVar61;
      auVar84._8_8_ = plVar71;
      if (plVar71 != (long *)0x0) {
        lVar50 = *plVar71;
        uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 5) * 0x10 + 0x138);
              goto LAB_033c1b78;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar37 = (ulong *)0x5;
        puVar33 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c1b78:
        plVar71 = (long *)(*(code *)*puVar33)(plVar71,puVar33[1]);
        auVar84 = auVar9;
        if (plVar71 != (long *)0x0) {
          lVar50 = *plVar71;
          puVar70 = &DAT_05a69f38;
          puVar74 = &DAT_059c1668;
          uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
                puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_033c1c04;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfe60,2);
LAB_033c1c04:
          uVar78 = (*(code *)*puVar33)(plVar71,puVar33[1]);
          *(undefined8 *)(lVar57 + 0x20) = uVar78;
          func_0x0249f888();
          uVar61 = *(ulong *)(lVar57 + 0x28);
          puVar36 = *(ulong **)(lVar57 + 0x30);
          puVar51 = (ulong *)func_0x0249fb80(_DAT_059d4820);
          func_0x028b4b8c(puVar51,lVar57,_DAT_05a69f38,0);
          puVar52 = (ulong *)func_0x0249fb80(_DAT_059c1668);
          puVar55 = (ulong *)0x0;
          puVar37 = _DAT_05a69f40;
          func_0x029bb7f8(puVar52,lVar57);
          auVar84._8_8_ = 0;
          auVar84._0_8_ = puVar51;
          if (uVar61 != 0) {
            uVar78 = *(undefined8 *)((long)plVar54 + -0x500);
            uVar42 = *(undefined8 *)((long)plVar54 + -0x4f8);
            uVar35 = *(undefined8 *)((long)plVar54 + -0x510);
            uVar67 = *(undefined8 *)((long)plVar54 + -0x508);
            puVar73 = *(undefined **)((long)plVar54 + -0x520);
            uVar72 = *(undefined8 *)((long)plVar54 + -0x518);
            puVar25 = (undefined1 *)((long)plVar54 + -0x4f0);
            uVar79 = *(undefined8 *)((long)plVar54 + -0x530);
            uVar75 = *(undefined8 *)((long)plVar54 + -0x528);
LAB_0368a1a8:
            *(undefined8 *)(puVar25 + -0x50) = uVar79;
            *(ulong **)(puVar25 + -0x40) = puVar64;
            *(undefined8 *)(puVar25 + -0x38) = uVar75;
            *(undefined **)(puVar25 + -0x30) = puVar73;
            *(undefined8 *)(puVar25 + -0x28) = uVar72;
            *(undefined8 *)(puVar25 + -0x20) = uVar35;
            *(undefined8 *)(puVar25 + -0x18) = uVar67;
            *(undefined8 *)(puVar25 + -0x10) = uVar78;
            *(undefined8 *)(puVar25 + -8) = uVar42;
            plVar54 = (long *)0x5e2d000;
            if ((bRam0000000005e2d77e & 1) == 0) {
              func_0x0249f8e4(&DAT_059deff0);
              func_0x0249f8e4(&DAT_05a17a80);
              func_0x0249f8e4(&DAT_05a17a88);
              func_0x0249f8e4(&DAT_05a17a90);
              bRam0000000005e2d77e = 1;
            }
            puVar32 = (ulong *)func_0x03687f1c(uVar61,puVar36,0);
            if (puVar32 != (ulong *)0x0) {
              uVar29 = (int)puVar32[3] - 1;
              puVar46 = puVar32;
              if (-1 < (int)uVar29) {
                puVar73 = &DAT_05a17a90;
                do {
                  uVar61 = (ulong)uVar29;
                  func_0x0282f3c4(puVar32,uVar61,puVar25 + -0x48,_DAT_05a17a90);
                  plVar54 = *(long **)(puVar25 + -0x48);
                  puVar36 = puVar32;
                  if (plVar54 == (long *)0x0) goto LAB_0368a390;
                  lVar57 = *plVar54;
                  uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
                  if (uVar59 != 0) {
                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar62 + -2) == _DAT_059deff0) {
                        puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                        goto LAB_0368a2b4;
                      }
                      uVar59 = uVar59 - 1;
                      piVar62 = piVar62 + 4;
                    } while (uVar59 != 0);
                  }
                  puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059deff0,0);
LAB_0368a2b4:
                  uVar28 = (*(code *)*puVar33)(plVar54,puVar33[1]);
                  if (puVar51 == (ulong *)0x0) goto LAB_0368a390;
                  uVar60 = puVar51[8];
                  pcVar77 = (code *)puVar51[3];
                  uVar59 = puVar51[5];
                  *(undefined4 *)(puVar25 + -0x48) = uVar28;
                  puVar46 = (ulong *)(*pcVar77)(uVar60,puVar25 + -0x48,uVar59);
                  if ((((ulong)puVar46 & 1) != 0) &&
                     (puVar46 = (ulong *)func_0x02832544(puVar32,uVar61,_DAT_05a17a80),
                     puVar52 != (ulong *)0x0)) {
                    lVar57 = *plVar54;
                    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                    if (uVar61 != 0) {
                      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar62 + -2) == _DAT_059deff0) {
                          puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                          goto LAB_0368a344;
                        }
                        uVar61 = uVar61 - 1;
                        piVar62 = piVar62 + 4;
                      } while (uVar61 != 0);
                    }
                    puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059deff0,0);
LAB_0368a344:
                    uVar28 = (*(code *)*puVar33)(plVar54,puVar33[1]);
                    uVar59 = puVar52[8];
                    pcVar77 = (code *)puVar52[3];
                    uVar61 = puVar52[5];
                    *(undefined4 *)(puVar25 + -0x48) = uVar28;
                    puVar46 = (ulong *)(*pcVar77)(uVar59,puVar25 + -0x48,uVar61);
                  }
                  bVar1 = 0 < (int)uVar29;
                  uVar29 = uVar29 - 1;
                } while (bVar1);
              }
              return puVar46;
            }
LAB_0368a390:
            func_0x0249fb90();
            *(undefined8 *)(puVar25 + -0x90) = 0x368a394;
            *(undefined **)(puVar25 + -0x80) = puVar73;
            *(long **)(puVar25 + -0x78) = plVar54;
            *(ulong *)(puVar25 + -0x70) = uVar61;
            *(ulong **)(puVar25 + -0x68) = puVar36;
            *(ulong **)(puVar25 + -0x60) = puVar51;
            *(ulong **)(puVar25 + -0x58) = puVar52;
            if ((bRam0000000005e2d77f & 1) == 0) {
              func_0x0249f8e4(&DAT_05a42438);
              func_0x0249f8e4(&DAT_059c6550);
              func_0x0249f8e4(&DAT_05a17a70);
              func_0x0249f8e4(&DAT_05a704b8);
              func_0x0249f8e4(&DAT_059f49e0);
              bRam0000000005e2d77f = 1;
            }
            puVar32 = (ulong *)func_0x0249fb80(_DAT_059f49e0);
            return puVar32;
          }
        }
      }
    }
  }
  auVar81 = func_0x0249fb90();
  lVar49 = auVar81._8_8_;
  lVar50 = auVar81._0_8_;
  *(code **)((long)plVar54 + -0x590) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0x588) = 0x33c1c8c;
  *(ulong **)((long)plVar54 + -0x580) = puVar32;
  *(ulong **)((long)plVar54 + -0x578) = puVar63;
  *(ulong **)((long)plVar54 + -0x570) = puVar64;
  *(undefined **)((long)plVar54 + -0x568) = puVar70;
  *(undefined **)((long)plVar54 + -0x560) = puVar74;
  *(ulong **)((long)plVar54 + -0x558) = puVar52;
  *(long *)((long)plVar54 + -0x550) = auVar84._0_8_;
  *(ulong **)((long)plVar54 + -0x548) = puVar36;
  *(long *)((long)plVar54 + -0x540) = auVar84._8_8_;
  *(long *)((long)plVar54 + -0x538) = lVar57;
  uVar61 = 0x5e2c000;
  plVar71 = (long *)((ulong)param_8 & 0xffffffff);
  puVar36 = (ulong *)((ulong)plVar53 & 0xffffffff);
  puVar32 = puVar37;
  puVar51 = puVar55;
  puVar46 = puVar65;
  puVar63 = puVar56;
  puVar52 = param_8;
  if ((bRam0000000005e2c3c9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_05a34898);
    bRam0000000005e2c3c9 = 1;
  }
  if ((puVar55 != (ulong *)0x0) && (lVar50 != 0)) {
    uVar61 = puVar55[0x44];
    puVar64 = (ulong *)puVar55[0x43];
    plVar53 = (long *)(ulong)((uint)param_8 & 1);
    puVar63 = (ulong *)0x0;
    puVar46 = puVar55;
    uVar59 = func_0x03780a5c(lVar50,puVar37,puVar65,puVar56);
    if ((uVar59 & 1) == 0) {
LAB_033c1e24:
      puVar32 = (ulong *)FUN_033bfe1c(puVar55,puVar56,lVar50,uVar61);
      return puVar32;
    }
    puVar65 = *(ulong **)(lVar50 + 0x30);
    uVar78 = func_0x03659ee0(puVar55,0);
    uVar28 = func_0x03788520(lVar50,lVar49,uVar78,0);
    *(undefined8 *)((long)plVar54 + -0x5a8) = 0;
    puVar32 = (ulong *)((long)plVar54 + -0x5a0);
    *(undefined4 *)((long)plVar54 + -0x594) = uVar28;
    *(undefined8 *)((long)plVar54 + -0x5a0) = extraout_x1;
    *(undefined8 *)((long)plVar54 + -0x5b0) = 0;
    puVar51 = _DAT_05a34898;
    func_0x02953678((undefined1 *)((long)plVar54 + -0x5b0),(undefined1 *)((long)plVar54 + -0x594));
    if (lVar49 != 0) {
      uVar59 = func_0x036d392c(lVar49,0);
      plVar71 = (long *)(uVar59 & 0xffffffff);
      uVar78 = func_0x03659ee0(puVar55,0);
      pcVar77 = (code *)func_0x036d62d4(lVar49,uVar78,0);
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059d89a0);
      }
      puVar32 = (ulong *)0x0;
      puVar51 = (ulong *)0x0;
      puVar46 = (ulong *)0x0;
      puVar38 = (ulong *)func_0x03627590(puVar65,pcVar77);
      if (puVar64 != (ulong *)0x0) {
        puVar32 = *(ulong **)((long)plVar54 + -0x5b0);
        puVar51 = *(ulong **)((long)plVar54 + -0x5a8);
        puVar63 = (ulong *)0x0;
        *(undefined8 *)((long)plVar54 + -0x5c0) = 0;
        puVar46 = puVar36;
        plVar53 = plVar71;
        func_0x03683960(puVar64,puVar55);
        puVar52 = puVar38;
        if (uVar61 != 0) {
          func_0x0387f2c8(uVar61,puVar65,lVar49,puVar37,0);
          goto LAB_033c1e24;
        }
      }
    }
  }
  auVar81 = func_0x0249fb90();
  lVar57 = auVar81._8_8_;
  plVar47 = auVar81._0_8_;
  *(undefined8 *)((long)plVar54 + -0x620) = 0x33c1e5c;
  *(long **)((long)plVar54 + -0x610) = plVar71;
  *(ulong **)((long)plVar54 + -0x608) = puVar65;
  *(ulong **)((long)plVar54 + -0x600) = puVar64;
  *(ulong *)((long)plVar54 + -0x5f8) = uVar61;
  *(ulong **)((long)plVar54 + -0x5f0) = puVar36;
  *(long *)((long)plVar54 + -0x5e8) = lVar49;
  *(ulong **)((long)plVar54 + -0x5e0) = puVar37;
  *(long *)((long)plVar54 + -0x5d8) = lVar50;
  *(ulong **)((long)plVar54 + -0x5d0) = puVar55;
  *(ulong **)((long)plVar54 + -0x5c8) = puVar56;
  plVar34 = plVar53;
  puVar64 = puVar63;
  if ((bRam0000000005e2c3ca & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a34898);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3ca = 1;
  }
  puVar37 = (ulong *)0x0;
  puVar33 = (undefined8 *)func_0x036f6778(puVar51,lVar57,plVar53,plVar47);
  puVar56 = (ulong *)0x0;
  puVar55 = puVar32;
  puVar36 = (ulong *)func_0x036f58fc(puVar51,plVar47);
  if (((ulong)puVar36 & 1) == 0) {
    return puVar36;
  }
  if (plVar47 != (long *)0x0) {
    lVar57 = *plVar47;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
          puVar39 = (undefined8 *)(lVar57 + (long)(*piVar62 + 4) * 0x10 + 0x138);
          goto LAB_033c1f80;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar39 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0220,4);
LAB_033c1f80:
    lVar57 = (*(code *)*puVar39)(plVar47,puVar39[1]);
    plVar71 = (long *)((long)puVar33 >> 0x20);
    puVar65 = (ulong *)&DAT_05a34898;
    puVar55 = (ulong *)((long)plVar54 + -0x628);
    *(undefined8 *)((long)plVar54 + -0x638) = 0;
    *(undefined8 *)((long)plVar54 + -0x630) = 0;
    *(int *)((long)plVar54 + -0x614) = (int)puVar33;
    *(long **)((long)plVar54 + -0x628) = plVar71;
    puVar56 = _DAT_05a34898;
    func_0x02953678((undefined1 *)((long)plVar54 + -0x638),(undefined1 *)((long)plVar54 + -0x614));
    if (lVar57 != 0) {
      puVar55 = *(ulong **)((long)plVar54 + -0x630);
      puVar56 = (ulong *)0x0;
      puVar36 = (ulong *)func_0x03684c6c(lVar57,*(undefined8 *)((long)plVar54 + -0x638));
      if (((ulong)puVar36 & 1) == 0) {
        return puVar36;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar61 = func_0x0364fbdc(plVar47,0);
      if (puVar32 != (ulong *)0x0) {
        puVar37 = (ulong *)(uVar61 & 0xffffffff);
        puVar64 = (ulong *)0x0;
        plVar34 = plVar47;
        puVar55 = (ulong *)func_0x03780be8(puVar32,puVar46,plVar53,puVar63);
        if (((ulong)puVar55 & 1) == 0) {
          return puVar55;
        }
        puVar55 = (ulong *)((long)plVar54 + -0x628);
        *(undefined8 *)((long)plVar54 + -0x638) = 0;
        *(undefined8 *)((long)plVar54 + -0x630) = 0;
        *(int *)((long)plVar54 + -0x614) = (int)puVar33;
        *(long **)((long)plVar54 + -0x628) = plVar71;
        puVar56 = _DAT_05a34898;
        func_0x02953678((undefined1 *)((long)plVar54 + -0x638),
                        (undefined1 *)((long)plVar54 + -0x614));
        if (puVar51 != (ulong *)0x0) {
          uVar28 = func_0x036d392c(puVar51,0);
          lVar50 = *plVar47;
          uVar59 = puVar32[6];
          uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                goto LAB_033c20b0;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_033c20b0:
          uVar78 = (*(code *)*puVar33)(plVar47,puVar33[1]);
          uVar78 = func_0x036d62d4(puVar51,uVar78,0);
          if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059d89a0);
          }
          uVar78 = func_0x03627590(uVar59,uVar78,0,0,0);
          *(undefined8 *)((long)plVar54 + -0x650) = _DAT_05a93bf8;
          *(undefined8 *)((long)plVar54 + -0x648) = 0;
          puVar32 = (ulong *)func_0x03685074(lVar57,plVar47,*(undefined8 *)((long)plVar54 + -0x638),
                                             *(undefined8 *)((long)plVar54 + -0x630),8,uVar28,0,
                                             uVar78);
          return puVar32;
        }
      }
    }
  }
  plVar48 = (long *)func_0x0249fb90();
  *(undefined8 *)((long)plVar54 + -0x690) = 0x33c2158;
  *(ulong **)((long)plVar54 + -0x688) = puVar46;
  *(long **)((long)plVar54 + -0x680) = plVar53;
  *(ulong **)((long)plVar54 + -0x678) = puVar63;
  *(long *)((long)plVar54 + -0x670) = lVar57;
  *(ulong **)((long)plVar54 + -0x668) = puVar32;
  *(ulong **)((long)plVar54 + -0x660) = puVar51;
  *(long **)((long)plVar54 + -0x658) = plVar47;
  puVar32 = puVar37;
  puVar51 = puVar64;
  if ((bRam0000000005e2c3cb & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3cb = 1;
  }
  puVar36 = (ulong *)0x0;
  puVar46 = puVar55;
  puVar63 = (ulong *)func_0x036f58fc(puVar56,plVar48);
  if (((ulong)puVar63 & 1) == 0) {
    return puVar63;
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar61 = func_0x0364fbdc(plVar48,0);
  if (puVar55 == (ulong *)0x0) {
    auVar81 = func_0x0249fb90();
    auVar12._8_8_ = 0x5e2c000;
    auVar12._0_8_ = puVar46;
    auVar11._8_8_ = 0x5e2c000;
    auVar11._0_8_ = puVar46;
    auVar10._8_8_ = 0x5e2c000;
    auVar10._0_8_ = puVar46;
    lVar49 = auVar81._8_8_;
    lVar50 = auVar81._0_8_;
    *(code **)((long)plVar54 + -0x6f0) = pcVar77;
    *(undefined8 *)((long)plVar54 + -0x6e8) = 0x33c2228;
    *(long **)((long)plVar54 + -0x6e0) = plVar71;
    *(ulong **)((long)plVar54 + -0x6d8) = puVar65;
    *(undefined8 **)((long)plVar54 + -0x6d0) = puVar33;
    *(undefined8 *)((long)plVar54 + -0x6c8) = 0x5e2c000;
    *(ulong **)((long)plVar54 + -0x6c0) = puVar56;
    *(undefined8 *)((long)plVar54 + -0x6b8) = 0;
    *(long **)((long)plVar54 + -0x6b0) = plVar48;
    *(ulong **)((long)plVar54 + -0x6a8) = puVar37;
    *(ulong **)((long)plVar54 + -0x6a0) = puVar64;
    *(ulong **)((long)plVar54 + -0x698) = puVar52;
    lVar57 = 0x5e2c000;
    pcVar68 = (code *)&DAT_059efcf8;
    puVar63 = puVar46;
    puVar64 = puVar36;
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
    *(undefined8 *)((long)plVar54 + -0x758) = 0;
    puVar73 = (undefined *)func_0x0249fb80(_DAT_059efcf8);
    func_0x0378ae54(puVar73,0);
    if ((lVar50 != 0) && (lVar40 = *(long *)(lVar50 + 0x220), auVar10 = auVar11, lVar40 != 0)) {
      *(undefined8 *)((long)plVar54 + -0x858) = *(undefined8 *)(lVar50 + 0x218);
      func_0x0387f3b8((undefined1 *)((long)plVar54 + -0x750),lVar40,0);
      auVar10 = auVar12;
      if (puVar73 != (undefined *)0x0) {
        lVar57 = *(long *)((long)plVar54 + -0x748);
        puVar64 = *(ulong **)((long)plVar54 + -0x740);
        puVar33 = (undefined8 *)(puVar73 + 0x10);
        *puVar33 = *(undefined8 *)((long)plVar54 + -0x750);
        puVar63 = (ulong *)func_0x0249f888(puVar33);
        if (lVar49 == 0) {
          return puVar63;
        }
        pcVar68 = (code *)&DAT_05a30640;
        uVar78 = *(undefined8 *)(lVar49 + 0x30);
        uVar35 = *puVar33;
        if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar63 = (ulong *)func_0x02903704(uVar78,uVar35,_DAT_05a30640);
        if (((ulong)puVar63 & 1) == 0) {
          return puVar63;
        }
        uVar61 = func_0x037885f4(lVar49,puVar64,0);
        puVar55 = puVar64;
        if ((uVar61 & 1) == 0) {
          puVar32 = (ulong *)0x0;
          uVar61 = func_0x037c7a80(*(undefined8 *)(lVar49 + 0x90),puVar64,lVar49,
                                   (undefined1 *)((long)plVar54 + -0x758));
          puVar55 = *(ulong **)((long)plVar54 + -0x758);
          if ((uVar61 & 1) == 0) {
            puVar55 = puVar64;
          }
        }
        auVar14._8_8_ = puVar55;
        auVar14._0_8_ = puVar46;
        auVar13._8_8_ = puVar55;
        auVar13._0_8_ = puVar46;
        auVar10._8_8_ = puVar55;
        plVar71 = (long *)func_0x03633aec(lVar50,0);
        pcVar77 = (code *)func_0x0249fb80(_DAT_059c6530);
        func_0x02a9aa34(pcVar77,puVar73,_DAT_05a69f48,0);
        puVar64 = _DAT_05a42428;
        func_0x026e5b0c(plVar71,pcVar77,(undefined1 *)((long)plVar54 + -0x750));
        puVar73 = *(undefined **)((long)plVar54 + -0x750);
        uVar61 = func_0x037885f4(lVar49,puVar55,0);
        if ((uVar61 & 1) == 0) {
          plVar71 = (long *)func_0x0376e450(lVar49,puVar55,0);
          puVar63 = (ulong *)func_0x03659ee0(lVar50,0);
          if (*(long *)((long)plVar54 + -0x858) != 0) {
            func_0x03687a50(*(long *)((long)plVar54 + -0x858),plVar71,puVar63,*puVar33,puVar73,0);
            func_0x037789bc(lVar49,lVar50,puVar55,puVar46,1,0);
            plVar34 = (long *)0x0;
            puVar51 = (ulong *)0x0;
            *(undefined8 *)((long)plVar54 + -0x870) = 0;
            *(undefined8 *)((long)plVar54 + -0x798) = 0;
            *(undefined8 *)((long)plVar54 + -0x7a0) = 0;
            *(undefined8 *)((long)plVar54 + -0x788) = 0;
            *(undefined8 *)((long)plVar54 + -0x790) = 0;
            *(undefined8 *)((long)plVar54 + -0x778) = 0;
            *(undefined8 *)((long)plVar54 + -0x780) = 0;
            *(undefined8 *)((long)plVar54 + -0x768) = 0;
            *(undefined8 *)((long)plVar54 + -0x770) = 0;
            *(undefined8 *)((long)plVar54 + -0x7a8) = 0;
            *(undefined8 *)((long)plVar54 + -0x7b0) = 0;
            puVar63 = puVar55;
            puVar64 = puVar55;
            puVar32 = puVar46;
            func_0x034ba874((undefined1 *)((long)plVar54 + -0x7b0),10);
            lVar40 = _DAT_059c9978;
            auVar10 = auVar13;
            if (puVar36 != (ulong *)0x0) {
              func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x800),
                              (undefined1 *)((long)plVar54 + -0x7b0),0x50);
              uVar59 = *puVar36;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == lVar40) {
                    puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                    goto LAB_033c253c;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(puVar36,lVar40,2);
LAB_033c253c:
              pcVar68 = (code *)*puVar33;
              func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x750),
                              (undefined1 *)((long)plVar54 + -0x800),0x50);
              (*pcVar68)(puVar36,(undefined1 *)((long)plVar54 + -0x750),puVar33[1]);
              goto LAB_033c2560;
            }
          }
        }
        else {
LAB_033c2560:
          puVar33 = (undefined8 *)func_0x0249fb80(_DAT_059de230);
          func_0x034a1470(puVar33,lVar50,0);
          func_0x03785f38(lVar49,puVar55,lVar57,puVar46,puVar33,lVar50,0);
          plVar34 = (long *)0x0;
          puVar51 = (ulong *)0x0;
          *(undefined8 *)((long)plVar54 + -0x870) = 0;
          *(undefined8 *)((long)plVar54 + -0x798) = 0;
          *(undefined8 *)((long)plVar54 + -0x7a0) = 0;
          *(undefined8 *)((long)plVar54 + -0x788) = 0;
          *(undefined8 *)((long)plVar54 + -0x790) = 0;
          *(undefined8 *)((long)plVar54 + -0x778) = 0;
          *(undefined8 *)((long)plVar54 + -0x780) = 0;
          *(undefined8 *)((long)plVar54 + -0x768) = 0;
          *(undefined8 *)((long)plVar54 + -0x770) = 0;
          *(undefined8 *)((long)plVar54 + -0x7a8) = 0;
          *(undefined8 *)((long)plVar54 + -0x7b0) = 0;
          puVar63 = puVar55;
          puVar64 = puVar55;
          func_0x034ba874((undefined1 *)((long)plVar54 + -0x7b0),9);
          lVar40 = _DAT_059c9978;
          puVar32 = puVar46;
          auVar10 = auVar14;
          if (puVar36 != (ulong *)0x0) {
            func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x850),
                            (undefined1 *)((long)plVar54 + -0x7b0),0x50);
            uVar59 = *puVar36;
            uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == lVar40) {
                  puVar39 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                  puVar32 = puVar46;
                  goto LAB_033c264c;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(puVar36,lVar40,2);
            puVar32 = puVar46;
LAB_033c264c:
            auVar10._0_8_ = puVar39;
            pcVar68 = (code *)*puVar39;
            func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x750),
                            (undefined1 *)((long)plVar54 + -0x850),0x50);
            (*pcVar68)(puVar36,(undefined1 *)((long)plVar54 + -0x750),puVar39[1]);
            puVar63 = (ulong *)func_0x03659ee0(lVar50,0);
            puVar64 = (ulong *)0x0;
            auVar81 = func_0x03788520(lVar49,lVar57);
            if (lVar57 != 0) {
              uVar61 = func_0x036d392c(lVar57,0);
              puVar36 = (ulong *)(uVar61 & 0xffffffff);
              uVar78 = func_0x03659ee0(lVar50,0);
              lVar57 = func_0x036d62d4(lVar57,uVar78,0);
              *(undefined8 *)((long)plVar54 + -0x750) = 0;
              *(undefined8 *)((long)plVar54 + -0x748) = 0;
              *(int *)((long)plVar54 + -0x6f4) = auVar81._0_4_;
              *(long *)((long)plVar54 + -0x700) = auVar81._8_8_;
              func_0x02953678((undefined1 *)((long)plVar54 + -0x750),
                              (undefined1 *)((long)plVar54 + -0x6f4),
                              (undefined1 *)((long)plVar54 + -0x700),_DAT_05a34898);
              lVar49 = *(long *)(lVar49 + 0x30);
              if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              puVar63 = (ulong *)0x0;
              puVar64 = (ulong *)0x0;
              puVar32 = (ulong *)0x0;
              uVar78 = func_0x03627590(lVar49,lVar57);
              auVar10 = auVar81;
              if (*(long *)((long)plVar54 + -0x858) != 0) {
                *(undefined8 *)((long)plVar54 + -0x870) = _DAT_05a93bf8;
                *(undefined8 *)((long)plVar54 + -0x868) = 0;
                puVar32 = (ulong *)func_0x03685074(*(long *)((long)plVar54 + -0x858),lVar50,
                                                   *(undefined8 *)((long)plVar54 + -0x750),
                                                   *(undefined8 *)((long)plVar54 + -0x748),0xb,
                                                   puVar36,0,uVar78);
                return puVar32;
              }
            }
          }
        }
      }
    }
    auVar81 = func_0x0249fb90();
    *(undefined8 *)((long)plVar54 + -0x8b0) = 0x33c2780;
    *(long *)((long)plVar54 + -0x8a8) = auVar10._8_8_;
    *(long *)((long)plVar54 + -0x8a0) = auVar10._0_8_;
    *(long *)((long)plVar54 + -0x898) = lVar57;
    *(ulong **)((long)plVar54 + -0x890) = puVar36;
    *(code **)((long)plVar54 + -0x888) = pcVar68;
    *(long *)((long)plVar54 + -0x880) = lVar49;
    *(long *)((long)plVar54 + -0x878) = lVar50;
    if ((bRam0000000005e2c3cd & 1) == 0) {
      func_0x0249f8e4(&DAT_05a43c28);
      func_0x0249f8e4(&DAT_059d7400);
      bRam0000000005e2c3cd = 1;
    }
    puVar46 = (ulong *)func_0x0249fa68(puVar64,_DAT_059d7400);
    if (puVar46 == (ulong *)0x0) {
      puVar46 = (ulong *)func_0x026ebbf4(puVar64,_DAT_05a43c28);
    }
    *(code **)((long)plVar54 + -0x910) = pcVar77;
    *(undefined8 *)((long)plVar54 + -0x908) = 0x33c281c;
    *(long **)((long)plVar54 + -0x900) = plVar71;
    *(undefined **)((long)plVar54 + -0x8f8) = puVar73;
    *(undefined8 **)((long)plVar54 + -0x8f0) = puVar33;
    *(undefined **)((long)plVar54 + -0x8e8) = &DAT_059d7400;
    *(ulong **)((long)plVar54 + -0x8e0) = puVar64;
    *(ulong **)((long)plVar54 + -0x8d8) = puVar46;
    *(undefined1 (*) [16])((long)plVar54 + -0x8d0) = auVar81;
    *(ulong **)((long)plVar54 + -0x8c0) = puVar63;
    *(ulong **)((long)plVar54 + -0x8b8) = puVar32;
    puVar55 = puVar63;
    puVar52 = puVar46;
    puVar64 = puVar32;
    if ((bRam0000000005e2c3ce & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_05a29a88);
      func_0x0249f8e4(&DAT_059d4060);
      bRam0000000005e2c3ce = 1;
    }
    *(undefined8 *)((long)plVar54 + -0x920) = 0;
    *(undefined8 *)((long)plVar54 + -0x918) = 0;
    puVar56 = (ulong *)0x5e2c000;
    puVar65 = (ulong *)&DAT_059d7400;
    if (auVar81._8_8_ == 0) {
LAB_033c2a80:
      puVar36 = puVar56;
      puVar37 = puVar52;
      func_0x0249fb90();
    }
    else {
      puVar55 = (ulong *)0x0;
      puVar36 = (ulong *)func_0x0376e450(auVar81._8_8_,puVar63);
      if (puVar36 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      if (puVar46 == (ulong *)0x0) goto LAB_033c2a80;
      uVar29 = (uint)puVar46[3];
      bVar1 = 0 < (int)uVar29;
      if ((int)uVar29 < 1) {
        return (ulong *)0x0;
      }
      plVar71 = (long *)&DAT_059d4060;
      pcVar77 = (code *)&DAT_05a29a88;
      puVar73 = (undefined *)0x0;
      while( true ) {
        puVar33 = (undefined8 *)(ulong)bVar1;
        uVar76 = (uint)puVar73;
        puVar37 = puVar52;
        if (uVar29 <= uVar76) break;
        puVar37 = (ulong *)puVar46[(long)(int)uVar76 + 4];
        puVar56 = puVar36;
        puVar65 = puVar37;
        if (puVar37 == (ulong *)0x0) goto LAB_033c2a80;
        uVar59 = *puVar37;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
              puVar39 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0x28) * 0x10 + 0x138);
              goto LAB_033c29c0;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar39 = (undefined8 *)func_0x024d927c(puVar37,_DAT_059defe8,0x28);
LAB_033c29c0:
        puVar64 = (ulong *)puVar39[1];
        puVar55 = puVar36;
        puVar52 = puVar32;
        auVar94 = (*(code *)*puVar39)(puVar37,auVar81._0_8_);
        *(undefined1 (*) [16])((long)plVar54 + -0x920) = auVar94;
        if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar57 = *(long *)(_DAT_05a29a88 + 0x20);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        pcVar43 = (char *)func_0x0249f90c((undefined1 *)((long)plVar54 + -0x920),
                                          *(long *)(**(long **)(lVar57 + 0xc0) + 0x80) + 0x20);
        if (*pcVar43 != '\0') {
          uVar78 = 0x33c2a40;
          puVar55 = puVar63;
          puVar64 = puVar32;
          auVar94 = auVar81;
          goto SUB_033c2a88;
        }
        uVar29 = (uint)puVar46[3];
        uVar76 = uVar76 + 1;
        puVar73 = (undefined *)(ulong)uVar76;
        bVar1 = (int)uVar76 < (int)uVar29;
        if ((int)uVar29 <= (int)uVar76) {
          return (ulong *)0x0;
        }
      }
    }
    uVar78 = 0x33c2a88;
    auVar94 = func_0x0249fb98();
SUB_033c2a88:
    plVar53 = auVar94._8_8_;
    puVar52 = auVar94._0_8_;
    *(undefined8 *)((long)plVar54 + -0x960) = uVar78;
    *(ulong **)((long)plVar54 + -0x958) = puVar65;
    *(ulong **)((long)plVar54 + -0x950) = puVar36;
    *(undefined1 (*) [16])((long)plVar54 + -0x948) = auVar81;
    *(ulong **)((long)plVar54 + -0x938) = puVar63;
    *(ulong **)((long)plVar54 + -0x930) = puVar46;
    *(ulong **)((long)plVar54 + -0x928) = puVar32;
    puVar70 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d0 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a3c7c0);
      func_0x0249f8e4(&DAT_059defe8);
      bRam0000000005e2c3d0 = 1;
    }
    *(undefined1 *)((long)plVar54 + -0x964) = 0;
    puVar56 = (ulong *)func_0x026bf824(puVar37,_DAT_05a3c7c0);
    *(undefined8 *)((long)plVar54 + -0x9c0) = 0x33c2b0c;
    *(undefined8 **)((long)plVar54 + -0x9b0) = puVar33;
    *(undefined8 *)((long)plVar54 + -0x9a8) = 0x5e2c000;
    *(undefined **)((long)plVar54 + -0x9a0) = &DAT_05a3c7c0;
    *(ulong **)((long)plVar54 + -0x998) = puVar37;
    *(undefined1 (*) [16])((long)plVar54 + -0x990) = auVar94;
    *(ulong **)((long)plVar54 + -0x980) = puVar55;
    *(ulong **)((long)plVar54 + -0x978) = puVar64;
    puVar74 = (undefined *)0x5e2c000;
    puVar46 = puVar55;
    puVar32 = puVar56;
    puVar63 = puVar64;
    if ((bRam0000000005e2c3cf & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca768);
      func_0x0249f8e4(&DAT_059cbac8);
      func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e2c3cf = 1;
    }
    *(undefined8 *)((long)plVar54 + -0x9b8) = 0;
    if (plVar53 != (long *)0x0) {
      puVar46 = (ulong *)0x0;
      puVar65 = (ulong *)func_0x0376e450(plVar53,puVar55);
      if (puVar65 == (ulong *)0x0) {
        puVar56 = (ulong *)0x0;
        goto LAB_033c2f48;
      }
      if (puVar56 != (ulong *)0x0) {
        uVar59 = *puVar56;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059ca768) {
              puVar39 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_033c2ce4;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0x0;
        puVar39 = (undefined8 *)func_0x024d927c(puVar56);
LAB_033c2ce4:
        plVar47 = (long *)(*(code *)*puVar39)(puVar56,puVar39[1]);
        *(long **)((long)plVar54 + -0x9b8) = plVar47;
        *(undefined8 *)((long)plVar54 + -0x9d0) = 0;
        *(undefined1 **)((long)plVar54 + -0x9c8) = (undefined1 *)((long)plVar54 + -0x9b8);
        if (plVar47 != (long *)0x0) {
          puVar74 = &DAT_059df6e0;
          puVar70 = &DAT_059cbac8;
          puVar33 = (undefined8 *)&DAT_059defe8;
          do {
            lVar57 = *plVar47;
            uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
                  puVar39 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c2d68;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar46 = (ulong *)0x0;
            puVar39 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c2d68:
            uVar61 = (*(code *)*puVar39)(plVar47,puVar39[1]);
            puVar56 = (ulong *)(uVar61 & 0xffffffff);
            if ((uVar61 & 1) == 0) goto LAB_033c2ed0;
            plVar53 = *(long **)((long)plVar54 + -0x9b8);
            if (plVar53 == (long *)0x0) {
              func_0x0249fb90();
              plVar53 = (long *)0x0;
LAB_033c2f74:
              func_0x0249fb90();
              puVar55 = puVar65;
              goto LAB_033c2f78;
            }
            lVar57 = *plVar53;
            uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059cbac8) {
                  puVar39 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c2dd0;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar39 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059cbac8,0);
LAB_033c2dd0:
            plVar53 = (long *)(*(code *)*puVar39)(plVar53,puVar39[1]);
            puVar32 = (ulong *)0x0;
            puVar46 = puVar64;
            uVar61 = func_0x036d05a4(puVar65,puVar52);
            if ((uVar61 & 1) != 0) {
              if (plVar53 == (long *)0x0) goto LAB_033c2f74;
              lVar57 = *plVar53;
              uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
                    puVar39 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x27) * 0x10 + 0x138);
                    goto LAB_033c2e4c;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar39 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059defe8,0x27);
LAB_033c2e4c:
              puVar32 = (ulong *)puVar39[1];
              puVar46 = puVar52;
              uVar61 = (*(code *)*puVar39)(plVar53,puVar65);
              if ((uVar61 & 1) != 0) {
                lVar57 = *plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
                      puVar39 = (undefined8 *)(lVar57 + (long)(*piVar62 + 3) * 0x10 + 0x138);
                      goto LAB_033c2eb4;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar46 = (ulong *)0x3;
                puVar39 = (undefined8 *)func_0x024d927c(plVar53);
LAB_033c2eb4:
                uVar61 = (*(code *)*puVar39)(plVar53,puVar39[1]);
                if ((uVar61 & 1) == 0) goto LAB_033c2ed8;
              }
            }
            plVar47 = *(long **)((long)plVar54 + -0x9b8);
          } while (plVar47 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c2ed0:
        puVar56 = (ulong *)0x0;
LAB_033c2ed8:
        puVar64 = (ulong *)0x0;
        puVar39 = (undefined8 *)((long)plVar54 + -0x9b8);
        goto LAB_033c2edc;
      }
    }
LAB_033c2f78:
    func_0x0249fb90();
    puVar65 = puVar55;
    do {
      auVar15._8_8_ = puVar56;
      auVar15._0_8_ = puVar65;
      auVar80 = func_0x0249fb88(puVar64);
      puVar64 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) {
        func_0x022bd79c((undefined1 *)((long)plVar54 + -0x9d0));
        func_0x0258f7ac(puVar64);
        auVar81 = func_0x022bd790();
        lVar57 = auVar81._8_8_;
        uVar78 = auVar81._0_8_;
        *(undefined8 *)((long)plVar54 + -0xa10) = 0x33c2fe4;
        *(undefined **)((long)plVar54 + -0xa00) = puVar74;
        *(long **)((long)plVar54 + -0x9f8) = plVar53;
        *(ulong **)((long)plVar54 + -0x9f0) = puVar56;
        *(ulong **)((long)plVar54 + -0x9e8) = puVar65;
        *(ulong **)((long)plVar54 + -0x9e0) = puVar52;
        *(ulong **)((long)plVar54 + -0x9d8) = puVar64;
        *(undefined1 *)((long)plVar54 + -0xa04) = 0;
        puVar55 = puVar46;
        puVar56 = puVar32;
        puVar65 = puVar63;
        if (lVar57 != 0) {
          puVar74 = (undefined *)func_0x0376e450(lVar57,puVar46,0);
          if (puVar74 == (undefined *)0x0) {
            return (ulong *)0x0;
          }
          puVar56 = (ulong *)0x0;
          puVar55 = puVar63;
          uVar61 = func_0x036d05a4(puVar74,uVar78);
          if ((uVar61 & 1) == 0) {
            return (ulong *)0x0;
          }
          plVar53 = (long *)0x0;
          puVar64 = puVar63;
          puVar52 = puVar46;
          auVar15 = auVar81;
          if (puVar32 != (ulong *)0x0) {
            uVar61 = func_0x0362cd70(puVar32,0);
            if ((uVar61 & 1) != 0) {
              return (ulong *)0x0;
            }
            func_0x0362d1c8(puVar32,uVar78,puVar74,puVar63,(undefined1 *)((long)plVar54 + -0xa04),0)
            ;
            func_0x037789bc(lVar57,uVar78,puVar46,puVar63,0,0);
            return (ulong *)0x1;
          }
        }
        auVar81 = func_0x0249fb90();
        plVar47 = auVar81._0_8_;
        *(undefined8 *)((long)plVar54 + -0xa40) = 0x33c30ac;
        *(long *)((long)plVar54 + -0xa30) = auVar15._8_8_;
        *(long *)((long)plVar54 + -0xa28) = auVar15._0_8_;
        *(ulong **)((long)plVar54 + -0xa20) = puVar52;
        *(ulong **)((long)plVar54 + -0xa18) = puVar64;
        uVar61 = auVar81._8_8_ & 0xffffffff;
        puVar32 = puVar55;
        if ((bRam0000000005e2c3d1 & 1) == 0) {
          func_0x0249f8e4(&DAT_059db250);
          func_0x0249f8e4(&DAT_059defe8);
          bRam0000000005e2c3d1 = 1;
        }
        *(undefined8 *)((long)plVar54 + -0xa38) = 0;
        if (plVar47 != (long *)0x0) {
          lVar57 = *plVar47;
          uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar59 == 0) goto LAB_033c3130;
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          goto LAB_033c3118;
        }
        auVar81 = func_0x0249fb90();
        plVar47 = auVar81._8_8_;
        lVar57 = auVar81._0_8_;
        *(code **)((long)plVar54 + -0xaa0) = pcVar77;
        *(undefined8 *)((long)plVar54 + -0xa98) = 0x33c31c0;
        *(long **)((long)plVar54 + -0xa90) = plVar71;
        *(undefined **)((long)plVar54 + -0xa88) = puVar73;
        *(undefined8 **)((long)plVar54 + -0xa80) = puVar33;
        *(undefined **)((long)plVar54 + -0xa78) = puVar70;
        *(undefined **)((long)plVar54 + -0xa70) = puVar74;
        *(long **)((long)plVar54 + -0xa68) = plVar53;
        *(undefined8 *)((long)plVar54 + -0xa60) = 0x5e2c000;
        *(undefined8 *)((long)plVar54 + -0xa58) = 0;
        *(ulong *)((long)plVar54 + -0xa50) = uVar61;
        *(ulong **)((long)plVar54 + -0xa48) = puVar55;
        uVar61 = (ulong)puVar51 & 0xffffffff;
        uVar59 = (ulong)puVar32 & 0xffffffff;
        auVar85._8_8_ = 0x5e2c000;
        auVar85._0_8_ = uVar59;
        puVar46 = puVar56;
        puVar63 = puVar65;
        plVar53 = plVar34;
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
        *(undefined8 *)((long)plVar54 + -0xaa8) = 0;
        if (plVar47 == (long *)0x0) goto LAB_033c36d4;
        lVar50 = *plVar47;
        puVar73 = &DAT_059defe8;
        uVar60 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar60 == 0) goto LAB_033c32b8;
        piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
        goto LAB_033c32a0;
      }
      puVar39 = (undefined8 *)func_0x054ed080(puVar64);
      puVar64 = (ulong *)*puVar39;
      *(ulong **)((long)plVar54 + -0x9d0) = puVar64;
      func_0x054ed090();
      puVar39 = *(undefined8 **)((long)plVar54 + -0x9c8);
      puVar56 = (ulong *)0x0;
LAB_033c2edc:
      puVar52 = (ulong *)*puVar39;
      if (puVar52 != (ulong *)0x0) {
        uVar59 = *puVar52;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df598) {
              puVar39 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_033c2f38;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0x0;
        puVar39 = (undefined8 *)func_0x024d927c(puVar52);
LAB_033c2f38:
        (*(code *)*puVar39)(puVar52,puVar39[1]);
      }
    } while (puVar64 != (ulong *)0x0);
LAB_033c2f48:
    return (ulong *)(ulong)((uint)puVar56 & 1);
  }
  puVar56 = (ulong *)(uVar61 & 0xffffffff);
  puVar32 = *(ulong **)((long)plVar54 + -0x680);
  *(code **)((long)plVar54 + -0x6a0) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0x698) = *(undefined8 *)((long)plVar54 + -0x690);
  *(undefined8 **)((long)plVar54 + -0x690) = puVar33;
  *(undefined8 *)((long)plVar54 + -0x688) = *(undefined8 *)((long)plVar54 + -0x688);
  *(ulong **)((long)plVar54 + -0x680) = puVar32;
  *(undefined8 *)((long)plVar54 + -0x678) = *(undefined8 *)((long)plVar54 + -0x678);
  *(undefined8 *)((long)plVar54 + -0x670) = *(undefined8 *)((long)plVar54 + -0x670);
  *(undefined8 *)((long)plVar54 + -0x668) = *(undefined8 *)((long)plVar54 + -0x668);
  *(undefined8 *)((long)plVar54 + -0x660) = *(undefined8 *)((long)plVar54 + -0x660);
  *(undefined8 *)((long)plVar54 + -0x658) = *(undefined8 *)((long)plVar54 + -0x658);
  puVar51 = puVar64;
  puVar46 = puVar52;
  puVar63 = puVar56;
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
  *(undefined8 *)((long)plVar54 + -0x700) = 0;
  *(undefined8 *)((long)plVar54 + -0x6f8) = 0;
  *(undefined8 *)((long)plVar54 + -0x710) = 0;
  *(undefined8 *)((long)plVar54 + -0x708) = 0;
  *(undefined8 *)((long)plVar54 + -0x720) = 0;
  *(undefined8 *)((long)plVar54 + -0x718) = 0;
  *(undefined8 *)((long)plVar54 + -0x730) = 0;
  *(undefined8 *)((long)plVar54 + -0x728) = 0;
  *(undefined8 *)((long)plVar54 + -0x738) = 0;
  lVar50 = func_0x0376e450(puVar55,puVar37);
  lVar57 = 0x5e2d000;
  if (plVar48 != (long *)0x0) {
    lVar57 = *plVar48;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xc) * 0x10 + 0x138);
          goto LAB_0378149c;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0220,0xc);
LAB_0378149c:
    puVar32 = (ulong *)(*(code *)*puVar33)(plVar48,puVar33[1]);
    if ((lVar50 == 0) || (uVar61 = func_0x036f58fc(lVar50,plVar48,puVar55,0), (uVar61 & 1) == 0)) {
      return (ulong *)0x0;
    }
    lVar57 = *plVar48;
    puVar55 = (ulong *)&DAT_059df8e8;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03781528;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_03781528:
    uVar78 = (*(code *)*puVar33)(plVar48,puVar33[1]);
    uVar61 = func_0x036edd98(lVar50,uVar78,0);
    if (((uVar61 & 1) == 0) || (uVar61 = func_0x036ee320(lVar50,plVar48,0), (uVar61 & 1) != 0)) {
LAB_037815f0:
      lVar57 = *plVar48;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_03781640;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_03781640:
      uVar78 = (*(code *)*puVar33)(plVar48,puVar33[1]);
      uVar61 = func_0x036edd98(lVar50,uVar78,0);
      if (((uVar61 & 1) == 0) || (uVar61 = func_0x036ee320(lVar50,plVar48,0), (uVar61 & 1) != 0)) {
        lVar57 = *plVar48;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
              goto LAB_03781750;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_03781750:
        uVar78 = (*(code *)*puVar33)(plVar48,puVar33[1]);
        uVar61 = func_0x036f619c(lVar50,uVar78,0);
        if ((uVar61 & 1) != 0) {
          lVar57 = *plVar48;
          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                goto LAB_037817c0;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_037817c0:
          uVar78 = (*(code *)*puVar33)(plVar48,puVar33[1]);
          uVar61 = func_0x036f66a8(lVar50,uVar78,0);
          if ((uVar61 & 1) == 0) {
            auVar81 = func_0x036f56f8(lVar50,puVar32,0);
            *(undefined1 (*) [16])((long)plVar54 + -0x738) = auVar81;
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            lVar57 = *(long *)(_DAT_05a29c90 + 0x20);
            if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
              lVar57 = func_0x024d8f40();
            }
            pcVar43 = (char *)func_0x0249f90c((undefined1 *)((long)plVar54 + -0x738),
                                              *(long *)(**(long **)(lVar57 + 0xc0) + 0x80) + 0x20);
            if (*pcVar43 != '\0') {
              if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar78 = func_0x0352ece0(puVar64,0);
              goto LAB_03781874;
            }
          }
        }
      }
      else {
        auVar81 = func_0x036f52d8(lVar50,puVar32,0);
        *(undefined1 (*) [16])((long)plVar54 + -0x728) = auVar81;
        lVar57 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        pcVar43 = (char *)func_0x0249f90c((undefined1 *)((long)plVar54 + -0x728),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar57 + 0xc0) + 8) + 0x80));
        if (*pcVar43 != '\0') {
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar78 = func_0x0352ece0(puVar64,0);
LAB_03781728:
          func_0x037812b8(plVar48,lVar50,uVar78,puVar56);
        }
      }
    }
    else {
      lVar57 = *plVar48;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_037815ac;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059df8e8,5);
LAB_037815ac:
      uVar78 = (*(code *)*puVar33)(plVar48,puVar33[1]);
      uVar61 = func_0x036f619c(lVar50,uVar78,0);
      if ((uVar61 & 1) == 0) goto LAB_037815f0;
      uVar78 = func_0x022bffa8(5,_DAT_059df8e8,plVar48);
      uVar61 = func_0x036f66a8(lVar50,uVar78,0);
      if ((uVar61 & 1) != 0) goto LAB_037815f0;
      auVar81 = func_0x036f52d8(lVar50,puVar32,0);
      *(undefined1 (*) [16])((long)plVar54 + -0x700) = auVar81;
      auVar81 = func_0x036f56f8(lVar50,puVar32,0);
      *(undefined1 (*) [16])((long)plVar54 + -0x718) = auVar81;
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar61 = func_0x0288eda8((undefined1 *)((long)plVar54 + -0x718),
                               (undefined1 *)((long)plVar54 + -0x708),_DAT_05a29c88);
      puVar64 = (ulong *)(uVar61 & 0xffffffff);
      uVar59 = func_0x022bf4f8((undefined1 *)((long)plVar54 + -0x700),_DAT_05a27ee0);
      if ((uVar59 & 1) != 0) {
        if ((uVar61 & 1) != 0) {
          func_0x02886844((undefined1 *)((long)plVar54 + -0x700),
                          (undefined1 *)((long)plVar54 + -0x6f0),_DAT_05a27ee8);
          uVar78 = *(undefined8 *)((long)plVar54 + -0x6f0);
          puVar55 = *(ulong **)((long)plVar54 + -0x708);
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar61 = func_0x042542f4(uVar78,puVar55,0);
          if ((uVar61 & 1) == 0) goto LAB_03781ab4;
        }
        func_0x02886844((undefined1 *)((long)plVar54 + -0x700),
                        (undefined1 *)((long)plVar54 + -0x6f0),_DAT_05a27ee8);
        uVar78 = *(undefined8 *)((long)plVar54 + -0x6f0);
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar64 = (ulong *)func_0x0425449c(uVar78,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar78 = func_0x0352ed34(puVar64,0);
        goto LAB_03781728;
      }
      if ((uVar61 & 1) != 0) {
LAB_03781ab4:
        uVar78 = *(undefined8 *)((long)plVar54 + -0x708);
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar64 = (ulong *)func_0x0425449c(uVar78,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar78 = func_0x0352ed34(puVar64,0);
LAB_03781874:
        func_0x0378130c(plVar48,lVar50,uVar78,puVar56);
      }
    }
    *(undefined8 *)((long)plVar54 + -0x7f0) = 0;
    *(undefined8 *)((long)plVar54 + -0x778) = 0;
    *(undefined8 *)((long)plVar54 + -0x780) = 0;
    *(undefined8 *)((long)plVar54 + -0x768) = 0;
    *(undefined8 *)((long)plVar54 + -0x770) = 0;
    *(undefined8 *)((long)plVar54 + -0x758) = 0;
    *(undefined8 *)((long)plVar54 + -0x760) = 0;
    *(undefined8 *)((long)plVar54 + -0x748) = 0;
    *(undefined8 *)((long)plVar54 + -0x750) = 0;
    *(undefined8 *)((long)plVar54 + -0x788) = 0;
    *(undefined8 *)((long)plVar54 + -0x790) = 0;
    puVar51 = puVar37;
    puVar46 = puVar37;
    puVar63 = puVar32;
    func_0x034ba874((undefined1 *)((long)plVar54 + -0x790),0x11);
    lVar49 = _DAT_059c9978;
    lVar57 = lVar50;
    if (puVar52 != (ulong *)0x0) {
      func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x7e0),(undefined1 *)((long)plVar54 + -0x790),
                      0x50);
      uVar59 = *puVar52;
      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == lVar49) {
            puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
            goto LAB_03781934;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(puVar52,lVar49,2);
LAB_03781934:
      pcVar77 = (code *)*puVar33;
      func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x6f0),(undefined1 *)((long)plVar54 + -0x7e0),
                      0x50);
      (*pcVar77)(puVar52,(undefined1 *)((long)plVar54 + -0x6f0),puVar33[1]);
      return (ulong *)0x1;
    }
  }
  auVar91 = func_0x0249fb90();
  lVar50 = auVar91._8_8_;
  *(undefined8 *)((long)plVar54 + -0x850) = 0x3781b10;
  *(long **)((long)plVar54 + -0x840) = plVar71;
  *(ulong **)((long)plVar54 + -0x838) = puVar65;
  *(ulong **)((long)plVar54 + -0x830) = puVar55;
  *(ulong **)((long)plVar54 + -0x828) = puVar64;
  *(ulong **)((long)plVar54 + -0x820) = puVar32;
  *(long *)((long)plVar54 + -0x818) = lVar57;
  *(long **)((long)plVar54 + -0x810) = plVar48;
  *(ulong **)((long)plVar54 + -0x808) = puVar56;
  *(ulong **)((long)plVar54 + -0x800) = puVar37;
  *(ulong **)((long)plVar54 + -0x7f8) = puVar52;
  puVar52 = (ulong *)((ulong)puVar63 & 0xffffffff);
  pcVar68 = (code *)&DAT_059efeb0;
  puVar32 = puVar51;
  puVar64 = puVar46;
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
  *(undefined8 *)((long)plVar54 + -0x848) = 0;
  pcVar44 = (code *)func_0x0249fb80(_DAT_059efeb0);
  func_0x037c51f0(pcVar44,0);
  puVar56 = puVar51;
  if (pcVar44 == (code *)0x0) {
LAB_03781e4c:
    func_0x0249fb90();
    puVar37 = puVar52;
    while( true ) {
      puVar52 = puVar63;
      puVar51 = puVar32;
      auVar80 = func_0x0249fb88(puVar37);
      puVar32 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) break;
      puVar33 = (undefined8 *)func_0x054ed080(puVar32);
      puVar37 = (ulong *)*puVar33;
      *(ulong **)((long)plVar54 + -0x860) = puVar37;
      puVar36 = (ulong *)func_0x054ed090();
      puVar33 = *(undefined8 **)((long)plVar54 + -0x858);
      puVar32 = puVar51;
      puVar63 = puVar52;
LAB_03781dc0:
      puVar56 = (ulong *)*puVar33;
      if (puVar56 != (ulong *)0x0) {
        uVar59 = *puVar56;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == *auVar91._0_8_) {
              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_03781e14;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar32 = (ulong *)0x0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar56);
LAB_03781e14:
        puVar36 = (ulong *)(*(code *)*puVar33)(puVar56,puVar33[1]);
      }
      if (puVar37 == (ulong *)0x0) {
        return puVar36;
      }
    }
    func_0x022bd79c((undefined1 *)((long)plVar54 + -0x860));
    func_0x0258f7ac(puVar32);
    uVar78 = 0x3781ea8;
    func_0x022bd790();
    plVar53 = extraout_x1_01;
  }
  else {
    puVar55 = (ulong *)&DAT_059c59a8;
    puVar65 = (ulong *)&DAT_05a6a1d8;
    plVar71 = (long *)&DAT_05a44708;
    pcVar68 = pcVar44 + 0x10;
    *(long *)pcVar68 = lVar50;
    func_0x0249f888(pcVar68,lVar50);
    *(ulong **)(pcVar44 + 0x18) = puVar46;
    func_0x0249f888(pcVar44 + 0x18,puVar46);
    puVar46 = (ulong *)func_0x0376e0dc(auVar91._0_8_);
    uVar78 = func_0x0249fb80(_DAT_059c59a8);
    auVar91._8_8_ = lVar50;
    auVar91._0_8_ = uVar78;
    puVar64 = (ulong *)0x0;
    func_0x02a9aa34(uVar78,pcVar44,_DAT_05a6a1d8);
    puVar32 = _DAT_05a44708;
    plVar53 = (long *)func_0x026ec554(puVar46,uVar78);
    if (plVar53 == (long *)0x0) goto LAB_03781e4c;
    lVar57 = *plVar53;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059c9f90) {
          puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_03781cac;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar32 = (ulong *)0x0;
    puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_03781cac:
    pcVar44 = (code *)&DAT_059cb2d8;
    auVar24._8_8_ = &DAT_059df6e0;
    auVar24._0_8_ = &DAT_059df598;
    auVar18._8_8_ = &DAT_059df6e0;
    auVar18._0_8_ = &DAT_059df598;
    auVar91._8_8_ = &DAT_059df6e0;
    auVar91._0_8_ = &DAT_059df598;
    uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    *(undefined8 *)((long)plVar54 + -0x848) = uVar78;
    *(undefined8 *)((long)plVar54 + -0x860) = 0;
    *(undefined1 **)((long)plVar54 + -0x858) = (undefined1 *)((long)plVar54 + -0x848);
    puVar46 = *(ulong **)((long)plVar54 + -0x848);
    if (puVar46 == (ulong *)0x0) {
      func_0x0249fb90();
LAB_03781e48:
      func_0x0249fb90();
      goto LAB_03781e4c;
    }
    uVar59 = *puVar46;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
          puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_03781d30;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar32 = (ulong *)0x0;
    puVar33 = (undefined8 *)func_0x024d927c(puVar46);
LAB_03781d30:
    puVar36 = (ulong *)(*(code *)*puVar33)(puVar46,puVar33[1]);
    if (((ulong)puVar36 & 1) == 0) {
      puVar37 = (ulong *)0x0;
      puVar33 = (undefined8 *)((long)plVar54 + -0x848);
      auVar91 = auVar24;
      goto LAB_03781dc0;
    }
    puVar46 = *(ulong **)((long)plVar54 + -0x848);
    if (puVar46 == (ulong *)0x0) goto LAB_03781e48;
    uVar59 = *puVar46;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059cb2d8) {
          puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_03781d94;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*puVar33)(puVar46,puVar33[1]);
    plVar53 = *(long **)pcVar68;
    uVar78 = 0x3781db4;
    puVar64 = extraout_x1_00;
    puVar32 = puVar52;
    auVar91 = auVar18;
  }
  puVar73 = auVar91._8_8_;
  *(undefined8 *)((long)plVar54 + -0x890) = uVar78;
  *(long *)((long)plVar54 + -0x888) = auVar91._0_8_;
  *(ulong **)((long)plVar54 + -0x880) = puVar46;
  *(code **)((long)plVar54 + -0x878) = pcVar68;
  *(ulong **)((long)plVar54 + -0x870) = puVar56;
  *(ulong **)((long)plVar54 + -0x868) = puVar32;
  puVar63 = (ulong *)0x5e2d000;
  uVar61 = (ulong)puVar52 & 0xffffffff;
  puVar46 = puVar51;
  puVar32 = puVar64;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  if (plVar53 != (long *)0x0) {
    lVar57 = *plVar53;
    uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03781f64;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar46 = (ulong *)0x5;
    puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_03781f64:
    uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    if (puVar64 != (ulong *)0x0) {
      puVar46 = (ulong *)0x0;
      puVar56 = (ulong *)func_0x036d3908(puVar64,uVar78);
      if (puVar56 != (ulong *)0x0) {
        uVar60 = *puVar56;
        uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar59 != 0) {
          piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(uVar60 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_03781fe0;
            }
            uVar59 = uVar59 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar59 != 0);
        }
        puVar46 = (ulong *)0x0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar56);
LAB_03781fe0:
        plVar34 = (long *)(*(code *)*puVar33)(puVar56,puVar33[1]);
        puVar63 = puVar56;
        if (plVar34 != (long *)0x0) {
          lVar57 = *plVar34;
          uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar59 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059e0788) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar59 = uVar59 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar59 != 0);
          }
          puVar46 = (ulong *)0x2;
          puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_0378204c:
          puVar63 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
          if (puVar63 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          if (*(byte *)(*puVar63 + 0x130) < *(byte *)(_DAT_059e73b0 + 0x130)) {
            return puVar63;
          }
          if (*(long *)(*(long *)(*puVar63 + 200) + (ulong)*(byte *)(_DAT_059e73b0 + 0x130) * 8 + -8
                       ) != _DAT_059e73b0) {
            return puVar63;
          }
          lVar57 = func_0x036d5ee4(puVar64,0);
          if (lVar57 != 0) {
            func_0x037040b8(lVar57,(int)puVar63[6],uVar61,0);
            uVar78 = 0;
            puVar70 = *(undefined **)((long)plVar54 + -0x888);
            *(undefined8 *)((long)plVar54 + -0x890) = *(undefined8 *)((long)plVar54 + -0x890);
            *(undefined8 *)((long)plVar54 + -0x880) = *(undefined8 *)((long)plVar54 + -0x880);
            *(undefined8 *)((long)plVar54 + -0x878) = *(undefined8 *)((long)plVar54 + -0x878);
            *(undefined8 *)((long)plVar54 + -0x870) = *(undefined8 *)((long)plVar54 + -0x870);
            *(undefined8 *)((long)plVar54 + -0x868) = *(undefined8 *)((long)plVar54 + -0x868);
            plVar34 = (long *)0x5e2d000;
            puVar32 = puVar51;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,plVar53,puVar51,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (plVar53 != (long *)0x0) {
              lVar57 = *plVar53;
              uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                    puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                    goto LAB_036e2904;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar32 = (ulong *)0x5;
              puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_036e2904:
              uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
              plVar47 = (long *)puVar64[2];
              if (plVar47 != (long *)0x0) {
                puVar32 = *(ulong **)(*plVar47 + 0x1d0);
                plVar47 = (long *)(**(code **)(*plVar47 + 0x1c8))(plVar47,uVar35);
                if (plVar47 != (long *)0x0) {
                  lVar57 = *plVar47;
                  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                  if (uVar61 != 0) {
                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                        puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                        goto LAB_036e2988;
                      }
                      uVar61 = uVar61 - 1;
                      piVar62 = piVar62 + 4;
                    } while (uVar61 != 0);
                  }
                  puVar32 = (ulong *)0x0;
                  puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036e2988:
                  plVar48 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                  plVar34 = plVar47;
                  if (plVar48 != (long *)0x0) {
                    lVar57 = *plVar48;
                    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                    if (uVar61 != 0) {
                      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar62 + -2) == _DAT_059e0788) {
                          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar61 = uVar61 - 1;
                        piVar62 = piVar62 + 4;
                      } while (uVar61 != 0);
                    }
                    puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0788,6);
LAB_036e29f4:
                    puVar32 = (ulong *)(*(code *)*puVar33)(plVar48,puVar33[1]);
                    if (((ulong)puVar32 & 1) == 0) {
                      return puVar32;
                    }
                    func_0x03727e60(puVar64,puVar51,0);
                    *(code **)((long)plVar54 + -0x8c0) = pcVar77;
                    *(undefined8 *)((long)plVar54 + -0x8b8) =
                         *(undefined8 *)((long)plVar54 + -0x890);
                    *(long **)((long)plVar54 + -0x8b0) = plVar71;
                    *(ulong **)((long)plVar54 + -0x8a8) = puVar65;
                    *(ulong **)((long)plVar54 + -0x8a0) = puVar55;
                    *(code **)((long)plVar54 + -0x898) = pcVar44;
                    *(undefined **)((long)plVar54 + -0x890) = puVar73;
                    *(undefined **)((long)plVar54 + -0x888) = puVar70;
                    *(undefined8 *)((long)plVar54 + -0x880) =
                         *(undefined8 *)((long)plVar54 + -0x880);
                    *(undefined8 *)((long)plVar54 + -0x878) =
                         *(undefined8 *)((long)plVar54 + -0x878);
                    *(undefined8 *)((long)plVar54 + -0x870) =
                         *(undefined8 *)((long)plVar54 + -0x870);
                    *(undefined8 *)((long)plVar54 + -0x868) =
                         *(undefined8 *)((long)plVar54 + -0x868);
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,plVar53,puVar51,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    *(undefined8 *)((long)plVar54 + -0x8d0) = 0;
                    *(undefined8 *)((long)plVar54 + -0x8c8) = 0;
                    plVar71 = (long *)0x5e2d000;
                    if (plVar53 != (long *)0x0) {
                      lVar57 = *plVar53;
                      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                      if (uVar61 != 0) {
                        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                            goto LAB_037280d4;
                          }
                          uVar61 = uVar61 - 1;
                          piVar62 = piVar62 + 4;
                        } while (uVar61 != 0);
                      }
                      puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar34 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                      if (puVar64 != (ulong *)0x0) {
                        uVar59 = *puVar64;
                        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                        if (uVar61 != 0) {
                          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
                              goto LAB_0372813c;
                            }
                            uVar61 = uVar61 - 1;
                            piVar62 = piVar62 + 4;
                          } while (uVar61 != 0);
                        }
                        puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar47 = (long *)(*(code *)*puVar33)(puVar64,plVar34,puVar33[1]);
                        plVar71 = plVar34;
                        if (plVar47 != (long *)0x0) {
                          lVar57 = *plVar47;
                          uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                          if (uVar61 != 0) {
                            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                                puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar61 = uVar61 - 1;
                              piVar62 = piVar62 + 4;
                            } while (uVar61 != 0);
                          }
                          puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar34 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                          plVar71 = plVar47;
                          if (plVar34 != (long *)0x0) {
                            lVar57 = *plVar34;
                            uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                            if (uVar61 != 0) {
                              piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar62 + -2) == _DAT_059e0788) {
                                  puVar33 = (undefined8 *)
                                            (lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar61 = uVar61 - 1;
                                piVar62 = piVar62 + 4;
                              } while (uVar61 != 0);
                            }
                            puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059e0788,2);
LAB_03728214:
                            plVar34 = (long *)(*(code *)*puVar33)(plVar34,puVar33[1]);
                            uVar59 = *puVar64;
                            uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                            if (uVar61 != 0) {
                              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                  puVar33 = (undefined8 *)
                                            (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                                  goto LAB_03728274;
                                }
                                uVar61 = uVar61 - 1;
                                piVar62 = piVar62 + 4;
                              } while (uVar61 != 0);
                            }
                            puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_03728274:
                            lVar57 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                            if (lVar57 != 0) {
                              uVar59 = *puVar64;
                              uVar78 = *(undefined8 *)(lVar57 + 0x28);
                              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                              if (uVar61 != 0) {
                                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                    puVar33 = (undefined8 *)
                                              (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                                    goto LAB_037282d8;
                                  }
                                  uVar61 = uVar61 - 1;
                                  piVar62 = piVar62 + 4;
                                } while (uVar61 != 0);
                              }
                              puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar57 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                              if (lVar57 != 0) {
                                uVar59 = *puVar64;
                                uVar35 = *(undefined8 *)(lVar57 + 0x30);
                                uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                                if (uVar61 != 0) {
                                  piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                      puVar33 = (undefined8 *)
                                                (uVar59 + (long)(*piVar62 + 0x24) * 0x10 + 0x138);
                                      goto LAB_0372833c;
                                    }
                                    uVar61 = uVar61 - 1;
                                    piVar62 = piVar62 + 4;
                                  } while (uVar61 != 0);
                                }
                                puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar28 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                                uVar59 = *puVar64;
                                uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                                if (uVar61 != 0) {
                                  piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                      puVar33 = (undefined8 *)
                                                (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                                      goto LAB_0372839c;
                                    }
                                    uVar61 = uVar61 - 1;
                                    piVar62 = piVar62 + 4;
                                  } while (uVar61 != 0);
                                }
                                puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar79 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                                uVar42 = func_0x03530c84(puVar51,0);
                                if (plVar34 != (long *)0x0) {
                                  lVar57 = *plVar34;
                                  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                                  if (uVar61 != 0) {
                                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar62 + -2) == _DAT_059e0780) {
                                        puVar33 = (undefined8 *)
                                                  (lVar57 + (long)*piVar62 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar61 = uVar61 - 1;
                                      piVar62 = piVar62 + 4;
                                    } while (uVar61 != 0);
                                  }
                                  puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059e0780,0);
LAB_03728418:
                                  pcVar77 = (code *)*puVar33;
                                  *(undefined8 *)((long)plVar54 + -0x8e0) = puVar33[1];
                                  auVar81 = (*pcVar77)(plVar34,plVar53,plVar47,uVar78,uVar35,uVar79,
                                                       uVar28,uVar42);
                                  uVar59 = *puVar64;
                                  *(undefined1 (*) [16])((long)plVar54 + -0x8d0) = auVar81;
                                  uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                                  if (uVar61 != 0) {
                                    piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                        puVar33 = (undefined8 *)
                                                  (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                                        goto LAB_037284a0;
                                      }
                                      uVar61 = uVar61 - 1;
                                      piVar62 = piVar62 + 4;
                                    } while (uVar61 != 0);
                                  }
                                  puVar33 = (undefined8 *)func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar57 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                                  if (lVar57 != 0) {
                                    *(undefined1 (*) [16])(lVar57 + 0x18) = auVar81;
                                    lVar57 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
                                      lVar57 = func_0x024d8f40();
                                    }
                                    puVar32 = (ulong *)func_0x0249f90c((undefined1 *)
                                                                       ((long)plVar54 + -0x8d0),
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar57 
                                                  + 0xc0) + 8) + 0x80));
                                    if ((char)*puVar32 != '\0') {
                                      return puVar32;
                                    }
                                    lVar57 = *plVar47;
                                    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                                    if (uVar61 != 0) {
                                      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                                          puVar33 = (undefined8 *)
                                                    (lVar57 + (long)*piVar62 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar61 = uVar61 - 1;
                                        piVar62 = piVar62 + 4;
                                      } while (uVar61 != 0);
                                    }
                                    puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar53 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
                                    if (plVar53 != (long *)0x0) {
                                      lVar57 = *plVar53;
                                      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                                      if (uVar61 != 0) {
                                        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar62 + -2) == _DAT_059e0788) {
                                            puVar33 = (undefined8 *)
                                                      (lVar57 + (long)(*piVar62 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar61 = uVar61 - 1;
                                          piVar62 = piVar62 + 4;
                                        } while (uVar61 != 0);
                                      }
                                      puVar33 = (undefined8 *)
                                                func_0x024d927c(plVar53,_DAT_059e0788,7);
LAB_037285a8:
                                      puVar32 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                                      if (((ulong)puVar32 & 1) == 0) {
                                        return puVar32;
                                      }
                                      uVar59 = *puVar64;
                                      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                                      if (uVar61 != 0) {
                                        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                            puVar33 = (undefined8 *)
                                                      (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728608;
                                          }
                                          uVar61 = uVar61 - 1;
                                          piVar62 = piVar62 + 4;
                                        } while (uVar61 != 0);
                                      }
                                      puVar33 = (undefined8 *)
                                                func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar71 = (long *)(*(code *)*puVar33)(puVar64,puVar33[1]);
                                      uVar59 = *puVar64;
                                      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
                                      if (uVar61 != 0) {
                                        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                                            puVar33 = (undefined8 *)
                                                      (uVar59 + (long)(*piVar62 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728668;
                                          }
                                          uVar61 = uVar61 - 1;
                                          piVar62 = piVar62 + 4;
                                        } while (uVar61 != 0);
                                      }
                                      puVar33 = (undefined8 *)
                                                func_0x024d927c(puVar64,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar57 = (*(code *)*puVar33)(puVar64,puVar33[1]);
                                      if ((lVar57 != 0) && (plVar71 != (long *)0x0)) {
                                        puVar32 = (ulong *)func_0x03704874(plVar71,*(undefined8 *)
                                                                                    (lVar57 + 0x28),
                                                                           0);
                                        return puVar32;
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
                    plVar53 = (long *)func_0x0249fb90();
                    *(undefined8 *)((long)plVar54 + -0x900) = 0x37286b0;
                    *(long **)((long)plVar54 + -0x8f0) = plVar71;
                    *(ulong **)((long)plVar54 + -0x8e8) = puVar64;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    *(undefined8 *)((long)plVar54 + -0x908) = 0;
                    if (plVar53 != (long *)0x0) {
                      lVar57 = *plVar53;
                      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                      if (uVar61 != 0) {
                        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar62 + -2) == _DAT_059dfe48) {
                            puVar33 = (undefined8 *)
                                      (lVar57 + (long)(*piVar62 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar61 = uVar61 - 1;
                          piVar62 = piVar62 + 4;
                        } while (uVar61 != 0);
                      }
                      puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar57 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                      if ((lVar57 == 0) || (*(long *)(lVar57 + 0x68) == 0)) {
                        uVar78 = 0;
                        *(undefined8 *)((long)plVar54 + -0x908) = 0;
                      }
                      else {
                        uVar28 = *(undefined4 *)(*(long *)(lVar57 + 0x68) + 0x10);
                        *(undefined8 *)((long)plVar54 + -0x910) = 0;
                        *(undefined4 *)((long)plVar54 + -0x8f4) = uVar28;
                        func_0x028866e4((undefined1 *)((long)plVar54 + -0x910),
                                        (undefined1 *)((long)plVar54 + -0x8f4),_DAT_05a27d88);
                        uVar78 = *(undefined8 *)((long)plVar54 + -0x910);
                      }
                      lVar57 = _DAT_05a27d90;
                      *(undefined8 *)((long)plVar54 + -0x908) = uVar78;
                      lVar49 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar4 = *(ushort *)(lVar49 + 0x135);
                      lVar50 = lVar49;
                      if ((uVar4 & 1) == 0) {
                        lVar49 = func_0x024d8f40(lVar49);
                        uVar4 = *(ushort *)(*(long *)(lVar57 + 0x20) + 0x135);
                        lVar50 = *(long *)(lVar57 + 0x20);
                      }
                      uVar28 = *(undefined4 *)(**(long **)(lVar49 + 0xc0) + 0xfc);
                      if ((uVar4 & 1) == 0) {
                        lVar50 = func_0x024d8f40(lVar50);
                      }
                      uVar78 = func_0x0249f90c((undefined1 *)((long)plVar54 + -0x908),
                                               *(long *)(*(long *)(*(long *)(lVar50 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x910),uVar78,uVar28);
                      return (ulong *)(ulong)*(uint *)((long)plVar54 + -0x910);
                    }
                    auVar81 = func_0x0249fb90();
                    lVar57 = auVar81._8_8_;
                    *(undefined8 *)((long)plVar54 + -0x920) = 0x372883c;
                    if (lVar57 != 0) {
                      if (*(int *)(auVar81._0_8_ + 0x10) < *(int *)(lVar57 + 0x18)) {
                        uVar29 = 0;
LAB_03728870:
                        return (ulong *)(ulong)(uVar29 & 1);
                      }
                      lVar50 = *(long *)(auVar81._0_8_ + 0x18);
                      if (lVar50 != 0) {
                        uVar29 = func_0x0387f210(lVar50,lVar57,0);
                        uVar29 = uVar29 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar81 = func_0x0249fb90();
                    lVar57 = auVar81._8_8_;
                    *(undefined8 *)((long)plVar54 + -0x930) = 0x3728880;
                    if (lVar57 != 0) {
                      if (*(int *)(auVar81._0_8_ + 0x10) < *(int *)(lVar57 + 0x18)) {
                        lVar50 = *(long *)(auVar81._0_8_ + 0x18);
                        if (lVar50 == 0) goto LAB_037288c0;
                        uVar29 = func_0x0387f210(lVar50,lVar57,0);
                        uVar29 = uVar29 ^ 1;
                      }
                      else {
                        uVar29 = 0;
                      }
                      return (ulong *)(ulong)(uVar29 & 1);
                    }
LAB_037288c0:
                    lVar57 = func_0x0249fb90();
                    return *(ulong **)(lVar57 + 0x10);
                  }
                }
              }
            }
            uVar35 = func_0x0249fb90();
            *(undefined8 *)((long)plVar54 + -0x8d0) = 0x36e2a48;
            *(undefined **)((long)plVar54 + -0x8c0) = puVar73;
            *(undefined **)((long)plVar54 + -0x8b8) = puVar70;
            *(long **)((long)plVar54 + -0x8b0) = plVar34;
            *(ulong **)((long)plVar54 + -0x8a8) = puVar64;
            *(long **)((long)plVar54 + -0x8a0) = plVar53;
            *(ulong **)((long)plVar54 + -0x898) = puVar51;
            puVar74 = (undefined *)0x5e2d000;
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
            *(undefined8 *)((long)plVar54 + -0x8e0) = 0;
            *(undefined8 *)((long)plVar54 + -0x8d8) = 0;
            *(undefined8 *)((long)plVar54 + -0x8f0) = 0;
            *(undefined8 *)((long)plVar54 + -0x8e8) = 0;
            plVar53 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar53,0);
            if (plVar53 != (long *)0x0) {
              puVar32 = (ulong *)0x0;
              func_0x0442b590(plVar53,_DAT_05a9e920);
              lVar57 = func_0x036d5e58(uVar35);
              if ((lVar57 != 0) && (*(long *)(lVar57 + 0x28) != 0)) {
                puVar74 = &DAT_05a9fca8;
                func_0x04433eb4(plVar53,*(undefined4 *)(*(long *)(lVar57 + 0x28) + 0x10),0);
                func_0x0442b540(plVar53,10,0);
                puVar32 = (ulong *)0x0;
                func_0x0442b590(plVar53,_DAT_05a9fca8);
                lVar57 = func_0x036d5e58(uVar35);
                if ((lVar57 != 0) && (*(long *)(lVar57 + 0x18) != 0)) {
                  puVar74 = &DAT_05a7a1e0;
                  func_0x04433eb4(plVar53,*(undefined4 *)(*(long *)(lVar57 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar53,10,0);
                  puVar32 = (ulong *)0x0;
                  func_0x0442b590(plVar53,_DAT_05a7a1e0);
                  lVar57 = func_0x036d5e58(uVar35);
                  if ((lVar57 != 0) && (*(long *)(lVar57 + 0x18) != 0)) {
                    puVar74 = &DAT_05a815a8;
                    func_0x04433eb4(plVar53,*(undefined4 *)(*(long *)(lVar57 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar53,10,0);
                    puVar32 = (ulong *)0x0;
                    func_0x0442b590(plVar53,_DAT_05a815a8);
                    lVar57 = func_0x036d5e58(uVar35);
                    if ((lVar57 != 0) && (*(long *)(lVar57 + 0x18) != 0)) {
                      puVar74 = &DAT_05a934d8;
                      func_0x04433eb4(plVar53,*(undefined4 *)(*(long *)(lVar57 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar53,10,0);
                      puVar32 = (ulong *)0x0;
                      func_0x0442b590(plVar53,_DAT_05a934d8);
                      lVar57 = func_0x036d5e58(uVar35);
                      if ((lVar57 != 0) && (*(long *)(lVar57 + 0x18) != 0)) {
                        puVar74 = &DAT_05a27fc8;
                        auVar81 = func_0x03753e70(*(long *)(lVar57 + 0x18),0);
                        *(undefined1 (*) [16])((long)plVar54 + -0x8e8) = auVar81;
                        lVar57 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar57 + 0x135) & 1) == 0) {
                          lVar57 = func_0x024d8f40();
                        }
                        plVar34 = (long *)&DAT_059e2ba0;
                        puVar70 = &DAT_05a79720;
                        puVar73 = &DAT_05a9e3c0;
                        pcVar43 = (char *)func_0x0249f90c((undefined1 *)((long)plVar54 + -0x8e8),
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar57 + 0xc0) + 8)
                                                           + 0x80));
                        lVar57 = _DAT_05a27fb0;
                        if (*pcVar43 == '\0') {
                          lVar57 = 0;
                        }
                        else {
                          lVar49 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar4 = *(ushort *)(lVar49 + 0x135);
                          lVar50 = lVar49;
                          if ((uVar4 & 1) == 0) {
                            lVar49 = func_0x024d8f40(lVar49);
                            uVar4 = *(ushort *)(*(long *)(lVar57 + 0x20) + 0x135);
                            lVar50 = *(long *)(lVar57 + 0x20);
                          }
                          puVar74 = (undefined *)(ulong)*(uint *)(**(long **)(lVar49 + 0xc0) + 0xfc)
                          ;
                          if ((uVar4 & 1) == 0) {
                            lVar50 = func_0x024d8f40(lVar50);
                          }
                          uVar79 = func_0x0249f90c((undefined1 *)((long)plVar54 + -0x8e8),
                                                   *(long *)(*(long *)(*(long *)(lVar50 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
                          func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x8c8),uVar79,puVar74);
                          iVar31 = *(int *)(_DAT_059e2ba0 + 0xe4);
                          *(undefined8 *)((long)plVar54 + -0x8f0) =
                               *(undefined8 *)((long)plVar54 + -0x8c8);
                          if (iVar31 == 0) {
                            func_0x0249fa64();
                          }
                          lVar57 = func_0x0430e224((undefined1 *)((long)plVar54 + -0x8f0),0);
                        }
                        lVar50 = _DAT_05a79720;
                        if (lVar57 != 0) {
                          lVar50 = lVar57;
                        }
                        func_0x0442b590(plVar53,lVar50,0);
                        func_0x0442b540(plVar53,10,0);
                        puVar32 = (ulong *)0x0;
                        func_0x0442b590(plVar53,_DAT_05a9e3c0);
                        lVar57 = func_0x036d5e58(uVar35);
                        if ((lVar57 != 0) && (*(long *)(lVar57 + 0x18) != 0)) {
                          uVar78 = func_0x03753af4(*(long *)(lVar57 + 0x18),0);
                          *(undefined8 *)((long)plVar54 + -0x8d8) = uVar78;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar61 = func_0x0430dd84(uVar78,*(undefined8 *)
                                                           (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar57 = _DAT_05a79720;
                          if ((uVar61 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar57 = func_0x0430e224((undefined1 *)((long)plVar54 + -0x8d8),0);
                          }
                          func_0x0442b590(plVar53,lVar57,0);
                          puVar32 = (ulong *)(**(code **)(*plVar53 + 0x168))
                                                       (plVar53,*(undefined8 *)(*plVar53 + 0x170));
                          return puVar32;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar57 = func_0x0249fb90();
            *(undefined8 *)((long)plVar54 + -0x930) = 0x36e2e70;
            *(undefined **)((long)plVar54 + -0x920) = puVar73;
            *(undefined **)((long)plVar54 + -0x918) = puVar70;
            *(long **)((long)plVar54 + -0x910) = plVar34;
            *(undefined **)((long)plVar54 + -0x908) = puVar74;
            *(undefined8 *)((long)plVar54 + -0x900) = uVar35;
            *(long **)((long)plVar54 + -0x8f8) = plVar53;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar51 = (ulong *)func_0x03962be0(0);
            if (((ulong)puVar51 & 1) == 0) {
              return puVar51;
            }
            uVar35 = 0x5e2d000;
            puVar74 = &DAT_059da1f8;
            if (puVar32 != (ulong *)0x0) {
              uVar59 = *puVar32;
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                    puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                    goto LAB_036e2f54;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar79 = (*(code *)*puVar33)(puVar32,puVar33[1]);
              if (lVar57 != 0) {
                puVar41 = (undefined *)func_0x036eb814(lVar57,uVar79,0);
                uVar35 = uVar79;
                if (*(long *)(lVar57 + 0x10) != 0) {
                  puVar73 = &DAT_059fa1e8;
                  plVar53 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  puVar70 = (undefined *)(ulong)*(uint *)(plVar53[1] + 0xfc);
                  uVar78 = func_0x0249f90c(*(long *)(lVar57 + 0x10),*(undefined8 *)(*plVar53 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x924),uVar78,puVar70);
                  uVar78 = 0;
                  func_0x034b666c(puVar41,puVar32,*(undefined4 *)((long)plVar54 + -0x924),0);
                  puVar74 = puVar41;
                  if (*(long *)(lVar57 + 0x10) != 0) {
                    plVar53 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    puVar70 = (undefined *)(ulong)*(uint *)(plVar53[1] + 0xfc);
                    uVar78 = func_0x0249f90c(*(long *)(lVar57 + 0x10),
                                             *(undefined8 *)(*plVar53 + 0x80));
                    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x924),uVar78,puVar70);
                    uVar78 = 0;
                    func_0x034b676c(puVar41,puVar32,*(undefined4 *)((long)plVar54 + -0x924),0);
                    if (*(long *)(lVar57 + 0x10) != 0) {
                      plVar53 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      puVar70 = (undefined *)(ulong)*(uint *)(plVar53[1] + 0xfc);
                      uVar78 = func_0x0249f90c(*(long *)(lVar57 + 0x10),
                                               *(undefined8 *)(*plVar53 + 0x80));
                      func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x924),uVar78,puVar70);
                      uVar78 = 0;
                      func_0x034b6ccc(puVar41,puVar32,*(undefined4 *)((long)plVar54 + -0x924),0);
                      if (*(long *)(lVar57 + 0x10) != 0) {
                        plVar53 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        puVar32 = (ulong *)(ulong)*(uint *)(plVar53[1] + 0xfc);
                        uVar78 = func_0x0249f90c(*(long *)(lVar57 + 0x10),
                                                 *(undefined8 *)(*plVar53 + 0x80));
                        func_0x054ed0d0((undefined1 *)((long)plVar54 + -0x924),uVar78,puVar32);
                        uVar78 = 0;
                        func_0x034b6dc0(puVar41,uVar79,*(undefined4 *)((long)plVar54 + -0x924),0);
                        plVar53 = *(long **)(lVar57 + 0x10);
                        if (plVar53 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          puVar32 = (ulong *)(**(code **)(*plVar53 + 0x1c8))
                                                       (plVar53,uVar79,
                                                        *(undefined8 *)(*plVar53 + 0x1d0));
                          return puVar32;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar89 = func_0x0249fb90();
            plVar53 = auVar89._8_8_;
            *(undefined8 *)((long)plVar54 + -0x950) = 0x36e30d4;
            *(undefined8 *)((long)plVar54 + -0x948) = uVar35;
            *(ulong **)((long)plVar54 + -0x940) = puVar32;
            *(long *)((long)plVar54 + -0x938) = lVar57;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar53 != (long *)0x0) {
              lVar57 = *plVar53;
              uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                    puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df8e8,5);
LAB_036e3178:
              uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
              plVar53 = *(long **)(auVar89._0_8_ + 0x10);
              if (plVar53 != (long *)0x0) {
                plVar53 = (long *)(**(code **)(*plVar53 + 0x1c8))
                                            (plVar53,uVar35,*(undefined8 *)(*plVar53 + 0x1d0));
                if (plVar53 == (long *)0x0) {
                  return (ulong *)0x1;
                }
                lVar57 = *plVar53;
                auVar89._8_8_ = &DAT_059dfbc0;
                auVar89._0_8_ = plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar57 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                if (lVar57 == 0) {
                  return (ulong *)0x1;
                }
                lVar57 = *plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar53 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                if (plVar53 != (long *)0x0) {
                  lVar57 = *plVar53;
                  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                  if (uVar61 != 0) {
                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar62 + -2) == _DAT_059df2a8) {
                        puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar61 = uVar61 - 1;
                      piVar62 = piVar62 + 4;
                    } while (uVar61 != 0);
                  }
                  puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar32 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                  return puVar32;
                }
              }
            }
            auVar90 = func_0x0249fb90();
            plVar53 = auVar90._8_8_;
            *(undefined8 *)((long)plVar54 + -0x970) = 0x36e32f4;
            *(undefined8 *)((long)plVar54 + -0x968) = 0x5e2d000;
            *(long *)((long)plVar54 + -0x960) = auVar89._8_8_;
            *(long *)((long)plVar54 + -0x958) = auVar89._0_8_;
            if ((bRam0000000005e2da65 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da65 = 1;
            }
            if (plVar53 != (long *)0x0) {
              lVar57 = *plVar53;
              uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                    puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df8e8,5);
LAB_036e3398:
              uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
              plVar53 = *(long **)(auVar90._0_8_ + 0x10);
              if (plVar53 != (long *)0x0) {
                plVar53 = (long *)(**(code **)(*plVar53 + 0x1c8))
                                            (plVar53,uVar35,*(undefined8 *)(*plVar53 + 0x1d0));
                if (plVar53 == (long *)0x0) {
                  return (ulong *)0x0;
                }
                lVar57 = *plVar53;
                auVar90._8_8_ = &DAT_059dfbc0;
                auVar90._0_8_ = plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar57 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                if (lVar57 == 0) {
                  return (ulong *)0x0;
                }
                lVar57 = *plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar53 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                if (plVar53 != (long *)0x0) {
                  lVar57 = *plVar53;
                  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                  if (uVar61 != 0) {
                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar62 + -2) == _DAT_059df2a8) {
                        puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar61 = uVar61 - 1;
                      piVar62 = piVar62 + 4;
                    } while (uVar61 != 0);
                  }
                  puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar32 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                  return puVar32;
                }
              }
            }
            auVar81 = func_0x0249fb90();
            plVar53 = auVar81._8_8_;
            uVar61 = auVar81._0_8_;
            *(undefined8 *)((long)plVar54 + -0x9a0) = 0x36e3514;
            *(undefined **)((long)plVar54 + -0x990) = puVar74;
            *(undefined8 *)((long)plVar54 + -0x988) = 0x5e2d000;
            *(long *)((long)plVar54 + -0x980) = auVar90._8_8_;
            *(long *)((long)plVar54 + -0x978) = auVar90._0_8_;
            lVar57 = 0x5e2d000;
            if ((bRam0000000005e2da66 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da66 = 1;
            }
            lVar50 = func_0x036d5e58(uVar61);
            if (lVar50 != 0) {
              lVar57 = *(long *)(lVar50 + 0x20);
              puVar74 = &DAT_059dfbc0;
              if (lVar57 != 0) {
                if (plVar53 == (long *)0x0) goto LAB_036e3670;
                lVar50 = *plVar53;
                uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
                if (uVar59 != 0) {
                  piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                      puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar59 = uVar59 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar59 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                func_0x03704ea8(lVar57,uVar35,0);
              }
              puVar32 = (ulong *)func_0x036d5e58(uVar61);
              if (puVar32 != (ulong *)0x0) {
                uVar61 = puVar32[3];
                if (uVar61 == 0) {
                  return puVar32;
                }
                if (plVar53 != (long *)0x0) {
                  lVar57 = *plVar53;
                  uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
                  if (uVar59 != 0) {
                    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                        puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar59 = uVar59 - 1;
                      piVar62 = piVar62 + 4;
                    } while (uVar59 != 0);
                  }
                  puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfbc0,3);
LAB_036e3648:
                  plVar53 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                  uVar79 = 0;
                  uVar35 = *(undefined8 *)((long)plVar54 + -0x990);
                  *(undefined8 *)((long)plVar54 + -0x9b0) = *(undefined8 *)((long)plVar54 + -0x9a0);
                  *(undefined **)((long)plVar54 + -0x9a0) = puVar73;
                  *(undefined **)((long)plVar54 + -0x998) = puVar70;
                  *(undefined8 *)((long)plVar54 + -0x990) = uVar35;
                  *(undefined8 *)((long)plVar54 + -0x988) = *(undefined8 *)((long)plVar54 + -0x988);
                  *(undefined8 *)((long)plVar54 + -0x980) = *(undefined8 *)((long)plVar54 + -0x980);
                  *(undefined8 *)((long)plVar54 + -0x978) = *(undefined8 *)((long)plVar54 + -0x978);
                  uVar59 = 0x5e2d000;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (plVar53 != (long *)0x0) {
                    lVar57 = *plVar53;
                    uVar59 = (ulong)*(uint *)(uVar61 + 0x14);
                    uVar60 = (ulong)*(ushort *)(lVar57 + 0x12e);
                    if (uVar60 != 0) {
                      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar62 + -2) == _DAT_059deb70) {
                          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                          goto LAB_037548ac;
                        }
                        uVar60 = uVar60 - 1;
                        piVar62 = piVar62 + 4;
                      } while (uVar60 != 0);
                    }
                    uVar79 = 2;
                    puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_037548ac:
                    plVar71 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
                    if (plVar71 != (long *)0x0) {
                      lVar57 = *plVar71;
                      uVar28 = *(undefined4 *)(uVar61 + 0x70);
                      uVar2 = *(undefined4 *)(uVar61 + 0x10);
                      uVar3 = *(undefined1 *)(uVar61 + 0x94);
                      uVar60 = (ulong)*(ushort *)(lVar57 + 0x12e);
                      if (uVar60 != 0) {
                        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar62 + -2) == _DAT_059deb60) {
                            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar60 = uVar60 - 1;
                          piVar62 = piVar62 + 4;
                        } while (uVar60 != 0);
                      }
                      puVar33 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar28 = (*(code *)*puVar33)(plVar71,CONCAT44(uVar28,uVar2),uVar3,puVar33[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      puVar32 = (ulong *)func_0x045a9bd0(uVar59,uVar28,0);
                      *(int *)(uVar61 + 0x14) = (int)puVar32;
                      return puVar32;
                    }
                  }
                  auVar81 = func_0x0249fb90();
                  plVar71 = auVar81._8_8_;
                  lVar57 = auVar81._0_8_;
                  *(undefined8 *)((long)plVar54 + -0x9e0) = 0x3754988;
                  *(undefined **)((long)plVar54 + -0x9d8) = puVar70;
                  *(undefined8 *)((long)plVar54 + -0x9d0) = uVar35;
                  *(long **)((long)plVar54 + -0x9c8) = plVar53;
                  *(ulong *)((long)plVar54 + -0x9c0) = uVar59;
                  *(ulong *)((long)plVar54 + -0x9b8) = uVar61;
                  uVar35 = uVar79;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar71 != (long *)0x0) {
                    lVar50 = *plVar71;
                    iVar31 = *(int *)(lVar57 + 0x90);
                    uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                    if (uVar61 != 0) {
                      piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar62 + -2) == _DAT_059deb78) {
                          puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar61 = uVar61 - 1;
                        piVar62 = piVar62 + 4;
                      } while (uVar61 != 0);
                    }
                    puVar33 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb78,2);
LAB_03754a3c:
                    puVar32 = (ulong *)(*(code *)*puVar33)(plVar71,puVar33[1]);
                    if (iVar31 < (int)puVar32) {
                      uVar78 = func_0x03530c84(uVar79,0);
                      lVar50 = *plVar71;
                      uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                      if (uVar61 != 0) {
                        piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar62 + -2) == _DAT_059deb78) {
                            puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar61 = uVar61 - 1;
                          piVar62 = piVar62 + 4;
                        } while (uVar61 != 0);
                      }
                      puVar33 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb78,0);
LAB_03754aac:
                      uVar35 = (*(code *)*puVar33)(plVar71,puVar33[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      uVar78 = func_0x0430d994(uVar78,uVar35,0);
                      *(undefined8 *)((long)plVar54 + -0x9e8) = uVar78;
                      *(undefined8 *)((long)plVar54 + -0xa00) = 0;
                      *(undefined8 *)((long)plVar54 + -0x9f8) = 0;
                      puVar32 = (ulong *)func_0x028866e4((undefined1 *)((long)plVar54 + -0xa00),
                                                         (undefined1 *)((long)plVar54 + -0x9e8),
                                                         _DAT_05a27fa0);
                      uVar78 = *(undefined8 *)((long)plVar54 + -0xa00);
                      *(undefined8 *)(lVar57 + 0x88) = *(undefined8 *)((long)plVar54 + -0x9f8);
                      *(undefined8 *)(lVar57 + 0x80) = uVar78;
                    }
                    return puVar32;
                  }
                  auVar81 = func_0x0249fb90();
                  lVar50 = auVar81._0_8_;
                  *(undefined8 *)((long)plVar54 + -0xa30) = 0x3754b28;
                  *(undefined **)((long)plVar54 + -0xa28) = puVar70;
                  *(undefined8 *)((long)plVar54 + -0xa20) = 0x5e2d000;
                  *(undefined8 *)((long)plVar54 + -0xa18) = uVar79;
                  *(undefined8 *)((long)plVar54 + -0xa10) = 0;
                  *(long *)((long)plVar54 + -0xa08) = lVar57;
                  *(long *)((long)plVar54 + -0xa48) = auVar81._8_8_;
                  *(undefined8 *)((long)plVar54 + -0xa40) = uVar35;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    bRam0000000005e2de67 = 1;
                  }
                  iVar31 = *(int *)(_DAT_059d3fd0 + 0xe4);
                  *(undefined8 *)((long)plVar54 + -0xa50) = 0;
                  if (iVar31 == 0) {
                    func_0x0249fa64();
                  }
                  puVar32 = (ulong *)func_0x0288eda8((undefined1 *)((long)plVar54 + -0xa48),
                                                     (undefined1 *)((long)plVar54 + -0xa50),
                                                     _DAT_05a29960);
                  if (((ulong)puVar32 & 1) == 0) {
                    *(undefined4 *)(lVar50 + 0x90) = 0;
                    return puVar32;
                  }
                  plVar53 = *(long **)((long)plVar54 + -0xa50);
                  iVar31 = *(int *)(lVar50 + 0x90) + 1;
                  *(int *)(lVar50 + 0x90) = iVar31;
                  if (plVar53 != (long *)0x0) {
                    lVar57 = *plVar53;
                    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                    if (uVar61 != 0) {
                      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar62 + -2) == _DAT_059deb78) {
                          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar61 = uVar61 - 1;
                        piVar62 = piVar62 + 4;
                      } while (uVar61 != 0);
                    }
                    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059deb78,2);
LAB_03754c40:
                    iVar30 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                    if (iVar31 < iVar30) {
                      uVar78 = func_0x03530c84(uVar78,0);
                      plVar53 = *(long **)((long)plVar54 + -0xa50);
                      if (plVar53 != (long *)0x0) {
                        lVar57 = *plVar53;
                        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                        if (uVar61 != 0) {
                          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar62 + -2) == _DAT_059deb78) {
                              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar61 = uVar61 - 1;
                            piVar62 = piVar62 + 4;
                          } while (uVar61 != 0);
                        }
                        puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059deb78,1);
LAB_03754d04:
                        uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uVar78 = func_0x0430d994(uVar78,uVar35,0);
                        *(undefined8 *)((long)plVar54 + -0xa38) = uVar78;
                        *(undefined8 *)((long)plVar54 + -0xa60) = 0;
                        *(undefined8 *)((long)plVar54 + -0xa58) = 0;
                        puVar32 = (ulong *)func_0x028866e4((undefined1 *)((long)plVar54 + -0xa60),
                                                           (undefined1 *)((long)plVar54 + -0xa38),
                                                           _DAT_05a27fa0);
                        uVar78 = *(undefined8 *)((long)plVar54 + -0xa60);
                        *(undefined8 *)(lVar50 + 0x88) = *(undefined8 *)((long)plVar54 + -0xa58);
                        *(undefined8 *)(lVar50 + 0x80) = uVar78;
                        return puVar32;
                      }
                    }
                    else {
                      plVar54 = *(long **)((long)plVar54 + -0xa50);
                      if (plVar54 != (long *)0x0) {
                        lVar57 = *plVar54;
                        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                        if (uVar61 != 0) {
                          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar62 + -2) == _DAT_059deb78) {
                              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d7c;
                            }
                            uVar61 = uVar61 - 1;
                            piVar62 = piVar62 + 4;
                          } while (uVar61 != 0);
                        }
                        puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059deb78,2);
LAB_03754d7c:
                        puVar32 = (ulong *)(*(code *)*puVar33)(plVar54,puVar33[1]);
                        *(undefined8 *)(lVar50 + 0x80) = 0;
                        *(undefined8 *)(lVar50 + 0x88) = 0;
                        *(int *)(lVar50 + 0x90) = (int)puVar32;
                        return puVar32;
                      }
                    }
                  }
                  puVar32 = (ulong *)func_0x0249fb90();
                  return puVar32;
                }
              }
            }
LAB_036e3670:
            auVar81 = func_0x0249fb90();
            *(undefined8 *)((long)plVar54 + -0x9d0) = 0x36e3674;
            *(undefined **)((long)plVar54 + -0x9c0) = puVar74;
            *(long *)((long)plVar54 + -0x9b8) = lVar57;
            *(ulong *)((long)plVar54 + -0x9b0) = uVar61;
            *(long **)((long)plVar54 + -0x9a8) = plVar53;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar57 = *(long *)(auVar81._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)plVar54 + -0x9d0) = *(undefined8 *)((long)plVar54 + -0x9d0);
            *(undefined8 *)((long)plVar54 + -0x9c0) = *(undefined8 *)((long)plVar54 + -0x9c0);
            *(undefined8 *)((long)plVar54 + -0x9b8) = *(undefined8 *)((long)plVar54 + -0x9b8);
            *(undefined8 *)((long)plVar54 + -0x9b0) = *(undefined8 *)((long)plVar54 + -0x9b0);
            *(undefined8 *)((long)plVar54 + -0x9a8) = *(undefined8 *)((long)plVar54 + -0x9a8);
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar57,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)plVar54 + -0x9c8) = 0;
            func_0x042539d4((undefined1 *)((long)plVar54 + -0x9c8),auVar81._8_8_ - lVar57,0);
            return *(ulong **)((long)plVar54 + -0x9c8);
          }
        }
      }
    }
  }
  auVar92 = func_0x0249fb90();
  lVar50 = auVar92._8_8_;
  plVar34 = auVar92._0_8_;
  *(undefined8 *)((long)plVar54 + -0x8d0) = 0x37820e8;
  *(code **)((long)plVar54 + -0x8c8) = pcVar44;
  *(undefined **)((long)plVar54 + -0x8c0) = puVar73;
  *(ulong **)((long)plVar54 + -0x8b8) = puVar63;
  *(long **)((long)plVar54 + -0x8b0) = plVar53;
  *(ulong *)((long)plVar54 + -0x8a8) = uVar61;
  *(ulong **)((long)plVar54 + -0x8a0) = puVar64;
  *(ulong **)((long)plVar54 + -0x898) = puVar51;
  lVar57 = 0x5e2d000;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
  }
  if (lVar50 != 0) {
    lVar57 = func_0x036d5ec8(lVar50,0);
    puVar51 = (ulong *)func_0x036d5f00(lVar50,0);
    if (plVar34 != (long *)0x0) {
      lVar49 = *plVar34;
      puVar73 = &DAT_059df8e8;
      uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df8e8,5);
LAB_037821d0:
      uVar78 = (*(code *)*puVar33)(plVar34,puVar33[1]);
      puVar46 = (ulong *)0x0;
      puVar56 = (ulong *)func_0x036d3908(lVar50,uVar78);
      puVar64 = puVar51;
      if (puVar56 != (ulong *)0x0) {
        uVar59 = *puVar56;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 3) * 0x10 + 0x138);
              goto LAB_0378224c;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0x3;
        puVar33 = (undefined8 *)func_0x024d927c(puVar56);
LAB_0378224c:
        plVar53 = (long *)(*(code *)*puVar33)(puVar56,puVar33[1]);
        puVar63 = puVar56;
        if (plVar53 != (long *)0x0) {
          lVar49 = *plVar53;
          uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059deb70) {
                puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059deb70,2);
LAB_037822b8:
          pcVar44 = (code *)&DAT_059e1498;
          puVar63 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
          lVar49 = *plVar34;
          uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
                puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df8e8,5);
LAB_03782320:
          uVar78 = (*(code *)*puVar33)(plVar34,puVar33[1]);
          uVar78 = func_0x036d3908(lVar50,uVar78,0);
          auVar19._8_8_ = uVar78;
          auVar19._0_8_ = plVar34;
          auVar92._8_8_ = uVar78;
          auVar92._0_8_ = plVar34;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          puVar46 = (ulong *)0x0;
          uVar29 = func_0x036c47c0(uVar78,plVar34);
          if ((lVar57 != 0) && (auVar92 = auVar19, puVar63 != (ulong *)0x0)) {
            pcVar44 = (code *)&DAT_059deb60;
            uVar59 = *puVar63;
            puVar46 = (ulong *)(ulong)*(byte *)(lVar57 + 0x94);
            auVar92[8] = *(byte *)(lVar57 + 0x94);
            auVar92._0_8_ = CONCAT44(0,uVar29);
            auVar92._9_7_ = 0;
            uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
            puVar73 = (undefined *)
                      CONCAT44(*(undefined4 *)(lVar57 + 0x70),*(undefined4 *)(lVar57 + 0x10));
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059deb60) {
                  puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0xd) * 0x10 + 0x138);
                  goto LAB_037823d8;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar33 = (undefined8 *)func_0x024d927c(puVar63,_DAT_059deb60,0xd);
LAB_037823d8:
            puVar32 = (ulong *)puVar33[1];
            iVar31 = (*(code *)*puVar33)(puVar63,puVar73);
            if (puVar51 != (ulong *)0x0) {
              func_0x03700d78(puVar51,(uVar29 - (int)puVar51[2]) - iVar31,CONCAT44(0,uVar29),0);
              *(undefined4 *)(lVar57 + 0x38) = 0;
              uVar28 = *(undefined4 *)(lVar57 + 0x10);
              uVar2 = *(undefined4 *)(lVar57 + 0x70);
              uVar59 = *puVar63;
              uVar3 = *(undefined1 *)(lVar57 + 0x94);
              uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059deb60) {
                    puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 0xd) * 0x10 + 0x138);
                    goto LAB_0378246c;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(puVar63,_DAT_059deb60,0xd);
LAB_0378246c:
              puVar32 = (ulong *)(*(code *)*puVar33)(puVar63,CONCAT44(uVar2,uVar28),uVar3,puVar33[1]
                                                    );
              *(int *)(lVar57 + 0x14) = (int)puVar32 + -1;
              return puVar32;
            }
          }
        }
      }
    }
  }
  plVar34 = auVar92._8_8_;
  auVar93 = func_0x0249fb90();
  lVar50 = auVar93._8_8_;
  plVar53 = auVar93._0_8_;
  *(undefined8 *)((long)plVar54 + -0x910) = 0x37824a0;
  *(undefined **)((long)plVar54 + -0x900) = puVar73;
  *(ulong **)((long)plVar54 + -0x8f8) = puVar63;
  *(long **)((long)plVar54 + -0x8f0) = plVar34;
  *(long *)((long)plVar54 + -0x8e8) = auVar92._0_8_;
  *(ulong **)((long)plVar54 + -0x8e0) = puVar64;
  *(long *)((long)plVar54 + -0x8d8) = lVar57;
  lVar57 = 0x5e2d000;
  if ((bRam0000000005e2df9c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9c = 1;
  }
  if (plVar53 != (long *)0x0) {
    lVar49 = *plVar53;
    uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar46 = (ulong *)0x5;
    puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_03782564:
    uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    if (lVar50 != 0) {
      puVar46 = (ulong *)0x0;
      puVar63 = (ulong *)func_0x036d3908(lVar50,uVar78);
      lVar57 = func_0x036d5ee4(lVar50,0);
      lVar50 = func_0x036d5f1c(lVar50,0);
      auVar21._8_8_ = lVar50;
      auVar21._0_8_ = plVar53;
      auVar20._8_8_ = lVar50;
      auVar20._0_8_ = plVar53;
      if (puVar63 != (ulong *)0x0) {
        uVar59 = *puVar63;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_03782600;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar46 = (ulong *)0x0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar63);
LAB_03782600:
        plVar47 = (long *)(*(code *)*puVar33)(puVar63,puVar33[1]);
        auVar93 = auVar20;
        if (plVar47 != (long *)0x0) {
          lVar49 = *plVar47;
          uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
          puVar73 = &DAT_059e1498;
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059e0788) {
                puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0788,2);
LAB_03782674:
          plVar34 = (long *)(*(code *)*puVar33)(plVar47,puVar33[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          puVar46 = (ulong *)0x0;
          uVar29 = func_0x036c49d4(puVar63,plVar53);
          auVar93 = auVar21;
          if (plVar34 != (long *)0x0) {
            lVar49 = *plVar34;
            puVar51 = (ulong *)CONCAT44(0,uVar29);
            auVar22._8_8_ = lVar50;
            auVar22._0_8_ = puVar51;
            auVar93._8_8_ = lVar50;
            auVar93._0_8_ = puVar51;
            puVar63 = (ulong *)&DAT_059e0780;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059e0780) {
                  puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar46 = (ulong *)0x7;
            puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_03782708:
            iVar31 = (*(code *)*puVar33)(plVar34,puVar33[1]);
            if (lVar50 != 0) {
              puVar32 = (ulong *)0x0;
              func_0x03700d78(lVar50,(uVar29 - *(int *)(lVar50 + 0x10)) - iVar31);
              puVar46 = puVar51;
              auVar93 = auVar22;
              if (lVar57 != 0) {
                func_0x03704850(lVar57,0);
                lVar50 = *plVar34;
                uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
                if (uVar61 != 0) {
                  piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar62 + -2) == _DAT_059e0780) {
                      puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar61 = uVar61 - 1;
                    piVar62 = piVar62 + 4;
                  } while (uVar61 != 0);
                }
                puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059e0780,2);
LAB_03782794:
                puVar32 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
                *(int *)(lVar57 + 0x14) = (int)puVar32 + -1;
                return puVar32;
              }
            }
          }
        }
      }
    }
  }
  auVar81 = func_0x0249fb90();
  uVar35 = auVar81._8_8_;
  uVar78 = auVar81._0_8_;
  *(code **)((long)plVar54 + -0x950) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0x948) = 0x37827c0;
  *(undefined **)((long)plVar54 + -0x940) = puVar73;
  *(ulong **)((long)plVar54 + -0x938) = puVar63;
  *(long **)((long)plVar54 + -0x930) = plVar34;
  *(long *)((long)plVar54 + -0x928) = auVar93._8_8_;
  *(long *)((long)plVar54 + -0x920) = auVar93._0_8_;
  *(long *)((long)plVar54 + -0x918) = lVar57;
  puVar51 = puVar46;
  puVar63 = puVar32;
  puVar64 = puVar52;
  if ((bRam0000000005e2df9d & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2df9d = 1;
  }
  plVar34 = (long *)func_0x0376e450(uVar78,uVar35);
  plVar53 = (long *)0x5e2d000;
  if (plVar34 == (long *)0x0) {
LAB_037829b0:
    uVar79 = 0x37829b4;
    auVar81 = func_0x0249fb90();
  }
  else {
    puVar51 = (ulong *)0x0;
    puVar56 = (ulong *)func_0x036d9cf8(plVar34,puVar32);
    if (((ulong)puVar56 & 1) == 0) {
      return puVar56;
    }
    plVar53 = plVar34;
    if (puVar32 == (ulong *)0x0) goto LAB_037829b0;
    uVar59 = *puVar32;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03782894;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059df8e8,5);
LAB_03782894:
    uVar79 = (*(code *)*puVar33)(puVar32,puVar33[1]);
    puVar51 = (ulong *)func_0x036eb4a0(plVar34,uVar79,0);
    if (((ulong)puVar51 & 1) == 0) {
      return puVar51;
    }
    uVar79 = 0x37828c8;
    puVar51 = puVar32;
    puVar63 = puVar46;
  }
  uVar42 = auVar81._8_8_;
  lVar57 = auVar81._0_8_;
  *(undefined8 *)((long)plVar54 + -0xab0) = uVar79;
  *(long **)((long)plVar54 + -0xaa0) = plVar71;
  *(ulong **)((long)plVar54 + -0xa98) = puVar65;
  *(ulong **)((long)plVar54 + -0xa90) = puVar55;
  *(code **)((long)plVar54 + -0xa88) = pcVar44;
  *(long **)((long)plVar54 + -0xa80) = plVar53;
  *(undefined8 *)((long)plVar54 + -0xa78) = uVar78;
  *(ulong **)((long)plVar54 + -0xa70) = puVar32;
  *(undefined8 *)((long)plVar54 + -0xa68) = uVar35;
  *(ulong **)((long)plVar54 + -0xa60) = puVar46;
  *(ulong **)((long)plVar54 + -0xa58) = puVar52;
  puVar32 = puVar51;
  puVar46 = puVar63;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfb7 = 1;
  }
  puVar56 = (ulong *)func_0x0376e450(lVar57,uVar42);
  puVar52 = (ulong *)0x5e2d000;
  if (puVar51 != (ulong *)0x0) {
    uVar59 = *puVar51;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03782a98;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar32 = (ulong *)0x5;
    puVar33 = (undefined8 *)func_0x024d927c(puVar51);
LAB_03782a98:
    uVar78 = (*(code *)*puVar33)(puVar51,puVar33[1]);
    puVar52 = puVar56;
    if (puVar56 != (ulong *)0x0) {
      puVar32 = (ulong *)0x0;
      plVar34 = (long *)func_0x036d3908(puVar56,uVar78);
      if (plVar34 != (long *)0x0) {
        lVar50 = *plVar34;
        puVar65 = (ulong *)&DAT_059dfbc0;
        uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar32 = (ulong *)0x2;
        puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_03782b18:
        pcVar68 = (code *)(*(code *)*puVar33)(plVar34,puVar33[1]);
        plVar53 = plVar34;
        if (pcVar68 != (code *)0x0) {
          lVar50 = *(long *)pcVar68;
          plVar71 = (long *)&DAT_059dfe38;
          uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059dfe38) {
                puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_03782b84;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar32 = (ulong *)0x2;
          puVar33 = (undefined8 *)func_0x024d927c(pcVar68);
LAB_03782b84:
          puVar36 = (ulong *)(*(code *)*puVar33)(pcVar68,puVar33[1]);
          if (((ulong)puVar36 & 1) == 0) {
            return puVar36;
          }
          pcVar45 = (code *)func_0x036d5ffc(puVar56,0);
          pcVar44 = pcVar68;
          if (pcVar45 != (code *)0x0) {
            puVar55 = *(ulong **)(lVar57 + 0x30);
            uVar61 = func_0x036d392c(puVar56,0);
            puVar46 = (ulong *)(uVar61 & 0xffffffff);
            puVar64 = (ulong *)0x0;
            puVar32 = puVar55;
            func_0x0374def0(pcVar45,puVar51);
            pcVar44 = pcVar45;
          }
          lVar50 = *plVar34;
          uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
                puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar32 = (ulong *)0x2;
          puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_03782c20:
          plVar34 = (long *)(*(code *)*puVar33)(plVar34,puVar33[1]);
          if (plVar34 != (long *)0x0) {
            lVar50 = *plVar34;
            uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059dfe38) {
                  puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar32 = (ulong *)0x0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_03782c80:
            plVar47 = (long *)(*(code *)*puVar33)(plVar34,puVar33[1]);
            plVar53 = plVar34;
            if (plVar47 != (long *)0x0) {
              lVar50 = *plVar47;
              uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059dfe68) {
                    puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dfe68,1);
LAB_03782cec:
              puVar46 = puVar56;
              puVar64 = puVar56;
              puVar32 = (ulong *)(*(code *)*puVar33)(plVar47,puVar51,lVar57,puVar56,puVar56,puVar63,
                                                     puVar33[1]);
              if ((puVar32 == (ulong *)0x0) || (*puVar32 == _DAT_059e2700)) {
                func_0x037743ac(lVar57,uVar42);
                puVar32 = (ulong *)func_0x03530c84(puVar63,0);
                *(ulong **)(lVar57 + 0x20) = puVar32;
                return puVar32;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar47 = plVar53;
  func_0x0249fb90();
LAB_03782d68:
  auVar81 = func_0x0249ff10(puVar32);
  plVar53 = auVar81._8_8_;
  lVar50 = auVar81._0_8_;
  *(code **)((long)plVar54 + -0xb10) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0xb00) = 0x3782d70;
  *(ulong **)((long)plVar54 + -0xaf8) = puVar65;
  *(ulong **)((long)plVar54 + -0xaf0) = puVar55;
  *(code **)((long)plVar54 + -0xae8) = pcVar44;
  *(long **)((long)plVar54 + -0xae0) = plVar47;
  *(ulong **)((long)plVar54 + -0xad8) = puVar52;
  *(ulong **)((long)plVar54 + -0xad0) = puVar51;
  *(undefined8 *)((long)plVar54 + -0xac8) = uVar42;
  *(long *)((long)plVar54 + -0xac0) = lVar57;
  *(ulong **)((long)plVar54 + -0xab8) = puVar63;
  puVar51 = puVar32;
  puVar63 = puVar46;
  puVar52 = puVar64;
  if ((bRam0000000005e2df9e & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2df9e = 1;
  }
  *(undefined8 *)((long)plVar54 + -0xb08) = 0;
  lVar57 = func_0x0376e450(lVar50,puVar32);
  puVar56 = (ulong *)0x0;
  if ((lVar57 == 0) || (puVar56 = (ulong *)func_0x036d06d8(lVar57,0), ((ulong)puVar56 & 1) == 0)) {
    return puVar56;
  }
  puVar56 = (ulong *)func_0x036d5f70(lVar57,0);
  if (plVar53 != (long *)0x0) {
    lVar49 = *plVar53;
    uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_03782e80;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df8e8,5);
LAB_03782e80:
    uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    puVar51 = (ulong *)0x0;
    pcVar68 = (code *)func_0x036d3908(lVar57,uVar78);
    puVar55 = puVar56;
    if (pcVar68 != (code *)0x0) {
      lVar49 = *(long *)pcVar68;
      uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 6) * 0x10 + 0x138);
            goto LAB_03782efc;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar51 = (ulong *)0x6;
      puVar33 = (undefined8 *)func_0x024d927c(pcVar68);
LAB_03782efc:
      plVar34 = (long *)(*(code *)*puVar33)(pcVar68,puVar33[1]);
      pcVar44 = pcVar68;
      if ((puVar56 != (ulong *)0x0) && (puVar65 = (ulong *)0x0, plVar34 != (long *)0x0)) {
        lVar49 = *plVar34;
        uVar59 = puVar56[5];
        uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df030) {
              puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 9) * 0x10 + 0x138);
              goto LAB_03782f70;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df030,9);
LAB_03782f70:
        uVar61 = (*(code *)*puVar33)(plVar34,plVar53,uVar59,puVar33[1]);
        func_0x0374a538((undefined1 *)((long)plVar54 + -0xb08),uVar61,uVar61 >> 0x20,0);
        func_0x036e1be4(lVar57,0);
        puVar51 = (ulong *)func_0x03530c84(puVar46,0);
        *(ulong **)(lVar50 + 0x20) = puVar51;
        if (puVar64 == (ulong *)0x0) {
          return puVar51;
        }
        *(undefined8 *)((long)plVar54 + -0xb68) = *(undefined8 *)((long)plVar54 + -0xb08);
        uVar78 = func_0x0249fa6c(_DAT_059d9ea8,(undefined1 *)((long)plVar54 + -0xb68));
        *(undefined8 *)((long)plVar54 + -0xc20) = 0;
        *(undefined8 *)((long)plVar54 + -0xba8) = 0;
        *(undefined8 *)((long)plVar54 + -0xbb0) = 0;
        *(undefined8 *)((long)plVar54 + -0xb98) = 0;
        *(undefined8 *)((long)plVar54 + -0xba0) = 0;
        *(undefined8 *)((long)plVar54 + -0xb88) = 0;
        *(undefined8 *)((long)plVar54 + -0xb90) = 0;
        *(undefined8 *)((long)plVar54 + -0xb78) = 0;
        *(undefined8 *)((long)plVar54 + -0xb80) = 0;
        *(undefined8 *)((long)plVar54 + -3000) = 0;
        *(undefined8 *)((long)plVar54 + -0xbc0) = 0;
        func_0x034ba874((undefined1 *)((long)plVar54 + -0xbc0),7,puVar32,puVar32,puVar46,pcVar68,0,
                        uVar78);
        lVar57 = _DAT_059c9978;
        func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xc10),
                        (undefined1 *)((long)plVar54 + -0xbc0),0x50);
        uVar59 = *puVar64;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == lVar57) {
              puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
              goto LAB_0378307c;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(puVar64,lVar57,2);
LAB_0378307c:
        pcVar77 = (code *)*puVar33;
        func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xb60),
                        (undefined1 *)((long)plVar54 + -0xc10),0x50);
        puVar32 = (ulong *)(*pcVar77)(puVar64,(undefined1 *)((long)plVar54 + -0xb60),puVar33[1]);
        return puVar32;
      }
    }
  }
  auVar81 = func_0x0249fb90();
  lVar49 = auVar81._0_8_;
  *(code **)((long)plVar54 + -0xc70) = pcVar77;
  *(undefined8 *)((long)plVar54 + -0xc60) = 0x37830c4;
  *(code **)((long)plVar54 + -0xc58) = pcVar44;
  *(long *)((long)plVar54 + -0xc50) = lVar57;
  *(long **)((long)plVar54 + -0xc48) = plVar53;
  *(long *)((long)plVar54 + -0xc40) = lVar50;
  *(ulong **)((long)plVar54 + -0xc38) = puVar32;
  *(ulong **)((long)plVar54 + -0xc30) = puVar46;
  *(ulong **)((long)plVar54 + -0xc28) = puVar64;
  if ((bRam0000000005e2df9f & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df9f = 1;
  }
  puVar32 = (ulong *)func_0x0376e450(lVar49,puVar51);
  puVar46 = (ulong *)0x0;
  if ((puVar32 == (ulong *)0x0) ||
     (puVar46 = (ulong *)func_0x036e21f8(puVar32,0), ((ulong)puVar46 & 1) == 0)) {
    return puVar46;
  }
  func_0x036d7cb4(puVar32,puVar63,auVar81._8_8_,lVar49,puVar51,0);
  uVar78 = func_0x03530c84(puVar63,0);
  *(undefined8 *)(lVar49 + 0x20) = uVar78;
  *(undefined8 *)((long)plVar54 + -0xd70) = 0;
  *(undefined8 *)((long)plVar54 + -0xcf8) = 0;
  *(undefined8 *)((long)plVar54 + -0xd00) = 0;
  *(undefined8 *)((long)plVar54 + -0xce8) = 0;
  *(undefined8 *)((long)plVar54 + -0xcf0) = 0;
  *(undefined8 *)((long)plVar54 + -0xcd8) = 0;
  *(undefined8 *)((long)plVar54 + -0xce0) = 0;
  *(undefined8 *)((long)plVar54 + -0xcc8) = 0;
  *(undefined8 *)((long)plVar54 + -0xcd0) = 0;
  *(undefined8 *)((long)plVar54 + -0xd08) = 0;
  *(undefined8 *)((long)plVar54 + -0xd10) = 0;
  puVar46 = puVar51;
  puVar64 = puVar51;
  puVar56 = puVar63;
  func_0x034ba874((undefined1 *)((long)plVar54 + -0xd10),0xd);
  lVar57 = _DAT_059c9978;
  if (puVar52 == (ulong *)0x0) {
    uVar78 = 0x3783264;
    auVar94 = func_0x0249fb90();
    puVar26 = (undefined1 *)((long)plVar54 + -0xd70);
  }
  else {
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xd60),(undefined1 *)((long)plVar54 + -0xd10),
                    0x50);
    uVar59 = *puVar52;
    uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == lVar57) {
          puVar32 = (ulong *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
          goto LAB_03783208;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar32 = (ulong *)func_0x024d927c(puVar52,lVar57,2);
LAB_03783208:
    pcVar44 = (code *)*puVar32;
    func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xcc0),(undefined1 *)((long)plVar54 + -0xd60),
                    0x50);
    (*pcVar44)(puVar52,(undefined1 *)((long)plVar54 + -0xcc0),puVar32[1]);
    uVar78 = 0x3783244;
    puVar26 = (undefined1 *)((long)plVar54 + -0xd70);
    puVar46 = puVar52;
    puVar64 = puVar51;
    puVar56 = puVar63;
    auVar94 = auVar81;
  }
SUB_03783264:
  puVar36 = puVar64;
  plVar54 = auVar94._0_8_;
  *(code **)(puVar26 + -0x60) = pcVar77;
  *(undefined8 *)(puVar26 + -0x58) = uVar78;
  *(long **)(puVar26 + -0x50) = plVar71;
  *(ulong **)(puVar26 + -0x48) = puVar65;
  *(ulong **)(puVar26 + -0x40) = puVar55;
  *(code **)(puVar26 + -0x38) = pcVar44;
  *(ulong **)(puVar26 + -0x30) = puVar32;
  *(undefined1 (*) [16])(puVar26 + -0x28) = auVar81;
  *(ulong **)(puVar26 + -0x18) = puVar51;
  *(ulong **)(puVar26 + -0x10) = puVar52;
  *(ulong **)(puVar26 + -8) = puVar63;
  *(ulong **)(puVar26 + -0xb8) = puVar36;
  puVar51 = puVar46;
  puVar63 = puVar36;
  puVar64 = puVar56;
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
  iVar31 = *(int *)(_DAT_059db250 + 0xe4);
  *(undefined8 *)(puVar26 + -0xc0) = 0;
  if (iVar31 == 0) {
    func_0x0249fa64();
  }
  puVar32 = (ulong *)func_0x03773874(puVar26 + -0xb8);
  uVar78 = func_0x0249fb80(_DAT_059c6000);
  auVar96._8_8_ = puVar51;
  auVar96._0_8_ = puVar63;
  if (plVar54 != (long *)0x0) {
    uVar79 = 0;
    func_0x02a9aa34(uVar78,plVar54,*(undefined8 *)(*plVar54 + 0x250));
    uVar35 = _DAT_05a447b8;
    puVar51 = (ulong *)func_0x026ec554(puVar32,uVar78);
    auVar96._8_8_ = uVar35;
    auVar96._0_8_ = uVar79;
    if (puVar51 != (ulong *)0x0) {
      uVar59 = *puVar51;
      uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059ca360) {
            puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
            goto LAB_037833d8;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      uVar35 = 0;
      puVar33 = (undefined8 *)func_0x024d927c(puVar51);
LAB_037833d8:
      puVar32 = (ulong *)(*(code *)*puVar33)(puVar51,puVar33[1]);
      auVar96._8_8_ = uVar35;
      auVar96._0_8_ = uVar79;
      *(ulong **)(puVar26 + -0xc0) = puVar32;
      *(undefined8 *)(puVar26 + -0xd0) = 0;
      *(undefined1 **)(puVar26 + -200) = puVar26 + -0xc0;
      if (puVar32 == (ulong *)0x0) {
LAB_037836dc:
        puVar32 = (ulong *)func_0x0249fb90();
LAB_037836e0:
        puVar56 = (ulong *)0x0;
        puVar33 = (undefined8 *)(puVar26 + -0xc0);
        goto LAB_037836e8;
      }
      puVar55 = (ulong *)&DAT_059df6e0;
      puVar65 = (ulong *)&DAT_059cb6b8;
      plVar71 = (long *)&DAT_059c9978;
      puVar51 = puVar32;
      do {
        uVar78 = auVar96._0_8_;
        uVar59 = *puVar51;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_0378345c;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        uVar35 = 0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar51);
        auVar96._8_8_ = uVar35;
        auVar96._0_8_ = uVar78;
LAB_0378345c:
        puVar32 = (ulong *)(*(code *)*puVar33)(puVar51,puVar33[1]);
        uVar78 = auVar96._0_8_;
        if (((ulong)puVar32 & 1) == 0) goto LAB_037836e0;
        plVar53 = *(long **)(puVar26 + -0xc0);
        if (plVar53 == (long *)0x0) {
          func_0x0249fb90();
          puVar32 = (ulong *)0x0;
          break;
        }
        lVar57 = *plVar53;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059cb6b8) {
              puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_037834c0;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        uVar35 = 0;
        puVar33 = (undefined8 *)func_0x024d927c(plVar53);
        auVar96._8_8_ = uVar35;
        auVar96._0_8_ = uVar78;
LAB_037834c0:
        puVar32 = (ulong *)(*(code *)*puVar33)(plVar53,puVar33[1]);
        lVar57 = func_0x0376e450(plVar54,puVar32);
        if (((lVar57 != 0) && (uVar61 = func_0x036e2208(lVar57,0), (uVar61 & 1) != 0)) &&
           (puVar64 = puVar36, auVar96 = auVar94, uVar61 = func_0x036d7cb4(lVar57,puVar56),
           (uVar61 & 1) != 0)) {
          if (*(int *)(lVar57 + 0x18) == 1) {
            *(undefined8 *)(puVar26 + -0x108) = 0;
            *(undefined8 *)(puVar26 + -0x110) = 0;
            *(undefined8 *)(puVar26 + -0xf8) = 0;
            *(undefined8 *)(puVar26 + -0x100) = 0;
            *(undefined8 *)(puVar26 + -0xe8) = 0;
            *(undefined8 *)(puVar26 + -0xf0) = 0;
            *(undefined8 *)(puVar26 + -0xd8) = 0;
            *(undefined8 *)(puVar26 + -0xe0) = 0;
            *(undefined8 *)(puVar26 + -0x118) = 0;
            *(undefined8 *)(puVar26 + -0x120) = 0;
            *(undefined8 *)(puVar26 + -0x1d0) = 0;
            puVar51 = puVar32;
            puVar63 = puVar32;
            puVar64 = puVar56;
            func_0x034ba874(puVar26 + -0x120,0xe);
            lVar57 = _DAT_059c9978;
            auVar96._8_8_ = puVar51;
            auVar96._0_8_ = puVar63;
            if (puVar46 == (ulong *)0x0) goto LAB_03783780;
            func_0x054ed0d0(puVar26 + -0x1c0,puVar26 + -0x120,0x50);
            uVar59 = *puVar46;
            uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == lVar57) {
                  puVar33 = (undefined8 *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                  goto LAB_037836b0;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar33 = (undefined8 *)func_0x024d927c(puVar46,lVar57,2);
LAB_037836b0:
            pcVar77 = (code *)*puVar33;
            func_0x054ed0d0(puVar26 + -0xb0,puVar26 + -0x1c0,0x50);
            uVar78 = puVar33[1];
            (*pcVar77)(puVar46,puVar26 + -0xb0);
            auVar96._8_8_ = uVar78;
            auVar96._0_8_ = puVar63;
          }
          else if (*(int *)(lVar57 + 0x18) == 2) goto code_r0x03783528;
        }
        puVar51 = *(ulong **)(puVar26 + -0xc0);
        if (puVar51 == (ulong *)0x0) goto LAB_037836dc;
      } while( true );
    }
  }
  func_0x0249fb90();
  goto LAB_0378377c;
code_r0x033c4070:
  uVar61 = (**(code **)(*plVar53 + 0x1b8))(plVar53,auVar81._8_8_,*(undefined8 *)(*plVar53 + 0x1c0));
  if ((uVar61 & 1) == 0) {
LAB_033c4084:
    uVar29 = uVar29 ^ 1;
    func_0x02a5d2cc(puVar26 + -0x50,_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c(puVar26 + -0xb0);
  func_0x0258f7ac(uVar35);
  auVar81 = func_0x022bd790();
  plVar47 = auVar81._8_8_;
  plVar34 = auVar81._0_8_;
  *(undefined8 *)(puVar26 + -0xe0) = 0x33c45c4;
  *(undefined **)(puVar26 + -0xd0) = puVar69;
  *(long **)(puVar26 + -200) = plVar53;
  *(long **)(puVar26 + -0xc0) = plVar54;
  *(undefined8 *)(puVar26 + -0xb8) = uVar35;
  uVar35 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar47 != (long *)0x0) {
    lVar57 = *plVar47;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    uVar78 = 6;
    puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c466c:
    lVar57 = (*(code *)*puVar33)(plVar47,puVar33[1]);
    if (plVar34 != (long *)0x0) {
      lVar49 = *plVar34;
      puVar69 = &DAT_059dfa78;
      uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      uVar78 = 1;
      puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c46d8:
      uVar28 = (*(code *)*puVar33)(plVar34,puVar33[1]);
      uVar35 = 0;
      if (lVar57 != 0) {
        uVar61 = func_0x0387c57c(lVar57,uVar28,0);
        if ((uVar61 & 1) != 0) {
          return (ulong *)0x3;
        }
        lVar49 = *plVar34;
        uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
              puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
        if ((uVar61 & 1) == 0) {
          lVar49 = *plVar34;
          uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
          if (uVar61 != 0) {
            piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
                puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar61 = uVar61 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar61 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
          if ((uVar61 & 1) == 0) {
            lVar49 = *plVar34;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
                  puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dfa78,1);
LAB_033c4814:
            uVar28 = (*(code *)*puVar33)(plVar34,puVar33[1]);
            uVar61 = func_0x0387cc50(lVar57,uVar28,0);
            if ((uVar61 & 1) != 0) {
              return (ulong *)0x2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar51 = (ulong *)0x0;
        uVar61 = func_0x03603060(plVar34,plVar47,1);
        if ((uVar61 & 1) == 0) {
          return (ulong *)0x5;
        }
        lVar49 = *plVar34;
        uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
              puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
        if ((uVar61 & 1) == 0) {
          uVar29 = func_0x033c4128(plVar34,plVar47);
          return (ulong *)(ulong)((uVar29 ^ 0xffffffff) & 1);
        }
        uVar78 = 0x33c48e0;
        puVar26 = puVar26 + -0xe0;
        auVar94 = auVar81;
        goto SUB_033c3e04;
      }
    }
  }
  auVar94 = func_0x0249fb90();
  plVar54 = auVar94._8_8_;
  lVar57 = auVar94._0_8_;
  *(undefined8 *)(puVar26 + -0x100) = 0x33c490c;
  *(undefined8 *)(puVar26 + -0xf8) = uVar35;
  *(undefined1 (*) [16])(puVar26 + -0xf0) = auVar81;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar54 == (long *)0x0) goto LAB_033c4a08;
  lVar49 = *plVar54;
  uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
  if (uVar61 == 0) goto LAB_033c4978;
  piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
  goto LAB_033c4960;
code_r0x03783528:
  *(undefined8 *)(puVar26 + -0x108) = 0;
  *(undefined8 *)(puVar26 + -0x110) = 0;
  *(undefined8 *)(puVar26 + -0xf8) = 0;
  *(undefined8 *)(puVar26 + -0x100) = 0;
  *(undefined8 *)(puVar26 + -0xe8) = 0;
  *(undefined8 *)(puVar26 + -0xf0) = 0;
  *(undefined8 *)(puVar26 + -0xd8) = 0;
  *(undefined8 *)(puVar26 + -0xe0) = 0;
  *(undefined8 *)(puVar26 + -0x118) = 0;
  *(undefined8 *)(puVar26 + -0x120) = 0;
  *(undefined8 *)(puVar26 + -0x1d0) = 0;
  puVar51 = puVar32;
  puVar63 = puVar32;
  puVar64 = puVar56;
  func_0x034ba874(puVar26 + -0x120,0xd);
  lVar57 = _DAT_059c9978;
  auVar96._8_8_ = puVar51;
  auVar96._0_8_ = puVar63;
  if (puVar46 == (ulong *)0x0) {
LAB_0378377c:
    func_0x0249fb90();
LAB_03783780:
    func_0x0249fb90();
    puVar51 = puVar32;
    do {
      auVar80 = func_0x0249fb88(puVar56);
      uVar78 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) {
        func_0x022bd79c(puVar26 + -0xd0);
        func_0x0258f7ac(uVar78);
        auVar81 = func_0x022bd790();
        *(undefined8 *)(puVar26 + -0x210) = 0x37837f8;
        *(ulong **)(puVar26 + -0x200) = puVar51;
        *(undefined1 (*) [16])(puVar26 + -0x1f8) = auVar94;
        *(ulong **)(puVar26 + -0x1e8) = puVar46;
        *(ulong **)(puVar26 + -0x1e0) = puVar36;
        *(undefined8 *)(puVar26 + -0x1d8) = uVar78;
        if ((bRam0000000005e2dfa0 & 1) == 0) {
          func_0x0249f8e4(&DAT_059df8e8);
          bRam0000000005e2dfa0 = 1;
        }
        *(undefined1 *)puVar64 = 0;
        *(undefined8 *)(puVar26 + -0x240) = 0x3783850;
        *(undefined1 (*) [16])(puVar26 + -0x230) = auVar96;
        *(long *)(puVar26 + -0x220) = auVar81._8_8_;
        *(ulong **)(puVar26 + -0x218) = puVar64;
        *(long *)(puVar26 + -0x238) = auVar96._8_8_;
        if ((bRam0000000005e2dfa3 & 1) == 0) {
          func_0x0249f8e4(&DAT_059db250);
          bRam0000000005e2dfa3 = 1;
        }
        uVar61 = func_0x03774280(auVar81._0_8_,auVar96._8_8_);
        if (((uVar61 & 1) == 0) ||
           (uVar61 = func_0x03774280(auVar81._0_8_,auVar96._0_8_), (uVar61 & 1) == 0)) {
          uVar29 = 1;
        }
        else {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar29 = func_0x037737e4(puVar26 + -0x238,auVar96._0_8_);
        }
        return (ulong *)(ulong)(uVar29 & 1);
      }
      puVar33 = (undefined8 *)func_0x054ed080(uVar78);
      puVar56 = (ulong *)*puVar33;
      *(ulong **)(puVar26 + -0xd0) = puVar56;
      puVar32 = (ulong *)func_0x054ed090();
      puVar33 = *(undefined8 **)(puVar26 + -200);
LAB_037836e8:
      uVar78 = auVar96._0_8_;
      puVar36 = (ulong *)*puVar33;
      if (puVar36 != (ulong *)0x0) {
        uVar59 = *puVar36;
        uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059df598) {
              puVar33 = (undefined8 *)(uVar59 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_03783744;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        uVar35 = 0;
        puVar33 = (undefined8 *)func_0x024d927c(puVar36);
        auVar96._8_8_ = uVar35;
        auVar96._0_8_ = uVar78;
LAB_03783744:
        puVar32 = (ulong *)(*(code *)*puVar33)(puVar36,puVar33[1]);
      }
      if (puVar56 == (ulong *)0x0) {
        return puVar32;
      }
    } while( true );
  }
  func_0x054ed0d0(puVar26 + -0x170,puVar26 + -0x120,0x50);
  uVar59 = *puVar46;
  uVar61 = (ulong)*(ushort *)(uVar59 + 0x12e);
  if (uVar61 != 0) {
    piVar62 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
    do {
      if (*(long *)(piVar62 + -2) == lVar57) {
        pcVar44 = (code *)(uVar59 + (long)(*piVar62 + 2) * 0x10 + 0x138);
        goto LAB_03783660;
      }
      uVar61 = uVar61 - 1;
      piVar62 = piVar62 + 4;
    } while (uVar61 != 0);
  }
  pcVar44 = (code *)func_0x024d927c(puVar46,lVar57,2);
LAB_03783660:
  pcVar77 = *(code **)pcVar44;
  func_0x054ed0d0(puVar26 + -0xb0,puVar26 + -0x170,0x50);
  (*pcVar77)(puVar46,puVar26 + -0xb0,*(long *)(pcVar44 + 8));
  uVar78 = 0x378369c;
  puVar26 = puVar26 + -0x1d0;
  puVar64 = puVar32;
  puVar63 = puVar56;
  puVar52 = puVar36;
  puVar51 = puVar46;
  auVar81 = auVar94;
  goto SUB_03783264;
  while( true ) {
    uVar59 = uVar59 - 1;
    piVar62 = piVar62 + 4;
    if (uVar59 == 0) break;
LAB_033c3118:
    if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
      puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059defe8,0xd);
LAB_033c3150:
  lVar57 = (*(code *)*puVar33)(plVar47,uVar61,puVar33[1]);
  if (lVar57 == 0) {
    uVar29 = 0;
  }
  else {
    uVar78 = func_0x0376eb00(puVar55,0);
    *(undefined8 *)((long)plVar54 + -0xa38) = uVar78;
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar29 = func_0x0376edd4((undefined1 *)((long)plVar54 + -0xa38),0);
    uVar29 = uVar29 ^ 1;
  }
  return (ulong *)(ulong)(uVar29 & 1);
  while( true ) {
    uVar61 = uVar61 - 1;
    piVar62 = piVar62 + 4;
    if (uVar61 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
      puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar30 = (*(code *)*puVar33)(plVar53,puVar33[1]);
  return (ulong *)(ulong)(iVar31 == iVar30);
  while( true ) {
    uVar60 = uVar60 - 1;
    piVar62 = piVar62 + 4;
    if (uVar60 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
      puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar33 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059defe8,0x16);
LAB_033c32d8:
  puVar32 = (ulong *)puVar33[1];
  auVar85 = (*(code *)*puVar33)(plVar47,uVar59);
  uVar78 = auVar85._8_8_;
  lVar50 = auVar85._0_8_;
  if (lVar50 == 0) {
    return (ulong *)0x0;
  }
  plVar71 = (long *)&DAT_059db250;
  uVar35 = func_0x0376eb00(lVar57,0);
  *(undefined8 *)((long)plVar54 + -0xaa8) = uVar35;
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar59 = func_0x0376edd4((undefined1 *)((long)plVar54 + -0xaa8),0);
  if ((uVar59 & 1) != 0) {
    return (ulong *)0x0;
  }
  if (plVar34 != (long *)0x0) {
    lVar49 = *plVar34;
    plVar71 = (long *)&DAT_059df8e8;
    uVar59 = (ulong)*(ushort *)(lVar49 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df8e8,5);
LAB_033c3394:
    uVar35 = (*(code *)*puVar33)(plVar34,puVar33[1]);
    puVar32 = (ulong *)0x0;
    uVar59 = func_0x036ec4b4(lVar50,uVar35);
    if ((uVar59 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar78 = func_0x03530158(uVar78,0);
      uVar78 = func_0x03530310(puVar56,uVar78,0);
      lVar49 = *plVar34;
      uVar59 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df8e8,5);
LAB_033c343c:
      puVar32 = (ulong *)(*(code *)*puVar33)(plVar34,puVar33[1]);
      puVar46 = (ulong *)0x0;
      func_0x036e24f4(lVar50,uVar78);
    }
    auVar17._8_8_ = uVar78;
    auVar17._0_8_ = lVar50;
    auVar16._8_8_ = uVar78;
    auVar16._0_8_ = lVar50;
    auVar85._8_8_ = uVar78;
    auVar85._0_8_ = lVar50;
    if (lVar57 != 0) {
      func_0x03785f38(lVar57,*(undefined8 *)((long)plVar54 + -0xaa8),lVar50,puVar56,puVar65,plVar34,
                      0);
      if (((ulong)puVar51 & 1) == 0) {
        return (ulong *)0x1;
      }
      uVar61 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar61,_DAT_05a192a0);
      lVar49 = *plVar34;
      puVar65 = *(ulong **)((long)plVar54 + -0xaa8);
      uVar59 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar78 = (*(code *)*puVar33)(plVar34,puVar33[1]);
      plVar53 = (long *)func_0x036d3908(lVar50,uVar78,0);
      *(undefined8 *)((long)plVar54 + -0xb60) = 0;
      *(undefined8 *)((long)plVar54 + -0xae8) = 0;
      *(undefined8 *)((long)plVar54 + -0xaf0) = 0;
      *(undefined8 *)((long)plVar54 + -0xad8) = 0;
      *(undefined8 *)((long)plVar54 + -0xae0) = 0;
      *(undefined8 *)((long)plVar54 + -0xac8) = 0;
      *(undefined8 *)((long)plVar54 + -0xad0) = 0;
      *(undefined8 *)((long)plVar54 + -0xab8) = 0;
      *(undefined8 *)((long)plVar54 + -0xac0) = 0;
      *(undefined8 *)((long)plVar54 + -0xaf8) = 0;
      *(undefined8 *)((long)plVar54 + -0xb00) = 0;
      puVar32 = puVar65;
      puVar46 = puVar65;
      puVar63 = puVar56;
      func_0x034ba874((undefined1 *)((long)plVar54 + -0xb00),9);
      auVar85 = auVar16;
      if (uVar61 != 0) {
        func_0x054ed0d0((undefined1 *)((long)plVar54 + -0xb50),
                        (undefined1 *)((long)plVar54 + -0xb00),0x50);
        puVar32 = _DAT_05a192a8;
        func_0x025a1da8(uVar61,(undefined1 *)((long)plVar54 + -0xb50));
        lVar50 = *plVar34;
        uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar59 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar59 = uVar59 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar59 != 0);
        }
        puVar32 = (ulong *)0x17;
        puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c35d4:
        plVar48 = (long *)(*(code *)*puVar33)(plVar34,puVar33[1]);
        lVar50 = *plVar47;
        uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar59 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059defe8) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar59 = uVar59 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar59 != 0);
        }
        puVar32 = (ulong *)0x2;
        puVar33 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c3634:
        uVar78 = (*(code *)*puVar33)(plVar47,puVar33[1]);
        plVar34 = (long *)0x0;
        auVar85 = auVar17;
        if (plVar48 != (long *)0x0) {
          lVar57 = *plVar48;
          uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar59 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059e0280) {
                puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar59 = uVar59 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar59 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar33)(plVar48,uVar78,uVar61,puVar33[1]);
          return (ulong *)0x1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar50 = auVar85._8_8_;
  auVar81 = func_0x0249fb90();
  puVar69 = auVar81._8_8_;
  puVar41 = auVar81._0_8_;
  *(undefined8 *)((long)plVar54 + -0xbb0) = 0x33c36d8;
  *(long *)((long)plVar54 + -0xba0) = lVar50;
  *(long *)((long)plVar54 + -0xb98) = auVar85._0_8_;
  *(long *)((long)plVar54 + -0xb90) = lVar57;
  *(ulong **)((long)plVar54 + -0xb88) = puVar65;
  *(ulong *)((long)plVar54 + -0xb80) = uVar61;
  *(ulong **)((long)plVar54 + -0xb78) = puVar56;
  *(long **)((long)plVar54 + -0xb70) = plVar34;
  *(long **)((long)plVar54 + -0xb68) = plVar47;
  puVar70 = (undefined *)0x5e2c000;
  puVar74 = (undefined *)((ulong)puVar46 & 0xffffffff);
  puVar51 = puVar46;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2c3d3 = 1;
  }
  if ((puVar41 != (undefined *)0x0) &&
     (uVar78 = func_0x0376e450(puVar41,puVar69,0), plVar53 != (long *)0x0)) {
    lVar57 = *plVar53;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_033c3798;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059df8e8,5);
LAB_033c3798:
    uVar35 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    uVar29 = func_0x036edd98(uVar78,uVar35,0);
    if ((uVar29 & 1) != 0) {
      if (((ulong)puVar46 & 1) == 0) {
        func_0x03780be8(puVar41,puVar69,puVar32,puVar63,0,plVar53,0);
      }
      else {
        func_0x036eaf0c(uVar78,0);
        func_0x03780be8(puVar41,puVar69,puVar32,puVar63,0,plVar53,0);
        func_0x036eadfc(uVar78,0);
      }
    }
    return (ulong *)(ulong)(uVar29 & 1);
  }
  lVar57 = func_0x0249fb90();
  puVar26 = (undefined1 *)((long)plVar54 + -0xbd0);
  *(undefined8 *)((long)plVar54 + -0xbd0) = 0x33c383c;
  *(ulong **)((long)plVar54 + -0xbc8) = puVar32;
  *(ulong **)((long)plVar54 + -0xbc0) = puVar63;
  *(long **)((long)plVar54 + -3000) = plVar53;
  uVar78 = 0x5e2c000;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar57 != 0) {
    puVar32 = (ulong *)func_0x0367613c(lVar57,0);
    iVar31 = func_0x03676288(lVar57,0);
    if ((puVar32 != (ulong *)0x0) && (*(long *)(lVar57 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar57 + 0x338) + 0x10) = *(int *)((long)puVar32 + 0x24) * iVar31;
      func_0x03675f48(lVar57,iVar31,0);
      if ((iVar31 != 0) || (*(int *)(lVar57 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar32 = (ulong *)func_0x03633f50(lVar57,0);
        if (((ulong)puVar32 & 1) != 0) {
          return puVar32;
        }
      }
      *(undefined4 *)(lVar57 + 0x358) = 0;
      *(undefined8 *)((long)plVar54 + -0xbd0) = *(undefined8 *)((long)plVar54 + -0xbd0);
      *(undefined8 *)((long)plVar54 + -0xbc8) = *(undefined8 *)((long)plVar54 + -0xbc8);
      *(undefined8 *)((long)plVar54 + -0xbc0) = *(undefined8 *)((long)plVar54 + -0xbc0);
      *(undefined8 *)((long)plVar54 + -3000) = *(undefined8 *)((long)plVar54 + -3000);
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      puVar32 = (ulong *)func_0x028a379c(lVar57,_DAT_05a2aaf0);
      *(ulong **)(lVar57 + 0x340) = puVar32;
      return puVar32;
    }
  }
  uVar35 = 0x33c3914;
  auVar86 = func_0x0249fb90();
  if (auVar86._8_8_ != 0) {
    do {
      *(undefined8 *)(puVar26 + -0x20) = uVar35;
      *(ulong **)(puVar26 + -0x18) = puVar32;
      *(undefined8 *)(puVar26 + -0x10) = uVar78;
      *(long *)(puVar26 + -8) = lVar57;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar57 = *(long *)(auVar86._8_8_ + 0x38);
      if (lVar57 != 0) {
        *(int *)(puVar26 + -0x24) = auVar86._0_4_;
        uVar29 = func_0x02893128(lVar57,puVar26 + -0x24,_DAT_05a2a588);
        return (ulong *)(ulong)(uVar29 & 1);
      }
      auVar81 = func_0x0249fb90();
      plVar54 = auVar81._8_8_;
      *(undefined8 *)(puVar26 + -0x50) = 0x387e7ec;
      *(undefined8 *)(puVar26 + -0x48) = 0x5e2e000;
      *(long *)(puVar26 + -0x40) = auVar86._8_8_;
      *(ulong *)(puVar26 + -0x38) = auVar86._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar54 == (long *)0x0) {
        auVar94 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0x70) = 0x387e89c;
        *(undefined8 *)(puVar26 + -0x68) = 0x5e2e000;
        *(undefined8 *)(puVar26 + -0x60) = 0;
        *(long *)(puVar26 + -0x58) = auVar81._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar57 = *(long *)(auVar94._0_8_ + 0xe8);
        if (lVar57 != 0) {
          *(int *)(puVar26 + -0x74) = auVar94._8_4_;
          uVar29 = func_0x02893128(lVar57,puVar26 + -0x74,_DAT_05a2a588);
          return (ulong *)(ulong)(uVar29 & 1);
        }
        auVar81 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0xa0) = 0x387e908;
        *(undefined8 *)(puVar26 + -0x98) = 0x5e2e000;
        *(long *)(puVar26 + -0x90) = auVar94._0_8_;
        *(ulong *)(puVar26 + -0x88) = auVar94._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar57 = *(long *)(auVar81._0_8_ + 0xe8);
        if (lVar57 != 0) {
          *(int *)(puVar26 + -0xa4) = auVar81._8_4_;
          puVar32 = (ulong *)func_0x028926c4(lVar57,puVar26 + -0xa4,_DAT_05a2a578);
          return puVar32;
        }
        lVar57 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0xd0) = 0x387e970;
        *(long *)(puVar26 + -0xc0) = auVar81._0_8_;
        *(ulong *)(puVar26 + -0xb8) = auVar81._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar57 + 0xf0) == 0) {
          puVar32 = (ulong *)0x0;
        }
        else {
          puVar32 = (ulong *)(ulong)*(uint *)(*(long *)(lVar57 + 0xf0) + 0x20);
        }
        return puVar32;
      }
      lVar57 = *plVar54;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfbc0) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar78 = (*(code *)*puVar33)(plVar54,puVar33[1]);
      auVar86._8_8_ = auVar81._0_8_;
      auVar86._0_8_ = uVar78;
      uVar78 = *(undefined8 *)(puVar26 + -0x40);
      lVar57 = *(long *)(puVar26 + -0x38);
      uVar35 = *(undefined8 *)(puVar26 + -0x50);
      puVar32 = *(ulong **)(puVar26 + -0x48);
      puVar26 = puVar26 + -0x30;
    } while( true );
  }
  *(undefined8 *)((long)plVar54 + -0xbe0) = 0x33c3914;
  auVar81 = func_0x0249fb90();
  plVar53 = auVar81._0_8_;
  *(undefined8 *)((long)plVar54 + -0xc10) = 0x33c3934;
  *(undefined **)((long)plVar54 + -0xc00) = puVar69;
  *(ulong **)((long)plVar54 + -0xbf8) = puVar32;
  *(undefined8 *)((long)plVar54 + -0xbf0) = 0x5e2c000;
  *(long *)((long)plVar54 + -0xbe8) = lVar57;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar53 == (long *)0x0) {
    uVar78 = 0x33c3cc8;
    auVar94 = func_0x0249fb90();
  }
  else {
    lVar57 = *plVar53;
    puVar69 = &DAT_059dfa78;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar57 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    if (lVar57 == 0) {
      return (ulong *)0x0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar61 = func_0x035fb854(plVar53,auVar81._8_8_,0);
    if ((uVar61 & 1) == 0) {
      return (ulong *)0x0;
    }
    uVar78 = 0x33c3a24;
    auVar94 = auVar81;
  }
  plVar34 = auVar94._8_8_;
  plVar53 = auVar94._0_8_;
  *(undefined8 *)((long)plVar54 + -0xc30) = uVar78;
  *(undefined8 *)((long)plVar54 + -0xc28) = 0x5e2c000;
  *(undefined1 (*) [16])((long)plVar54 + -0xc20) = auVar81;
  lVar57 = 0x5e2c000;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar53 == (long *)0x0) {
    uVar78 = 0x33c3e04;
    auVar81 = func_0x0249fb90();
    auVar23._8_8_ = 0;
    auVar23._0_8_ = plVar34;
    puVar26 = (undefined1 *)((long)plVar54 + -0xc30);
    auVar94 = auVar23 << 0x40;
SUB_033c3e04:
    plVar54 = auVar81._0_8_;
    *(undefined8 *)(puVar26 + -0x30) = uVar78;
    *(undefined **)(puVar26 + -0x28) = puVar41;
    *(undefined **)(puVar26 + -0x20) = puVar69;
    *(long *)(puVar26 + -0x18) = lVar57;
    *(undefined1 (*) [16])(puVar26 + -0x10) = auVar94;
    puVar66 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)(puVar26 + -0x50) = 0;
    *(undefined8 *)(puVar26 + -0x48) = 0;
    *(undefined8 *)(puVar26 + -0x40) = 0;
    if (plVar54 != (long *)0x0) {
      lVar57 = *plVar54;
      puVar66 = &DAT_059dfa78;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar61 = (*(code *)*puVar33)(plVar54,puVar33[1]);
      if ((uVar61 & 1) == 0) goto LAB_033c40ec;
      lVar57 = *plVar54;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar53 = (long *)(*(code *)*puVar33)(plVar54,auVar81._8_8_,puVar33[1]);
      if (plVar53 != (long *)0x0) {
        lVar57 = *plVar53;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dec98) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dec98,4);
LAB_033c3fac:
        lVar57 = (*(code *)*puVar33)(plVar53,puVar33[1]);
        plVar54 = plVar53;
        if (lVar57 != 0) {
          func_0x028310e8(lVar57,puVar26 + -0x50,_DAT_05a1a750);
          puVar69 = &DAT_05a047f0;
          puVar41 = &DAT_05a047f8;
          *(undefined8 *)(puVar26 + -0x60) = 0;
          *(undefined1 **)(puVar26 + -0x58) = puVar26 + -0x50;
LAB_033c3fe8:
          uVar29 = func_0x02a5d2d0(puVar26 + -0x50,_DAT_05a047f0);
          lVar57 = _DAT_05a047f8;
          plVar54 = (long *)(ulong)uVar29;
          if ((uVar29 & 1) == 0) goto LAB_033c4084;
          lVar40 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar4 = *(ushort *)(lVar40 + 0x135);
          lVar49 = lVar40;
          if ((uVar4 & 1) == 0) {
            lVar49 = func_0x024d8f40();
            lVar40 = *(long *)(lVar57 + 0x20);
            uVar4 = *(ushort *)(lVar40 + 0x135);
          }
          puVar66 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar49 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar4 & 1) == 0) {
            lVar40 = func_0x024d8f40();
          }
          uVar78 = func_0x0249f90c(puVar26 + -0x50,
                                   *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0(puVar26 + -0x38,uVar78,puVar66);
          plVar53 = *(long **)(puVar26 + -0x38);
          if (plVar53 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar80 = func_0x0249fb90();
    uVar78 = auVar80._0_8_;
    if (auVar80._8_4_ == 1) {
      plVar53 = (long *)func_0x054ed080(uVar78);
      lVar57 = *plVar53;
      *(long *)(puVar26 + -0x60) = lVar57;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)(puVar26 + -0x58),_DAT_05a047e8);
      if (lVar57 == 0) {
LAB_033c40ec:
        uVar29 = 1;
LAB_033c40f0:
        return (ulong *)(ulong)(uVar29 & 1);
      }
      uVar78 = func_0x0249fb88(lVar57);
    }
    func_0x022c29f0(puVar26 + -0x60);
    func_0x0258f7ac(uVar78);
    auVar81 = func_0x022bd790();
    plVar34 = auVar81._8_8_;
    plVar53 = auVar81._0_8_;
    *(undefined8 *)(puVar26 + -0xa0) = 0x33c4128;
    *(undefined **)(puVar26 + -0x90) = puVar74;
    *(undefined **)(puVar26 + -0x88) = puVar41;
    *(undefined **)(puVar26 + -0x80) = puVar69;
    *(undefined **)(puVar26 + -0x78) = puVar66;
    *(long **)(puVar26 + -0x70) = plVar54;
    *(undefined8 *)(puVar26 + -0x68) = uVar78;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar69 = (undefined *)0x0;
    *(undefined8 *)(puVar26 + -0x98) = 0;
    if ((plVar53 != (long *)0x0) && (plVar34 != (long *)0x0)) {
      lVar57 = *plVar34;
      uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059e0220,6);
LAB_033c4208:
      lVar57 = (*(code *)*puVar33)(plVar34,puVar33[1]);
      lVar49 = *plVar53;
      puVar69 = &DAT_059dfa78;
      uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
      if (uVar61 != 0) {
        piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
            puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar61 = uVar61 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar61 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar78 = puVar33[1];
      plVar54 = (long *)(*(code *)*puVar33)(plVar53,plVar34);
      if (plVar54 != (long *)0x0) {
        lVar49 = *plVar54;
        uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059ca7c8) {
              puVar33 = (undefined8 *)(lVar49 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        uVar78 = 0;
        puVar33 = (undefined8 *)func_0x024d927c(plVar54);
LAB_033c42e4:
        plVar34 = (long *)(*(code *)*puVar33)(plVar54,puVar33[1]);
        *(long **)(puVar26 + -0x98) = plVar34;
        *(undefined8 *)(puVar26 + -0xb0) = 0;
        *(undefined1 **)(puVar26 + -0xa8) = puVar26 + -0x98;
        if (plVar34 != (long *)0x0) {
          puVar41 = &DAT_059df6e0;
          puVar74 = &DAT_059cbb20;
          do {
            lVar49 = *plVar34;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059df6e0) {
                  puVar33 = (undefined8 *)(lVar49 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            uVar78 = 0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033c4360:
            uVar61 = (*(code *)*puVar33)(plVar34,puVar33[1]);
            plVar54 = (long *)(uVar61 & 0xffffffff);
            if ((uVar61 & 1) == 0) goto LAB_033c44b8;
            plVar53 = *(long **)(puVar26 + -0x98);
            if (plVar53 == (long *)0x0) {
              func_0x0249fb90();
              plVar53 = (long *)0x0;
LAB_033c4550:
              auVar87 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar87._0_8_,auVar87._8_8_);
              goto LAB_033c4558;
            }
            lVar49 = *plVar53;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059cbb20) {
                  puVar33 = (undefined8 *)(lVar49 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            uVar78 = 0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_033c43c8:
            plVar53 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
            if (plVar53 == (long *)0x0) goto LAB_033c4550;
            lVar49 = *plVar53;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
                  puVar33 = (undefined8 *)(lVar49 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            uVar78 = 0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_033c4428:
            iVar31 = (*(code *)*puVar33)(plVar53,puVar33[1]);
            if (iVar31 != 0) {
              lVar49 = *plVar53;
              uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
              if (uVar61 != 0) {
                piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
                    puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar61 = uVar61 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar61 != 0);
              }
              uVar78 = 1;
              puVar33 = (undefined8 *)func_0x024d927c(plVar53);
LAB_033c4488:
              uVar61 = (*(code *)*puVar33)(plVar53,puVar33[1]);
              auVar87._8_8_ = uVar61 & 0xffffffff;
              auVar87._0_8_ = uVar61;
              if (lVar57 == 0) goto LAB_033c4554;
              uVar78 = 0;
              uVar61 = func_0x0387cc50(lVar57);
              if ((uVar61 & 1) == 0) goto LAB_033c44b8;
            }
            plVar34 = *(long **)(puVar26 + -0x98);
            plVar54 = (long *)0x0;
          } while (plVar34 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar57 = 0;
        puVar69 = (undefined *)(ulong)((uint)plVar54 ^ 1);
        puVar33 = (undefined8 *)(puVar26 + -0x98);
        do {
          plVar54 = (long *)*puVar33;
          if (plVar54 != (long *)0x0) {
            lVar49 = *plVar54;
            uVar61 = (ulong)*(ushort *)(lVar49 + 0x12e);
            if (uVar61 != 0) {
              piVar62 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
              do {
                if (*(long *)(piVar62 + -2) == _DAT_059df598) {
                  puVar33 = (undefined8 *)(lVar49 + (long)*piVar62 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar61 = uVar61 - 1;
                piVar62 = piVar62 + 4;
              } while (uVar61 != 0);
            }
            uVar78 = 0;
            puVar33 = (undefined8 *)func_0x024d927c(plVar54);
LAB_033c4520:
            (*(code *)*puVar33)(plVar54,puVar33[1]);
          }
          if (lVar57 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar80 = func_0x0249fb88(lVar57);
          uVar35 = auVar80._0_8_;
          if (auVar80._8_4_ != 1) goto LAB_033c45b0;
          plVar54 = (long *)func_0x054ed080(uVar35);
          lVar57 = *plVar54;
          *(long *)(puVar26 + -0xb0) = lVar57;
          func_0x054ed090();
          puVar33 = *(undefined8 **)(puVar26 + -0xa8);
          puVar69 = (undefined *)0x1;
        } while( true );
      }
      puVar69 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong *)(ulong)((uint)puVar69 & 1);
  }
  lVar57 = *plVar53;
  uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
  if (uVar61 != 0) {
    piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
    do {
      if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
        puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar61 = uVar61 - 1;
      piVar62 = piVar62 + 4;
    } while (uVar61 != 0);
  }
  puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar61 = (*(code *)*puVar33)(plVar53,puVar33[1]);
  if ((uVar61 & 1) != 0) {
    lVar57 = *plVar53;
    uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar61 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar61 = uVar61 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar61 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
    uVar78 = func_0x033c88e0(uVar78,plVar34,0,0);
    uVar61 = func_0x033c9114(uVar78,plVar34);
    if ((uVar61 & 1) == 0) {
      *(undefined8 *)((long)plVar54 + -0xc60) = *(undefined8 *)((long)plVar54 + -0xc30);
      *(undefined **)((long)plVar54 + -0xc58) = puVar73;
      *(long *)((long)plVar54 + -0xc50) = lVar50;
      *(undefined8 *)((long)plVar54 + -0xc48) = 0x5e2c000;
      *(undefined **)((long)plVar54 + -0xc40) = puVar74;
      *(undefined **)((long)plVar54 + -0xc38) = puVar41;
      *(undefined **)((long)plVar54 + -0xc30) = puVar69;
      *(undefined8 *)((long)plVar54 + -0xc28) = *(undefined8 *)((long)plVar54 + -0xc28);
      *(undefined8 *)((long)plVar54 + -0xc20) = *(undefined8 *)((long)plVar54 + -0xc20);
      *(undefined8 *)((long)plVar54 + -0xc18) = *(undefined8 *)((long)plVar54 + -0xc18);
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar53 != (long *)0x0) {
        lVar57 = *plVar53;
        uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
              puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar78 = (*(code *)*puVar33)(plVar53,puVar33[1]);
        lVar57 = func_0x033c97d4(uVar78,plVar34);
        if (lVar57 != 0) {
          uVar29 = *(uint *)(lVar57 + 0x18);
          if (0 < (int)uVar29) {
            if (plVar34 == (long *)0x0) goto LAB_033ca068;
            uVar61 = 0;
            do {
              lVar50 = *plVar34;
              uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
              if (uVar59 != 0) {
                piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
                    puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar59 = uVar59 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar59 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059e0220,6);
LAB_033c9f74:
              lVar50 = (*(code *)*puVar33)(plVar34,puVar33[1]);
              if (*(uint *)(lVar57 + 0x18) <= uVar61) goto LAB_033ca06c;
              plVar71 = (long *)(lVar57 + uVar61 * 8 + 0x20);
              lVar49 = *plVar71;
              if ((lVar49 == 0) || (uVar28 = func_0x0353efa0(lVar49,0), lVar50 == 0))
              goto LAB_033ca068;
              uVar59 = func_0x0387cc50(lVar50,uVar28,0);
              if ((uVar59 & 1) == 0) {
                if (*(uint *)(lVar57 + 0x18) <= uVar61) goto LAB_033ca06c;
                lVar57 = *plVar71;
                if (lVar57 == 0) goto LAB_033ca068;
                iVar31 = func_0x0353efa0(lVar57,0);
                lVar57 = *plVar53;
                uVar61 = (ulong)*(ushort *)(lVar57 + 0x12e);
                if (uVar61 == 0) goto LAB_033ca020;
                piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar61 = uVar61 + 1;
            } while (uVar61 != uVar29);
          }
          return (ulong *)0x0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar81 = func_0x0249fb98();
      *(undefined8 *)((long)plVar54 + -0xc70) = 0x33ca070;
      *(long **)((long)plVar54 + -0xc68) = plVar53;
      uVar78 = func_0x033c88e0(auVar81._0_8_,auVar81._8_8_,0,0);
      puVar32 = (ulong *)func_0x033c7ab8(uVar78,auVar81._8_8_);
      return puVar32;
    }
  }
  return (ulong *)0x1;
  while( true ) {
    uVar61 = uVar61 - 1;
    piVar62 = piVar62 + 4;
    if (uVar61 == 0) break;
LAB_033c4960:
    if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
      puVar33 = (undefined8 *)(lVar49 + (long)(*piVar62 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar78 = 6;
  puVar33 = (undefined8 *)func_0x024d927c(plVar54);
LAB_033c4998:
  lVar49 = (*(code *)*puVar33)(plVar54,puVar33[1]);
  if ((lVar57 != 0) && (plVar54 = (long *)0x0, lVar49 != 0)) {
    uVar61 = func_0x0387c57c(lVar49,*(undefined4 *)(lVar57 + 0x10),0);
    if ((uVar61 & 1) == 0) {
      puVar32 = (ulong *)0x2;
    }
    else {
      uVar61 = func_0x0353f618(lVar57,0);
      if (((uVar61 & 1) == 0) &&
         (uVar61 = func_0x0387cc50(lVar49,*(undefined4 *)(lVar57 + 0x10),0), (uVar61 & 1) != 0)) {
        puVar32 = (ulong *)0x1;
      }
      else {
        puVar32 = (ulong *)0x0;
      }
    }
    return puVar32;
  }
LAB_033c4a08:
  auVar81 = func_0x0249fb90();
  *(code **)(puVar26 + -0x160) = pcVar77;
  *(undefined8 *)(puVar26 + -0x158) = 0x33c4a0c;
  *(long **)(puVar26 + -0x150) = plVar71;
  *(undefined **)(puVar26 + -0x148) = puVar73;
  *(long *)(puVar26 + -0x140) = lVar50;
  *(undefined8 *)(puVar26 + -0x138) = 0x5e2c000;
  *(undefined **)(puVar26 + -0x130) = puVar74;
  *(undefined **)(puVar26 + -0x128) = puVar41;
  *(undefined **)(puVar26 + -0x120) = puVar69;
  *(undefined8 *)(puVar26 + -0x118) = 0x5e2c000;
  *(long **)(puVar26 + -0x110) = plVar54;
  *(long *)(puVar26 + -0x108) = lVar57;
  plVar54 = (long *)0x5e2c000;
  uVar61 = auVar81._0_8_ & 0xffffffff;
  puVar32 = puVar51;
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
  puVar26[-0x16c] = 0;
  *(undefined8 *)(puVar26 + -0x180) = 0;
  *(undefined8 *)(puVar26 + -0x178) = 0;
  *(undefined8 *)(puVar26 + -400) = 0;
  *(undefined8 *)(puVar26 + -0x188) = 0;
  *(undefined8 *)(puVar26 + -0x1a0) = 0;
  *(undefined8 *)(puVar26 + -0x198) = 0;
  *(undefined8 *)(puVar26 + -0x1c0) = 0;
  *(undefined8 *)(puVar26 + -0x1b8) = 0;
  *(undefined8 *)(puVar26 + -0x1b0) = 0;
  *(undefined8 *)(puVar26 + -0x1c8) = 0;
  if (puVar51 == (ulong *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar78 = func_0x0249fb88(uVar78);
    func_0x022c29f0(puVar26 + -0x1e0);
    func_0x0258f7ac(uVar78);
    uVar35 = 0x33c5404;
    auVar88 = func_0x022bd790();
    puVar73 = puVar74;
  }
  else {
    uVar60 = *puVar51;
    uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(uVar60 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar51,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar53 = (long *)(*(code *)*puVar33)(puVar51,puVar33[1]);
    if (plVar53 == (long *)0x0) goto LAB_033c53e0;
    lVar57 = *plVar53;
    uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar54 = (long *)(*(code *)*puVar33)(plVar53,puVar33[1]);
    uVar60 = *puVar51;
    uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
          puVar33 = (undefined8 *)(uVar60 + (long)(*piVar62 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar51,_DAT_059e0220,6);
LAB_033c4cac:
    puVar73 = (undefined *)(*(code *)*puVar33)(puVar51,puVar33[1]);
    if (plVar54 == (long *)0x0) goto LAB_033c53e0;
    lVar57 = *plVar54;
    puVar70 = &DAT_059cd750;
    uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059cd750) {
          puVar33 = (undefined8 *)(lVar57 + (long)*piVar62 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059cd750,0);
LAB_033c4d14:
    uVar59 = (*(code *)*puVar33)(plVar54,uVar61,puVar33[1]);
    if ((uVar59 & 1) == 0) {
      return (ulong *)0x4;
    }
    puVar74 = puVar73;
    if (puVar73 == (undefined *)0x0) goto LAB_033c53e0;
    uVar59 = func_0x0387c57c(puVar73,uVar61,0);
    if ((uVar59 & 1) == 0) {
      return (ulong *)0x1;
    }
    lVar57 = *plVar54;
    uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059cd750) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059cd750,2);
LAB_033c4da0:
    uVar61 = (*(code *)*puVar33)(plVar54,uVar61,puVar33[1]);
    auVar88._8_8_ = puVar51;
    auVar88._0_8_ = uVar61;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar59 = func_0x035fb854(uVar61,puVar51,0);
    if ((uVar59 & 1) == 0) {
      return (ulong *)0x3;
    }
    puVar26[-0x16c] = 0;
    if (uVar61 == 0) goto LAB_033c53e0;
    uVar59 = func_0x0353f608(uVar61,0);
    if (((uVar59 & 1) != 0) || (uVar59 = func_0x0353f618(uVar61,0), (uVar59 & 1) != 0)) {
      plVar54 = *(long **)(uVar61 + 0x28);
      if (plVar54 == (long *)0x0) {
LAB_033c52d0:
        uVar29 = 0;
        if (puVar26[-0x16c] != '\0') {
          uVar29 = 6;
        }
        return (ulong *)(ulong)uVar29;
      }
      uVar29 = *(uint *)(plVar54 + 3);
      puVar74 = (undefined *)(ulong)uVar29;
      if ((int)uVar29 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar70 = _DAT_059f5cd8;
      lVar57 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
        lVar57 = func_0x024d8f40();
      }
      lVar57 = *(long *)(*(long *)(lVar57 + 0xc0) + 8);
      if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
        lVar57 = func_0x024d8f40();
      }
      if (*(int *)(lVar57 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar57 = *(long *)(puVar70 + 0x20);
      if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
        lVar57 = func_0x024d8f40();
      }
      lVar57 = *(long *)(*(long *)(lVar57 + 0xc0) + 8);
      if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
        lVar57 = func_0x024d8f40();
      }
      plVar53 = (long *)**(long **)(lVar57 + 0xb8);
      if (plVar53 != (long *)0x0) {
        puVar70 = (undefined *)
                  (**(code **)(*plVar53 + 0x178))(plVar53,puVar74,*(undefined8 *)(*plVar53 + 0x180))
        ;
        *(undefined **)(puVar26 + -0x178) = puVar70;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar50 = _DAT_059f5d10;
        lVar57 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        lVar57 = *(long *)(*(long *)(lVar57 + 0xc0) + 8);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        if (*(int *)(lVar57 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar57 = *(long *)(lVar50 + 0x20);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        lVar57 = *(long *)(*(long *)(lVar57 + 0xc0) + 8);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        plVar53 = (long *)**(long **)(lVar57 + 0xb8);
        if (plVar53 != (long *)0x0) {
          uVar35 = (**(code **)(*plVar53 + 0x178))(plVar53,uVar29,*(undefined8 *)(*plVar53 + 0x180))
          ;
          *(undefined8 *)(puVar26 + -0x1e0) = 0;
          *(undefined1 **)(puVar26 + -0x1d8) = puVar26 + -0x180;
          *(undefined8 *)(puVar26 + -0x180) = uVar35;
          *(undefined1 **)(puVar26 + -0x1d0) = puVar26 + -0x178;
          auVar94 = func_0x028ff200(puVar70,_DAT_05a2eda0);
          auVar82 = func_0x028ff200(*(undefined8 *)(puVar26 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar31 = func_0x035fdf8c(plVar54,auVar94._0_8_,auVar94._8_8_,auVar82._0_8_,auVar82._8_8_,0
                                  );
          if (0 < iVar31) {
            uVar35 = *(undefined8 *)(puVar26 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc(puVar26 + -400,uVar35,0,iVar31,_DAT_059f5d38);
            uVar35 = *(undefined8 *)(puVar26 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc(puVar26 + -0x1a0,uVar35,0,iVar31,_DAT_059f5d98);
            auVar94 = func_0x028ff244(*(undefined8 *)(puVar26 + -400),
                                      *(undefined8 *)(puVar26 + -0x188),_DAT_05a2ed98);
            auVar82 = func_0x028ff244(*(undefined8 *)(puVar26 + -0x1a0),
                                      *(undefined8 *)(puVar26 + -0x198),_DAT_05a2f0a8);
            uVar61 = func_0x033bae94(puVar51,auVar81._8_8_,uVar78,auVar94._0_8_,auVar94._8_8_,
                                     auVar82._0_8_,auVar82._8_8_,puVar26 + -0x16c);
            if ((uVar61 & 1) == 0) {
              func_0x02408624(puVar26 + -0x1e0);
              return (ulong *)0x2;
            }
          }
          func_0x02408624(puVar26 + -0x1e0);
          func_0x028310e8(plVar54,puVar26 + -0x1e0,_DAT_05a1a750);
          *(undefined8 *)(puVar26 + -0x1b8) = *(undefined8 *)(puVar26 + -0x1d8);
          *(undefined8 *)(puVar26 + -0x1c0) = *(undefined8 *)(puVar26 + -0x1e0);
          *(undefined8 *)(puVar26 + -0x1b0) = *(undefined8 *)(puVar26 + -0x1d0);
          *(undefined8 *)(puVar26 + -0x1e0) = 0;
          *(undefined1 **)(puVar26 + -0x1d8) = puVar26 + -0x1c0;
          while (uVar61 = func_0x02a5d2d0(puVar26 + -0x1c0,_DAT_05a047f0), lVar57 = _DAT_05a047f8,
                (uVar61 & 1) != 0) {
            lVar49 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar4 = *(ushort *)(lVar49 + 0x135);
            lVar50 = lVar49;
            if ((uVar4 & 1) == 0) {
              lVar50 = func_0x024d8f40();
              lVar49 = *(long *)(lVar57 + 0x20);
              uVar4 = *(ushort *)(lVar49 + 0x135);
            }
            uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar50 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar49 = func_0x024d8f40();
            }
            uVar78 = func_0x0249f90c(puVar26 + -0x1c0,
                                     *(long *)(*(long *)(*(long *)(lVar49 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0(puVar26 + -0x168,uVar78,uVar28);
            plVar54 = *(long **)(puVar26 + -0x168);
            if (plVar54 != (long *)0x0) {
              lVar57 = *plVar54;
              if (((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar57 + 0x130)) &&
                  (*(long *)(*(long *)(lVar57 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                            -8) == _DAT_059db3a0)) &&
                 (uVar61 = (**(code **)(lVar57 + 0x1b8))
                                     (plVar54,puVar51,*(undefined8 *)(lVar57 + 0x1c0)),
                 (uVar61 & 1) == 0)) {
                func_0x02a5d2cc(puVar26 + -0x1c0,_DAT_05a047e8);
                return (ulong *)0x5;
              }
            }
          }
          func_0x02a5d2cc(puVar26 + -0x1c0,_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar59 = func_0x0353f5f8(uVar61,0);
    if ((uVar59 & 1) == 0) {
      uVar59 = func_0x0353f628(uVar61,0);
      if (((uVar59 & 1) != 0) || (uVar59 = func_0x0353f638(uVar61,0), (uVar59 & 1) != 0)) {
        return (ulong *)0x3;
      }
      uVar59 = func_0x0353f648(uVar61,0);
      if ((uVar59 & 1) == 0) {
        uVar59 = func_0x0353f658(uVar61,0);
        if ((uVar59 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar59 = func_0x03600068(uVar61,puVar26 + -0x1c8,0);
        if ((uVar59 & 1) == 0) goto LAB_033c52d0;
        lVar57 = func_0x022bffa8(6,_DAT_059e0220,puVar51);
        if (*(long *)(puVar26 + -0x1c8) != 0) {
          uVar35 = func_0x03693f98(*(long *)(puVar26 + -0x1c8),0);
          uVar78 = 0;
          if (lVar57 != 0) {
            uVar61 = func_0x03887158(lVar57,puVar51,uVar35,0);
            if ((uVar61 & 1) != 0) {
              return (ulong *)0x3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar57 = func_0x022bffa8(6,_DAT_059e0220,puVar51);
        if (lVar57 != 0) {
          uVar61 = func_0x03884e60(lVar57,*(undefined4 *)(uVar61 + 0x10),0,0);
          if ((uVar61 & 1) == 0) {
            return (ulong *)0x3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar35 = 0x33c52cc;
  }
  plVar71 = auVar88._8_8_;
  plVar53 = auVar88._0_8_;
  *(undefined8 *)(puVar26 + -0x210) = uVar35;
  *(long *)(puVar26 + -0x208) = auVar81._8_8_;
  *(undefined8 *)(puVar26 + -0x200) = uVar78;
  *(ulong **)(puVar26 + -0x1f8) = puVar51;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar78 = 0;
  *(undefined8 *)(puVar26 + -0x220) = 0;
  *(undefined8 *)(puVar26 + -0x218) = 0;
  uVar59 = func_0x036a531c(plVar53,plVar71);
  if ((uVar59 & 1) == 0) {
    return (ulong *)0x0;
  }
  if (plVar53 != (long *)0x0) {
    lVar57 = *plVar53;
    uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059dfa78) {
          puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(plVar53,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar78 = puVar33[1];
    plVar34 = (long *)(*(code *)*puVar33)(plVar53,plVar71);
    if (plVar71 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar71 + 0x130)) &&
          (*(long *)(*(long *)(*plVar71 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar53 = (long *)0x0, plVar34 != (long *)0x0)) {
        lVar50 = *plVar34;
        lVar57 = plVar71[0x9c];
        uVar61 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar61 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059dec98) {
              puVar33 = (undefined8 *)(lVar50 + (long)(*piVar62 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar61 = uVar61 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar61 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar81 = (*(code *)*puVar33)(plVar34,plVar71,(char)lVar57 != '\0',puVar33[1]);
        *(undefined1 (*) [16])(puVar26 + -0x220) = auVar81;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar57 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar57 + 0x135) & 1) == 0) {
          lVar57 = func_0x024d8f40();
        }
        pcVar43 = (char *)func_0x0249f90c(puVar26 + -0x220,
                                          *(long *)(**(long **)(lVar57 + 0xc0) + 0x80) + 0x20);
        return (ulong *)(ulong)(*pcVar43 == '\0');
      }
    }
  }
  auVar81 = func_0x0249fb90();
  *(undefined8 *)(puVar26 + -0x270) = 0x33c5620;
  *(long *)(puVar26 + -0x260) = lVar50;
  *(undefined **)(puVar26 + -600) = puVar70;
  *(undefined **)(puVar26 + -0x250) = puVar73;
  *(long **)(puVar26 + -0x248) = plVar54;
  *(ulong *)(puVar26 + -0x240) = uVar61;
  *(undefined8 *)(puVar26 + -0x238) = 0x5e2c000;
  *(long **)(puVar26 + -0x230) = plVar53;
  *(long **)(puVar26 + -0x228) = plVar71;
  uVar61 = auVar81._0_8_ & 0xffffffff;
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
  puVar26[-0x268] = 0;
  *(undefined8 *)(puVar26 + -0x278) = 0;
  if (puVar32 != (ulong *)0x0) {
    uVar60 = *puVar32;
    uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar59 != 0) {
      piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar62 + -2) == _DAT_059df8e8) {
          puVar33 = (undefined8 *)(uVar60 + (long)(*piVar62 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar59 = uVar59 - 1;
        piVar62 = piVar62 + 4;
      } while (uVar59 != 0);
    }
    puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059df8e8,5);
LAB_033c5714:
    plVar54 = (long *)(*(code *)*puVar33)(puVar32,puVar33[1]);
    if (plVar54 != (long *)0x0) {
      lVar57 = *plVar54;
      uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059dfe60) {
            puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar54 = (long *)(*(code *)*puVar33)(plVar54,puVar33[1]);
      uVar60 = *puVar32;
      uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar59 != 0) {
        piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
            puVar33 = (undefined8 *)(uVar60 + (long)(*piVar62 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar59 = uVar59 - 1;
          piVar62 = piVar62 + 4;
        } while (uVar59 != 0);
      }
      puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059e0220,6);
LAB_033c57e8:
      lVar57 = (*(code *)*puVar33)(puVar32,puVar33[1]);
      if (plVar54 != (long *)0x0) {
        lVar50 = *plVar54;
        uVar59 = (ulong)*(ushort *)(lVar50 + 0x12e);
        if (uVar59 != 0) {
          piVar62 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
          do {
            if (*(long *)(piVar62 + -2) == _DAT_059cd750) {
              puVar33 = (undefined8 *)(lVar50 + (long)*piVar62 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar59 = uVar59 - 1;
            piVar62 = piVar62 + 4;
          } while (uVar59 != 0);
        }
        puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059cd750,0);
LAB_033c5850:
        uVar59 = (*(code *)*puVar33)(plVar54,uVar61,puVar33[1]);
        if ((uVar59 & 1) == 0) {
          return (ulong *)0x4;
        }
        if (lVar57 != 0) {
          uVar59 = func_0x0387c57c(lVar57,uVar61,0);
          if ((uVar59 & 1) == 0) {
            return (ulong *)0x1;
          }
          lVar57 = *plVar54;
          uVar59 = (ulong)*(ushort *)(lVar57 + 0x12e);
          if (uVar59 != 0) {
            piVar62 = (int *)(*(long *)(lVar57 + 0xb0) + 8);
            do {
              if (*(long *)(piVar62 + -2) == _DAT_059cd750) {
                puVar33 = (undefined8 *)(lVar57 + (long)(*piVar62 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar59 = uVar59 - 1;
              piVar62 = piVar62 + 4;
            } while (uVar59 != 0);
          }
          puVar33 = (undefined8 *)func_0x024d927c(plVar54,_DAT_059cd750,2);
LAB_033c58dc:
          lVar57 = (*(code *)*puVar33)(plVar54,uVar61,puVar33[1]);
          if (lVar57 != 0) {
            uVar59 = func_0x0353f648(lVar57,0);
            if ((uVar59 & 1) == 0) {
              uVar61 = func_0x0353f658(lVar57,0);
              if ((uVar61 & 1) == 0) {
                return (ulong *)0x3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar61 = func_0x03600068(lVar57,puVar26 + -0x278,0);
              if ((uVar61 & 1) == 0) {
                return (ulong *)0x3;
              }
              lVar57 = func_0x022bffa8(6,_DAT_059e0220,puVar32);
              if (*(long *)(puVar26 + -0x278) != 0) {
                uVar35 = func_0x03693f98(*(long *)(puVar26 + -0x278),0);
                uVar78 = 0;
                if (lVar57 != 0) {
                  func_0x03887758(lVar57,puVar32,uVar35,0);
                  return (ulong *)0x3;
                }
              }
            }
            else {
              uVar60 = *puVar32;
              uVar59 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar59 != 0) {
                piVar62 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar62 + -2) == _DAT_059e0220) {
                    puVar33 = (undefined8 *)(uVar60 + (long)(*piVar62 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar59 = uVar59 - 1;
                  piVar62 = piVar62 + 4;
                } while (uVar59 != 0);
              }
              puVar33 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059e0220,6);
LAB_033c59d0:
              lVar57 = (*(code *)*puVar33)(puVar32,puVar33[1]);
              if (lVar57 != 0) {
                lVar57 = func_0x03885c68(lVar57,puVar32,uVar61,0);
                if (lVar57 == 0) {
                  return (ulong *)0x3;
                }
                lVar50 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar57 + 0x10) != 0) {
                  plVar54 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar28 = *(undefined4 *)(plVar54[1] + 0xfc);
                  uVar35 = func_0x0249f90c(*(long *)(lVar57 + 0x10),*(undefined8 *)(*plVar54 + 0x80)
                                          );
                  func_0x054ed0d0(puVar26 + -0x264,uVar35,uVar28);
                  uVar35 = _DAT_059d7518;
                  if (lVar50 != 0) {
                    if (*(int *)(lVar50 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar50 + 0x20) = *(undefined4 *)(puVar26 + -0x264);
                    lVar57 = func_0x0249f9d4(uVar35,1);
                    if (lVar57 != 0) {
                      if (*(int *)(lVar57 + 0x18) != 0) {
                        *(undefined4 *)(lVar57 + 0x20) = 1;
                        uVar61 = func_0x033bacb8(puVar32,auVar81._8_8_,uVar78,lVar50,lVar57,
                                                 puVar26 + -0x268);
                        if ((uVar61 & 1) == 0) {
                          return (ulong *)0x2;
                        }
                        uVar29 = 0;
                        if (puVar26[-0x268] != '\0') {
                          uVar29 = 6;
                        }
                        return (ulong *)(ulong)uVar29;
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
  lVar57 = func_0x0249fb98();
  if (lVar57 != 0) {
    return (ulong *)(ulong)*(byte *)(lVar57 + 0x4e0);
  }
  *(undefined8 *)(puVar26 + -0x290) = 0x33c5ae8;
  auVar94 = func_0x0249fb90();
  *(undefined8 *)(puVar26 + -0x2b0) = 0x33c5afc;
  *(long *)(puVar26 + -0x2a8) = auVar81._8_8_;
  *(undefined8 *)(puVar26 + -0x2a0) = uVar78;
  *(ulong **)(puVar26 + -0x298) = puVar32;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)(puVar26 + -0x2c0) = 0;
  lVar50 = func_0x033c5be8(auVar94._0_8_,auVar94._8_8_);
  lVar57 = _DAT_05a27d90;
  if (lVar50 == 0) {
    uVar78 = 0;
    *(undefined8 *)(puVar26 + -0x2c0) = 0;
  }
  else {
    uVar78 = *(undefined8 *)(lVar50 + 0x10);
  }
  *(undefined8 *)(puVar26 + -0x2c0) = uVar78;
  lVar49 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar4 = *(ushort *)(lVar49 + 0x135);
  lVar50 = lVar49;
  if ((uVar4 & 1) == 0) {
    lVar49 = func_0x024d8f40(lVar49);
    uVar4 = *(ushort *)(*(long *)(lVar57 + 0x20) + 0x135);
    lVar50 = *(long *)(lVar57 + 0x20);
  }
  uVar28 = *(undefined4 *)(**(long **)(lVar49 + 0xc0) + 0xfc);
  if ((uVar4 & 1) == 0) {
    lVar50 = func_0x024d8f40(lVar50);
  }
  uVar78 = func_0x0249f90c(puVar26 + -0x2c0,
                           *(long *)(*(long *)(*(long *)(lVar50 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0(puVar26 + -0x2b4,uVar78,uVar28);
  return (ulong *)(ulong)*(uint *)(puVar26 + -0x2b4);
}


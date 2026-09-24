/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void SetItemsDiscoveredBasedOnBoardAct(GameLogic.Player.IPlayer player, GameLogic.Merge.MergeBoardAct act, GameLogic.Player.Board.MergeBoard board, Game.Logic.ProgressState progressState)
 * Ghidra function entry: 033c0108
 * Generated Ghidra pseudocode; not original C# source. */


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
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_033c0108(ulong *param_1,int *param_2,ulong *param_3,ulong *param_4,undefined8 param_5,
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
  ulong *puVar33;
  undefined8 uVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined *puVar40;
  uint uVar29;
  int iVar30;
  undefined8 uVar41;
  char *pcVar42;
  code *pcVar43;
  int iVar31;
  code *pcVar44;
  undefined8 *puVar45;
  ulong *puVar46;
  long *plVar47;
  ulong *puVar48;
  long *plVar49;
  long *plVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  undefined8 extraout_x1;
  ulong *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  ulong *puVar54;
  long *plVar55;
  ulong *puVar56;
  ulong *puVar57;
  ulong *puVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  int *piVar63;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar64;
  undefined *puVar65;
  undefined8 uVar66;
  code *pcVar67;
  long *plVar68;
  int *unaff_x22;
  undefined *puVar69;
  undefined *puVar70;
  long *unaff_x23;
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
  undefined8 unaff_x30;
  undefined8 uVar78;
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [12];
  undefined1 auVar95 [16];
  undefined1 auStack_a34 [160];
  undefined1 auStack_994 [2404];
  
  auVar93._8_8_ = param_3;
  auVar93._0_8_ = param_1;
  auVar91._8_8_ = param_3;
  auVar91._0_8_ = param_1;
  plVar71 = (long *)0x5e2c000;
  puVar32 = param_1;
  puVar33 = param_3;
  puVar48 = param_4;
  if ((bRam0000000005e2c3c1 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df1f0);
    func_0x0249f8e4(&DAT_059dfbc0);
    puVar32 = (ulong *)func_0x0249f8e4(&DAT_059e89b0);
    bRam0000000005e2c3c1 = 1;
  }
  iVar31 = *param_2;
  if (iVar31 < 8) {
    if (iVar31 < 5) {
      if ((iVar31 != 1) && (iVar31 != 3)) {
        return puVar32;
      }
      plVar55 = plVar71;
      if (param_3 == (ulong *)0x0) goto LAB_033c0330;
      uVar53 = *(undefined8 *)(param_2 + 3);
LAB_033c01dc:
      puVar33 = (ulong *)func_0x0376e450(param_3,uVar53,0);
      puVar48 = param_4;
      auVar93 = auVar91;
    }
    else {
      if (iVar31 != 5) {
        if (iVar31 != 6) {
          return puVar32;
        }
        goto LAB_033c01d4;
      }
      puVar33 = *(ulong **)(param_2 + 0xc);
      puVar48 = param_4;
    }
  }
  else {
    if (iVar31 < 0xc) {
      if ((iVar31 != 8) && (iVar31 != 9)) {
        return puVar32;
      }
LAB_033c01d4:
      plVar55 = plVar71;
      if (param_3 != (ulong *)0x0) {
        uVar53 = *(undefined8 *)(param_2 + 1);
        goto LAB_033c01dc;
      }
    }
    else {
      if (iVar31 != 0xc) {
        if ((iVar31 != 0xd) && (iVar31 != 0xe)) {
          return puVar32;
        }
        goto LAB_033c01d4;
      }
      plVar55 = *(long **)(param_2 + 6);
      if (plVar55 != (long *)0x0) {
        lVar61 = *plVar55;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
              goto LAB_033c0270;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar33 = (ulong *)0xe;
        puVar45 = (undefined8 *)func_0x024d927c(plVar55);
LAB_033c0270:
        plVar71 = (long *)(*(code *)*puVar45)(plVar55,puVar45[1]);
        if (plVar71 != (long *)0x0) {
          lVar61 = *plVar71;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df1f0) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                goto LAB_033c02dc;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar33 = (ulong *)0x1;
          puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c02dc:
          puVar32 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
          if (puVar32 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          if (*(byte *)(*puVar32 + 0x130) < *(byte *)(_DAT_059e89b0 + 0x130)) {
            return puVar32;
          }
          if (*(long *)(*(long *)(*puVar32 + 200) + (ulong)*(byte *)(_DAT_059e89b0 + 0x130) * 8 + -8
                       ) != _DAT_059e89b0) {
            return puVar32;
          }
          goto LAB_033c01d4;
        }
      }
    }
LAB_033c0330:
    unaff_x30 = 0x33c0334;
    auVar93 = func_0x0249fb90();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = param_2;
    unaff_x23 = plVar55;
  }
  plVar71 = auVar93._8_8_;
  puVar32 = auVar93._0_8_;
  if (puVar33 == (ulong *)0x0) {
    return puVar32;
  }
  if (puVar48 == (ulong *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x30;
    auVar93 = func_0x0249fb90();
    puVar64 = auVar93._8_8_;
    puVar58 = auVar93._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x33c0364;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    puVar56 = (ulong *)(param_6 & 0xffffffff);
    plVar55 = (long *)func_0x03530bf4(param_5,0);
    *(undefined **)((long)register0x00000008 + -0x70) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar53 = 0x5e2c000;
    puVar54 = puVar33;
    puVar32 = puVar48;
    plVar71 = plVar55;
    puVar46 = puVar56;
    puVar57 = param_7;
    if ((bRam0000000005e2c3c2 & 1) == 0) {
      func_0x0249f8e4(&DAT_059dac08);
      func_0x0249f8e4(&DAT_059df1d0);
      func_0x0249f8e4(&DAT_059df1f0);
      func_0x0249f8e4(&DAT_059c9978);
      func_0x0249f8e4(&DAT_059dfbc0);
      bRam0000000005e2c3c2 = 1;
    }
    if ((puVar48 != (ulong *)0x0) && (uVar34 = func_0x03659ee0(puVar48,0), puVar64 != (ulong *)0x0))
    {
      puVar54 = (ulong *)0x0;
      puVar35 = (ulong *)func_0x036d3908(puVar64,uVar34);
      if (puVar35 != (ulong *)0x0) {
        uVar60 = *puVar35;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
              goto LAB_033c04d4;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar54 = (ulong *)0xe;
        puVar45 = (undefined8 *)func_0x024d927c(puVar35);
LAB_033c04d4:
        plVar47 = (long *)(*(code *)*puVar45)(puVar35,puVar45[1]);
        unaff_x26 = puVar35;
        if (plVar47 != (long *)0x0) {
          lVar61 = *plVar47;
          unaff_x29 = &DAT_059df1f0;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df1f0) {
                puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                goto LAB_033c053c;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df1f0,0);
LAB_033c053c:
          uVar62 = (*(code *)*puVar45)(plVar47,puVar45[1]);
          if ((uVar62 & 1) == 0) {
            return (ulong *)0x0;
          }
          uVar53 = func_0x0249fb80(_DAT_059dac08);
          plVar71 = (long *)0x0;
          puVar54 = puVar58;
          puVar32 = puVar56;
          func_0x0373956c(uVar53,puVar48);
          lVar61 = *plVar47;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df1f0) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                goto LAB_033c05c4;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar54 = (ulong *)0x1;
          puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c05c4:
          puVar36 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
          unaff_x28 = plVar47;
          if (puVar36 != (ulong *)0x0) {
            uVar60 = *puVar36;
            unaff_x28 = (long *)&DAT_059df1d0;
            uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059df1d0) {
                  puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c062c;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar45 = (undefined8 *)func_0x024d927c(puVar36,_DAT_059df1d0,0);
LAB_033c062c:
            puVar46 = (ulong *)puVar45[1];
            puVar54 = puVar35;
            puVar32 = puVar64;
            plVar71 = plVar55;
            uVar62 = (*(code *)*puVar45)(puVar36,uVar53);
            if ((uVar62 & 1) == 0) {
              return (ulong *)0x0;
            }
            puVar56 = puVar36;
            if (puVar58 != (ulong *)0x0) {
              func_0x037789bc(puVar58,puVar48,puVar33,plVar55,1,0);
              puVar57 = (ulong *)0x0;
              param_8 = (ulong *)0x0;
              *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
              *(undefined8 *)((long)register0x00000008 + -200) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
              puVar54 = puVar33;
              puVar32 = puVar33;
              plVar71 = plVar55;
              puVar46 = puVar35;
              func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x110),0xc);
              lVar61 = _DAT_059c9978;
              if (param_7 != (ulong *)0x0) {
                func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x160),
                                (undefined1 *)((long)register0x00000008 + -0x110),0x50);
                uVar60 = *param_7;
                uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == lVar61) {
                      puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                      goto LAB_033c0720;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(param_7,lVar61,2);
LAB_033c0720:
                pcVar77 = (code *)*puVar45;
                func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xc0),
                                (undefined1 *)((long)register0x00000008 + -0x160),0x50);
                (*pcVar77)(param_7,(undefined1 *)((long)register0x00000008 + -0xc0),puVar45[1]);
                uVar60 = *puVar36;
                uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059df1d0) {
                      puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                      goto LAB_033c0794;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(puVar36,_DAT_059df1d0,1);
LAB_033c0794:
                (*(code *)*puVar45)(puVar36,uVar53,puVar33,puVar64,plVar55,param_7,puVar45[1]);
                func_0x033bfe1c(puVar48,param_7,puVar58,puVar48[0x44]);
                return (ulong *)0x1;
              }
            }
          }
        }
      }
    }
    auVar93 = func_0x0249fb90();
    pcVar77 = auVar93._8_8_;
    puVar35 = auVar93._0_8_;
    *(undefined **)((long)register0x00000008 + -0x1d0) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0x33c07f0;
    *(long **)((long)register0x00000008 + -0x1c0) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x1b8) = puVar56;
    *(ulong **)((long)register0x00000008 + -0x1b0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar53;
    *(ulong **)((long)register0x00000008 + -0x1a0) = puVar33;
    *(ulong **)((long)register0x00000008 + -0x198) = puVar64;
    *(long **)((long)register0x00000008 + -400) = plVar55;
    *(ulong **)((long)register0x00000008 + -0x188) = puVar58;
    *(ulong **)((long)register0x00000008 + -0x180) = puVar48;
    *(ulong **)((long)register0x00000008 + -0x178) = param_7;
    puVar64 = (ulong *)0x5e2c000;
    puVar73 = &DAT_059efcc8;
    puVar48 = puVar54;
    puVar33 = puVar32;
    plVar55 = plVar71;
    puVar58 = puVar57;
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
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
    lVar61 = func_0x0249fb80(_DAT_059efcc8);
    func_0x0378a120(lVar61,0);
    if (lVar61 != 0) {
      *(undefined8 *)(lVar61 + 0x20) = puVar54;
      *(ulong **)(lVar61 + 0x18) = puVar46;
      func_0x0249f888((undefined8 *)(lVar61 + 0x20),puVar54);
      if (pcVar77 != (code *)0x0) {
        lVar52 = func_0x036d5f38(pcVar77,0);
        if (lVar52 == 0) {
          return (ulong *)0x0;
        }
        if (plVar71 != (long *)0x0) {
          uVar53 = func_0x03659ee0(plVar71,0);
          puVar33 = (ulong *)func_0x036eb114(pcVar77,uVar53,0);
          if (((ulong)puVar33 & 1) == 0) {
            return puVar33;
          }
          uVar53 = func_0x0249fb80(_DAT_059dac08);
          plVar55 = (long *)0x0;
          func_0x0373956c(uVar53,plVar71,puVar35,9);
          *(undefined8 *)(lVar61 + 0x10) = uVar53;
          func_0x0249f888((undefined8 *)(lVar61 + 0x10),uVar53);
          plVar47 = (long *)func_0x036d5f38(pcVar77,0);
          puVar46 = (ulong *)func_0x0249fb80(_DAT_059d47f0);
          puVar33 = (ulong *)0x0;
          puVar48 = _DAT_05a69f00;
          func_0x028b4b8c(puVar46,lVar61);
          puVar36 = (ulong *)func_0x03659ee0(plVar71,0);
          puVar54 = (ulong *)0x0;
          if (plVar47 != (long *)0x0) {
            lVar52 = *plVar47;
            uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059df188) {
                  puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 0x10) * 0x10 + 0x138);
                  goto LAB_033c0a2c;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df188,0x10);
LAB_033c0a2c:
            puVar33 = (ulong *)puVar45[1];
            puVar48 = puVar36;
            plVar47 = (long *)(*(code *)*puVar45)(plVar47,puVar46);
            if (plVar47 == (long *)0x0) {
              return (ulong *)0x0;
            }
            lVar52 = *plVar47;
            *(code **)((long)register0x00000008 + -0x2e0) = pcVar77;
            *(ulong **)((long)register0x00000008 + -0x2d8) = puVar32;
            uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059ca7d0) {
                  puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c0aa0;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar48 = (ulong *)0x0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c0aa0:
            uVar53 = (*(code *)*puVar45)(plVar47,puVar45[1]);
            pcVar77 = (code *)&DAT_059df6e0;
            *(undefined8 *)((long)register0x00000008 + -0x228) = uVar53;
            puVar73 = &DAT_059df1f0;
            puVar64 = (ulong *)&DAT_059df1d0;
            *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
            *(undefined1 **)((long)register0x00000008 + -0x218) =
                 (undefined1 *)((long)register0x00000008 + -0x228);
            while (plVar47 = *(long **)((long)register0x00000008 + -0x228), plVar47 != (long *)0x0)
            {
              lVar52 = *plVar47;
              uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
                    puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_033c0b24;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar48 = (ulong *)0x0;
              puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c0b24:
              puVar37 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
              if (((ulong)puVar37 & 1) == 0) {
                puVar54 = (ulong *)0x0;
                puVar73 = (undefined *)0x7;
                puVar45 = (undefined8 *)((long)register0x00000008 + -0x228);
                puVar64 = puVar57;
                goto LAB_033c0d04;
              }
              plVar47 = *(long **)((long)register0x00000008 + -0x228);
              puVar54 = (ulong *)0x0;
              if (plVar47 == (long *)0x0) goto LAB_033c0f48;
              lVar52 = *plVar47;
              uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059cbb28) {
                    puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_033c0b90;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar48 = (ulong *)0x0;
              puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c0b90:
              puVar54 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
              if (puVar54 == (ulong *)0x0) goto LAB_033c0f4c;
              uVar60 = *puVar54;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                    puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
                    goto LAB_033c0bfc;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar48 = (ulong *)0xe;
              puVar45 = (undefined8 *)func_0x024d927c(puVar54);
LAB_033c0bfc:
              plVar47 = (long *)(*(code *)*puVar45)(puVar54,puVar45[1]);
              puVar46 = (ulong *)0x0;
              if (plVar47 == (long *)0x0) goto LAB_033c0f44;
              lVar52 = *plVar47;
              uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df1f0) {
                    puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                    goto LAB_033c0c60;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar48 = (ulong *)0x1;
              puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c0c60:
              puVar46 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
              if (puVar46 == (ulong *)0x0) goto LAB_033c0f50;
              uVar60 = *puVar46;
              puVar32 = *(ulong **)(lVar61 + 0x10);
              puVar36 = *(ulong **)(lVar61 + 0x18);
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df1d0) {
                    puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                    goto LAB_033c0cc8;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059df1d0,3);
LAB_033c0cc8:
              plVar55 = (long *)puVar45[1];
              (*(code *)*puVar45)(puVar46,puVar32,puVar54,puVar36);
              puVar33 = (ulong *)plVar71[0x44];
              puVar48 = puVar35;
              func_0x033bfe1c(plVar71,puVar57);
            }
            func_0x0249fb90();
            puVar54 = (ulong *)0x0;
LAB_033c0f44:
            func_0x0249fb90();
LAB_033c0f48:
            func_0x0249fb90();
LAB_033c0f4c:
            func_0x0249fb90();
LAB_033c0f50:
            func_0x0249fb90();
            puVar56 = puVar36;
          }
        }
      }
    }
    do {
      do {
        do {
          func_0x0249fb90();
          do {
            auVar94 = func_0x0249fb88(puVar54);
            puVar70 = auVar94._0_8_;
            if (auVar94._8_4_ != 1) {
              func_0x022bd79c((undefined1 *)((long)register0x00000008 + -0x220));
              func_0x0258f7ac(puVar70);
              auVar93 = func_0x022bd790();
              puVar74 = auVar93._8_8_;
              puVar54 = auVar93._0_8_;
              *(code **)((long)register0x00000008 + -0x330) = pcVar77;
              *(undefined8 *)((long)register0x00000008 + -0x328) = 0x33c0fcc;
              *(long *)((long)register0x00000008 + -800) = lVar61;
              *(ulong **)((long)register0x00000008 + -0x318) = puVar35;
              *(ulong **)((long)register0x00000008 + -0x310) = puVar57;
              *(ulong **)((long)register0x00000008 + -0x308) = puVar64;
              *(long **)((long)register0x00000008 + -0x300) = plVar71;
              *(undefined **)((long)register0x00000008 + -0x2f8) = puVar73;
              puVar57 = puVar54;
              if ((bRam0000000005e2c3c4 & 1) == 0) {
                func_0x0249f8e4(&DAT_059c9978);
                puVar57 = (ulong *)func_0x0249f8e4(&DAT_059df8e8);
                bRam0000000005e2c3c4 = 1;
              }
              if (puVar74 == (undefined *)0x0) {
                return puVar57;
              }
              lVar61 = func_0x0376e450(puVar74,puVar48,0);
              if (lVar61 == 0) {
                return (ulong *)0x0;
              }
              puVar64 = (ulong *)0x1;
              plVar71 = (long *)0x0;
              puVar35 = puVar48;
              puVar57 = puVar33;
              func_0x037789bc(puVar74,puVar54);
              if (puVar54 == (ulong *)0x0) goto LAB_033c11b8;
              uVar60 = *puVar54;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 == 0) goto LAB_033c1094;
              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
              goto LAB_033c107c;
            }
            puVar45 = (undefined8 *)func_0x054ed080(puVar70);
            puVar54 = (ulong *)*puVar45;
            *(ulong **)((long)register0x00000008 + -0x220) = puVar54;
            puVar37 = (ulong *)func_0x054ed090();
            puVar45 = *(undefined8 **)((long)register0x00000008 + -0x218);
            puVar73 = (undefined *)0x0;
            puVar64 = puVar57;
LAB_033c0d04:
            puVar56 = *(ulong **)((long)register0x00000008 + -0x2e0);
            puVar57 = *(ulong **)((long)register0x00000008 + -0x2d8);
            puVar46 = (ulong *)*puVar45;
            if (puVar46 != (ulong *)0x0) {
              uVar60 = *puVar46;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df598) {
                    puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_033c0d68;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar48 = (ulong *)0x0;
              puVar45 = (undefined8 *)func_0x024d927c(puVar46);
LAB_033c0d68:
              puVar37 = (ulong *)(*(code *)*puVar45)(puVar46,puVar45[1]);
            }
          } while (puVar54 != (ulong *)0x0);
          if (((int)puVar73 != 7) && ((int)puVar73 != 0)) {
            return puVar37;
          }
          puVar36 = (ulong *)func_0x036d5f38(puVar56,0);
        } while (puVar36 == (ulong *)0x0);
        uVar60 = *puVar36;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df188) {
              puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
              goto LAB_033c0df0;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar48 = (ulong *)0xe;
        puVar45 = (undefined8 *)func_0x024d927c(puVar36);
LAB_033c0df0:
        puVar54 = (ulong *)(*(code *)*puVar45)(puVar36,puVar45[1]);
        if ((int)puVar54 != 0) {
          return puVar54;
        }
        puVar54 = puVar36;
      } while (puVar35 == (ulong *)0x0);
      func_0x037789bc(puVar35,plVar71,puVar57,*(undefined8 *)(lVar61 + 0x18),1,0);
      uVar53 = func_0x03659ee0(plVar71,0);
      func_0x036d3908(puVar56,uVar53,0);
      plVar55 = *(long **)(lVar61 + 0x18);
      puVar58 = (ulong *)0x0;
      param_8 = (ulong *)0x0;
      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000008 + -600) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      puVar48 = puVar57;
      puVar33 = puVar57;
      func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x280),10);
      lVar52 = _DAT_059c9978;
    } while (puVar64 == (ulong *)0x0);
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x2d0),
                    (undefined1 *)((long)register0x00000008 + -0x280),0x50);
    uVar60 = *puVar64;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == lVar52) {
          puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
          goto LAB_033c0ee8;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar64,lVar52,2);
LAB_033c0ee8:
    pcVar77 = (code *)*puVar45;
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x2d0),0x50);
    (*pcVar77)(puVar64,(undefined1 *)((long)register0x00000008 + -0x220),puVar45[1]);
    puVar33 = (ulong *)func_0x033bfe1c(plVar71,puVar64,puVar35,plVar71[0x44]);
    return puVar33;
  }
  puVar26 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -8) = unaff_x19;
  puVar73 = (undefined *)0x5e2e000;
  plVar55 = plVar71;
  puVar56 = puVar33;
  if ((bRam0000000005e2eb0b & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    bRam0000000005e2eb0b = 1;
  }
  if (puVar33 != (ulong *)0x0) {
    uVar60 = *puVar33;
    puVar73 = &DAT_059dfe48;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
          puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
          goto LAB_0387da20;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    plVar55 = (long *)0x2;
    puVar45 = (undefined8 *)func_0x024d927c(puVar33);
LAB_0387da20:
    puVar46 = (ulong *)(*(code *)*puVar45)(puVar33,puVar45[1]);
    if ((int)puVar46 != 2) {
      return puVar46;
    }
    uVar60 = *puVar33;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
          puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0x18) * 0x10 + 0x138);
          goto LAB_0387da84;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    plVar55 = (long *)0x18;
    puVar45 = (undefined8 *)func_0x024d927c(puVar33);
LAB_0387da84:
    puVar46 = (ulong *)(*(code *)*puVar45)(puVar33,puVar45[1]);
    if (((ulong)puVar46 & 1) != 0) {
      return puVar46;
    }
    if (puVar32 != (ulong *)0x0) {
      uVar60 = *puVar32;
      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_0387db00;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059df8e8,5);
LAB_0387db00:
      puVar73 = (undefined *)(*(code *)*puVar45)(puVar32,puVar45[1]);
      uVar60 = *puVar33;
      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
            puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
            goto LAB_0387db5c;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059dfe48,0);
LAB_0387db5c:
      plVar55 = (long *)puVar45[1];
      plVar47 = (long *)(*(code *)*puVar45)(puVar33,puVar73);
      if (plVar47 != (long *)0x0) {
        lVar61 = *plVar47;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x1f) * 0x10 + 0x138);
              goto LAB_0387dbcc;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dfbc0,0x1f);
LAB_0387dbcc:
        uVar62 = (*(code *)*puVar45)(plVar47,puVar45[1]);
        puVar56 = (ulong *)(uVar62 & 0xffffffff);
        auVar92._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x10);
        auVar92._0_8_ = puVar48;
        plVar71 = *(long **)((long)register0x00000008 + -8);
        puVar33 = *(ulong **)((long)register0x00000008 + -0x20);
        puVar48 = *(ulong **)((long)register0x00000008 + -0x18);
        uVar53 = *(undefined8 *)((long)register0x00000008 + -0x30);
        puVar73 = *(undefined **)((long)register0x00000008 + -0x28);
        puVar26 = (undefined1 *)register0x00000008;
        goto SUB_0387dbfc;
      }
    }
  }
  uVar53 = 0x387dbfc;
  auVar91 = func_0x0249fb90();
  auVar93._8_8_ = plVar55;
  auVar93._0_8_ = auVar91._8_8_;
  auVar92._8_8_ = puVar32;
  auVar92._0_8_ = auVar91._0_8_;
SUB_0387dbfc:
  do {
    puVar70 = auVar92._0_8_;
    plVar68 = auVar93._8_8_;
    plVar47 = auVar93._0_8_;
    *(undefined8 *)(puVar26 + -0x30) = uVar53;
    *(undefined **)(puVar26 + -0x28) = puVar73;
    *(ulong **)(puVar26 + -0x20) = puVar33;
    *(ulong **)(puVar26 + -0x18) = puVar48;
    *(long *)(puVar26 + -0x10) = auVar92._8_8_;
    *(long **)(puVar26 + -8) = plVar71;
    puVar73 = (undefined *)0x5e2e000;
    plVar55 = plVar68;
    puVar33 = puVar56;
    if ((bRam0000000005e2eb0c & 1) == 0) {
      func_0x0249f8e4(&DAT_05a2a578);
      bRam0000000005e2eb0c = 1;
    }
    lVar61 = *(long *)(puVar70 + 0x38);
    if (lVar61 == 0) {
LAB_0387dcac:
      uVar53 = 0x387dcb0;
      func_0x0249fb90();
      plVar47 = extraout_x1_02;
    }
    else {
      puVar73 = &DAT_05a2a578;
      *(int *)(puVar26 + -0x38) = (int)puVar56;
      plVar55 = _DAT_05a2a578;
      puVar48 = (ulong *)func_0x028926c4(lVar61,puVar26 + -0x38);
      if (((ulong)puVar48 & 1) == 0) {
        if (plVar68 == (long *)0x0) {
          return puVar48;
        }
        lVar61 = plVar68[0xe];
        if (lVar61 != 0) {
          *(int *)(puVar26 + -0x34) = (int)puVar56;
          puVar33 = (ulong *)func_0x028926c4(lVar61,puVar26 + -0x34,_DAT_05a2a578);
          return puVar33;
        }
        goto LAB_0387dcac;
      }
      if (*(long *)(puVar70 + 0x78) != 0) {
        func_0x03873a10(*(long *)(puVar70 + 0x78),(ulong)puVar56 & 0xffffffff);
      }
      plVar55 = (long *)((ulong)puVar56 & 0xffffffff);
      uVar53 = 0x387dc7c;
    }
    *(undefined8 *)(puVar26 + -0x80) = uVar53;
    *(undefined **)(puVar26 + -0x70) = unaff_x24;
    *(undefined **)(puVar26 + -0x68) = puVar73;
    *(undefined **)(puVar26 + -0x60) = puVar70;
    *(undefined1 (*) [16])(puVar26 + -0x58) = auVar93;
    *(ulong *)(puVar26 + -0x48) = (ulong)puVar56 & 0xffffffff;
    plVar71 = (long *)((ulong)plVar55 & 0xffffffff);
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
    plVar68 = (long *)0x5e2e000;
    if (plVar47 != (long *)0x0) {
      lVar61 = *plVar47;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_0387ddb0;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      plVar55 = (long *)0x5;
      puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_0387ddb0:
      plVar49 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
      if (plVar49 != (long *)0x0) {
        lVar61 = *plVar49;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x2e) * 0x10 + 0x138);
              goto LAB_0387de1c;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        plVar55 = (long *)0x2e;
        puVar45 = (undefined8 *)func_0x024d927c(plVar49);
LAB_0387de1c:
        plVar50 = (long *)(*(code *)*puVar45)(plVar49,puVar45[1]);
        plVar68 = plVar49;
        if (plVar50 != (long *)0x0) {
          lVar61 = *plVar50;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059cd7b8) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                goto LAB_0387de88;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar50,_DAT_059cd7b8,1);
LAB_0387de88:
          puVar33 = (ulong *)puVar45[1];
          plVar55 = (long *)(puVar26 + -0x78);
          puVar48 = (ulong *)(*(code *)*puVar45)(plVar50,plVar71);
          if (((ulong)puVar48 & 1) == 0) {
            return puVar48;
          }
          plVar71 = (long *)&DAT_059dcc98;
          if (*(int *)(_DAT_059dcc98 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          plVar68 = plVar50;
          if (*(long *)(puVar26 + -0x78) != 0) {
            plVar71 = (long *)**(undefined8 **)(_DAT_059dcc98 + 0xb8);
            plVar49 = (long *)func_0x036bc734(*(long *)(puVar26 + -0x78),0);
            if (plVar49 != (long *)0x0) {
              lVar61 = *plVar49;
              uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059ca798) {
                    puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_0387df34;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              plVar55 = (long *)0x0;
              puVar45 = (undefined8 *)func_0x024d927c(plVar49);
LAB_0387df34:
              uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
              puVar70 = &DAT_059df6e0;
              *(undefined8 *)(puVar26 + -0x88) = uVar53;
              puVar73 = &DAT_059cbaf8;
              unaff_x24 = &DAT_059df560;
              *(undefined8 *)(puVar26 + -0x98) = 0;
              *(undefined1 **)(puVar26 + -0x90) = puVar26 + -0x88;
              while (plVar68 = *(long **)(puVar26 + -0x88), plVar68 != (long *)0x0) {
                lVar61 = *plVar68;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
                      puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_0387dfb8;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                plVar55 = (long *)0x0;
                puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_0387dfb8:
                puVar48 = (ulong *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                if (((ulong)puVar48 & 1) == 0) {
                  plVar47 = (long *)0x0;
                  puVar45 = (undefined8 *)(puVar26 + -0x88);
                  goto LAB_0387e0a0;
                }
                plVar49 = *(long **)(puVar26 + -0x88);
                plVar68 = (long *)0x0;
                if (plVar49 == (long *)0x0) goto LAB_0387e128;
                lVar61 = *plVar49;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059cbaf8) {
                      puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_0387e01c;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                plVar55 = (long *)0x0;
                puVar45 = (undefined8 *)func_0x024d927c(plVar49);
LAB_0387e01c:
                plVar49 = (long *)(*(code *)*puVar45)(plVar49,puVar45[1]);
                plVar68 = (long *)0x0;
                if (plVar49 == (long *)0x0) goto LAB_0387e12c;
                lVar61 = *plVar49;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059df560) {
                      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                      goto LAB_0387e080;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df560,1);
LAB_0387e080:
                puVar33 = (ulong *)puVar45[1];
                plVar55 = plVar71;
                (*(code *)*puVar45)(plVar49,plVar47);
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
      auVar94 = func_0x0249fb88(plVar47);
      uVar53 = auVar94._0_8_;
      if (auVar94._8_4_ != 1) break;
      puVar45 = (undefined8 *)func_0x054ed080(uVar53);
      plVar47 = (long *)*puVar45;
      *(long **)(puVar26 + -0x98) = plVar47;
      puVar48 = (ulong *)func_0x054ed090();
      puVar45 = *(undefined8 **)(puVar26 + -0x90);
LAB_0387e0a0:
      plVar71 = (long *)*puVar45;
      if (plVar71 != (long *)0x0) {
        lVar61 = *plVar71;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df598) {
              puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_0387e0fc;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        plVar55 = (long *)0x0;
        puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_0387e0fc:
        puVar48 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
      }
      if (plVar47 == (long *)0x0) {
        return puVar48;
      }
    }
    func_0x022bd79c(puVar26 + -0x98);
    func_0x0258f7ac(uVar53);
    auVar92 = func_0x022bd790();
    uVar34 = auVar92._8_8_;
    puVar27 = puVar26 + -0xf0;
    *(undefined8 *)(puVar26 + -0xf0) = 0x387e190;
    *(ulong **)(puVar26 + -0xe0) = unaff_x26;
    *(undefined **)(puVar26 + -0xd8) = unaff_x25;
    *(undefined **)(puVar26 + -0xd0) = unaff_x24;
    *(undefined **)(puVar26 + -200) = puVar73;
    *(undefined **)(puVar26 + -0xc0) = puVar70;
    *(long **)(puVar26 + -0xb8) = plVar68;
    *(long **)(puVar26 + -0xb0) = plVar71;
    *(undefined8 *)(puVar26 + -0xa8) = uVar53;
    unaff_x25 = &DAT_059f1b60;
    puVar32 = puVar33;
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
    puVar45 = *(undefined8 **)(_DAT_059f1b60 + 0xb8);
    lVar61 = puVar45[3];
    unaff_x26 = (ulong *)&DAT_05a43228;
    if (lVar61 == 0) {
      if (*(int *)(_DAT_059f1b60 + 0xe4) == 0) {
        func_0x0249fa64();
        puVar45 = *(undefined8 **)(_DAT_059f1b60 + 0xb8);
      }
      unaff_x24 = (undefined *)*puVar45;
      lVar61 = func_0x0249fb80(_DAT_059c6b48);
      puVar32 = (ulong *)0x0;
      func_0x02a9aa34(lVar61,unaff_x24,_DAT_05a6c788);
      plVar71 = (long *)(*(long *)(_DAT_059f1b60 + 0xb8) + 0x18);
      *plVar71 = lVar61;
      func_0x0249f888(plVar71,lVar61);
    }
    plVar71 = _DAT_05a43228;
    puVar48 = (ulong *)func_0x026e8e9c(puVar33,lVar61);
    if (auVar92._0_8_ == 0) {
      uVar78 = 0x387e2c0;
      auVar92 = func_0x0249fb90();
      uVar53 = 0;
    }
    else {
      uVar34 = *(undefined8 *)(puVar26 + -0xb0);
      puVar33 = *(ulong **)(puVar26 + -0xc0);
      uVar53 = *(undefined8 *)(puVar26 + -0xb8);
      unaff_x24 = *(undefined **)(puVar26 + -0xd0);
      lVar61 = *(long *)(puVar26 + -200);
      unaff_x26 = *(ulong **)(puVar26 + -0xe0);
      unaff_x25 = *(undefined **)(puVar26 + -0xd8);
      uVar78 = *(undefined8 *)(puVar26 + -0xf0);
      puVar27 = puVar26 + -0xa0;
      plVar71 = plVar55;
      puVar32 = puVar48;
      plVar55 = *(long **)(puVar26 + -0xa8);
    }
    plVar47 = auVar92._8_8_;
    puVar48 = auVar92._0_8_;
    auVar93._8_8_ = plVar71;
    auVar93._0_8_ = plVar47;
    puVar26 = puVar27 + -0x50;
    *(undefined8 *)(puVar27 + -0x40) = uVar78;
    *(undefined **)(puVar27 + -0x30) = unaff_x24;
    *(long *)(puVar27 + -0x28) = lVar61;
    *(ulong **)(puVar27 + -0x20) = puVar33;
    *(undefined8 *)(puVar27 + -0x18) = uVar53;
    *(undefined8 *)(puVar27 + -0x10) = uVar34;
    *(long **)(puVar27 + -8) = plVar55;
    puVar33 = puVar48;
    if ((bRam0000000005e2eb0f & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca8c8);
      func_0x0249f8e4(&DAT_059cbc38);
      puVar33 = (ulong *)func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e2eb0f = 1;
    }
    *(undefined8 *)(puVar27 + -0x38) = 0;
    if (puVar32 == (ulong *)0x0) {
      return puVar33;
    }
    uVar60 = *puVar32;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059ca8c8) {
          puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_0387e384;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059ca8c8,0);
LAB_0387e384:
    puVar73 = &DAT_059df6e0;
    unaff_x24 = &DAT_059cbc38;
    uVar53 = (*(code *)*puVar45)(puVar32,puVar45[1]);
    *(undefined8 *)(puVar27 + -0x38) = uVar53;
    *(undefined8 *)(puVar27 + -0x50) = 0;
    *(undefined1 **)(puVar27 + -0x48) = puVar27 + -0x38;
    plVar55 = *(long **)(puVar27 + -0x38);
    if (plVar55 == (long *)0x0) {
      func_0x0249fb90();
LAB_0387e518:
      func_0x0249fb90();
      do {
        auVar94 = func_0x0249fb88(plVar71);
        uVar53 = auVar94._0_8_;
        if (auVar94._8_4_ != 1) {
          func_0x022bd79c(puVar27 + -0x50);
          func_0x0258f7ac(uVar53);
          auVar93 = func_0x022bd790();
          *(undefined8 *)(puVar27 + -0x80) = 0x387e574;
          *(undefined **)(puVar27 + -0x78) = &DAT_059df6e0;
          *(long **)(puVar27 + -0x70) = plVar55;
          *(ulong **)(puVar27 + -0x68) = puVar48;
          *(long **)(puVar27 + -0x60) = plVar47;
          *(undefined8 *)(puVar27 + -0x58) = uVar53;
          puVar33 = auVar93._0_8_;
          if ((bRam0000000005e2eb10 & 1) == 0) {
            func_0x0249f8e4(&DAT_05a03a28);
            func_0x0249f8e4(&DAT_05a03a30);
            func_0x0249f8e4(&DAT_05a03a38);
            puVar33 = (ulong *)func_0x0249f8e4(&DAT_05a186c0);
            bRam0000000005e2eb10 = 1;
          }
          *(undefined8 *)(puVar27 + -0xa0) = 0;
          *(undefined8 *)(puVar27 + -0x98) = 0;
          *(undefined8 *)(puVar27 + -0x90) = 0;
          if (auVar93._8_8_ != 0) {
            func_0x028310e8(auVar93._8_8_,puVar27 + -0xa0,_DAT_05a186c0);
            *(undefined8 *)(puVar27 + -0xb0) = 0;
            *(undefined1 **)(puVar27 + -0xa8) = puVar27 + -0xa0;
            while (uVar62 = func_0x02a5d2d0(puVar27 + -0xa0,_DAT_05a03a30), lVar61 = _DAT_05a03a38,
                  (uVar62 & 1) != 0) {
              lVar51 = *(long *)(_DAT_05a03a38 + 0x20);
              uVar4 = *(ushort *)(lVar51 + 0x135);
              lVar52 = lVar51;
              if ((uVar4 & 1) == 0) {
                lVar52 = func_0x024d8f40();
                lVar51 = *(long *)(lVar61 + 0x20);
                uVar4 = *(ushort *)(lVar51 + 0x135);
              }
              uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar52 + 0xc0) + 0x10) + 0xfc);
              if ((uVar4 & 1) == 0) {
                lVar51 = func_0x024d8f40();
              }
              uVar53 = func_0x0249f90c(puVar27 + -0xa0,
                                       *(long *)(*(long *)(*(long *)(lVar51 + 0xc0) + 8) + 0x80) +
                                       0x60);
              func_0x054ed0d0(puVar27 + -0x84,uVar53,uVar28);
              func_0x0387e718(auVar93._0_8_,*(undefined4 *)(puVar27 + -0x84));
            }
            puVar33 = (ulong *)func_0x02a5d2cc(puVar27 + -0xa0,_DAT_05a03a28);
          }
          return puVar33;
        }
        puVar45 = (undefined8 *)func_0x054ed080(uVar53);
        plVar71 = (long *)*puVar45;
        *(long **)(puVar27 + -0x50) = plVar71;
        puVar33 = (ulong *)func_0x054ed090();
        puVar45 = *(undefined8 **)(puVar27 + -0x48);
LAB_0387e490:
        plVar47 = (long *)*puVar45;
        if (plVar47 != (long *)0x0) {
          lVar61 = *plVar47;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df598) {
                puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                goto LAB_0387e4ec;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df598,0);
LAB_0387e4ec:
          puVar33 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
        }
        if (plVar71 == (long *)0x0) {
          return puVar33;
        }
      } while( true );
    }
    lVar61 = *plVar55;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
          puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_0387e400;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059df6e0,0);
LAB_0387e400:
    puVar33 = (ulong *)(*(code *)*puVar45)(plVar55,puVar45[1]);
    if (((ulong)puVar33 & 1) == 0) {
      plVar71 = (long *)0x0;
      puVar45 = (undefined8 *)(puVar27 + -0x38);
      goto LAB_0387e490;
    }
    puVar33 = *(ulong **)(puVar27 + -0x38);
    plVar55 = (long *)0x0;
    if (puVar33 == (ulong *)0x0) goto LAB_0387e518;
    uVar60 = *puVar33;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059cbc38) {
          puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_0387e464;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059cbc38,0);
LAB_0387e464:
    uVar62 = (*(code *)*puVar45)(puVar33,puVar45[1]);
    puVar56 = (ulong *)(uVar62 & 0xffffffff);
    uVar53 = 0x387e484;
  } while( true );
  while( true ) {
    uVar62 = uVar62 - 1;
    piVar63 = piVar63 + 4;
    if (uVar62 == 0) break;
LAB_033c107c:
    if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
      puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 5) * 0x10 + 0x138);
      goto LAB_033c10b4;
    }
  }
LAB_033c1094:
  puVar45 = (undefined8 *)func_0x024d927c(puVar54,_DAT_059df8e8,5);
LAB_033c10b4:
  uVar53 = (*(code *)*puVar45)(puVar54,puVar45[1]);
  plVar71 = (long *)func_0x036d3908(lVar61,uVar53,0);
  puVar58 = (ulong *)0x0;
  param_8 = (ulong *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x430) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3b8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3c0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x398) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x390) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3c8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = 0;
  puVar35 = puVar48;
  puVar57 = puVar48;
  puVar64 = puVar33;
  func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x3d0),10);
  lVar52 = _DAT_059c9978;
  if (plVar55 != (long *)0x0) {
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x420),
                    (undefined1 *)((long)register0x00000008 + -0x3d0),0x50);
    lVar61 = *plVar55;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == lVar52) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
          goto LAB_033c117c;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar55,lVar52,2);
LAB_033c117c:
    pcVar77 = (code *)*puVar45;
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x380),
                    (undefined1 *)((long)register0x00000008 + -0x420),0x50);
    puVar33 = (ulong *)(*pcVar77)(plVar55,(undefined1 *)((long)register0x00000008 + -0x380),
                                  puVar45[1]);
    return puVar33;
  }
LAB_033c11b8:
  auVar79 = func_0x0249fb90();
  uVar62 = auVar79._8_8_;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x4b0);
  *(code **)((long)register0x00000008 + -0x490) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0x488) = 0x33c11bc;
  *(ulong **)((long)register0x00000008 + -0x480) = puVar32;
  *(ulong **)((long)register0x00000008 + -0x478) = puVar56;
  *(ulong **)((long)register0x00000008 + -0x470) = puVar46;
  *(undefined **)((long)register0x00000008 + -0x468) = puVar70;
  *(undefined **)((long)register0x00000008 + -0x460) = puVar74;
  *(long *)((long)register0x00000008 + -0x458) = lVar61;
  *(ulong **)((long)register0x00000008 + -0x450) = puVar54;
  *(ulong **)((long)register0x00000008 + -0x448) = puVar48;
  *(ulong **)((long)register0x00000008 + -0x440) = puVar33;
  *(long **)((long)register0x00000008 + -0x438) = plVar55;
  plVar55 = (long *)0x5e2c000;
  puVar33 = puVar35;
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
  *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
  lVar61 = func_0x0249fb80(_DAT_059efce0);
  func_0x0378a758(lVar61,0);
  if (lVar61 != 0) {
    plVar55 = (long *)(lVar61 + 0x10);
    *plVar55 = auVar79._0_8_;
    func_0x0249f888(plVar55,auVar79._0_8_);
    puVar48 = (ulong *)(lVar61 + 0x18);
    auVar5._8_8_ = uVar62;
    auVar5._0_8_ = puVar48;
    auVar79._8_8_ = uVar62;
    auVar79._0_8_ = puVar48;
    *puVar48 = uVar62;
    func_0x0249f888(puVar48,uVar62);
    *(undefined8 *)(lVar61 + 0x20) = puVar35;
    func_0x0249f888((undefined8 *)(lVar61 + 0x20),puVar35);
    if (*plVar55 != 0) {
      puVar33 = (ulong *)0x7;
      puVar57 = (ulong *)0x0;
      puVar64 = (ulong *)0x0;
      puVar54 = (ulong *)func_0x0366f6f8(*plVar55,*puVar48);
      auVar79 = auVar5;
      if (*plVar55 != 0) {
        puVar45 = (undefined8 *)(lVar61 + 0x28);
        auVar6._8_8_ = puVar45;
        auVar6._0_8_ = puVar48;
        auVar79._8_8_ = puVar45;
        *puVar45 = *(undefined8 *)(*plVar55 + 0x218);
        func_0x0249f888(puVar45);
        puVar35 = puVar54;
        if (*(long *)(lVar61 + 0x10) != 0) {
          plVar47 = (long *)func_0x03659ee0(*(long *)(lVar61 + 0x10),0);
          auVar7._8_8_ = plVar47;
          auVar7._0_8_ = puVar48;
          auVar79 = auVar6;
          if (plVar47 != (long *)0x0) {
            lVar52 = *plVar47;
            uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
                  puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                  goto LAB_033c1384;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar33 = (ulong *)0x2;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c1384:
            uVar53 = (*(code *)*puVar45)(plVar47,puVar45[1]);
            *(undefined8 *)(lVar61 + 0x30) = uVar53;
            func_0x0249f888();
            auVar79 = auVar7;
            if (puVar54 != (ulong *)0x0) {
              uVar60 = *puVar54;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059ca768) {
                    puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_033c13f8;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar33 = (ulong *)0x0;
              puVar45 = (undefined8 *)func_0x024d927c(puVar54);
LAB_033c13f8:
              puVar74 = &DAT_059df6e0;
              puVar70 = &DAT_059cbac8;
              puVar46 = (ulong *)&DAT_059d4870;
              puVar56 = (ulong *)&DAT_05a69f20;
              puVar32 = (ulong *)&DAT_059c1700;
              pcVar77 = (code *)&DAT_05a69f18;
              plVar55 = (long *)&DAT_059defe8;
              uVar53 = (*(code *)*puVar45)(puVar54,puVar45[1]);
              *(undefined8 *)((long)register0x00000008 + -0x498) = uVar53;
              *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
              *(undefined1 **)((long)register0x00000008 + -0x4a0) =
                   (undefined1 *)((long)register0x00000008 + -0x498);
              while( true ) {
                auVar79._8_8_ = plVar47;
                auVar79._0_8_ = puVar48;
                plVar68 = *(long **)((long)register0x00000008 + -0x498);
                if (plVar68 == (long *)0x0) break;
                lVar52 = *plVar68;
                uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
                      puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_033c149c;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar33 = (ulong *)0x0;
                puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_033c149c:
                puVar54 = (ulong *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                if (((ulong)puVar54 & 1) == 0) {
                  lVar61 = 0;
                  puVar45 = (undefined8 *)((long)register0x00000008 + -0x498);
                  goto LAB_033c15d4;
                }
                plVar68 = *(long **)((long)register0x00000008 + -0x498);
                if (plVar68 == (long *)0x0) goto LAB_033c1664;
                lVar52 = *plVar68;
                uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059cbac8) {
                      puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_033c1500;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059cbac8,0);
LAB_033c1500:
                plVar68 = (long *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                plVar47 = (long *)func_0x0249fb80(_DAT_059d4870);
                puVar57 = (ulong *)0x0;
                puVar33 = _DAT_05a69f20;
                func_0x028b4b8c(plVar47,lVar61);
                puVar48 = *(ulong **)(lVar61 + 0x38);
                if (puVar48 == (ulong *)0x0) {
                  puVar48 = (ulong *)func_0x0249fb80(_DAT_059c1700);
                  puVar57 = (ulong *)0x0;
                  puVar33 = _DAT_05a69f18;
                  func_0x029bb7f8(puVar48,lVar61);
                  *(ulong **)(lVar61 + 0x38) = puVar48;
                  func_0x0249f888(lVar61 + 0x38,puVar48);
                }
                if (plVar68 == (long *)0x0) goto LAB_033c1668;
                lVar52 = *plVar68;
                uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
                      puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 0x1a) * 0x10 + 0x138);
                      goto LAB_033c15b4;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059defe8,0x1a);
LAB_033c15b4:
                puVar57 = (ulong *)puVar45[1];
                puVar33 = puVar48;
                (*(code *)*puVar45)(plVar68,plVar47);
              }
              func_0x0249fb90();
LAB_033c1664:
              func_0x0249fb90();
LAB_033c1668:
              auVar79._8_8_ = plVar47;
              auVar79._0_8_ = puVar48;
              puVar35 = (ulong *)0x0;
              func_0x0249fb90();
            }
          }
        }
      }
    }
  }
  func_0x0249fb90();
  while( true ) {
    auVar94 = func_0x0249fb88(lVar61);
    uVar53 = auVar94._0_8_;
    if (auVar94._8_4_ != 1) break;
    plVar47 = (long *)func_0x054ed080(uVar53);
    lVar61 = *plVar47;
    *(long *)((long)register0x00000008 + -0x4a8) = lVar61;
    puVar54 = (ulong *)func_0x054ed090();
    puVar45 = *(undefined8 **)((long)register0x00000008 + -0x4a0);
LAB_033c15d4:
    puVar35 = (ulong *)*puVar45;
    if (puVar35 != (ulong *)0x0) {
      uVar60 = *puVar35;
      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df598) {
            puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
            goto LAB_033c1630;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar33 = (ulong *)0x0;
      puVar45 = (undefined8 *)func_0x024d927c(puVar35);
LAB_033c1630:
      puVar54 = (ulong *)(*(code *)*puVar45)(puVar35,puVar45[1]);
    }
    if (lVar61 == 0) {
      return puVar54;
    }
  }
  func_0x022bd79c((undefined1 *)((long)register0x00000008 + -0x4a8));
  func_0x0258f7ac(uVar53);
  auVar80 = func_0x022bd790();
  uVar62 = auVar80._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x4f0) = 0x33c16d8;
  *(undefined **)((long)register0x00000008 + -0x4e8) = puVar70;
  *(undefined **)((long)register0x00000008 + -0x4e0) = puVar74;
  *(long **)((long)register0x00000008 + -0x4d8) = plVar55;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x4d0) = auVar79;
  *(ulong **)((long)register0x00000008 + -0x4c0) = puVar35;
  *(undefined8 *)((long)register0x00000008 + -0x4b8) = uVar53;
  puVar54 = (ulong *)&DAT_059efce8;
  puVar48 = puVar33;
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
  lVar61 = func_0x0249fb80(_DAT_059efce8);
  func_0x0378a914(lVar61,0);
  if (lVar61 != 0) {
    *(undefined8 *)(lVar61 + 0x10) = puVar33;
    func_0x0249f888((undefined8 *)(lVar61 + 0x10),puVar33);
    puVar33 = (ulong *)(lVar61 + 0x20);
    *puVar33 = uVar62;
    func_0x0249f888(puVar33,uVar62);
    *(undefined8 *)(lVar61 + 0x30) = auVar80._8_8_;
    func_0x0249f888((undefined8 *)(lVar61 + 0x30),auVar80._8_8_);
    plVar55 = (long *)*puVar33;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar62;
    if (plVar55 != (long *)0x0) {
      lVar52 = *plVar55;
      uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
            puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 4) * 0x10 + 0x138);
            goto LAB_033c181c;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar48 = (ulong *)0x4;
      puVar45 = (undefined8 *)func_0x024d927c(plVar55);
LAB_033c181c:
      uVar53 = (*(code *)*puVar45)(plVar55,puVar45[1]);
      *(undefined8 *)(lVar61 + 0x18) = uVar53;
      func_0x0249f888((undefined8 *)(lVar61 + 0x18),uVar53);
      plVar55 = *(long **)(lVar61 + 0x20);
      auVar8._8_8_ = plVar55;
      auVar8._0_8_ = uVar62;
      auVar80._8_8_ = plVar55;
      if (plVar55 != (long *)0x0) {
        lVar52 = *plVar55;
        uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 5) * 0x10 + 0x138);
              goto LAB_033c189c;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar48 = (ulong *)0x5;
        puVar45 = (undefined8 *)func_0x024d927c(plVar55);
LAB_033c189c:
        plVar55 = (long *)(*(code *)*puVar45)(plVar55,puVar45[1]);
        auVar80 = auVar8;
        if (plVar55 != (long *)0x0) {
          lVar52 = *plVar55;
          puVar70 = &DAT_05a69f30;
          puVar74 = &DAT_059c1668;
          uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
                puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_033c1928;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059dfe60,2);
LAB_033c1928:
          uVar53 = (*(code *)*puVar45)(plVar55,puVar45[1]);
          *(undefined8 *)(lVar61 + 0x28) = uVar53;
          func_0x0249f888();
          uVar62 = *(ulong *)(lVar61 + 0x18);
          puVar35 = *(ulong **)(lVar61 + 0x30);
          puVar33 = (ulong *)func_0x0249fb80(_DAT_059d4820);
          func_0x028b4b8c(puVar33,lVar61,_DAT_05a69f30,0);
          puVar54 = (ulong *)func_0x0249fb80(_DAT_059c1668);
          puVar57 = (ulong *)0x0;
          puVar48 = _DAT_05a69f28;
          func_0x029bb7f8(puVar54,lVar61);
          auVar80._8_8_ = 0;
          auVar80._0_8_ = puVar35;
          if (uVar62 != 0) {
            uVar53 = *(undefined8 *)((long)register0x00000008 + -0x4c0);
            uVar41 = *(undefined8 *)((long)register0x00000008 + -0x4b8);
            uVar34 = *(undefined8 *)((long)register0x00000008 + -0x4d0);
            uVar66 = *(undefined8 *)((long)register0x00000008 + -0x4c8);
            puVar73 = *(undefined **)((long)register0x00000008 + -0x4e0);
            uVar72 = *(undefined8 *)((long)register0x00000008 + -0x4d8);
            uVar78 = *(undefined8 *)((long)register0x00000008 + -0x4f0);
            uVar75 = *(undefined8 *)((long)register0x00000008 + -0x4e8);
            goto LAB_0368a1a8;
          }
        }
      }
    }
  }
  auVar81 = func_0x0249fb90();
  uVar62 = auVar81._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x530) = 0x33c19b4;
  *(undefined **)((long)register0x00000008 + -0x528) = puVar70;
  *(undefined **)((long)register0x00000008 + -0x520) = puVar74;
  *(ulong **)((long)register0x00000008 + -0x518) = puVar54;
  *(ulong **)((long)register0x00000008 + -0x510) = puVar33;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x508) = auVar80;
  *(long *)((long)register0x00000008 + -0x4f8) = lVar61;
  puVar54 = (ulong *)&DAT_059efcf0;
  puVar36 = puVar48;
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
  lVar61 = func_0x0249fb80(_DAT_059efcf0);
  func_0x0378ab80(lVar61,0);
  puVar35 = puVar48;
  if (lVar61 != 0) {
    puVar54 = (ulong *)(lVar61 + 0x10);
    *puVar54 = uVar62;
    func_0x0249f888(puVar54,uVar62);
    *(undefined8 *)(lVar61 + 0x18) = puVar48;
    func_0x0249f888((undefined8 *)(lVar61 + 0x18),puVar48);
    *(undefined8 *)(lVar61 + 0x30) = auVar81._8_8_;
    func_0x0249f888((undefined8 *)(lVar61 + 0x30),auVar81._8_8_);
    plVar55 = (long *)*puVar54;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar62;
    if (plVar55 != (long *)0x0) {
      lVar52 = *plVar55;
      uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
            puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 4) * 0x10 + 0x138);
            goto LAB_033c1af8;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar36 = (ulong *)0x4;
      puVar45 = (undefined8 *)func_0x024d927c(plVar55);
LAB_033c1af8:
      uVar53 = (*(code *)*puVar45)(plVar55,puVar45[1]);
      *(undefined8 *)(lVar61 + 0x28) = uVar53;
      func_0x0249f888((undefined8 *)(lVar61 + 0x28),uVar53);
      plVar55 = *(long **)(lVar61 + 0x10);
      auVar9._8_8_ = plVar55;
      auVar9._0_8_ = uVar62;
      auVar81._8_8_ = plVar55;
      if (plVar55 != (long *)0x0) {
        lVar52 = *plVar55;
        uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 5) * 0x10 + 0x138);
              goto LAB_033c1b78;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar36 = (ulong *)0x5;
        puVar45 = (undefined8 *)func_0x024d927c(plVar55);
LAB_033c1b78:
        plVar55 = (long *)(*(code *)*puVar45)(plVar55,puVar45[1]);
        auVar81 = auVar9;
        if (plVar55 != (long *)0x0) {
          lVar52 = *plVar55;
          puVar70 = &DAT_05a69f38;
          puVar74 = &DAT_059c1668;
          uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
                puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_033c1c04;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059dfe60,2);
LAB_033c1c04:
          uVar53 = (*(code *)*puVar45)(plVar55,puVar45[1]);
          *(undefined8 *)(lVar61 + 0x20) = uVar53;
          func_0x0249f888();
          uVar62 = *(ulong *)(lVar61 + 0x28);
          puVar35 = *(ulong **)(lVar61 + 0x30);
          puVar33 = (ulong *)func_0x0249fb80(_DAT_059d4820);
          func_0x028b4b8c(puVar33,lVar61,_DAT_05a69f38,0);
          puVar54 = (ulong *)func_0x0249fb80(_DAT_059c1668);
          puVar57 = (ulong *)0x0;
          puVar36 = _DAT_05a69f40;
          func_0x029bb7f8(puVar54,lVar61);
          auVar81._8_8_ = 0;
          auVar81._0_8_ = puVar33;
          if (uVar62 != 0) {
            uVar53 = *(undefined8 *)((long)register0x00000008 + -0x500);
            uVar41 = *(undefined8 *)((long)register0x00000008 + -0x4f8);
            uVar34 = *(undefined8 *)((long)register0x00000008 + -0x510);
            uVar66 = *(undefined8 *)((long)register0x00000008 + -0x508);
            puVar73 = *(undefined **)((long)register0x00000008 + -0x520);
            uVar72 = *(undefined8 *)((long)register0x00000008 + -0x518);
            puVar25 = (undefined1 *)((long)register0x00000008 + -0x4f0);
            uVar78 = *(undefined8 *)((long)register0x00000008 + -0x530);
            uVar75 = *(undefined8 *)((long)register0x00000008 + -0x528);
LAB_0368a1a8:
            *(undefined8 *)(puVar25 + -0x50) = uVar78;
            *(ulong **)(puVar25 + -0x40) = puVar46;
            *(undefined8 *)(puVar25 + -0x38) = uVar75;
            *(undefined **)(puVar25 + -0x30) = puVar73;
            *(undefined8 *)(puVar25 + -0x28) = uVar72;
            *(undefined8 *)(puVar25 + -0x20) = uVar34;
            *(undefined8 *)(puVar25 + -0x18) = uVar66;
            *(undefined8 *)(puVar25 + -0x10) = uVar53;
            *(undefined8 *)(puVar25 + -8) = uVar41;
            plVar71 = (long *)0x5e2d000;
            if ((bRam0000000005e2d77e & 1) == 0) {
              func_0x0249f8e4(&DAT_059deff0);
              func_0x0249f8e4(&DAT_05a17a80);
              func_0x0249f8e4(&DAT_05a17a88);
              func_0x0249f8e4(&DAT_05a17a90);
              bRam0000000005e2d77e = 1;
            }
            puVar48 = (ulong *)func_0x03687f1c(uVar62,puVar35,0);
            if (puVar48 != (ulong *)0x0) {
              uVar29 = (int)puVar48[3] - 1;
              puVar32 = puVar48;
              if (-1 < (int)uVar29) {
                puVar73 = &DAT_05a17a90;
                do {
                  uVar62 = (ulong)uVar29;
                  func_0x0282f3c4(puVar48,uVar62,puVar25 + -0x48,_DAT_05a17a90);
                  plVar71 = *(long **)(puVar25 + -0x48);
                  puVar35 = puVar48;
                  if (plVar71 == (long *)0x0) goto LAB_0368a390;
                  lVar61 = *plVar71;
                  uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
                  if (uVar60 != 0) {
                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059deff0) {
                        puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                        goto LAB_0368a2b4;
                      }
                      uVar60 = uVar60 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar60 != 0);
                  }
                  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deff0,0);
LAB_0368a2b4:
                  uVar28 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                  if (puVar33 == (ulong *)0x0) goto LAB_0368a390;
                  uVar59 = puVar33[8];
                  pcVar77 = (code *)puVar33[3];
                  uVar60 = puVar33[5];
                  *(undefined4 *)(puVar25 + -0x48) = uVar28;
                  puVar32 = (ulong *)(*pcVar77)(uVar59,puVar25 + -0x48,uVar60);
                  if ((((ulong)puVar32 & 1) != 0) &&
                     (puVar32 = (ulong *)func_0x02832544(puVar48,uVar62,_DAT_05a17a80),
                     puVar54 != (ulong *)0x0)) {
                    lVar61 = *plVar71;
                    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                    if (uVar62 != 0) {
                      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deff0) {
                          puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                          goto LAB_0368a344;
                        }
                        uVar62 = uVar62 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar62 != 0);
                    }
                    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deff0,0);
LAB_0368a344:
                    uVar28 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                    uVar60 = puVar54[8];
                    pcVar77 = (code *)puVar54[3];
                    uVar62 = puVar54[5];
                    *(undefined4 *)(puVar25 + -0x48) = uVar28;
                    puVar32 = (ulong *)(*pcVar77)(uVar60,puVar25 + -0x48,uVar62);
                  }
                  bVar1 = 0 < (int)uVar29;
                  uVar29 = uVar29 - 1;
                } while (bVar1);
              }
              return puVar32;
            }
LAB_0368a390:
            func_0x0249fb90();
            *(undefined8 *)(puVar25 + -0x90) = 0x368a394;
            *(undefined **)(puVar25 + -0x80) = puVar73;
            *(long **)(puVar25 + -0x78) = plVar71;
            *(ulong *)(puVar25 + -0x70) = uVar62;
            *(ulong **)(puVar25 + -0x68) = puVar35;
            *(ulong **)(puVar25 + -0x60) = puVar33;
            *(ulong **)(puVar25 + -0x58) = puVar54;
            if ((bRam0000000005e2d77f & 1) == 0) {
              func_0x0249f8e4(&DAT_05a42438);
              func_0x0249f8e4(&DAT_059c6550);
              func_0x0249f8e4(&DAT_05a17a70);
              func_0x0249f8e4(&DAT_05a704b8);
              func_0x0249f8e4(&DAT_059f49e0);
              bRam0000000005e2d77f = 1;
            }
            puVar33 = (ulong *)func_0x0249fb80(_DAT_059f49e0);
            return puVar33;
          }
        }
      }
    }
  }
  auVar93 = func_0x0249fb90();
  lVar51 = auVar93._8_8_;
  lVar52 = auVar93._0_8_;
  *(code **)((long)register0x00000008 + -0x590) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0x588) = 0x33c1c8c;
  *(ulong **)((long)register0x00000008 + -0x580) = puVar32;
  *(ulong **)((long)register0x00000008 + -0x578) = puVar56;
  *(ulong **)((long)register0x00000008 + -0x570) = puVar46;
  *(undefined **)((long)register0x00000008 + -0x568) = puVar70;
  *(undefined **)((long)register0x00000008 + -0x560) = puVar74;
  *(ulong **)((long)register0x00000008 + -0x558) = puVar54;
  *(long *)((long)register0x00000008 + -0x550) = auVar81._0_8_;
  *(ulong **)((long)register0x00000008 + -0x548) = puVar35;
  *(long *)((long)register0x00000008 + -0x540) = auVar81._8_8_;
  *(long *)((long)register0x00000008 + -0x538) = lVar61;
  uVar62 = 0x5e2c000;
  plVar55 = (long *)((ulong)param_8 & 0xffffffff);
  puVar35 = (ulong *)((ulong)plVar71 & 0xffffffff);
  puVar33 = puVar36;
  puVar48 = puVar57;
  puVar32 = puVar64;
  puVar56 = puVar58;
  puVar54 = param_8;
  if ((bRam0000000005e2c3c9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_05a34898);
    bRam0000000005e2c3c9 = 1;
  }
  if ((puVar57 != (ulong *)0x0) && (lVar52 != 0)) {
    uVar62 = puVar57[0x44];
    puVar46 = (ulong *)puVar57[0x43];
    plVar71 = (long *)(ulong)((uint)param_8 & 1);
    puVar56 = (ulong *)0x0;
    puVar32 = puVar57;
    uVar60 = func_0x03780a5c(lVar52,puVar36,puVar64,puVar58);
    if ((uVar60 & 1) == 0) {
LAB_033c1e24:
      puVar33 = (ulong *)func_0x033bfe1c(puVar57,puVar58,lVar52,uVar62);
      return puVar33;
    }
    puVar64 = *(ulong **)(lVar52 + 0x30);
    uVar53 = func_0x03659ee0(puVar57,0);
    uVar28 = func_0x03788520(lVar52,lVar51,uVar53,0);
    *(undefined8 *)((long)register0x00000008 + -0x5a8) = 0;
    puVar33 = (ulong *)((long)register0x00000008 + -0x5a0);
    *(undefined4 *)((long)register0x00000008 + -0x594) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x5a0) = extraout_x1;
    *(undefined8 *)((long)register0x00000008 + -0x5b0) = 0;
    puVar48 = _DAT_05a34898;
    func_0x02953678((undefined1 *)((long)register0x00000008 + -0x5b0),
                    (undefined1 *)((long)register0x00000008 + -0x594));
    if (lVar51 != 0) {
      uVar60 = func_0x036d392c(lVar51,0);
      plVar55 = (long *)(uVar60 & 0xffffffff);
      uVar53 = func_0x03659ee0(puVar57,0);
      pcVar77 = (code *)func_0x036d62d4(lVar51,uVar53,0);
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059d89a0);
      }
      puVar33 = (ulong *)0x0;
      puVar48 = (ulong *)0x0;
      puVar32 = (ulong *)0x0;
      puVar37 = (ulong *)func_0x03627590(puVar64,pcVar77);
      if (puVar46 != (ulong *)0x0) {
        puVar33 = *(ulong **)((long)register0x00000008 + -0x5b0);
        puVar48 = *(ulong **)((long)register0x00000008 + -0x5a8);
        puVar56 = (ulong *)0x0;
        *(undefined8 *)((long)register0x00000008 + -0x5c0) = 0;
        puVar32 = puVar35;
        plVar71 = plVar55;
        func_0x03683960(puVar46,puVar57);
        puVar54 = puVar37;
        if (uVar62 != 0) {
          func_0x0387f2c8(uVar62,puVar64,lVar51,puVar36,0);
          goto LAB_033c1e24;
        }
      }
    }
  }
  auVar93 = func_0x0249fb90();
  lVar61 = auVar93._8_8_;
  plVar68 = auVar93._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x620) = 0x33c1e5c;
  *(long **)((long)register0x00000008 + -0x610) = plVar55;
  *(ulong **)((long)register0x00000008 + -0x608) = puVar64;
  *(ulong **)((long)register0x00000008 + -0x600) = puVar46;
  *(ulong *)((long)register0x00000008 + -0x5f8) = uVar62;
  *(ulong **)((long)register0x00000008 + -0x5f0) = puVar35;
  *(long *)((long)register0x00000008 + -0x5e8) = lVar51;
  *(ulong **)((long)register0x00000008 + -0x5e0) = puVar36;
  *(long *)((long)register0x00000008 + -0x5d8) = lVar52;
  *(ulong **)((long)register0x00000008 + -0x5d0) = puVar57;
  *(ulong **)((long)register0x00000008 + -0x5c8) = puVar58;
  plVar47 = plVar71;
  puVar46 = puVar56;
  if ((bRam0000000005e2c3ca & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a34898);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3ca = 1;
  }
  puVar36 = (ulong *)0x0;
  puVar45 = (undefined8 *)func_0x036f6778(puVar48,lVar61,plVar71,plVar68);
  puVar58 = (ulong *)0x0;
  puVar57 = puVar33;
  puVar35 = (ulong *)func_0x036f58fc(puVar48,plVar68);
  if (((ulong)puVar35 & 1) == 0) {
    return puVar35;
  }
  if (plVar68 != (long *)0x0) {
    lVar61 = *plVar68;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
          puVar38 = (undefined8 *)(lVar61 + (long)(*piVar63 + 4) * 0x10 + 0x138);
          goto LAB_033c1f80;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar38 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059e0220,4);
LAB_033c1f80:
    lVar61 = (*(code *)*puVar38)(plVar68,puVar38[1]);
    plVar55 = (long *)((long)puVar45 >> 0x20);
    puVar64 = (ulong *)&DAT_05a34898;
    puVar57 = (ulong *)((long)register0x00000008 + -0x628);
    *(undefined8 *)((long)register0x00000008 + -0x638) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x630) = 0;
    *(int *)((long)register0x00000008 + -0x614) = (int)puVar45;
    *(long **)((long)register0x00000008 + -0x628) = plVar55;
    puVar58 = _DAT_05a34898;
    func_0x02953678((undefined1 *)((long)register0x00000008 + -0x638),
                    (undefined1 *)((long)register0x00000008 + -0x614));
    if (lVar61 != 0) {
      puVar57 = *(ulong **)((long)register0x00000008 + -0x630);
      puVar58 = (ulong *)0x0;
      puVar35 = (ulong *)func_0x03684c6c(lVar61,*(undefined8 *)((long)register0x00000008 + -0x638));
      if (((ulong)puVar35 & 1) == 0) {
        return puVar35;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar62 = func_0x0364fbdc(plVar68,0);
      if (puVar33 != (ulong *)0x0) {
        puVar36 = (ulong *)(uVar62 & 0xffffffff);
        puVar46 = (ulong *)0x0;
        plVar47 = plVar68;
        puVar57 = (ulong *)func_0x03780be8(puVar33,puVar32,plVar71,puVar56);
        if (((ulong)puVar57 & 1) == 0) {
          return puVar57;
        }
        puVar57 = (ulong *)((long)register0x00000008 + -0x628);
        *(undefined8 *)((long)register0x00000008 + -0x638) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x630) = 0;
        *(int *)((long)register0x00000008 + -0x614) = (int)puVar45;
        *(long **)((long)register0x00000008 + -0x628) = plVar55;
        puVar58 = _DAT_05a34898;
        func_0x02953678((undefined1 *)((long)register0x00000008 + -0x638),
                        (undefined1 *)((long)register0x00000008 + -0x614));
        if (puVar48 != (ulong *)0x0) {
          uVar28 = func_0x036d392c(puVar48,0);
          lVar52 = *plVar68;
          uVar60 = puVar33[6];
          uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                goto LAB_033c20b0;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059df8e8,5);
LAB_033c20b0:
          uVar53 = (*(code *)*puVar45)(plVar68,puVar45[1]);
          uVar53 = func_0x036d62d4(puVar48,uVar53,0);
          if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059d89a0);
          }
          uVar53 = func_0x03627590(uVar60,uVar53,0,0,0);
          *(undefined8 *)((long)register0x00000008 + -0x650) = _DAT_05a93bf8;
          *(undefined8 *)((long)register0x00000008 + -0x648) = 0;
          puVar33 = (ulong *)func_0x03685074(lVar61,plVar68,
                                             *(undefined8 *)((long)register0x00000008 + -0x638),
                                             *(undefined8 *)((long)register0x00000008 + -0x630),8,
                                             uVar28,0,uVar53);
          return puVar33;
        }
      }
    }
  }
  plVar49 = (long *)func_0x0249fb90();
  *(undefined8 *)((long)register0x00000008 + -0x690) = 0x33c2158;
  *(ulong **)((long)register0x00000008 + -0x688) = puVar32;
  *(long **)((long)register0x00000008 + -0x680) = plVar71;
  *(ulong **)((long)register0x00000008 + -0x678) = puVar56;
  *(long *)((long)register0x00000008 + -0x670) = lVar61;
  *(ulong **)((long)register0x00000008 + -0x668) = puVar33;
  *(ulong **)((long)register0x00000008 + -0x660) = puVar48;
  *(long **)((long)register0x00000008 + -0x658) = plVar68;
  puVar33 = puVar36;
  puVar48 = puVar46;
  if ((bRam0000000005e2c3cb & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3cb = 1;
  }
  puVar35 = (ulong *)0x0;
  puVar32 = puVar57;
  puVar56 = (ulong *)func_0x036f58fc(puVar58,plVar49);
  if (((ulong)puVar56 & 1) == 0) {
    return puVar56;
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar62 = func_0x0364fbdc(plVar49,0);
  if (puVar57 == (ulong *)0x0) {
    auVar93 = func_0x0249fb90();
    auVar12._8_8_ = 0x5e2c000;
    auVar12._0_8_ = puVar32;
    auVar11._8_8_ = 0x5e2c000;
    auVar11._0_8_ = puVar32;
    auVar10._8_8_ = 0x5e2c000;
    auVar10._0_8_ = puVar32;
    lVar51 = auVar93._8_8_;
    lVar52 = auVar93._0_8_;
    *(code **)((long)register0x00000008 + -0x6f0) = pcVar77;
    *(undefined8 *)((long)register0x00000008 + -0x6e8) = 0x33c2228;
    *(long **)((long)register0x00000008 + -0x6e0) = plVar55;
    *(ulong **)((long)register0x00000008 + -0x6d8) = puVar64;
    *(undefined8 **)((long)register0x00000008 + -0x6d0) = puVar45;
    *(undefined8 *)((long)register0x00000008 + -0x6c8) = 0x5e2c000;
    *(ulong **)((long)register0x00000008 + -0x6c0) = puVar58;
    *(undefined8 *)((long)register0x00000008 + -0x6b8) = 0;
    *(long **)((long)register0x00000008 + -0x6b0) = plVar49;
    *(ulong **)((long)register0x00000008 + -0x6a8) = puVar36;
    *(ulong **)((long)register0x00000008 + -0x6a0) = puVar46;
    *(ulong **)((long)register0x00000008 + -0x698) = puVar54;
    lVar61 = 0x5e2c000;
    pcVar67 = (code *)&DAT_059efcf8;
    puVar56 = puVar32;
    puVar46 = puVar35;
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
    *(undefined8 *)((long)register0x00000008 + -0x758) = 0;
    puVar73 = (undefined *)func_0x0249fb80(_DAT_059efcf8);
    func_0x0378ae54(puVar73,0);
    if ((lVar52 != 0) && (lVar39 = *(long *)(lVar52 + 0x220), auVar10 = auVar11, lVar39 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x858) = *(undefined8 *)(lVar52 + 0x218);
      func_0x0387f3b8((undefined1 *)((long)register0x00000008 + -0x750),lVar39,0);
      auVar10 = auVar12;
      if (puVar73 != (undefined *)0x0) {
        lVar61 = *(long *)((long)register0x00000008 + -0x748);
        puVar46 = *(ulong **)((long)register0x00000008 + -0x740);
        puVar45 = (undefined8 *)(puVar73 + 0x10);
        *puVar45 = *(undefined8 *)((long)register0x00000008 + -0x750);
        puVar56 = (ulong *)func_0x0249f888(puVar45);
        if (lVar51 == 0) {
          return puVar56;
        }
        pcVar67 = (code *)&DAT_05a30640;
        uVar53 = *(undefined8 *)(lVar51 + 0x30);
        uVar34 = *puVar45;
        if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar56 = (ulong *)func_0x02903704(uVar53,uVar34,_DAT_05a30640);
        if (((ulong)puVar56 & 1) == 0) {
          return puVar56;
        }
        uVar62 = func_0x037885f4(lVar51,puVar46,0);
        puVar57 = puVar46;
        if ((uVar62 & 1) == 0) {
          puVar33 = (ulong *)0x0;
          uVar62 = func_0x037c7a80(*(undefined8 *)(lVar51 + 0x90),puVar46,lVar51,
                                   (undefined1 *)((long)register0x00000008 + -0x758));
          puVar57 = *(ulong **)((long)register0x00000008 + -0x758);
          if ((uVar62 & 1) == 0) {
            puVar57 = puVar46;
          }
        }
        auVar14._8_8_ = puVar57;
        auVar14._0_8_ = puVar32;
        auVar13._8_8_ = puVar57;
        auVar13._0_8_ = puVar32;
        auVar10._8_8_ = puVar57;
        plVar55 = (long *)func_0x03633aec(lVar52,0);
        pcVar77 = (code *)func_0x0249fb80(_DAT_059c6530);
        func_0x02a9aa34(pcVar77,puVar73,_DAT_05a69f48,0);
        puVar46 = _DAT_05a42428;
        func_0x026e5b0c(plVar55,pcVar77,(undefined1 *)((long)register0x00000008 + -0x750));
        puVar73 = *(undefined **)((long)register0x00000008 + -0x750);
        uVar62 = func_0x037885f4(lVar51,puVar57,0);
        if ((uVar62 & 1) == 0) {
          plVar55 = (long *)func_0x0376e450(lVar51,puVar57,0);
          puVar56 = (ulong *)func_0x03659ee0(lVar52,0);
          if (*(long *)((long)register0x00000008 + -0x858) != 0) {
            func_0x03687a50(*(long *)((long)register0x00000008 + -0x858),plVar55,puVar56,*puVar45,
                            puVar73,0);
            func_0x037789bc(lVar51,lVar52,puVar57,puVar32,1,0);
            plVar47 = (long *)0x0;
            puVar48 = (ulong *)0x0;
            *(undefined8 *)((long)register0x00000008 + -0x870) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x7a8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x7b0) = 0;
            puVar56 = puVar57;
            puVar46 = puVar57;
            puVar33 = puVar32;
            func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x7b0),10);
            lVar39 = _DAT_059c9978;
            auVar10 = auVar13;
            if (puVar35 != (ulong *)0x0) {
              func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x800),
                              (undefined1 *)((long)register0x00000008 + -0x7b0),0x50);
              uVar60 = *puVar35;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == lVar39) {
                    puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                    goto LAB_033c253c;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(puVar35,lVar39,2);
LAB_033c253c:
              pcVar67 = (code *)*puVar45;
              func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x750),
                              (undefined1 *)((long)register0x00000008 + -0x800),0x50);
              (*pcVar67)(puVar35,(undefined1 *)((long)register0x00000008 + -0x750),puVar45[1]);
              goto LAB_033c2560;
            }
          }
        }
        else {
LAB_033c2560:
          puVar45 = (undefined8 *)func_0x0249fb80(_DAT_059de230);
          func_0x034a1470(puVar45,lVar52,0);
          func_0x03785f38(lVar51,puVar57,lVar61,puVar32,puVar45,lVar52,0);
          plVar47 = (long *)0x0;
          puVar48 = (ulong *)0x0;
          *(undefined8 *)((long)register0x00000008 + -0x870) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7b0) = 0;
          puVar56 = puVar57;
          puVar46 = puVar57;
          func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x7b0),9);
          lVar39 = _DAT_059c9978;
          puVar33 = puVar32;
          auVar10 = auVar14;
          if (puVar35 != (ulong *)0x0) {
            func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x850),
                            (undefined1 *)((long)register0x00000008 + -0x7b0),0x50);
            uVar60 = *puVar35;
            uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == lVar39) {
                  puVar38 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                  puVar33 = puVar32;
                  goto LAB_033c264c;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar38 = (undefined8 *)func_0x024d927c(puVar35,lVar39,2);
            puVar33 = puVar32;
LAB_033c264c:
            auVar10._0_8_ = puVar38;
            pcVar67 = (code *)*puVar38;
            func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x750),
                            (undefined1 *)((long)register0x00000008 + -0x850),0x50);
            (*pcVar67)(puVar35,(undefined1 *)((long)register0x00000008 + -0x750),puVar38[1]);
            puVar56 = (ulong *)func_0x03659ee0(lVar52,0);
            puVar46 = (ulong *)0x0;
            auVar93 = func_0x03788520(lVar51,lVar61);
            if (lVar61 != 0) {
              uVar62 = func_0x036d392c(lVar61,0);
              puVar35 = (ulong *)(uVar62 & 0xffffffff);
              uVar53 = func_0x03659ee0(lVar52,0);
              lVar61 = func_0x036d62d4(lVar61,uVar53,0);
              *(undefined8 *)((long)register0x00000008 + -0x750) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x748) = 0;
              *(int *)((long)register0x00000008 + -0x6f4) = auVar93._0_4_;
              *(long *)((long)register0x00000008 + -0x700) = auVar93._8_8_;
              func_0x02953678((undefined1 *)((long)register0x00000008 + -0x750),
                              (undefined1 *)((long)register0x00000008 + -0x6f4),
                              (undefined1 *)((long)register0x00000008 + -0x700),_DAT_05a34898);
              lVar51 = *(long *)(lVar51 + 0x30);
              if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              puVar56 = (ulong *)0x0;
              puVar46 = (ulong *)0x0;
              puVar33 = (ulong *)0x0;
              uVar53 = func_0x03627590(lVar51,lVar61);
              auVar10 = auVar93;
              if (*(long *)((long)register0x00000008 + -0x858) != 0) {
                *(undefined8 *)((long)register0x00000008 + -0x870) = _DAT_05a93bf8;
                *(undefined8 *)((long)register0x00000008 + -0x868) = 0;
                puVar33 = (ulong *)func_0x03685074(*(long *)((long)register0x00000008 + -0x858),
                                                   lVar52,*(undefined8 *)
                                                           ((long)register0x00000008 + -0x750),
                                                   *(undefined8 *)
                                                    ((long)register0x00000008 + -0x748),0xb,puVar35,
                                                   0,uVar53);
                return puVar33;
              }
            }
          }
        }
      }
    }
    auVar93 = func_0x0249fb90();
    *(undefined8 *)((long)register0x00000008 + -0x8b0) = 0x33c2780;
    *(long *)((long)register0x00000008 + -0x8a8) = auVar10._8_8_;
    *(long *)((long)register0x00000008 + -0x8a0) = auVar10._0_8_;
    *(long *)((long)register0x00000008 + -0x898) = lVar61;
    *(ulong **)((long)register0x00000008 + -0x890) = puVar35;
    *(code **)((long)register0x00000008 + -0x888) = pcVar67;
    *(long *)((long)register0x00000008 + -0x880) = lVar51;
    *(long *)((long)register0x00000008 + -0x878) = lVar52;
    if ((bRam0000000005e2c3cd & 1) == 0) {
      func_0x0249f8e4(&DAT_05a43c28);
      func_0x0249f8e4(&DAT_059d7400);
      bRam0000000005e2c3cd = 1;
    }
    puVar32 = (ulong *)func_0x0249fa68(puVar46,_DAT_059d7400);
    if (puVar32 == (ulong *)0x0) {
      puVar32 = (ulong *)func_0x026ebbf4(puVar46,_DAT_05a43c28);
    }
    *(code **)((long)register0x00000008 + -0x910) = pcVar77;
    *(undefined8 *)((long)register0x00000008 + -0x908) = 0x33c281c;
    *(long **)((long)register0x00000008 + -0x900) = plVar55;
    *(undefined **)((long)register0x00000008 + -0x8f8) = puVar73;
    *(undefined8 **)((long)register0x00000008 + -0x8f0) = puVar45;
    *(undefined **)((long)register0x00000008 + -0x8e8) = &DAT_059d7400;
    *(ulong **)((long)register0x00000008 + -0x8e0) = puVar46;
    *(ulong **)((long)register0x00000008 + -0x8d8) = puVar32;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x8d0) = auVar93;
    *(ulong **)((long)register0x00000008 + -0x8c0) = puVar56;
    *(ulong **)((long)register0x00000008 + -0x8b8) = puVar33;
    puVar57 = puVar56;
    puVar54 = puVar32;
    puVar46 = puVar33;
    if ((bRam0000000005e2c3ce & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_05a29a88);
      func_0x0249f8e4(&DAT_059d4060);
      bRam0000000005e2c3ce = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x920) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x918) = 0;
    puVar58 = (ulong *)0x5e2c000;
    puVar64 = (ulong *)&DAT_059d7400;
    if (auVar93._8_8_ == 0) {
LAB_033c2a80:
      puVar35 = puVar58;
      puVar36 = puVar54;
      func_0x0249fb90();
    }
    else {
      puVar57 = (ulong *)0x0;
      puVar35 = (ulong *)func_0x0376e450(auVar93._8_8_,puVar56);
      if (puVar35 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      if (puVar32 == (ulong *)0x0) goto LAB_033c2a80;
      uVar29 = (uint)puVar32[3];
      bVar1 = 0 < (int)uVar29;
      if ((int)uVar29 < 1) {
        return (ulong *)0x0;
      }
      plVar55 = (long *)&DAT_059d4060;
      pcVar77 = (code *)&DAT_05a29a88;
      puVar73 = (undefined *)0x0;
      while( true ) {
        puVar45 = (undefined8 *)(ulong)bVar1;
        uVar76 = (uint)puVar73;
        puVar36 = puVar54;
        if (uVar29 <= uVar76) break;
        puVar36 = (ulong *)puVar32[(long)(int)uVar76 + 4];
        puVar58 = puVar35;
        puVar64 = puVar36;
        if (puVar36 == (ulong *)0x0) goto LAB_033c2a80;
        uVar60 = *puVar36;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
              puVar38 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0x28) * 0x10 + 0x138);
              goto LAB_033c29c0;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar38 = (undefined8 *)func_0x024d927c(puVar36,_DAT_059defe8,0x28);
LAB_033c29c0:
        puVar46 = (ulong *)puVar38[1];
        puVar57 = puVar35;
        puVar54 = puVar33;
        auVar91 = (*(code *)*puVar38)(puVar36,auVar93._0_8_);
        *(undefined1 (*) [16])((long)register0x00000008 + -0x920) = auVar91;
        if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar61 = *(long *)(_DAT_05a29a88 + 0x20);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        pcVar42 = (char *)func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x920),
                                          *(long *)(**(long **)(lVar61 + 0xc0) + 0x80) + 0x20);
        if (*pcVar42 != '\0') {
          uVar53 = 0x33c2a40;
          puVar57 = puVar56;
          puVar46 = puVar33;
          auVar91 = auVar93;
          goto SUB_033c2a88;
        }
        uVar29 = (uint)puVar32[3];
        uVar76 = uVar76 + 1;
        puVar73 = (undefined *)(ulong)uVar76;
        bVar1 = (int)uVar76 < (int)uVar29;
        if ((int)uVar29 <= (int)uVar76) {
          return (ulong *)0x0;
        }
      }
    }
    uVar53 = 0x33c2a88;
    auVar91 = func_0x0249fb98();
SUB_033c2a88:
    plVar71 = auVar91._8_8_;
    puVar54 = auVar91._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x960) = uVar53;
    *(ulong **)((long)register0x00000008 + -0x958) = puVar64;
    *(ulong **)((long)register0x00000008 + -0x950) = puVar35;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x948) = auVar93;
    *(ulong **)((long)register0x00000008 + -0x938) = puVar56;
    *(ulong **)((long)register0x00000008 + -0x930) = puVar32;
    *(ulong **)((long)register0x00000008 + -0x928) = puVar33;
    puVar70 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d0 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a3c7c0);
      func_0x0249f8e4(&DAT_059defe8);
      bRam0000000005e2c3d0 = 1;
    }
    *(undefined1 *)((long)register0x00000008 + -0x964) = 0;
    puVar58 = (ulong *)func_0x026bf824(puVar36,_DAT_05a3c7c0);
    *(undefined8 *)((long)register0x00000008 + -0x9c0) = 0x33c2b0c;
    *(undefined8 **)((long)register0x00000008 + -0x9b0) = puVar45;
    *(undefined8 *)((long)register0x00000008 + -0x9a8) = 0x5e2c000;
    *(undefined **)((long)register0x00000008 + -0x9a0) = &DAT_05a3c7c0;
    *(ulong **)((long)register0x00000008 + -0x998) = puVar36;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x990) = auVar91;
    *(ulong **)((long)register0x00000008 + -0x980) = puVar57;
    *(ulong **)((long)register0x00000008 + -0x978) = puVar46;
    puVar74 = (undefined *)0x5e2c000;
    puVar32 = puVar57;
    puVar33 = puVar58;
    puVar56 = puVar46;
    if ((bRam0000000005e2c3cf & 1) == 0) {
      func_0x0249f8e4(&DAT_059defe8);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca768);
      func_0x0249f8e4(&DAT_059cbac8);
      func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e2c3cf = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x9b8) = 0;
    if (plVar71 != (long *)0x0) {
      puVar32 = (ulong *)0x0;
      puVar64 = (ulong *)func_0x0376e450(plVar71,puVar57);
      if (puVar64 == (ulong *)0x0) {
        puVar58 = (ulong *)0x0;
        goto LAB_033c2f48;
      }
      if (puVar58 != (ulong *)0x0) {
        uVar60 = *puVar58;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059ca768) {
              puVar38 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_033c2ce4;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar32 = (ulong *)0x0;
        puVar38 = (undefined8 *)func_0x024d927c(puVar58);
LAB_033c2ce4:
        plVar68 = (long *)(*(code *)*puVar38)(puVar58,puVar38[1]);
        *(long **)((long)register0x00000008 + -0x9b8) = plVar68;
        *(undefined8 *)((long)register0x00000008 + -0x9d0) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x9c8) =
             (undefined1 *)((long)register0x00000008 + -0x9b8);
        if (plVar68 != (long *)0x0) {
          puVar74 = &DAT_059df6e0;
          puVar70 = &DAT_059cbac8;
          puVar45 = (undefined8 *)&DAT_059defe8;
          do {
            lVar61 = *plVar68;
            uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
                  puVar38 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c2d68;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar32 = (ulong *)0x0;
            puVar38 = (undefined8 *)func_0x024d927c(plVar68);
LAB_033c2d68:
            uVar62 = (*(code *)*puVar38)(plVar68,puVar38[1]);
            puVar58 = (ulong *)(uVar62 & 0xffffffff);
            if ((uVar62 & 1) == 0) goto LAB_033c2ed0;
            plVar71 = *(long **)((long)register0x00000008 + -0x9b8);
            if (plVar71 == (long *)0x0) {
              func_0x0249fb90();
              plVar71 = (long *)0x0;
LAB_033c2f74:
              func_0x0249fb90();
              puVar57 = puVar64;
              goto LAB_033c2f78;
            }
            lVar61 = *plVar71;
            uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059cbac8) {
                  puVar38 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c2dd0;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar38 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059cbac8,0);
LAB_033c2dd0:
            plVar71 = (long *)(*(code *)*puVar38)(plVar71,puVar38[1]);
            puVar33 = (ulong *)0x0;
            puVar32 = puVar46;
            uVar62 = func_0x036d05a4(puVar64,puVar54);
            if ((uVar62 & 1) != 0) {
              if (plVar71 == (long *)0x0) goto LAB_033c2f74;
              lVar61 = *plVar71;
              uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
                    puVar38 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x27) * 0x10 + 0x138);
                    goto LAB_033c2e4c;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar38 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059defe8,0x27);
LAB_033c2e4c:
              puVar33 = (ulong *)puVar38[1];
              puVar32 = puVar54;
              uVar62 = (*(code *)*puVar38)(plVar71,puVar64);
              if ((uVar62 & 1) != 0) {
                lVar61 = *plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
                      puVar38 = (undefined8 *)(lVar61 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                      goto LAB_033c2eb4;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar32 = (ulong *)0x3;
                puVar38 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c2eb4:
                uVar62 = (*(code *)*puVar38)(plVar71,puVar38[1]);
                if ((uVar62 & 1) == 0) goto LAB_033c2ed8;
              }
            }
            plVar68 = *(long **)((long)register0x00000008 + -0x9b8);
          } while (plVar68 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c2ed0:
        puVar58 = (ulong *)0x0;
LAB_033c2ed8:
        puVar46 = (ulong *)0x0;
        puVar38 = (undefined8 *)((long)register0x00000008 + -0x9b8);
        goto LAB_033c2edc;
      }
    }
LAB_033c2f78:
    func_0x0249fb90();
    puVar64 = puVar57;
    do {
      auVar15._8_8_ = puVar58;
      auVar15._0_8_ = puVar64;
      auVar94 = func_0x0249fb88(puVar46);
      puVar46 = auVar94._0_8_;
      if (auVar94._8_4_ != 1) {
        func_0x022bd79c((undefined1 *)((long)register0x00000008 + -0x9d0));
        func_0x0258f7ac(puVar46);
        auVar93 = func_0x022bd790();
        lVar61 = auVar93._8_8_;
        uVar53 = auVar93._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0xa10) = 0x33c2fe4;
        *(undefined **)((long)register0x00000008 + -0xa00) = puVar74;
        *(long **)((long)register0x00000008 + -0x9f8) = plVar71;
        *(ulong **)((long)register0x00000008 + -0x9f0) = puVar58;
        *(ulong **)((long)register0x00000008 + -0x9e8) = puVar64;
        *(ulong **)((long)register0x00000008 + -0x9e0) = puVar54;
        *(ulong **)((long)register0x00000008 + -0x9d8) = puVar46;
        *(undefined1 *)((long)register0x00000008 + -0xa04) = 0;
        puVar57 = puVar32;
        puVar58 = puVar33;
        puVar64 = puVar56;
        if (lVar61 != 0) {
          puVar74 = (undefined *)func_0x0376e450(lVar61,puVar32,0);
          if (puVar74 == (undefined *)0x0) {
            return (ulong *)0x0;
          }
          puVar58 = (ulong *)0x0;
          puVar57 = puVar56;
          uVar62 = func_0x036d05a4(puVar74,uVar53);
          if ((uVar62 & 1) == 0) {
            return (ulong *)0x0;
          }
          plVar71 = (long *)0x0;
          puVar46 = puVar56;
          puVar54 = puVar32;
          auVar15 = auVar93;
          if (puVar33 != (ulong *)0x0) {
            uVar62 = func_0x0362cd70(puVar33,0);
            if ((uVar62 & 1) != 0) {
              return (ulong *)0x0;
            }
            func_0x0362d1c8(puVar33,uVar53,puVar74,puVar56,
                            (undefined1 *)((long)register0x00000008 + -0xa04),0);
            func_0x037789bc(lVar61,uVar53,puVar32,puVar56,0,0);
            return (ulong *)0x1;
          }
        }
        auVar93 = func_0x0249fb90();
        plVar68 = auVar93._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0xa40) = 0x33c30ac;
        *(long *)((long)register0x00000008 + -0xa30) = auVar15._8_8_;
        *(long *)((long)register0x00000008 + -0xa28) = auVar15._0_8_;
        *(ulong **)((long)register0x00000008 + -0xa20) = puVar54;
        *(ulong **)((long)register0x00000008 + -0xa18) = puVar46;
        uVar62 = auVar93._8_8_ & 0xffffffff;
        puVar33 = puVar57;
        if ((bRam0000000005e2c3d1 & 1) == 0) {
          func_0x0249f8e4(&DAT_059db250);
          func_0x0249f8e4(&DAT_059defe8);
          bRam0000000005e2c3d1 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0xa38) = 0;
        if (plVar68 != (long *)0x0) {
          lVar61 = *plVar68;
          uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar60 == 0) goto LAB_033c3130;
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          goto LAB_033c3118;
        }
        auVar93 = func_0x0249fb90();
        plVar68 = auVar93._8_8_;
        lVar61 = auVar93._0_8_;
        *(code **)((long)register0x00000008 + -0xaa0) = pcVar77;
        *(undefined8 *)((long)register0x00000008 + -0xa98) = 0x33c31c0;
        *(long **)((long)register0x00000008 + -0xa90) = plVar55;
        *(undefined **)((long)register0x00000008 + -0xa88) = puVar73;
        *(undefined8 **)((long)register0x00000008 + -0xa80) = puVar45;
        *(undefined **)((long)register0x00000008 + -0xa78) = puVar70;
        *(undefined **)((long)register0x00000008 + -0xa70) = puVar74;
        *(long **)((long)register0x00000008 + -0xa68) = plVar71;
        *(undefined8 *)((long)register0x00000008 + -0xa60) = 0x5e2c000;
        *(undefined8 *)((long)register0x00000008 + -0xa58) = 0;
        *(ulong *)((long)register0x00000008 + -0xa50) = uVar62;
        *(ulong **)((long)register0x00000008 + -0xa48) = puVar57;
        uVar62 = (ulong)puVar48 & 0xffffffff;
        uVar60 = (ulong)puVar33 & 0xffffffff;
        auVar82._8_8_ = 0x5e2c000;
        auVar82._0_8_ = uVar60;
        puVar32 = puVar58;
        puVar56 = puVar64;
        plVar71 = plVar47;
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
        *(undefined8 *)((long)register0x00000008 + -0xaa8) = 0;
        if (plVar68 == (long *)0x0) goto LAB_033c36d4;
        lVar52 = *plVar68;
        puVar73 = &DAT_059defe8;
        uVar59 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar59 == 0) goto LAB_033c32b8;
        piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
        goto LAB_033c32a0;
      }
      puVar38 = (undefined8 *)func_0x054ed080(puVar46);
      puVar46 = (ulong *)*puVar38;
      *(ulong **)((long)register0x00000008 + -0x9d0) = puVar46;
      func_0x054ed090();
      puVar38 = *(undefined8 **)((long)register0x00000008 + -0x9c8);
      puVar58 = (ulong *)0x0;
LAB_033c2edc:
      puVar54 = (ulong *)*puVar38;
      if (puVar54 != (ulong *)0x0) {
        uVar60 = *puVar54;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df598) {
              puVar38 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_033c2f38;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar32 = (ulong *)0x0;
        puVar38 = (undefined8 *)func_0x024d927c(puVar54);
LAB_033c2f38:
        (*(code *)*puVar38)(puVar54,puVar38[1]);
      }
    } while (puVar46 != (ulong *)0x0);
LAB_033c2f48:
    return (ulong *)(ulong)((uint)puVar58 & 1);
  }
  puVar58 = (ulong *)(uVar62 & 0xffffffff);
  puVar33 = *(ulong **)((long)register0x00000008 + -0x680);
  *(code **)((long)register0x00000008 + -0x6a0) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0x698) =
       *(undefined8 *)((long)register0x00000008 + -0x690);
  *(undefined8 **)((long)register0x00000008 + -0x690) = puVar45;
  *(undefined8 *)((long)register0x00000008 + -0x688) =
       *(undefined8 *)((long)register0x00000008 + -0x688);
  *(ulong **)((long)register0x00000008 + -0x680) = puVar33;
  *(undefined8 *)((long)register0x00000008 + -0x678) =
       *(undefined8 *)((long)register0x00000008 + -0x678);
  *(undefined8 *)((long)register0x00000008 + -0x670) =
       *(undefined8 *)((long)register0x00000008 + -0x670);
  *(undefined8 *)((long)register0x00000008 + -0x668) =
       *(undefined8 *)((long)register0x00000008 + -0x668);
  *(undefined8 *)((long)register0x00000008 + -0x660) =
       *(undefined8 *)((long)register0x00000008 + -0x660);
  *(undefined8 *)((long)register0x00000008 + -0x658) =
       *(undefined8 *)((long)register0x00000008 + -0x658);
  puVar48 = puVar46;
  puVar32 = puVar54;
  puVar56 = puVar58;
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
  *(undefined8 *)((long)register0x00000008 + -0x700) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x6f8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x710) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x708) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x720) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x718) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x730) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x728) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x738) = 0;
  lVar52 = func_0x0376e450(puVar57,puVar36);
  lVar61 = 0x5e2d000;
  if (plVar49 != (long *)0x0) {
    lVar61 = *plVar49;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xc) * 0x10 + 0x138);
          goto LAB_0378149c;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059e0220,0xc);
LAB_0378149c:
    puVar33 = (ulong *)(*(code *)*puVar45)(plVar49,puVar45[1]);
    if ((lVar52 == 0) || (uVar62 = func_0x036f58fc(lVar52,plVar49,puVar57,0), (uVar62 & 1) == 0)) {
      return (ulong *)0x0;
    }
    lVar61 = *plVar49;
    puVar57 = (ulong *)&DAT_059df8e8;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03781528;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df8e8,5);
LAB_03781528:
    uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
    uVar62 = func_0x036edd98(lVar52,uVar53,0);
    if (((uVar62 & 1) == 0) || (uVar62 = func_0x036ee320(lVar52,plVar49,0), (uVar62 & 1) != 0)) {
LAB_037815f0:
      lVar61 = *plVar49;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_03781640;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df8e8,5);
LAB_03781640:
      uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
      uVar62 = func_0x036edd98(lVar52,uVar53,0);
      if (((uVar62 & 1) == 0) || (uVar62 = func_0x036ee320(lVar52,plVar49,0), (uVar62 & 1) != 0)) {
        lVar61 = *plVar49;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
              goto LAB_03781750;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df8e8,5);
LAB_03781750:
        uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
        uVar62 = func_0x036f619c(lVar52,uVar53,0);
        if ((uVar62 & 1) != 0) {
          lVar61 = *plVar49;
          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                goto LAB_037817c0;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df8e8,5);
LAB_037817c0:
          uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
          uVar62 = func_0x036f66a8(lVar52,uVar53,0);
          if ((uVar62 & 1) == 0) {
            auVar93 = func_0x036f56f8(lVar52,puVar33,0);
            *(undefined1 (*) [16])((long)register0x00000008 + -0x738) = auVar93;
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            lVar61 = *(long *)(_DAT_05a29c90 + 0x20);
            if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
              lVar61 = func_0x024d8f40();
            }
            pcVar42 = (char *)func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x738),
                                              *(long *)(**(long **)(lVar61 + 0xc0) + 0x80) + 0x20);
            if (*pcVar42 != '\0') {
              if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar53 = func_0x0352ece0(puVar46,0);
              goto LAB_03781874;
            }
          }
        }
      }
      else {
        auVar93 = func_0x036f52d8(lVar52,puVar33,0);
        *(undefined1 (*) [16])((long)register0x00000008 + -0x728) = auVar93;
        lVar61 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        pcVar42 = (char *)func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x728),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar61 + 0xc0) + 8) + 0x80));
        if (*pcVar42 != '\0') {
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar53 = func_0x0352ece0(puVar46,0);
LAB_03781728:
          func_0x037812b8(plVar49,lVar52,uVar53,puVar58);
        }
      }
    }
    else {
      lVar61 = *plVar49;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_037815ac;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059df8e8,5);
LAB_037815ac:
      uVar53 = (*(code *)*puVar45)(plVar49,puVar45[1]);
      uVar62 = func_0x036f619c(lVar52,uVar53,0);
      if ((uVar62 & 1) == 0) goto LAB_037815f0;
      uVar53 = func_0x022bffa8(5,_DAT_059df8e8,plVar49);
      uVar62 = func_0x036f66a8(lVar52,uVar53,0);
      if ((uVar62 & 1) != 0) goto LAB_037815f0;
      auVar93 = func_0x036f52d8(lVar52,puVar33,0);
      *(undefined1 (*) [16])((long)register0x00000008 + -0x700) = auVar93;
      auVar93 = func_0x036f56f8(lVar52,puVar33,0);
      *(undefined1 (*) [16])((long)register0x00000008 + -0x718) = auVar93;
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar62 = func_0x0288eda8((undefined1 *)((long)register0x00000008 + -0x718),
                               (undefined1 *)((long)register0x00000008 + -0x708),_DAT_05a29c88);
      puVar46 = (ulong *)(uVar62 & 0xffffffff);
      uVar60 = func_0x022bf4f8((undefined1 *)((long)register0x00000008 + -0x700),_DAT_05a27ee0);
      if ((uVar60 & 1) != 0) {
        if ((uVar62 & 1) != 0) {
          func_0x02886844((undefined1 *)((long)register0x00000008 + -0x700),
                          (undefined1 *)((long)register0x00000008 + -0x6f0),_DAT_05a27ee8);
          uVar53 = *(undefined8 *)((long)register0x00000008 + -0x6f0);
          puVar57 = *(ulong **)((long)register0x00000008 + -0x708);
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar62 = func_0x042542f4(uVar53,puVar57,0);
          if ((uVar62 & 1) == 0) goto LAB_03781ab4;
        }
        func_0x02886844((undefined1 *)((long)register0x00000008 + -0x700),
                        (undefined1 *)((long)register0x00000008 + -0x6f0),_DAT_05a27ee8);
        uVar53 = *(undefined8 *)((long)register0x00000008 + -0x6f0);
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar46 = (ulong *)func_0x0425449c(uVar53,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar53 = func_0x0352ed34(puVar46,0);
        goto LAB_03781728;
      }
      if ((uVar62 & 1) != 0) {
LAB_03781ab4:
        uVar53 = *(undefined8 *)((long)register0x00000008 + -0x708);
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar46 = (ulong *)func_0x0425449c(uVar53,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        uVar53 = func_0x0352ed34(puVar46,0);
LAB_03781874:
        func_0x0378130c(plVar49,lVar52,uVar53,puVar58);
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x7f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x758) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x760) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x748) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x750) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
    puVar48 = puVar36;
    puVar32 = puVar36;
    puVar56 = puVar33;
    func_0x034ba874((undefined1 *)((long)register0x00000008 + -0x790),0x11);
    lVar51 = _DAT_059c9978;
    lVar61 = lVar52;
    if (puVar54 != (ulong *)0x0) {
      func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x7e0),
                      (undefined1 *)((long)register0x00000008 + -0x790),0x50);
      uVar60 = *puVar54;
      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == lVar51) {
            puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
            goto LAB_03781934;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(puVar54,lVar51,2);
LAB_03781934:
      pcVar77 = (code *)*puVar45;
      func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x6f0),
                      (undefined1 *)((long)register0x00000008 + -0x7e0),0x50);
      (*pcVar77)(puVar54,(undefined1 *)((long)register0x00000008 + -0x6f0),puVar45[1]);
      return (ulong *)0x1;
    }
  }
  auVar88 = func_0x0249fb90();
  lVar52 = auVar88._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x850) = 0x3781b10;
  *(long **)((long)register0x00000008 + -0x840) = plVar55;
  *(ulong **)((long)register0x00000008 + -0x838) = puVar64;
  *(ulong **)((long)register0x00000008 + -0x830) = puVar57;
  *(ulong **)((long)register0x00000008 + -0x828) = puVar46;
  *(ulong **)((long)register0x00000008 + -0x820) = puVar33;
  *(long *)((long)register0x00000008 + -0x818) = lVar61;
  *(long **)((long)register0x00000008 + -0x810) = plVar49;
  *(ulong **)((long)register0x00000008 + -0x808) = puVar58;
  *(ulong **)((long)register0x00000008 + -0x800) = puVar36;
  *(ulong **)((long)register0x00000008 + -0x7f8) = puVar54;
  puVar54 = (ulong *)((ulong)puVar56 & 0xffffffff);
  pcVar67 = (code *)&DAT_059efeb0;
  puVar33 = puVar48;
  puVar46 = puVar32;
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
  *(undefined8 *)((long)register0x00000008 + -0x848) = 0;
  pcVar43 = (code *)func_0x0249fb80(_DAT_059efeb0);
  func_0x037c51f0(pcVar43,0);
  puVar58 = puVar48;
  if (pcVar43 == (code *)0x0) {
LAB_03781e4c:
    func_0x0249fb90();
    puVar36 = puVar54;
    while( true ) {
      puVar54 = puVar56;
      puVar48 = puVar33;
      auVar94 = func_0x0249fb88(puVar36);
      puVar33 = auVar94._0_8_;
      if (auVar94._8_4_ != 1) break;
      puVar45 = (undefined8 *)func_0x054ed080(puVar33);
      puVar36 = (ulong *)*puVar45;
      *(ulong **)((long)register0x00000008 + -0x860) = puVar36;
      puVar35 = (ulong *)func_0x054ed090();
      puVar45 = *(undefined8 **)((long)register0x00000008 + -0x858);
      puVar33 = puVar48;
      puVar56 = puVar54;
LAB_03781dc0:
      puVar58 = (ulong *)*puVar45;
      if (puVar58 != (ulong *)0x0) {
        uVar60 = *puVar58;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == *auVar88._0_8_) {
              puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_03781e14;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar33 = (ulong *)0x0;
        puVar45 = (undefined8 *)func_0x024d927c(puVar58);
LAB_03781e14:
        puVar35 = (ulong *)(*(code *)*puVar45)(puVar58,puVar45[1]);
      }
      if (puVar36 == (ulong *)0x0) {
        return puVar35;
      }
    }
    func_0x022bd79c((undefined1 *)((long)register0x00000008 + -0x860));
    func_0x0258f7ac(puVar33);
    uVar53 = 0x3781ea8;
    func_0x022bd790();
    plVar71 = extraout_x1_01;
  }
  else {
    puVar57 = (ulong *)&DAT_059c59a8;
    puVar64 = (ulong *)&DAT_05a6a1d8;
    plVar55 = (long *)&DAT_05a44708;
    pcVar67 = pcVar43 + 0x10;
    *(long *)pcVar67 = lVar52;
    func_0x0249f888(pcVar67,lVar52);
    *(ulong **)(pcVar43 + 0x18) = puVar32;
    func_0x0249f888(pcVar43 + 0x18,puVar32);
    puVar32 = (ulong *)func_0x0376e0dc(auVar88._0_8_);
    uVar53 = func_0x0249fb80(_DAT_059c59a8);
    auVar88._8_8_ = lVar52;
    auVar88._0_8_ = uVar53;
    puVar46 = (ulong *)0x0;
    func_0x02a9aa34(uVar53,pcVar43,_DAT_05a6a1d8);
    puVar33 = _DAT_05a44708;
    plVar71 = (long *)func_0x026ec554(puVar32,uVar53);
    if (plVar71 == (long *)0x0) goto LAB_03781e4c;
    lVar61 = *plVar71;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059c9f90) {
          puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_03781cac;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar33 = (ulong *)0x0;
    puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_03781cac:
    pcVar43 = (code *)&DAT_059cb2d8;
    auVar24._8_8_ = &DAT_059df6e0;
    auVar24._0_8_ = &DAT_059df598;
    auVar18._8_8_ = &DAT_059df6e0;
    auVar18._0_8_ = &DAT_059df598;
    auVar88._8_8_ = &DAT_059df6e0;
    auVar88._0_8_ = &DAT_059df598;
    uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    *(undefined8 *)((long)register0x00000008 + -0x848) = uVar53;
    *(undefined8 *)((long)register0x00000008 + -0x860) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x858) =
         (undefined1 *)((long)register0x00000008 + -0x848);
    puVar32 = *(ulong **)((long)register0x00000008 + -0x848);
    if (puVar32 == (ulong *)0x0) {
      func_0x0249fb90();
LAB_03781e48:
      func_0x0249fb90();
      goto LAB_03781e4c;
    }
    uVar60 = *puVar32;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
          puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_03781d30;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar33 = (ulong *)0x0;
    puVar45 = (undefined8 *)func_0x024d927c(puVar32);
LAB_03781d30:
    puVar35 = (ulong *)(*(code *)*puVar45)(puVar32,puVar45[1]);
    if (((ulong)puVar35 & 1) == 0) {
      puVar36 = (ulong *)0x0;
      puVar45 = (undefined8 *)((long)register0x00000008 + -0x848);
      auVar88 = auVar24;
      goto LAB_03781dc0;
    }
    puVar32 = *(ulong **)((long)register0x00000008 + -0x848);
    if (puVar32 == (ulong *)0x0) goto LAB_03781e48;
    uVar60 = *puVar32;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059cb2d8) {
          puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_03781d94;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar32,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*puVar45)(puVar32,puVar45[1]);
    plVar71 = *(long **)pcVar67;
    uVar53 = 0x3781db4;
    puVar46 = extraout_x1_00;
    puVar33 = puVar54;
    auVar88 = auVar18;
  }
  puVar73 = auVar88._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x890) = uVar53;
  *(long *)((long)register0x00000008 + -0x888) = auVar88._0_8_;
  *(ulong **)((long)register0x00000008 + -0x880) = puVar32;
  *(code **)((long)register0x00000008 + -0x878) = pcVar67;
  *(ulong **)((long)register0x00000008 + -0x870) = puVar58;
  *(ulong **)((long)register0x00000008 + -0x868) = puVar33;
  puVar56 = (ulong *)0x5e2d000;
  uVar62 = (ulong)puVar54 & 0xffffffff;
  puVar32 = puVar48;
  puVar33 = puVar46;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  if (plVar71 != (long *)0x0) {
    lVar61 = *plVar71;
    uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03781f64;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar32 = (ulong *)0x5;
    puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_03781f64:
    uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    if (puVar46 != (ulong *)0x0) {
      puVar32 = (ulong *)0x0;
      puVar58 = (ulong *)func_0x036d3908(puVar46,uVar53);
      if (puVar58 != (ulong *)0x0) {
        uVar59 = *puVar58;
        uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
        if (uVar60 != 0) {
          piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(uVar59 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_03781fe0;
            }
            uVar60 = uVar60 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar60 != 0);
        }
        puVar32 = (ulong *)0x0;
        puVar45 = (undefined8 *)func_0x024d927c(puVar58);
LAB_03781fe0:
        plVar47 = (long *)(*(code *)*puVar45)(puVar58,puVar45[1]);
        puVar56 = puVar58;
        if (plVar47 != (long *)0x0) {
          lVar61 = *plVar47;
          uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar60 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059e0788) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar60 = uVar60 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar60 != 0);
          }
          puVar32 = (ulong *)0x2;
          puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_0378204c:
          puVar56 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
          if (puVar56 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          if (*(byte *)(*puVar56 + 0x130) < *(byte *)(_DAT_059e73b0 + 0x130)) {
            return puVar56;
          }
          if (*(long *)(*(long *)(*puVar56 + 200) + (ulong)*(byte *)(_DAT_059e73b0 + 0x130) * 8 + -8
                       ) != _DAT_059e73b0) {
            return puVar56;
          }
          lVar61 = func_0x036d5ee4(puVar46,0);
          if (lVar61 != 0) {
            func_0x037040b8(lVar61,(int)puVar56[6],uVar62,0);
            uVar53 = 0;
            puVar70 = *(undefined **)((long)register0x00000008 + -0x888);
            *(undefined8 *)((long)register0x00000008 + -0x890) =
                 *(undefined8 *)((long)register0x00000008 + -0x890);
            *(undefined8 *)((long)register0x00000008 + -0x880) =
                 *(undefined8 *)((long)register0x00000008 + -0x880);
            *(undefined8 *)((long)register0x00000008 + -0x878) =
                 *(undefined8 *)((long)register0x00000008 + -0x878);
            *(undefined8 *)((long)register0x00000008 + -0x870) =
                 *(undefined8 *)((long)register0x00000008 + -0x870);
            *(undefined8 *)((long)register0x00000008 + -0x868) =
                 *(undefined8 *)((long)register0x00000008 + -0x868);
            plVar47 = (long *)0x5e2d000;
            puVar33 = puVar48;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,plVar71,puVar48,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (plVar71 != (long *)0x0) {
              lVar61 = *plVar71;
              uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                    puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                    goto LAB_036e2904;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar33 = (ulong *)0x5;
              puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_036e2904:
              uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
              plVar68 = (long *)puVar46[2];
              if (plVar68 != (long *)0x0) {
                puVar33 = *(ulong **)(*plVar68 + 0x1d0);
                plVar68 = (long *)(**(code **)(*plVar68 + 0x1c8))(plVar68,uVar34);
                if (plVar68 != (long *)0x0) {
                  lVar61 = *plVar68;
                  uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                  if (uVar62 != 0) {
                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                        puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                        goto LAB_036e2988;
                      }
                      uVar62 = uVar62 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar62 != 0);
                  }
                  puVar33 = (ulong *)0x0;
                  puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_036e2988:
                  plVar49 = (long *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                  plVar47 = plVar68;
                  if (plVar49 != (long *)0x0) {
                    lVar61 = *plVar49;
                    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                    if (uVar62 != 0) {
                      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059e0788) {
                          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar62 = uVar62 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar62 != 0);
                    }
                    puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059e0788,6);
LAB_036e29f4:
                    puVar33 = (ulong *)(*(code *)*puVar45)(plVar49,puVar45[1]);
                    if (((ulong)puVar33 & 1) == 0) {
                      return puVar33;
                    }
                    func_0x03727e60(puVar46,puVar48,0);
                    *(code **)((long)register0x00000008 + -0x8c0) = pcVar77;
                    *(undefined8 *)((long)register0x00000008 + -0x8b8) =
                         *(undefined8 *)((long)register0x00000008 + -0x890);
                    *(long **)((long)register0x00000008 + -0x8b0) = plVar55;
                    *(ulong **)((long)register0x00000008 + -0x8a8) = puVar64;
                    *(ulong **)((long)register0x00000008 + -0x8a0) = puVar57;
                    *(code **)((long)register0x00000008 + -0x898) = pcVar43;
                    *(undefined **)((long)register0x00000008 + -0x890) = puVar73;
                    *(undefined **)((long)register0x00000008 + -0x888) = puVar70;
                    *(undefined8 *)((long)register0x00000008 + -0x880) =
                         *(undefined8 *)((long)register0x00000008 + -0x880);
                    *(undefined8 *)((long)register0x00000008 + -0x878) =
                         *(undefined8 *)((long)register0x00000008 + -0x878);
                    *(undefined8 *)((long)register0x00000008 + -0x870) =
                         *(undefined8 *)((long)register0x00000008 + -0x870);
                    *(undefined8 *)((long)register0x00000008 + -0x868) =
                         *(undefined8 *)((long)register0x00000008 + -0x868);
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,plVar71,puVar48,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x8d0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x8c8) = 0;
                    plVar55 = (long *)0x5e2d000;
                    if (plVar71 != (long *)0x0) {
                      lVar61 = *plVar71;
                      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                      if (uVar62 != 0) {
                        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                            goto LAB_037280d4;
                          }
                          uVar62 = uVar62 - 1;
                          piVar63 = piVar63 + 4;
                        } while (uVar62 != 0);
                      }
                      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar47 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                      if (puVar46 != (ulong *)0x0) {
                        uVar60 = *puVar46;
                        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                        if (uVar62 != 0) {
                          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                              puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
                              goto LAB_0372813c;
                            }
                            uVar62 = uVar62 - 1;
                            piVar63 = piVar63 + 4;
                          } while (uVar62 != 0);
                        }
                        puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar68 = (long *)(*(code *)*puVar45)(puVar46,plVar47,puVar45[1]);
                        plVar55 = plVar47;
                        if (plVar68 != (long *)0x0) {
                          lVar61 = *plVar68;
                          uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                          if (uVar62 != 0) {
                            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                                puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar62 = uVar62 - 1;
                              piVar63 = piVar63 + 4;
                            } while (uVar62 != 0);
                          }
                          puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar47 = (long *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                          plVar55 = plVar68;
                          if (plVar47 != (long *)0x0) {
                            lVar61 = *plVar47;
                            uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                            if (uVar62 != 0) {
                              piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar63 + -2) == _DAT_059e0788) {
                                  puVar45 = (undefined8 *)
                                            (lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar62 = uVar62 - 1;
                                piVar63 = piVar63 + 4;
                              } while (uVar62 != 0);
                            }
                            puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0788,2);
LAB_03728214:
                            plVar47 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
                            uVar60 = *puVar46;
                            uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                            if (uVar62 != 0) {
                              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                  puVar45 = (undefined8 *)
                                            (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                                  goto LAB_03728274;
                                }
                                uVar62 = uVar62 - 1;
                                piVar63 = piVar63 + 4;
                              } while (uVar62 != 0);
                            }
                            puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_03728274:
                            lVar61 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                            if (lVar61 != 0) {
                              uVar60 = *puVar46;
                              uVar53 = *(undefined8 *)(lVar61 + 0x28);
                              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                              if (uVar62 != 0) {
                                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                    puVar45 = (undefined8 *)
                                              (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                                    goto LAB_037282d8;
                                  }
                                  uVar62 = uVar62 - 1;
                                  piVar63 = piVar63 + 4;
                                } while (uVar62 != 0);
                              }
                              puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar61 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                              if (lVar61 != 0) {
                                uVar60 = *puVar46;
                                uVar34 = *(undefined8 *)(lVar61 + 0x30);
                                uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                                if (uVar62 != 0) {
                                  piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                      puVar45 = (undefined8 *)
                                                (uVar60 + (long)(*piVar63 + 0x24) * 0x10 + 0x138);
                                      goto LAB_0372833c;
                                    }
                                    uVar62 = uVar62 - 1;
                                    piVar63 = piVar63 + 4;
                                  } while (uVar62 != 0);
                                }
                                puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar28 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                                uVar60 = *puVar46;
                                uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                                if (uVar62 != 0) {
                                  piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                      puVar45 = (undefined8 *)
                                                (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                                      goto LAB_0372839c;
                                    }
                                    uVar62 = uVar62 - 1;
                                    piVar63 = piVar63 + 4;
                                  } while (uVar62 != 0);
                                }
                                puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar78 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                                uVar41 = func_0x03530c84(puVar48,0);
                                if (plVar47 != (long *)0x0) {
                                  lVar61 = *plVar47;
                                  uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                                  if (uVar62 != 0) {
                                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar63 + -2) == _DAT_059e0780) {
                                        puVar45 = (undefined8 *)
                                                  (lVar61 + (long)*piVar63 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar62 = uVar62 - 1;
                                      piVar63 = piVar63 + 4;
                                    } while (uVar62 != 0);
                                  }
                                  puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0780,0);
LAB_03728418:
                                  pcVar77 = (code *)*puVar45;
                                  *(undefined8 *)((long)register0x00000008 + -0x8e0) = puVar45[1];
                                  auVar93 = (*pcVar77)(plVar47,plVar71,plVar68,uVar53,uVar34,uVar78,
                                                       uVar28,uVar41);
                                  uVar60 = *puVar46;
                                  *(undefined1 (*) [16])((long)register0x00000008 + -0x8d0) =
                                       auVar93;
                                  uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                                  if (uVar62 != 0) {
                                    piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                        puVar45 = (undefined8 *)
                                                  (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                                        goto LAB_037284a0;
                                      }
                                      uVar62 = uVar62 - 1;
                                      piVar63 = piVar63 + 4;
                                    } while (uVar62 != 0);
                                  }
                                  puVar45 = (undefined8 *)func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar61 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                                  if (lVar61 != 0) {
                                    *(undefined1 (*) [16])(lVar61 + 0x18) = auVar93;
                                    lVar61 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
                                      lVar61 = func_0x024d8f40();
                                    }
                                    puVar33 = (ulong *)func_0x0249f90c((undefined1 *)
                                                                       ((long)register0x00000008 +
                                                                       -0x8d0),*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (lVar61 + 0xc0) + 8) + 0x80));
                                    if ((char)*puVar33 != '\0') {
                                      return puVar33;
                                    }
                                    lVar61 = *plVar68;
                                    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                                    if (uVar62 != 0) {
                                      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                                          puVar45 = (undefined8 *)
                                                    (lVar61 + (long)*piVar63 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar62 = uVar62 - 1;
                                        piVar63 = piVar63 + 4;
                                      } while (uVar62 != 0);
                                    }
                                    puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar71 = (long *)(*(code *)*puVar45)(plVar68,puVar45[1]);
                                    if (plVar71 != (long *)0x0) {
                                      lVar61 = *plVar71;
                                      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                                      if (uVar62 != 0) {
                                        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar63 + -2) == _DAT_059e0788) {
                                            puVar45 = (undefined8 *)
                                                      (lVar61 + (long)(*piVar63 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar62 = uVar62 - 1;
                                          piVar63 = piVar63 + 4;
                                        } while (uVar62 != 0);
                                      }
                                      puVar45 = (undefined8 *)
                                                func_0x024d927c(plVar71,_DAT_059e0788,7);
LAB_037285a8:
                                      puVar33 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                                      if (((ulong)puVar33 & 1) == 0) {
                                        return puVar33;
                                      }
                                      uVar60 = *puVar46;
                                      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                                      if (uVar62 != 0) {
                                        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                            puVar45 = (undefined8 *)
                                                      (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728608;
                                          }
                                          uVar62 = uVar62 - 1;
                                          piVar63 = piVar63 + 4;
                                        } while (uVar62 != 0);
                                      }
                                      puVar45 = (undefined8 *)
                                                func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar55 = (long *)(*(code *)*puVar45)(puVar46,puVar45[1]);
                                      uVar60 = *puVar46;
                                      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
                                      if (uVar62 != 0) {
                                        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                                            puVar45 = (undefined8 *)
                                                      (uVar60 + (long)(*piVar63 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728668;
                                          }
                                          uVar62 = uVar62 - 1;
                                          piVar63 = piVar63 + 4;
                                        } while (uVar62 != 0);
                                      }
                                      puVar45 = (undefined8 *)
                                                func_0x024d927c(puVar46,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar61 = (*(code *)*puVar45)(puVar46,puVar45[1]);
                                      if ((lVar61 != 0) && (plVar55 != (long *)0x0)) {
                                        puVar33 = (ulong *)func_0x03704874(plVar55,*(undefined8 *)
                                                                                    (lVar61 + 0x28),
                                                                           0);
                                        return puVar33;
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
                    plVar71 = (long *)func_0x0249fb90();
                    *(undefined8 *)((long)register0x00000008 + -0x900) = 0x37286b0;
                    *(long **)((long)register0x00000008 + -0x8f0) = plVar55;
                    *(ulong **)((long)register0x00000008 + -0x8e8) = puVar46;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x908) = 0;
                    if (plVar71 != (long *)0x0) {
                      lVar61 = *plVar71;
                      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                      if (uVar62 != 0) {
                        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar63 + -2) == _DAT_059dfe48) {
                            puVar45 = (undefined8 *)
                                      (lVar61 + (long)(*piVar63 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar62 = uVar62 - 1;
                          piVar63 = piVar63 + 4;
                        } while (uVar62 != 0);
                      }
                      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar61 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                      if ((lVar61 == 0) || (*(long *)(lVar61 + 0x68) == 0)) {
                        uVar53 = 0;
                        *(undefined8 *)((long)register0x00000008 + -0x908) = 0;
                      }
                      else {
                        uVar28 = *(undefined4 *)(*(long *)(lVar61 + 0x68) + 0x10);
                        *(undefined8 *)((long)register0x00000008 + -0x910) = 0;
                        *(undefined4 *)((long)register0x00000008 + -0x8f4) = uVar28;
                        func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x910),
                                        (undefined1 *)((long)register0x00000008 + -0x8f4),
                                        _DAT_05a27d88);
                        uVar53 = *(undefined8 *)((long)register0x00000008 + -0x910);
                      }
                      lVar61 = _DAT_05a27d90;
                      *(undefined8 *)((long)register0x00000008 + -0x908) = uVar53;
                      lVar51 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar4 = *(ushort *)(lVar51 + 0x135);
                      lVar52 = lVar51;
                      if ((uVar4 & 1) == 0) {
                        lVar51 = func_0x024d8f40(lVar51);
                        uVar4 = *(ushort *)(*(long *)(lVar61 + 0x20) + 0x135);
                        lVar52 = *(long *)(lVar61 + 0x20);
                      }
                      uVar28 = *(undefined4 *)(**(long **)(lVar51 + 0xc0) + 0xfc);
                      if ((uVar4 & 1) == 0) {
                        lVar52 = func_0x024d8f40(lVar52);
                      }
                      uVar53 = func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x908),
                                               *(long *)(*(long *)(*(long *)(lVar52 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x910),uVar53,
                                      uVar28);
                      return (ulong *)(ulong)*(uint *)((long)register0x00000008 + -0x910);
                    }
                    auVar93 = func_0x0249fb90();
                    lVar61 = auVar93._8_8_;
                    *(undefined8 *)((long)register0x00000008 + -0x920) = 0x372883c;
                    if (lVar61 != 0) {
                      if (*(int *)(auVar93._0_8_ + 0x10) < *(int *)(lVar61 + 0x18)) {
                        uVar29 = 0;
LAB_03728870:
                        return (ulong *)(ulong)(uVar29 & 1);
                      }
                      lVar52 = *(long *)(auVar93._0_8_ + 0x18);
                      if (lVar52 != 0) {
                        uVar29 = func_0x0387f210(lVar52,lVar61,0);
                        uVar29 = uVar29 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar93 = func_0x0249fb90();
                    lVar61 = auVar93._8_8_;
                    *(undefined8 *)((long)register0x00000008 + -0x930) = 0x3728880;
                    if (lVar61 != 0) {
                      if (*(int *)(auVar93._0_8_ + 0x10) < *(int *)(lVar61 + 0x18)) {
                        lVar52 = *(long *)(auVar93._0_8_ + 0x18);
                        if (lVar52 == 0) goto LAB_037288c0;
                        uVar29 = func_0x0387f210(lVar52,lVar61,0);
                        uVar29 = uVar29 ^ 1;
                      }
                      else {
                        uVar29 = 0;
                      }
                      return (ulong *)(ulong)(uVar29 & 1);
                    }
LAB_037288c0:
                    lVar61 = func_0x0249fb90();
                    return *(ulong **)(lVar61 + 0x10);
                  }
                }
              }
            }
            uVar34 = func_0x0249fb90();
            *(undefined8 *)((long)register0x00000008 + -0x8d0) = 0x36e2a48;
            *(undefined **)((long)register0x00000008 + -0x8c0) = puVar73;
            *(undefined **)((long)register0x00000008 + -0x8b8) = puVar70;
            *(long **)((long)register0x00000008 + -0x8b0) = plVar47;
            *(ulong **)((long)register0x00000008 + -0x8a8) = puVar46;
            *(long **)((long)register0x00000008 + -0x8a0) = plVar71;
            *(ulong **)((long)register0x00000008 + -0x898) = puVar48;
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
            *(undefined8 *)((long)register0x00000008 + -0x8e0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x8d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x8f0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x8e8) = 0;
            plVar71 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar71,0);
            if (plVar71 != (long *)0x0) {
              puVar33 = (ulong *)0x0;
              func_0x0442b590(plVar71,_DAT_05a9e920);
              lVar61 = func_0x036d5e58(uVar34);
              if ((lVar61 != 0) && (*(long *)(lVar61 + 0x28) != 0)) {
                puVar74 = &DAT_05a9fca8;
                func_0x04433eb4(plVar71,*(undefined4 *)(*(long *)(lVar61 + 0x28) + 0x10),0);
                func_0x0442b540(plVar71,10,0);
                puVar33 = (ulong *)0x0;
                func_0x0442b590(plVar71,_DAT_05a9fca8);
                lVar61 = func_0x036d5e58(uVar34);
                if ((lVar61 != 0) && (*(long *)(lVar61 + 0x18) != 0)) {
                  puVar74 = &DAT_05a7a1e0;
                  func_0x04433eb4(plVar71,*(undefined4 *)(*(long *)(lVar61 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar71,10,0);
                  puVar33 = (ulong *)0x0;
                  func_0x0442b590(plVar71,_DAT_05a7a1e0);
                  lVar61 = func_0x036d5e58(uVar34);
                  if ((lVar61 != 0) && (*(long *)(lVar61 + 0x18) != 0)) {
                    puVar74 = &DAT_05a815a8;
                    func_0x04433eb4(plVar71,*(undefined4 *)(*(long *)(lVar61 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar71,10,0);
                    puVar33 = (ulong *)0x0;
                    func_0x0442b590(plVar71,_DAT_05a815a8);
                    lVar61 = func_0x036d5e58(uVar34);
                    if ((lVar61 != 0) && (*(long *)(lVar61 + 0x18) != 0)) {
                      puVar74 = &DAT_05a934d8;
                      func_0x04433eb4(plVar71,*(undefined4 *)(*(long *)(lVar61 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar71,10,0);
                      puVar33 = (ulong *)0x0;
                      func_0x0442b590(plVar71,_DAT_05a934d8);
                      lVar61 = func_0x036d5e58(uVar34);
                      if ((lVar61 != 0) && (*(long *)(lVar61 + 0x18) != 0)) {
                        puVar74 = &DAT_05a27fc8;
                        auVar93 = func_0x03753e70(*(long *)(lVar61 + 0x18),0);
                        *(undefined1 (*) [16])((long)register0x00000008 + -0x8e8) = auVar93;
                        lVar61 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar61 + 0x135) & 1) == 0) {
                          lVar61 = func_0x024d8f40();
                        }
                        plVar47 = (long *)&DAT_059e2ba0;
                        puVar70 = &DAT_05a79720;
                        puVar73 = &DAT_05a9e3c0;
                        pcVar42 = (char *)func_0x0249f90c((undefined1 *)
                                                          ((long)register0x00000008 + -0x8e8),
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar61 + 0xc0) + 8)
                                                           + 0x80));
                        lVar61 = _DAT_05a27fb0;
                        if (*pcVar42 == '\0') {
                          lVar61 = 0;
                        }
                        else {
                          lVar51 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar4 = *(ushort *)(lVar51 + 0x135);
                          lVar52 = lVar51;
                          if ((uVar4 & 1) == 0) {
                            lVar51 = func_0x024d8f40(lVar51);
                            uVar4 = *(ushort *)(*(long *)(lVar61 + 0x20) + 0x135);
                            lVar52 = *(long *)(lVar61 + 0x20);
                          }
                          puVar74 = (undefined *)(ulong)*(uint *)(**(long **)(lVar51 + 0xc0) + 0xfc)
                          ;
                          if ((uVar4 & 1) == 0) {
                            lVar52 = func_0x024d8f40(lVar52);
                          }
                          uVar78 = func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x8e8)
                                                   ,*(long *)(*(long *)(*(long *)(lVar52 + 0xc0) + 8
                                                                       ) + 0x80) + 0x20);
                          func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x8c8),uVar78,
                                          puVar74);
                          iVar31 = *(int *)(_DAT_059e2ba0 + 0xe4);
                          *(undefined8 *)((long)register0x00000008 + -0x8f0) =
                               *(undefined8 *)((long)register0x00000008 + -0x8c8);
                          if (iVar31 == 0) {
                            func_0x0249fa64();
                          }
                          lVar61 = func_0x0430e224((undefined1 *)((long)register0x00000008 + -0x8f0)
                                                   ,0);
                        }
                        lVar52 = _DAT_05a79720;
                        if (lVar61 != 0) {
                          lVar52 = lVar61;
                        }
                        func_0x0442b590(plVar71,lVar52,0);
                        func_0x0442b540(plVar71,10,0);
                        puVar33 = (ulong *)0x0;
                        func_0x0442b590(plVar71,_DAT_05a9e3c0);
                        lVar61 = func_0x036d5e58(uVar34);
                        if ((lVar61 != 0) && (*(long *)(lVar61 + 0x18) != 0)) {
                          uVar53 = func_0x03753af4(*(long *)(lVar61 + 0x18),0);
                          *(undefined8 *)((long)register0x00000008 + -0x8d8) = uVar53;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar62 = func_0x0430dd84(uVar53,*(undefined8 *)
                                                           (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar61 = _DAT_05a79720;
                          if ((uVar62 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar61 = func_0x0430e224((undefined1 *)
                                                     ((long)register0x00000008 + -0x8d8),0);
                          }
                          func_0x0442b590(plVar71,lVar61,0);
                          puVar33 = (ulong *)(**(code **)(*plVar71 + 0x168))
                                                       (plVar71,*(undefined8 *)(*plVar71 + 0x170));
                          return puVar33;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar61 = func_0x0249fb90();
            *(undefined8 *)((long)register0x00000008 + -0x930) = 0x36e2e70;
            *(undefined **)((long)register0x00000008 + -0x920) = puVar73;
            *(undefined **)((long)register0x00000008 + -0x918) = puVar70;
            *(long **)((long)register0x00000008 + -0x910) = plVar47;
            *(undefined **)((long)register0x00000008 + -0x908) = puVar74;
            *(undefined8 *)((long)register0x00000008 + -0x900) = uVar34;
            *(long **)((long)register0x00000008 + -0x8f8) = plVar71;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar48 = (ulong *)func_0x03962be0(0);
            if (((ulong)puVar48 & 1) == 0) {
              return puVar48;
            }
            uVar34 = 0x5e2d000;
            puVar74 = &DAT_059da1f8;
            if (puVar33 != (ulong *)0x0) {
              uVar60 = *puVar33;
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                    puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                    goto LAB_036e2f54;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar78 = (*(code *)*puVar45)(puVar33,puVar45[1]);
              if (lVar61 != 0) {
                puVar40 = (undefined *)func_0x036eb814(lVar61,uVar78,0);
                uVar34 = uVar78;
                if (*(long *)(lVar61 + 0x10) != 0) {
                  puVar73 = &DAT_059fa1e8;
                  plVar71 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  puVar70 = (undefined *)(ulong)*(uint *)(plVar71[1] + 0xfc);
                  uVar53 = func_0x0249f90c(*(long *)(lVar61 + 0x10),*(undefined8 *)(*plVar71 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x924),uVar53,puVar70);
                  uVar53 = 0;
                  func_0x034b666c(puVar40,puVar33,*(undefined4 *)((long)register0x00000008 + -0x924)
                                  ,0);
                  puVar74 = puVar40;
                  if (*(long *)(lVar61 + 0x10) != 0) {
                    plVar71 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    puVar70 = (undefined *)(ulong)*(uint *)(plVar71[1] + 0xfc);
                    uVar53 = func_0x0249f90c(*(long *)(lVar61 + 0x10),
                                             *(undefined8 *)(*plVar71 + 0x80));
                    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x924),uVar53,puVar70
                                   );
                    uVar53 = 0;
                    func_0x034b676c(puVar40,puVar33,
                                    *(undefined4 *)((long)register0x00000008 + -0x924),0);
                    if (*(long *)(lVar61 + 0x10) != 0) {
                      plVar71 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      puVar70 = (undefined *)(ulong)*(uint *)(plVar71[1] + 0xfc);
                      uVar53 = func_0x0249f90c(*(long *)(lVar61 + 0x10),
                                               *(undefined8 *)(*plVar71 + 0x80));
                      func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x924),uVar53,
                                      puVar70);
                      uVar53 = 0;
                      func_0x034b6ccc(puVar40,puVar33,
                                      *(undefined4 *)((long)register0x00000008 + -0x924),0);
                      if (*(long *)(lVar61 + 0x10) != 0) {
                        plVar71 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        puVar33 = (ulong *)(ulong)*(uint *)(plVar71[1] + 0xfc);
                        uVar53 = func_0x0249f90c(*(long *)(lVar61 + 0x10),
                                                 *(undefined8 *)(*plVar71 + 0x80));
                        func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x924),uVar53,
                                        puVar33);
                        uVar53 = 0;
                        func_0x034b6dc0(puVar40,uVar78,
                                        *(undefined4 *)((long)register0x00000008 + -0x924),0);
                        plVar71 = *(long **)(lVar61 + 0x10);
                        if (plVar71 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          puVar33 = (ulong *)(**(code **)(*plVar71 + 0x1c8))
                                                       (plVar71,uVar78,
                                                        *(undefined8 *)(*plVar71 + 0x1d0));
                          return puVar33;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar86 = func_0x0249fb90();
            plVar71 = auVar86._8_8_;
            *(undefined8 *)((long)register0x00000008 + -0x950) = 0x36e30d4;
            *(undefined8 *)((long)register0x00000008 + -0x948) = uVar34;
            *(ulong **)((long)register0x00000008 + -0x940) = puVar33;
            *(long *)((long)register0x00000008 + -0x938) = lVar61;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar71 != (long *)0x0) {
              lVar61 = *plVar71;
              uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                    puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df8e8,5);
LAB_036e3178:
              uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
              plVar71 = *(long **)(auVar86._0_8_ + 0x10);
              if (plVar71 != (long *)0x0) {
                plVar71 = (long *)(**(code **)(*plVar71 + 0x1c8))
                                            (plVar71,uVar34,*(undefined8 *)(*plVar71 + 0x1d0));
                if (plVar71 == (long *)0x0) {
                  return (ulong *)0x1;
                }
                lVar61 = *plVar71;
                auVar86._8_8_ = &DAT_059dfbc0;
                auVar86._0_8_ = plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar61 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                if (lVar61 == 0) {
                  return (ulong *)0x1;
                }
                lVar61 = *plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar71 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                if (plVar71 != (long *)0x0) {
                  lVar61 = *plVar71;
                  uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                  if (uVar62 != 0) {
                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059df2a8) {
                        puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar62 = uVar62 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar62 != 0);
                  }
                  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar33 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                  return puVar33;
                }
              }
            }
            auVar87 = func_0x0249fb90();
            plVar71 = auVar87._8_8_;
            *(undefined8 *)((long)register0x00000008 + -0x970) = 0x36e32f4;
            *(undefined8 *)((long)register0x00000008 + -0x968) = 0x5e2d000;
            *(long *)((long)register0x00000008 + -0x960) = auVar86._8_8_;
            *(long *)((long)register0x00000008 + -0x958) = auVar86._0_8_;
            if ((bRam0000000005e2da65 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da65 = 1;
            }
            if (plVar71 != (long *)0x0) {
              lVar61 = *plVar71;
              uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                    puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df8e8,5);
LAB_036e3398:
              uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
              plVar71 = *(long **)(auVar87._0_8_ + 0x10);
              if (plVar71 != (long *)0x0) {
                plVar71 = (long *)(**(code **)(*plVar71 + 0x1c8))
                                            (plVar71,uVar34,*(undefined8 *)(*plVar71 + 0x1d0));
                if (plVar71 == (long *)0x0) {
                  return (ulong *)0x0;
                }
                lVar61 = *plVar71;
                auVar87._8_8_ = &DAT_059dfbc0;
                auVar87._0_8_ = plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar61 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                if (lVar61 == 0) {
                  return (ulong *)0x0;
                }
                lVar61 = *plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar71 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                if (plVar71 != (long *)0x0) {
                  lVar61 = *plVar71;
                  uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                  if (uVar62 != 0) {
                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059df2a8) {
                        puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar62 = uVar62 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar62 != 0);
                  }
                  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar33 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                  return puVar33;
                }
              }
            }
            auVar93 = func_0x0249fb90();
            plVar71 = auVar93._8_8_;
            uVar62 = auVar93._0_8_;
            *(undefined8 *)((long)register0x00000008 + -0x9a0) = 0x36e3514;
            *(undefined **)((long)register0x00000008 + -0x990) = puVar74;
            *(undefined8 *)((long)register0x00000008 + -0x988) = 0x5e2d000;
            *(long *)((long)register0x00000008 + -0x980) = auVar87._8_8_;
            *(long *)((long)register0x00000008 + -0x978) = auVar87._0_8_;
            lVar61 = 0x5e2d000;
            if ((bRam0000000005e2da66 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da66 = 1;
            }
            lVar52 = func_0x036d5e58(uVar62);
            if (lVar52 != 0) {
              lVar61 = *(long *)(lVar52 + 0x20);
              puVar74 = &DAT_059dfbc0;
              if (lVar61 != 0) {
                if (plVar71 == (long *)0x0) goto LAB_036e3670;
                lVar52 = *plVar71;
                uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
                if (uVar60 != 0) {
                  piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar60 = uVar60 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar60 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                func_0x03704ea8(lVar61,uVar34,0);
              }
              puVar33 = (ulong *)func_0x036d5e58(uVar62);
              if (puVar33 != (ulong *)0x0) {
                uVar62 = puVar33[3];
                if (uVar62 == 0) {
                  return puVar33;
                }
                if (plVar71 != (long *)0x0) {
                  lVar61 = *plVar71;
                  uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
                  if (uVar60 != 0) {
                    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                        puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar60 = uVar60 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar60 != 0);
                  }
                  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,3);
LAB_036e3648:
                  plVar71 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                  uVar78 = 0;
                  uVar34 = *(undefined8 *)((long)register0x00000008 + -0x990);
                  *(undefined8 *)((long)register0x00000008 + -0x9b0) =
                       *(undefined8 *)((long)register0x00000008 + -0x9a0);
                  *(undefined **)((long)register0x00000008 + -0x9a0) = puVar73;
                  *(undefined **)((long)register0x00000008 + -0x998) = puVar70;
                  *(undefined8 *)((long)register0x00000008 + -0x990) = uVar34;
                  *(undefined8 *)((long)register0x00000008 + -0x988) =
                       *(undefined8 *)((long)register0x00000008 + -0x988);
                  *(undefined8 *)((long)register0x00000008 + -0x980) =
                       *(undefined8 *)((long)register0x00000008 + -0x980);
                  *(undefined8 *)((long)register0x00000008 + -0x978) =
                       *(undefined8 *)((long)register0x00000008 + -0x978);
                  uVar60 = 0x5e2d000;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (plVar71 != (long *)0x0) {
                    lVar61 = *plVar71;
                    uVar60 = (ulong)*(uint *)(uVar62 + 0x14);
                    uVar59 = (ulong)*(ushort *)(lVar61 + 0x12e);
                    if (uVar59 != 0) {
                      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                          goto LAB_037548ac;
                        }
                        uVar59 = uVar59 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar59 != 0);
                    }
                    uVar78 = 2;
                    puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_037548ac:
                    plVar55 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                    if (plVar55 != (long *)0x0) {
                      lVar61 = *plVar55;
                      uVar28 = *(undefined4 *)(uVar62 + 0x70);
                      uVar2 = *(undefined4 *)(uVar62 + 0x10);
                      uVar3 = *(undefined1 *)(uVar62 + 0x94);
                      uVar59 = (ulong)*(ushort *)(lVar61 + 0x12e);
                      if (uVar59 != 0) {
                        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar59 = uVar59 - 1;
                          piVar63 = piVar63 + 4;
                        } while (uVar59 != 0);
                      }
                      puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar28 = (*(code *)*puVar45)(plVar55,CONCAT44(uVar28,uVar2),uVar3,puVar45[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      puVar33 = (ulong *)func_0x045a9bd0(uVar60,uVar28,0);
                      *(int *)(uVar62 + 0x14) = (int)puVar33;
                      return puVar33;
                    }
                  }
                  auVar93 = func_0x0249fb90();
                  plVar55 = auVar93._8_8_;
                  lVar61 = auVar93._0_8_;
                  *(undefined8 *)((long)register0x00000008 + -0x9e0) = 0x3754988;
                  *(undefined **)((long)register0x00000008 + -0x9d8) = puVar70;
                  *(undefined8 *)((long)register0x00000008 + -0x9d0) = uVar34;
                  *(long **)((long)register0x00000008 + -0x9c8) = plVar71;
                  *(ulong *)((long)register0x00000008 + -0x9c0) = uVar60;
                  *(ulong *)((long)register0x00000008 + -0x9b8) = uVar62;
                  uVar34 = uVar78;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar55 != (long *)0x0) {
                    lVar52 = *plVar55;
                    iVar31 = *(int *)(lVar61 + 0x90);
                    uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                    if (uVar62 != 0) {
                      piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb78) {
                          puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar62 = uVar62 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar62 != 0);
                    }
                    puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059deb78,2);
LAB_03754a3c:
                    puVar33 = (ulong *)(*(code *)*puVar45)(plVar55,puVar45[1]);
                    if (iVar31 < (int)puVar33) {
                      uVar53 = func_0x03530c84(uVar78,0);
                      lVar52 = *plVar55;
                      uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                      if (uVar62 != 0) {
                        piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar63 + -2) == _DAT_059deb78) {
                            puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar62 = uVar62 - 1;
                          piVar63 = piVar63 + 4;
                        } while (uVar62 != 0);
                      }
                      puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059deb78,0);
LAB_03754aac:
                      uVar34 = (*(code *)*puVar45)(plVar55,puVar45[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      uVar53 = func_0x0430d994(uVar53,uVar34,0);
                      *(undefined8 *)((long)register0x00000008 + -0x9e8) = uVar53;
                      *(undefined8 *)((long)register0x00000008 + -0xa00) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x9f8) = 0;
                      puVar33 = (ulong *)func_0x028866e4((undefined1 *)
                                                         ((long)register0x00000008 + -0xa00),
                                                         (undefined1 *)
                                                         ((long)register0x00000008 + -0x9e8),
                                                         _DAT_05a27fa0);
                      uVar53 = *(undefined8 *)((long)register0x00000008 + -0xa00);
                      *(undefined8 *)(lVar61 + 0x88) =
                           *(undefined8 *)((long)register0x00000008 + -0x9f8);
                      *(undefined8 *)(lVar61 + 0x80) = uVar53;
                    }
                    return puVar33;
                  }
                  auVar93 = func_0x0249fb90();
                  lVar52 = auVar93._0_8_;
                  *(undefined8 *)((long)register0x00000008 + -0xa30) = 0x3754b28;
                  *(undefined **)((long)register0x00000008 + -0xa28) = puVar70;
                  *(undefined8 *)((long)register0x00000008 + -0xa20) = 0x5e2d000;
                  *(undefined8 *)((long)register0x00000008 + -0xa18) = uVar78;
                  *(undefined8 *)((long)register0x00000008 + -0xa10) = 0;
                  *(long *)((long)register0x00000008 + -0xa08) = lVar61;
                  *(long *)((long)register0x00000008 + -0xa48) = auVar93._8_8_;
                  *(undefined8 *)((long)register0x00000008 + -0xa40) = uVar34;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    bRam0000000005e2de67 = 1;
                  }
                  iVar31 = *(int *)(_DAT_059d3fd0 + 0xe4);
                  *(undefined8 *)((long)register0x00000008 + -0xa50) = 0;
                  if (iVar31 == 0) {
                    func_0x0249fa64();
                  }
                  puVar33 = (ulong *)func_0x0288eda8((undefined1 *)
                                                     ((long)register0x00000008 + -0xa48),
                                                     (undefined1 *)
                                                     ((long)register0x00000008 + -0xa50),
                                                     _DAT_05a29960);
                  if (((ulong)puVar33 & 1) == 0) {
                    *(undefined4 *)(lVar52 + 0x90) = 0;
                    return puVar33;
                  }
                  plVar71 = *(long **)((long)register0x00000008 + -0xa50);
                  iVar31 = *(int *)(lVar52 + 0x90) + 1;
                  *(int *)(lVar52 + 0x90) = iVar31;
                  if (plVar71 != (long *)0x0) {
                    lVar61 = *plVar71;
                    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                    if (uVar62 != 0) {
                      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb78) {
                          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar62 = uVar62 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar62 != 0);
                    }
                    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb78,2);
LAB_03754c40:
                    iVar30 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                    if (iVar31 < iVar30) {
                      uVar53 = func_0x03530c84(uVar53,0);
                      plVar71 = *(long **)((long)register0x00000008 + -0xa50);
                      if (plVar71 != (long *)0x0) {
                        lVar61 = *plVar71;
                        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                        if (uVar62 != 0) {
                          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar63 + -2) == _DAT_059deb78) {
                              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar62 = uVar62 - 1;
                            piVar63 = piVar63 + 4;
                          } while (uVar62 != 0);
                        }
                        puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb78,1);
LAB_03754d04:
                        uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uVar53 = func_0x0430d994(uVar53,uVar34,0);
                        *(undefined8 *)((long)register0x00000008 + -0xa38) = uVar53;
                        *(undefined8 *)((long)register0x00000008 + -0xa60) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xa58) = 0;
                        puVar33 = (ulong *)func_0x028866e4((undefined1 *)
                                                           ((long)register0x00000008 + -0xa60),
                                                           (undefined1 *)
                                                           ((long)register0x00000008 + -0xa38),
                                                           _DAT_05a27fa0);
                        uVar53 = *(undefined8 *)((long)register0x00000008 + -0xa60);
                        *(undefined8 *)(lVar52 + 0x88) =
                             *(undefined8 *)((long)register0x00000008 + -0xa58);
                        *(undefined8 *)(lVar52 + 0x80) = uVar53;
                        return puVar33;
                      }
                    }
                    else {
                      plVar71 = *(long **)((long)register0x00000008 + -0xa50);
                      if (plVar71 != (long *)0x0) {
                        lVar61 = *plVar71;
                        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                        if (uVar62 != 0) {
                          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar63 + -2) == _DAT_059deb78) {
                              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d7c;
                            }
                            uVar62 = uVar62 - 1;
                            piVar63 = piVar63 + 4;
                          } while (uVar62 != 0);
                        }
                        puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb78,2);
LAB_03754d7c:
                        puVar33 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
                        *(undefined8 *)(lVar52 + 0x80) = 0;
                        *(undefined8 *)(lVar52 + 0x88) = 0;
                        *(int *)(lVar52 + 0x90) = (int)puVar33;
                        return puVar33;
                      }
                    }
                  }
                  puVar33 = (ulong *)func_0x0249fb90();
                  return puVar33;
                }
              }
            }
LAB_036e3670:
            auVar93 = func_0x0249fb90();
            *(undefined8 *)((long)register0x00000008 + -0x9d0) = 0x36e3674;
            *(undefined **)((long)register0x00000008 + -0x9c0) = puVar74;
            *(long *)((long)register0x00000008 + -0x9b8) = lVar61;
            *(ulong *)((long)register0x00000008 + -0x9b0) = uVar62;
            *(long **)((long)register0x00000008 + -0x9a8) = plVar71;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar61 = *(long *)(auVar93._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)register0x00000008 + -0x9d0) =
                 *(undefined8 *)((long)register0x00000008 + -0x9d0);
            *(undefined8 *)((long)register0x00000008 + -0x9c0) =
                 *(undefined8 *)((long)register0x00000008 + -0x9c0);
            *(undefined8 *)((long)register0x00000008 + -0x9b8) =
                 *(undefined8 *)((long)register0x00000008 + -0x9b8);
            *(undefined8 *)((long)register0x00000008 + -0x9b0) =
                 *(undefined8 *)((long)register0x00000008 + -0x9b0);
            *(undefined8 *)((long)register0x00000008 + -0x9a8) =
                 *(undefined8 *)((long)register0x00000008 + -0x9a8);
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar61,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)register0x00000008 + -0x9c8) = 0;
            func_0x042539d4((undefined1 *)((long)register0x00000008 + -0x9c8),auVar93._8_8_ - lVar61
                            ,0);
            return *(ulong **)((long)register0x00000008 + -0x9c8);
          }
        }
      }
    }
  }
  auVar89 = func_0x0249fb90();
  lVar52 = auVar89._8_8_;
  plVar47 = auVar89._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x8d0) = 0x37820e8;
  *(code **)((long)register0x00000008 + -0x8c8) = pcVar43;
  *(undefined **)((long)register0x00000008 + -0x8c0) = puVar73;
  *(ulong **)((long)register0x00000008 + -0x8b8) = puVar56;
  *(long **)((long)register0x00000008 + -0x8b0) = plVar71;
  *(ulong *)((long)register0x00000008 + -0x8a8) = uVar62;
  *(ulong **)((long)register0x00000008 + -0x8a0) = puVar46;
  *(ulong **)((long)register0x00000008 + -0x898) = puVar48;
  lVar61 = 0x5e2d000;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
  }
  if (lVar52 != 0) {
    lVar61 = func_0x036d5ec8(lVar52,0);
    puVar48 = (ulong *)func_0x036d5f00(lVar52,0);
    if (plVar47 != (long *)0x0) {
      lVar51 = *plVar47;
      puVar73 = &DAT_059df8e8;
      uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_037821d0:
      uVar53 = (*(code *)*puVar45)(plVar47,puVar45[1]);
      puVar32 = (ulong *)0x0;
      puVar58 = (ulong *)func_0x036d3908(lVar52,uVar53);
      puVar46 = puVar48;
      if (puVar58 != (ulong *)0x0) {
        uVar60 = *puVar58;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 3) * 0x10 + 0x138);
              goto LAB_0378224c;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar32 = (ulong *)0x3;
        puVar45 = (undefined8 *)func_0x024d927c(puVar58);
LAB_0378224c:
        plVar71 = (long *)(*(code *)*puVar45)(puVar58,puVar45[1]);
        puVar56 = puVar58;
        if (plVar71 != (long *)0x0) {
          lVar51 = *plVar71;
          uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059deb70,2);
LAB_037822b8:
          pcVar43 = (code *)&DAT_059e1498;
          puVar56 = (ulong *)(*(code *)*puVar45)(plVar71,puVar45[1]);
          lVar51 = *plVar47;
          uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_03782320:
          uVar53 = (*(code *)*puVar45)(plVar47,puVar45[1]);
          uVar53 = func_0x036d3908(lVar52,uVar53,0);
          auVar19._8_8_ = uVar53;
          auVar19._0_8_ = plVar47;
          auVar89._8_8_ = uVar53;
          auVar89._0_8_ = plVar47;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          puVar32 = (ulong *)0x0;
          uVar29 = func_0x036c47c0(uVar53,plVar47);
          if ((lVar61 != 0) && (auVar89 = auVar19, puVar56 != (ulong *)0x0)) {
            pcVar43 = (code *)&DAT_059deb60;
            uVar60 = *puVar56;
            puVar32 = (ulong *)(ulong)*(byte *)(lVar61 + 0x94);
            auVar89[8] = *(byte *)(lVar61 + 0x94);
            auVar89._0_8_ = CONCAT44(0,uVar29);
            auVar89._9_7_ = 0;
            uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
            puVar73 = (undefined *)
                      CONCAT44(*(undefined4 *)(lVar61 + 0x70),*(undefined4 *)(lVar61 + 0x10));
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                  puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0xd) * 0x10 + 0x138);
                  goto LAB_037823d8;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar45 = (undefined8 *)func_0x024d927c(puVar56,_DAT_059deb60,0xd);
LAB_037823d8:
            puVar33 = (ulong *)puVar45[1];
            iVar31 = (*(code *)*puVar45)(puVar56,puVar73);
            if (puVar48 != (ulong *)0x0) {
              func_0x03700d78(puVar48,(uVar29 - (int)puVar48[2]) - iVar31,CONCAT44(0,uVar29),0);
              *(undefined4 *)(lVar61 + 0x38) = 0;
              uVar28 = *(undefined4 *)(lVar61 + 0x10);
              uVar2 = *(undefined4 *)(lVar61 + 0x70);
              uVar60 = *puVar56;
              uVar3 = *(undefined1 *)(lVar61 + 0x94);
              uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                    puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 0xd) * 0x10 + 0x138);
                    goto LAB_0378246c;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(puVar56,_DAT_059deb60,0xd);
LAB_0378246c:
              puVar33 = (ulong *)(*(code *)*puVar45)(puVar56,CONCAT44(uVar2,uVar28),uVar3,puVar45[1]
                                                    );
              *(int *)(lVar61 + 0x14) = (int)puVar33 + -1;
              return puVar33;
            }
          }
        }
      }
    }
  }
  plVar47 = auVar89._8_8_;
  auVar90 = func_0x0249fb90();
  lVar52 = auVar90._8_8_;
  plVar71 = auVar90._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x910) = 0x37824a0;
  *(undefined **)((long)register0x00000008 + -0x900) = puVar73;
  *(ulong **)((long)register0x00000008 + -0x8f8) = puVar56;
  *(long **)((long)register0x00000008 + -0x8f0) = plVar47;
  *(long *)((long)register0x00000008 + -0x8e8) = auVar89._0_8_;
  *(ulong **)((long)register0x00000008 + -0x8e0) = puVar46;
  *(long *)((long)register0x00000008 + -0x8d8) = lVar61;
  lVar61 = 0x5e2d000;
  if ((bRam0000000005e2df9c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9c = 1;
  }
  if (plVar71 != (long *)0x0) {
    lVar51 = *plVar71;
    uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar32 = (ulong *)0x5;
    puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_03782564:
    uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    if (lVar52 != 0) {
      puVar32 = (ulong *)0x0;
      puVar56 = (ulong *)func_0x036d3908(lVar52,uVar53);
      lVar61 = func_0x036d5ee4(lVar52,0);
      lVar52 = func_0x036d5f1c(lVar52,0);
      auVar21._8_8_ = lVar52;
      auVar21._0_8_ = plVar71;
      auVar20._8_8_ = lVar52;
      auVar20._0_8_ = plVar71;
      if (puVar56 != (ulong *)0x0) {
        uVar60 = *puVar56;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_03782600;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar32 = (ulong *)0x0;
        puVar45 = (undefined8 *)func_0x024d927c(puVar56);
LAB_03782600:
        plVar68 = (long *)(*(code *)*puVar45)(puVar56,puVar45[1]);
        auVar90 = auVar20;
        if (plVar68 != (long *)0x0) {
          lVar51 = *plVar68;
          uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
          puVar73 = &DAT_059e1498;
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059e0788) {
                puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059e0788,2);
LAB_03782674:
          plVar47 = (long *)(*(code *)*puVar45)(plVar68,puVar45[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          puVar32 = (ulong *)0x0;
          uVar29 = func_0x036c49d4(puVar56,plVar71);
          auVar90 = auVar21;
          if (plVar47 != (long *)0x0) {
            lVar51 = *plVar47;
            puVar48 = (ulong *)CONCAT44(0,uVar29);
            auVar22._8_8_ = lVar52;
            auVar22._0_8_ = puVar48;
            auVar90._8_8_ = lVar52;
            auVar90._0_8_ = puVar48;
            puVar56 = (ulong *)&DAT_059e0780;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059e0780) {
                  puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar32 = (ulong *)0x7;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_03782708:
            iVar31 = (*(code *)*puVar45)(plVar47,puVar45[1]);
            if (lVar52 != 0) {
              puVar33 = (ulong *)0x0;
              func_0x03700d78(lVar52,(uVar29 - *(int *)(lVar52 + 0x10)) - iVar31);
              puVar32 = puVar48;
              auVar90 = auVar22;
              if (lVar61 != 0) {
                func_0x03704850(lVar61,0);
                lVar52 = *plVar47;
                uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059e0780) {
                      puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0780,2);
LAB_03782794:
                puVar33 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
                *(int *)(lVar61 + 0x14) = (int)puVar33 + -1;
                return puVar33;
              }
            }
          }
        }
      }
    }
  }
  auVar93 = func_0x0249fb90();
  uVar34 = auVar93._8_8_;
  uVar53 = auVar93._0_8_;
  *(code **)((long)register0x00000008 + -0x950) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0x948) = 0x37827c0;
  *(undefined **)((long)register0x00000008 + -0x940) = puVar73;
  *(ulong **)((long)register0x00000008 + -0x938) = puVar56;
  *(long **)((long)register0x00000008 + -0x930) = plVar47;
  *(long *)((long)register0x00000008 + -0x928) = auVar90._8_8_;
  *(long *)((long)register0x00000008 + -0x920) = auVar90._0_8_;
  *(long *)((long)register0x00000008 + -0x918) = lVar61;
  puVar48 = puVar32;
  puVar56 = puVar33;
  puVar46 = puVar54;
  if ((bRam0000000005e2df9d & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2df9d = 1;
  }
  plVar47 = (long *)func_0x0376e450(uVar53,uVar34);
  plVar71 = (long *)0x5e2d000;
  if (plVar47 == (long *)0x0) {
LAB_037829b0:
    uVar78 = 0x37829b4;
    auVar93 = func_0x0249fb90();
  }
  else {
    puVar48 = (ulong *)0x0;
    puVar58 = (ulong *)func_0x036d9cf8(plVar47,puVar33);
    if (((ulong)puVar58 & 1) == 0) {
      return puVar58;
    }
    plVar71 = plVar47;
    if (puVar33 == (ulong *)0x0) goto LAB_037829b0;
    uVar60 = *puVar33;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03782894;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059df8e8,5);
LAB_03782894:
    uVar78 = (*(code *)*puVar45)(puVar33,puVar45[1]);
    puVar48 = (ulong *)func_0x036eb4a0(plVar47,uVar78,0);
    if (((ulong)puVar48 & 1) == 0) {
      return puVar48;
    }
    uVar78 = 0x37828c8;
    puVar48 = puVar33;
    puVar56 = puVar32;
  }
  uVar41 = auVar93._8_8_;
  lVar61 = auVar93._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xab0) = uVar78;
  *(long **)((long)register0x00000008 + -0xaa0) = plVar55;
  *(ulong **)((long)register0x00000008 + -0xa98) = puVar64;
  *(ulong **)((long)register0x00000008 + -0xa90) = puVar57;
  *(code **)((long)register0x00000008 + -0xa88) = pcVar43;
  *(long **)((long)register0x00000008 + -0xa80) = plVar71;
  *(undefined8 *)((long)register0x00000008 + -0xa78) = uVar53;
  *(ulong **)((long)register0x00000008 + -0xa70) = puVar33;
  *(undefined8 *)((long)register0x00000008 + -0xa68) = uVar34;
  *(ulong **)((long)register0x00000008 + -0xa60) = puVar32;
  *(ulong **)((long)register0x00000008 + -0xa58) = puVar54;
  puVar33 = puVar48;
  puVar32 = puVar56;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfb7 = 1;
  }
  puVar58 = (ulong *)func_0x0376e450(lVar61,uVar41);
  puVar54 = (ulong *)0x5e2d000;
  if (puVar48 != (ulong *)0x0) {
    uVar60 = *puVar48;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03782a98;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar33 = (ulong *)0x5;
    puVar45 = (undefined8 *)func_0x024d927c(puVar48);
LAB_03782a98:
    uVar53 = (*(code *)*puVar45)(puVar48,puVar45[1]);
    puVar54 = puVar58;
    if (puVar58 != (ulong *)0x0) {
      puVar33 = (ulong *)0x0;
      plVar47 = (long *)func_0x036d3908(puVar58,uVar53);
      if (plVar47 != (long *)0x0) {
        lVar52 = *plVar47;
        puVar64 = (ulong *)&DAT_059dfbc0;
        uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar33 = (ulong *)0x2;
        puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_03782b18:
        pcVar67 = (code *)(*(code *)*puVar45)(plVar47,puVar45[1]);
        plVar71 = plVar47;
        if (pcVar67 != (code *)0x0) {
          lVar52 = *(long *)pcVar67;
          plVar55 = (long *)&DAT_059dfe38;
          uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfe38) {
                puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_03782b84;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar33 = (ulong *)0x2;
          puVar45 = (undefined8 *)func_0x024d927c(pcVar67);
LAB_03782b84:
          puVar35 = (ulong *)(*(code *)*puVar45)(pcVar67,puVar45[1]);
          if (((ulong)puVar35 & 1) == 0) {
            return puVar35;
          }
          pcVar44 = (code *)func_0x036d5ffc(puVar58,0);
          pcVar43 = pcVar67;
          if (pcVar44 != (code *)0x0) {
            puVar57 = *(ulong **)(lVar61 + 0x30);
            uVar62 = func_0x036d392c(puVar58,0);
            puVar32 = (ulong *)(uVar62 & 0xffffffff);
            puVar46 = (ulong *)0x0;
            puVar33 = puVar57;
            func_0x0374def0(pcVar44,puVar48);
            pcVar43 = pcVar44;
          }
          lVar52 = *plVar47;
          uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar33 = (ulong *)0x2;
          puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_03782c20:
          plVar47 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
          if (plVar47 != (long *)0x0) {
            lVar52 = *plVar47;
            uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059dfe38) {
                  puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar33 = (ulong *)0x0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_03782c80:
            plVar68 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
            plVar71 = plVar47;
            if (plVar68 != (long *)0x0) {
              lVar52 = *plVar68;
              uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfe68) {
                    puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfe68,1);
LAB_03782cec:
              puVar32 = puVar58;
              puVar46 = puVar58;
              puVar33 = (ulong *)(*(code *)*puVar45)(plVar68,puVar48,lVar61,puVar58,puVar58,puVar56,
                                                     puVar45[1]);
              if ((puVar33 == (ulong *)0x0) || (*puVar33 == _DAT_059e2700)) {
                func_0x037743ac(lVar61,uVar41);
                puVar33 = (ulong *)func_0x03530c84(puVar56,0);
                *(ulong **)(lVar61 + 0x20) = puVar33;
                return puVar33;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar68 = plVar71;
  func_0x0249fb90();
LAB_03782d68:
  auVar93 = func_0x0249ff10(puVar33);
  plVar71 = auVar93._8_8_;
  lVar52 = auVar93._0_8_;
  *(code **)((long)register0x00000008 + -0xb10) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0xb00) = 0x3782d70;
  *(ulong **)((long)register0x00000008 + -0xaf8) = puVar64;
  *(ulong **)((long)register0x00000008 + -0xaf0) = puVar57;
  *(code **)((long)register0x00000008 + -0xae8) = pcVar43;
  *(long **)((long)register0x00000008 + -0xae0) = plVar68;
  *(ulong **)((long)register0x00000008 + -0xad8) = puVar54;
  *(ulong **)((long)register0x00000008 + -0xad0) = puVar48;
  *(undefined8 *)((long)register0x00000008 + -0xac8) = uVar41;
  *(long *)((long)register0x00000008 + -0xac0) = lVar61;
  *(ulong **)((long)register0x00000008 + -0xab8) = puVar56;
  puVar48 = puVar33;
  puVar56 = puVar32;
  puVar54 = puVar46;
  if ((bRam0000000005e2df9e & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2df9e = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0xb08) = 0;
  lVar61 = func_0x0376e450(lVar52,puVar33);
  puVar58 = (ulong *)0x0;
  if ((lVar61 == 0) || (puVar58 = (ulong *)func_0x036d06d8(lVar61,0), ((ulong)puVar58 & 1) == 0)) {
    return puVar58;
  }
  puVar58 = (ulong *)func_0x036d5f70(lVar61,0);
  if (plVar71 != (long *)0x0) {
    lVar51 = *plVar71;
    uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_03782e80;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df8e8,5);
LAB_03782e80:
    uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    puVar48 = (ulong *)0x0;
    pcVar67 = (code *)func_0x036d3908(lVar61,uVar53);
    puVar57 = puVar58;
    if (pcVar67 != (code *)0x0) {
      lVar51 = *(long *)pcVar67;
      uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 6) * 0x10 + 0x138);
            goto LAB_03782efc;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar48 = (ulong *)0x6;
      puVar45 = (undefined8 *)func_0x024d927c(pcVar67);
LAB_03782efc:
      plVar47 = (long *)(*(code *)*puVar45)(pcVar67,puVar45[1]);
      pcVar43 = pcVar67;
      if ((puVar58 != (ulong *)0x0) && (puVar64 = (ulong *)0x0, plVar47 != (long *)0x0)) {
        lVar51 = *plVar47;
        uVar60 = puVar58[5];
        uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df030) {
              puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 9) * 0x10 + 0x138);
              goto LAB_03782f70;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df030,9);
LAB_03782f70:
        uVar62 = (*(code *)*puVar45)(plVar47,plVar71,uVar60,puVar45[1]);
        func_0x0374a538((undefined1 *)((long)register0x00000008 + -0xb08),uVar62,uVar62 >> 0x20,0);
        func_0x036e1be4(lVar61,0);
        puVar48 = (ulong *)func_0x03530c84(puVar32,0);
        *(ulong **)(lVar52 + 0x20) = puVar48;
        if (puVar46 == (ulong *)0x0) {
          return puVar48;
        }
        *(undefined8 *)((long)register0x00000008 + -0xb68) =
             *(undefined8 *)((long)register0x00000008 + -0xb08);
        uVar53 = func_0x0249fa6c(_DAT_059d9ea8,(undefined1 *)((long)register0x00000008 + -0xb68));
        *(undefined8 *)((long)register0x00000008 + -0xc20) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xba8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xba0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb80) = 0;
        *(undefined8 *)((long)register0x00000008 + -3000) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbc0) = 0;
        func_0x034ba874((undefined1 *)((long)register0x00000008 + -0xbc0),7,puVar33,puVar33,puVar32,
                        pcVar67,0,uVar53);
        lVar61 = _DAT_059c9978;
        func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xc10),
                        (undefined1 *)((long)register0x00000008 + -0xbc0),0x50);
        uVar60 = *puVar46;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == lVar61) {
              puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
              goto LAB_0378307c;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(puVar46,lVar61,2);
LAB_0378307c:
        pcVar77 = (code *)*puVar45;
        func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xb60),
                        (undefined1 *)((long)register0x00000008 + -0xc10),0x50);
        puVar33 = (ulong *)(*pcVar77)(puVar46,(undefined1 *)((long)register0x00000008 + -0xb60),
                                      puVar45[1]);
        return puVar33;
      }
    }
  }
  auVar93 = func_0x0249fb90();
  lVar51 = auVar93._0_8_;
  *(code **)((long)register0x00000008 + -0xc70) = pcVar77;
  *(undefined8 *)((long)register0x00000008 + -0xc60) = 0x37830c4;
  *(code **)((long)register0x00000008 + -0xc58) = pcVar43;
  *(long *)((long)register0x00000008 + -0xc50) = lVar61;
  *(long **)((long)register0x00000008 + -0xc48) = plVar71;
  *(long *)((long)register0x00000008 + -0xc40) = lVar52;
  *(ulong **)((long)register0x00000008 + -0xc38) = puVar33;
  *(ulong **)((long)register0x00000008 + -0xc30) = puVar32;
  *(ulong **)((long)register0x00000008 + -0xc28) = puVar46;
  if ((bRam0000000005e2df9f & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df9f = 1;
  }
  puVar33 = (ulong *)func_0x0376e450(lVar51,puVar48);
  puVar32 = (ulong *)0x0;
  if ((puVar33 == (ulong *)0x0) ||
     (puVar32 = (ulong *)func_0x036e21f8(puVar33,0), ((ulong)puVar32 & 1) == 0)) {
    return puVar32;
  }
  func_0x036d7cb4(puVar33,puVar56,auVar93._8_8_,lVar51,puVar48,0);
  uVar53 = func_0x03530c84(puVar56,0);
  *(undefined8 *)(lVar51 + 0x20) = uVar53;
  *(undefined8 *)((long)register0x00000008 + -0xd70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xcf8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd00) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xce8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xcf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xcd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xce0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xcc8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xcd0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd08) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd10) = 0;
  puVar32 = puVar48;
  puVar46 = puVar48;
  puVar58 = puVar56;
  func_0x034ba874((undefined1 *)((long)register0x00000008 + -0xd10),0xd);
  lVar61 = _DAT_059c9978;
  if (puVar54 == (ulong *)0x0) {
    uVar53 = 0x3783264;
    auVar91 = func_0x0249fb90();
    puVar26 = (undefined1 *)((long)register0x00000008 + -0xd70);
  }
  else {
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xd60),
                    (undefined1 *)((long)register0x00000008 + -0xd10),0x50);
    uVar60 = *puVar54;
    uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == lVar61) {
          puVar33 = (ulong *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
          goto LAB_03783208;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar33 = (ulong *)func_0x024d927c(puVar54,lVar61,2);
LAB_03783208:
    pcVar43 = (code *)*puVar33;
    func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xcc0),
                    (undefined1 *)((long)register0x00000008 + -0xd60),0x50);
    (*pcVar43)(puVar54,(undefined1 *)((long)register0x00000008 + -0xcc0),puVar33[1]);
    uVar53 = 0x3783244;
    puVar26 = (undefined1 *)((long)register0x00000008 + -0xd70);
    puVar32 = puVar54;
    puVar46 = puVar48;
    puVar58 = puVar56;
    auVar91 = auVar93;
  }
SUB_03783264:
  puVar35 = puVar46;
  plVar71 = auVar91._0_8_;
  *(code **)(puVar26 + -0x60) = pcVar77;
  *(undefined8 *)(puVar26 + -0x58) = uVar53;
  *(long **)(puVar26 + -0x50) = plVar55;
  *(ulong **)(puVar26 + -0x48) = puVar64;
  *(ulong **)(puVar26 + -0x40) = puVar57;
  *(code **)(puVar26 + -0x38) = pcVar43;
  *(ulong **)(puVar26 + -0x30) = puVar33;
  *(undefined1 (*) [16])(puVar26 + -0x28) = auVar93;
  *(ulong **)(puVar26 + -0x18) = puVar48;
  *(ulong **)(puVar26 + -0x10) = puVar54;
  *(ulong **)(puVar26 + -8) = puVar56;
  *(ulong **)(puVar26 + -0xb8) = puVar35;
  puVar48 = puVar32;
  puVar56 = puVar35;
  puVar46 = puVar58;
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
  puVar33 = (ulong *)func_0x03773874(puVar26 + -0xb8);
  uVar53 = func_0x0249fb80(_DAT_059c6000);
  auVar95._8_8_ = puVar48;
  auVar95._0_8_ = puVar56;
  if (plVar71 != (long *)0x0) {
    uVar78 = 0;
    func_0x02a9aa34(uVar53,plVar71,*(undefined8 *)(*plVar71 + 0x250));
    uVar34 = _DAT_05a447b8;
    puVar48 = (ulong *)func_0x026ec554(puVar33,uVar53);
    auVar95._8_8_ = uVar34;
    auVar95._0_8_ = uVar78;
    if (puVar48 != (ulong *)0x0) {
      uVar60 = *puVar48;
      uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059ca360) {
            puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
            goto LAB_037833d8;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      uVar34 = 0;
      puVar45 = (undefined8 *)func_0x024d927c(puVar48);
LAB_037833d8:
      puVar33 = (ulong *)(*(code *)*puVar45)(puVar48,puVar45[1]);
      auVar95._8_8_ = uVar34;
      auVar95._0_8_ = uVar78;
      *(ulong **)(puVar26 + -0xc0) = puVar33;
      *(undefined8 *)(puVar26 + -0xd0) = 0;
      *(undefined1 **)(puVar26 + -200) = puVar26 + -0xc0;
      if (puVar33 == (ulong *)0x0) {
LAB_037836dc:
        puVar33 = (ulong *)func_0x0249fb90();
LAB_037836e0:
        puVar58 = (ulong *)0x0;
        puVar45 = (undefined8 *)(puVar26 + -0xc0);
        goto LAB_037836e8;
      }
      puVar57 = (ulong *)&DAT_059df6e0;
      puVar64 = (ulong *)&DAT_059cb6b8;
      plVar55 = (long *)&DAT_059c9978;
      puVar48 = puVar33;
      do {
        uVar53 = auVar95._0_8_;
        uVar60 = *puVar48;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
              puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_0378345c;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        uVar34 = 0;
        puVar45 = (undefined8 *)func_0x024d927c(puVar48);
        auVar95._8_8_ = uVar34;
        auVar95._0_8_ = uVar53;
LAB_0378345c:
        puVar33 = (ulong *)(*(code *)*puVar45)(puVar48,puVar45[1]);
        uVar53 = auVar95._0_8_;
        if (((ulong)puVar33 & 1) == 0) goto LAB_037836e0;
        plVar47 = *(long **)(puVar26 + -0xc0);
        if (plVar47 == (long *)0x0) {
          func_0x0249fb90();
          puVar33 = (ulong *)0x0;
          break;
        }
        lVar61 = *plVar47;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059cb6b8) {
              puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_037834c0;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        uVar34 = 0;
        puVar45 = (undefined8 *)func_0x024d927c(plVar47);
        auVar95._8_8_ = uVar34;
        auVar95._0_8_ = uVar53;
LAB_037834c0:
        puVar33 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
        lVar61 = func_0x0376e450(plVar71,puVar33);
        if (((lVar61 != 0) && (uVar62 = func_0x036e2208(lVar61,0), (uVar62 & 1) != 0)) &&
           (puVar46 = puVar35, auVar95 = auVar91, uVar62 = func_0x036d7cb4(lVar61,puVar58),
           (uVar62 & 1) != 0)) {
          if (*(int *)(lVar61 + 0x18) == 1) {
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
            puVar48 = puVar33;
            puVar56 = puVar33;
            puVar46 = puVar58;
            func_0x034ba874(puVar26 + -0x120,0xe);
            lVar61 = _DAT_059c9978;
            auVar95._8_8_ = puVar48;
            auVar95._0_8_ = puVar56;
            if (puVar32 == (ulong *)0x0) goto LAB_03783780;
            func_0x054ed0d0(puVar26 + -0x1c0,puVar26 + -0x120,0x50);
            uVar60 = *puVar32;
            uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == lVar61) {
                  puVar45 = (undefined8 *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                  goto LAB_037836b0;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar45 = (undefined8 *)func_0x024d927c(puVar32,lVar61,2);
LAB_037836b0:
            pcVar77 = (code *)*puVar45;
            func_0x054ed0d0(puVar26 + -0xb0,puVar26 + -0x1c0,0x50);
            uVar53 = puVar45[1];
            (*pcVar77)(puVar32,puVar26 + -0xb0);
            auVar95._8_8_ = uVar53;
            auVar95._0_8_ = puVar56;
          }
          else if (*(int *)(lVar61 + 0x18) == 2) goto code_r0x03783528;
        }
        puVar48 = *(ulong **)(puVar26 + -0xc0);
        if (puVar48 == (ulong *)0x0) goto LAB_037836dc;
      } while( true );
    }
  }
  func_0x0249fb90();
  goto LAB_0378377c;
code_r0x033c4070:
  uVar62 = (**(code **)(*plVar47 + 0x1b8))(plVar47,auVar93._8_8_,*(undefined8 *)(*plVar47 + 0x1c0));
  if ((uVar62 & 1) == 0) {
LAB_033c4084:
    uVar29 = uVar29 ^ 1;
    func_0x02a5d2cc(puVar26 + -0x50,_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c(puVar26 + -0xb0);
  func_0x0258f7ac(uVar34);
  auVar93 = func_0x022bd790();
  plVar49 = auVar93._8_8_;
  plVar68 = auVar93._0_8_;
  *(undefined8 *)(puVar26 + -0xe0) = 0x33c45c4;
  *(undefined **)(puVar26 + -0xd0) = puVar69;
  *(long **)(puVar26 + -200) = plVar47;
  *(long **)(puVar26 + -0xc0) = plVar71;
  *(undefined8 *)(puVar26 + -0xb8) = uVar34;
  uVar34 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar49 != (long *)0x0) {
    lVar61 = *plVar49;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    uVar53 = 6;
    puVar45 = (undefined8 *)func_0x024d927c(plVar49);
LAB_033c466c:
    lVar61 = (*(code *)*puVar45)(plVar49,puVar45[1]);
    if (plVar68 != (long *)0x0) {
      lVar51 = *plVar68;
      puVar69 = &DAT_059dfa78;
      uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      uVar53 = 1;
      puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_033c46d8:
      uVar28 = (*(code *)*puVar45)(plVar68,puVar45[1]);
      uVar34 = 0;
      if (lVar61 != 0) {
        uVar62 = func_0x0387c57c(lVar61,uVar28,0);
        if ((uVar62 & 1) != 0) {
          return (ulong *)0x3;
        }
        lVar51 = *plVar68;
        uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
              puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar62 = (*(code *)*puVar45)(plVar68,puVar45[1]);
        if ((uVar62 & 1) == 0) {
          lVar51 = *plVar68;
          uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
          if (uVar62 != 0) {
            piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
                puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar62 = (*(code *)*puVar45)(plVar68,puVar45[1]);
          if ((uVar62 & 1) == 0) {
            lVar51 = *plVar68;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
                  puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfa78,1);
LAB_033c4814:
            uVar28 = (*(code *)*puVar45)(plVar68,puVar45[1]);
            uVar62 = func_0x0387cc50(lVar61,uVar28,0);
            if ((uVar62 & 1) != 0) {
              return (ulong *)0x2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar48 = (ulong *)0x0;
        uVar62 = func_0x03603060(plVar68,plVar49,1);
        if ((uVar62 & 1) == 0) {
          return (ulong *)0x5;
        }
        lVar51 = *plVar68;
        uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
              puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar62 = (*(code *)*puVar45)(plVar68,puVar45[1]);
        if ((uVar62 & 1) == 0) {
          uVar29 = func_0x033c4128(plVar68,plVar49);
          return (ulong *)(ulong)((uVar29 ^ 0xffffffff) & 1);
        }
        uVar53 = 0x33c48e0;
        puVar26 = puVar26 + -0xe0;
        auVar91 = auVar93;
        goto SUB_033c3e04;
      }
    }
  }
  auVar91 = func_0x0249fb90();
  plVar71 = auVar91._8_8_;
  lVar61 = auVar91._0_8_;
  *(undefined8 *)(puVar26 + -0x100) = 0x33c490c;
  *(undefined8 *)(puVar26 + -0xf8) = uVar34;
  *(undefined1 (*) [16])(puVar26 + -0xf0) = auVar93;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar71 == (long *)0x0) goto LAB_033c4a08;
  lVar51 = *plVar71;
  uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
  if (uVar62 == 0) goto LAB_033c4978;
  piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
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
  puVar48 = puVar33;
  puVar56 = puVar33;
  puVar46 = puVar58;
  func_0x034ba874(puVar26 + -0x120,0xd);
  lVar61 = _DAT_059c9978;
  auVar95._8_8_ = puVar48;
  auVar95._0_8_ = puVar56;
  if (puVar32 == (ulong *)0x0) {
LAB_0378377c:
    func_0x0249fb90();
LAB_03783780:
    func_0x0249fb90();
    puVar48 = puVar33;
    do {
      auVar94 = func_0x0249fb88(puVar58);
      uVar53 = auVar94._0_8_;
      if (auVar94._8_4_ != 1) {
        func_0x022bd79c(puVar26 + -0xd0);
        func_0x0258f7ac(uVar53);
        auVar93 = func_0x022bd790();
        *(undefined8 *)(puVar26 + -0x210) = 0x37837f8;
        *(ulong **)(puVar26 + -0x200) = puVar48;
        *(undefined1 (*) [16])(puVar26 + -0x1f8) = auVar91;
        *(ulong **)(puVar26 + -0x1e8) = puVar32;
        *(ulong **)(puVar26 + -0x1e0) = puVar35;
        *(undefined8 *)(puVar26 + -0x1d8) = uVar53;
        if ((bRam0000000005e2dfa0 & 1) == 0) {
          func_0x0249f8e4(&DAT_059df8e8);
          bRam0000000005e2dfa0 = 1;
        }
        *(undefined1 *)puVar46 = 0;
        *(undefined8 *)(puVar26 + -0x240) = 0x3783850;
        *(undefined1 (*) [16])(puVar26 + -0x230) = auVar95;
        *(long *)(puVar26 + -0x220) = auVar93._8_8_;
        *(ulong **)(puVar26 + -0x218) = puVar46;
        *(long *)(puVar26 + -0x238) = auVar95._8_8_;
        if ((bRam0000000005e2dfa3 & 1) == 0) {
          func_0x0249f8e4(&DAT_059db250);
          bRam0000000005e2dfa3 = 1;
        }
        uVar62 = func_0x03774280(auVar93._0_8_,auVar95._8_8_);
        if (((uVar62 & 1) == 0) ||
           (uVar62 = func_0x03774280(auVar93._0_8_,auVar95._0_8_), (uVar62 & 1) == 0)) {
          uVar29 = 1;
        }
        else {
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar29 = func_0x037737e4(puVar26 + -0x238,auVar95._0_8_);
        }
        return (ulong *)(ulong)(uVar29 & 1);
      }
      puVar45 = (undefined8 *)func_0x054ed080(uVar53);
      puVar58 = (ulong *)*puVar45;
      *(ulong **)(puVar26 + -0xd0) = puVar58;
      puVar33 = (ulong *)func_0x054ed090();
      puVar45 = *(undefined8 **)(puVar26 + -200);
LAB_037836e8:
      uVar53 = auVar95._0_8_;
      puVar35 = (ulong *)*puVar45;
      if (puVar35 != (ulong *)0x0) {
        uVar60 = *puVar35;
        uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df598) {
              puVar45 = (undefined8 *)(uVar60 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_03783744;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        uVar34 = 0;
        puVar45 = (undefined8 *)func_0x024d927c(puVar35);
        auVar95._8_8_ = uVar34;
        auVar95._0_8_ = uVar53;
LAB_03783744:
        puVar33 = (ulong *)(*(code *)*puVar45)(puVar35,puVar45[1]);
      }
      if (puVar58 == (ulong *)0x0) {
        return puVar33;
      }
    } while( true );
  }
  func_0x054ed0d0(puVar26 + -0x170,puVar26 + -0x120,0x50);
  uVar60 = *puVar32;
  uVar62 = (ulong)*(ushort *)(uVar60 + 0x12e);
  if (uVar62 != 0) {
    piVar63 = (int *)(*(long *)(uVar60 + 0xb0) + 8);
    do {
      if (*(long *)(piVar63 + -2) == lVar61) {
        pcVar43 = (code *)(uVar60 + (long)(*piVar63 + 2) * 0x10 + 0x138);
        goto LAB_03783660;
      }
      uVar62 = uVar62 - 1;
      piVar63 = piVar63 + 4;
    } while (uVar62 != 0);
  }
  pcVar43 = (code *)func_0x024d927c(puVar32,lVar61,2);
LAB_03783660:
  pcVar77 = *(code **)pcVar43;
  func_0x054ed0d0(puVar26 + -0xb0,puVar26 + -0x170,0x50);
  (*pcVar77)(puVar32,puVar26 + -0xb0,*(long *)(pcVar43 + 8));
  uVar53 = 0x378369c;
  puVar26 = puVar26 + -0x1d0;
  puVar46 = puVar33;
  puVar56 = puVar58;
  puVar54 = puVar35;
  puVar48 = puVar32;
  auVar93 = auVar91;
  goto SUB_03783264;
  while( true ) {
    uVar60 = uVar60 - 1;
    piVar63 = piVar63 + 4;
    if (uVar60 == 0) break;
LAB_033c3118:
    if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
      puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059defe8,0xd);
LAB_033c3150:
  lVar61 = (*(code *)*puVar45)(plVar68,uVar62,puVar45[1]);
  if (lVar61 == 0) {
    uVar29 = 0;
  }
  else {
    uVar53 = func_0x0376eb00(puVar57,0);
    *(undefined8 *)((long)register0x00000008 + -0xa38) = uVar53;
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar29 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0xa38),0);
    uVar29 = uVar29 ^ 1;
  }
  return (ulong *)(ulong)(uVar29 & 1);
  while( true ) {
    uVar62 = uVar62 - 1;
    piVar63 = piVar63 + 4;
    if (uVar62 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
      puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar30 = (*(code *)*puVar45)(plVar71,puVar45[1]);
  return (ulong *)(ulong)(iVar31 == iVar30);
  while( true ) {
    uVar59 = uVar59 - 1;
    piVar63 = piVar63 + 4;
    if (uVar59 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
      puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059defe8,0x16);
LAB_033c32d8:
  puVar33 = (ulong *)puVar45[1];
  auVar82 = (*(code *)*puVar45)(plVar68,uVar60);
  uVar53 = auVar82._8_8_;
  lVar52 = auVar82._0_8_;
  if (lVar52 == 0) {
    return (ulong *)0x0;
  }
  plVar55 = (long *)&DAT_059db250;
  uVar34 = func_0x0376eb00(lVar61,0);
  *(undefined8 *)((long)register0x00000008 + -0xaa8) = uVar34;
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar60 = func_0x0376edd4((undefined1 *)((long)register0x00000008 + -0xaa8),0);
  if ((uVar60 & 1) != 0) {
    return (ulong *)0x0;
  }
  if (plVar47 != (long *)0x0) {
    lVar51 = *plVar47;
    plVar55 = (long *)&DAT_059df8e8;
    uVar60 = (ulong)*(ushort *)(lVar51 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_033c3394:
    uVar34 = (*(code *)*puVar45)(plVar47,puVar45[1]);
    puVar33 = (ulong *)0x0;
    uVar60 = func_0x036ec4b4(lVar52,uVar34);
    if ((uVar60 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar53 = func_0x03530158(uVar53,0);
      uVar53 = func_0x03530310(puVar58,uVar53,0);
      lVar51 = *plVar47;
      uVar60 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_033c343c:
      puVar33 = (ulong *)(*(code *)*puVar45)(plVar47,puVar45[1]);
      puVar32 = (ulong *)0x0;
      func_0x036e24f4(lVar52,uVar53);
    }
    auVar17._8_8_ = uVar53;
    auVar17._0_8_ = lVar52;
    auVar16._8_8_ = uVar53;
    auVar16._0_8_ = lVar52;
    auVar82._8_8_ = uVar53;
    auVar82._0_8_ = lVar52;
    if (lVar61 != 0) {
      func_0x03785f38(lVar61,*(undefined8 *)((long)register0x00000008 + -0xaa8),lVar52,puVar58,
                      puVar64,plVar47,0);
      if (((ulong)puVar48 & 1) == 0) {
        return (ulong *)0x1;
      }
      uVar62 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar62,_DAT_05a192a0);
      lVar51 = *plVar47;
      puVar64 = *(ulong **)((long)register0x00000008 + -0xaa8);
      uVar60 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar53 = (*(code *)*puVar45)(plVar47,puVar45[1]);
      plVar71 = (long *)func_0x036d3908(lVar52,uVar53,0);
      *(undefined8 *)((long)register0x00000008 + -0xb60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xae8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xaf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xad8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xae0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xac8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xad0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xab8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xac0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xaf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb00) = 0;
      puVar33 = puVar64;
      puVar32 = puVar64;
      puVar56 = puVar58;
      func_0x034ba874((undefined1 *)((long)register0x00000008 + -0xb00),9);
      auVar82 = auVar16;
      if (uVar62 != 0) {
        func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0xb50),
                        (undefined1 *)((long)register0x00000008 + -0xb00),0x50);
        puVar33 = _DAT_05a192a8;
        func_0x025a1da8(uVar62,(undefined1 *)((long)register0x00000008 + -0xb50));
        lVar52 = *plVar47;
        uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar60 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar60 = uVar60 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar60 != 0);
        }
        puVar33 = (ulong *)0x17;
        puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c35d4:
        plVar49 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
        lVar52 = *plVar68;
        uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar60 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059defe8) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar60 = uVar60 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar60 != 0);
        }
        puVar33 = (ulong *)0x2;
        puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_033c3634:
        uVar53 = (*(code *)*puVar45)(plVar68,puVar45[1]);
        plVar47 = (long *)0x0;
        auVar82 = auVar17;
        if (plVar49 != (long *)0x0) {
          lVar61 = *plVar49;
          uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar60 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059e0280) {
                puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar60 = uVar60 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar60 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar49,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar45)(plVar49,uVar53,uVar62,puVar45[1]);
          return (ulong *)0x1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar52 = auVar82._8_8_;
  auVar93 = func_0x0249fb90();
  puVar69 = auVar93._8_8_;
  puVar40 = auVar93._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xbb0) = 0x33c36d8;
  *(long *)((long)register0x00000008 + -0xba0) = lVar52;
  *(long *)((long)register0x00000008 + -0xb98) = auVar82._0_8_;
  *(long *)((long)register0x00000008 + -0xb90) = lVar61;
  *(ulong **)((long)register0x00000008 + -0xb88) = puVar64;
  *(ulong *)((long)register0x00000008 + -0xb80) = uVar62;
  *(ulong **)((long)register0x00000008 + -0xb78) = puVar58;
  *(long **)((long)register0x00000008 + -0xb70) = plVar47;
  *(long **)((long)register0x00000008 + -0xb68) = plVar68;
  puVar70 = (undefined *)0x5e2c000;
  puVar74 = (undefined *)((ulong)puVar32 & 0xffffffff);
  puVar48 = puVar32;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2c3d3 = 1;
  }
  if ((puVar40 != (undefined *)0x0) &&
     (uVar53 = func_0x0376e450(puVar40,puVar69,0), plVar71 != (long *)0x0)) {
    lVar61 = *plVar71;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_033c3798;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059df8e8,5);
LAB_033c3798:
    uVar34 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    uVar29 = func_0x036edd98(uVar53,uVar34,0);
    if ((uVar29 & 1) != 0) {
      if (((ulong)puVar32 & 1) == 0) {
        func_0x03780be8(puVar40,puVar69,puVar33,puVar56,0,plVar71,0);
      }
      else {
        func_0x036eaf0c(uVar53,0);
        func_0x03780be8(puVar40,puVar69,puVar33,puVar56,0,plVar71,0);
        func_0x036eadfc(uVar53,0);
      }
    }
    return (ulong *)(ulong)(uVar29 & 1);
  }
  lVar61 = func_0x0249fb90();
  puVar26 = (undefined1 *)((long)register0x00000008 + -0xbd0);
  *(undefined8 *)((long)register0x00000008 + -0xbd0) = 0x33c383c;
  *(ulong **)((long)register0x00000008 + -0xbc8) = puVar33;
  *(ulong **)((long)register0x00000008 + -0xbc0) = puVar56;
  *(long **)((long)register0x00000008 + -3000) = plVar71;
  uVar53 = 0x5e2c000;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar61 != 0) {
    puVar33 = (ulong *)func_0x0367613c(lVar61,0);
    iVar31 = func_0x03676288(lVar61,0);
    if ((puVar33 != (ulong *)0x0) && (*(long *)(lVar61 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar61 + 0x338) + 0x10) = *(int *)((long)puVar33 + 0x24) * iVar31;
      func_0x03675f48(lVar61,iVar31,0);
      if ((iVar31 != 0) || (*(int *)(lVar61 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar33 = (ulong *)func_0x03633f50(lVar61,0);
        if (((ulong)puVar33 & 1) != 0) {
          return puVar33;
        }
      }
      *(undefined4 *)(lVar61 + 0x358) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xbd0) =
           *(undefined8 *)((long)register0x00000008 + -0xbd0);
      *(undefined8 *)((long)register0x00000008 + -0xbc8) =
           *(undefined8 *)((long)register0x00000008 + -0xbc8);
      *(undefined8 *)((long)register0x00000008 + -0xbc0) =
           *(undefined8 *)((long)register0x00000008 + -0xbc0);
      *(undefined8 *)((long)register0x00000008 + -3000) =
           *(undefined8 *)((long)register0x00000008 + -3000);
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      puVar33 = (ulong *)func_0x028a379c(lVar61,_DAT_05a2aaf0);
      *(ulong **)(lVar61 + 0x340) = puVar33;
      return puVar33;
    }
  }
  uVar34 = 0x33c3914;
  auVar83 = func_0x0249fb90();
  if (auVar83._8_8_ != 0) {
    do {
      *(undefined8 *)(puVar26 + -0x20) = uVar34;
      *(ulong **)(puVar26 + -0x18) = puVar33;
      *(undefined8 *)(puVar26 + -0x10) = uVar53;
      *(long *)(puVar26 + -8) = lVar61;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar61 = *(long *)(auVar83._8_8_ + 0x38);
      if (lVar61 != 0) {
        *(int *)(puVar26 + -0x24) = auVar83._0_4_;
        uVar29 = func_0x02893128(lVar61,puVar26 + -0x24,_DAT_05a2a588);
        return (ulong *)(ulong)(uVar29 & 1);
      }
      auVar93 = func_0x0249fb90();
      plVar71 = auVar93._8_8_;
      *(undefined8 *)(puVar26 + -0x50) = 0x387e7ec;
      *(undefined8 *)(puVar26 + -0x48) = 0x5e2e000;
      *(long *)(puVar26 + -0x40) = auVar83._8_8_;
      *(ulong *)(puVar26 + -0x38) = auVar83._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar71 == (long *)0x0) {
        auVar91 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0x70) = 0x387e89c;
        *(undefined8 *)(puVar26 + -0x68) = 0x5e2e000;
        *(undefined8 *)(puVar26 + -0x60) = 0;
        *(long *)(puVar26 + -0x58) = auVar93._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar61 = *(long *)(auVar91._0_8_ + 0xe8);
        if (lVar61 != 0) {
          *(int *)(puVar26 + -0x74) = auVar91._8_4_;
          uVar29 = func_0x02893128(lVar61,puVar26 + -0x74,_DAT_05a2a588);
          return (ulong *)(ulong)(uVar29 & 1);
        }
        auVar93 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0xa0) = 0x387e908;
        *(undefined8 *)(puVar26 + -0x98) = 0x5e2e000;
        *(long *)(puVar26 + -0x90) = auVar91._0_8_;
        *(ulong *)(puVar26 + -0x88) = auVar91._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar61 = *(long *)(auVar93._0_8_ + 0xe8);
        if (lVar61 != 0) {
          *(int *)(puVar26 + -0xa4) = auVar93._8_4_;
          puVar33 = (ulong *)func_0x028926c4(lVar61,puVar26 + -0xa4,_DAT_05a2a578);
          return puVar33;
        }
        lVar61 = func_0x0249fb90();
        *(undefined8 *)(puVar26 + -0xd0) = 0x387e970;
        *(long *)(puVar26 + -0xc0) = auVar93._0_8_;
        *(ulong *)(puVar26 + -0xb8) = auVar93._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar61 + 0xf0) == 0) {
          puVar33 = (ulong *)0x0;
        }
        else {
          puVar33 = (ulong *)(ulong)*(uint *)(*(long *)(lVar61 + 0xf0) + 0x20);
        }
        return puVar33;
      }
      lVar61 = *plVar71;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
      auVar83._8_8_ = auVar93._0_8_;
      auVar83._0_8_ = uVar53;
      uVar53 = *(undefined8 *)(puVar26 + -0x40);
      lVar61 = *(long *)(puVar26 + -0x38);
      uVar34 = *(undefined8 *)(puVar26 + -0x50);
      puVar33 = *(ulong **)(puVar26 + -0x48);
      puVar26 = puVar26 + -0x30;
    } while( true );
  }
  *(undefined8 *)((long)register0x00000008 + -0xbe0) = 0x33c3914;
  auVar93 = func_0x0249fb90();
  plVar71 = auVar93._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc10) = 0x33c3934;
  *(undefined **)((long)register0x00000008 + -0xc00) = puVar69;
  *(ulong **)((long)register0x00000008 + -0xbf8) = puVar33;
  *(undefined8 *)((long)register0x00000008 + -0xbf0) = 0x5e2c000;
  *(long *)((long)register0x00000008 + -0xbe8) = lVar61;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar71 == (long *)0x0) {
    uVar53 = 0x33c3cc8;
    auVar91 = func_0x0249fb90();
  }
  else {
    lVar61 = *plVar71;
    puVar69 = &DAT_059dfa78;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar61 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    if (lVar61 == 0) {
      return (ulong *)0x0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar62 = func_0x035fb854(plVar71,auVar93._8_8_,0);
    if ((uVar62 & 1) == 0) {
      return (ulong *)0x0;
    }
    uVar53 = 0x33c3a24;
    auVar91 = auVar93;
  }
  plVar47 = auVar91._8_8_;
  plVar71 = auVar91._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc30) = uVar53;
  *(undefined8 *)((long)register0x00000008 + -0xc28) = 0x5e2c000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xc20) = auVar93;
  lVar61 = 0x5e2c000;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar71 == (long *)0x0) {
    uVar53 = 0x33c3e04;
    auVar93 = func_0x0249fb90();
    auVar23._8_8_ = 0;
    auVar23._0_8_ = plVar47;
    puVar26 = (undefined1 *)((long)register0x00000008 + -0xc30);
    auVar91 = auVar23 << 0x40;
SUB_033c3e04:
    plVar71 = auVar93._0_8_;
    *(undefined8 *)(puVar26 + -0x30) = uVar53;
    *(undefined **)(puVar26 + -0x28) = puVar40;
    *(undefined **)(puVar26 + -0x20) = puVar69;
    *(long *)(puVar26 + -0x18) = lVar61;
    *(undefined1 (*) [16])(puVar26 + -0x10) = auVar91;
    puVar65 = (undefined *)0x5e2c000;
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
    if (plVar71 != (long *)0x0) {
      lVar61 = *plVar71;
      puVar65 = &DAT_059dfa78;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar62 = (*(code *)*puVar45)(plVar71,puVar45[1]);
      if ((uVar62 & 1) == 0) goto LAB_033c40ec;
      lVar61 = *plVar71;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar47 = (long *)(*(code *)*puVar45)(plVar71,auVar93._8_8_,puVar45[1]);
      if (plVar47 != (long *)0x0) {
        lVar61 = *plVar47;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dec98) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dec98,4);
LAB_033c3fac:
        lVar61 = (*(code *)*puVar45)(plVar47,puVar45[1]);
        plVar71 = plVar47;
        if (lVar61 != 0) {
          func_0x028310e8(lVar61,puVar26 + -0x50,_DAT_05a1a750);
          puVar69 = &DAT_05a047f0;
          puVar40 = &DAT_05a047f8;
          *(undefined8 *)(puVar26 + -0x60) = 0;
          *(undefined1 **)(puVar26 + -0x58) = puVar26 + -0x50;
LAB_033c3fe8:
          uVar29 = func_0x02a5d2d0(puVar26 + -0x50,_DAT_05a047f0);
          lVar61 = _DAT_05a047f8;
          plVar71 = (long *)(ulong)uVar29;
          if ((uVar29 & 1) == 0) goto LAB_033c4084;
          lVar39 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar4 = *(ushort *)(lVar39 + 0x135);
          lVar51 = lVar39;
          if ((uVar4 & 1) == 0) {
            lVar51 = func_0x024d8f40();
            lVar39 = *(long *)(lVar61 + 0x20);
            uVar4 = *(ushort *)(lVar39 + 0x135);
          }
          puVar65 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar51 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar4 & 1) == 0) {
            lVar39 = func_0x024d8f40();
          }
          uVar53 = func_0x0249f90c(puVar26 + -0x50,
                                   *(long *)(*(long *)(*(long *)(lVar39 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0(puVar26 + -0x38,uVar53,puVar65);
          plVar47 = *(long **)(puVar26 + -0x38);
          if (plVar47 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar94 = func_0x0249fb90();
    uVar53 = auVar94._0_8_;
    if (auVar94._8_4_ == 1) {
      plVar47 = (long *)func_0x054ed080(uVar53);
      lVar61 = *plVar47;
      *(long *)(puVar26 + -0x60) = lVar61;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)(puVar26 + -0x58),_DAT_05a047e8);
      if (lVar61 == 0) {
LAB_033c40ec:
        uVar29 = 1;
LAB_033c40f0:
        return (ulong *)(ulong)(uVar29 & 1);
      }
      uVar53 = func_0x0249fb88(lVar61);
    }
    func_0x022c29f0(puVar26 + -0x60);
    func_0x0258f7ac(uVar53);
    auVar93 = func_0x022bd790();
    plVar68 = auVar93._8_8_;
    plVar47 = auVar93._0_8_;
    *(undefined8 *)(puVar26 + -0xa0) = 0x33c4128;
    *(undefined **)(puVar26 + -0x90) = puVar74;
    *(undefined **)(puVar26 + -0x88) = puVar40;
    *(undefined **)(puVar26 + -0x80) = puVar69;
    *(undefined **)(puVar26 + -0x78) = puVar65;
    *(long **)(puVar26 + -0x70) = plVar71;
    *(undefined8 *)(puVar26 + -0x68) = uVar53;
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
    if ((plVar47 != (long *)0x0) && (plVar68 != (long *)0x0)) {
      lVar61 = *plVar68;
      uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059e0220,6);
LAB_033c4208:
      lVar61 = (*(code *)*puVar45)(plVar68,puVar45[1]);
      lVar51 = *plVar47;
      puVar69 = &DAT_059dfa78;
      uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
            puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar53 = puVar45[1];
      plVar71 = (long *)(*(code *)*puVar45)(plVar47,plVar68);
      if (plVar71 != (long *)0x0) {
        lVar51 = *plVar71;
        uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059ca7c8) {
              puVar45 = (undefined8 *)(lVar51 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        uVar53 = 0;
        puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c42e4:
        plVar68 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
        *(long **)(puVar26 + -0x98) = plVar68;
        *(undefined8 *)(puVar26 + -0xb0) = 0;
        *(undefined1 **)(puVar26 + -0xa8) = puVar26 + -0x98;
        if (plVar68 != (long *)0x0) {
          puVar40 = &DAT_059df6e0;
          puVar74 = &DAT_059cbb20;
          do {
            lVar51 = *plVar68;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059df6e0) {
                  puVar45 = (undefined8 *)(lVar51 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            uVar53 = 0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar68);
LAB_033c4360:
            uVar62 = (*(code *)*puVar45)(plVar68,puVar45[1]);
            plVar71 = (long *)(uVar62 & 0xffffffff);
            if ((uVar62 & 1) == 0) goto LAB_033c44b8;
            plVar47 = *(long **)(puVar26 + -0x98);
            if (plVar47 == (long *)0x0) {
              func_0x0249fb90();
              plVar47 = (long *)0x0;
LAB_033c4550:
              auVar84 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar84._0_8_,auVar84._8_8_);
              goto LAB_033c4558;
            }
            lVar51 = *plVar47;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059cbb20) {
                  puVar45 = (undefined8 *)(lVar51 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            uVar53 = 0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c43c8:
            plVar47 = (long *)(*(code *)*puVar45)(plVar47,puVar45[1]);
            if (plVar47 == (long *)0x0) goto LAB_033c4550;
            lVar51 = *plVar47;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
                  puVar45 = (undefined8 *)(lVar51 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            uVar53 = 0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c4428:
            iVar31 = (*(code *)*puVar45)(plVar47,puVar45[1]);
            if (iVar31 != 0) {
              lVar51 = *plVar47;
              uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
                    puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              uVar53 = 1;
              puVar45 = (undefined8 *)func_0x024d927c(plVar47);
LAB_033c4488:
              uVar62 = (*(code *)*puVar45)(plVar47,puVar45[1]);
              auVar84._8_8_ = uVar62 & 0xffffffff;
              auVar84._0_8_ = uVar62;
              if (lVar61 == 0) goto LAB_033c4554;
              uVar53 = 0;
              uVar62 = func_0x0387cc50(lVar61);
              if ((uVar62 & 1) == 0) goto LAB_033c44b8;
            }
            plVar68 = *(long **)(puVar26 + -0x98);
            plVar71 = (long *)0x0;
          } while (plVar68 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar61 = 0;
        puVar69 = (undefined *)(ulong)((uint)plVar71 ^ 1);
        puVar45 = (undefined8 *)(puVar26 + -0x98);
        do {
          plVar71 = (long *)*puVar45;
          if (plVar71 != (long *)0x0) {
            lVar51 = *plVar71;
            uVar62 = (ulong)*(ushort *)(lVar51 + 0x12e);
            if (uVar62 != 0) {
              piVar63 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059df598) {
                  puVar45 = (undefined8 *)(lVar51 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar62 = uVar62 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar62 != 0);
            }
            uVar53 = 0;
            puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c4520:
            (*(code *)*puVar45)(plVar71,puVar45[1]);
          }
          if (lVar61 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar94 = func_0x0249fb88(lVar61);
          uVar34 = auVar94._0_8_;
          if (auVar94._8_4_ != 1) goto LAB_033c45b0;
          plVar71 = (long *)func_0x054ed080(uVar34);
          lVar61 = *plVar71;
          *(long *)(puVar26 + -0xb0) = lVar61;
          func_0x054ed090();
          puVar45 = *(undefined8 **)(puVar26 + -0xa8);
          puVar69 = (undefined *)0x1;
        } while( true );
      }
      puVar69 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong *)(ulong)((uint)puVar69 & 1);
  }
  lVar61 = *plVar71;
  uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
  if (uVar62 != 0) {
    piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
    do {
      if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
        puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar62 = uVar62 - 1;
      piVar63 = piVar63 + 4;
    } while (uVar62 != 0);
  }
  puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar62 = (*(code *)*puVar45)(plVar71,puVar45[1]);
  if ((uVar62 & 1) != 0) {
    lVar61 = *plVar71;
    uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
    uVar53 = func_0x033c88e0(uVar53,plVar47,0,0);
    uVar62 = func_0x033c9114(uVar53,plVar47);
    if ((uVar62 & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0xc60) =
           *(undefined8 *)((long)register0x00000008 + -0xc30);
      *(undefined **)((long)register0x00000008 + -0xc58) = puVar73;
      *(long *)((long)register0x00000008 + -0xc50) = lVar52;
      *(undefined8 *)((long)register0x00000008 + -0xc48) = 0x5e2c000;
      *(undefined **)((long)register0x00000008 + -0xc40) = puVar74;
      *(undefined **)((long)register0x00000008 + -0xc38) = puVar40;
      *(undefined **)((long)register0x00000008 + -0xc30) = puVar69;
      *(undefined8 *)((long)register0x00000008 + -0xc28) =
           *(undefined8 *)((long)register0x00000008 + -0xc28);
      *(undefined8 *)((long)register0x00000008 + -0xc20) =
           *(undefined8 *)((long)register0x00000008 + -0xc20);
      *(undefined8 *)((long)register0x00000008 + -0xc18) =
           *(undefined8 *)((long)register0x00000008 + -0xc18);
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar71 != (long *)0x0) {
        lVar61 = *plVar71;
        uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
              puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar53 = (*(code *)*puVar45)(plVar71,puVar45[1]);
        lVar61 = func_0x033c97d4(uVar53,plVar47);
        if (lVar61 != 0) {
          uVar29 = *(uint *)(lVar61 + 0x18);
          if (0 < (int)uVar29) {
            if (plVar47 == (long *)0x0) goto LAB_033ca068;
            uVar62 = 0;
            do {
              lVar52 = *plVar47;
              uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
              if (uVar60 != 0) {
                piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
                    puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar60 = uVar60 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar60 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0220,6);
LAB_033c9f74:
              lVar52 = (*(code *)*puVar45)(plVar47,puVar45[1]);
              if (*(uint *)(lVar61 + 0x18) <= uVar62) goto LAB_033ca06c;
              plVar55 = (long *)(lVar61 + uVar62 * 8 + 0x20);
              lVar51 = *plVar55;
              if ((lVar51 == 0) || (uVar28 = func_0x0353efa0(lVar51,0), lVar52 == 0))
              goto LAB_033ca068;
              uVar60 = func_0x0387cc50(lVar52,uVar28,0);
              if ((uVar60 & 1) == 0) {
                if (*(uint *)(lVar61 + 0x18) <= uVar62) goto LAB_033ca06c;
                lVar61 = *plVar55;
                if (lVar61 == 0) goto LAB_033ca068;
                iVar31 = func_0x0353efa0(lVar61,0);
                lVar61 = *plVar71;
                uVar62 = (ulong)*(ushort *)(lVar61 + 0x12e);
                if (uVar62 == 0) goto LAB_033ca020;
                piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar62 = uVar62 + 1;
            } while (uVar62 != uVar29);
          }
          return (ulong *)0x0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar93 = func_0x0249fb98();
      *(undefined8 *)((long)register0x00000008 + -0xc70) = 0x33ca070;
      *(long **)((long)register0x00000008 + -0xc68) = plVar71;
      uVar53 = func_0x033c88e0(auVar93._0_8_,auVar93._8_8_,0,0);
      puVar33 = (ulong *)func_0x033c7ab8(uVar53,auVar93._8_8_);
      return puVar33;
    }
  }
  return (ulong *)0x1;
  while( true ) {
    uVar62 = uVar62 - 1;
    piVar63 = piVar63 + 4;
    if (uVar62 == 0) break;
LAB_033c4960:
    if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
      puVar45 = (undefined8 *)(lVar51 + (long)(*piVar63 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar53 = 6;
  puVar45 = (undefined8 *)func_0x024d927c(plVar71);
LAB_033c4998:
  lVar51 = (*(code *)*puVar45)(plVar71,puVar45[1]);
  if ((lVar61 != 0) && (plVar71 = (long *)0x0, lVar51 != 0)) {
    uVar62 = func_0x0387c57c(lVar51,*(undefined4 *)(lVar61 + 0x10),0);
    if ((uVar62 & 1) == 0) {
      puVar33 = (ulong *)0x2;
    }
    else {
      uVar62 = func_0x0353f618(lVar61,0);
      if (((uVar62 & 1) == 0) &&
         (uVar62 = func_0x0387cc50(lVar51,*(undefined4 *)(lVar61 + 0x10),0), (uVar62 & 1) != 0)) {
        puVar33 = (ulong *)0x1;
      }
      else {
        puVar33 = (ulong *)0x0;
      }
    }
    return puVar33;
  }
LAB_033c4a08:
  auVar93 = func_0x0249fb90();
  *(code **)(puVar26 + -0x160) = pcVar77;
  *(undefined8 *)(puVar26 + -0x158) = 0x33c4a0c;
  *(long **)(puVar26 + -0x150) = plVar55;
  *(undefined **)(puVar26 + -0x148) = puVar73;
  *(long *)(puVar26 + -0x140) = lVar52;
  *(undefined8 *)(puVar26 + -0x138) = 0x5e2c000;
  *(undefined **)(puVar26 + -0x130) = puVar74;
  *(undefined **)(puVar26 + -0x128) = puVar40;
  *(undefined **)(puVar26 + -0x120) = puVar69;
  *(undefined8 *)(puVar26 + -0x118) = 0x5e2c000;
  *(long **)(puVar26 + -0x110) = plVar71;
  *(long *)(puVar26 + -0x108) = lVar61;
  plVar71 = (long *)0x5e2c000;
  uVar62 = auVar93._0_8_ & 0xffffffff;
  puVar33 = puVar48;
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
  if (puVar48 == (ulong *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar53 = func_0x0249fb88(uVar53);
    func_0x022c29f0(puVar26 + -0x1e0);
    func_0x0258f7ac(uVar53);
    uVar34 = 0x33c5404;
    auVar85 = func_0x022bd790();
    puVar73 = puVar74;
  }
  else {
    uVar59 = *puVar48;
    uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(uVar59 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar48,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar55 = (long *)(*(code *)*puVar45)(puVar48,puVar45[1]);
    if (plVar55 == (long *)0x0) goto LAB_033c53e0;
    lVar61 = *plVar55;
    uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar71 = (long *)(*(code *)*puVar45)(plVar55,puVar45[1]);
    uVar59 = *puVar48;
    uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
          puVar45 = (undefined8 *)(uVar59 + (long)(*piVar63 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar48,_DAT_059e0220,6);
LAB_033c4cac:
    puVar73 = (undefined *)(*(code *)*puVar45)(puVar48,puVar45[1]);
    if (plVar71 == (long *)0x0) goto LAB_033c53e0;
    lVar61 = *plVar71;
    puVar70 = &DAT_059cd750;
    uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059cd750) {
          puVar45 = (undefined8 *)(lVar61 + (long)*piVar63 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059cd750,0);
LAB_033c4d14:
    uVar60 = (*(code *)*puVar45)(plVar71,uVar62,puVar45[1]);
    if ((uVar60 & 1) == 0) {
      return (ulong *)0x4;
    }
    puVar74 = puVar73;
    if (puVar73 == (undefined *)0x0) goto LAB_033c53e0;
    uVar60 = func_0x0387c57c(puVar73,uVar62,0);
    if ((uVar60 & 1) == 0) {
      return (ulong *)0x1;
    }
    lVar61 = *plVar71;
    uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059cd750) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059cd750,2);
LAB_033c4da0:
    uVar62 = (*(code *)*puVar45)(plVar71,uVar62,puVar45[1]);
    auVar85._8_8_ = puVar48;
    auVar85._0_8_ = uVar62;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar60 = func_0x035fb854(uVar62,puVar48,0);
    if ((uVar60 & 1) == 0) {
      return (ulong *)0x3;
    }
    puVar26[-0x16c] = 0;
    if (uVar62 == 0) goto LAB_033c53e0;
    uVar60 = func_0x0353f608(uVar62,0);
    if (((uVar60 & 1) != 0) || (uVar60 = func_0x0353f618(uVar62,0), (uVar60 & 1) != 0)) {
      plVar71 = *(long **)(uVar62 + 0x28);
      if (plVar71 == (long *)0x0) {
LAB_033c52d0:
        uVar29 = 0;
        if (puVar26[-0x16c] != '\0') {
          uVar29 = 6;
        }
        return (ulong *)(ulong)uVar29;
      }
      uVar29 = *(uint *)(plVar71 + 3);
      puVar74 = (undefined *)(ulong)uVar29;
      if ((int)uVar29 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar70 = _DAT_059f5cd8;
      lVar61 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
        lVar61 = func_0x024d8f40();
      }
      lVar61 = *(long *)(*(long *)(lVar61 + 0xc0) + 8);
      if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
        lVar61 = func_0x024d8f40();
      }
      if (*(int *)(lVar61 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar61 = *(long *)(puVar70 + 0x20);
      if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
        lVar61 = func_0x024d8f40();
      }
      lVar61 = *(long *)(*(long *)(lVar61 + 0xc0) + 8);
      if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
        lVar61 = func_0x024d8f40();
      }
      plVar55 = (long *)**(long **)(lVar61 + 0xb8);
      if (plVar55 != (long *)0x0) {
        puVar70 = (undefined *)
                  (**(code **)(*plVar55 + 0x178))(plVar55,puVar74,*(undefined8 *)(*plVar55 + 0x180))
        ;
        *(undefined **)(puVar26 + -0x178) = puVar70;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar52 = _DAT_059f5d10;
        lVar61 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        lVar61 = *(long *)(*(long *)(lVar61 + 0xc0) + 8);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        if (*(int *)(lVar61 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar61 = *(long *)(lVar52 + 0x20);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        lVar61 = *(long *)(*(long *)(lVar61 + 0xc0) + 8);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        plVar55 = (long *)**(long **)(lVar61 + 0xb8);
        if (plVar55 != (long *)0x0) {
          uVar34 = (**(code **)(*plVar55 + 0x178))(plVar55,uVar29,*(undefined8 *)(*plVar55 + 0x180))
          ;
          *(undefined8 *)(puVar26 + -0x1e0) = 0;
          *(undefined1 **)(puVar26 + -0x1d8) = puVar26 + -0x180;
          *(undefined8 *)(puVar26 + -0x180) = uVar34;
          *(undefined1 **)(puVar26 + -0x1d0) = puVar26 + -0x178;
          auVar91 = func_0x028ff200(puVar70,_DAT_05a2eda0);
          auVar79 = func_0x028ff200(*(undefined8 *)(puVar26 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar31 = func_0x035fdf8c(plVar71,auVar91._0_8_,auVar91._8_8_,auVar79._0_8_,auVar79._8_8_,0
                                  );
          if (0 < iVar31) {
            uVar34 = *(undefined8 *)(puVar26 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc(puVar26 + -400,uVar34,0,iVar31,_DAT_059f5d38);
            uVar34 = *(undefined8 *)(puVar26 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc(puVar26 + -0x1a0,uVar34,0,iVar31,_DAT_059f5d98);
            auVar91 = func_0x028ff244(*(undefined8 *)(puVar26 + -400),
                                      *(undefined8 *)(puVar26 + -0x188),_DAT_05a2ed98);
            auVar79 = func_0x028ff244(*(undefined8 *)(puVar26 + -0x1a0),
                                      *(undefined8 *)(puVar26 + -0x198),_DAT_05a2f0a8);
            uVar62 = func_0x033bae94(puVar48,auVar93._8_8_,uVar53,auVar91._0_8_,auVar91._8_8_,
                                     auVar79._0_8_,auVar79._8_8_,puVar26 + -0x16c);
            if ((uVar62 & 1) == 0) {
              func_0x02408624(puVar26 + -0x1e0);
              return (ulong *)0x2;
            }
          }
          func_0x02408624(puVar26 + -0x1e0);
          func_0x028310e8(plVar71,puVar26 + -0x1e0,_DAT_05a1a750);
          *(undefined8 *)(puVar26 + -0x1b8) = *(undefined8 *)(puVar26 + -0x1d8);
          *(undefined8 *)(puVar26 + -0x1c0) = *(undefined8 *)(puVar26 + -0x1e0);
          *(undefined8 *)(puVar26 + -0x1b0) = *(undefined8 *)(puVar26 + -0x1d0);
          *(undefined8 *)(puVar26 + -0x1e0) = 0;
          *(undefined1 **)(puVar26 + -0x1d8) = puVar26 + -0x1c0;
          while (uVar62 = func_0x02a5d2d0(puVar26 + -0x1c0,_DAT_05a047f0), lVar61 = _DAT_05a047f8,
                (uVar62 & 1) != 0) {
            lVar51 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar4 = *(ushort *)(lVar51 + 0x135);
            lVar52 = lVar51;
            if ((uVar4 & 1) == 0) {
              lVar52 = func_0x024d8f40();
              lVar51 = *(long *)(lVar61 + 0x20);
              uVar4 = *(ushort *)(lVar51 + 0x135);
            }
            uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar52 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar51 = func_0x024d8f40();
            }
            uVar53 = func_0x0249f90c(puVar26 + -0x1c0,
                                     *(long *)(*(long *)(*(long *)(lVar51 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0(puVar26 + -0x168,uVar53,uVar28);
            plVar71 = *(long **)(puVar26 + -0x168);
            if (plVar71 != (long *)0x0) {
              lVar61 = *plVar71;
              if (((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar61 + 0x130)) &&
                  (*(long *)(*(long *)(lVar61 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                            -8) == _DAT_059db3a0)) &&
                 (uVar62 = (**(code **)(lVar61 + 0x1b8))
                                     (plVar71,puVar48,*(undefined8 *)(lVar61 + 0x1c0)),
                 (uVar62 & 1) == 0)) {
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
    uVar60 = func_0x0353f5f8(uVar62,0);
    if ((uVar60 & 1) == 0) {
      uVar60 = func_0x0353f628(uVar62,0);
      if (((uVar60 & 1) != 0) || (uVar60 = func_0x0353f638(uVar62,0), (uVar60 & 1) != 0)) {
        return (ulong *)0x3;
      }
      uVar60 = func_0x0353f648(uVar62,0);
      if ((uVar60 & 1) == 0) {
        uVar60 = func_0x0353f658(uVar62,0);
        if ((uVar60 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar60 = func_0x03600068(uVar62,puVar26 + -0x1c8,0);
        if ((uVar60 & 1) == 0) goto LAB_033c52d0;
        lVar61 = func_0x022bffa8(6,_DAT_059e0220,puVar48);
        if (*(long *)(puVar26 + -0x1c8) != 0) {
          uVar34 = func_0x03693f98(*(long *)(puVar26 + -0x1c8),0);
          uVar53 = 0;
          if (lVar61 != 0) {
            uVar62 = func_0x03887158(lVar61,puVar48,uVar34,0);
            if ((uVar62 & 1) != 0) {
              return (ulong *)0x3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar61 = func_0x022bffa8(6,_DAT_059e0220,puVar48);
        if (lVar61 != 0) {
          uVar62 = func_0x03884e60(lVar61,*(undefined4 *)(uVar62 + 0x10),0,0);
          if ((uVar62 & 1) == 0) {
            return (ulong *)0x3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar34 = 0x33c52cc;
  }
  plVar47 = auVar85._8_8_;
  plVar55 = auVar85._0_8_;
  *(undefined8 *)(puVar26 + -0x210) = uVar34;
  *(long *)(puVar26 + -0x208) = auVar93._8_8_;
  *(undefined8 *)(puVar26 + -0x200) = uVar53;
  *(ulong **)(puVar26 + -0x1f8) = puVar48;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar53 = 0;
  *(undefined8 *)(puVar26 + -0x220) = 0;
  *(undefined8 *)(puVar26 + -0x218) = 0;
  uVar60 = func_0x036a531c(plVar55,plVar47);
  if ((uVar60 & 1) == 0) {
    return (ulong *)0x0;
  }
  if (plVar55 != (long *)0x0) {
    lVar61 = *plVar55;
    uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059dfa78) {
          puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(plVar55,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar53 = puVar45[1];
    plVar68 = (long *)(*(code *)*puVar45)(plVar55,plVar47);
    if (plVar47 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar47 + 0x130)) &&
          (*(long *)(*(long *)(*plVar47 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar55 = (long *)0x0, plVar68 != (long *)0x0)) {
        lVar52 = *plVar68;
        lVar61 = plVar47[0x9c];
        uVar62 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059dec98) {
              puVar45 = (undefined8 *)(lVar52 + (long)(*piVar63 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar68,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar93 = (*(code *)*puVar45)(plVar68,plVar47,(char)lVar61 != '\0',puVar45[1]);
        *(undefined1 (*) [16])(puVar26 + -0x220) = auVar93;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar61 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar61 + 0x135) & 1) == 0) {
          lVar61 = func_0x024d8f40();
        }
        pcVar42 = (char *)func_0x0249f90c(puVar26 + -0x220,
                                          *(long *)(**(long **)(lVar61 + 0xc0) + 0x80) + 0x20);
        return (ulong *)(ulong)(*pcVar42 == '\0');
      }
    }
  }
  auVar93 = func_0x0249fb90();
  *(undefined8 *)(puVar26 + -0x270) = 0x33c5620;
  *(long *)(puVar26 + -0x260) = lVar52;
  *(undefined **)(puVar26 + -600) = puVar70;
  *(undefined **)(puVar26 + -0x250) = puVar73;
  *(long **)(puVar26 + -0x248) = plVar71;
  *(ulong *)(puVar26 + -0x240) = uVar62;
  *(undefined8 *)(puVar26 + -0x238) = 0x5e2c000;
  *(long **)(puVar26 + -0x230) = plVar55;
  *(long **)(puVar26 + -0x228) = plVar47;
  uVar62 = auVar93._0_8_ & 0xffffffff;
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
  if (puVar33 != (ulong *)0x0) {
    uVar59 = *puVar33;
    uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
    if (uVar60 != 0) {
      piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar45 = (undefined8 *)(uVar59 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar60 = uVar60 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar60 != 0);
    }
    puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059df8e8,5);
LAB_033c5714:
    plVar71 = (long *)(*(code *)*puVar45)(puVar33,puVar45[1]);
    if (plVar71 != (long *)0x0) {
      lVar61 = *plVar71;
      uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059dfe60) {
            puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar71 = (long *)(*(code *)*puVar45)(plVar71,puVar45[1]);
      uVar59 = *puVar33;
      uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
      if (uVar60 != 0) {
        piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
            puVar45 = (undefined8 *)(uVar59 + (long)(*piVar63 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar60 = uVar60 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar60 != 0);
      }
      puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059e0220,6);
LAB_033c57e8:
      lVar61 = (*(code *)*puVar45)(puVar33,puVar45[1]);
      if (plVar71 != (long *)0x0) {
        lVar52 = *plVar71;
        uVar60 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar60 != 0) {
          piVar63 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059cd750) {
              puVar45 = (undefined8 *)(lVar52 + (long)*piVar63 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar60 = uVar60 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar60 != 0);
        }
        puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059cd750,0);
LAB_033c5850:
        uVar60 = (*(code *)*puVar45)(plVar71,uVar62,puVar45[1]);
        if ((uVar60 & 1) == 0) {
          return (ulong *)0x4;
        }
        if (lVar61 != 0) {
          uVar60 = func_0x0387c57c(lVar61,uVar62,0);
          if ((uVar60 & 1) == 0) {
            return (ulong *)0x1;
          }
          lVar61 = *plVar71;
          uVar60 = (ulong)*(ushort *)(lVar61 + 0x12e);
          if (uVar60 != 0) {
            piVar63 = (int *)(*(long *)(lVar61 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059cd750) {
                puVar45 = (undefined8 *)(lVar61 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar60 = uVar60 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar60 != 0);
          }
          puVar45 = (undefined8 *)func_0x024d927c(plVar71,_DAT_059cd750,2);
LAB_033c58dc:
          lVar61 = (*(code *)*puVar45)(plVar71,uVar62,puVar45[1]);
          if (lVar61 != 0) {
            uVar60 = func_0x0353f648(lVar61,0);
            if ((uVar60 & 1) == 0) {
              uVar62 = func_0x0353f658(lVar61,0);
              if ((uVar62 & 1) == 0) {
                return (ulong *)0x3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar62 = func_0x03600068(lVar61,puVar26 + -0x278,0);
              if ((uVar62 & 1) == 0) {
                return (ulong *)0x3;
              }
              lVar61 = func_0x022bffa8(6,_DAT_059e0220,puVar33);
              if (*(long *)(puVar26 + -0x278) != 0) {
                uVar34 = func_0x03693f98(*(long *)(puVar26 + -0x278),0);
                uVar53 = 0;
                if (lVar61 != 0) {
                  func_0x03887758(lVar61,puVar33,uVar34,0);
                  return (ulong *)0x3;
                }
              }
            }
            else {
              uVar59 = *puVar33;
              uVar60 = (ulong)*(ushort *)(uVar59 + 0x12e);
              if (uVar60 != 0) {
                piVar63 = (int *)(*(long *)(uVar59 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059e0220) {
                    puVar45 = (undefined8 *)(uVar59 + (long)(*piVar63 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar60 = uVar60 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar60 != 0);
              }
              puVar45 = (undefined8 *)func_0x024d927c(puVar33,_DAT_059e0220,6);
LAB_033c59d0:
              lVar61 = (*(code *)*puVar45)(puVar33,puVar45[1]);
              if (lVar61 != 0) {
                lVar61 = func_0x03885c68(lVar61,puVar33,uVar62,0);
                if (lVar61 == 0) {
                  return (ulong *)0x3;
                }
                lVar52 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar61 + 0x10) != 0) {
                  plVar71 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar28 = *(undefined4 *)(plVar71[1] + 0xfc);
                  uVar34 = func_0x0249f90c(*(long *)(lVar61 + 0x10),*(undefined8 *)(*plVar71 + 0x80)
                                          );
                  func_0x054ed0d0(puVar26 + -0x264,uVar34,uVar28);
                  uVar34 = _DAT_059d7518;
                  if (lVar52 != 0) {
                    if (*(int *)(lVar52 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar52 + 0x20) = *(undefined4 *)(puVar26 + -0x264);
                    lVar61 = func_0x0249f9d4(uVar34,1);
                    if (lVar61 != 0) {
                      if (*(int *)(lVar61 + 0x18) != 0) {
                        *(undefined4 *)(lVar61 + 0x20) = 1;
                        uVar62 = func_0x033bacb8(puVar33,auVar93._8_8_,uVar53,lVar52,lVar61,
                                                 puVar26 + -0x268);
                        if ((uVar62 & 1) == 0) {
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
  lVar61 = func_0x0249fb98();
  if (lVar61 != 0) {
    return (ulong *)(ulong)*(byte *)(lVar61 + 0x4e0);
  }
  *(undefined8 *)(puVar26 + -0x290) = 0x33c5ae8;
  auVar91 = func_0x0249fb90();
  *(undefined8 *)(puVar26 + -0x2b0) = 0x33c5afc;
  *(long *)(puVar26 + -0x2a8) = auVar93._8_8_;
  *(undefined8 *)(puVar26 + -0x2a0) = uVar53;
  *(ulong **)(puVar26 + -0x298) = puVar33;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)(puVar26 + -0x2c0) = 0;
  lVar52 = func_0x033c5be8(auVar91._0_8_,auVar91._8_8_);
  lVar61 = _DAT_05a27d90;
  if (lVar52 == 0) {
    uVar53 = 0;
    *(undefined8 *)(puVar26 + -0x2c0) = 0;
  }
  else {
    uVar53 = *(undefined8 *)(lVar52 + 0x10);
  }
  *(undefined8 *)(puVar26 + -0x2c0) = uVar53;
  lVar51 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar4 = *(ushort *)(lVar51 + 0x135);
  lVar52 = lVar51;
  if ((uVar4 & 1) == 0) {
    lVar51 = func_0x024d8f40(lVar51);
    uVar4 = *(ushort *)(*(long *)(lVar61 + 0x20) + 0x135);
    lVar52 = *(long *)(lVar61 + 0x20);
  }
  uVar28 = *(undefined4 *)(**(long **)(lVar51 + 0xc0) + 0xfc);
  if ((uVar4 & 1) == 0) {
    lVar52 = func_0x024d8f40(lVar52);
  }
  uVar53 = func_0x0249f90c(puVar26 + -0x2c0,
                           *(long *)(*(long *)(*(long *)(lVar52 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0(puVar26 + -0x2b4,uVar53,uVar28);
  return (ulong *)(ulong)*(uint *)(puVar26 + -0x2b4);
}


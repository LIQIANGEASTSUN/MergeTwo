/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> ProcessCollectForCoordinate(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate coordinate, Metaplay.Core.MetaTime timeForCollecting, GameLogic.Random.IGenerationContext generationContext)
 * Ghidra function entry: 03780814
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x037811c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x037828c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03783240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03783698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0378384c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03781884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03781db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03781738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03780f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0378173c) */
/* WARNING: Removing unreachable block (ram,0x03781db4) */
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
/* WARNING: Removing unreachable block (ram,0x03780f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_03780814(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4,
                   undefined8 param_5,uint param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined *puVar15;
  int iVar12;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  undefined8 *puVar24;
  code *pcVar25;
  code *pcVar26;
  code *pcVar27;
  undefined8 *puVar28;
  char *pcVar29;
  uint uVar13;
  int iVar14;
  long *plVar30;
  code *pcVar31;
  long *plVar32;
  long *plVar33;
  undefined8 uVar34;
  code *pcVar35;
  code *extraout_x1;
  code *extraout_x1_00;
  code *pcVar36;
  undefined8 uVar37;
  code *pcVar38;
  code *pcVar39;
  code *pcVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  int *piVar44;
  undefined *puVar45;
  code *pcVar46;
  code *pcVar47;
  code *pcVar48;
  undefined *puVar49;
  code *unaff_x26;
  long lVar50;
  undefined *unaff_x27;
  undefined *unaff_x28;
  code *unaff_x29;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined8 auStack_370 [2];
  undefined1 auStack_360 [80];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  code *pcStack_298;
  undefined1 auStack_290 [16];
  undefined8 auStack_280 [10];
  undefined1 auStack_1d0 [80];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005e2df95 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a364b0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059d76b0);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2df95 = 1;
  }
  lVar17 = func_0x0376e450(param_1,param_3);
  if ((lVar17 == 0) || (uVar18 = func_0x036de7e4(lVar17,param_2,0), (uVar18 & 1) == 0)) {
    lVar17 = _DAT_05a364b0;
    lVar41 = *(long *)(_DAT_05a364b0 + 0x38);
    if (lVar41 == 0) {
      func_0x024d8f9c(_DAT_05a364b0);
      lVar41 = *(long *)(lVar17 + 0x38);
    }
    lVar41 = *(long *)(lVar41 + 0x10);
    if ((*(ushort *)(lVar41 + 0x135) & 1) == 0) {
      lVar41 = func_0x024d8f40();
    }
    if (*(int *)(lVar41 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x024d8f40();
    }
    return (code *)**(undefined8 **)(lVar17 + 0xb8);
  }
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  pcVar19 = (code *)func_0x03530158(param_4,0);
  uVar37 = 1;
  pcVar46 = param_3;
  func_0x037789bc(param_1,param_2);
  pcVar20 = (code *)func_0x0249f9d4(_DAT_059d76b0,1);
  uVar21 = func_0x03530158(param_4,0);
  if (param_2 == (long *)0x0) {
LAB_03780a54:
    func_0x0249fb90();
  }
  else {
    lVar41 = *param_2;
    uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_037809c0;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    puVar22 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037809c0:
    uVar37 = (*(code *)*puVar22)(param_2,puVar22[1]);
    param_6 = func_0x036d3908(lVar17,uVar37,0);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcVar19 = param_3;
    func_0x034ba874(&uStack_80,0xc);
    pcVar46 = param_3;
    uVar37 = uVar21;
    if (pcVar20 == (code *)0x0) goto LAB_03780a54;
    if (*(int *)(pcVar20 + 0x18) != 0) {
      func_0x054ed0e0(pcVar20 + 0x20,&uStack_80,0x50);
      func_0x0249f888(pcVar20 + 0x38,0);
      return pcVar20;
    }
  }
  auVar53 = func_0x0249fb98();
  pcVar20 = auVar53._8_8_;
  uVar21 = auVar53._0_8_;
  if ((bRam0000000005e2df96 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df96 = 1;
  }
  lVar17 = func_0x0376e450(uVar21,pcVar20);
  if (lVar17 == 0) {
    return (code *)0x0;
  }
  uVar18 = func_0x036ef810(lVar17,uVar37,uVar21,param_6 & 1,0);
  if ((uVar18 & 1) == 0) {
    return (code *)0x0;
  }
  func_0x037789bc(uVar21,uVar37,pcVar20,pcVar46,1);
  pcVar39 = (code *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  pcVar26 = pcVar20;
  func_0x034ba874(&uStack_180,0xb);
  lVar17 = _DAT_059c9978;
  if (pcVar19 != (code *)0x0) {
    func_0x054ed0d0(auStack_1d0,&uStack_180,0x50);
    lVar41 = *(long *)pcVar19;
    uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == lVar17) {
          puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
          goto LAB_03780ba0;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    puVar22 = (undefined8 *)func_0x024d927c(pcVar19,lVar17,2);
LAB_03780ba0:
    pcVar46 = (code *)*puVar22;
    func_0x054ed0d0(auStack_130,auStack_1d0,0x50);
    (*pcVar46)(pcVar19,auStack_130,puVar22[1]);
    return (code *)0x1;
  }
  auVar53 = func_0x0249fb90();
  pcVar31 = auVar53._8_8_;
  pcVar19 = auVar53._0_8_;
  puVar22 = auStack_370;
  pcVar47 = (code *)((ulong)pcVar46 & 0xffffffff);
  pcVar40 = pcVar39;
  if ((bRam0000000005e2df97 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a27ee8);
    func_0x0249f8e4(&DAT_05a29c88);
    func_0x0249f8e4(&DAT_059d4170);
    bRam0000000005e2df97 = 1;
  }
  auStack_290._0_8_ = 0;
  auStack_290._8_8_ = 0;
  auStack_2a8._8_8_ = 0;
  pcStack_298 = (code *)0x0;
  auStack_2b8._8_8_ = 0;
  auStack_2a8._0_8_ = 0;
  pcStack_2c0 = (code *)0x0;
  auStack_2b8._0_8_ = 0;
  pcVar23 = (code *)func_0x0376e450(pcVar19,pcVar31);
  auVar56._8_8_ = pcVar23;
  auVar56._0_8_ = pcVar39;
  auVar53._8_8_ = pcVar23;
  auVar53._0_8_ = pcVar39;
  if (pcVar23 == (code *)0x0) {
    return (code *)0x0;
  }
  pcVar36 = (code *)0x0;
  pcVar35 = pcVar19;
  uVar18 = func_0x036f58fc(pcVar23,pcVar39);
  if ((uVar18 & 1) == 0) {
    return (code *)0x0;
  }
  if (pcVar39 != (code *)0x0) {
    lVar17 = *(long *)pcVar39;
    pcVar19 = (code *)&DAT_059df8e8;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar24 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_03780d28;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    puVar24 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059df8e8,5);
LAB_03780d28:
    uVar37 = (*(code *)*puVar24)(pcVar39,puVar24[1]);
    uVar18 = func_0x036edd98(pcVar23,uVar37,0);
    pcVar36 = pcVar47;
    if (((uVar18 & 1) == 0) || (uVar18 = func_0x036ee320(pcVar23,pcVar39,0), (uVar18 & 1) != 0)) {
LAB_03780df0:
      lVar17 = *(long *)pcVar39;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
            puVar24 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
            goto LAB_03780e40;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar24 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059df8e8,5);
LAB_03780e40:
      uVar37 = (*(code *)*puVar24)(pcVar39,puVar24[1]);
      uVar18 = func_0x036edd98(pcVar23,uVar37,0);
      if (((uVar18 & 1) == 0) || (uVar18 = func_0x036ee320(pcVar23,pcVar39,0), (uVar18 & 1) != 0)) {
        lVar17 = *(long *)pcVar39;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
              puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
              goto LAB_03780f98;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        puVar22 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059df8e8,5);
LAB_03780f98:
        uVar37 = (*(code *)*puVar22)(pcVar39,puVar22[1]);
        uVar18 = func_0x036f619c(pcVar23,uVar37,0);
        auVar54._8_8_ = auStack_2b8._8_8_;
        auVar54._0_8_ = auStack_2b8._0_8_;
        if ((uVar18 & 1) != 0) {
          lVar17 = *(long *)pcVar39;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                goto LAB_03781008;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059df8e8,5);
LAB_03781008:
          uVar37 = (*(code *)*puVar22)(pcVar39,puVar22[1]);
          uVar18 = func_0x036f66a8(pcVar23,uVar37,0);
          auVar54._8_8_ = auStack_2b8._8_8_;
          auVar54._0_8_ = auStack_2b8._0_8_;
          if ((uVar18 & 1) == 0) {
            auStack_2a8 = func_0x036f56f8(pcVar23,pcVar20,0);
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar18 = func_0x0288eda8(auStack_2a8,&pcStack_2c0,_DAT_05a29c88);
            auVar54._8_8_ = auStack_2b8._8_8_;
            auVar54._0_8_ = auStack_2b8._0_8_;
            pcVar35 = pcStack_2c0;
            goto joined_r0x03781070;
          }
        }
      }
      else {
        auStack_2b8 = func_0x036f52d8(pcVar23,pcVar20,0);
        lVar17 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x024d8f40();
        }
        pcVar29 = (char *)func_0x0249f90c(auStack_2b8,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
        auVar54 = auStack_2b8;
        if (*pcVar29 != '\0') {
          puVar10 = auStack_2b8;
LAB_03780f0c:
          func_0x02886844(puVar10,auStack_280,_DAT_05a27ee8);
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          pcVar19 = (code *)func_0x0425449c(auStack_280[0],0);
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e2be8);
          }
          pcVar35 = (code *)func_0x0352ed34(pcVar19,0);
          uVar37 = 0x3780f84;
          goto SUB_037812b8;
        }
      }
    }
    else {
      lVar17 = *(long *)pcVar39;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
            puVar24 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
            goto LAB_03780dac;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar24 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059df8e8,5);
LAB_03780dac:
      uVar37 = (*(code *)*puVar24)(pcVar39,puVar24[1]);
      uVar18 = func_0x036f619c(pcVar23,uVar37,0);
      if ((uVar18 & 1) == 0) goto LAB_03780df0;
      uVar37 = func_0x022bffa8(5,_DAT_059df8e8,pcVar39);
      uVar18 = func_0x036f66a8(pcVar23,uVar37,0);
      if ((uVar18 & 1) != 0) goto LAB_03780df0;
      auStack_290 = func_0x036f52d8(pcVar23,pcVar20,0);
      auStack_2a8 = func_0x036f56f8(pcVar23,pcVar20,0);
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0288eda8(auStack_2a8,&pcStack_298,_DAT_05a29c88);
      pcVar19 = (code *)(uVar18 & 0xffffffff);
      uVar43 = func_0x022bf4f8(auStack_290,_DAT_05a27ee0);
      auVar54._8_8_ = auStack_2b8._8_8_;
      auVar54._0_8_ = auStack_2b8._0_8_;
      pcVar35 = pcStack_298;
      if ((uVar43 & 1) != 0) {
        if ((uVar18 & 1) != 0) {
          func_0x02886844(auStack_290,auStack_280,_DAT_05a27ee8);
          uVar37 = auStack_280[0];
          unaff_x26 = pcStack_298;
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar18 = func_0x042542f4(uVar37,unaff_x26,0);
          pcVar35 = pcStack_298;
          if ((uVar18 & 1) == 0) goto LAB_03781168;
        }
        puVar10 = auStack_290;
        goto LAB_03780f0c;
      }
joined_r0x03781070:
      if ((uVar18 & 1) != 0) {
LAB_03781168:
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        pcVar19 = (code *)func_0x0425449c(pcVar35,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        pcVar25 = (code *)func_0x0352ed34(pcVar19,0);
        uVar37 = 0x37811c4;
        puVar24 = auStack_370;
        pcVar35 = pcVar26;
        pcVar38 = pcVar20;
        pcVar48 = pcVar47;
        goto SUB_0378130c;
      }
    }
    pcVar40 = (code *)0x0;
    auStack_370[0] = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    pcVar35 = pcVar31;
    pcVar36 = pcVar31;
    pcVar46 = pcVar20;
    auStack_2b8 = auVar54;
    func_0x034ba874(&uStack_310,0x11);
    lVar17 = _DAT_059c9978;
    if (pcVar26 != (code *)0x0) {
      func_0x054ed0d0(auStack_360,&uStack_310,0x50);
      lVar41 = *(long *)pcVar26;
      uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == lVar17) {
            puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
            goto LAB_03781270;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar22 = (undefined8 *)func_0x024d927c(pcVar26,lVar17,2);
LAB_03781270:
      pcVar46 = (code *)*puVar22;
      func_0x054ed0d0(auStack_280,auStack_360,0x50);
      (*pcVar46)(pcVar26,auStack_280,puVar22[1]);
      return (code *)0x1;
    }
  }
  uVar37 = 0x37812b8;
  auVar53 = func_0x0249fb90();
  puVar22 = auStack_370;
SUB_037812b8:
  *(undefined8 *)((long)puVar22 + -0x20) = uVar37;
  *(code **)((long)puVar22 + -0x18) = pcVar31;
  *(code **)((long)puVar22 + -0x10) = pcVar20;
  *(code **)((long)puVar22 + -8) = pcVar26;
  if (auVar53._8_8_ == 0) {
    uVar37 = 0x378130c;
    auVar56 = func_0x0249fb90();
    puVar24 = (undefined8 *)((long)puVar22 + -0x20);
    pcVar25 = pcVar35;
    pcVar35 = pcVar26;
    pcVar38 = pcVar20;
    pcVar48 = pcVar47;
SUB_0378130c:
    do {
      pcVar47 = pcVar40;
      pcVar26 = pcVar36;
      *(undefined8 *)((long)puVar24 + -0x20) = uVar37;
      *(code **)((long)puVar24 + -0x18) = pcVar31;
      *(code **)((long)puVar24 + -0x10) = pcVar38;
      *(code **)((long)puVar24 + -8) = pcVar35;
      if (auVar56._8_8_ != 0) {
        pcVar20 = (code *)0x0;
        iVar14 = (int)pcVar26;
        pcVar40 = (code *)func_0x036de6a0(auVar56._8_8_,pcVar25);
        if (iVar14 != 1) {
          return pcVar40;
        }
        pcVar40 = *(code **)((long)puVar24 + -0x10);
        lVar17 = *(long *)((long)puVar24 + -8);
        uVar37 = *(undefined8 *)((long)puVar24 + -0x20);
        auVar53._8_8_ = pcVar48;
        auVar53._0_8_ = *(undefined8 *)((long)puVar24 + -0x18);
        goto LAB_037824a0;
      }
      auVar53 = func_0x0249fb90();
      pcVar20 = auVar53._8_8_;
      pcVar27 = auVar53._0_8_;
      puVar22 = (undefined8 *)((long)puVar24 + -0x1c0);
      *(code **)((long)puVar24 + -0x70) = unaff_x29;
      *(undefined8 *)((long)puVar24 + -0x68) = 0x3781360;
      *(code **)((long)puVar24 + -0x60) = unaff_x26;
      *(code **)((long)puVar24 + -0x58) = pcVar19;
      *(code **)((long)puVar24 + -0x50) = pcVar23;
      *(code **)((long)puVar24 + -0x48) = pcVar39;
      *(code **)((long)puVar24 + -0x40) = pcVar48;
      *(code **)((long)puVar24 + -0x38) = pcVar31;
      *(code **)((long)puVar24 + -0x30) = pcVar38;
      *(code **)((long)puVar24 + -0x28) = pcVar35;
      pcVar31 = (code *)((ulong)pcVar46 & 0xffffffff);
      pcVar35 = pcVar25;
      pcVar36 = pcVar26;
      pcVar38 = pcVar46;
      pcVar40 = pcVar47;
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
        pcVar38 = pcVar46;
      }
      *(undefined8 *)((long)puVar24 + -0xd0) = 0;
      *(undefined8 *)((long)puVar24 + -200) = 0;
      *(undefined8 *)((long)puVar24 + -0xe0) = 0;
      *(undefined8 *)((long)puVar24 + -0xd8) = 0;
      *(undefined8 *)((long)puVar24 + -0xf0) = 0;
      *(undefined8 *)((long)puVar24 + -0xe8) = 0;
      *(undefined8 *)((long)puVar24 + -0x100) = 0;
      *(undefined8 *)((long)puVar24 + -0xf8) = 0;
      *(undefined8 *)((long)puVar24 + -0x108) = 0;
      pcVar39 = (code *)func_0x0376e450(pcVar27,pcVar20);
      auVar56._8_8_ = pcVar39;
      auVar56._0_8_ = pcVar47;
      auVar53._8_8_ = pcVar39;
      auVar53._0_8_ = pcVar47;
      pcVar46 = (code *)0x5e2d000;
      unaff_x26 = pcVar27;
      if (pcVar47 == (code *)0x0) {
LAB_03781b0c:
        auVar55 = func_0x0249fb90();
        lVar17 = auVar55._8_8_;
        *(undefined8 *)((long)puVar24 + -0x220) = 0x3781b10;
        *(undefined **)((long)puVar24 + -0x210) = unaff_x28;
        *(undefined **)((long)puVar24 + -0x208) = unaff_x27;
        *(code **)((long)puVar24 + -0x200) = unaff_x26;
        *(code **)((long)puVar24 + -0x1f8) = pcVar25;
        *(code **)((long)puVar24 + -0x1f0) = pcVar23;
        *(code **)((long)puVar24 + -0x1e8) = pcVar46;
        *(code **)((long)puVar24 + -0x1e0) = pcVar47;
        *(code **)((long)puVar24 + -0x1d8) = pcVar31;
        *(code **)((long)puVar24 + -0x1d0) = pcVar20;
        *(code **)((long)puVar24 + -0x1c8) = pcVar26;
        pcVar46 = (code *)((ulong)pcVar38 & 0xffffffff);
        pcVar26 = (code *)&DAT_059efeb0;
        pcVar20 = pcVar35;
        pcVar40 = pcVar36;
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
        *(undefined8 *)((long)puVar24 + -0x218) = 0;
        pcVar19 = (code *)func_0x0249fb80(_DAT_059efeb0);
        func_0x037c51f0(pcVar19,0);
        pcVar39 = pcVar35;
        if (pcVar19 == (code *)0x0) goto LAB_03781e4c;
        unaff_x26 = (code *)&DAT_059c59a8;
        unaff_x27 = &DAT_05a6a1d8;
        unaff_x28 = &DAT_05a44708;
        pcVar26 = pcVar19 + 0x10;
        *(long *)pcVar26 = lVar17;
        func_0x0249f888(pcVar26,lVar17);
        *(code **)(pcVar19 + 0x18) = pcVar36;
        func_0x0249f888(pcVar19 + 0x18,pcVar36);
        pcVar36 = (code *)func_0x0376e0dc(auVar55._0_8_);
        uVar37 = func_0x0249fb80(_DAT_059c59a8);
        auVar55._8_8_ = lVar17;
        auVar55._0_8_ = uVar37;
        pcVar40 = (code *)0x0;
        func_0x02a9aa34(uVar37,pcVar19,_DAT_05a6a1d8);
        pcVar20 = _DAT_05a44708;
        plVar30 = (long *)func_0x026ec554(pcVar36,uVar37);
        if (plVar30 == (long *)0x0) goto LAB_03781e4c;
        lVar17 = *plVar30;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 == 0) goto LAB_03781c90;
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_03781c78;
      }
      lVar17 = *(long *)pcVar47;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059e0220) {
            puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 0xc) * 0x10 + 0x138);
            pcVar46 = pcVar38;
            goto LAB_0378149c;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar28 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059e0220,0xc);
      pcVar46 = pcVar38;
LAB_0378149c:
      pcVar23 = (code *)(*(code *)*puVar28)(pcVar47,puVar28[1]);
      if (pcVar39 == (code *)0x0) {
        return (code *)0x0;
      }
      uVar18 = func_0x036f58fc(pcVar39,pcVar47,pcVar27,0);
      if ((uVar18 & 1) == 0) {
        return (code *)0x0;
      }
      lVar17 = *(long *)pcVar47;
      unaff_x26 = (code *)&DAT_059df8e8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
            puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
            goto LAB_03781528;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar28 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_03781528:
      uVar37 = (*(code *)*puVar28)(pcVar47,puVar28[1]);
      uVar18 = func_0x036edd98(pcVar39,uVar37,0);
      pcVar36 = pcVar31;
      if ((uVar18 & 1) == 0) {
LAB_037815f0:
        lVar17 = *(long *)pcVar47;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
              puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
              goto LAB_03781640;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        puVar28 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_03781640:
        uVar37 = (*(code *)*puVar28)(pcVar47,puVar28[1]);
        uVar18 = func_0x036edd98(pcVar39,uVar37,0);
        if ((uVar18 & 1) == 0) {
LAB_03781674:
          lVar17 = *(long *)pcVar47;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                goto LAB_03781750;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_03781750:
          uVar37 = (*(code *)*puVar22)(pcVar47,puVar22[1]);
          uVar18 = func_0x036f619c(pcVar39,uVar37,0);
          if ((uVar18 & 1) != 0) {
            lVar17 = *(long *)pcVar47;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                  puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                  goto LAB_037817c0;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_037817c0:
            uVar37 = (*(code *)*puVar22)(pcVar47,puVar22[1]);
            uVar18 = func_0x036f66a8(pcVar39,uVar37,0);
            if ((uVar18 & 1) == 0) {
              auVar53 = func_0x036f56f8(pcVar39,pcVar23,0);
              *(undefined1 (*) [16])((long)puVar24 + -0x108) = auVar53;
              if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              lVar17 = *(long *)(_DAT_05a29c90 + 0x20);
              if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = func_0x024d8f40();
              }
              pcVar29 = (char *)func_0x0249f90c((undefined1 *)((long)puVar24 + -0x108),
                                                *(long *)(**(long **)(lVar17 + 0xc0) + 0x80) + 0x20)
              ;
              if (*pcVar29 != '\0') {
                if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                pcVar35 = (code *)func_0x0352ece0(pcVar25,0);
                pcVar19 = pcVar25;
                goto LAB_03781874;
              }
            }
          }
        }
        else {
          uVar18 = func_0x036ee320(pcVar39,pcVar47,0);
          if ((uVar18 & 1) != 0) goto LAB_03781674;
          auVar56 = func_0x036f52d8(pcVar39,pcVar23,0);
          *(undefined1 (*) [16])((long)puVar24 + -0xf8) = auVar56;
          lVar17 = *(long *)(_DAT_05a27ee0 + 0x20);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x024d8f40();
          }
          pcVar29 = (char *)func_0x0249f90c((undefined1 *)((long)puVar24 + -0xf8),
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
          if (*pcVar29 != '\0') {
            if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pcVar35 = (code *)func_0x0352ece0(pcVar25,0);
            goto LAB_03781728;
          }
        }
LAB_03781888:
        *(undefined8 *)((long)puVar24 + -0x1c0) = 0;
        *(undefined8 *)((long)puVar24 + -0x148) = 0;
        *(undefined8 *)((long)puVar24 + -0x150) = 0;
        *(undefined8 *)((long)puVar24 + -0x138) = 0;
        *(undefined8 *)((long)puVar24 + -0x140) = 0;
        *(undefined8 *)((long)puVar24 + -0x128) = 0;
        *(undefined8 *)((long)puVar24 + -0x130) = 0;
        *(undefined8 *)((long)puVar24 + -0x118) = 0;
        *(undefined8 *)((long)puVar24 + -0x120) = 0;
        *(undefined8 *)((long)puVar24 + -0x158) = 0;
        *(undefined8 *)((long)puVar24 + -0x160) = 0;
        pcVar35 = pcVar20;
        pcVar36 = pcVar20;
        pcVar38 = pcVar23;
        func_0x034ba874((undefined1 *)((long)puVar24 + -0x160),0x11);
        lVar17 = _DAT_059c9978;
        pcVar46 = pcVar39;
        if (pcVar26 == (code *)0x0) goto LAB_03781b0c;
        func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x1b0),
                        (undefined1 *)((long)puVar24 + -0x160),0x50);
        lVar41 = *(long *)pcVar26;
        uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar18 == 0) goto LAB_0378190c;
        piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        goto LAB_037818f4;
      }
      uVar18 = func_0x036ee320(pcVar39,pcVar47,0);
      if ((uVar18 & 1) != 0) goto LAB_037815f0;
      lVar17 = *(long *)pcVar47;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
            puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
            goto LAB_037815ac;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar28 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_037815ac:
      uVar37 = (*(code *)*puVar28)(pcVar47,puVar28[1]);
      uVar18 = func_0x036f619c(pcVar39,uVar37,0);
      if ((uVar18 & 1) == 0) goto LAB_037815f0;
      uVar37 = func_0x022bffa8(5,_DAT_059df8e8,pcVar47);
      uVar18 = func_0x036f66a8(pcVar39,uVar37,0);
      if ((uVar18 & 1) != 0) goto LAB_037815f0;
      auVar54 = func_0x036f52d8(pcVar39,pcVar23,0);
      *(undefined1 (*) [16])((long)puVar24 + -0xd0) = auVar54;
      auVar54 = func_0x036f56f8(pcVar39,pcVar23,0);
      *(undefined1 (*) [16])((long)puVar24 + -0xe8) = auVar54;
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0288eda8((undefined1 *)((long)puVar24 + -0xe8),
                               (undefined1 *)((long)puVar24 + -0xd8),_DAT_05a29c88);
      pcVar25 = (code *)(uVar18 & 0xffffffff);
      uVar43 = func_0x022bf4f8((undefined1 *)((long)puVar24 + -0xd0),_DAT_05a27ee0);
      if ((uVar43 & 1) == 0) {
        if ((uVar18 & 1) != 0) goto LAB_03781ab4;
        goto LAB_03781888;
      }
      if ((uVar18 & 1) == 0) goto LAB_03781a40;
      func_0x02886844((undefined1 *)((long)puVar24 + -0xd0),(undefined1 *)((long)puVar24 + -0xc0),
                      _DAT_05a27ee8);
      uVar37 = *(undefined8 *)((long)puVar24 + -0xc0);
      unaff_x26 = *(code **)((long)puVar24 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x042542f4(uVar37,unaff_x26,0);
      if ((uVar18 & 1) != 0) goto LAB_03781a40;
LAB_03781ab4:
      uVar37 = *(undefined8 *)((long)puVar24 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      pcVar19 = (code *)func_0x0425449c(uVar37,0);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2be8);
      }
      pcVar35 = (code *)func_0x0352ed34(pcVar19,0);
LAB_03781874:
      uVar37 = 0x3781888;
      puVar24 = (undefined8 *)((long)puVar24 + -0x1c0);
      pcVar25 = pcVar35;
      pcVar35 = pcVar26;
      pcVar38 = pcVar20;
      pcVar48 = pcVar47;
    } while( true );
  }
  pcVar20 = (code *)0x0;
  iVar14 = (int)pcVar36;
  pcVar26 = (code *)func_0x036dcba8(auVar53._8_8_,pcVar35);
  if (iVar14 != 1) {
    return pcVar26;
  }
  pcVar40 = *(code **)((long)puVar22 + -0x10);
  pcVar35 = *(code **)((long)puVar22 + -8);
  uVar37 = *(undefined8 *)((long)puVar22 + -0x20);
  uVar18 = *(ulong *)((long)puVar22 + -0x18);
  goto LAB_037820e8;
LAB_03781a40:
  func_0x02886844((undefined1 *)((long)puVar24 + -0xd0),(undefined1 *)((long)puVar24 + -0xc0),
                  _DAT_05a27ee8);
  uVar37 = *(undefined8 *)((long)puVar24 + -0xc0);
  if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  pcVar25 = (code *)func_0x0425449c(uVar37,0);
  if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2be8);
  }
  pcVar35 = (code *)func_0x0352ed34(pcVar25,0);
LAB_03781728:
  uVar37 = 0x378173c;
  pcVar19 = pcVar25;
  goto SUB_037812b8;
code_r0x03783528:
  *(undefined8 *)(puVar10 + -0x108) = 0;
  *(undefined8 *)(puVar10 + -0x110) = 0;
  *(undefined8 *)(puVar10 + -0xf8) = 0;
  *(undefined8 *)(puVar10 + -0x100) = 0;
  *(undefined8 *)(puVar10 + -0xe8) = 0;
  *(undefined8 *)(puVar10 + -0xf0) = 0;
  *(undefined8 *)(puVar10 + -0xd8) = 0;
  *(undefined8 *)(puVar10 + -0xe0) = 0;
  *(undefined8 *)(puVar10 + -0x118) = 0;
  *(undefined8 *)(puVar10 + -0x120) = 0;
  *(undefined8 *)(puVar10 + -0x1d0) = 0;
  pcVar19 = pcVar46;
  pcVar26 = pcVar46;
  pcVar39 = pcVar31;
  func_0x034ba874(puVar10 + -0x120,0xd);
  lVar17 = _DAT_059c9978;
  auVar58._8_8_ = pcVar19;
  auVar58._0_8_ = pcVar26;
  if (pcVar20 == (code *)0x0) goto LAB_0378377c;
  func_0x054ed0d0(puVar10 + -0x170,puVar10 + -0x120,0x50);
  lVar41 = *(long *)pcVar20;
  uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar18 != 0) {
    piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long *)(piVar44 + -2) == lVar17) {
        pcVar19 = (code *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
        goto LAB_03783660;
      }
      uVar18 = uVar18 - 1;
      piVar44 = piVar44 + 4;
    } while (uVar18 != 0);
  }
  pcVar19 = (code *)func_0x024d927c(pcVar20,lVar17,2);
LAB_03783660:
  unaff_x29 = *(code **)pcVar19;
  func_0x054ed0d0(puVar10 + -0xb0,puVar10 + -0x170,0x50);
  (*unaff_x29)(pcVar20,puVar10 + -0xb0,*(long *)(pcVar19 + 8));
  uVar37 = 0x378369c;
  puVar10 = puVar10 + -0x1d0;
  pcVar47 = pcVar46;
  pcVar39 = pcVar31;
  pcVar40 = pcVar23;
  pcVar26 = pcVar20;
  auVar53 = auVar56;
  goto SUB_03783264;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar44 = piVar44 + 4;
    if (uVar18 == 0) break;
LAB_037818f4:
    if (*(long *)(piVar44 + -2) == lVar17) {
      puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
      goto LAB_03781934;
    }
  }
LAB_0378190c:
  puVar22 = (undefined8 *)func_0x024d927c(pcVar26,lVar17,2);
LAB_03781934:
  pcVar46 = (code *)*puVar22;
  func_0x054ed0d0((undefined1 *)((long)puVar24 + -0xc0),(undefined1 *)((long)puVar24 + -0x1b0),0x50)
  ;
  (*pcVar46)(pcVar26,(undefined1 *)((long)puVar24 + -0xc0),puVar22[1]);
  return (code *)0x1;
LAB_0378377c:
  func_0x0249fb90();
LAB_03783780:
  func_0x0249fb90();
  pcVar19 = pcVar46;
  while( true ) {
    auVar57 = func_0x0249fb88(pcVar31);
    uVar37 = auVar57._0_8_;
    if (auVar57._8_4_ != 1) break;
    puVar22 = (undefined8 *)func_0x054ed080(uVar37);
    pcVar31 = (code *)*puVar22;
    *(code **)(puVar10 + -0xd0) = pcVar31;
    pcVar46 = (code *)func_0x054ed090();
    puVar22 = *(undefined8 **)(puVar10 + -200);
LAB_037836e8:
    uVar37 = auVar58._0_8_;
    pcVar23 = (code *)*puVar22;
    if (pcVar23 != (code *)0x0) {
      lVar17 = *(long *)pcVar23;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df598) {
            puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
            goto LAB_03783744;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      uVar21 = 0;
      puVar22 = (undefined8 *)func_0x024d927c(pcVar23);
      auVar58._8_8_ = uVar21;
      auVar58._0_8_ = uVar37;
LAB_03783744:
      pcVar46 = (code *)(*(code *)*puVar22)(pcVar23,puVar22[1]);
    }
    if (pcVar31 == (code *)0x0) {
      return pcVar46;
    }
  }
  func_0x022bd79c(puVar10 + -0xd0);
  func_0x0258f7ac(uVar37);
  auVar53 = func_0x022bd790();
  *(undefined8 *)(puVar10 + -0x210) = 0x37837f8;
  *(code **)(puVar10 + -0x200) = pcVar19;
  *(undefined1 (*) [16])(puVar10 + -0x1f8) = auVar56;
  *(code **)(puVar10 + -0x1e8) = pcVar20;
  *(code **)(puVar10 + -0x1e0) = pcVar23;
  *(undefined8 *)(puVar10 + -0x1d8) = uVar37;
  if ((bRam0000000005e2dfa0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2dfa0 = 1;
  }
  *pcVar39 = (code)0x0;
  *(undefined8 *)(puVar10 + -0x240) = 0x3783850;
  *(undefined1 (*) [16])(puVar10 + -0x230) = auVar58;
  *(long *)(puVar10 + -0x220) = auVar53._8_8_;
  *(code **)(puVar10 + -0x218) = pcVar39;
  *(long *)(puVar10 + -0x238) = auVar58._8_8_;
  if ((bRam0000000005e2dfa3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    bRam0000000005e2dfa3 = 1;
  }
  uVar18 = func_0x03774280(auVar53._0_8_,auVar58._8_8_);
  if ((uVar18 & 1) != 0) {
    uVar18 = func_0x03774280(auVar53._0_8_,auVar58._0_8_);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar13 = func_0x037737e4(puVar10 + -0x238,auVar58._0_8_);
      goto LAB_03783a30;
    }
  }
  uVar13 = 1;
LAB_03783a30:
  return (code *)(ulong)(uVar13 & 1);
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar44 = piVar44 + 4;
    if (uVar18 == 0) break;
LAB_03781c78:
    if (*(long *)(piVar44 + -2) == _DAT_059c9f90) {
      puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
      goto LAB_03781cac;
    }
  }
LAB_03781c90:
  pcVar20 = (code *)0x0;
  puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03781cac:
  pcVar19 = (code *)&DAT_059cb2d8;
  auVar9._8_8_ = &DAT_059df6e0;
  auVar9._0_8_ = &DAT_059df598;
  auVar4._8_8_ = &DAT_059df6e0;
  auVar4._0_8_ = &DAT_059df598;
  auVar55._8_8_ = &DAT_059df6e0;
  auVar55._0_8_ = &DAT_059df598;
  uVar37 = (*(code *)*puVar22)(plVar30,puVar22[1]);
  *(undefined8 *)((long)puVar24 + -0x218) = uVar37;
  *(undefined8 *)((long)puVar24 + -0x230) = 0;
  *(undefined1 **)((long)puVar24 + -0x228) = (undefined1 *)((long)puVar24 + -0x218);
  pcVar36 = *(code **)((long)puVar24 + -0x218);
  if (pcVar36 == (code *)0x0) {
    func_0x0249fb90();
LAB_03781e48:
    func_0x0249fb90();
LAB_03781e4c:
    func_0x0249fb90();
    pcVar31 = pcVar46;
    while( true ) {
      pcVar46 = pcVar38;
      pcVar35 = pcVar20;
      auVar57 = func_0x0249fb88(pcVar31);
      pcVar20 = auVar57._0_8_;
      if (auVar57._8_4_ != 1) break;
      puVar22 = (undefined8 *)func_0x054ed080(pcVar20);
      pcVar31 = (code *)*puVar22;
      *(code **)((long)puVar24 + -0x230) = pcVar31;
      pcVar47 = (code *)func_0x054ed090();
      puVar22 = *(undefined8 **)((long)puVar24 + -0x228);
      pcVar20 = pcVar35;
      pcVar38 = pcVar46;
LAB_03781dc0:
      pcVar39 = (code *)*puVar22;
      if (pcVar39 != (code *)0x0) {
        lVar17 = *(long *)pcVar39;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *auVar55._0_8_) {
              puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_03781e14;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        pcVar20 = (code *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(pcVar39);
LAB_03781e14:
        pcVar47 = (code *)(*(code *)*puVar22)(pcVar39,puVar22[1]);
      }
      if (pcVar31 == (code *)0x0) {
        return pcVar47;
      }
    }
    func_0x022bd79c((undefined1 *)((long)puVar24 + -0x230));
    func_0x0258f7ac(pcVar20);
    uVar37 = 0x3781ea8;
    func_0x022bd790();
    pcVar47 = extraout_x1_00;
  }
  else {
    lVar17 = *(long *)pcVar36;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df6e0) {
          puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
          goto LAB_03781d30;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    pcVar20 = (code *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(pcVar36);
LAB_03781d30:
    pcVar47 = (code *)(*(code *)*puVar22)(pcVar36,puVar22[1]);
    if (((ulong)pcVar47 & 1) == 0) {
      pcVar31 = (code *)0x0;
      puVar22 = (undefined8 *)((long)puVar24 + -0x218);
      auVar55 = auVar9;
      goto LAB_03781dc0;
    }
    pcVar36 = *(code **)((long)puVar24 + -0x218);
    if (pcVar36 == (code *)0x0) goto LAB_03781e48;
    lVar17 = *(long *)pcVar36;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059cb2d8) {
          puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
          goto LAB_03781d94;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    puVar22 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*puVar22)(pcVar36,puVar22[1]);
    pcVar47 = *(code **)pcVar26;
    uVar37 = 0x3781db4;
    pcVar40 = extraout_x1;
    pcVar20 = pcVar46;
    auVar55 = auVar4;
  }
  pcVar23 = auVar55._8_8_;
  puVar22 = (undefined8 *)((long)puVar24 + -0x260);
  *(undefined8 *)((long)puVar24 + -0x260) = uVar37;
  *(long *)((long)puVar24 + -600) = auVar55._0_8_;
  *(code **)((long)puVar24 + -0x250) = pcVar36;
  *(code **)((long)puVar24 + -0x248) = pcVar26;
  *(code **)((long)puVar24 + -0x240) = pcVar39;
  *(code **)((long)puVar24 + -0x238) = pcVar20;
  pcVar39 = (code *)0x5e2d000;
  uVar18 = (ulong)pcVar46 & 0xffffffff;
  pcVar20 = pcVar35;
  pcVar36 = pcVar40;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  if (pcVar47 != (code *)0x0) {
    lVar17 = *(long *)pcVar47;
    uVar43 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar43 != 0) {
      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_03781f64;
        }
        uVar43 = uVar43 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar43 != 0);
    }
    pcVar20 = (code *)0x5;
    puVar28 = (undefined8 *)func_0x024d927c(pcVar47);
LAB_03781f64:
    uVar37 = (*(code *)*puVar28)(pcVar47,puVar28[1]);
    if (pcVar40 != (code *)0x0) {
      pcVar20 = (code *)0x0;
      pcVar26 = (code *)func_0x036d3908(pcVar40,uVar37);
      if (pcVar26 != (code *)0x0) {
        lVar17 = *(long *)pcVar26;
        uVar43 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
              puVar28 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_03781fe0;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        pcVar20 = (code *)0x0;
        puVar28 = (undefined8 *)func_0x024d927c(pcVar26);
LAB_03781fe0:
        plVar30 = (long *)(*(code *)*puVar28)(pcVar26,puVar28[1]);
        pcVar39 = pcVar26;
        if (plVar30 != (long *)0x0) {
          lVar17 = *plVar30;
          uVar43 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar43 != 0) {
            piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059e0788) {
                puVar28 = (undefined8 *)(lVar17 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar43 = uVar43 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar43 != 0);
          }
          pcVar20 = (code *)0x2;
          puVar28 = (undefined8 *)func_0x024d927c(plVar30);
LAB_0378204c:
          pcVar39 = (code *)(*(code *)*puVar28)(plVar30,puVar28[1]);
          if (pcVar39 == (code *)0x0) {
            return (code *)0x0;
          }
          if (*(byte *)(*(long *)pcVar39 + 0x130) < *(byte *)(_DAT_059e73b0 + 0x130)) {
            return pcVar39;
          }
          if (*(long *)(*(long *)(*(long *)pcVar39 + 200) +
                        (ulong)*(byte *)(_DAT_059e73b0 + 0x130) * 8 + -8) != _DAT_059e73b0) {
            return pcVar39;
          }
          lVar17 = func_0x036d5ee4(pcVar40,0);
          if (lVar17 != 0) {
            func_0x037040b8(lVar17,*(undefined4 *)(pcVar39 + 0x30),uVar18,0);
            uVar37 = 0;
            puVar49 = *(undefined **)((long)puVar24 + -600);
            *(undefined8 *)((long)puVar24 + -0x260) = *(undefined8 *)((long)puVar24 + -0x260);
            *(undefined8 *)((long)puVar24 + -0x250) = *(undefined8 *)((long)puVar24 + -0x250);
            *(undefined8 *)((long)puVar24 + -0x248) = *(undefined8 *)((long)puVar24 + -0x248);
            *(undefined8 *)((long)puVar24 + -0x240) = *(undefined8 *)((long)puVar24 + -0x240);
            *(undefined8 *)((long)puVar24 + -0x238) = *(undefined8 *)((long)puVar24 + -0x238);
            plVar30 = (long *)0x5e2d000;
            pcVar46 = pcVar35;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,pcVar47,pcVar35,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (pcVar47 != (code *)0x0) {
              lVar17 = *(long *)pcVar47;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                    goto LAB_036e2904;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              pcVar46 = (code *)0x5;
              puVar22 = (undefined8 *)func_0x024d927c(pcVar47);
LAB_036e2904:
              uVar21 = (*(code *)*puVar22)(pcVar47,puVar22[1]);
              plVar32 = *(long **)(pcVar40 + 0x10);
              if (plVar32 != (long *)0x0) {
                pcVar46 = *(code **)(*plVar32 + 0x1d0);
                plVar32 = (long *)(**(code **)(*plVar32 + 0x1c8))(plVar32,uVar21);
                if (plVar32 != (long *)0x0) {
                  lVar17 = *plVar32;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                        puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                        goto LAB_036e2988;
                      }
                      uVar18 = uVar18 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar18 != 0);
                  }
                  pcVar46 = (code *)0x0;
                  puVar22 = (undefined8 *)func_0x024d927c(plVar32);
LAB_036e2988:
                  plVar33 = (long *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                  plVar30 = plVar32;
                  if (plVar33 != (long *)0x0) {
                    lVar17 = *plVar33;
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar44 + -2) == _DAT_059e0788) {
                          puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar18 = uVar18 - 1;
                        piVar44 = piVar44 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar22 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059e0788,6);
LAB_036e29f4:
                    pcVar46 = (code *)(*(code *)*puVar22)(plVar33,puVar22[1]);
                    if (((ulong)pcVar46 & 1) == 0) {
                      return pcVar46;
                    }
                    func_0x03727e60(pcVar40,pcVar35,0);
                    *(code **)((long)puVar24 + -0x290) = unaff_x29;
                    *(undefined8 *)((long)puVar24 + -0x288) =
                         *(undefined8 *)((long)puVar24 + -0x260);
                    *(undefined **)((long)puVar24 + -0x280) = unaff_x28;
                    *(undefined **)((long)puVar24 + -0x278) = unaff_x27;
                    *(code **)((long)puVar24 + -0x270) = unaff_x26;
                    *(code **)((long)puVar24 + -0x268) = pcVar19;
                    *(code **)((long)puVar24 + -0x260) = pcVar23;
                    *(undefined **)((long)puVar24 + -600) = puVar49;
                    *(undefined8 *)((long)puVar24 + -0x250) =
                         *(undefined8 *)((long)puVar24 + -0x250);
                    *(undefined8 *)((long)puVar24 + -0x248) =
                         *(undefined8 *)((long)puVar24 + -0x248);
                    *(undefined8 *)((long)puVar24 + -0x240) =
                         *(undefined8 *)((long)puVar24 + -0x240);
                    *(undefined8 *)((long)puVar24 + -0x238) =
                         *(undefined8 *)((long)puVar24 + -0x238);
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,pcVar47,pcVar35,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    *(undefined8 *)((long)puVar24 + -0x2a0) = 0;
                    *(undefined8 *)((long)puVar24 + -0x298) = 0;
                    plVar30 = (long *)0x5e2d000;
                    if (pcVar47 != (code *)0x0) {
                      lVar17 = *(long *)pcVar47;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                            puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                            goto LAB_037280d4;
                          }
                          uVar18 = uVar18 - 1;
                          piVar44 = piVar44 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x024d927c(pcVar47,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar32 = (long *)(*(code *)*puVar22)(pcVar47,puVar22[1]);
                      if (pcVar40 != (code *)0x0) {
                        lVar17 = *(long *)pcVar40;
                        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar18 != 0) {
                          piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                              puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                              goto LAB_0372813c;
                            }
                            uVar18 = uVar18 - 1;
                            piVar44 = piVar44 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar33 = (long *)(*(code *)*puVar22)(pcVar40,plVar32,puVar22[1]);
                        plVar30 = plVar32;
                        if (plVar33 != (long *)0x0) {
                          lVar17 = *plVar33;
                          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                          if (uVar18 != 0) {
                            piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                                puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar18 = uVar18 - 1;
                              piVar44 = piVar44 + 4;
                            } while (uVar18 != 0);
                          }
                          puVar22 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar32 = (long *)(*(code *)*puVar22)(plVar33,puVar22[1]);
                          plVar30 = plVar33;
                          if (plVar32 != (long *)0x0) {
                            lVar17 = *plVar32;
                            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar18 != 0) {
                              piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar44 + -2) == _DAT_059e0788) {
                                  puVar22 = (undefined8 *)
                                            (lVar17 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar18 = uVar18 - 1;
                                piVar44 = piVar44 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0788,2);
LAB_03728214:
                            plVar32 = (long *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                            lVar17 = *(long *)pcVar40;
                            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar18 != 0) {
                              piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                  puVar22 = (undefined8 *)
                                            (lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                                  goto LAB_03728274;
                                }
                                uVar18 = uVar18 - 1;
                                piVar44 = piVar44 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_03728274:
                            lVar17 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                            if (lVar17 != 0) {
                              lVar41 = *(long *)pcVar40;
                              uVar37 = *(undefined8 *)(lVar17 + 0x28);
                              uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                              if (uVar18 != 0) {
                                piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                    puVar22 = (undefined8 *)
                                              (lVar41 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                                    goto LAB_037282d8;
                                  }
                                  uVar18 = uVar18 - 1;
                                  piVar44 = piVar44 + 4;
                                } while (uVar18 != 0);
                              }
                              puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar17 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                              if (lVar17 != 0) {
                                lVar41 = *(long *)pcVar40;
                                uVar21 = *(undefined8 *)(lVar17 + 0x30);
                                uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                                if (uVar18 != 0) {
                                  piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                      puVar22 = (undefined8 *)
                                                (lVar41 + (long)(*piVar44 + 0x24) * 0x10 + 0x138);
                                      goto LAB_0372833c;
                                    }
                                    uVar18 = uVar18 - 1;
                                    piVar44 = piVar44 + 4;
                                  } while (uVar18 != 0);
                                }
                                puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar11 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                                lVar17 = *(long *)pcVar40;
                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                if (uVar18 != 0) {
                                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                      puVar22 = (undefined8 *)
                                                (lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                                      goto LAB_0372839c;
                                    }
                                    uVar18 = uVar18 - 1;
                                    piVar44 = piVar44 + 4;
                                  } while (uVar18 != 0);
                                }
                                puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar34 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                                uVar16 = func_0x03530c84(pcVar35,0);
                                if (plVar32 != (long *)0x0) {
                                  lVar17 = *plVar32;
                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar44 + -2) == _DAT_059e0780) {
                                        puVar22 = (undefined8 *)
                                                  (lVar17 + (long)*piVar44 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar44 = piVar44 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0780,0);
LAB_03728418:
                                  pcVar46 = (code *)*puVar22;
                                  *(undefined8 *)((long)puVar24 + -0x2b0) = puVar22[1];
                                  auVar53 = (*pcVar46)(plVar32,pcVar47,plVar33,uVar37,uVar21,uVar34,
                                                       uVar11,uVar16);
                                  lVar17 = *(long *)pcVar40;
                                  *(undefined1 (*) [16])((long)puVar24 + -0x2a0) = auVar53;
                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                        puVar22 = (undefined8 *)
                                                  (lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                                        goto LAB_037284a0;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar44 = piVar44 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar22 = (undefined8 *)func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar17 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                                  if (lVar17 != 0) {
                                    *(undefined1 (*) [16])(lVar17 + 0x18) = auVar53;
                                    lVar17 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
                                      lVar17 = func_0x024d8f40();
                                    }
                                    pcVar46 = (code *)func_0x0249f90c((undefined1 *)
                                                                      ((long)puVar24 + -0x2a0),
                                                                      *(undefined8 *)
                                                                       (*(long *)(*(long *)(lVar17 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80));
                                    if (*pcVar46 != (code)0x0) {
                                      return pcVar46;
                                    }
                                    lVar17 = *plVar33;
                                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                    if (uVar18 != 0) {
                                      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                                          puVar22 = (undefined8 *)
                                                    (lVar17 + (long)*piVar44 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar18 = uVar18 - 1;
                                        piVar44 = piVar44 + 4;
                                      } while (uVar18 != 0);
                                    }
                                    puVar22 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar32 = (long *)(*(code *)*puVar22)(plVar33,puVar22[1]);
                                    if (plVar32 != (long *)0x0) {
                                      lVar17 = *plVar32;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar44 + -2) == _DAT_059e0788) {
                                            puVar22 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar44 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar44 = piVar44 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar22 = (undefined8 *)
                                                func_0x024d927c(plVar32,_DAT_059e0788,7);
LAB_037285a8:
                                      pcVar46 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                                      if (((ulong)pcVar46 & 1) == 0) {
                                        return pcVar46;
                                      }
                                      lVar17 = *(long *)pcVar40;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                            puVar22 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728608;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar44 = piVar44 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar22 = (undefined8 *)
                                                func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar30 = (long *)(*(code *)*puVar22)(pcVar40,puVar22[1]);
                                      lVar17 = *(long *)pcVar40;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                                            puVar22 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar44 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728668;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar44 = piVar44 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar22 = (undefined8 *)
                                                func_0x024d927c(pcVar40,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar17 = (*(code *)*puVar22)(pcVar40,puVar22[1]);
                                      if ((lVar17 != 0) && (plVar30 != (long *)0x0)) {
                                        pcVar46 = (code *)func_0x03704874(plVar30,*(undefined8 *)
                                                                                   (lVar17 + 0x28),0
                                                                         );
                                        return pcVar46;
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
                    plVar32 = (long *)func_0x0249fb90();
                    *(undefined8 *)((long)puVar24 + -0x2d0) = 0x37286b0;
                    *(long **)((long)puVar24 + -0x2c0) = plVar30;
                    *(code **)((long)puVar24 + -0x2b8) = pcVar40;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    *(undefined8 *)((long)puVar24 + -0x2d8) = 0;
                    if (plVar32 != (long *)0x0) {
                      lVar17 = *plVar32;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar44 + -2) == _DAT_059dfe48) {
                            puVar22 = (undefined8 *)
                                      (lVar17 + (long)(*piVar44 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar18 = uVar18 - 1;
                          piVar44 = piVar44 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar17 = (*(code *)*puVar22)(plVar32,puVar22[1]);
                      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x68) == 0)) {
                        uVar37 = 0;
                        *(undefined8 *)((long)puVar24 + -0x2d8) = 0;
                      }
                      else {
                        uVar11 = *(undefined4 *)(*(long *)(lVar17 + 0x68) + 0x10);
                        *(undefined8 *)((long)puVar24 + -0x2e0) = 0;
                        *(undefined4 *)((long)puVar24 + -0x2c4) = uVar11;
                        func_0x028866e4((undefined1 *)((long)puVar24 + -0x2e0),
                                        (undefined1 *)((long)puVar24 + -0x2c4),_DAT_05a27d88);
                        uVar37 = *(undefined8 *)((long)puVar24 + -0x2e0);
                      }
                      lVar17 = _DAT_05a27d90;
                      *(undefined8 *)((long)puVar24 + -0x2d8) = uVar37;
                      lVar42 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar3 = *(ushort *)(lVar42 + 0x135);
                      lVar41 = lVar42;
                      if ((uVar3 & 1) == 0) {
                        lVar42 = func_0x024d8f40(lVar42);
                        uVar3 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
                        lVar41 = *(long *)(lVar17 + 0x20);
                      }
                      uVar11 = *(undefined4 *)(**(long **)(lVar42 + 0xc0) + 0xfc);
                      if ((uVar3 & 1) == 0) {
                        lVar41 = func_0x024d8f40(lVar41);
                      }
                      uVar37 = func_0x0249f90c((undefined1 *)((long)puVar24 + -0x2d8),
                                               *(long *)(*(long *)(*(long *)(lVar41 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x2e0),uVar37,uVar11);
                      return (code *)(ulong)*(uint *)((long)puVar24 + -0x2e0);
                    }
                    auVar53 = func_0x0249fb90();
                    lVar17 = auVar53._8_8_;
                    *(undefined8 *)((long)puVar24 + -0x2f0) = 0x372883c;
                    if (lVar17 != 0) {
                      if (*(int *)(auVar53._0_8_ + 0x10) < *(int *)(lVar17 + 0x18)) {
                        uVar13 = 0;
LAB_03728870:
                        return (code *)(ulong)(uVar13 & 1);
                      }
                      lVar41 = *(long *)(auVar53._0_8_ + 0x18);
                      if (lVar41 != 0) {
                        uVar13 = func_0x0387f210(lVar41,lVar17,0);
                        uVar13 = uVar13 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar53 = func_0x0249fb90();
                    lVar17 = auVar53._8_8_;
                    *(undefined8 *)((long)puVar24 + -0x300) = 0x3728880;
                    if (lVar17 == 0) {
LAB_037288c0:
                      lVar17 = func_0x0249fb90();
                      return *(code **)(lVar17 + 0x10);
                    }
                    if (*(int *)(auVar53._0_8_ + 0x10) < *(int *)(lVar17 + 0x18)) {
                      lVar41 = *(long *)(auVar53._0_8_ + 0x18);
                      if (lVar41 == 0) goto LAB_037288c0;
                      uVar13 = func_0x0387f210(lVar41,lVar17,0);
                      uVar13 = uVar13 ^ 1;
                    }
                    else {
                      uVar13 = 0;
                    }
                    return (code *)(ulong)(uVar13 & 1);
                  }
                }
              }
            }
            uVar21 = func_0x0249fb90();
            *(undefined8 *)((long)puVar24 + -0x2a0) = 0x36e2a48;
            *(code **)((long)puVar24 + -0x290) = pcVar23;
            *(undefined **)((long)puVar24 + -0x288) = puVar49;
            *(long **)((long)puVar24 + -0x280) = plVar30;
            *(code **)((long)puVar24 + -0x278) = pcVar40;
            *(code **)((long)puVar24 + -0x270) = pcVar47;
            *(code **)((long)puVar24 + -0x268) = pcVar35;
            puVar45 = (undefined *)0x5e2d000;
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
            *(undefined8 *)((long)puVar24 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2b8) = 0;
            plVar32 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar32,0);
            if (plVar32 != (long *)0x0) {
              pcVar46 = (code *)0x0;
              func_0x0442b590(plVar32,_DAT_05a9e920);
              lVar17 = func_0x036d5e58(uVar21);
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
                puVar45 = &DAT_05a9fca8;
                func_0x04433eb4(plVar32,*(undefined4 *)(*(long *)(lVar17 + 0x28) + 0x10),0);
                func_0x0442b540(plVar32,10,0);
                pcVar46 = (code *)0x0;
                func_0x0442b590(plVar32,_DAT_05a9fca8);
                lVar17 = func_0x036d5e58(uVar21);
                if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                  puVar45 = &DAT_05a7a1e0;
                  func_0x04433eb4(plVar32,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar32,10,0);
                  pcVar46 = (code *)0x0;
                  func_0x0442b590(plVar32,_DAT_05a7a1e0);
                  lVar17 = func_0x036d5e58(uVar21);
                  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                    puVar45 = &DAT_05a815a8;
                    func_0x04433eb4(plVar32,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar32,10,0);
                    pcVar46 = (code *)0x0;
                    func_0x0442b590(plVar32,_DAT_05a815a8);
                    lVar17 = func_0x036d5e58(uVar21);
                    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                      puVar45 = &DAT_05a934d8;
                      func_0x04433eb4(plVar32,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar32,10,0);
                      pcVar46 = (code *)0x0;
                      func_0x0442b590(plVar32,_DAT_05a934d8);
                      lVar17 = func_0x036d5e58(uVar21);
                      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                        puVar45 = &DAT_05a27fc8;
                        auVar53 = func_0x03753e70(*(long *)(lVar17 + 0x18),0);
                        *(undefined1 (*) [16])((long)puVar24 + -0x2b8) = auVar53;
                        lVar17 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                          lVar17 = func_0x024d8f40();
                        }
                        plVar30 = (long *)&DAT_059e2ba0;
                        puVar49 = &DAT_05a79720;
                        pcVar23 = (code *)&DAT_05a9e3c0;
                        pcVar29 = (char *)func_0x0249f90c((undefined1 *)((long)puVar24 + -0x2b8),
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar17 + 0xc0) + 8)
                                                           + 0x80));
                        lVar17 = _DAT_05a27fb0;
                        if (*pcVar29 == '\0') {
                          lVar17 = 0;
                        }
                        else {
                          lVar42 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar3 = *(ushort *)(lVar42 + 0x135);
                          lVar41 = lVar42;
                          if ((uVar3 & 1) == 0) {
                            lVar42 = func_0x024d8f40(lVar42);
                            uVar3 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
                            lVar41 = *(long *)(lVar17 + 0x20);
                          }
                          puVar45 = (undefined *)(ulong)*(uint *)(**(long **)(lVar42 + 0xc0) + 0xfc)
                          ;
                          if ((uVar3 & 1) == 0) {
                            lVar41 = func_0x024d8f40(lVar41);
                          }
                          uVar34 = func_0x0249f90c((undefined1 *)((long)puVar24 + -0x2b8),
                                                   *(long *)(*(long *)(*(long *)(lVar41 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
                          func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x298),uVar34,puVar45);
                          iVar14 = *(int *)(_DAT_059e2ba0 + 0xe4);
                          *(undefined8 *)((long)puVar24 + -0x2c0) =
                               *(undefined8 *)((long)puVar24 + -0x298);
                          if (iVar14 == 0) {
                            func_0x0249fa64();
                          }
                          lVar17 = func_0x0430e224((undefined1 *)((long)puVar24 + -0x2c0),0);
                        }
                        lVar41 = _DAT_05a79720;
                        if (lVar17 != 0) {
                          lVar41 = lVar17;
                        }
                        func_0x0442b590(plVar32,lVar41,0);
                        func_0x0442b540(plVar32,10,0);
                        pcVar46 = (code *)0x0;
                        func_0x0442b590(plVar32,_DAT_05a9e3c0);
                        lVar17 = func_0x036d5e58(uVar21);
                        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                          uVar37 = func_0x03753af4(*(long *)(lVar17 + 0x18),0);
                          *(undefined8 *)((long)puVar24 + -0x2a8) = uVar37;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar18 = func_0x0430dd84(uVar37,*(undefined8 *)
                                                           (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar17 = _DAT_05a79720;
                          if ((uVar18 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar17 = func_0x0430e224((undefined1 *)((long)puVar24 + -0x2a8),0);
                          }
                          func_0x0442b590(plVar32,lVar17,0);
                          pcVar46 = (code *)(**(code **)(*plVar32 + 0x168))
                                                      (plVar32,*(undefined8 *)(*plVar32 + 0x170));
                          return pcVar46;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar17 = func_0x0249fb90();
            *(undefined8 *)((long)puVar24 + -0x300) = 0x36e2e70;
            *(code **)((long)puVar24 + -0x2f0) = pcVar23;
            *(undefined **)((long)puVar24 + -0x2e8) = puVar49;
            *(long **)((long)puVar24 + -0x2e0) = plVar30;
            *(undefined **)((long)puVar24 + -0x2d8) = puVar45;
            *(undefined8 *)((long)puVar24 + -0x2d0) = uVar21;
            *(long **)((long)puVar24 + -0x2c8) = plVar32;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pcVar19 = (code *)func_0x03962be0(0);
            if (((ulong)pcVar19 & 1) == 0) {
              return pcVar19;
            }
            uVar21 = 0x5e2d000;
            puVar45 = &DAT_059da1f8;
            if (pcVar46 != (code *)0x0) {
              lVar41 = *(long *)pcVar46;
              uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                    puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                    goto LAB_036e2f54;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(pcVar46,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar34 = (*(code *)*puVar22)(pcVar46,puVar22[1]);
              if (lVar17 != 0) {
                puVar15 = (undefined *)func_0x036eb814(lVar17,uVar34,0);
                uVar21 = uVar34;
                if (*(long *)(lVar17 + 0x10) != 0) {
                  pcVar23 = (code *)&DAT_059fa1e8;
                  plVar30 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  puVar49 = (undefined *)(ulong)*(uint *)(plVar30[1] + 0xfc);
                  uVar37 = func_0x0249f90c(*(long *)(lVar17 + 0x10),*(undefined8 *)(*plVar30 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x2f4),uVar37,puVar49);
                  uVar37 = 0;
                  func_0x034b666c(puVar15,pcVar46,*(undefined4 *)((long)puVar24 + -0x2f4),0);
                  puVar45 = puVar15;
                  if (*(long *)(lVar17 + 0x10) != 0) {
                    plVar30 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    puVar49 = (undefined *)(ulong)*(uint *)(plVar30[1] + 0xfc);
                    uVar37 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                             *(undefined8 *)(*plVar30 + 0x80));
                    func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x2f4),uVar37,puVar49);
                    uVar37 = 0;
                    func_0x034b676c(puVar15,pcVar46,*(undefined4 *)((long)puVar24 + -0x2f4),0);
                    if (*(long *)(lVar17 + 0x10) != 0) {
                      plVar30 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      puVar49 = (undefined *)(ulong)*(uint *)(plVar30[1] + 0xfc);
                      uVar37 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                               *(undefined8 *)(*plVar30 + 0x80));
                      func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x2f4),uVar37,puVar49);
                      uVar37 = 0;
                      func_0x034b6ccc(puVar15,pcVar46,*(undefined4 *)((long)puVar24 + -0x2f4),0);
                      if (*(long *)(lVar17 + 0x10) != 0) {
                        plVar30 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        pcVar46 = (code *)(ulong)*(uint *)(plVar30[1] + 0xfc);
                        uVar37 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                                 *(undefined8 *)(*plVar30 + 0x80));
                        func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x2f4),uVar37,pcVar46);
                        uVar37 = 0;
                        func_0x034b6dc0(puVar15,uVar34,*(undefined4 *)((long)puVar24 + -0x2f4),0);
                        plVar30 = *(long **)(lVar17 + 0x10);
                        if (plVar30 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          pcVar46 = (code *)(**(code **)(*plVar30 + 0x1c8))
                                                      (plVar30,uVar34,
                                                       *(undefined8 *)(*plVar30 + 0x1d0));
                          return pcVar46;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar51 = func_0x0249fb90();
            plVar30 = auVar51._8_8_;
            *(undefined8 *)((long)puVar24 + -800) = 0x36e30d4;
            *(undefined8 *)((long)puVar24 + -0x318) = uVar21;
            *(code **)((long)puVar24 + -0x310) = pcVar46;
            *(long *)((long)puVar24 + -0x308) = lVar17;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar30 != (long *)0x0) {
              lVar17 = *plVar30;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_036e3178:
              uVar21 = (*(code *)*puVar22)(plVar30,puVar22[1]);
              plVar30 = *(long **)(auVar51._0_8_ + 0x10);
              if (plVar30 != (long *)0x0) {
                plVar30 = (long *)(**(code **)(*plVar30 + 0x1c8))
                                            (plVar30,uVar21,*(undefined8 *)(*plVar30 + 0x1d0));
                if (plVar30 == (long *)0x0) {
                  return (code *)0x1;
                }
                lVar17 = *plVar30;
                auVar51._8_8_ = &DAT_059dfbc0;
                auVar51._0_8_ = plVar30;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                      puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar17 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                if (lVar17 == 0) {
                  return (code *)0x1;
                }
                lVar17 = *plVar30;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                      puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar30 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                if (plVar30 != (long *)0x0) {
                  lVar17 = *plVar30;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == _DAT_059df2a8) {
                        puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar18 = uVar18 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar46 = (code *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                  return pcVar46;
                }
              }
            }
            auVar52 = func_0x0249fb90();
            plVar30 = auVar52._8_8_;
            *(undefined8 *)((long)puVar24 + -0x340) = 0x36e32f4;
            *(undefined8 *)((long)puVar24 + -0x338) = 0x5e2d000;
            *(long *)((long)puVar24 + -0x330) = auVar51._8_8_;
            *(long *)((long)puVar24 + -0x328) = auVar51._0_8_;
            if ((bRam0000000005e2da65 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da65 = 1;
            }
            if (plVar30 != (long *)0x0) {
              lVar17 = *plVar30;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_036e3398:
              uVar21 = (*(code *)*puVar22)(plVar30,puVar22[1]);
              plVar30 = *(long **)(auVar52._0_8_ + 0x10);
              if (plVar30 != (long *)0x0) {
                plVar30 = (long *)(**(code **)(*plVar30 + 0x1c8))
                                            (plVar30,uVar21,*(undefined8 *)(*plVar30 + 0x1d0));
                if (plVar30 == (long *)0x0) {
                  return (code *)0x0;
                }
                lVar17 = *plVar30;
                auVar52._8_8_ = &DAT_059dfbc0;
                auVar52._0_8_ = plVar30;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                      puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar17 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                if (lVar17 == 0) {
                  return (code *)0x0;
                }
                lVar17 = *plVar30;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                      puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar30 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                if (plVar30 != (long *)0x0) {
                  lVar17 = *plVar30;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == _DAT_059df2a8) {
                        puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar18 = uVar18 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar46 = (code *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                  return pcVar46;
                }
              }
            }
            auVar53 = func_0x0249fb90();
            plVar30 = auVar53._8_8_;
            lVar17 = auVar53._0_8_;
            *(undefined8 *)((long)puVar24 + -0x370) = 0x36e3514;
            *(undefined **)((long)puVar24 + -0x360) = puVar45;
            *(undefined8 *)((long)puVar24 + -0x358) = 0x5e2d000;
            *(long *)((long)puVar24 + -0x350) = auVar52._8_8_;
            *(long *)((long)puVar24 + -0x348) = auVar52._0_8_;
            lVar41 = 0x5e2d000;
            if ((bRam0000000005e2da66 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da66 = 1;
            }
            lVar42 = func_0x036d5e58(lVar17);
            if (lVar42 != 0) {
              lVar41 = *(long *)(lVar42 + 0x20);
              puVar45 = &DAT_059dfbc0;
              if (lVar41 != 0) {
                if (plVar30 == (long *)0x0) goto LAB_036e3670;
                lVar42 = *plVar30;
                uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                      puVar22 = (undefined8 *)(lVar42 + (long)*piVar44 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar21 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                func_0x03704ea8(lVar41,uVar21,0);
              }
              pcVar46 = (code *)func_0x036d5e58(lVar17);
              if (pcVar46 != (code *)0x0) {
                lVar17 = *(long *)(pcVar46 + 0x18);
                if (lVar17 == 0) {
                  return pcVar46;
                }
                if (plVar30 != (long *)0x0) {
                  lVar41 = *plVar30;
                  uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                  if (uVar18 != 0) {
                    piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                        puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar18 = uVar18 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,3);
LAB_036e3648:
                  plVar30 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                  uVar34 = 0;
                  uVar21 = *(undefined8 *)((long)puVar24 + -0x360);
                  *(undefined8 *)((long)puVar24 + -0x380) = *(undefined8 *)((long)puVar24 + -0x370);
                  *(code **)((long)puVar24 + -0x370) = pcVar23;
                  *(undefined **)((long)puVar24 + -0x368) = puVar49;
                  *(undefined8 *)((long)puVar24 + -0x360) = uVar21;
                  *(undefined8 *)((long)puVar24 + -0x358) = *(undefined8 *)((long)puVar24 + -0x358);
                  *(undefined8 *)((long)puVar24 + -0x350) = *(undefined8 *)((long)puVar24 + -0x350);
                  *(undefined8 *)((long)puVar24 + -0x348) = *(undefined8 *)((long)puVar24 + -0x348);
                  uVar18 = 0x5e2d000;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (plVar30 != (long *)0x0) {
                    lVar41 = *plVar30;
                    uVar18 = (ulong)*(uint *)(lVar17 + 0x14);
                    uVar43 = (ulong)*(ushort *)(lVar41 + 0x12e);
                    if (uVar43 != 0) {
                      piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar44 + -2) == _DAT_059deb70) {
                          puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                          goto LAB_037548ac;
                        }
                        uVar43 = uVar43 - 1;
                        piVar44 = piVar44 + 4;
                      } while (uVar43 != 0);
                    }
                    uVar34 = 2;
                    puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_037548ac:
                    plVar32 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                    if (plVar32 != (long *)0x0) {
                      lVar41 = *plVar32;
                      uVar11 = *(undefined4 *)(lVar17 + 0x70);
                      uVar1 = *(undefined4 *)(lVar17 + 0x10);
                      uVar2 = *(undefined1 *)(lVar17 + 0x94);
                      uVar43 = (ulong)*(ushort *)(lVar41 + 0x12e);
                      if (uVar43 != 0) {
                        piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar44 + -2) == _DAT_059deb60) {
                            puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar43 = uVar43 - 1;
                          piVar44 = piVar44 + 4;
                        } while (uVar43 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar11 = (*(code *)*puVar22)(plVar32,CONCAT44(uVar11,uVar1),uVar2,puVar22[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      pcVar46 = (code *)func_0x045a9bd0(uVar18,uVar11,0);
                      *(int *)(lVar17 + 0x14) = (int)pcVar46;
                      return pcVar46;
                    }
                  }
                  auVar53 = func_0x0249fb90();
                  plVar32 = auVar53._8_8_;
                  lVar41 = auVar53._0_8_;
                  *(undefined8 *)((long)puVar24 + -0x3b0) = 0x3754988;
                  *(undefined **)((long)puVar24 + -0x3a8) = puVar49;
                  *(undefined8 *)((long)puVar24 + -0x3a0) = uVar21;
                  *(long **)((long)puVar24 + -0x398) = plVar30;
                  *(ulong *)((long)puVar24 + -0x390) = uVar18;
                  *(long *)((long)puVar24 + -0x388) = lVar17;
                  uVar21 = uVar34;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar32 != (long *)0x0) {
                    lVar17 = *plVar32;
                    iVar14 = *(int *)(lVar41 + 0x90);
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar44 + -2) == _DAT_059deb78) {
                          puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar18 = uVar18 - 1;
                        piVar44 = piVar44 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059deb78,2);
LAB_03754a3c:
                    pcVar46 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                    if (iVar14 < (int)pcVar46) {
                      uVar37 = func_0x03530c84(uVar34,0);
                      lVar17 = *plVar32;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar44 + -2) == _DAT_059deb78) {
                            puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar18 = uVar18 - 1;
                          piVar44 = piVar44 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059deb78,0);
LAB_03754aac:
                      uVar21 = (*(code *)*puVar22)(plVar32,puVar22[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      uVar37 = func_0x0430d994(uVar37,uVar21,0);
                      *(undefined8 *)((long)puVar24 + -0x3b8) = uVar37;
                      *(undefined8 *)((long)puVar24 + -0x3d0) = 0;
                      *(undefined8 *)((long)puVar24 + -0x3c8) = 0;
                      pcVar46 = (code *)func_0x028866e4((undefined1 *)((long)puVar24 + -0x3d0),
                                                        (undefined1 *)((long)puVar24 + -0x3b8),
                                                        _DAT_05a27fa0);
                      uVar37 = *(undefined8 *)((long)puVar24 + -0x3d0);
                      *(undefined8 *)(lVar41 + 0x88) = *(undefined8 *)((long)puVar24 + -0x3c8);
                      *(undefined8 *)(lVar41 + 0x80) = uVar37;
                    }
                    return pcVar46;
                  }
                  auVar53 = func_0x0249fb90();
                  lVar17 = auVar53._0_8_;
                  *(undefined8 *)((long)puVar24 + -0x400) = 0x3754b28;
                  *(undefined **)((long)puVar24 + -0x3f8) = puVar49;
                  *(undefined8 *)((long)puVar24 + -0x3f0) = 0x5e2d000;
                  *(undefined8 *)((long)puVar24 + -1000) = uVar34;
                  *(undefined8 *)((long)puVar24 + -0x3e0) = 0;
                  *(long *)((long)puVar24 + -0x3d8) = lVar41;
                  *(long *)((long)puVar24 + -0x418) = auVar53._8_8_;
                  *(undefined8 *)((long)puVar24 + -0x410) = uVar21;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    bRam0000000005e2de67 = 1;
                  }
                  iVar14 = *(int *)(_DAT_059d3fd0 + 0xe4);
                  *(undefined8 *)((long)puVar24 + -0x420) = 0;
                  if (iVar14 == 0) {
                    func_0x0249fa64();
                  }
                  pcVar46 = (code *)func_0x0288eda8((undefined1 *)((long)puVar24 + -0x418),
                                                    (undefined1 *)((long)puVar24 + -0x420),
                                                    _DAT_05a29960);
                  if (((ulong)pcVar46 & 1) == 0) {
                    *(undefined4 *)(lVar17 + 0x90) = 0;
                    return pcVar46;
                  }
                  plVar30 = *(long **)((long)puVar24 + -0x420);
                  iVar14 = *(int *)(lVar17 + 0x90) + 1;
                  *(int *)(lVar17 + 0x90) = iVar14;
                  if (plVar30 != (long *)0x0) {
                    lVar41 = *plVar30;
                    uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                    if (uVar18 != 0) {
                      piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar44 + -2) == _DAT_059deb78) {
                          puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar18 = uVar18 - 1;
                        piVar44 = piVar44 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb78,2);
LAB_03754c40:
                    iVar12 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                    if (iVar14 < iVar12) {
                      uVar37 = func_0x03530c84(uVar37,0);
                      plVar30 = *(long **)((long)puVar24 + -0x420);
                      if (plVar30 != (long *)0x0) {
                        lVar41 = *plVar30;
                        uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                        if (uVar18 != 0) {
                          piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar44 + -2) == _DAT_059deb78) {
                              puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar18 = uVar18 - 1;
                            piVar44 = piVar44 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb78,1);
LAB_03754d04:
                        uVar21 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uVar37 = func_0x0430d994(uVar37,uVar21,0);
                        *(undefined8 *)((long)puVar24 + -0x408) = uVar37;
                        *(undefined8 *)((long)puVar24 + -0x430) = 0;
                        *(undefined8 *)((long)puVar24 + -0x428) = 0;
                        pcVar46 = (code *)func_0x028866e4((undefined1 *)((long)puVar24 + -0x430),
                                                          (undefined1 *)((long)puVar24 + -0x408),
                                                          _DAT_05a27fa0);
                        uVar37 = *(undefined8 *)((long)puVar24 + -0x430);
                        *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)((long)puVar24 + -0x428);
                        *(undefined8 *)(lVar17 + 0x80) = uVar37;
                        return pcVar46;
                      }
                    }
                    else {
                      plVar30 = *(long **)((long)puVar24 + -0x420);
                      if (plVar30 != (long *)0x0) {
                        lVar41 = *plVar30;
                        uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                        if (uVar18 != 0) {
                          piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar44 + -2) == _DAT_059deb78) {
                              puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d7c;
                            }
                            uVar18 = uVar18 - 1;
                            piVar44 = piVar44 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb78,2);
LAB_03754d7c:
                        pcVar46 = (code *)(*(code *)*puVar22)(plVar30,puVar22[1]);
                        *(undefined8 *)(lVar17 + 0x80) = 0;
                        *(undefined8 *)(lVar17 + 0x88) = 0;
                        *(int *)(lVar17 + 0x90) = (int)pcVar46;
                        return pcVar46;
                      }
                    }
                  }
                  pcVar46 = (code *)func_0x0249fb90();
                  return pcVar46;
                }
              }
            }
LAB_036e3670:
            auVar53 = func_0x0249fb90();
            *(undefined8 *)((long)puVar24 + -0x3a0) = 0x36e3674;
            *(undefined **)((long)puVar24 + -0x390) = puVar45;
            *(long *)((long)puVar24 + -0x388) = lVar41;
            *(long *)((long)puVar24 + -0x380) = lVar17;
            *(long **)((long)puVar24 + -0x378) = plVar30;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar17 = *(long *)(auVar53._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar24 + -0x3a0) = *(undefined8 *)((long)puVar24 + -0x3a0);
            *(undefined8 *)((long)puVar24 + -0x390) = *(undefined8 *)((long)puVar24 + -0x390);
            *(undefined8 *)((long)puVar24 + -0x388) = *(undefined8 *)((long)puVar24 + -0x388);
            *(undefined8 *)((long)puVar24 + -0x380) = *(undefined8 *)((long)puVar24 + -0x380);
            *(undefined8 *)((long)puVar24 + -0x378) = *(undefined8 *)((long)puVar24 + -0x378);
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar17,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar24 + -0x398) = 0;
            func_0x042539d4((undefined1 *)((long)puVar24 + -0x398),auVar53._8_8_ - lVar17,0);
            return *(code **)((long)puVar24 + -0x398);
          }
        }
      }
    }
  }
  uVar37 = 0x37820e8;
  auVar53 = func_0x0249fb90();
LAB_037820e8:
  lVar41 = auVar53._8_8_;
  plVar30 = auVar53._0_8_;
  puVar24 = (undefined8 *)((long)puVar22 + -0x40);
  *(undefined8 *)((long)puVar22 + -0x40) = uVar37;
  *(code **)((long)puVar22 + -0x38) = pcVar19;
  *(code **)((long)puVar22 + -0x30) = pcVar23;
  *(code **)((long)puVar22 + -0x28) = pcVar39;
  *(code **)((long)puVar22 + -0x20) = pcVar47;
  *(ulong *)((long)puVar22 + -0x18) = uVar18;
  *(code **)((long)puVar22 + -0x10) = pcVar40;
  *(code **)((long)puVar22 + -8) = pcVar35;
  lVar17 = 0x5e2d000;
  pcVar26 = pcVar36;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
    pcVar26 = pcVar36;
  }
  if (lVar41 != 0) {
    lVar17 = func_0x036d5ec8(lVar41,0);
    pcVar47 = (code *)func_0x036d5f00(lVar41,0);
    if (plVar30 != (long *)0x0) {
      lVar42 = *plVar30;
      pcVar23 = (code *)&DAT_059df8e8;
      uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
      if (uVar18 != 0) {
        piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
        do {
          if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
            puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar18 = uVar18 - 1;
          piVar44 = piVar44 + 4;
        } while (uVar18 != 0);
      }
      puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_037821d0:
      uVar37 = (*(code *)*puVar22)(plVar30,puVar22[1]);
      pcVar20 = (code *)0x0;
      pcVar31 = (code *)func_0x036d3908(lVar41,uVar37);
      pcVar40 = pcVar47;
      if (pcVar31 != (code *)0x0) {
        lVar42 = *(long *)pcVar31;
        uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
              puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 3) * 0x10 + 0x138);
              goto LAB_0378224c;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        pcVar20 = (code *)0x3;
        puVar22 = (undefined8 *)func_0x024d927c(pcVar31);
LAB_0378224c:
        plVar32 = (long *)(*(code *)*puVar22)(pcVar31,puVar22[1]);
        pcVar39 = pcVar31;
        if (plVar32 != (long *)0x0) {
          lVar42 = *plVar32;
          uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059deb70) {
                puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059deb70,2);
LAB_037822b8:
          pcVar19 = (code *)&DAT_059e1498;
          pcVar39 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
          lVar42 = *plVar30;
          uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
                puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03782320:
          uVar37 = (*(code *)*puVar22)(plVar30,puVar22[1]);
          uVar37 = func_0x036d3908(lVar41,uVar37,0);
          auVar5._8_8_ = uVar37;
          auVar5._0_8_ = plVar30;
          auVar53._8_8_ = uVar37;
          auVar53._0_8_ = plVar30;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pcVar20 = (code *)0x0;
          uVar13 = func_0x036c47c0(uVar37,plVar30);
          if ((lVar17 != 0) && (auVar53 = auVar5, pcVar39 != (code *)0x0)) {
            pcVar19 = (code *)&DAT_059deb60;
            lVar41 = *(long *)pcVar39;
            pcVar20 = (code *)(ulong)*(byte *)(lVar17 + 0x94);
            auVar53[8] = *(byte *)(lVar17 + 0x94);
            auVar53._0_8_ = CONCAT44(0,uVar13);
            auVar53._9_7_ = 0;
            uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
            pcVar23 = (code *)CONCAT44(*(undefined4 *)(lVar17 + 0x70),*(undefined4 *)(lVar17 + 0x10)
                                      );
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == _DAT_059deb60) {
                  puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 0xd) * 0x10 + 0x138);
                  goto LAB_037823d8;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059deb60,0xd);
LAB_037823d8:
            pcVar26 = (code *)puVar22[1];
            iVar14 = (*(code *)*puVar22)(pcVar39,pcVar23);
            if (pcVar47 != (code *)0x0) {
              func_0x03700d78(pcVar47,(uVar13 - *(int *)(pcVar47 + 0x10)) - iVar14,
                              CONCAT44(0,uVar13),0);
              *(undefined4 *)(lVar17 + 0x38) = 0;
              uVar11 = *(undefined4 *)(lVar17 + 0x10);
              uVar1 = *(undefined4 *)(lVar17 + 0x70);
              lVar41 = *(long *)pcVar39;
              uVar2 = *(undefined1 *)(lVar17 + 0x94);
              uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059deb60) {
                    puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 0xd) * 0x10 + 0x138);
                    goto LAB_0378246c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(pcVar39,_DAT_059deb60,0xd);
LAB_0378246c:
              pcVar46 = (code *)(*(code *)*puVar22)(pcVar39,CONCAT44(uVar1,uVar11),uVar2,puVar22[1])
              ;
              *(int *)(lVar17 + 0x14) = (int)pcVar46 + -1;
              return pcVar46;
            }
          }
        }
      }
    }
  }
  uVar37 = 0x37824a0;
  auVar56 = func_0x0249fb90();
LAB_037824a0:
  plVar32 = auVar53._8_8_;
  lVar41 = auVar56._8_8_;
  plVar30 = auVar56._0_8_;
  *(undefined8 *)((long)puVar24 + -0x40) = uVar37;
  *(code **)((long)puVar24 + -0x30) = pcVar23;
  *(code **)((long)puVar24 + -0x28) = pcVar39;
  *(long **)((long)puVar24 + -0x20) = plVar32;
  *(long *)((long)puVar24 + -0x18) = auVar53._0_8_;
  *(code **)((long)puVar24 + -0x10) = pcVar40;
  *(long *)((long)puVar24 + -8) = lVar17;
  lVar17 = 0x5e2d000;
  if ((bRam0000000005e2df9c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9c = 1;
  }
  if (plVar30 != (long *)0x0) {
    lVar42 = *plVar30;
    uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    pcVar20 = (code *)0x5;
    puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_03782564:
    uVar37 = (*(code *)*puVar22)(plVar30,puVar22[1]);
    if (lVar41 != 0) {
      pcVar20 = (code *)0x0;
      pcVar39 = (code *)func_0x036d3908(lVar41,uVar37);
      lVar17 = func_0x036d5ee4(lVar41,0);
      lVar41 = func_0x036d5f1c(lVar41,0);
      auVar7._8_8_ = lVar41;
      auVar7._0_8_ = plVar30;
      auVar6._8_8_ = lVar41;
      auVar6._0_8_ = plVar30;
      if (pcVar39 != (code *)0x0) {
        lVar42 = *(long *)pcVar39;
        uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
              puVar22 = (undefined8 *)(lVar42 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_03782600;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        pcVar20 = (code *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(pcVar39);
LAB_03782600:
        plVar33 = (long *)(*(code *)*puVar22)(pcVar39,puVar22[1]);
        auVar56 = auVar6;
        if (plVar33 != (long *)0x0) {
          lVar42 = *plVar33;
          uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
          pcVar23 = (code *)&DAT_059e1498;
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059e0788) {
                puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059e0788,2);
LAB_03782674:
          plVar32 = (long *)(*(code *)*puVar22)(plVar33,puVar22[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pcVar20 = (code *)0x0;
          uVar13 = func_0x036c49d4(pcVar39,plVar30);
          auVar56 = auVar7;
          if (plVar32 != (long *)0x0) {
            lVar42 = *plVar32;
            pcVar40 = (code *)CONCAT44(0,uVar13);
            auVar8._8_8_ = lVar41;
            auVar8._0_8_ = pcVar40;
            auVar56._8_8_ = lVar41;
            auVar56._0_8_ = pcVar40;
            pcVar39 = (code *)&DAT_059e0780;
            uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == _DAT_059e0780) {
                  puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            pcVar20 = (code *)0x7;
            puVar22 = (undefined8 *)func_0x024d927c(plVar32);
LAB_03782708:
            iVar14 = (*(code *)*puVar22)(plVar32,puVar22[1]);
            if (lVar41 != 0) {
              pcVar26 = (code *)0x0;
              func_0x03700d78(lVar41,(uVar13 - *(int *)(lVar41 + 0x10)) - iVar14);
              pcVar20 = pcVar40;
              auVar56 = auVar8;
              if (lVar17 != 0) {
                func_0x03704850(lVar17,0);
                lVar41 = *plVar32;
                uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059e0780) {
                      puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0780,2);
LAB_03782794:
                pcVar46 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                *(int *)(lVar17 + 0x14) = (int)pcVar46 + -1;
                return pcVar46;
              }
            }
          }
        }
      }
    }
  }
  auVar53 = func_0x0249fb90();
  uVar21 = auVar53._8_8_;
  uVar37 = auVar53._0_8_;
  *(code **)((long)puVar24 + -0x80) = unaff_x29;
  *(undefined8 *)((long)puVar24 + -0x78) = 0x37827c0;
  *(code **)((long)puVar24 + -0x70) = pcVar23;
  *(code **)((long)puVar24 + -0x68) = pcVar39;
  *(long **)((long)puVar24 + -0x60) = plVar32;
  *(long *)((long)puVar24 + -0x58) = auVar56._8_8_;
  *(long *)((long)puVar24 + -0x50) = auVar56._0_8_;
  *(long *)((long)puVar24 + -0x48) = lVar17;
  pcVar39 = pcVar20;
  pcVar40 = pcVar26;
  pcVar47 = pcVar46;
  if ((bRam0000000005e2df9d & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2df9d = 1;
  }
  plVar32 = (long *)func_0x0376e450(uVar37,uVar21);
  plVar30 = (long *)0x5e2d000;
  if (plVar32 == (long *)0x0) {
LAB_037829b0:
    uVar34 = 0x37829b4;
    auVar53 = func_0x0249fb90();
  }
  else {
    pcVar39 = (code *)0x0;
    pcVar31 = (code *)func_0x036d9cf8(plVar32,pcVar26);
    if (((ulong)pcVar31 & 1) == 0) {
      return pcVar31;
    }
    plVar30 = plVar32;
    if (pcVar26 == (code *)0x0) goto LAB_037829b0;
    lVar17 = *(long *)pcVar26;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar22 = (undefined8 *)(lVar17 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_03782894;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    puVar22 = (undefined8 *)func_0x024d927c(pcVar26,_DAT_059df8e8,5);
LAB_03782894:
    uVar34 = (*(code *)*puVar22)(pcVar26,puVar22[1]);
    pcVar39 = (code *)func_0x036eb4a0(plVar32,uVar34,0);
    if (((ulong)pcVar39 & 1) == 0) {
      return pcVar39;
    }
    uVar34 = 0x37828c8;
    pcVar39 = pcVar26;
    pcVar40 = pcVar20;
  }
  uVar16 = auVar53._8_8_;
  lVar17 = auVar53._0_8_;
  *(undefined8 *)((long)puVar24 + -0x1e0) = uVar34;
  *(undefined **)((long)puVar24 + -0x1d0) = unaff_x28;
  *(undefined **)((long)puVar24 + -0x1c8) = unaff_x27;
  *(code **)((long)puVar24 + -0x1c0) = unaff_x26;
  *(code **)((long)puVar24 + -0x1b8) = pcVar19;
  *(long **)((long)puVar24 + -0x1b0) = plVar30;
  *(undefined8 *)((long)puVar24 + -0x1a8) = uVar37;
  *(code **)((long)puVar24 + -0x1a0) = pcVar26;
  *(undefined8 *)((long)puVar24 + -0x198) = uVar21;
  *(code **)((long)puVar24 + -400) = pcVar20;
  *(code **)((long)puVar24 + -0x188) = pcVar46;
  pcVar46 = pcVar39;
  pcVar20 = pcVar40;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfb7 = 1;
  }
  pcVar31 = (code *)func_0x0376e450(lVar17,uVar16);
  pcVar26 = (code *)0x5e2d000;
  if (pcVar39 != (code *)0x0) {
    lVar41 = *(long *)pcVar39;
    uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar18 != 0) {
      piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
          puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 5) * 0x10 + 0x138);
          goto LAB_03782a98;
        }
        uVar18 = uVar18 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar18 != 0);
    }
    pcVar46 = (code *)0x5;
    puVar22 = (undefined8 *)func_0x024d927c(pcVar39);
LAB_03782a98:
    uVar37 = (*(code *)*puVar22)(pcVar39,puVar22[1]);
    pcVar26 = pcVar31;
    if (pcVar31 != (code *)0x0) {
      pcVar46 = (code *)0x0;
      plVar32 = (long *)func_0x036d3908(pcVar31,uVar37);
      if (plVar32 != (long *)0x0) {
        lVar41 = *plVar32;
        unaff_x27 = &DAT_059dfbc0;
        uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
              puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        pcVar46 = (code *)0x2;
        puVar22 = (undefined8 *)func_0x024d927c(plVar32);
LAB_03782b18:
        pcVar23 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
        plVar30 = plVar32;
        if (pcVar23 != (code *)0x0) {
          lVar41 = *(long *)pcVar23;
          unaff_x28 = &DAT_059dfe38;
          uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059dfe38) {
                puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                goto LAB_03782b84;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          pcVar46 = (code *)0x2;
          puVar22 = (undefined8 *)func_0x024d927c(pcVar23);
LAB_03782b84:
          pcVar19 = (code *)(*(code *)*puVar22)(pcVar23,puVar22[1]);
          if (((ulong)pcVar19 & 1) == 0) {
            return pcVar19;
          }
          pcVar35 = (code *)func_0x036d5ffc(pcVar31,0);
          pcVar19 = pcVar23;
          if (pcVar35 != (code *)0x0) {
            unaff_x26 = *(code **)(lVar17 + 0x30);
            uVar18 = func_0x036d392c(pcVar31,0);
            pcVar20 = (code *)(uVar18 & 0xffffffff);
            pcVar47 = (code *)0x0;
            pcVar46 = unaff_x26;
            func_0x0374def0(pcVar35,pcVar39);
            pcVar19 = pcVar35;
          }
          lVar41 = *plVar32;
          uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          pcVar46 = (code *)0x2;
          puVar22 = (undefined8 *)func_0x024d927c(plVar32);
LAB_03782c20:
          plVar32 = (long *)(*(code *)*puVar22)(plVar32,puVar22[1]);
          if (plVar32 != (long *)0x0) {
            lVar41 = *plVar32;
            uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == _DAT_059dfe38) {
                  puVar22 = (undefined8 *)(lVar41 + (long)*piVar44 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            pcVar46 = (code *)0x0;
            puVar22 = (undefined8 *)func_0x024d927c(plVar32);
LAB_03782c80:
            plVar33 = (long *)(*(code *)*puVar22)(plVar32,puVar22[1]);
            plVar30 = plVar32;
            if (plVar33 != (long *)0x0) {
              lVar41 = *plVar33;
              uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059dfe68) {
                    puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfe68,1);
LAB_03782cec:
              pcVar20 = pcVar31;
              pcVar47 = pcVar31;
              pcVar46 = (code *)(*(code *)*puVar22)(plVar33,pcVar39,lVar17,pcVar31,pcVar31,pcVar40,
                                                    puVar22[1]);
              if ((pcVar46 == (code *)0x0) || (*(long *)pcVar46 == _DAT_059e2700)) {
                func_0x037743ac(lVar17,uVar16);
                pcVar46 = (code *)func_0x03530c84(pcVar40,0);
                *(code **)(lVar17 + 0x20) = pcVar46;
                return pcVar46;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar33 = plVar30;
  func_0x0249fb90();
LAB_03782d68:
  auVar53 = func_0x0249ff10(pcVar46);
  plVar30 = auVar53._8_8_;
  lVar41 = auVar53._0_8_;
  *(code **)((long)puVar24 + -0x240) = unaff_x29;
  *(undefined8 *)((long)puVar24 + -0x230) = 0x3782d70;
  *(undefined **)((long)puVar24 + -0x228) = unaff_x27;
  *(code **)((long)puVar24 + -0x220) = unaff_x26;
  *(code **)((long)puVar24 + -0x218) = pcVar19;
  *(long **)((long)puVar24 + -0x210) = plVar33;
  *(code **)((long)puVar24 + -0x208) = pcVar26;
  *(code **)((long)puVar24 + -0x200) = pcVar39;
  *(undefined8 *)((long)puVar24 + -0x1f8) = uVar16;
  *(long *)((long)puVar24 + -0x1f0) = lVar17;
  *(code **)((long)puVar24 + -0x1e8) = pcVar40;
  pcVar26 = pcVar46;
  pcVar39 = pcVar20;
  pcVar40 = pcVar47;
  if ((bRam0000000005e2df9e & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2df9e = 1;
  }
  *(undefined8 *)((long)puVar24 + -0x238) = 0;
  lVar17 = func_0x0376e450(lVar41,pcVar46);
  pcVar31 = (code *)0x0;
  if (lVar17 != 0) {
    pcVar31 = (code *)func_0x036d06d8(lVar17,0);
    if (((ulong)pcVar31 & 1) != 0) {
      pcVar31 = (code *)func_0x036d5f70(lVar17,0);
      if (plVar30 != (long *)0x0) {
        lVar42 = *plVar30;
        uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
        if (uVar18 != 0) {
          piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == _DAT_059df8e8) {
              puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 5) * 0x10 + 0x138);
              goto LAB_03782e80;
            }
            uVar18 = uVar18 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar18 != 0);
        }
        puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_03782e80:
        uVar37 = (*(code *)*puVar22)(plVar30,puVar22[1]);
        pcVar26 = (code *)0x0;
        pcVar23 = (code *)func_0x036d3908(lVar17,uVar37);
        unaff_x26 = pcVar31;
        if (pcVar23 != (code *)0x0) {
          lVar42 = *(long *)pcVar23;
          uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
          if (uVar18 != 0) {
            piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == _DAT_059dfbc0) {
                puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 6) * 0x10 + 0x138);
                goto LAB_03782efc;
              }
              uVar18 = uVar18 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar18 != 0);
          }
          pcVar26 = (code *)0x6;
          puVar22 = (undefined8 *)func_0x024d927c(pcVar23);
LAB_03782efc:
          plVar32 = (long *)(*(code *)*puVar22)(pcVar23,puVar22[1]);
          pcVar19 = pcVar23;
          if ((pcVar31 != (code *)0x0) && (unaff_x27 = (undefined *)0x0, plVar32 != (long *)0x0)) {
            lVar42 = *plVar32;
            lVar50 = *(long *)(pcVar31 + 0x28);
            uVar18 = (ulong)*(ushort *)(lVar42 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == _DAT_059df030) {
                  puVar22 = (undefined8 *)(lVar42 + (long)(*piVar44 + 9) * 0x10 + 0x138);
                  goto LAB_03782f70;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059df030,9);
LAB_03782f70:
            uVar18 = (*(code *)*puVar22)(plVar32,plVar30,lVar50,puVar22[1]);
            func_0x0374a538((undefined1 *)((long)puVar24 + -0x238),uVar18,uVar18 >> 0x20,0);
            func_0x036e1be4(lVar17,0);
            pcVar19 = (code *)func_0x03530c84(pcVar20,0);
            *(code **)(lVar41 + 0x20) = pcVar19;
            if (pcVar47 == (code *)0x0) {
              return pcVar19;
            }
            *(undefined8 *)((long)puVar24 + -0x298) = *(undefined8 *)((long)puVar24 + -0x238);
            uVar37 = func_0x0249fa6c(_DAT_059d9ea8,(undefined1 *)((long)puVar24 + -0x298));
            *(undefined8 *)((long)puVar24 + -0x350) = 0;
            *(undefined8 *)((long)puVar24 + -0x2d8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2e0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2c8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2d0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2b8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar24 + -0x2e8) = 0;
            *(undefined8 *)((long)puVar24 + -0x2f0) = 0;
            func_0x034ba874((undefined1 *)((long)puVar24 + -0x2f0),7,pcVar46,pcVar46,pcVar20,pcVar23
                            ,0,uVar37);
            lVar17 = _DAT_059c9978;
            func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x340),
                            (undefined1 *)((long)puVar24 + -0x2f0),0x50);
            lVar41 = *(long *)pcVar47;
            uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == lVar17) {
                  puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                  goto LAB_0378307c;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(pcVar47,lVar17,2);
LAB_0378307c:
            pcVar46 = (code *)*puVar22;
            func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x290),
                            (undefined1 *)((long)puVar24 + -0x340),0x50);
            pcVar46 = (code *)(*pcVar46)(pcVar47,(undefined1 *)((long)puVar24 + -0x290),puVar22[1]);
            return pcVar46;
          }
        }
      }
      auVar53 = func_0x0249fb90();
      lVar42 = auVar53._0_8_;
      *(code **)((long)puVar24 + -0x3a0) = unaff_x29;
      *(undefined8 *)((long)puVar24 + -0x390) = 0x37830c4;
      *(code **)((long)puVar24 + -0x388) = pcVar19;
      *(long *)((long)puVar24 + -0x380) = lVar17;
      *(long **)((long)puVar24 + -0x378) = plVar30;
      *(long *)((long)puVar24 + -0x370) = lVar41;
      *(code **)((long)puVar24 + -0x368) = pcVar46;
      *(code **)((long)puVar24 + -0x360) = pcVar20;
      *(code **)((long)puVar24 + -0x358) = pcVar47;
      if ((bRam0000000005e2df9f & 1) == 0) {
        func_0x0249f8e4(&DAT_059c9978);
        bRam0000000005e2df9f = 1;
      }
      pcVar46 = (code *)func_0x0376e450(lVar42,pcVar26);
      pcVar20 = (code *)0x0;
      if (pcVar46 != (code *)0x0) {
        pcVar20 = (code *)func_0x036e21f8(pcVar46,0);
        if (((ulong)pcVar20 & 1) != 0) {
          func_0x036d7cb4(pcVar46,pcVar39,auVar53._8_8_,lVar42,pcVar26,0);
          uVar37 = func_0x03530c84(pcVar39,0);
          *(undefined8 *)(lVar42 + 0x20) = uVar37;
          *(undefined8 *)((long)puVar24 + -0x4a0) = 0;
          *(undefined8 *)((long)puVar24 + -0x428) = 0;
          *(undefined8 *)((long)puVar24 + -0x430) = 0;
          *(undefined8 *)((long)puVar24 + -0x418) = 0;
          *(undefined8 *)((long)puVar24 + -0x420) = 0;
          *(undefined8 *)((long)puVar24 + -0x408) = 0;
          *(undefined8 *)((long)puVar24 + -0x410) = 0;
          *(undefined8 *)((long)puVar24 + -0x3f8) = 0;
          *(undefined8 *)((long)puVar24 + -0x400) = 0;
          *(undefined8 *)((long)puVar24 + -0x438) = 0;
          *(undefined8 *)((long)puVar24 + -0x440) = 0;
          pcVar20 = pcVar26;
          pcVar47 = pcVar26;
          pcVar31 = pcVar39;
          func_0x034ba874((undefined1 *)((long)puVar24 + -0x440),0xd);
          lVar17 = _DAT_059c9978;
          if (pcVar40 == (code *)0x0) {
            uVar37 = 0x3783264;
            auVar56 = func_0x0249fb90();
            puVar10 = (undefined1 *)((long)puVar24 + -0x4a0);
          }
          else {
            func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x490),
                            (undefined1 *)((long)puVar24 + -0x440),0x50);
            lVar41 = *(long *)pcVar40;
            uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
            if (uVar18 != 0) {
              piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == lVar17) {
                  pcVar46 = (code *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138);
                  goto LAB_03783208;
                }
                uVar18 = uVar18 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar18 != 0);
            }
            pcVar46 = (code *)func_0x024d927c(pcVar40,lVar17,2);
LAB_03783208:
            pcVar19 = *(code **)pcVar46;
            func_0x054ed0d0((undefined1 *)((long)puVar24 + -0x3f0),
                            (undefined1 *)((long)puVar24 + -0x490),0x50);
            (*pcVar19)(pcVar40,(undefined1 *)((long)puVar24 + -0x3f0),*(long *)(pcVar46 + 8));
            uVar37 = 0x3783244;
            puVar10 = (undefined1 *)((long)puVar24 + -0x4a0);
            pcVar20 = pcVar40;
            pcVar47 = pcVar26;
            pcVar31 = pcVar39;
            auVar56 = auVar53;
          }
SUB_03783264:
          pcVar23 = pcVar47;
          plVar30 = auVar56._0_8_;
          *(code **)(puVar10 + -0x60) = unaff_x29;
          *(undefined8 *)(puVar10 + -0x58) = uVar37;
          *(undefined **)(puVar10 + -0x50) = unaff_x28;
          *(undefined **)(puVar10 + -0x48) = unaff_x27;
          *(code **)(puVar10 + -0x40) = unaff_x26;
          *(code **)(puVar10 + -0x38) = pcVar19;
          *(code **)(puVar10 + -0x30) = pcVar46;
          *(undefined1 (*) [16])(puVar10 + -0x28) = auVar53;
          *(code **)(puVar10 + -0x18) = pcVar26;
          *(code **)(puVar10 + -0x10) = pcVar40;
          *(code **)(puVar10 + -8) = pcVar39;
          *(code **)(puVar10 + -0xb8) = pcVar23;
          pcVar19 = pcVar20;
          pcVar26 = pcVar23;
          pcVar39 = pcVar31;
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
          iVar14 = *(int *)(_DAT_059db250 + 0xe4);
          *(undefined8 *)(puVar10 + -0xc0) = 0;
          if (iVar14 == 0) {
            func_0x0249fa64();
          }
          pcVar46 = (code *)func_0x03773874(puVar10 + -0xb8);
          uVar37 = func_0x0249fb80(_DAT_059c6000);
          auVar58._8_8_ = pcVar19;
          auVar58._0_8_ = pcVar26;
          if (plVar30 != (long *)0x0) {
            uVar34 = 0;
            func_0x02a9aa34(uVar37,plVar30,*(undefined8 *)(*plVar30 + 0x250));
            uVar21 = _DAT_05a447b8;
            pcVar19 = (code *)func_0x026ec554(pcVar46,uVar37);
            auVar58._8_8_ = uVar21;
            auVar58._0_8_ = uVar34;
            if (pcVar19 != (code *)0x0) {
              lVar17 = *(long *)pcVar19;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == _DAT_059ca360) {
                    puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                    goto LAB_037833d8;
                  }
                  uVar18 = uVar18 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar18 != 0);
              }
              uVar21 = 0;
              puVar22 = (undefined8 *)func_0x024d927c(pcVar19);
LAB_037833d8:
              pcVar46 = (code *)(*(code *)*puVar22)(pcVar19,puVar22[1]);
              auVar58._8_8_ = uVar21;
              auVar58._0_8_ = uVar34;
              *(code **)(puVar10 + -0xc0) = pcVar46;
              *(undefined8 *)(puVar10 + -0xd0) = 0;
              *(undefined1 **)(puVar10 + -200) = puVar10 + -0xc0;
              if (pcVar46 == (code *)0x0) {
LAB_037836dc:
                pcVar46 = (code *)func_0x0249fb90();
LAB_037836e0:
                pcVar31 = (code *)0x0;
                puVar22 = (undefined8 *)(puVar10 + -0xc0);
                goto LAB_037836e8;
              }
              unaff_x26 = (code *)&DAT_059df6e0;
              unaff_x27 = &DAT_059cb6b8;
              unaff_x28 = &DAT_059c9978;
              pcVar19 = pcVar46;
              do {
                uVar37 = auVar58._0_8_;
                lVar17 = *(long *)pcVar19;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059df6e0) {
                      puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                      goto LAB_0378345c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                uVar21 = 0;
                puVar22 = (undefined8 *)func_0x024d927c(pcVar19);
                auVar58._8_8_ = uVar21;
                auVar58._0_8_ = uVar37;
LAB_0378345c:
                pcVar46 = (code *)(*(code *)*puVar22)(pcVar19,puVar22[1]);
                uVar37 = auVar58._0_8_;
                if (((ulong)pcVar46 & 1) == 0) goto LAB_037836e0;
                plVar32 = *(long **)(puVar10 + -0xc0);
                if (plVar32 == (long *)0x0) {
                  func_0x0249fb90();
                  pcVar46 = (code *)0x0;
                  break;
                }
                lVar17 = *plVar32;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar44 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == _DAT_059cb6b8) {
                      puVar22 = (undefined8 *)(lVar17 + (long)*piVar44 * 0x10 + 0x138);
                      goto LAB_037834c0;
                    }
                    uVar18 = uVar18 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar18 != 0);
                }
                uVar21 = 0;
                puVar22 = (undefined8 *)func_0x024d927c(plVar32);
                auVar58._8_8_ = uVar21;
                auVar58._0_8_ = uVar37;
LAB_037834c0:
                pcVar46 = (code *)(*(code *)*puVar22)(plVar32,puVar22[1]);
                lVar17 = func_0x0376e450(plVar30,pcVar46);
                if (lVar17 != 0) {
                  uVar18 = func_0x036e2208(lVar17,0);
                  if ((uVar18 & 1) != 0) {
                    pcVar39 = pcVar23;
                    auVar58 = auVar56;
                    uVar18 = func_0x036d7cb4(lVar17,pcVar31);
                    if ((uVar18 & 1) != 0) {
                      if (*(int *)(lVar17 + 0x18) == 1) {
                        *(undefined8 *)(puVar10 + -0x108) = 0;
                        *(undefined8 *)(puVar10 + -0x110) = 0;
                        *(undefined8 *)(puVar10 + -0xf8) = 0;
                        *(undefined8 *)(puVar10 + -0x100) = 0;
                        *(undefined8 *)(puVar10 + -0xe8) = 0;
                        *(undefined8 *)(puVar10 + -0xf0) = 0;
                        *(undefined8 *)(puVar10 + -0xd8) = 0;
                        *(undefined8 *)(puVar10 + -0xe0) = 0;
                        *(undefined8 *)(puVar10 + -0x118) = 0;
                        *(undefined8 *)(puVar10 + -0x120) = 0;
                        *(undefined8 *)(puVar10 + -0x1d0) = 0;
                        pcVar19 = pcVar46;
                        pcVar26 = pcVar46;
                        pcVar39 = pcVar31;
                        func_0x034ba874(puVar10 + -0x120,0xe);
                        lVar17 = _DAT_059c9978;
                        auVar58._8_8_ = pcVar19;
                        auVar58._0_8_ = pcVar26;
                        if (pcVar20 == (code *)0x0) goto LAB_03783780;
                        func_0x054ed0d0(puVar10 + -0x1c0,puVar10 + -0x120,0x50);
                        lVar41 = *(long *)pcVar20;
                        uVar18 = (ulong)*(ushort *)(lVar41 + 0x12e);
                        if (uVar18 != 0) {
                          piVar44 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar44 + -2) == lVar17) {
                              puVar22 = (undefined8 *)(lVar41 + (long)(*piVar44 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_037836b0;
                            }
                            uVar18 = uVar18 - 1;
                            piVar44 = piVar44 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x024d927c(pcVar20,lVar17,2);
LAB_037836b0:
                        pcVar46 = (code *)*puVar22;
                        func_0x054ed0d0(puVar10 + -0xb0,puVar10 + -0x1c0,0x50);
                        uVar37 = puVar22[1];
                        (*pcVar46)(pcVar20,puVar10 + -0xb0);
                        auVar58._8_8_ = uVar37;
                        auVar58._0_8_ = pcVar26;
                      }
                      else if (*(int *)(lVar17 + 0x18) == 2) goto code_r0x03783528;
                    }
                  }
                }
                pcVar19 = *(code **)(puVar10 + -0xc0);
                if (pcVar19 == (code *)0x0) goto LAB_037836dc;
              } while( true );
            }
          }
          func_0x0249fb90();
          goto LAB_0378377c;
        }
      }
      return pcVar20;
    }
  }
  return pcVar31;
}


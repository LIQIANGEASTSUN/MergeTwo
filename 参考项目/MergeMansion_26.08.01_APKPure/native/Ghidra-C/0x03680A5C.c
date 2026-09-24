/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Boolean ProcessSellForCoordinate(GameLogic.Player.Board.Coordinate sellCoordinate, GameLogic.Config.Types.MetacoreTime timeForSelling, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs, GameLogic.Player.IPlayer player, System.Boolean checkTagRestriction)
 * Ghidra function entry: 03780a5c
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

code * FUN_03780a5c(undefined8 param_1,code *param_2,code *param_3,long *param_4,undefined8 param_5,
                   uint param_6)

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
  undefined8 *puVar19;
  code *pcVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 *puVar25;
  char *pcVar26;
  uint uVar13;
  int iVar14;
  long *plVar27;
  code *pcVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  code *extraout_x1;
  code *extraout_x1_00;
  undefined8 uVar32;
  code *pcVar33;
  code *pcVar34;
  code *pcVar35;
  code *pcVar36;
  code *pcVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  int *piVar41;
  undefined *puVar42;
  code *pcVar43;
  code *pcVar44;
  code *pcVar45;
  undefined *puVar46;
  code *pcVar47;
  code *unaff_x26;
  long lVar48;
  undefined *unaff_x27;
  undefined *unaff_x28;
  code *unaff_x29;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  undefined8 auStack_2e0 [2];
  undefined1 auStack_2d0 [80];
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
  code *pcStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  code *pcStack_208;
  undefined1 auStack_200 [16];
  undefined8 auStack_1f0 [10];
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
  
  if ((bRam0000000005e2df96 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df96 = 1;
  }
  lVar17 = func_0x0376e450(param_1,param_2);
  if (lVar17 == 0) {
    return (code *)0x0;
  }
  uVar18 = func_0x036ef810(lVar17,param_5,param_1,param_6 & 1,0);
  if ((uVar18 & 1) == 0) {
    return (code *)0x0;
  }
  func_0x037789bc(param_1,param_5,param_2,param_3,1);
  pcVar36 = (code *)0x0;
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
  pcVar43 = param_2;
  func_0x034ba874(&uStack_f0,0xb);
  lVar17 = _DAT_059c9978;
  if (param_4 != (long *)0x0) {
    func_0x054ed0d0(auStack_140,&uStack_f0,0x50);
    lVar38 = *param_4;
    uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == lVar17) {
          puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
          goto LAB_03780ba0;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    puVar19 = (undefined8 *)func_0x024d927c(param_4,lVar17,2);
LAB_03780ba0:
    pcVar43 = (code *)*puVar19;
    func_0x054ed0d0(auStack_a0,auStack_140,0x50);
    (*pcVar43)(param_4,auStack_a0,puVar19[1]);
    return (code *)0x1;
  }
  auVar51 = func_0x0249fb90();
  pcVar35 = auVar51._8_8_;
  pcVar47 = auVar51._0_8_;
  puVar19 = auStack_2e0;
  pcVar44 = (code *)((ulong)param_3 & 0xffffffff);
  pcVar37 = pcVar36;
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
  auStack_200._0_8_ = 0;
  auStack_200._8_8_ = 0;
  auStack_218._8_8_ = 0;
  pcStack_208 = (code *)0x0;
  auStack_228._8_8_ = 0;
  auStack_218._0_8_ = 0;
  pcStack_230 = (code *)0x0;
  auStack_228._0_8_ = 0;
  pcVar20 = (code *)func_0x0376e450(pcVar47,pcVar35);
  auVar54._8_8_ = pcVar20;
  auVar54._0_8_ = pcVar36;
  auVar51._8_8_ = pcVar20;
  auVar51._0_8_ = pcVar36;
  if (pcVar20 == (code *)0x0) {
    return (code *)0x0;
  }
  pcVar33 = (code *)0x0;
  pcVar28 = pcVar47;
  uVar18 = func_0x036f58fc(pcVar20,pcVar36);
  if ((uVar18 & 1) == 0) {
    return (code *)0x0;
  }
  if (pcVar36 != (code *)0x0) {
    lVar17 = *(long *)pcVar36;
    pcVar47 = (code *)&DAT_059df8e8;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
          puVar21 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
          goto LAB_03780d28;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    puVar21 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059df8e8,5);
LAB_03780d28:
    uVar22 = (*(code *)*puVar21)(pcVar36,puVar21[1]);
    uVar18 = func_0x036edd98(pcVar20,uVar22,0);
    pcVar33 = pcVar44;
    if (((uVar18 & 1) == 0) || (uVar18 = func_0x036ee320(pcVar20,pcVar36,0), (uVar18 & 1) != 0)) {
LAB_03780df0:
      lVar17 = *(long *)pcVar36;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
            puVar21 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
            goto LAB_03780e40;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar21 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059df8e8,5);
LAB_03780e40:
      uVar22 = (*(code *)*puVar21)(pcVar36,puVar21[1]);
      uVar18 = func_0x036edd98(pcVar20,uVar22,0);
      if (((uVar18 & 1) == 0) || (uVar18 = func_0x036ee320(pcVar20,pcVar36,0), (uVar18 & 1) != 0)) {
        lVar17 = *(long *)pcVar36;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
              puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
              goto LAB_03780f98;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        puVar19 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059df8e8,5);
LAB_03780f98:
        uVar22 = (*(code *)*puVar19)(pcVar36,puVar19[1]);
        uVar18 = func_0x036f619c(pcVar20,uVar22,0);
        auVar52._8_8_ = auStack_228._8_8_;
        auVar52._0_8_ = auStack_228._0_8_;
        if ((uVar18 & 1) != 0) {
          lVar17 = *(long *)pcVar36;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                goto LAB_03781008;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059df8e8,5);
LAB_03781008:
          uVar22 = (*(code *)*puVar19)(pcVar36,puVar19[1]);
          uVar18 = func_0x036f66a8(pcVar20,uVar22,0);
          auVar52._8_8_ = auStack_228._8_8_;
          auVar52._0_8_ = auStack_228._0_8_;
          if ((uVar18 & 1) == 0) {
            auStack_218 = func_0x036f56f8(pcVar20,param_2,0);
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar18 = func_0x0288eda8(auStack_218,&pcStack_230,_DAT_05a29c88);
            auVar52._8_8_ = auStack_228._8_8_;
            auVar52._0_8_ = auStack_228._0_8_;
            pcVar28 = pcStack_230;
            goto joined_r0x03781070;
          }
        }
      }
      else {
        auStack_228 = func_0x036f52d8(pcVar20,param_2,0);
        lVar17 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x024d8f40();
        }
        pcVar26 = (char *)func_0x0249f90c(auStack_228,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
        auVar52 = auStack_228;
        if (*pcVar26 != '\0') {
          puVar10 = auStack_228;
LAB_03780f0c:
          func_0x02886844(puVar10,auStack_1f0,_DAT_05a27ee8);
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          pcVar47 = (code *)func_0x0425449c(auStack_1f0[0],0);
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e2be8);
          }
          pcVar28 = (code *)func_0x0352ed34(pcVar47,0);
          uVar22 = 0x3780f84;
          goto SUB_037812b8;
        }
      }
    }
    else {
      lVar17 = *(long *)pcVar36;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
            puVar21 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
            goto LAB_03780dac;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar21 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059df8e8,5);
LAB_03780dac:
      uVar22 = (*(code *)*puVar21)(pcVar36,puVar21[1]);
      uVar18 = func_0x036f619c(pcVar20,uVar22,0);
      if ((uVar18 & 1) == 0) goto LAB_03780df0;
      uVar22 = func_0x022bffa8(5,_DAT_059df8e8,pcVar36);
      uVar18 = func_0x036f66a8(pcVar20,uVar22,0);
      if ((uVar18 & 1) != 0) goto LAB_03780df0;
      auStack_200 = func_0x036f52d8(pcVar20,param_2,0);
      auStack_218 = func_0x036f56f8(pcVar20,param_2,0);
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0288eda8(auStack_218,&pcStack_208,_DAT_05a29c88);
      pcVar47 = (code *)(uVar18 & 0xffffffff);
      uVar40 = func_0x022bf4f8(auStack_200,_DAT_05a27ee0);
      auVar52._8_8_ = auStack_228._8_8_;
      auVar52._0_8_ = auStack_228._0_8_;
      pcVar28 = pcStack_208;
      if ((uVar40 & 1) != 0) {
        if ((uVar18 & 1) != 0) {
          func_0x02886844(auStack_200,auStack_1f0,_DAT_05a27ee8);
          uVar22 = auStack_1f0[0];
          unaff_x26 = pcStack_208;
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar18 = func_0x042542f4(uVar22,unaff_x26,0);
          pcVar28 = pcStack_208;
          if ((uVar18 & 1) == 0) goto LAB_03781168;
        }
        puVar10 = auStack_200;
        goto LAB_03780f0c;
      }
joined_r0x03781070:
      if ((uVar18 & 1) != 0) {
LAB_03781168:
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        pcVar47 = (code *)func_0x0425449c(pcVar28,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        pcVar23 = (code *)func_0x0352ed34(pcVar47,0);
        uVar22 = 0x37811c4;
        puVar21 = auStack_2e0;
        pcVar28 = pcVar43;
        pcVar34 = param_2;
        pcVar45 = pcVar44;
        goto SUB_0378130c;
      }
    }
    pcVar37 = (code *)0x0;
    auStack_2e0[0] = 0;
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
    pcVar28 = pcVar35;
    pcVar33 = pcVar35;
    param_3 = param_2;
    auStack_228 = auVar52;
    func_0x034ba874(&uStack_280,0x11);
    lVar17 = _DAT_059c9978;
    if (pcVar43 != (code *)0x0) {
      func_0x054ed0d0(auStack_2d0,&uStack_280,0x50);
      lVar38 = *(long *)pcVar43;
      uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == lVar17) {
            puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
            goto LAB_03781270;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar19 = (undefined8 *)func_0x024d927c(pcVar43,lVar17,2);
LAB_03781270:
      pcVar36 = (code *)*puVar19;
      func_0x054ed0d0(auStack_1f0,auStack_2d0,0x50);
      (*pcVar36)(pcVar43,auStack_1f0,puVar19[1]);
      return (code *)0x1;
    }
  }
  uVar22 = 0x37812b8;
  auVar51 = func_0x0249fb90();
  puVar19 = auStack_2e0;
SUB_037812b8:
  *(undefined8 *)((long)puVar19 + -0x20) = uVar22;
  *(code **)((long)puVar19 + -0x18) = pcVar35;
  *(code **)((long)puVar19 + -0x10) = param_2;
  *(code **)((long)puVar19 + -8) = pcVar43;
  if (auVar51._8_8_ == 0) {
    uVar22 = 0x378130c;
    auVar54 = func_0x0249fb90();
    puVar21 = (undefined8 *)((long)puVar19 + -0x20);
    pcVar23 = pcVar28;
    pcVar28 = pcVar43;
    pcVar34 = param_2;
    pcVar45 = pcVar44;
SUB_0378130c:
    do {
      pcVar44 = pcVar37;
      pcVar43 = pcVar33;
      *(undefined8 *)((long)puVar21 + -0x20) = uVar22;
      *(code **)((long)puVar21 + -0x18) = pcVar35;
      *(code **)((long)puVar21 + -0x10) = pcVar34;
      *(code **)((long)puVar21 + -8) = pcVar28;
      if (auVar54._8_8_ != 0) {
        pcVar37 = (code *)0x0;
        iVar14 = (int)pcVar43;
        pcVar44 = (code *)func_0x036de6a0(auVar54._8_8_,pcVar23);
        if (iVar14 != 1) {
          return pcVar44;
        }
        pcVar35 = *(code **)((long)puVar21 + -0x10);
        lVar17 = *(long *)((long)puVar21 + -8);
        uVar22 = *(undefined8 *)((long)puVar21 + -0x20);
        auVar51._8_8_ = pcVar45;
        auVar51._0_8_ = *(undefined8 *)((long)puVar21 + -0x18);
        goto LAB_037824a0;
      }
      auVar51 = func_0x0249fb90();
      param_2 = auVar51._8_8_;
      pcVar24 = auVar51._0_8_;
      puVar19 = (undefined8 *)((long)puVar21 + -0x1c0);
      *(code **)((long)puVar21 + -0x70) = unaff_x29;
      *(undefined8 *)((long)puVar21 + -0x68) = 0x3781360;
      *(code **)((long)puVar21 + -0x60) = unaff_x26;
      *(code **)((long)puVar21 + -0x58) = pcVar47;
      *(code **)((long)puVar21 + -0x50) = pcVar20;
      *(code **)((long)puVar21 + -0x48) = pcVar36;
      *(code **)((long)puVar21 + -0x40) = pcVar45;
      *(code **)((long)puVar21 + -0x38) = pcVar35;
      *(code **)((long)puVar21 + -0x30) = pcVar34;
      *(code **)((long)puVar21 + -0x28) = pcVar28;
      pcVar35 = (code *)((ulong)param_3 & 0xffffffff);
      pcVar28 = pcVar23;
      pcVar33 = pcVar43;
      pcVar34 = param_3;
      pcVar37 = pcVar44;
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
        pcVar34 = param_3;
      }
      *(undefined8 *)((long)puVar21 + -0xd0) = 0;
      *(undefined8 *)((long)puVar21 + -200) = 0;
      *(undefined8 *)((long)puVar21 + -0xe0) = 0;
      *(undefined8 *)((long)puVar21 + -0xd8) = 0;
      *(undefined8 *)((long)puVar21 + -0xf0) = 0;
      *(undefined8 *)((long)puVar21 + -0xe8) = 0;
      *(undefined8 *)((long)puVar21 + -0x100) = 0;
      *(undefined8 *)((long)puVar21 + -0xf8) = 0;
      *(undefined8 *)((long)puVar21 + -0x108) = 0;
      pcVar36 = (code *)func_0x0376e450(pcVar24,param_2);
      auVar54._8_8_ = pcVar36;
      auVar54._0_8_ = pcVar44;
      auVar51._8_8_ = pcVar36;
      auVar51._0_8_ = pcVar44;
      pcVar47 = (code *)0x5e2d000;
      unaff_x26 = pcVar24;
      if (pcVar44 == (code *)0x0) {
LAB_03781b0c:
        auVar53 = func_0x0249fb90();
        lVar17 = auVar53._8_8_;
        *(undefined8 *)((long)puVar21 + -0x220) = 0x3781b10;
        *(undefined **)((long)puVar21 + -0x210) = unaff_x28;
        *(undefined **)((long)puVar21 + -0x208) = unaff_x27;
        *(code **)((long)puVar21 + -0x200) = unaff_x26;
        *(code **)((long)puVar21 + -0x1f8) = pcVar23;
        *(code **)((long)puVar21 + -0x1f0) = pcVar20;
        *(code **)((long)puVar21 + -0x1e8) = pcVar47;
        *(code **)((long)puVar21 + -0x1e0) = pcVar44;
        *(code **)((long)puVar21 + -0x1d8) = pcVar35;
        *(code **)((long)puVar21 + -0x1d0) = param_2;
        *(code **)((long)puVar21 + -0x1c8) = pcVar43;
        param_3 = (code *)((ulong)pcVar34 & 0xffffffff);
        pcVar36 = (code *)&DAT_059efeb0;
        pcVar43 = pcVar28;
        pcVar35 = pcVar33;
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
        *(undefined8 *)((long)puVar21 + -0x218) = 0;
        pcVar47 = (code *)func_0x0249fb80(_DAT_059efeb0);
        func_0x037c51f0(pcVar47,0);
        pcVar37 = pcVar28;
        if (pcVar47 == (code *)0x0) goto LAB_03781e4c;
        unaff_x26 = (code *)&DAT_059c59a8;
        unaff_x27 = &DAT_05a6a1d8;
        unaff_x28 = &DAT_05a44708;
        pcVar36 = pcVar47 + 0x10;
        *(long *)pcVar36 = lVar17;
        func_0x0249f888(pcVar36,lVar17);
        *(code **)(pcVar47 + 0x18) = pcVar33;
        func_0x0249f888(pcVar47 + 0x18,pcVar33);
        pcVar33 = (code *)func_0x0376e0dc(auVar53._0_8_);
        uVar22 = func_0x0249fb80(_DAT_059c59a8);
        auVar53._8_8_ = lVar17;
        auVar53._0_8_ = uVar22;
        pcVar35 = (code *)0x0;
        func_0x02a9aa34(uVar22,pcVar47,_DAT_05a6a1d8);
        pcVar43 = _DAT_05a44708;
        plVar27 = (long *)func_0x026ec554(pcVar33,uVar22);
        if (plVar27 == (long *)0x0) goto LAB_03781e4c;
        lVar17 = *plVar27;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 == 0) goto LAB_03781c90;
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_03781c78;
      }
      lVar17 = *(long *)pcVar44;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059e0220) {
            puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 0xc) * 0x10 + 0x138);
            param_3 = pcVar34;
            goto LAB_0378149c;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar25 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059e0220,0xc);
      param_3 = pcVar34;
LAB_0378149c:
      pcVar20 = (code *)(*(code *)*puVar25)(pcVar44,puVar25[1]);
      if (pcVar36 == (code *)0x0) {
        return (code *)0x0;
      }
      uVar18 = func_0x036f58fc(pcVar36,pcVar44,pcVar24,0);
      if ((uVar18 & 1) == 0) {
        return (code *)0x0;
      }
      lVar17 = *(long *)pcVar44;
      unaff_x26 = (code *)&DAT_059df8e8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
            puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
            goto LAB_03781528;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar25 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_03781528:
      uVar22 = (*(code *)*puVar25)(pcVar44,puVar25[1]);
      uVar18 = func_0x036edd98(pcVar36,uVar22,0);
      pcVar33 = pcVar35;
      if ((uVar18 & 1) == 0) {
LAB_037815f0:
        lVar17 = *(long *)pcVar44;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
              puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
              goto LAB_03781640;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        puVar25 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_03781640:
        uVar22 = (*(code *)*puVar25)(pcVar44,puVar25[1]);
        uVar18 = func_0x036edd98(pcVar36,uVar22,0);
        if ((uVar18 & 1) == 0) {
LAB_03781674:
          lVar17 = *(long *)pcVar44;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                goto LAB_03781750;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_03781750:
          uVar22 = (*(code *)*puVar19)(pcVar44,puVar19[1]);
          uVar18 = func_0x036f619c(pcVar36,uVar22,0);
          if ((uVar18 & 1) != 0) {
            lVar17 = *(long *)pcVar44;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                  puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                  goto LAB_037817c0;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_037817c0:
            uVar22 = (*(code *)*puVar19)(pcVar44,puVar19[1]);
            uVar18 = func_0x036f66a8(pcVar36,uVar22,0);
            if ((uVar18 & 1) == 0) {
              auVar51 = func_0x036f56f8(pcVar36,pcVar20,0);
              *(undefined1 (*) [16])((long)puVar21 + -0x108) = auVar51;
              if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              lVar17 = *(long *)(_DAT_05a29c90 + 0x20);
              if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = func_0x024d8f40();
              }
              pcVar26 = (char *)func_0x0249f90c((undefined1 *)((long)puVar21 + -0x108),
                                                *(long *)(**(long **)(lVar17 + 0xc0) + 0x80) + 0x20)
              ;
              if (*pcVar26 != '\0') {
                if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                pcVar28 = (code *)func_0x0352ece0(pcVar23,0);
                pcVar47 = pcVar23;
                goto LAB_03781874;
              }
            }
          }
        }
        else {
          uVar18 = func_0x036ee320(pcVar36,pcVar44,0);
          if ((uVar18 & 1) != 0) goto LAB_03781674;
          auVar54 = func_0x036f52d8(pcVar36,pcVar20,0);
          *(undefined1 (*) [16])((long)puVar21 + -0xf8) = auVar54;
          lVar17 = *(long *)(_DAT_05a27ee0 + 0x20);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x024d8f40();
          }
          pcVar26 = (char *)func_0x0249f90c((undefined1 *)((long)puVar21 + -0xf8),
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
          if (*pcVar26 != '\0') {
            if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pcVar28 = (code *)func_0x0352ece0(pcVar23,0);
            goto LAB_03781728;
          }
        }
LAB_03781888:
        *(undefined8 *)((long)puVar21 + -0x1c0) = 0;
        *(undefined8 *)((long)puVar21 + -0x148) = 0;
        *(undefined8 *)((long)puVar21 + -0x150) = 0;
        *(undefined8 *)((long)puVar21 + -0x138) = 0;
        *(undefined8 *)((long)puVar21 + -0x140) = 0;
        *(undefined8 *)((long)puVar21 + -0x128) = 0;
        *(undefined8 *)((long)puVar21 + -0x130) = 0;
        *(undefined8 *)((long)puVar21 + -0x118) = 0;
        *(undefined8 *)((long)puVar21 + -0x120) = 0;
        *(undefined8 *)((long)puVar21 + -0x158) = 0;
        *(undefined8 *)((long)puVar21 + -0x160) = 0;
        pcVar28 = param_2;
        pcVar33 = param_2;
        pcVar34 = pcVar20;
        func_0x034ba874((undefined1 *)((long)puVar21 + -0x160),0x11);
        lVar17 = _DAT_059c9978;
        pcVar47 = pcVar36;
        if (pcVar43 == (code *)0x0) goto LAB_03781b0c;
        func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x1b0),
                        (undefined1 *)((long)puVar21 + -0x160),0x50);
        lVar38 = *(long *)pcVar43;
        uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar18 == 0) goto LAB_0378190c;
        piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        goto LAB_037818f4;
      }
      uVar18 = func_0x036ee320(pcVar36,pcVar44,0);
      if ((uVar18 & 1) != 0) goto LAB_037815f0;
      lVar17 = *(long *)pcVar44;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
            puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
            goto LAB_037815ac;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar25 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_037815ac:
      uVar22 = (*(code *)*puVar25)(pcVar44,puVar25[1]);
      uVar18 = func_0x036f619c(pcVar36,uVar22,0);
      if ((uVar18 & 1) == 0) goto LAB_037815f0;
      uVar22 = func_0x022bffa8(5,_DAT_059df8e8,pcVar44);
      uVar18 = func_0x036f66a8(pcVar36,uVar22,0);
      if ((uVar18 & 1) != 0) goto LAB_037815f0;
      auVar52 = func_0x036f52d8(pcVar36,pcVar20,0);
      *(undefined1 (*) [16])((long)puVar21 + -0xd0) = auVar52;
      auVar52 = func_0x036f56f8(pcVar36,pcVar20,0);
      *(undefined1 (*) [16])((long)puVar21 + -0xe8) = auVar52;
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0288eda8((undefined1 *)((long)puVar21 + -0xe8),
                               (undefined1 *)((long)puVar21 + -0xd8),_DAT_05a29c88);
      pcVar23 = (code *)(uVar18 & 0xffffffff);
      uVar40 = func_0x022bf4f8((undefined1 *)((long)puVar21 + -0xd0),_DAT_05a27ee0);
      if ((uVar40 & 1) == 0) {
        if ((uVar18 & 1) != 0) goto LAB_03781ab4;
        goto LAB_03781888;
      }
      if ((uVar18 & 1) == 0) goto LAB_03781a40;
      func_0x02886844((undefined1 *)((long)puVar21 + -0xd0),(undefined1 *)((long)puVar21 + -0xc0),
                      _DAT_05a27ee8);
      uVar22 = *(undefined8 *)((long)puVar21 + -0xc0);
      unaff_x26 = *(code **)((long)puVar21 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x042542f4(uVar22,unaff_x26,0);
      if ((uVar18 & 1) != 0) goto LAB_03781a40;
LAB_03781ab4:
      uVar22 = *(undefined8 *)((long)puVar21 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      pcVar47 = (code *)func_0x0425449c(uVar22,0);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2be8);
      }
      pcVar28 = (code *)func_0x0352ed34(pcVar47,0);
LAB_03781874:
      uVar22 = 0x3781888;
      puVar21 = (undefined8 *)((long)puVar21 + -0x1c0);
      pcVar23 = pcVar28;
      pcVar28 = pcVar43;
      pcVar34 = param_2;
      pcVar45 = pcVar44;
    } while( true );
  }
  pcVar37 = (code *)0x0;
  iVar14 = (int)pcVar33;
  pcVar43 = (code *)func_0x036dcba8(auVar51._8_8_,pcVar28);
  if (iVar14 != 1) {
    return pcVar43;
  }
  pcVar35 = *(code **)((long)puVar19 + -0x10);
  pcVar28 = *(code **)((long)puVar19 + -8);
  uVar22 = *(undefined8 *)((long)puVar19 + -0x20);
  uVar18 = *(ulong *)((long)puVar19 + -0x18);
  goto LAB_037820e8;
LAB_03781a40:
  func_0x02886844((undefined1 *)((long)puVar21 + -0xd0),(undefined1 *)((long)puVar21 + -0xc0),
                  _DAT_05a27ee8);
  uVar22 = *(undefined8 *)((long)puVar21 + -0xc0);
  if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  pcVar23 = (code *)func_0x0425449c(uVar22,0);
  if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2be8);
  }
  pcVar28 = (code *)func_0x0352ed34(pcVar23,0);
LAB_03781728:
  uVar22 = 0x378173c;
  pcVar47 = pcVar23;
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
  pcVar36 = pcVar43;
  pcVar47 = pcVar43;
  pcVar44 = pcVar28;
  func_0x034ba874(puVar10 + -0x120,0xd);
  lVar17 = _DAT_059c9978;
  auVar56._8_8_ = pcVar36;
  auVar56._0_8_ = pcVar47;
  if (pcVar37 == (code *)0x0) goto LAB_0378377c;
  func_0x054ed0d0(puVar10 + -0x170,puVar10 + -0x120,0x50);
  lVar38 = *(long *)pcVar37;
  uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
  if (uVar18 != 0) {
    piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
    do {
      if (*(long *)(piVar41 + -2) == lVar17) {
        pcVar47 = (code *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
        goto LAB_03783660;
      }
      uVar18 = uVar18 - 1;
      piVar41 = piVar41 + 4;
    } while (uVar18 != 0);
  }
  pcVar47 = (code *)func_0x024d927c(pcVar37,lVar17,2);
LAB_03783660:
  unaff_x29 = *(code **)pcVar47;
  func_0x054ed0d0(puVar10 + -0xb0,puVar10 + -0x170,0x50);
  (*unaff_x29)(pcVar37,puVar10 + -0xb0,*(long *)(pcVar47 + 8));
  uVar22 = 0x378369c;
  puVar10 = puVar10 + -0x1d0;
  pcVar35 = pcVar43;
  pcVar44 = pcVar28;
  pcVar20 = pcVar33;
  pcVar36 = pcVar37;
  auVar51 = auVar54;
  goto SUB_03783264;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar41 = piVar41 + 4;
    if (uVar18 == 0) break;
LAB_037818f4:
    if (*(long *)(piVar41 + -2) == lVar17) {
      puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
      goto LAB_03781934;
    }
  }
LAB_0378190c:
  puVar19 = (undefined8 *)func_0x024d927c(pcVar43,lVar17,2);
LAB_03781934:
  pcVar36 = (code *)*puVar19;
  func_0x054ed0d0((undefined1 *)((long)puVar21 + -0xc0),(undefined1 *)((long)puVar21 + -0x1b0),0x50)
  ;
  (*pcVar36)(pcVar43,(undefined1 *)((long)puVar21 + -0xc0),puVar19[1]);
  return (code *)0x1;
LAB_0378377c:
  func_0x0249fb90();
LAB_03783780:
  func_0x0249fb90();
  pcVar36 = pcVar43;
  while( true ) {
    auVar55 = func_0x0249fb88(pcVar28);
    uVar22 = auVar55._0_8_;
    if (auVar55._8_4_ != 1) break;
    puVar19 = (undefined8 *)func_0x054ed080(uVar22);
    pcVar28 = (code *)*puVar19;
    *(code **)(puVar10 + -0xd0) = pcVar28;
    pcVar43 = (code *)func_0x054ed090();
    puVar19 = *(undefined8 **)(puVar10 + -200);
LAB_037836e8:
    uVar22 = auVar56._0_8_;
    pcVar33 = (code *)*puVar19;
    if (pcVar33 != (code *)0x0) {
      lVar17 = *(long *)pcVar33;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df598) {
            puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
            goto LAB_03783744;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      uVar32 = 0;
      puVar19 = (undefined8 *)func_0x024d927c(pcVar33);
      auVar56._8_8_ = uVar32;
      auVar56._0_8_ = uVar22;
LAB_03783744:
      pcVar43 = (code *)(*(code *)*puVar19)(pcVar33,puVar19[1]);
    }
    if (pcVar28 == (code *)0x0) {
      return pcVar43;
    }
  }
  func_0x022bd79c(puVar10 + -0xd0);
  func_0x0258f7ac(uVar22);
  auVar51 = func_0x022bd790();
  *(undefined8 *)(puVar10 + -0x210) = 0x37837f8;
  *(code **)(puVar10 + -0x200) = pcVar36;
  *(undefined1 (*) [16])(puVar10 + -0x1f8) = auVar54;
  *(code **)(puVar10 + -0x1e8) = pcVar37;
  *(code **)(puVar10 + -0x1e0) = pcVar33;
  *(undefined8 *)(puVar10 + -0x1d8) = uVar22;
  if ((bRam0000000005e2dfa0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2dfa0 = 1;
  }
  *pcVar44 = (code)0x0;
  *(undefined8 *)(puVar10 + -0x240) = 0x3783850;
  *(undefined1 (*) [16])(puVar10 + -0x230) = auVar56;
  *(long *)(puVar10 + -0x220) = auVar51._8_8_;
  *(code **)(puVar10 + -0x218) = pcVar44;
  *(long *)(puVar10 + -0x238) = auVar56._8_8_;
  if ((bRam0000000005e2dfa3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    bRam0000000005e2dfa3 = 1;
  }
  uVar18 = func_0x03774280(auVar51._0_8_,auVar56._8_8_);
  if ((uVar18 & 1) != 0) {
    uVar18 = func_0x03774280(auVar51._0_8_,auVar56._0_8_);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar13 = func_0x037737e4(puVar10 + -0x238,auVar56._0_8_);
      goto LAB_03783a30;
    }
  }
  uVar13 = 1;
LAB_03783a30:
  return (code *)(ulong)(uVar13 & 1);
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar41 = piVar41 + 4;
    if (uVar18 == 0) break;
LAB_03781c78:
    if (*(long *)(piVar41 + -2) == _DAT_059c9f90) {
      puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
      goto LAB_03781cac;
    }
  }
LAB_03781c90:
  pcVar43 = (code *)0x0;
  puVar19 = (undefined8 *)func_0x024d927c(plVar27);
LAB_03781cac:
  pcVar47 = (code *)&DAT_059cb2d8;
  auVar9._8_8_ = &DAT_059df6e0;
  auVar9._0_8_ = &DAT_059df598;
  auVar4._8_8_ = &DAT_059df6e0;
  auVar4._0_8_ = &DAT_059df598;
  auVar53._8_8_ = &DAT_059df6e0;
  auVar53._0_8_ = &DAT_059df598;
  uVar22 = (*(code *)*puVar19)(plVar27,puVar19[1]);
  *(undefined8 *)((long)puVar21 + -0x218) = uVar22;
  *(undefined8 *)((long)puVar21 + -0x230) = 0;
  *(undefined1 **)((long)puVar21 + -0x228) = (undefined1 *)((long)puVar21 + -0x218);
  pcVar33 = *(code **)((long)puVar21 + -0x218);
  if (pcVar33 == (code *)0x0) {
    func_0x0249fb90();
LAB_03781e48:
    func_0x0249fb90();
LAB_03781e4c:
    func_0x0249fb90();
    pcVar20 = param_3;
    while( true ) {
      param_3 = pcVar34;
      pcVar28 = pcVar43;
      auVar55 = func_0x0249fb88(pcVar20);
      pcVar43 = auVar55._0_8_;
      if (auVar55._8_4_ != 1) break;
      puVar19 = (undefined8 *)func_0x054ed080(pcVar43);
      pcVar20 = (code *)*puVar19;
      *(code **)((long)puVar21 + -0x230) = pcVar20;
      pcVar44 = (code *)func_0x054ed090();
      puVar19 = *(undefined8 **)((long)puVar21 + -0x228);
      pcVar43 = pcVar28;
      pcVar34 = param_3;
LAB_03781dc0:
      pcVar37 = (code *)*puVar19;
      if (pcVar37 != (code *)0x0) {
        lVar17 = *(long *)pcVar37;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == *auVar53._0_8_) {
              puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
              goto LAB_03781e14;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        pcVar43 = (code *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(pcVar37);
LAB_03781e14:
        pcVar44 = (code *)(*(code *)*puVar19)(pcVar37,puVar19[1]);
      }
      if (pcVar20 == (code *)0x0) {
        return pcVar44;
      }
    }
    func_0x022bd79c((undefined1 *)((long)puVar21 + -0x230));
    func_0x0258f7ac(pcVar43);
    uVar22 = 0x3781ea8;
    func_0x022bd790();
    pcVar44 = extraout_x1_00;
  }
  else {
    lVar17 = *(long *)pcVar33;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df6e0) {
          puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
          goto LAB_03781d30;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    pcVar43 = (code *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(pcVar33);
LAB_03781d30:
    pcVar44 = (code *)(*(code *)*puVar19)(pcVar33,puVar19[1]);
    if (((ulong)pcVar44 & 1) == 0) {
      pcVar20 = (code *)0x0;
      puVar19 = (undefined8 *)((long)puVar21 + -0x218);
      auVar53 = auVar9;
      goto LAB_03781dc0;
    }
    pcVar33 = *(code **)((long)puVar21 + -0x218);
    if (pcVar33 == (code *)0x0) goto LAB_03781e48;
    lVar17 = *(long *)pcVar33;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059cb2d8) {
          puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
          goto LAB_03781d94;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    puVar19 = (undefined8 *)func_0x024d927c(pcVar33,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*puVar19)(pcVar33,puVar19[1]);
    pcVar44 = *(code **)pcVar36;
    uVar22 = 0x3781db4;
    pcVar35 = extraout_x1;
    pcVar43 = param_3;
    auVar53 = auVar4;
  }
  pcVar20 = auVar53._8_8_;
  puVar19 = (undefined8 *)((long)puVar21 + -0x260);
  *(undefined8 *)((long)puVar21 + -0x260) = uVar22;
  *(long *)((long)puVar21 + -600) = auVar53._0_8_;
  *(code **)((long)puVar21 + -0x250) = pcVar33;
  *(code **)((long)puVar21 + -0x248) = pcVar36;
  *(code **)((long)puVar21 + -0x240) = pcVar37;
  *(code **)((long)puVar21 + -0x238) = pcVar43;
  pcVar36 = (code *)0x5e2d000;
  uVar18 = (ulong)param_3 & 0xffffffff;
  pcVar37 = pcVar28;
  pcVar33 = pcVar35;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  if (pcVar44 != (code *)0x0) {
    lVar17 = *(long *)pcVar44;
    uVar40 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar40 != 0) {
      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
          puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
          goto LAB_03781f64;
        }
        uVar40 = uVar40 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar40 != 0);
    }
    pcVar37 = (code *)0x5;
    puVar25 = (undefined8 *)func_0x024d927c(pcVar44);
LAB_03781f64:
    uVar22 = (*(code *)*puVar25)(pcVar44,puVar25[1]);
    if (pcVar35 != (code *)0x0) {
      pcVar37 = (code *)0x0;
      pcVar43 = (code *)func_0x036d3908(pcVar35,uVar22);
      if (pcVar43 != (code *)0x0) {
        lVar17 = *(long *)pcVar43;
        uVar40 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar40 != 0) {
          piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
              puVar25 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
              goto LAB_03781fe0;
            }
            uVar40 = uVar40 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar40 != 0);
        }
        pcVar37 = (code *)0x0;
        puVar25 = (undefined8 *)func_0x024d927c(pcVar43);
LAB_03781fe0:
        plVar27 = (long *)(*(code *)*puVar25)(pcVar43,puVar25[1]);
        pcVar36 = pcVar43;
        if (plVar27 != (long *)0x0) {
          lVar17 = *plVar27;
          uVar40 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar40 != 0) {
            piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059e0788) {
                puVar25 = (undefined8 *)(lVar17 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar40 = uVar40 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar40 != 0);
          }
          pcVar37 = (code *)0x2;
          puVar25 = (undefined8 *)func_0x024d927c(plVar27);
LAB_0378204c:
          pcVar36 = (code *)(*(code *)*puVar25)(plVar27,puVar25[1]);
          if (pcVar36 == (code *)0x0) {
            return (code *)0x0;
          }
          if (*(byte *)(*(long *)pcVar36 + 0x130) < *(byte *)(_DAT_059e73b0 + 0x130)) {
            return pcVar36;
          }
          if (*(long *)(*(long *)(*(long *)pcVar36 + 200) +
                        (ulong)*(byte *)(_DAT_059e73b0 + 0x130) * 8 + -8) != _DAT_059e73b0) {
            return pcVar36;
          }
          lVar17 = func_0x036d5ee4(pcVar35,0);
          if (lVar17 != 0) {
            func_0x037040b8(lVar17,*(undefined4 *)(pcVar36 + 0x30),uVar18,0);
            uVar22 = 0;
            puVar46 = *(undefined **)((long)puVar21 + -600);
            *(undefined8 *)((long)puVar21 + -0x260) = *(undefined8 *)((long)puVar21 + -0x260);
            *(undefined8 *)((long)puVar21 + -0x250) = *(undefined8 *)((long)puVar21 + -0x250);
            *(undefined8 *)((long)puVar21 + -0x248) = *(undefined8 *)((long)puVar21 + -0x248);
            *(undefined8 *)((long)puVar21 + -0x240) = *(undefined8 *)((long)puVar21 + -0x240);
            *(undefined8 *)((long)puVar21 + -0x238) = *(undefined8 *)((long)puVar21 + -0x238);
            plVar27 = (long *)0x5e2d000;
            pcVar43 = pcVar28;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,pcVar44,pcVar28,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (pcVar44 != (code *)0x0) {
              lVar17 = *(long *)pcVar44;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                    puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                    goto LAB_036e2904;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              pcVar43 = (code *)0x5;
              puVar19 = (undefined8 *)func_0x024d927c(pcVar44);
LAB_036e2904:
              uVar32 = (*(code *)*puVar19)(pcVar44,puVar19[1]);
              plVar29 = *(long **)(pcVar35 + 0x10);
              if (plVar29 != (long *)0x0) {
                pcVar43 = *(code **)(*plVar29 + 0x1d0);
                plVar29 = (long *)(**(code **)(*plVar29 + 0x1c8))(plVar29,uVar32);
                if (plVar29 != (long *)0x0) {
                  lVar17 = *plVar29;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                        puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                        goto LAB_036e2988;
                      }
                      uVar18 = uVar18 - 1;
                      piVar41 = piVar41 + 4;
                    } while (uVar18 != 0);
                  }
                  pcVar43 = (code *)0x0;
                  puVar19 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036e2988:
                  plVar30 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                  plVar27 = plVar29;
                  if (plVar30 != (long *)0x0) {
                    lVar17 = *plVar30;
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar41 + -2) == _DAT_059e0788) {
                          puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar18 = uVar18 - 1;
                        piVar41 = piVar41 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0788,6);
LAB_036e29f4:
                    pcVar43 = (code *)(*(code *)*puVar19)(plVar30,puVar19[1]);
                    if (((ulong)pcVar43 & 1) == 0) {
                      return pcVar43;
                    }
                    func_0x03727e60(pcVar35,pcVar28,0);
                    *(code **)((long)puVar21 + -0x290) = unaff_x29;
                    *(undefined8 *)((long)puVar21 + -0x288) =
                         *(undefined8 *)((long)puVar21 + -0x260);
                    *(undefined **)((long)puVar21 + -0x280) = unaff_x28;
                    *(undefined **)((long)puVar21 + -0x278) = unaff_x27;
                    *(code **)((long)puVar21 + -0x270) = unaff_x26;
                    *(code **)((long)puVar21 + -0x268) = pcVar47;
                    *(code **)((long)puVar21 + -0x260) = pcVar20;
                    *(undefined **)((long)puVar21 + -600) = puVar46;
                    *(undefined8 *)((long)puVar21 + -0x250) =
                         *(undefined8 *)((long)puVar21 + -0x250);
                    *(undefined8 *)((long)puVar21 + -0x248) =
                         *(undefined8 *)((long)puVar21 + -0x248);
                    *(undefined8 *)((long)puVar21 + -0x240) =
                         *(undefined8 *)((long)puVar21 + -0x240);
                    *(undefined8 *)((long)puVar21 + -0x238) =
                         *(undefined8 *)((long)puVar21 + -0x238);
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,pcVar44,pcVar28,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    *(undefined8 *)((long)puVar21 + -0x2a0) = 0;
                    *(undefined8 *)((long)puVar21 + -0x298) = 0;
                    plVar27 = (long *)0x5e2d000;
                    if (pcVar44 != (code *)0x0) {
                      lVar17 = *(long *)pcVar44;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                            puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                            goto LAB_037280d4;
                          }
                          uVar18 = uVar18 - 1;
                          piVar41 = piVar41 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x024d927c(pcVar44,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar29 = (long *)(*(code *)*puVar19)(pcVar44,puVar19[1]);
                      if (pcVar35 != (code *)0x0) {
                        lVar17 = *(long *)pcVar35;
                        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar18 != 0) {
                          piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                              puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                              goto LAB_0372813c;
                            }
                            uVar18 = uVar18 - 1;
                            piVar41 = piVar41 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar30 = (long *)(*(code *)*puVar19)(pcVar35,plVar29,puVar19[1]);
                        plVar27 = plVar29;
                        if (plVar30 != (long *)0x0) {
                          lVar17 = *plVar30;
                          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                          if (uVar18 != 0) {
                            piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                                puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar18 = uVar18 - 1;
                              piVar41 = piVar41 + 4;
                            } while (uVar18 != 0);
                          }
                          puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar29 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
                          plVar27 = plVar30;
                          if (plVar29 != (long *)0x0) {
                            lVar17 = *plVar29;
                            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar18 != 0) {
                              piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar41 + -2) == _DAT_059e0788) {
                                  puVar19 = (undefined8 *)
                                            (lVar17 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar18 = uVar18 - 1;
                                piVar41 = piVar41 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0788,2);
LAB_03728214:
                            plVar29 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                            lVar17 = *(long *)pcVar35;
                            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar18 != 0) {
                              piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                  puVar19 = (undefined8 *)
                                            (lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                                  goto LAB_03728274;
                                }
                                uVar18 = uVar18 - 1;
                                piVar41 = piVar41 + 4;
                              } while (uVar18 != 0);
                            }
                            puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_03728274:
                            lVar17 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                            if (lVar17 != 0) {
                              lVar38 = *(long *)pcVar35;
                              uVar22 = *(undefined8 *)(lVar17 + 0x28);
                              uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                              if (uVar18 != 0) {
                                piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                    puVar19 = (undefined8 *)
                                              (lVar38 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                                    goto LAB_037282d8;
                                  }
                                  uVar18 = uVar18 - 1;
                                  piVar41 = piVar41 + 4;
                                } while (uVar18 != 0);
                              }
                              puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar17 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                              if (lVar17 != 0) {
                                lVar38 = *(long *)pcVar35;
                                uVar32 = *(undefined8 *)(lVar17 + 0x30);
                                uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                                if (uVar18 != 0) {
                                  piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                      puVar19 = (undefined8 *)
                                                (lVar38 + (long)(*piVar41 + 0x24) * 0x10 + 0x138);
                                      goto LAB_0372833c;
                                    }
                                    uVar18 = uVar18 - 1;
                                    piVar41 = piVar41 + 4;
                                  } while (uVar18 != 0);
                                }
                                puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar11 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                                lVar17 = *(long *)pcVar35;
                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                if (uVar18 != 0) {
                                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                      puVar19 = (undefined8 *)
                                                (lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                                      goto LAB_0372839c;
                                    }
                                    uVar18 = uVar18 - 1;
                                    piVar41 = piVar41 + 4;
                                  } while (uVar18 != 0);
                                }
                                puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar31 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                                uVar16 = func_0x03530c84(pcVar28,0);
                                if (plVar29 != (long *)0x0) {
                                  lVar17 = *plVar29;
                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar41 + -2) == _DAT_059e0780) {
                                        puVar19 = (undefined8 *)
                                                  (lVar17 + (long)*piVar41 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar41 = piVar41 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0780,0);
LAB_03728418:
                                  pcVar43 = (code *)*puVar19;
                                  *(undefined8 *)((long)puVar21 + -0x2b0) = puVar19[1];
                                  auVar51 = (*pcVar43)(plVar29,pcVar44,plVar30,uVar22,uVar32,uVar31,
                                                       uVar11,uVar16);
                                  lVar17 = *(long *)pcVar35;
                                  *(undefined1 (*) [16])((long)puVar21 + -0x2a0) = auVar51;
                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                        puVar19 = (undefined8 *)
                                                  (lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                                        goto LAB_037284a0;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar41 = piVar41 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar19 = (undefined8 *)func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar17 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                                  if (lVar17 != 0) {
                                    *(undefined1 (*) [16])(lVar17 + 0x18) = auVar51;
                                    lVar17 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
                                      lVar17 = func_0x024d8f40();
                                    }
                                    pcVar43 = (code *)func_0x0249f90c((undefined1 *)
                                                                      ((long)puVar21 + -0x2a0),
                                                                      *(undefined8 *)
                                                                       (*(long *)(*(long *)(lVar17 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80));
                                    if (*pcVar43 != (code)0x0) {
                                      return pcVar43;
                                    }
                                    lVar17 = *plVar30;
                                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                    if (uVar18 != 0) {
                                      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                                          puVar19 = (undefined8 *)
                                                    (lVar17 + (long)*piVar41 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar18 = uVar18 - 1;
                                        piVar41 = piVar41 + 4;
                                      } while (uVar18 != 0);
                                    }
                                    puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar29 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
                                    if (plVar29 != (long *)0x0) {
                                      lVar17 = *plVar29;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar41 + -2) == _DAT_059e0788) {
                                            puVar19 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar41 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar41 = piVar41 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar19 = (undefined8 *)
                                                func_0x024d927c(plVar29,_DAT_059e0788,7);
LAB_037285a8:
                                      pcVar43 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                                      if (((ulong)pcVar43 & 1) == 0) {
                                        return pcVar43;
                                      }
                                      lVar17 = *(long *)pcVar35;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                            puVar19 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728608;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar41 = piVar41 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar19 = (undefined8 *)
                                                func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar27 = (long *)(*(code *)*puVar19)(pcVar35,puVar19[1]);
                                      lVar17 = *(long *)pcVar35;
                                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                      if (uVar18 != 0) {
                                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                                            puVar19 = (undefined8 *)
                                                      (lVar17 + (long)(*piVar41 + 6) * 0x10 + 0x138)
                                            ;
                                            goto LAB_03728668;
                                          }
                                          uVar18 = uVar18 - 1;
                                          piVar41 = piVar41 + 4;
                                        } while (uVar18 != 0);
                                      }
                                      puVar19 = (undefined8 *)
                                                func_0x024d927c(pcVar35,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar17 = (*(code *)*puVar19)(pcVar35,puVar19[1]);
                                      if ((lVar17 != 0) && (plVar27 != (long *)0x0)) {
                                        pcVar43 = (code *)func_0x03704874(plVar27,*(undefined8 *)
                                                                                   (lVar17 + 0x28),0
                                                                         );
                                        return pcVar43;
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
                    plVar29 = (long *)func_0x0249fb90();
                    *(undefined8 *)((long)puVar21 + -0x2d0) = 0x37286b0;
                    *(long **)((long)puVar21 + -0x2c0) = plVar27;
                    *(code **)((long)puVar21 + -0x2b8) = pcVar35;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    *(undefined8 *)((long)puVar21 + -0x2d8) = 0;
                    if (plVar29 != (long *)0x0) {
                      lVar17 = *plVar29;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar41 + -2) == _DAT_059dfe48) {
                            puVar19 = (undefined8 *)
                                      (lVar17 + (long)(*piVar41 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar18 = uVar18 - 1;
                          piVar41 = piVar41 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar17 = (*(code *)*puVar19)(plVar29,puVar19[1]);
                      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x68) == 0)) {
                        uVar22 = 0;
                        *(undefined8 *)((long)puVar21 + -0x2d8) = 0;
                      }
                      else {
                        uVar11 = *(undefined4 *)(*(long *)(lVar17 + 0x68) + 0x10);
                        *(undefined8 *)((long)puVar21 + -0x2e0) = 0;
                        *(undefined4 *)((long)puVar21 + -0x2c4) = uVar11;
                        func_0x028866e4((undefined1 *)((long)puVar21 + -0x2e0),
                                        (undefined1 *)((long)puVar21 + -0x2c4),_DAT_05a27d88);
                        uVar22 = *(undefined8 *)((long)puVar21 + -0x2e0);
                      }
                      lVar17 = _DAT_05a27d90;
                      *(undefined8 *)((long)puVar21 + -0x2d8) = uVar22;
                      lVar39 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar3 = *(ushort *)(lVar39 + 0x135);
                      lVar38 = lVar39;
                      if ((uVar3 & 1) == 0) {
                        lVar39 = func_0x024d8f40(lVar39);
                        uVar3 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
                        lVar38 = *(long *)(lVar17 + 0x20);
                      }
                      uVar11 = *(undefined4 *)(**(long **)(lVar39 + 0xc0) + 0xfc);
                      if ((uVar3 & 1) == 0) {
                        lVar38 = func_0x024d8f40(lVar38);
                      }
                      uVar22 = func_0x0249f90c((undefined1 *)((long)puVar21 + -0x2d8),
                                               *(long *)(*(long *)(*(long *)(lVar38 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x2e0),uVar22,uVar11);
                      return (code *)(ulong)*(uint *)((long)puVar21 + -0x2e0);
                    }
                    auVar51 = func_0x0249fb90();
                    lVar17 = auVar51._8_8_;
                    *(undefined8 *)((long)puVar21 + -0x2f0) = 0x372883c;
                    if (lVar17 != 0) {
                      if (*(int *)(auVar51._0_8_ + 0x10) < *(int *)(lVar17 + 0x18)) {
                        uVar13 = 0;
LAB_03728870:
                        return (code *)(ulong)(uVar13 & 1);
                      }
                      lVar38 = *(long *)(auVar51._0_8_ + 0x18);
                      if (lVar38 != 0) {
                        uVar13 = func_0x0387f210(lVar38,lVar17,0);
                        uVar13 = uVar13 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar51 = func_0x0249fb90();
                    lVar17 = auVar51._8_8_;
                    *(undefined8 *)((long)puVar21 + -0x300) = 0x3728880;
                    if (lVar17 == 0) {
LAB_037288c0:
                      lVar17 = func_0x0249fb90();
                      return *(code **)(lVar17 + 0x10);
                    }
                    if (*(int *)(auVar51._0_8_ + 0x10) < *(int *)(lVar17 + 0x18)) {
                      lVar38 = *(long *)(auVar51._0_8_ + 0x18);
                      if (lVar38 == 0) goto LAB_037288c0;
                      uVar13 = func_0x0387f210(lVar38,lVar17,0);
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
            uVar32 = func_0x0249fb90();
            *(undefined8 *)((long)puVar21 + -0x2a0) = 0x36e2a48;
            *(code **)((long)puVar21 + -0x290) = pcVar20;
            *(undefined **)((long)puVar21 + -0x288) = puVar46;
            *(long **)((long)puVar21 + -0x280) = plVar27;
            *(code **)((long)puVar21 + -0x278) = pcVar35;
            *(code **)((long)puVar21 + -0x270) = pcVar44;
            *(code **)((long)puVar21 + -0x268) = pcVar28;
            puVar42 = (undefined *)0x5e2d000;
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
            *(undefined8 *)((long)puVar21 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2b8) = 0;
            plVar29 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar29,0);
            if (plVar29 != (long *)0x0) {
              pcVar43 = (code *)0x0;
              func_0x0442b590(plVar29,_DAT_05a9e920);
              lVar17 = func_0x036d5e58(uVar32);
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
                puVar42 = &DAT_05a9fca8;
                func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar17 + 0x28) + 0x10),0);
                func_0x0442b540(plVar29,10,0);
                pcVar43 = (code *)0x0;
                func_0x0442b590(plVar29,_DAT_05a9fca8);
                lVar17 = func_0x036d5e58(uVar32);
                if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                  puVar42 = &DAT_05a7a1e0;
                  func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar29,10,0);
                  pcVar43 = (code *)0x0;
                  func_0x0442b590(plVar29,_DAT_05a7a1e0);
                  lVar17 = func_0x036d5e58(uVar32);
                  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                    puVar42 = &DAT_05a815a8;
                    func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar29,10,0);
                    pcVar43 = (code *)0x0;
                    func_0x0442b590(plVar29,_DAT_05a815a8);
                    lVar17 = func_0x036d5e58(uVar32);
                    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                      puVar42 = &DAT_05a934d8;
                      func_0x04433eb4(plVar29,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar29,10,0);
                      pcVar43 = (code *)0x0;
                      func_0x0442b590(plVar29,_DAT_05a934d8);
                      lVar17 = func_0x036d5e58(uVar32);
                      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                        puVar42 = &DAT_05a27fc8;
                        auVar51 = func_0x03753e70(*(long *)(lVar17 + 0x18),0);
                        *(undefined1 (*) [16])((long)puVar21 + -0x2b8) = auVar51;
                        lVar17 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                          lVar17 = func_0x024d8f40();
                        }
                        plVar27 = (long *)&DAT_059e2ba0;
                        puVar46 = &DAT_05a79720;
                        pcVar20 = (code *)&DAT_05a9e3c0;
                        pcVar26 = (char *)func_0x0249f90c((undefined1 *)((long)puVar21 + -0x2b8),
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar17 + 0xc0) + 8)
                                                           + 0x80));
                        lVar17 = _DAT_05a27fb0;
                        if (*pcVar26 == '\0') {
                          lVar17 = 0;
                        }
                        else {
                          lVar39 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar3 = *(ushort *)(lVar39 + 0x135);
                          lVar38 = lVar39;
                          if ((uVar3 & 1) == 0) {
                            lVar39 = func_0x024d8f40(lVar39);
                            uVar3 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
                            lVar38 = *(long *)(lVar17 + 0x20);
                          }
                          puVar42 = (undefined *)(ulong)*(uint *)(**(long **)(lVar39 + 0xc0) + 0xfc)
                          ;
                          if ((uVar3 & 1) == 0) {
                            lVar38 = func_0x024d8f40(lVar38);
                          }
                          uVar31 = func_0x0249f90c((undefined1 *)((long)puVar21 + -0x2b8),
                                                   *(long *)(*(long *)(*(long *)(lVar38 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
                          func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x298),uVar31,puVar42);
                          iVar14 = *(int *)(_DAT_059e2ba0 + 0xe4);
                          *(undefined8 *)((long)puVar21 + -0x2c0) =
                               *(undefined8 *)((long)puVar21 + -0x298);
                          if (iVar14 == 0) {
                            func_0x0249fa64();
                          }
                          lVar17 = func_0x0430e224((undefined1 *)((long)puVar21 + -0x2c0),0);
                        }
                        lVar38 = _DAT_05a79720;
                        if (lVar17 != 0) {
                          lVar38 = lVar17;
                        }
                        func_0x0442b590(plVar29,lVar38,0);
                        func_0x0442b540(plVar29,10,0);
                        pcVar43 = (code *)0x0;
                        func_0x0442b590(plVar29,_DAT_05a9e3c0);
                        lVar17 = func_0x036d5e58(uVar32);
                        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                          uVar22 = func_0x03753af4(*(long *)(lVar17 + 0x18),0);
                          *(undefined8 *)((long)puVar21 + -0x2a8) = uVar22;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar18 = func_0x0430dd84(uVar22,*(undefined8 *)
                                                           (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar17 = _DAT_05a79720;
                          if ((uVar18 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar17 = func_0x0430e224((undefined1 *)((long)puVar21 + -0x2a8),0);
                          }
                          func_0x0442b590(plVar29,lVar17,0);
                          pcVar43 = (code *)(**(code **)(*plVar29 + 0x168))
                                                      (plVar29,*(undefined8 *)(*plVar29 + 0x170));
                          return pcVar43;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar17 = func_0x0249fb90();
            *(undefined8 *)((long)puVar21 + -0x300) = 0x36e2e70;
            *(code **)((long)puVar21 + -0x2f0) = pcVar20;
            *(undefined **)((long)puVar21 + -0x2e8) = puVar46;
            *(long **)((long)puVar21 + -0x2e0) = plVar27;
            *(undefined **)((long)puVar21 + -0x2d8) = puVar42;
            *(undefined8 *)((long)puVar21 + -0x2d0) = uVar32;
            *(long **)((long)puVar21 + -0x2c8) = plVar29;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pcVar36 = (code *)func_0x03962be0(0);
            if (((ulong)pcVar36 & 1) == 0) {
              return pcVar36;
            }
            uVar32 = 0x5e2d000;
            puVar42 = &DAT_059da1f8;
            if (pcVar43 != (code *)0x0) {
              lVar38 = *(long *)pcVar43;
              uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                    puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                    goto LAB_036e2f54;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(pcVar43,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar31 = (*(code *)*puVar19)(pcVar43,puVar19[1]);
              if (lVar17 != 0) {
                puVar15 = (undefined *)func_0x036eb814(lVar17,uVar31,0);
                uVar32 = uVar31;
                if (*(long *)(lVar17 + 0x10) != 0) {
                  pcVar20 = (code *)&DAT_059fa1e8;
                  plVar27 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  puVar46 = (undefined *)(ulong)*(uint *)(plVar27[1] + 0xfc);
                  uVar22 = func_0x0249f90c(*(long *)(lVar17 + 0x10),*(undefined8 *)(*plVar27 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x2f4),uVar22,puVar46);
                  uVar22 = 0;
                  func_0x034b666c(puVar15,pcVar43,*(undefined4 *)((long)puVar21 + -0x2f4),0);
                  puVar42 = puVar15;
                  if (*(long *)(lVar17 + 0x10) != 0) {
                    plVar27 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    puVar46 = (undefined *)(ulong)*(uint *)(plVar27[1] + 0xfc);
                    uVar22 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                             *(undefined8 *)(*plVar27 + 0x80));
                    func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x2f4),uVar22,puVar46);
                    uVar22 = 0;
                    func_0x034b676c(puVar15,pcVar43,*(undefined4 *)((long)puVar21 + -0x2f4),0);
                    if (*(long *)(lVar17 + 0x10) != 0) {
                      plVar27 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      puVar46 = (undefined *)(ulong)*(uint *)(plVar27[1] + 0xfc);
                      uVar22 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                               *(undefined8 *)(*plVar27 + 0x80));
                      func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x2f4),uVar22,puVar46);
                      uVar22 = 0;
                      func_0x034b6ccc(puVar15,pcVar43,*(undefined4 *)((long)puVar21 + -0x2f4),0);
                      if (*(long *)(lVar17 + 0x10) != 0) {
                        plVar27 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        pcVar43 = (code *)(ulong)*(uint *)(plVar27[1] + 0xfc);
                        uVar22 = func_0x0249f90c(*(long *)(lVar17 + 0x10),
                                                 *(undefined8 *)(*plVar27 + 0x80));
                        func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x2f4),uVar22,pcVar43);
                        uVar22 = 0;
                        func_0x034b6dc0(puVar15,uVar31,*(undefined4 *)((long)puVar21 + -0x2f4),0);
                        plVar27 = *(long **)(lVar17 + 0x10);
                        if (plVar27 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          pcVar43 = (code *)(**(code **)(*plVar27 + 0x1c8))
                                                      (plVar27,uVar31,
                                                       *(undefined8 *)(*plVar27 + 0x1d0));
                          return pcVar43;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar49 = func_0x0249fb90();
            plVar27 = auVar49._8_8_;
            *(undefined8 *)((long)puVar21 + -800) = 0x36e30d4;
            *(undefined8 *)((long)puVar21 + -0x318) = uVar32;
            *(code **)((long)puVar21 + -0x310) = pcVar43;
            *(long *)((long)puVar21 + -0x308) = lVar17;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar27 != (long *)0x0) {
              lVar17 = *plVar27;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                    puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df8e8,5);
LAB_036e3178:
              uVar32 = (*(code *)*puVar19)(plVar27,puVar19[1]);
              plVar27 = *(long **)(auVar49._0_8_ + 0x10);
              if (plVar27 != (long *)0x0) {
                plVar27 = (long *)(**(code **)(*plVar27 + 0x1c8))
                                            (plVar27,uVar32,*(undefined8 *)(*plVar27 + 0x1d0));
                if (plVar27 == (long *)0x0) {
                  return (code *)0x1;
                }
                lVar17 = *plVar27;
                auVar49._8_8_ = &DAT_059dfbc0;
                auVar49._0_8_ = plVar27;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                      puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar17 = (*(code *)*puVar19)(plVar27,puVar19[1]);
                if (lVar17 == 0) {
                  return (code *)0x1;
                }
                lVar17 = *plVar27;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                      puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar27 = (long *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                if (plVar27 != (long *)0x0) {
                  lVar17 = *plVar27;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar41 + -2) == _DAT_059df2a8) {
                        puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar18 = uVar18 - 1;
                      piVar41 = piVar41 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar43 = (code *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                  return pcVar43;
                }
              }
            }
            auVar50 = func_0x0249fb90();
            plVar27 = auVar50._8_8_;
            *(undefined8 *)((long)puVar21 + -0x340) = 0x36e32f4;
            *(undefined8 *)((long)puVar21 + -0x338) = 0x5e2d000;
            *(long *)((long)puVar21 + -0x330) = auVar49._8_8_;
            *(long *)((long)puVar21 + -0x328) = auVar49._0_8_;
            if ((bRam0000000005e2da65 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da65 = 1;
            }
            if (plVar27 != (long *)0x0) {
              lVar17 = *plVar27;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                    puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df8e8,5);
LAB_036e3398:
              uVar32 = (*(code *)*puVar19)(plVar27,puVar19[1]);
              plVar27 = *(long **)(auVar50._0_8_ + 0x10);
              if (plVar27 != (long *)0x0) {
                plVar27 = (long *)(**(code **)(*plVar27 + 0x1c8))
                                            (plVar27,uVar32,*(undefined8 *)(*plVar27 + 0x1d0));
                if (plVar27 == (long *)0x0) {
                  return (code *)0x0;
                }
                lVar17 = *plVar27;
                auVar50._8_8_ = &DAT_059dfbc0;
                auVar50._0_8_ = plVar27;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                      puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar17 = (*(code *)*puVar19)(plVar27,puVar19[1]);
                if (lVar17 == 0) {
                  return (code *)0x0;
                }
                lVar17 = *plVar27;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                      puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar27 = (long *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                if (plVar27 != (long *)0x0) {
                  lVar17 = *plVar27;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar41 + -2) == _DAT_059df2a8) {
                        puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar18 = uVar18 - 1;
                      piVar41 = piVar41 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar43 = (code *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                  return pcVar43;
                }
              }
            }
            auVar51 = func_0x0249fb90();
            plVar27 = auVar51._8_8_;
            lVar17 = auVar51._0_8_;
            *(undefined8 *)((long)puVar21 + -0x370) = 0x36e3514;
            *(undefined **)((long)puVar21 + -0x360) = puVar42;
            *(undefined8 *)((long)puVar21 + -0x358) = 0x5e2d000;
            *(long *)((long)puVar21 + -0x350) = auVar50._8_8_;
            *(long *)((long)puVar21 + -0x348) = auVar50._0_8_;
            lVar38 = 0x5e2d000;
            if ((bRam0000000005e2da66 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da66 = 1;
            }
            lVar39 = func_0x036d5e58(lVar17);
            if (lVar39 != 0) {
              lVar38 = *(long *)(lVar39 + 0x20);
              puVar42 = &DAT_059dfbc0;
              if (lVar38 != 0) {
                if (plVar27 == (long *)0x0) goto LAB_036e3670;
                lVar39 = *plVar27;
                uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                      puVar19 = (undefined8 *)(lVar39 + (long)*piVar41 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar32 = (*(code *)*puVar19)(plVar27,puVar19[1]);
                func_0x03704ea8(lVar38,uVar32,0);
              }
              pcVar43 = (code *)func_0x036d5e58(lVar17);
              if (pcVar43 != (code *)0x0) {
                lVar17 = *(long *)(pcVar43 + 0x18);
                if (lVar17 == 0) {
                  return pcVar43;
                }
                if (plVar27 != (long *)0x0) {
                  lVar38 = *plVar27;
                  uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                  if (uVar18 != 0) {
                    piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                        puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar18 = uVar18 - 1;
                      piVar41 = piVar41 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059dfbc0,3);
LAB_036e3648:
                  plVar27 = (long *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                  uVar31 = 0;
                  uVar32 = *(undefined8 *)((long)puVar21 + -0x360);
                  *(undefined8 *)((long)puVar21 + -0x380) = *(undefined8 *)((long)puVar21 + -0x370);
                  *(code **)((long)puVar21 + -0x370) = pcVar20;
                  *(undefined **)((long)puVar21 + -0x368) = puVar46;
                  *(undefined8 *)((long)puVar21 + -0x360) = uVar32;
                  *(undefined8 *)((long)puVar21 + -0x358) = *(undefined8 *)((long)puVar21 + -0x358);
                  *(undefined8 *)((long)puVar21 + -0x350) = *(undefined8 *)((long)puVar21 + -0x350);
                  *(undefined8 *)((long)puVar21 + -0x348) = *(undefined8 *)((long)puVar21 + -0x348);
                  uVar18 = 0x5e2d000;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (plVar27 != (long *)0x0) {
                    lVar38 = *plVar27;
                    uVar18 = (ulong)*(uint *)(lVar17 + 0x14);
                    uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
                    if (uVar40 != 0) {
                      piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar41 + -2) == _DAT_059deb70) {
                          puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                          goto LAB_037548ac;
                        }
                        uVar40 = uVar40 - 1;
                        piVar41 = piVar41 + 4;
                      } while (uVar40 != 0);
                    }
                    uVar31 = 2;
                    puVar19 = (undefined8 *)func_0x024d927c(plVar27);
LAB_037548ac:
                    plVar29 = (long *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                    if (plVar29 != (long *)0x0) {
                      lVar38 = *plVar29;
                      uVar11 = *(undefined4 *)(lVar17 + 0x70);
                      uVar1 = *(undefined4 *)(lVar17 + 0x10);
                      uVar2 = *(undefined1 *)(lVar17 + 0x94);
                      uVar40 = (ulong)*(ushort *)(lVar38 + 0x12e);
                      if (uVar40 != 0) {
                        piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar41 + -2) == _DAT_059deb60) {
                            puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar40 = uVar40 - 1;
                          piVar41 = piVar41 + 4;
                        } while (uVar40 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar11 = (*(code *)*puVar19)(plVar29,CONCAT44(uVar11,uVar1),uVar2,puVar19[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      pcVar43 = (code *)func_0x045a9bd0(uVar18,uVar11,0);
                      *(int *)(lVar17 + 0x14) = (int)pcVar43;
                      return pcVar43;
                    }
                  }
                  auVar51 = func_0x0249fb90();
                  plVar29 = auVar51._8_8_;
                  lVar38 = auVar51._0_8_;
                  *(undefined8 *)((long)puVar21 + -0x3b0) = 0x3754988;
                  *(undefined **)((long)puVar21 + -0x3a8) = puVar46;
                  *(undefined8 *)((long)puVar21 + -0x3a0) = uVar32;
                  *(long **)((long)puVar21 + -0x398) = plVar27;
                  *(ulong *)((long)puVar21 + -0x390) = uVar18;
                  *(long *)((long)puVar21 + -0x388) = lVar17;
                  uVar32 = uVar31;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar29 != (long *)0x0) {
                    lVar17 = *plVar29;
                    iVar14 = *(int *)(lVar38 + 0x90);
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar41 + -2) == _DAT_059deb78) {
                          puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar18 = uVar18 - 1;
                        piVar41 = piVar41 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb78,2);
LAB_03754a3c:
                    pcVar43 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                    if (iVar14 < (int)pcVar43) {
                      uVar22 = func_0x03530c84(uVar31,0);
                      lVar17 = *plVar29;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar41 + -2) == _DAT_059deb78) {
                            puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar18 = uVar18 - 1;
                          piVar41 = piVar41 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb78,0);
LAB_03754aac:
                      uVar32 = (*(code *)*puVar19)(plVar29,puVar19[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      uVar22 = func_0x0430d994(uVar22,uVar32,0);
                      *(undefined8 *)((long)puVar21 + -0x3b8) = uVar22;
                      *(undefined8 *)((long)puVar21 + -0x3d0) = 0;
                      *(undefined8 *)((long)puVar21 + -0x3c8) = 0;
                      pcVar43 = (code *)func_0x028866e4((undefined1 *)((long)puVar21 + -0x3d0),
                                                        (undefined1 *)((long)puVar21 + -0x3b8),
                                                        _DAT_05a27fa0);
                      uVar22 = *(undefined8 *)((long)puVar21 + -0x3d0);
                      *(undefined8 *)(lVar38 + 0x88) = *(undefined8 *)((long)puVar21 + -0x3c8);
                      *(undefined8 *)(lVar38 + 0x80) = uVar22;
                    }
                    return pcVar43;
                  }
                  auVar51 = func_0x0249fb90();
                  lVar17 = auVar51._0_8_;
                  *(undefined8 *)((long)puVar21 + -0x400) = 0x3754b28;
                  *(undefined **)((long)puVar21 + -0x3f8) = puVar46;
                  *(undefined8 *)((long)puVar21 + -0x3f0) = 0x5e2d000;
                  *(undefined8 *)((long)puVar21 + -1000) = uVar31;
                  *(undefined8 *)((long)puVar21 + -0x3e0) = 0;
                  *(long *)((long)puVar21 + -0x3d8) = lVar38;
                  *(long *)((long)puVar21 + -0x418) = auVar51._8_8_;
                  *(undefined8 *)((long)puVar21 + -0x410) = uVar32;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    bRam0000000005e2de67 = 1;
                  }
                  iVar14 = *(int *)(_DAT_059d3fd0 + 0xe4);
                  *(undefined8 *)((long)puVar21 + -0x420) = 0;
                  if (iVar14 == 0) {
                    func_0x0249fa64();
                  }
                  pcVar43 = (code *)func_0x0288eda8((undefined1 *)((long)puVar21 + -0x418),
                                                    (undefined1 *)((long)puVar21 + -0x420),
                                                    _DAT_05a29960);
                  if (((ulong)pcVar43 & 1) == 0) {
                    *(undefined4 *)(lVar17 + 0x90) = 0;
                    return pcVar43;
                  }
                  plVar27 = *(long **)((long)puVar21 + -0x420);
                  iVar14 = *(int *)(lVar17 + 0x90) + 1;
                  *(int *)(lVar17 + 0x90) = iVar14;
                  if (plVar27 != (long *)0x0) {
                    lVar38 = *plVar27;
                    uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                    if (uVar18 != 0) {
                      piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar41 + -2) == _DAT_059deb78) {
                          puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar18 = uVar18 - 1;
                        piVar41 = piVar41 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059deb78,2);
LAB_03754c40:
                    iVar12 = (*(code *)*puVar19)(plVar27,puVar19[1]);
                    if (iVar14 < iVar12) {
                      uVar22 = func_0x03530c84(uVar22,0);
                      plVar27 = *(long **)((long)puVar21 + -0x420);
                      if (plVar27 != (long *)0x0) {
                        lVar38 = *plVar27;
                        uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                        if (uVar18 != 0) {
                          piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == _DAT_059deb78) {
                              puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar18 = uVar18 - 1;
                            piVar41 = piVar41 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059deb78,1);
LAB_03754d04:
                        uVar32 = (*(code *)*puVar19)(plVar27,puVar19[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uVar22 = func_0x0430d994(uVar22,uVar32,0);
                        *(undefined8 *)((long)puVar21 + -0x408) = uVar22;
                        *(undefined8 *)((long)puVar21 + -0x430) = 0;
                        *(undefined8 *)((long)puVar21 + -0x428) = 0;
                        pcVar43 = (code *)func_0x028866e4((undefined1 *)((long)puVar21 + -0x430),
                                                          (undefined1 *)((long)puVar21 + -0x408),
                                                          _DAT_05a27fa0);
                        uVar22 = *(undefined8 *)((long)puVar21 + -0x430);
                        *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)((long)puVar21 + -0x428);
                        *(undefined8 *)(lVar17 + 0x80) = uVar22;
                        return pcVar43;
                      }
                    }
                    else {
                      plVar27 = *(long **)((long)puVar21 + -0x420);
                      if (plVar27 != (long *)0x0) {
                        lVar38 = *plVar27;
                        uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                        if (uVar18 != 0) {
                          piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == _DAT_059deb78) {
                              puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d7c;
                            }
                            uVar18 = uVar18 - 1;
                            piVar41 = piVar41 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059deb78,2);
LAB_03754d7c:
                        pcVar43 = (code *)(*(code *)*puVar19)(plVar27,puVar19[1]);
                        *(undefined8 *)(lVar17 + 0x80) = 0;
                        *(undefined8 *)(lVar17 + 0x88) = 0;
                        *(int *)(lVar17 + 0x90) = (int)pcVar43;
                        return pcVar43;
                      }
                    }
                  }
                  pcVar43 = (code *)func_0x0249fb90();
                  return pcVar43;
                }
              }
            }
LAB_036e3670:
            auVar51 = func_0x0249fb90();
            *(undefined8 *)((long)puVar21 + -0x3a0) = 0x36e3674;
            *(undefined **)((long)puVar21 + -0x390) = puVar42;
            *(long *)((long)puVar21 + -0x388) = lVar38;
            *(long *)((long)puVar21 + -0x380) = lVar17;
            *(long **)((long)puVar21 + -0x378) = plVar27;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar17 = *(long *)(auVar51._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar21 + -0x3a0) = *(undefined8 *)((long)puVar21 + -0x3a0);
            *(undefined8 *)((long)puVar21 + -0x390) = *(undefined8 *)((long)puVar21 + -0x390);
            *(undefined8 *)((long)puVar21 + -0x388) = *(undefined8 *)((long)puVar21 + -0x388);
            *(undefined8 *)((long)puVar21 + -0x380) = *(undefined8 *)((long)puVar21 + -0x380);
            *(undefined8 *)((long)puVar21 + -0x378) = *(undefined8 *)((long)puVar21 + -0x378);
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar17,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar21 + -0x398) = 0;
            func_0x042539d4((undefined1 *)((long)puVar21 + -0x398),auVar51._8_8_ - lVar17,0);
            return *(code **)((long)puVar21 + -0x398);
          }
        }
      }
    }
  }
  uVar22 = 0x37820e8;
  auVar51 = func_0x0249fb90();
LAB_037820e8:
  lVar38 = auVar51._8_8_;
  plVar27 = auVar51._0_8_;
  puVar21 = (undefined8 *)((long)puVar19 + -0x40);
  *(undefined8 *)((long)puVar19 + -0x40) = uVar22;
  *(code **)((long)puVar19 + -0x38) = pcVar47;
  *(code **)((long)puVar19 + -0x30) = pcVar20;
  *(code **)((long)puVar19 + -0x28) = pcVar36;
  *(code **)((long)puVar19 + -0x20) = pcVar44;
  *(ulong *)((long)puVar19 + -0x18) = uVar18;
  *(code **)((long)puVar19 + -0x10) = pcVar35;
  *(code **)((long)puVar19 + -8) = pcVar28;
  lVar17 = 0x5e2d000;
  pcVar43 = pcVar33;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
    pcVar43 = pcVar33;
  }
  if (lVar38 != 0) {
    lVar17 = func_0x036d5ec8(lVar38,0);
    pcVar44 = (code *)func_0x036d5f00(lVar38,0);
    if (plVar27 != (long *)0x0) {
      lVar39 = *plVar27;
      pcVar20 = (code *)&DAT_059df8e8;
      uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar18 != 0) {
        piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
            puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar18 = uVar18 - 1;
          piVar41 = piVar41 + 4;
        } while (uVar18 != 0);
      }
      puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df8e8,5);
LAB_037821d0:
      uVar22 = (*(code *)*puVar19)(plVar27,puVar19[1]);
      pcVar37 = (code *)0x0;
      pcVar28 = (code *)func_0x036d3908(lVar38,uVar22);
      pcVar35 = pcVar44;
      if (pcVar28 != (code *)0x0) {
        lVar39 = *(long *)pcVar28;
        uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
              puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 3) * 0x10 + 0x138);
              goto LAB_0378224c;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        pcVar37 = (code *)0x3;
        puVar19 = (undefined8 *)func_0x024d927c(pcVar28);
LAB_0378224c:
        plVar29 = (long *)(*(code *)*puVar19)(pcVar28,puVar19[1]);
        pcVar36 = pcVar28;
        if (plVar29 != (long *)0x0) {
          lVar39 = *plVar29;
          uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059deb70) {
                puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb70,2);
LAB_037822b8:
          pcVar47 = (code *)&DAT_059e1498;
          pcVar36 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
          lVar39 = *plVar27;
          uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
                puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df8e8,5);
LAB_03782320:
          uVar22 = (*(code *)*puVar19)(plVar27,puVar19[1]);
          uVar22 = func_0x036d3908(lVar38,uVar22,0);
          auVar5._8_8_ = uVar22;
          auVar5._0_8_ = plVar27;
          auVar51._8_8_ = uVar22;
          auVar51._0_8_ = plVar27;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pcVar37 = (code *)0x0;
          uVar13 = func_0x036c47c0(uVar22,plVar27);
          if ((lVar17 != 0) && (auVar51 = auVar5, pcVar36 != (code *)0x0)) {
            pcVar47 = (code *)&DAT_059deb60;
            lVar38 = *(long *)pcVar36;
            pcVar37 = (code *)(ulong)*(byte *)(lVar17 + 0x94);
            auVar51[8] = *(byte *)(lVar17 + 0x94);
            auVar51._0_8_ = CONCAT44(0,uVar13);
            auVar51._9_7_ = 0;
            uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
            pcVar20 = (code *)CONCAT44(*(undefined4 *)(lVar17 + 0x70),*(undefined4 *)(lVar17 + 0x10)
                                      );
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == _DAT_059deb60) {
                  puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 0xd) * 0x10 + 0x138);
                  goto LAB_037823d8;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059deb60,0xd);
LAB_037823d8:
            pcVar43 = (code *)puVar19[1];
            iVar14 = (*(code *)*puVar19)(pcVar36,pcVar20);
            if (pcVar44 != (code *)0x0) {
              func_0x03700d78(pcVar44,(uVar13 - *(int *)(pcVar44 + 0x10)) - iVar14,
                              CONCAT44(0,uVar13),0);
              *(undefined4 *)(lVar17 + 0x38) = 0;
              uVar11 = *(undefined4 *)(lVar17 + 0x10);
              uVar1 = *(undefined4 *)(lVar17 + 0x70);
              lVar38 = *(long *)pcVar36;
              uVar2 = *(undefined1 *)(lVar17 + 0x94);
              uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059deb60) {
                    puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 0xd) * 0x10 + 0x138);
                    goto LAB_0378246c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(pcVar36,_DAT_059deb60,0xd);
LAB_0378246c:
              pcVar43 = (code *)(*(code *)*puVar19)(pcVar36,CONCAT44(uVar1,uVar11),uVar2,puVar19[1])
              ;
              *(int *)(lVar17 + 0x14) = (int)pcVar43 + -1;
              return pcVar43;
            }
          }
        }
      }
    }
  }
  uVar22 = 0x37824a0;
  auVar54 = func_0x0249fb90();
LAB_037824a0:
  plVar29 = auVar51._8_8_;
  lVar38 = auVar54._8_8_;
  plVar27 = auVar54._0_8_;
  *(undefined8 *)((long)puVar21 + -0x40) = uVar22;
  *(code **)((long)puVar21 + -0x30) = pcVar20;
  *(code **)((long)puVar21 + -0x28) = pcVar36;
  *(long **)((long)puVar21 + -0x20) = plVar29;
  *(long *)((long)puVar21 + -0x18) = auVar51._0_8_;
  *(code **)((long)puVar21 + -0x10) = pcVar35;
  *(long *)((long)puVar21 + -8) = lVar17;
  lVar17 = 0x5e2d000;
  if ((bRam0000000005e2df9c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9c = 1;
  }
  if (plVar27 != (long *)0x0) {
    lVar39 = *plVar27;
    uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
          puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    pcVar37 = (code *)0x5;
    puVar19 = (undefined8 *)func_0x024d927c(plVar27);
LAB_03782564:
    uVar22 = (*(code *)*puVar19)(plVar27,puVar19[1]);
    if (lVar38 != 0) {
      pcVar37 = (code *)0x0;
      pcVar36 = (code *)func_0x036d3908(lVar38,uVar22);
      lVar17 = func_0x036d5ee4(lVar38,0);
      lVar38 = func_0x036d5f1c(lVar38,0);
      auVar7._8_8_ = lVar38;
      auVar7._0_8_ = plVar27;
      auVar6._8_8_ = lVar38;
      auVar6._0_8_ = plVar27;
      if (pcVar36 != (code *)0x0) {
        lVar39 = *(long *)pcVar36;
        uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
              puVar19 = (undefined8 *)(lVar39 + (long)*piVar41 * 0x10 + 0x138);
              goto LAB_03782600;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        pcVar37 = (code *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(pcVar36);
LAB_03782600:
        plVar30 = (long *)(*(code *)*puVar19)(pcVar36,puVar19[1]);
        auVar54 = auVar6;
        if (plVar30 != (long *)0x0) {
          lVar39 = *plVar30;
          uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
          pcVar20 = (code *)&DAT_059e1498;
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059e0788) {
                puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0788,2);
LAB_03782674:
          plVar29 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pcVar37 = (code *)0x0;
          uVar13 = func_0x036c49d4(pcVar36,plVar27);
          auVar54 = auVar7;
          if (plVar29 != (long *)0x0) {
            lVar39 = *plVar29;
            pcVar44 = (code *)CONCAT44(0,uVar13);
            auVar8._8_8_ = lVar38;
            auVar8._0_8_ = pcVar44;
            auVar54._8_8_ = lVar38;
            auVar54._0_8_ = pcVar44;
            pcVar36 = (code *)&DAT_059e0780;
            uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == _DAT_059e0780) {
                  puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            pcVar37 = (code *)0x7;
            puVar19 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03782708:
            iVar14 = (*(code *)*puVar19)(plVar29,puVar19[1]);
            if (lVar38 != 0) {
              pcVar43 = (code *)0x0;
              func_0x03700d78(lVar38,(uVar13 - *(int *)(lVar38 + 0x10)) - iVar14);
              pcVar37 = pcVar44;
              auVar54 = auVar8;
              if (lVar17 != 0) {
                func_0x03704850(lVar17,0);
                lVar38 = *plVar29;
                uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059e0780) {
                      puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059e0780,2);
LAB_03782794:
                pcVar43 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                *(int *)(lVar17 + 0x14) = (int)pcVar43 + -1;
                return pcVar43;
              }
            }
          }
        }
      }
    }
  }
  auVar51 = func_0x0249fb90();
  uVar32 = auVar51._8_8_;
  uVar22 = auVar51._0_8_;
  *(code **)((long)puVar21 + -0x80) = unaff_x29;
  *(undefined8 *)((long)puVar21 + -0x78) = 0x37827c0;
  *(code **)((long)puVar21 + -0x70) = pcVar20;
  *(code **)((long)puVar21 + -0x68) = pcVar36;
  *(long **)((long)puVar21 + -0x60) = plVar29;
  *(long *)((long)puVar21 + -0x58) = auVar54._8_8_;
  *(long *)((long)puVar21 + -0x50) = auVar54._0_8_;
  *(long *)((long)puVar21 + -0x48) = lVar17;
  pcVar36 = pcVar37;
  pcVar44 = pcVar43;
  pcVar35 = param_3;
  if ((bRam0000000005e2df9d & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2df9d = 1;
  }
  plVar29 = (long *)func_0x0376e450(uVar22,uVar32);
  plVar27 = (long *)0x5e2d000;
  if (plVar29 == (long *)0x0) {
LAB_037829b0:
    uVar31 = 0x37829b4;
    auVar51 = func_0x0249fb90();
  }
  else {
    pcVar36 = (code *)0x0;
    pcVar20 = (code *)func_0x036d9cf8(plVar29,pcVar43);
    if (((ulong)pcVar20 & 1) == 0) {
      return pcVar20;
    }
    plVar27 = plVar29;
    if (pcVar43 == (code *)0x0) goto LAB_037829b0;
    lVar17 = *(long *)pcVar43;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
          puVar19 = (undefined8 *)(lVar17 + (long)(*piVar41 + 5) * 0x10 + 0x138);
          goto LAB_03782894;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    puVar19 = (undefined8 *)func_0x024d927c(pcVar43,_DAT_059df8e8,5);
LAB_03782894:
    uVar31 = (*(code *)*puVar19)(pcVar43,puVar19[1]);
    pcVar36 = (code *)func_0x036eb4a0(plVar29,uVar31,0);
    if (((ulong)pcVar36 & 1) == 0) {
      return pcVar36;
    }
    uVar31 = 0x37828c8;
    pcVar36 = pcVar43;
    pcVar44 = pcVar37;
  }
  uVar16 = auVar51._8_8_;
  lVar17 = auVar51._0_8_;
  *(undefined8 *)((long)puVar21 + -0x1e0) = uVar31;
  *(undefined **)((long)puVar21 + -0x1d0) = unaff_x28;
  *(undefined **)((long)puVar21 + -0x1c8) = unaff_x27;
  *(code **)((long)puVar21 + -0x1c0) = unaff_x26;
  *(code **)((long)puVar21 + -0x1b8) = pcVar47;
  *(long **)((long)puVar21 + -0x1b0) = plVar27;
  *(undefined8 *)((long)puVar21 + -0x1a8) = uVar22;
  *(code **)((long)puVar21 + -0x1a0) = pcVar43;
  *(undefined8 *)((long)puVar21 + -0x198) = uVar32;
  *(code **)((long)puVar21 + -400) = pcVar37;
  *(code **)((long)puVar21 + -0x188) = param_3;
  pcVar43 = pcVar36;
  pcVar37 = pcVar44;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfb7 = 1;
  }
  pcVar28 = (code *)func_0x0376e450(lVar17,uVar16);
  pcVar20 = (code *)0x5e2d000;
  if (pcVar36 != (code *)0x0) {
    lVar38 = *(long *)pcVar36;
    uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar18 != 0) {
      piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
          puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 5) * 0x10 + 0x138);
          goto LAB_03782a98;
        }
        uVar18 = uVar18 - 1;
        piVar41 = piVar41 + 4;
      } while (uVar18 != 0);
    }
    pcVar43 = (code *)0x5;
    puVar19 = (undefined8 *)func_0x024d927c(pcVar36);
LAB_03782a98:
    uVar22 = (*(code *)*puVar19)(pcVar36,puVar19[1]);
    pcVar20 = pcVar28;
    if (pcVar28 != (code *)0x0) {
      pcVar43 = (code *)0x0;
      plVar29 = (long *)func_0x036d3908(pcVar28,uVar22);
      if (plVar29 != (long *)0x0) {
        lVar38 = *plVar29;
        unaff_x27 = &DAT_059dfbc0;
        uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
              puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        pcVar43 = (code *)0x2;
        puVar19 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03782b18:
        pcVar33 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
        plVar27 = plVar29;
        if (pcVar33 != (code *)0x0) {
          lVar38 = *(long *)pcVar33;
          unaff_x28 = &DAT_059dfe38;
          uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059dfe38) {
                puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                goto LAB_03782b84;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          pcVar43 = (code *)0x2;
          puVar19 = (undefined8 *)func_0x024d927c(pcVar33);
LAB_03782b84:
          pcVar47 = (code *)(*(code *)*puVar19)(pcVar33,puVar19[1]);
          if (((ulong)pcVar47 & 1) == 0) {
            return pcVar47;
          }
          pcVar23 = (code *)func_0x036d5ffc(pcVar28,0);
          pcVar47 = pcVar33;
          if (pcVar23 != (code *)0x0) {
            unaff_x26 = *(code **)(lVar17 + 0x30);
            uVar18 = func_0x036d392c(pcVar28,0);
            pcVar37 = (code *)(uVar18 & 0xffffffff);
            pcVar35 = (code *)0x0;
            pcVar43 = unaff_x26;
            func_0x0374def0(pcVar23,pcVar36);
            pcVar47 = pcVar23;
          }
          lVar38 = *plVar29;
          uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          pcVar43 = (code *)0x2;
          puVar19 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03782c20:
          plVar29 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
          if (plVar29 != (long *)0x0) {
            lVar38 = *plVar29;
            uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == _DAT_059dfe38) {
                  puVar19 = (undefined8 *)(lVar38 + (long)*piVar41 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            pcVar43 = (code *)0x0;
            puVar19 = (undefined8 *)func_0x024d927c(plVar29);
LAB_03782c80:
            plVar30 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
            plVar27 = plVar29;
            if (plVar30 != (long *)0x0) {
              lVar38 = *plVar30;
              uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059dfe68) {
                    puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfe68,1);
LAB_03782cec:
              pcVar37 = pcVar28;
              pcVar35 = pcVar28;
              pcVar43 = (code *)(*(code *)*puVar19)(plVar30,pcVar36,lVar17,pcVar28,pcVar28,pcVar44,
                                                    puVar19[1]);
              if ((pcVar43 == (code *)0x0) || (*(long *)pcVar43 == _DAT_059e2700)) {
                func_0x037743ac(lVar17,uVar16);
                pcVar43 = (code *)func_0x03530c84(pcVar44,0);
                *(code **)(lVar17 + 0x20) = pcVar43;
                return pcVar43;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar30 = plVar27;
  func_0x0249fb90();
LAB_03782d68:
  auVar51 = func_0x0249ff10(pcVar43);
  plVar27 = auVar51._8_8_;
  lVar38 = auVar51._0_8_;
  *(code **)((long)puVar21 + -0x240) = unaff_x29;
  *(undefined8 *)((long)puVar21 + -0x230) = 0x3782d70;
  *(undefined **)((long)puVar21 + -0x228) = unaff_x27;
  *(code **)((long)puVar21 + -0x220) = unaff_x26;
  *(code **)((long)puVar21 + -0x218) = pcVar47;
  *(long **)((long)puVar21 + -0x210) = plVar30;
  *(code **)((long)puVar21 + -0x208) = pcVar20;
  *(code **)((long)puVar21 + -0x200) = pcVar36;
  *(undefined8 *)((long)puVar21 + -0x1f8) = uVar16;
  *(long *)((long)puVar21 + -0x1f0) = lVar17;
  *(code **)((long)puVar21 + -0x1e8) = pcVar44;
  pcVar36 = pcVar43;
  pcVar44 = pcVar37;
  pcVar20 = pcVar35;
  if ((bRam0000000005e2df9e & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2df9e = 1;
  }
  *(undefined8 *)((long)puVar21 + -0x238) = 0;
  lVar17 = func_0x0376e450(lVar38,pcVar43);
  pcVar28 = (code *)0x0;
  if (lVar17 != 0) {
    pcVar28 = (code *)func_0x036d06d8(lVar17,0);
    if (((ulong)pcVar28 & 1) != 0) {
      pcVar28 = (code *)func_0x036d5f70(lVar17,0);
      if (plVar27 != (long *)0x0) {
        lVar39 = *plVar27;
        uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar18 != 0) {
          piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar41 + -2) == _DAT_059df8e8) {
              puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 5) * 0x10 + 0x138);
              goto LAB_03782e80;
            }
            uVar18 = uVar18 - 1;
            piVar41 = piVar41 + 4;
          } while (uVar18 != 0);
        }
        puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059df8e8,5);
LAB_03782e80:
        uVar22 = (*(code *)*puVar19)(plVar27,puVar19[1]);
        pcVar36 = (code *)0x0;
        pcVar33 = (code *)func_0x036d3908(lVar17,uVar22);
        unaff_x26 = pcVar28;
        if (pcVar33 != (code *)0x0) {
          lVar39 = *(long *)pcVar33;
          uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
          if (uVar18 != 0) {
            piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
            do {
              if (*(long *)(piVar41 + -2) == _DAT_059dfbc0) {
                puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 6) * 0x10 + 0x138);
                goto LAB_03782efc;
              }
              uVar18 = uVar18 - 1;
              piVar41 = piVar41 + 4;
            } while (uVar18 != 0);
          }
          pcVar36 = (code *)0x6;
          puVar19 = (undefined8 *)func_0x024d927c(pcVar33);
LAB_03782efc:
          plVar29 = (long *)(*(code *)*puVar19)(pcVar33,puVar19[1]);
          pcVar47 = pcVar33;
          if ((pcVar28 != (code *)0x0) && (unaff_x27 = (undefined *)0x0, plVar29 != (long *)0x0)) {
            lVar39 = *plVar29;
            lVar48 = *(long *)(pcVar28 + 0x28);
            uVar18 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == _DAT_059df030) {
                  puVar19 = (undefined8 *)(lVar39 + (long)(*piVar41 + 9) * 0x10 + 0x138);
                  goto LAB_03782f70;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059df030,9);
LAB_03782f70:
            uVar18 = (*(code *)*puVar19)(plVar29,plVar27,lVar48,puVar19[1]);
            func_0x0374a538((undefined1 *)((long)puVar21 + -0x238),uVar18,uVar18 >> 0x20,0);
            func_0x036e1be4(lVar17,0);
            pcVar36 = (code *)func_0x03530c84(pcVar37,0);
            *(code **)(lVar38 + 0x20) = pcVar36;
            if (pcVar35 == (code *)0x0) {
              return pcVar36;
            }
            *(undefined8 *)((long)puVar21 + -0x298) = *(undefined8 *)((long)puVar21 + -0x238);
            uVar22 = func_0x0249fa6c(_DAT_059d9ea8,(undefined1 *)((long)puVar21 + -0x298));
            *(undefined8 *)((long)puVar21 + -0x350) = 0;
            *(undefined8 *)((long)puVar21 + -0x2d8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2e0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2c8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2d0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2b8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar21 + -0x2e8) = 0;
            *(undefined8 *)((long)puVar21 + -0x2f0) = 0;
            func_0x034ba874((undefined1 *)((long)puVar21 + -0x2f0),7,pcVar43,pcVar43,pcVar37,pcVar33
                            ,0,uVar22);
            lVar17 = _DAT_059c9978;
            func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x340),
                            (undefined1 *)((long)puVar21 + -0x2f0),0x50);
            lVar38 = *(long *)pcVar35;
            uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == lVar17) {
                  puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                  goto LAB_0378307c;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(pcVar35,lVar17,2);
LAB_0378307c:
            pcVar43 = (code *)*puVar19;
            func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x290),
                            (undefined1 *)((long)puVar21 + -0x340),0x50);
            pcVar43 = (code *)(*pcVar43)(pcVar35,(undefined1 *)((long)puVar21 + -0x290),puVar19[1]);
            return pcVar43;
          }
        }
      }
      auVar51 = func_0x0249fb90();
      lVar39 = auVar51._0_8_;
      *(code **)((long)puVar21 + -0x3a0) = unaff_x29;
      *(undefined8 *)((long)puVar21 + -0x390) = 0x37830c4;
      *(code **)((long)puVar21 + -0x388) = pcVar47;
      *(long *)((long)puVar21 + -0x380) = lVar17;
      *(long **)((long)puVar21 + -0x378) = plVar27;
      *(long *)((long)puVar21 + -0x370) = lVar38;
      *(code **)((long)puVar21 + -0x368) = pcVar43;
      *(code **)((long)puVar21 + -0x360) = pcVar37;
      *(code **)((long)puVar21 + -0x358) = pcVar35;
      if ((bRam0000000005e2df9f & 1) == 0) {
        func_0x0249f8e4(&DAT_059c9978);
        bRam0000000005e2df9f = 1;
      }
      pcVar43 = (code *)func_0x0376e450(lVar39,pcVar36);
      pcVar37 = (code *)0x0;
      if (pcVar43 != (code *)0x0) {
        pcVar37 = (code *)func_0x036e21f8(pcVar43,0);
        if (((ulong)pcVar37 & 1) != 0) {
          func_0x036d7cb4(pcVar43,pcVar44,auVar51._8_8_,lVar39,pcVar36,0);
          uVar22 = func_0x03530c84(pcVar44,0);
          *(undefined8 *)(lVar39 + 0x20) = uVar22;
          *(undefined8 *)((long)puVar21 + -0x4a0) = 0;
          *(undefined8 *)((long)puVar21 + -0x428) = 0;
          *(undefined8 *)((long)puVar21 + -0x430) = 0;
          *(undefined8 *)((long)puVar21 + -0x418) = 0;
          *(undefined8 *)((long)puVar21 + -0x420) = 0;
          *(undefined8 *)((long)puVar21 + -0x408) = 0;
          *(undefined8 *)((long)puVar21 + -0x410) = 0;
          *(undefined8 *)((long)puVar21 + -0x3f8) = 0;
          *(undefined8 *)((long)puVar21 + -0x400) = 0;
          *(undefined8 *)((long)puVar21 + -0x438) = 0;
          *(undefined8 *)((long)puVar21 + -0x440) = 0;
          pcVar37 = pcVar36;
          pcVar35 = pcVar36;
          pcVar28 = pcVar44;
          func_0x034ba874((undefined1 *)((long)puVar21 + -0x440),0xd);
          lVar17 = _DAT_059c9978;
          if (pcVar20 == (code *)0x0) {
            uVar22 = 0x3783264;
            auVar54 = func_0x0249fb90();
            puVar10 = (undefined1 *)((long)puVar21 + -0x4a0);
          }
          else {
            func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x490),
                            (undefined1 *)((long)puVar21 + -0x440),0x50);
            lVar38 = *(long *)pcVar20;
            uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar18 != 0) {
              piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == lVar17) {
                  pcVar43 = (code *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                  goto LAB_03783208;
                }
                uVar18 = uVar18 - 1;
                piVar41 = piVar41 + 4;
              } while (uVar18 != 0);
            }
            pcVar43 = (code *)func_0x024d927c(pcVar20,lVar17,2);
LAB_03783208:
            pcVar47 = *(code **)pcVar43;
            func_0x054ed0d0((undefined1 *)((long)puVar21 + -0x3f0),
                            (undefined1 *)((long)puVar21 + -0x490),0x50);
            (*pcVar47)(pcVar20,(undefined1 *)((long)puVar21 + -0x3f0),*(long *)(pcVar43 + 8));
            uVar22 = 0x3783244;
            puVar10 = (undefined1 *)((long)puVar21 + -0x4a0);
            pcVar37 = pcVar20;
            pcVar35 = pcVar36;
            pcVar28 = pcVar44;
            auVar54 = auVar51;
          }
SUB_03783264:
          pcVar33 = pcVar35;
          plVar27 = auVar54._0_8_;
          *(code **)(puVar10 + -0x60) = unaff_x29;
          *(undefined8 *)(puVar10 + -0x58) = uVar22;
          *(undefined **)(puVar10 + -0x50) = unaff_x28;
          *(undefined **)(puVar10 + -0x48) = unaff_x27;
          *(code **)(puVar10 + -0x40) = unaff_x26;
          *(code **)(puVar10 + -0x38) = pcVar47;
          *(code **)(puVar10 + -0x30) = pcVar43;
          *(undefined1 (*) [16])(puVar10 + -0x28) = auVar51;
          *(code **)(puVar10 + -0x18) = pcVar36;
          *(code **)(puVar10 + -0x10) = pcVar20;
          *(code **)(puVar10 + -8) = pcVar44;
          *(code **)(puVar10 + -0xb8) = pcVar33;
          pcVar36 = pcVar37;
          pcVar47 = pcVar33;
          pcVar44 = pcVar28;
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
          pcVar43 = (code *)func_0x03773874(puVar10 + -0xb8);
          uVar22 = func_0x0249fb80(_DAT_059c6000);
          auVar56._8_8_ = pcVar36;
          auVar56._0_8_ = pcVar47;
          if (plVar27 != (long *)0x0) {
            uVar31 = 0;
            func_0x02a9aa34(uVar22,plVar27,*(undefined8 *)(*plVar27 + 0x250));
            uVar32 = _DAT_05a447b8;
            pcVar36 = (code *)func_0x026ec554(pcVar43,uVar22);
            auVar56._8_8_ = uVar32;
            auVar56._0_8_ = uVar31;
            if (pcVar36 != (code *)0x0) {
              lVar17 = *(long *)pcVar36;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar41 + -2) == _DAT_059ca360) {
                    puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                    goto LAB_037833d8;
                  }
                  uVar18 = uVar18 - 1;
                  piVar41 = piVar41 + 4;
                } while (uVar18 != 0);
              }
              uVar32 = 0;
              puVar19 = (undefined8 *)func_0x024d927c(pcVar36);
LAB_037833d8:
              pcVar43 = (code *)(*(code *)*puVar19)(pcVar36,puVar19[1]);
              auVar56._8_8_ = uVar32;
              auVar56._0_8_ = uVar31;
              *(code **)(puVar10 + -0xc0) = pcVar43;
              *(undefined8 *)(puVar10 + -0xd0) = 0;
              *(undefined1 **)(puVar10 + -200) = puVar10 + -0xc0;
              if (pcVar43 == (code *)0x0) {
LAB_037836dc:
                pcVar43 = (code *)func_0x0249fb90();
LAB_037836e0:
                pcVar28 = (code *)0x0;
                puVar19 = (undefined8 *)(puVar10 + -0xc0);
                goto LAB_037836e8;
              }
              unaff_x26 = (code *)&DAT_059df6e0;
              unaff_x27 = &DAT_059cb6b8;
              unaff_x28 = &DAT_059c9978;
              pcVar36 = pcVar43;
              do {
                uVar22 = auVar56._0_8_;
                lVar17 = *(long *)pcVar36;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059df6e0) {
                      puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                      goto LAB_0378345c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                uVar32 = 0;
                puVar19 = (undefined8 *)func_0x024d927c(pcVar36);
                auVar56._8_8_ = uVar32;
                auVar56._0_8_ = uVar22;
LAB_0378345c:
                pcVar43 = (code *)(*(code *)*puVar19)(pcVar36,puVar19[1]);
                uVar22 = auVar56._0_8_;
                if (((ulong)pcVar43 & 1) == 0) goto LAB_037836e0;
                plVar29 = *(long **)(puVar10 + -0xc0);
                if (plVar29 == (long *)0x0) {
                  func_0x0249fb90();
                  pcVar43 = (code *)0x0;
                  break;
                }
                lVar17 = *plVar29;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar41 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar41 + -2) == _DAT_059cb6b8) {
                      puVar19 = (undefined8 *)(lVar17 + (long)*piVar41 * 0x10 + 0x138);
                      goto LAB_037834c0;
                    }
                    uVar18 = uVar18 - 1;
                    piVar41 = piVar41 + 4;
                  } while (uVar18 != 0);
                }
                uVar32 = 0;
                puVar19 = (undefined8 *)func_0x024d927c(plVar29);
                auVar56._8_8_ = uVar32;
                auVar56._0_8_ = uVar22;
LAB_037834c0:
                pcVar43 = (code *)(*(code *)*puVar19)(plVar29,puVar19[1]);
                lVar17 = func_0x0376e450(plVar27,pcVar43);
                if (lVar17 != 0) {
                  uVar18 = func_0x036e2208(lVar17,0);
                  if ((uVar18 & 1) != 0) {
                    pcVar44 = pcVar33;
                    auVar56 = auVar54;
                    uVar18 = func_0x036d7cb4(lVar17,pcVar28);
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
                        pcVar36 = pcVar43;
                        pcVar47 = pcVar43;
                        pcVar44 = pcVar28;
                        func_0x034ba874(puVar10 + -0x120,0xe);
                        lVar17 = _DAT_059c9978;
                        auVar56._8_8_ = pcVar36;
                        auVar56._0_8_ = pcVar47;
                        if (pcVar37 == (code *)0x0) goto LAB_03783780;
                        func_0x054ed0d0(puVar10 + -0x1c0,puVar10 + -0x120,0x50);
                        lVar38 = *(long *)pcVar37;
                        uVar18 = (ulong)*(ushort *)(lVar38 + 0x12e);
                        if (uVar18 != 0) {
                          piVar41 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == lVar17) {
                              puVar19 = (undefined8 *)(lVar38 + (long)(*piVar41 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_037836b0;
                            }
                            uVar18 = uVar18 - 1;
                            piVar41 = piVar41 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x024d927c(pcVar37,lVar17,2);
LAB_037836b0:
                        pcVar43 = (code *)*puVar19;
                        func_0x054ed0d0(puVar10 + -0xb0,puVar10 + -0x1c0,0x50);
                        uVar22 = puVar19[1];
                        (*pcVar43)(pcVar37,puVar10 + -0xb0);
                        auVar56._8_8_ = uVar22;
                        auVar56._0_8_ = pcVar47;
                      }
                      else if (*(int *)(lVar17 + 0x18) == 2) goto code_r0x03783528;
                    }
                  }
                }
                pcVar36 = *(code **)(puVar10 + -0xc0);
                if (pcVar36 == (code *)0x0) goto LAB_037836dc;
              } while( true );
            }
          }
          func_0x0249fb90();
          goto LAB_0378377c;
        }
      }
      return pcVar37;
    }
  }
  return pcVar28;
}


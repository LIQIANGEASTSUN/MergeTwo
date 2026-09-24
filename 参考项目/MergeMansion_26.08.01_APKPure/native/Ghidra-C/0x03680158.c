/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessChestClickForCoordinate(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Random.IGenerationContext generationContext, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03780158
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code *******
FUN_03780158(long param_1,code *******param_2,code *******param_3,code *******param_4,
            code *******param_5,code *******param_6)

{
  code *pcVar1;
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
  undefined8 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined *puVar18;
  undefined8 uVar19;
  undefined4 uVar15;
  long lVar20;
  undefined8 uVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  long lVar25;
  code *******pppppppcVar26;
  long lVar27;
  code *******pppppppcVar28;
  code *******pppppppcVar29;
  undefined8 *puVar30;
  code *******pppppppcVar31;
  char *pcVar32;
  uint uVar16;
  int iVar17;
  long *plVar33;
  undefined8 *puVar34;
  long *plVar35;
  long *plVar36;
  undefined8 uVar37;
  code *******pppppppcVar38;
  code *******extraout_x1;
  code *******extraout_x1_00;
  code *******pppppppcVar39;
  undefined8 uVar40;
  code *******pppppppcVar41;
  code *******pppppppcVar42;
  code *******pppppppcVar43;
  code *******pppppppcVar44;
  code ******ppppppcVar45;
  ulong uVar46;
  ulong uVar47;
  int *piVar48;
  undefined *puVar49;
  code *****pppppcVar50;
  code *******pppppppcVar51;
  code *******pppppppcVar52;
  undefined *puVar53;
  ulong unaff_x25;
  code *****pppppcVar54;
  code *******unaff_x27;
  code *******unaff_x28;
  code ******unaff_x29;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [12];
  undefined1 auVar62 [16];
  undefined8 auStack_550 [2];
  undefined1 auStack_540 [80];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  code *******pppppppcStack_4a0;
  undefined1 auStack_498 [16];
  undefined1 auStack_488 [16];
  code *******pppppppcStack_478;
  undefined1 auStack_470 [16];
  undefined8 auStack_460 [10];
  code ******ppppppcStack_410;
  undefined8 uStack_408;
  code *******pppppppcStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  code *******pppppppcStack_3e0;
  code *******pppppppcStack_3d8;
  code *******pppppppcStack_3d0;
  code *******pppppppcStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b0 [80];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [80];
  code ******ppppppcStack_2c0;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  code *******pppppppcStack_298;
  long lStack_290;
  code *******pppppppcStack_288;
  long *plStack_280;
  code *******pppppppcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  undefined8 uStack_1e0;
  code *******pppppppcStack_1d0;
  undefined8 uStack_1c8;
  code ******appppppcStack_1c0 [10];
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [80];
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
  undefined1 auStack_80 [16];
  long *plStack_70;
  code *******pppppppcStack_68;
  
  pppppppcVar22 = param_3;
  pppppppcVar26 = param_4;
  pppppppcVar42 = param_6;
  if ((bRam0000000005e2df94 & 1) == 0) {
    func_0x0249f8e4(&DAT_059da660);
    func_0x0249f8e4(&DAT_059df188);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a2a078);
    func_0x0249f8e4(&DAT_059d4380);
    func_0x0249f8e4(&DAT_059e45e0);
    func_0x0249f8e4(&DAT_05a536b0);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_059e8260);
    bRam0000000005e2df94 = 1;
  }
  plStack_70 = (long *)0x0;
  pppppppcStack_68 = (code *******)0x0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  lVar20 = func_0x0376e450(param_1,param_3);
  lVar27 = 0x5e2d000;
  if (param_2 != (code *******)0x0) {
    ppppppcVar45 = *param_2;
    unaff_x29 = (code ******)&DAT_059df8e8;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df8e8) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
          goto LAB_037802b0;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    ppppppcVar45 = (code ******)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037802b0:
    uVar21 = (*(code *)*ppppppcVar45)(param_2,ppppppcVar45[1]);
    pppppppcVar22 = (code *******)func_0x036eb114(lVar20,uVar21,0);
    if (((ulong)pppppppcVar22 & 1) == 0) {
      return pppppppcVar22;
    }
    pppppppcVar22 = (code *******)0x0;
    pppppppcVar23 = (code *******)func_0x036ec278(lVar20,param_4);
    if (((ulong)pppppppcVar23 & 1) == 0) {
      return pppppppcVar23;
    }
    lVar27 = lVar20;
    if (lVar20 != 0) {
      uVar46 = func_0x036de6cc(lVar20,0);
      if ((uVar46 & 1) == 0) {
        func_0x036fb060(lVar20,param_2,param_5,param_1,0);
      }
      ppppppcVar45 = *param_2;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df8e8) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
            goto LAB_03780360;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03780360:
      uVar21 = (*(code *)*ppppppcVar45)(param_2,ppppppcVar45[1]);
      pppppppcVar23 = (code *******)func_0x036fa888(lVar20,uVar21,0);
      if ((int)pppppppcVar23 == 0) {
        return pppppppcVar23;
      }
      unaff_x25 = (ulong)pppppppcVar23 & 0xffffffff;
      pppppppcVar26 = (code *******)&pppppppcStack_68;
      pppppppcVar22 =
           (code *******)
           func_0x037c7a80(*(undefined8 *)(param_1 + 0x90),param_3,param_1,pppppppcVar26,0);
      if (((ulong)pppppppcVar22 & 1) == 0) {
        return pppppppcVar22;
      }
      pppppppcVar24 = (code *******)func_0x036faa98(lVar20,param_2,0);
      pppppppcVar22 = param_2;
      uVar21 = func_0x022bffa8(5,_DAT_059df8e8);
      unaff_x27 = pppppppcVar24;
      if (pppppppcVar24 != (code *******)0x0) {
        uVar15 = func_0x022bffa8(0x1f,_DAT_059dfbc0,pppppppcVar24);
        uVar46 = func_0x0348fa74(uVar21,uVar15,0);
        if ((uVar46 & 1) == 0) {
          auStack_80 = func_0x039282fc(param_2,0);
          if (*(int *)(_DAT_059d4380 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          func_0x0288eda8(auStack_80,&plStack_70,_DAT_05a2a078);
          uVar46 = func_0x022bffa8(0x1f,_DAT_059dfbc0,pppppppcVar24);
          unaff_x27 = (code *******)(uVar46 & 0xffffffff);
          pppppppcStack_1d0 = pppppppcVar24;
          uStack_1c8 = func_0x022bffa8(0x1a,_DAT_059dfbc0);
          if (plStack_70 == (long *)0x0) {
            pppppppcVar42 = (code *******)0x0;
          }
          else {
            pppppppcVar42 =
                 (code *******)
                 (**(code **)(*plStack_70 + 0x238))(plStack_70,*(undefined8 *)(*plStack_70 + 0x240))
            ;
          }
          unaff_x28 = (code *******)func_0x0249fb80(_DAT_059e8260);
          pppppppcVar26 = (code *******)0x44;
          func_0x03700e78(unaff_x28,unaff_x27,uStack_1c8,0x44,0,pppppppcVar42,0);
          param_5 = (code *******)func_0x022bffa8(4,_DAT_059e0220,param_2);
          pppppppcVar22 = param_2;
          uVar21 = func_0x022bffa8(5,_DAT_059df8e8);
          if (param_5 != (code *******)0x0) {
            func_0x03687a50(param_5,unaff_x28,uVar21,*(undefined8 *)(param_1 + 0x30),0,0);
            uVar21 = func_0x03530c84(param_4,0);
            unaff_x27 = pppppppcStack_1d0;
            pppppppcVar42 = (code *******)0x0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            pppppppcVar22 = param_3;
            pppppppcVar26 = pppppppcStack_1d0;
            func_0x034ba9b8(&uStack_d0,3,param_3,pppppppcStack_1d0,uVar21,0,4,0);
            pppppppcVar41 = _DAT_059c9978;
            if (param_6 != (code *******)0x0) {
              func_0x054ed0d0(auStack_170,&uStack_d0,0x50);
              puVar13 = auStack_170;
              goto LAB_03780638;
            }
          }
        }
        else {
          func_0x03774f00(param_1,param_2,pppppppcStack_68,pppppppcVar24,param_5,param_4,2,0);
          param_5 = pppppppcStack_68;
          unaff_x28 = (code *******)func_0x03530c84(param_4,0);
          if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e2c00);
          }
          uVar21 = func_0x03530158(unaff_x28,0);
          pppppppcVar42 = (code *******)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          pppppppcVar22 = param_3;
          pppppppcVar26 = param_5;
          func_0x034ba7d8(&uStack_d0,3,param_3,param_5,uVar21,0,4,0);
          pppppppcVar41 = _DAT_059c9978;
          if (param_6 != (code *******)0x0) {
            func_0x054ed0d0(auStack_120,&uStack_d0,0x50);
            puVar13 = auStack_120;
LAB_03780638:
            func_0x0240cde0(2,pppppppcVar41,param_6,puVar13);
            param_5 = (code *******)func_0x022bffa8(0x1a,_DAT_059dfbc0,unaff_x27);
            uVar21 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
            unaff_x27 = (code *******)func_0x036d62d4(lVar20,uVar21,0);
            unaff_x28 = (code *******)func_0x0249fb80(_DAT_059e45e0);
            func_0x038773f0(unaff_x28,param_5,unaff_x27,0);
            pppppppcVar22 = param_2;
            pppppppcVar26 = unaff_x28;
            func_0x022be1b4(100,_DAT_059e0220);
            if ((int)pppppppcVar23 == 2) {
              func_0x037789bc(param_1,param_2,param_3,param_4,1);
              uVar46 = func_0x036d392c(lVar20,0);
              unaff_x25 = uVar46 & 0xffffffff;
              param_1 = func_0x0249fb80(_DAT_059da660);
              func_0x0389e904(param_1,unaff_x25,0);
              if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              func_0x0276a1a0(param_2,param_1,_DAT_05a536b0);
              pppppppcVar42 = (code *******)0x0;
              uStack_1e0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              func_0x034ba874(&uStack_d0,4,param_3,param_3,param_4,0,5,0);
              param_4 = _DAT_059c9978;
              func_0x054ed0d0(appppppcStack_1c0,&uStack_d0,0x50);
              pppppppcVar26 = appppppcStack_1c0;
              pppppppcVar22 = param_6;
              func_0x0240cde0(2,param_4);
            }
            lVar25 = func_0x036d5f38(lVar20,0);
            if (lVar25 == 0) {
              return (code *******)0x0;
            }
            lVar20 = func_0x036d5f38(lVar20,0);
            if (lVar20 != 0) {
              pppppppcVar26 = (code *******)func_0x022bffa8(0x13,_DAT_059df188,lVar20);
              return pppppppcVar26;
            }
          }
        }
      }
    }
  }
  auVar57 = func_0x0249fb90();
  plVar33 = auVar57._8_8_;
  uStack_210 = 0x3780814;
  lStack_208 = lVar27;
  pppppppcStack_200 = param_2;
  pppppppcStack_1f8 = param_3;
  pppppppcStack_1f0 = param_4;
  pppppppcStack_1e8 = param_6;
  if ((bRam0000000005e2df95 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a364b0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059d76b0);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2df95 = 1;
  }
  lVar27 = func_0x0376e450(auVar57._0_8_,pppppppcVar22);
  if (lVar27 == 0) {
LAB_0378094c:
    lVar27 = _DAT_05a364b0;
    lVar20 = *(long *)(_DAT_05a364b0 + 0x38);
    if (lVar20 == 0) {
      func_0x024d8f9c(_DAT_05a364b0);
      lVar20 = *(long *)(lVar27 + 0x38);
    }
    lVar20 = *(long *)(lVar20 + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x024d8f40();
    }
    if (*(int *)(lVar20 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
    if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x024d8f40();
    }
    return (code *******)**(long **)(lVar27 + 0xb8);
  }
  uVar46 = func_0x036de7e4(lVar27,plVar33,0);
  if ((uVar46 & 1) == 0) goto LAB_0378094c;
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  pppppppcVar24 = (code *******)func_0x03530158(pppppppcVar26,0);
  pppppppcVar41 = (code *******)0x1;
  pppppppcVar23 = pppppppcVar22;
  func_0x037789bc(auVar57._0_8_,plVar33);
  pppppppcVar28 = (code *******)func_0x0249f9d4(_DAT_059d76b0,1);
  pppppppcVar29 = (code *******)func_0x03530158(pppppppcVar26,0);
  if (plVar33 == (long *)0x0) {
LAB_03780a54:
    func_0x0249fb90();
  }
  else {
    lVar20 = *plVar33;
    uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar46 != 0) {
      piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
          puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 5) * 0x10 + 0x138);
          goto LAB_037809c0;
        }
        uVar46 = uVar46 - 1;
        piVar48 = piVar48 + 4;
      } while (uVar46 != 0);
    }
    puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_037809c0:
    uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
    pppppppcVar42 = (code *******)func_0x036d3908(lVar27,uVar21,0);
    uStack_270 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    pppppppcVar23 = pppppppcVar22;
    pppppppcVar24 = pppppppcVar22;
    pppppppcVar41 = pppppppcVar29;
    func_0x034ba874(&uStack_260,0xc);
    pppppppcVar26 = pppppppcVar29;
    if (pppppppcVar28 == (code *******)0x0) goto LAB_03780a54;
    if (*(int *)(pppppppcVar28 + 3) != 0) {
      func_0x054ed0e0(pppppppcVar28 + 4,&uStack_260,0x50);
      func_0x0249f888(pppppppcVar28 + 7,0);
      return pppppppcVar28;
    }
  }
  auVar57 = func_0x0249fb98();
  pppppppcVar29 = auVar57._8_8_;
  uVar21 = auVar57._0_8_;
  uStack_2b0 = 0x3780a5c;
  ppppppcStack_2c0 = unaff_x29;
  uStack_2a8 = unaff_x25;
  lStack_2a0 = param_1;
  pppppppcStack_298 = pppppppcVar26;
  lStack_290 = lVar27;
  pppppppcStack_288 = pppppppcVar28;
  plStack_280 = plVar33;
  pppppppcStack_278 = pppppppcVar22;
  if ((bRam0000000005e2df96 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    bRam0000000005e2df96 = 1;
  }
  lVar27 = func_0x0376e450(uVar21,pppppppcVar29);
  if (lVar27 == 0) {
    return (code *******)0x0;
  }
  uVar46 = func_0x036ef810(lVar27,pppppppcVar41,uVar21,(uint)pppppppcVar42 & 1,0);
  if ((uVar46 & 1) == 0) {
    return (code *******)0x0;
  }
  func_0x037789bc(uVar21,pppppppcVar41,pppppppcVar29,pppppppcVar23,1);
  pppppppcVar43 = (code *******)0x0;
  uStack_3c0 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  pppppppcVar38 = pppppppcVar29;
  pppppppcVar26 = pppppppcVar29;
  pppppppcVar22 = pppppppcVar23;
  func_0x034ba874(&uStack_360,0xb);
  pppppppcVar28 = _DAT_059c9978;
  if (pppppppcVar24 != (code *******)0x0) {
    func_0x054ed0d0(auStack_3b0,&uStack_360,0x50);
    ppppppcVar45 = *pppppppcVar24;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if ((code *******)pppppcVar50[-1] == pppppppcVar28) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
          goto LAB_03780ba0;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar24,pppppppcVar28,2);
LAB_03780ba0:
    pppppcVar50 = *ppppppcVar45;
    func_0x054ed0d0(auStack_310,auStack_3b0,0x50);
    (*(code *)pppppcVar50)(pppppppcVar24,auStack_310,ppppppcVar45[1]);
    return (code *******)0x1;
  }
  auVar58 = func_0x0249fb90();
  pppppppcVar51 = auVar58._8_8_;
  pppppppcVar28 = auVar58._0_8_;
  puVar30 = auStack_550;
  uStack_408 = 0x3780be8;
  uStack_3f8 = 0x5e2d000;
  pppppppcVar52 = (code *******)((ulong)pppppppcVar22 & 0xffffffff);
  pppppppcVar44 = pppppppcVar43;
  ppppppcStack_410 = unaff_x29;
  pppppppcStack_400 = param_5;
  uStack_3f0 = (ulong)pppppppcVar42 & 0xffffffff;
  pppppppcStack_3e0 = pppppppcVar41;
  pppppppcStack_3d0 = pppppppcVar23;
  pppppppcStack_3c8 = pppppppcVar24;
  if ((bRam0000000005e2df97 & 1) == 0) {
    uStack_3e8 = uVar21;
    pppppppcStack_3d8 = pppppppcVar29;
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a27ee8);
    func_0x0249f8e4(&DAT_05a29c88);
    func_0x0249f8e4(&DAT_059d4170);
    auVar57._8_8_ = pppppppcStack_3d8;
    auVar57._0_8_ = uStack_3e8;
    bRam0000000005e2df97 = 1;
  }
  pppppppcStack_3d8 = auVar57._8_8_;
  uStack_3e8 = auVar57._0_8_;
  auStack_470._0_8_ = 0;
  auStack_470._8_8_ = 0;
  auStack_488._8_8_ = 0;
  pppppppcStack_478 = (code *******)0x0;
  auStack_498._8_8_ = 0;
  auStack_488._0_8_ = 0;
  pppppppcStack_4a0 = (code *******)0x0;
  auStack_498._0_8_ = 0;
  pppppppcVar42 = (code *******)func_0x0376e450(pppppppcVar28,pppppppcVar51);
  auVar60._8_8_ = pppppppcVar42;
  auVar60._0_8_ = pppppppcVar43;
  auVar58._8_8_ = pppppppcVar42;
  auVar58._0_8_ = pppppppcVar43;
  if (pppppppcVar42 == (code *******)0x0) {
    return (code *******)0x0;
  }
  pppppppcVar24 = (code *******)0x0;
  pppppppcVar23 = pppppppcVar28;
  uVar46 = func_0x036f58fc(pppppppcVar42,pppppppcVar43);
  if ((uVar46 & 1) == 0) {
    return (code *******)0x0;
  }
  if (pppppppcVar43 != (code *******)0x0) {
    ppppppcVar45 = *pppppppcVar43;
    pppppppcVar28 = (code *******)&DAT_059df8e8;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df8e8) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
          goto LAB_03780d28;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059df8e8,5);
LAB_03780d28:
    uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
    uVar46 = func_0x036edd98(pppppppcVar42,uVar21,0);
    pppppppcVar24 = pppppppcVar52;
    if ((uVar46 & 1) == 0) {
LAB_03780df0:
      ppppppcVar45 = *pppppppcVar43;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df8e8) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
            goto LAB_03780e40;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059df8e8,5);
LAB_03780e40:
      uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
      uVar46 = func_0x036edd98(pppppppcVar42,uVar21,0);
      if ((uVar46 & 1) == 0) {
LAB_03780e74:
        ppppppcVar45 = *pppppppcVar43;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == _DAT_059df8e8) {
              ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
              goto LAB_03780f98;
            }
            uVar46 = uVar46 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar46 != 0);
        }
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059df8e8,5);
LAB_03780f98:
        uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
        uVar46 = func_0x036f619c(pppppppcVar42,uVar21,0);
        auVar5._8_8_ = auStack_498._8_8_;
        auVar5._0_8_ = auStack_498._0_8_;
        if ((uVar46 & 1) != 0) {
          ppppppcVar45 = *pppppppcVar43;
          uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
          if (uVar46 != 0) {
            pppppcVar50 = ppppppcVar45[0x16] + 1;
            do {
              if (pppppcVar50[-1] == _DAT_059df8e8) {
                ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
                goto LAB_03781008;
              }
              uVar46 = uVar46 - 1;
              pppppcVar50 = pppppcVar50 + 2;
            } while (uVar46 != 0);
          }
          ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059df8e8,5);
LAB_03781008:
          uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
          uVar46 = func_0x036f66a8(pppppppcVar42,uVar21,0);
          auVar5._8_8_ = auStack_498._8_8_;
          auVar5._0_8_ = auStack_498._0_8_;
          if ((uVar46 & 1) == 0) {
            auStack_488 = func_0x036f56f8(pppppppcVar42,pppppppcVar38,0);
            if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar46 = func_0x0288eda8(auStack_488,&pppppppcStack_4a0,_DAT_05a29c88);
            auVar5._8_8_ = auStack_498._8_8_;
            auVar5._0_8_ = auStack_498._0_8_;
            pppppppcVar23 = pppppppcStack_4a0;
            goto joined_r0x03781070;
          }
        }
      }
      else {
        uVar46 = func_0x036ee320(pppppppcVar42,pppppppcVar43,0);
        if ((uVar46 & 1) != 0) goto LAB_03780e74;
        auStack_498 = func_0x036f52d8(pppppppcVar42,pppppppcVar38,0);
        lVar27 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x024d8f40();
        }
        pcVar32 = (char *)func_0x0249f90c(auStack_498,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80));
        auVar5 = auStack_498;
        if (*pcVar32 != '\0') {
          puVar13 = auStack_498;
LAB_03780f0c:
          func_0x02886844(puVar13,auStack_460,_DAT_05a27ee8);
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          pppppppcVar28 = (code *******)func_0x0425449c(auStack_460[0],0);
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e2be8);
          }
          pppppppcVar23 = (code *******)func_0x0352ed34(pppppppcVar28,0);
          uVar21 = 0x3780f84;
          goto SUB_037812b8;
        }
      }
    }
    else {
      uVar46 = func_0x036ee320(pppppppcVar42,pppppppcVar43,0);
      if ((uVar46 & 1) != 0) goto LAB_03780df0;
      ppppppcVar45 = *pppppppcVar43;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df8e8) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
            goto LAB_03780dac;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059df8e8,5);
LAB_03780dac:
      uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
      uVar46 = func_0x036f619c(pppppppcVar42,uVar21,0);
      if ((uVar46 & 1) == 0) goto LAB_03780df0;
      uVar21 = func_0x022bffa8(5,_DAT_059df8e8,pppppppcVar43);
      uVar46 = func_0x036f66a8(pppppppcVar42,uVar21,0);
      if ((uVar46 & 1) != 0) goto LAB_03780df0;
      auStack_470 = func_0x036f52d8(pppppppcVar42,pppppppcVar38,0);
      auStack_488 = func_0x036f56f8(pppppppcVar42,pppppppcVar38,0);
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar46 = func_0x0288eda8(auStack_488,&pppppppcStack_478,_DAT_05a29c88);
      pppppppcVar28 = (code *******)(uVar46 & 0xffffffff);
      uVar47 = func_0x022bf4f8(auStack_470,_DAT_05a27ee0);
      auVar5._8_8_ = auStack_498._8_8_;
      auVar5._0_8_ = auStack_498._0_8_;
      pppppppcVar23 = pppppppcStack_478;
      if ((uVar47 & 1) != 0) {
        if ((uVar46 & 1) != 0) {
          func_0x02886844(auStack_470,auStack_460,_DAT_05a27ee8);
          uVar21 = auStack_460[0];
          param_5 = pppppppcStack_478;
          if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar46 = func_0x042542f4(uVar21,param_5,0);
          pppppppcVar23 = pppppppcStack_478;
          if ((uVar46 & 1) == 0) goto LAB_03781168;
        }
        puVar13 = auStack_470;
        goto LAB_03780f0c;
      }
joined_r0x03781070:
      if ((uVar46 & 1) != 0) {
LAB_03781168:
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        pppppppcVar28 = (code *******)func_0x0425449c(pppppppcVar23,0);
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2be8);
        }
        pppppppcVar41 = (code *******)func_0x0352ed34(pppppppcVar28,0);
        uVar21 = 0x37811c4;
        puVar12 = auStack_550;
        pppppppcVar23 = pppppppcVar26;
        pppppppcVar29 = pppppppcVar38;
        pppppppcVar39 = pppppppcVar52;
        goto SUB_0378130c;
      }
    }
    pppppppcVar44 = (code *******)0x0;
    auStack_550[0] = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    pppppppcVar23 = pppppppcVar51;
    pppppppcVar24 = pppppppcVar51;
    pppppppcVar22 = pppppppcVar38;
    auStack_498 = auVar5;
    func_0x034ba874(&uStack_4f0,0x11);
    pppppppcVar41 = _DAT_059c9978;
    if (pppppppcVar26 != (code *******)0x0) {
      func_0x054ed0d0(auStack_540,&uStack_4f0,0x50);
      ppppppcVar45 = *pppppppcVar26;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if ((code *******)pppppcVar50[-1] == pppppppcVar41) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
            goto LAB_03781270;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar26,pppppppcVar41,2);
LAB_03781270:
      pppppcVar50 = *ppppppcVar45;
      func_0x054ed0d0(auStack_460,auStack_540,0x50);
      (*(code *)pppppcVar50)(pppppppcVar26,auStack_460,ppppppcVar45[1]);
      return (code *******)0x1;
    }
  }
  uVar21 = 0x37812b8;
  auVar58 = func_0x0249fb90();
  puVar30 = auStack_550;
SUB_037812b8:
  *(undefined8 *)((long)puVar30 + -0x20) = uVar21;
  *(code ********)((long)puVar30 + -0x18) = pppppppcVar51;
  *(code ********)((long)puVar30 + -0x10) = pppppppcVar38;
  *(code ********)((long)puVar30 + -8) = pppppppcVar26;
  if (auVar58._8_8_ == 0) {
    uVar21 = 0x378130c;
    auVar60 = func_0x0249fb90();
    puVar12 = (undefined8 *)((long)puVar30 + -0x20);
    pppppppcVar41 = pppppppcVar23;
    pppppppcVar23 = pppppppcVar26;
    pppppppcVar29 = pppppppcVar38;
    pppppppcVar39 = pppppppcVar52;
SUB_0378130c:
    do {
      pppppppcVar52 = pppppppcVar44;
      pppppppcVar26 = pppppppcVar24;
      *(undefined8 *)((long)puVar12 + -0x20) = uVar21;
      *(code ********)((long)puVar12 + -0x18) = pppppppcVar51;
      *(code ********)((long)puVar12 + -0x10) = pppppppcVar29;
      *(code ********)((long)puVar12 + -8) = pppppppcVar23;
      if (auVar60._8_8_ != 0) {
        pppppppcVar29 = (code *******)0x0;
        iVar17 = (int)pppppppcVar26;
        pppppppcVar23 = (code *******)func_0x036de6a0(auVar60._8_8_,pppppppcVar41);
        if (iVar17 != 1) {
          return pppppppcVar23;
        }
        pppppppcVar23 = *(code ********)((long)puVar12 + -0x10);
        lVar27 = *(long *)((long)puVar12 + -8);
        uVar21 = *(undefined8 *)((long)puVar12 + -0x20);
        auVar58._8_8_ = pppppppcVar39;
        auVar58._0_8_ = *(undefined8 *)((long)puVar12 + -0x18);
        goto LAB_037824a0;
      }
      auVar57 = func_0x0249fb90();
      pppppppcVar38 = auVar57._8_8_;
      pppppppcVar31 = auVar57._0_8_;
      puVar30 = (undefined8 *)((long)puVar12 + -0x1c0);
      *(code *******)((long)puVar12 + -0x70) = unaff_x29;
      *(undefined8 *)((long)puVar12 + -0x68) = 0x3781360;
      *(code ********)((long)puVar12 + -0x60) = param_5;
      *(code ********)((long)puVar12 + -0x58) = pppppppcVar28;
      *(code ********)((long)puVar12 + -0x50) = pppppppcVar42;
      *(code ********)((long)puVar12 + -0x48) = pppppppcVar43;
      *(code ********)((long)puVar12 + -0x40) = pppppppcVar39;
      *(code ********)((long)puVar12 + -0x38) = pppppppcVar51;
      *(code ********)((long)puVar12 + -0x30) = pppppppcVar29;
      *(code ********)((long)puVar12 + -0x28) = pppppppcVar23;
      pppppppcVar51 = (code *******)((ulong)pppppppcVar22 & 0xffffffff);
      pppppppcVar39 = pppppppcVar41;
      pppppppcVar24 = pppppppcVar26;
      pppppppcVar29 = pppppppcVar22;
      pppppppcVar44 = pppppppcVar52;
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
        pppppppcVar29 = pppppppcVar22;
      }
      *(undefined8 *)((long)puVar12 + -0xd0) = 0;
      *(undefined8 *)((long)puVar12 + -200) = 0;
      *(undefined8 *)((long)puVar12 + -0xe0) = 0;
      *(undefined8 *)((long)puVar12 + -0xd8) = 0;
      *(undefined8 *)((long)puVar12 + -0xf0) = 0;
      *(undefined8 *)((long)puVar12 + -0xe8) = 0;
      *(undefined8 *)((long)puVar12 + -0x100) = 0;
      *(undefined8 *)((long)puVar12 + -0xf8) = 0;
      *(undefined8 *)((long)puVar12 + -0x108) = 0;
      pppppppcVar43 = (code *******)func_0x0376e450(pppppppcVar31,pppppppcVar38);
      auVar60._8_8_ = pppppppcVar43;
      auVar60._0_8_ = pppppppcVar52;
      auVar58._8_8_ = pppppppcVar43;
      auVar58._0_8_ = pppppppcVar52;
      pppppppcVar22 = (code *******)0x5e2d000;
      param_5 = pppppppcVar31;
      if (pppppppcVar52 == (code *******)0x0) {
LAB_03781b0c:
        auVar59 = func_0x0249fb90();
        ppppppcVar45 = auVar59._8_8_;
        *(undefined8 *)((long)puVar12 + -0x220) = 0x3781b10;
        *(code ********)((long)puVar12 + -0x210) = unaff_x28;
        *(code ********)((long)puVar12 + -0x208) = unaff_x27;
        *(code ********)((long)puVar12 + -0x200) = param_5;
        *(code ********)((long)puVar12 + -0x1f8) = pppppppcVar41;
        *(code ********)((long)puVar12 + -0x1f0) = pppppppcVar42;
        *(code ********)((long)puVar12 + -0x1e8) = pppppppcVar22;
        *(code ********)((long)puVar12 + -0x1e0) = pppppppcVar52;
        *(code ********)((long)puVar12 + -0x1d8) = pppppppcVar51;
        *(code ********)((long)puVar12 + -0x1d0) = pppppppcVar38;
        *(code ********)((long)puVar12 + -0x1c8) = pppppppcVar26;
        pppppppcVar22 = (code *******)((ulong)pppppppcVar29 & 0xffffffff);
        pppppppcVar41 = (code *******)&DAT_059efeb0;
        pppppppcVar26 = pppppppcVar39;
        pppppppcVar23 = pppppppcVar24;
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
        *(undefined8 *)((long)puVar12 + -0x218) = 0;
        pppppppcVar28 = (code *******)func_0x0249fb80(_DAT_059efeb0);
        func_0x037c51f0(pppppppcVar28,0);
        pppppppcVar38 = pppppppcVar39;
        if (pppppppcVar28 == (code *******)0x0) goto LAB_03781e4c;
        param_5 = (code *******)&DAT_059c59a8;
        unaff_x27 = (code *******)&DAT_05a6a1d8;
        unaff_x28 = (code *******)&DAT_05a44708;
        pppppppcVar41 = pppppppcVar28 + 2;
        *pppppppcVar41 = ppppppcVar45;
        func_0x0249f888(pppppppcVar41,ppppppcVar45);
        pppppppcVar28[3] = (code ******)pppppppcVar24;
        func_0x0249f888(pppppppcVar28 + 3,pppppppcVar24);
        pppppppcVar24 = (code *******)func_0x0376e0dc(auVar59._0_8_);
        uVar21 = func_0x0249fb80(_DAT_059c59a8);
        auVar59._8_8_ = ppppppcVar45;
        auVar59._0_8_ = uVar21;
        pppppppcVar23 = (code *******)0x0;
        func_0x02a9aa34(uVar21,pppppppcVar28,_DAT_05a6a1d8);
        pppppppcVar26 = _DAT_05a44708;
        plVar33 = (long *)func_0x026ec554(pppppppcVar24,uVar21);
        if (plVar33 == (long *)0x0) goto LAB_03781e4c;
        lVar27 = *plVar33;
        uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar46 == 0) goto LAB_03781c90;
        piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        goto LAB_03781c78;
      }
      ppppppcVar45 = *pppppppcVar52;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059e0220) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 0xc) * 2 + 0x27;
            pppppppcVar22 = pppppppcVar29;
            goto LAB_0378149c;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059e0220,0xc);
      pppppppcVar22 = pppppppcVar29;
LAB_0378149c:
      pppppppcVar42 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
      if (pppppppcVar43 == (code *******)0x0) {
        return (code *******)0x0;
      }
      uVar46 = func_0x036f58fc(pppppppcVar43,pppppppcVar52,pppppppcVar31,0);
      if ((uVar46 & 1) == 0) {
        return (code *******)0x0;
      }
      ppppppcVar45 = *pppppppcVar52;
      param_5 = (code *******)&DAT_059df8e8;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df8e8) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
            goto LAB_03781528;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_03781528:
      uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
      uVar46 = func_0x036edd98(pppppppcVar43,uVar21,0);
      pppppppcVar24 = pppppppcVar51;
      if ((uVar46 & 1) == 0) {
LAB_037815f0:
        ppppppcVar45 = *pppppppcVar52;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == _DAT_059df8e8) {
              ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
              goto LAB_03781640;
            }
            uVar46 = uVar46 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar46 != 0);
        }
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_03781640:
        uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
        uVar46 = func_0x036edd98(pppppppcVar43,uVar21,0);
        if ((uVar46 & 1) == 0) {
LAB_03781674:
          ppppppcVar45 = *pppppppcVar52;
          uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
          if (uVar46 != 0) {
            pppppcVar50 = ppppppcVar45[0x16] + 1;
            do {
              if (pppppcVar50[-1] == _DAT_059df8e8) {
                ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
                goto LAB_03781750;
              }
              uVar46 = uVar46 - 1;
              pppppcVar50 = pppppcVar50 + 2;
            } while (uVar46 != 0);
          }
          ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_03781750:
          uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
          uVar46 = func_0x036f619c(pppppppcVar43,uVar21,0);
          if ((uVar46 & 1) != 0) {
            ppppppcVar45 = *pppppppcVar52;
            uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
            if (uVar46 != 0) {
              pppppcVar50 = ppppppcVar45[0x16] + 1;
              do {
                if (pppppcVar50[-1] == _DAT_059df8e8) {
                  ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
                  goto LAB_037817c0;
                }
                uVar46 = uVar46 - 1;
                pppppcVar50 = pppppcVar50 + 2;
              } while (uVar46 != 0);
            }
            ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_037817c0:
            uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
            uVar46 = func_0x036f66a8(pppppppcVar43,uVar21,0);
            if ((uVar46 & 1) == 0) {
              auVar57 = func_0x036f56f8(pppppppcVar43,pppppppcVar42,0);
              *(undefined1 (*) [16])((long)puVar12 + -0x108) = auVar57;
              if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              lVar27 = *(long *)(_DAT_05a29c90 + 0x20);
              if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
                lVar27 = func_0x024d8f40();
              }
              pcVar32 = (char *)func_0x0249f90c((undefined1 *)((long)puVar12 + -0x108),
                                                *(long *)(**(long **)(lVar27 + 0xc0) + 0x80) + 0x20)
              ;
              if (*pcVar32 != '\0') {
                if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                pppppppcVar23 = (code *******)func_0x0352ece0(pppppppcVar41,0);
                pppppppcVar28 = pppppppcVar41;
                goto LAB_03781874;
              }
            }
          }
        }
        else {
          uVar46 = func_0x036ee320(pppppppcVar43,pppppppcVar52,0);
          if ((uVar46 & 1) != 0) goto LAB_03781674;
          auVar57 = func_0x036f52d8(pppppppcVar43,pppppppcVar42,0);
          *(undefined1 (*) [16])((long)puVar12 + -0xf8) = auVar57;
          lVar27 = *(long *)(_DAT_05a27ee0 + 0x20);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x024d8f40();
          }
          pcVar32 = (char *)func_0x0249f90c((undefined1 *)((long)puVar12 + -0xf8),
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80));
          if (*pcVar32 != '\0') {
            if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pppppppcVar23 = (code *******)func_0x0352ece0(pppppppcVar41,0);
            goto LAB_03781728;
          }
        }
LAB_03781888:
        *(undefined8 *)((long)puVar12 + -0x1c0) = 0;
        *(undefined8 *)((long)puVar12 + -0x148) = 0;
        *(undefined8 *)((long)puVar12 + -0x150) = 0;
        *(undefined8 *)((long)puVar12 + -0x138) = 0;
        *(undefined8 *)((long)puVar12 + -0x140) = 0;
        *(undefined8 *)((long)puVar12 + -0x128) = 0;
        *(undefined8 *)((long)puVar12 + -0x130) = 0;
        *(undefined8 *)((long)puVar12 + -0x118) = 0;
        *(undefined8 *)((long)puVar12 + -0x120) = 0;
        *(undefined8 *)((long)puVar12 + -0x158) = 0;
        *(undefined8 *)((long)puVar12 + -0x160) = 0;
        pppppppcVar39 = pppppppcVar38;
        pppppppcVar24 = pppppppcVar38;
        pppppppcVar29 = pppppppcVar42;
        func_0x034ba874((undefined1 *)((long)puVar12 + -0x160),0x11);
        pppppppcVar23 = _DAT_059c9978;
        pppppppcVar22 = pppppppcVar43;
        if (pppppppcVar26 == (code *******)0x0) goto LAB_03781b0c;
        func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x1b0),
                        (undefined1 *)((long)puVar12 + -0x160),0x50);
        ppppppcVar45 = *pppppppcVar26;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 == 0) goto LAB_0378190c;
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        goto LAB_037818f4;
      }
      uVar46 = func_0x036ee320(pppppppcVar43,pppppppcVar52,0);
      if ((uVar46 & 1) != 0) goto LAB_037815f0;
      ppppppcVar45 = *pppppppcVar52;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df8e8) {
            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
            goto LAB_037815ac;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_037815ac:
      uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
      uVar46 = func_0x036f619c(pppppppcVar43,uVar21,0);
      if ((uVar46 & 1) == 0) goto LAB_037815f0;
      uVar21 = func_0x022bffa8(5,_DAT_059df8e8,pppppppcVar52);
      uVar46 = func_0x036f66a8(pppppppcVar43,uVar21,0);
      if ((uVar46 & 1) != 0) goto LAB_037815f0;
      auVar57 = func_0x036f52d8(pppppppcVar43,pppppppcVar42,0);
      *(undefined1 (*) [16])((long)puVar12 + -0xd0) = auVar57;
      auVar57 = func_0x036f56f8(pppppppcVar43,pppppppcVar42,0);
      *(undefined1 (*) [16])((long)puVar12 + -0xe8) = auVar57;
      if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar46 = func_0x0288eda8((undefined1 *)((long)puVar12 + -0xe8),
                               (undefined1 *)((long)puVar12 + -0xd8),_DAT_05a29c88);
      pppppppcVar41 = (code *******)(uVar46 & 0xffffffff);
      uVar47 = func_0x022bf4f8((undefined1 *)((long)puVar12 + -0xd0),_DAT_05a27ee0);
      if ((uVar47 & 1) == 0) {
        if ((uVar46 & 1) != 0) goto LAB_03781ab4;
        goto LAB_03781888;
      }
      if ((uVar46 & 1) == 0) goto LAB_03781a40;
      func_0x02886844((undefined1 *)((long)puVar12 + -0xd0),(undefined1 *)((long)puVar12 + -0xc0),
                      _DAT_05a27ee8);
      uVar21 = *(undefined8 *)((long)puVar12 + -0xc0);
      param_5 = *(code ********)((long)puVar12 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar46 = func_0x042542f4(uVar21,param_5,0);
      if ((uVar46 & 1) != 0) goto LAB_03781a40;
LAB_03781ab4:
      uVar21 = *(undefined8 *)((long)puVar12 + -0xd8);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      pppppppcVar28 = (code *******)func_0x0425449c(uVar21,0);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2be8);
      }
      pppppppcVar23 = (code *******)func_0x0352ed34(pppppppcVar28,0);
LAB_03781874:
      uVar21 = 0x3781888;
      puVar12 = (undefined8 *)((long)puVar12 + -0x1c0);
      pppppppcVar41 = pppppppcVar23;
      pppppppcVar23 = pppppppcVar26;
      pppppppcVar29 = pppppppcVar38;
      pppppppcVar39 = pppppppcVar52;
    } while( true );
  }
  pppppppcVar29 = (code *******)0x0;
  iVar17 = (int)pppppppcVar24;
  pppppppcVar26 = (code *******)func_0x036dcba8(auVar58._8_8_,pppppppcVar23);
  if (iVar17 != 1) {
    return pppppppcVar26;
  }
  pppppppcVar23 = *(code ********)((long)puVar30 + -0x10);
  pppppppcVar39 = *(code ********)((long)puVar30 + -8);
  uVar21 = *(undefined8 *)((long)puVar30 + -0x20);
  uVar46 = *(ulong *)((long)puVar30 + -0x18);
  goto LAB_037820e8;
LAB_03781a40:
  func_0x02886844((undefined1 *)((long)puVar12 + -0xd0),(undefined1 *)((long)puVar12 + -0xc0),
                  _DAT_05a27ee8);
  uVar21 = *(undefined8 *)((long)puVar12 + -0xc0);
  if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  pppppppcVar41 = (code *******)func_0x0425449c(uVar21,0);
  if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2be8);
  }
  pppppppcVar23 = (code *******)func_0x0352ed34(pppppppcVar41,0);
LAB_03781728:
  uVar21 = 0x378173c;
  pppppppcVar28 = pppppppcVar41;
  goto SUB_037812b8;
code_r0x03783528:
  *(undefined8 *)(puVar13 + -0x108) = 0;
  *(undefined8 *)(puVar13 + -0x110) = 0;
  *(undefined8 *)(puVar13 + -0xf8) = 0;
  *(undefined8 *)(puVar13 + -0x100) = 0;
  *(undefined8 *)(puVar13 + -0xe8) = 0;
  *(undefined8 *)(puVar13 + -0xf0) = 0;
  *(undefined8 *)(puVar13 + -0xd8) = 0;
  *(undefined8 *)(puVar13 + -0xe0) = 0;
  *(undefined8 *)(puVar13 + -0x118) = 0;
  *(undefined8 *)(puVar13 + -0x120) = 0;
  *(undefined8 *)(puVar13 + -0x1d0) = 0;
  pppppppcVar42 = pppppppcVar26;
  pppppppcVar41 = pppppppcVar26;
  pppppppcVar23 = pppppppcVar38;
  func_0x034ba874(puVar13 + -0x120,0xd);
  pppppppcVar22 = _DAT_059c9978;
  auVar62._8_8_ = pppppppcVar42;
  auVar62._0_8_ = pppppppcVar41;
  if (pppppppcVar24 == (code *******)0x0) goto LAB_0378377c;
  func_0x054ed0d0(puVar13 + -0x170,puVar13 + -0x120,0x50);
  ppppppcVar45 = *pppppppcVar24;
  uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
  if (uVar46 != 0) {
    pppppcVar50 = ppppppcVar45[0x16] + 1;
    do {
      if ((code *******)pppppcVar50[-1] == pppppppcVar22) {
        pppppppcVar28 = (code *******)(ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27);
        goto LAB_03783660;
      }
      uVar46 = uVar46 - 1;
      pppppcVar50 = pppppcVar50 + 2;
    } while (uVar46 != 0);
  }
  pppppppcVar28 = (code *******)func_0x024d927c(pppppppcVar24,pppppppcVar22,2);
LAB_03783660:
  unaff_x29 = *pppppppcVar28;
  func_0x054ed0d0(puVar13 + -0xb0,puVar13 + -0x170,0x50);
  (*(code *)unaff_x29)(pppppppcVar24,puVar13 + -0xb0,pppppppcVar28[1]);
  uVar21 = 0x378369c;
  puVar13 = puVar13 + -0x1d0;
  pppppppcVar29 = pppppppcVar26;
  pppppppcVar23 = pppppppcVar38;
  pppppppcVar41 = pppppppcVar43;
  pppppppcVar42 = pppppppcVar24;
  auVar57 = auVar58;
  goto SUB_03783264;
  while( true ) {
    uVar46 = uVar46 - 1;
    pppppcVar50 = pppppcVar50 + 2;
    if (uVar46 == 0) break;
LAB_037818f4:
    if ((code *******)pppppcVar50[-1] == pppppppcVar23) {
      ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
      goto LAB_03781934;
    }
  }
LAB_0378190c:
  ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar26,pppppppcVar23,2);
LAB_03781934:
  pppppcVar50 = *ppppppcVar45;
  func_0x054ed0d0((undefined1 *)((long)puVar12 + -0xc0),(undefined1 *)((long)puVar12 + -0x1b0),0x50)
  ;
  (*(code *)pppppcVar50)(pppppppcVar26,(undefined1 *)((long)puVar12 + -0xc0),ppppppcVar45[1]);
  return (code *******)0x1;
LAB_0378377c:
  func_0x0249fb90();
LAB_03783780:
  func_0x0249fb90();
  pppppppcVar22 = pppppppcVar26;
  while( true ) {
    auVar61 = func_0x0249fb88(pppppppcVar38);
    uVar21 = auVar61._0_8_;
    if (auVar61._8_4_ != 1) break;
    puVar30 = (undefined8 *)func_0x054ed080(uVar21);
    pppppppcVar38 = (code *******)*puVar30;
    *(code ********)(puVar13 + -0xd0) = pppppppcVar38;
    pppppppcVar26 = (code *******)func_0x054ed090();
    puVar30 = *(undefined8 **)(puVar13 + -200);
LAB_037836e8:
    uVar21 = auVar62._0_8_;
    pppppppcVar43 = (code *******)*puVar30;
    if (pppppppcVar43 != (code *******)0x0) {
      ppppppcVar45 = *pppppppcVar43;
      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
      if (uVar46 != 0) {
        pppppcVar50 = ppppppcVar45[0x16] + 1;
        do {
          if (pppppcVar50[-1] == _DAT_059df598) {
            ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
            goto LAB_03783744;
          }
          uVar46 = uVar46 - 1;
          pppppcVar50 = pppppcVar50 + 2;
        } while (uVar46 != 0);
      }
      uVar40 = 0;
      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43);
      auVar62._8_8_ = uVar40;
      auVar62._0_8_ = uVar21;
LAB_03783744:
      pppppppcVar26 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
    }
    if (pppppppcVar38 == (code *******)0x0) {
      return pppppppcVar26;
    }
  }
  func_0x022bd79c(puVar13 + -0xd0);
  func_0x0258f7ac(uVar21);
  auVar57 = func_0x022bd790();
  *(undefined8 *)(puVar13 + -0x210) = 0x37837f8;
  *(code ********)(puVar13 + -0x200) = pppppppcVar22;
  *(undefined1 (*) [16])(puVar13 + -0x1f8) = auVar58;
  *(code ********)(puVar13 + -0x1e8) = pppppppcVar24;
  *(code ********)(puVar13 + -0x1e0) = pppppppcVar43;
  *(undefined8 *)(puVar13 + -0x1d8) = uVar21;
  if ((bRam0000000005e2dfa0 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2dfa0 = 1;
  }
  *(undefined1 *)pppppppcVar23 = 0;
  *(undefined8 *)(puVar13 + -0x240) = 0x3783850;
  *(undefined1 (*) [16])(puVar13 + -0x230) = auVar62;
  *(long *)(puVar13 + -0x220) = auVar57._8_8_;
  *(code ********)(puVar13 + -0x218) = pppppppcVar23;
  *(long *)(puVar13 + -0x238) = auVar62._8_8_;
  if ((bRam0000000005e2dfa3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    bRam0000000005e2dfa3 = 1;
  }
  uVar46 = func_0x03774280(auVar57._0_8_,auVar62._8_8_);
  if ((uVar46 & 1) != 0) {
    uVar46 = func_0x03774280(auVar57._0_8_,auVar62._0_8_);
    if ((uVar46 & 1) != 0) {
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar16 = func_0x037737e4(puVar13 + -0x238,auVar62._0_8_);
      goto LAB_03783a30;
    }
  }
  uVar16 = 1;
LAB_03783a30:
  return (code *******)(ulong)(uVar16 & 1);
  while( true ) {
    uVar46 = uVar46 - 1;
    piVar48 = piVar48 + 4;
    if (uVar46 == 0) break;
LAB_03781c78:
    if (*(long *)(piVar48 + -2) == _DAT_059c9f90) {
      puVar30 = (undefined8 *)(lVar27 + (long)*piVar48 * 0x10 + 0x138);
      goto LAB_03781cac;
    }
  }
LAB_03781c90:
  pppppppcVar26 = (code *******)0x0;
  puVar30 = (undefined8 *)func_0x024d927c(plVar33);
LAB_03781cac:
  pppppppcVar28 = (code *******)&DAT_059cb2d8;
  auVar11._8_8_ = &DAT_059df6e0;
  auVar11._0_8_ = &DAT_059df598;
  auVar6._8_8_ = &DAT_059df6e0;
  auVar6._0_8_ = &DAT_059df598;
  auVar59._8_8_ = &DAT_059df6e0;
  auVar59._0_8_ = &DAT_059df598;
  uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
  *(undefined8 *)((long)puVar12 + -0x218) = uVar21;
  *(undefined8 *)((long)puVar12 + -0x230) = 0;
  *(undefined1 **)((long)puVar12 + -0x228) = (undefined1 *)((long)puVar12 + -0x218);
  pppppppcVar24 = *(code ********)((long)puVar12 + -0x218);
  if (pppppppcVar24 == (code *******)0x0) {
    func_0x0249fb90();
LAB_03781e48:
    func_0x0249fb90();
LAB_03781e4c:
    func_0x0249fb90();
    pppppppcVar43 = pppppppcVar22;
    while( true ) {
      pppppppcVar22 = pppppppcVar29;
      pppppppcVar39 = pppppppcVar26;
      auVar61 = func_0x0249fb88(pppppppcVar43);
      pppppppcVar26 = auVar61._0_8_;
      if (auVar61._8_4_ != 1) break;
      puVar30 = (undefined8 *)func_0x054ed080(pppppppcVar26);
      pppppppcVar43 = (code *******)*puVar30;
      *(code ********)((long)puVar12 + -0x230) = pppppppcVar43;
      pppppppcVar42 = (code *******)func_0x054ed090();
      puVar30 = *(undefined8 **)((long)puVar12 + -0x228);
      pppppppcVar26 = pppppppcVar39;
      pppppppcVar29 = pppppppcVar22;
LAB_03781dc0:
      pppppppcVar38 = (code *******)*puVar30;
      if (pppppppcVar38 != (code *******)0x0) {
        ppppppcVar45 = *pppppppcVar38;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == (code ****)*auVar59._0_8_) {
              ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
              goto LAB_03781e14;
            }
            uVar46 = uVar46 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar46 != 0);
        }
        pppppppcVar26 = (code *******)0x0;
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar38);
LAB_03781e14:
        pppppppcVar42 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar38,ppppppcVar45[1]);
      }
      if (pppppppcVar43 == (code *******)0x0) {
        return pppppppcVar42;
      }
    }
    func_0x022bd79c((undefined1 *)((long)puVar12 + -0x230));
    func_0x0258f7ac(pppppppcVar26);
    uVar21 = 0x3781ea8;
    func_0x022bd790();
    pppppppcVar52 = extraout_x1_00;
  }
  else {
    ppppppcVar45 = *pppppppcVar24;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df6e0) {
          ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
          goto LAB_03781d30;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    pppppppcVar26 = (code *******)0x0;
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar24);
LAB_03781d30:
    pppppppcVar42 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar24,ppppppcVar45[1]);
    if (((ulong)pppppppcVar42 & 1) == 0) {
      pppppppcVar43 = (code *******)0x0;
      puVar30 = (undefined8 *)((long)puVar12 + -0x218);
      auVar59 = auVar11;
      goto LAB_03781dc0;
    }
    pppppppcVar24 = *(code ********)((long)puVar12 + -0x218);
    if (pppppppcVar24 == (code *******)0x0) goto LAB_03781e48;
    ppppppcVar45 = *pppppppcVar24;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059cb2d8) {
          ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
          goto LAB_03781d94;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar24,_DAT_059cb2d8,0);
LAB_03781d94:
    (*(code *)*ppppppcVar45)(pppppppcVar24,ppppppcVar45[1]);
    pppppppcVar52 = (code *******)*pppppppcVar41;
    uVar21 = 0x3781db4;
    pppppppcVar23 = extraout_x1;
    pppppppcVar26 = pppppppcVar22;
    auVar59 = auVar6;
  }
  pppppppcVar42 = auVar59._8_8_;
  puVar30 = (undefined8 *)((long)puVar12 + -0x260);
  *(undefined8 *)((long)puVar12 + -0x260) = uVar21;
  *(long *)((long)puVar12 + -600) = auVar59._0_8_;
  *(code ********)((long)puVar12 + -0x250) = pppppppcVar24;
  *(code ********)((long)puVar12 + -0x248) = pppppppcVar41;
  *(code ********)((long)puVar12 + -0x240) = pppppppcVar38;
  *(code ********)((long)puVar12 + -0x238) = pppppppcVar26;
  pppppppcVar43 = (code *******)0x5e2d000;
  uVar46 = (ulong)pppppppcVar22 & 0xffffffff;
  pppppppcVar29 = pppppppcVar39;
  pppppppcVar24 = pppppppcVar23;
  if ((bRam0000000005e2df9a & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e73b0);
    bRam0000000005e2df9a = 1;
  }
  if (pppppppcVar52 != (code *******)0x0) {
    ppppppcVar45 = *pppppppcVar52;
    uVar47 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar47 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df8e8) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
          goto LAB_03781f64;
        }
        uVar47 = uVar47 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar47 != 0);
    }
    pppppppcVar29 = (code *******)0x5;
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52);
LAB_03781f64:
    uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
    if (pppppppcVar23 != (code *******)0x0) {
      pppppppcVar29 = (code *******)0x0;
      pppppppcVar26 = (code *******)func_0x036d3908(pppppppcVar23,uVar21);
      if (pppppppcVar26 != (code *******)0x0) {
        ppppppcVar45 = *pppppppcVar26;
        uVar47 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar47 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == _DAT_059dfbc0) {
              ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
              goto LAB_03781fe0;
            }
            uVar47 = uVar47 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar47 != 0);
        }
        pppppppcVar29 = (code *******)0x0;
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar26);
LAB_03781fe0:
        plVar33 = (long *)(*(code *)*ppppppcVar45)(pppppppcVar26,ppppppcVar45[1]);
        pppppppcVar43 = pppppppcVar26;
        if (plVar33 != (long *)0x0) {
          lVar27 = *plVar33;
          uVar47 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar47 != 0) {
            piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar48 + -2) == _DAT_059e0788) {
                puVar34 = (undefined8 *)(lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                goto LAB_0378204c;
              }
              uVar47 = uVar47 - 1;
              piVar48 = piVar48 + 4;
            } while (uVar47 != 0);
          }
          pppppppcVar29 = (code *******)0x2;
          puVar34 = (undefined8 *)func_0x024d927c(plVar33);
LAB_0378204c:
          pppppppcVar43 = (code *******)(*(code *)*puVar34)(plVar33,puVar34[1]);
          if (pppppppcVar43 == (code *******)0x0) {
            return (code *******)0x0;
          }
          if (*(byte *)(*pppppppcVar43 + 0x26) < *(byte *)(_DAT_059e73b0 + 0x26)) {
            return pppppppcVar43;
          }
          if ((*pppppppcVar43)[0x19][(ulong)*(byte *)(_DAT_059e73b0 + 0x26) - 1] != _DAT_059e73b0) {
            return pppppppcVar43;
          }
          lVar27 = func_0x036d5ee4(pppppppcVar23,0);
          if (lVar27 != 0) {
            func_0x037040b8(lVar27,*(undefined4 *)(pppppppcVar43 + 6),uVar46,0);
            uVar21 = 0;
            puVar53 = *(undefined **)((long)puVar12 + -600);
            *(undefined8 *)((long)puVar12 + -0x260) = *(undefined8 *)((long)puVar12 + -0x260);
            *(undefined8 *)((long)puVar12 + -0x250) = *(undefined8 *)((long)puVar12 + -0x250);
            *(undefined8 *)((long)puVar12 + -0x248) = *(undefined8 *)((long)puVar12 + -0x248);
            *(undefined8 *)((long)puVar12 + -0x240) = *(undefined8 *)((long)puVar12 + -0x240);
            *(undefined8 *)((long)puVar12 + -0x238) = *(undefined8 *)((long)puVar12 + -0x238);
            plVar33 = (long *)0x5e2d000;
            pppppppcVar26 = pppppppcVar39;
            if ((bRam0000000005e2da61 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,pppppppcVar52,pppppppcVar39,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059e0788);
              bRam0000000005e2da61 = 1;
            }
            if (pppppppcVar52 != (code *******)0x0) {
              ppppppcVar45 = *pppppppcVar52;
              uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
              if (uVar46 != 0) {
                pppppcVar50 = ppppppcVar45[0x16] + 1;
                do {
                  if (pppppcVar50[-1] == _DAT_059df8e8) {
                    ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
                    goto LAB_036e2904;
                  }
                  uVar46 = uVar46 - 1;
                  pppppcVar50 = pppppcVar50 + 2;
                } while (uVar46 != 0);
              }
              pppppppcVar26 = (code *******)0x5;
              ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52);
LAB_036e2904:
              uVar40 = (*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
              ppppppcVar45 = pppppppcVar23[2];
              if (ppppppcVar45 != (code ******)0x0) {
                pppppppcVar26 = (code *******)(*ppppppcVar45)[0x3a];
                plVar35 = (long *)(*(code *)(*ppppppcVar45)[0x39])(ppppppcVar45,uVar40);
                if (plVar35 != (long *)0x0) {
                  lVar27 = *plVar35;
                  uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar46 != 0) {
                    piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                        puVar30 = (undefined8 *)(lVar27 + (long)*piVar48 * 0x10 + 0x138);
                        goto LAB_036e2988;
                      }
                      uVar46 = uVar46 - 1;
                      piVar48 = piVar48 + 4;
                    } while (uVar46 != 0);
                  }
                  pppppppcVar26 = (code *******)0x0;
                  puVar30 = (undefined8 *)func_0x024d927c(plVar35);
LAB_036e2988:
                  plVar36 = (long *)(*(code *)*puVar30)(plVar35,puVar30[1]);
                  plVar33 = plVar35;
                  if (plVar36 != (long *)0x0) {
                    lVar27 = *plVar36;
                    uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar46 != 0) {
                      piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar48 + -2) == _DAT_059e0788) {
                          puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 6) * 0x10 + 0x138);
                          goto LAB_036e29f4;
                        }
                        uVar46 = uVar46 - 1;
                        piVar48 = piVar48 + 4;
                      } while (uVar46 != 0);
                    }
                    puVar30 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059e0788,6);
LAB_036e29f4:
                    pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar36,puVar30[1]);
                    if (((ulong)pppppppcVar26 & 1) == 0) {
                      return pppppppcVar26;
                    }
                    func_0x03727e60(pppppppcVar23,pppppppcVar39,0);
                    *(code *******)((long)puVar12 + -0x290) = unaff_x29;
                    *(undefined8 *)((long)puVar12 + -0x288) =
                         *(undefined8 *)((long)puVar12 + -0x260);
                    *(code ********)((long)puVar12 + -0x280) = unaff_x28;
                    *(code ********)((long)puVar12 + -0x278) = unaff_x27;
                    *(code ********)((long)puVar12 + -0x270) = param_5;
                    *(code ********)((long)puVar12 + -0x268) = pppppppcVar28;
                    *(code ********)((long)puVar12 + -0x260) = pppppppcVar42;
                    *(undefined **)((long)puVar12 + -600) = puVar53;
                    *(undefined8 *)((long)puVar12 + -0x250) =
                         *(undefined8 *)((long)puVar12 + -0x250);
                    *(undefined8 *)((long)puVar12 + -0x248) =
                         *(undefined8 *)((long)puVar12 + -0x248);
                    *(undefined8 *)((long)puVar12 + -0x240) =
                         *(undefined8 *)((long)puVar12 + -0x240);
                    *(undefined8 *)((long)puVar12 + -0x238) =
                         *(undefined8 *)((long)puVar12 + -0x238);
                    if ((bRam0000000005e2dcc2 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059df8e8,pppppppcVar52,pppppppcVar39,0);
                      func_0x0249f8e4(&DAT_059dfbc0);
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_059e0780);
                      func_0x0249f8e4(&DAT_059e0788);
                      func_0x0249f8e4(&DAT_05a27fc8);
                      bRam0000000005e2dcc2 = 1;
                    }
                    *(undefined8 *)((long)puVar12 + -0x2a0) = 0;
                    *(undefined8 *)((long)puVar12 + -0x298) = 0;
                    plVar33 = (long *)0x5e2d000;
                    if (pppppppcVar52 != (code *******)0x0) {
                      ppppppcVar45 = *pppppppcVar52;
                      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                      if (uVar46 != 0) {
                        pppppcVar50 = ppppppcVar45[0x16] + 1;
                        do {
                          if (pppppcVar50[-1] == _DAT_059df8e8) {
                            ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27
                            ;
                            goto LAB_037280d4;
                          }
                          uVar46 = uVar46 - 1;
                          pppppcVar50 = pppppcVar50 + 2;
                        } while (uVar46 != 0);
                      }
                      ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar52,_DAT_059df8e8,5);
LAB_037280d4:
                      plVar35 = (long *)(*(code *)*ppppppcVar45)(pppppppcVar52,ppppppcVar45[1]);
                      if (pppppppcVar23 != (code *******)0x0) {
                        ppppppcVar45 = *pppppppcVar23;
                        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                        if (uVar46 != 0) {
                          pppppcVar50 = ppppppcVar45[0x16] + 1;
                          do {
                            if (pppppcVar50[-1] == _DAT_059dfe48) {
                              ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
                              goto LAB_0372813c;
                            }
                            uVar46 = uVar46 - 1;
                            pppppcVar50 = pppppcVar50 + 2;
                          } while (uVar46 != 0);
                        }
                        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar23,_DAT_059dfe48,0);
LAB_0372813c:
                        plVar36 = (long *)(*(code *)*ppppppcVar45)
                                                    (pppppppcVar23,plVar35,ppppppcVar45[1]);
                        plVar33 = plVar35;
                        if (plVar36 != (long *)0x0) {
                          lVar27 = *plVar36;
                          uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                          if (uVar46 != 0) {
                            piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                                puVar30 = (undefined8 *)(lVar27 + (long)*piVar48 * 0x10 + 0x138);
                                goto LAB_037281a8;
                              }
                              uVar46 = uVar46 - 1;
                              piVar48 = piVar48 + 4;
                            } while (uVar46 != 0);
                          }
                          puVar30 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfbc0,0);
LAB_037281a8:
                          plVar35 = (long *)(*(code *)*puVar30)(plVar36,puVar30[1]);
                          plVar33 = plVar36;
                          if (plVar35 != (long *)0x0) {
                            lVar27 = *plVar35;
                            uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                            if (uVar46 != 0) {
                              piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar48 + -2) == _DAT_059e0788) {
                                  puVar30 = (undefined8 *)
                                            (lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                                  goto LAB_03728214;
                                }
                                uVar46 = uVar46 - 1;
                                piVar48 = piVar48 + 4;
                              } while (uVar46 != 0);
                            }
                            puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059e0788,2);
LAB_03728214:
                            plVar35 = (long *)(*(code *)*puVar30)(plVar35,puVar30[1]);
                            ppppppcVar45 = *pppppppcVar23;
                            uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                            if (uVar46 != 0) {
                              pppppcVar50 = ppppppcVar45[0x16] + 1;
                              do {
                                if (pppppcVar50[-1] == _DAT_059dfe48) {
                                  ppppppcVar45 = ppppppcVar45 +
                                                 (long)(*(int *)pppppcVar50 + 6) * 2 + 0x27;
                                  goto LAB_03728274;
                                }
                                uVar46 = uVar46 - 1;
                                pppppcVar50 = pppppcVar50 + 2;
                              } while (uVar46 != 0);
                            }
                            ppppppcVar45 = (code ******)
                                           func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_03728274:
                            lVar27 = (*(code *)*ppppppcVar45)(pppppppcVar23,ppppppcVar45[1]);
                            if (lVar27 != 0) {
                              ppppppcVar45 = *pppppppcVar23;
                              uVar21 = *(undefined8 *)(lVar27 + 0x28);
                              uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                              if (uVar46 != 0) {
                                pppppcVar50 = ppppppcVar45[0x16] + 1;
                                do {
                                  if (pppppcVar50[-1] == _DAT_059dfe48) {
                                    ppppppcVar45 = ppppppcVar45 +
                                                   (long)(*(int *)pppppcVar50 + 6) * 2 + 0x27;
                                    goto LAB_037282d8;
                                  }
                                  uVar46 = uVar46 - 1;
                                  pppppcVar50 = pppppcVar50 + 2;
                                } while (uVar46 != 0);
                              }
                              ppppppcVar45 = (code ******)
                                             func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_037282d8:
                              lVar27 = (*(code *)*ppppppcVar45)(pppppppcVar23,ppppppcVar45[1]);
                              if (lVar27 != 0) {
                                ppppppcVar45 = *pppppppcVar23;
                                uVar40 = *(undefined8 *)(lVar27 + 0x30);
                                uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                                if (uVar46 != 0) {
                                  pppppcVar50 = ppppppcVar45[0x16] + 1;
                                  do {
                                    if (pppppcVar50[-1] == _DAT_059dfe48) {
                                      ppppppcVar45 = ppppppcVar45 +
                                                     (long)(*(int *)pppppcVar50 + 0x24) * 2 + 0x27;
                                      goto LAB_0372833c;
                                    }
                                    uVar46 = uVar46 - 1;
                                    pppppcVar50 = pppppcVar50 + 2;
                                  } while (uVar46 != 0);
                                }
                                ppppppcVar45 = (code ******)
                                               func_0x024d927c(pppppppcVar23,_DAT_059dfe48,0x24);
LAB_0372833c:
                                uVar15 = (*(code *)*ppppppcVar45)(pppppppcVar23,ppppppcVar45[1]);
                                ppppppcVar45 = *pppppppcVar23;
                                uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                                if (uVar46 != 0) {
                                  pppppcVar50 = ppppppcVar45[0x16] + 1;
                                  do {
                                    if (pppppcVar50[-1] == _DAT_059dfe48) {
                                      ppppppcVar45 = ppppppcVar45 +
                                                     (long)(*(int *)pppppcVar50 + 6) * 2 + 0x27;
                                      goto LAB_0372839c;
                                    }
                                    uVar46 = uVar46 - 1;
                                    pppppcVar50 = pppppcVar50 + 2;
                                  } while (uVar46 != 0);
                                }
                                ppppppcVar45 = (code ******)
                                               func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_0372839c:
                                uVar37 = (*(code *)*ppppppcVar45)(pppppppcVar23,ppppppcVar45[1]);
                                uVar19 = func_0x03530c84(pppppppcVar39,0);
                                if (plVar35 != (long *)0x0) {
                                  lVar27 = *plVar35;
                                  uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                                  if (uVar46 != 0) {
                                    piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar48 + -2) == _DAT_059e0780) {
                                        puVar30 = (undefined8 *)
                                                  (lVar27 + (long)*piVar48 * 0x10 + 0x138);
                                        goto LAB_03728418;
                                      }
                                      uVar46 = uVar46 - 1;
                                      piVar48 = piVar48 + 4;
                                    } while (uVar46 != 0);
                                  }
                                  puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059e0780,0);
LAB_03728418:
                                  pcVar1 = (code *)*puVar30;
                                  *(undefined8 *)((long)puVar12 + -0x2b0) = puVar30[1];
                                  auVar57 = (*pcVar1)(plVar35,pppppppcVar52,plVar36,uVar21,uVar40,
                                                      uVar37,uVar15,uVar19);
                                  ppppppcVar45 = *pppppppcVar23;
                                  *(undefined1 (*) [16])((long)puVar12 + -0x2a0) = auVar57;
                                  uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                                  if (uVar46 != 0) {
                                    pppppcVar50 = ppppppcVar45[0x16] + 1;
                                    do {
                                      if (pppppcVar50[-1] == _DAT_059dfe48) {
                                        ppppppcVar45 = ppppppcVar45 +
                                                       (long)(*(int *)pppppcVar50 + 6) * 2 + 0x27;
                                        goto LAB_037284a0;
                                      }
                                      uVar46 = uVar46 - 1;
                                      pppppcVar50 = pppppcVar50 + 2;
                                    } while (uVar46 != 0);
                                  }
                                  ppppppcVar45 = (code ******)
                                                 func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_037284a0:
                                  lVar27 = (*(code *)*ppppppcVar45)(pppppppcVar23,ppppppcVar45[1]);
                                  if (lVar27 != 0) {
                                    *(undefined1 (*) [16])(lVar27 + 0x18) = auVar57;
                                    lVar27 = *(long *)(_DAT_05a27fc8 + 0x20);
                                    if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
                                      lVar27 = func_0x024d8f40();
                                    }
                                    pppppppcVar26 =
                                         (code *******)
                                         func_0x0249f90c((undefined1 *)((long)puVar12 + -0x2a0),
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                          0x80));
                                    if (*(char *)pppppppcVar26 != '\0') {
                                      return pppppppcVar26;
                                    }
                                    lVar27 = *plVar36;
                                    uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                                    if (uVar46 != 0) {
                                      piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                      do {
                                        if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                                          puVar30 = (undefined8 *)
                                                    (lVar27 + (long)*piVar48 * 0x10 + 0x138);
                                          goto LAB_0372853c;
                                        }
                                        uVar46 = uVar46 - 1;
                                        piVar48 = piVar48 + 4;
                                      } while (uVar46 != 0);
                                    }
                                    puVar30 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfbc0,0)
                                    ;
LAB_0372853c:
                                    plVar35 = (long *)(*(code *)*puVar30)(plVar36,puVar30[1]);
                                    if (plVar35 != (long *)0x0) {
                                      lVar27 = *plVar35;
                                      uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                                      if (uVar46 != 0) {
                                        piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar48 + -2) == _DAT_059e0788) {
                                            puVar30 = (undefined8 *)
                                                      (lVar27 + (long)(*piVar48 + 7) * 0x10 + 0x138)
                                            ;
                                            goto LAB_037285a8;
                                          }
                                          uVar46 = uVar46 - 1;
                                          piVar48 = piVar48 + 4;
                                        } while (uVar46 != 0);
                                      }
                                      puVar30 = (undefined8 *)
                                                func_0x024d927c(plVar35,_DAT_059e0788,7);
LAB_037285a8:
                                      pppppppcVar26 =
                                           (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
                                      if (((ulong)pppppppcVar26 & 1) == 0) {
                                        return pppppppcVar26;
                                      }
                                      ppppppcVar45 = *pppppppcVar23;
                                      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                                      if (uVar46 != 0) {
                                        pppppcVar50 = ppppppcVar45[0x16] + 1;
                                        do {
                                          if (pppppcVar50[-1] == _DAT_059dfe48) {
                                            ppppppcVar45 = ppppppcVar45 +
                                                           (long)(*(int *)pppppcVar50 + 6) * 2 +
                                                           0x27;
                                            goto LAB_03728608;
                                          }
                                          uVar46 = uVar46 - 1;
                                          pppppcVar50 = pppppcVar50 + 2;
                                        } while (uVar46 != 0);
                                      }
                                      ppppppcVar45 = (code ******)
                                                     func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_03728608:
                                      plVar33 = (long *)(*(code *)*ppppppcVar45)
                                                                  (pppppppcVar23,ppppppcVar45[1]);
                                      ppppppcVar45 = *pppppppcVar23;
                                      uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                                      if (uVar46 != 0) {
                                        pppppcVar50 = ppppppcVar45[0x16] + 1;
                                        do {
                                          if (pppppcVar50[-1] == _DAT_059dfe48) {
                                            ppppppcVar45 = ppppppcVar45 +
                                                           (long)(*(int *)pppppcVar50 + 6) * 2 +
                                                           0x27;
                                            goto LAB_03728668;
                                          }
                                          uVar46 = uVar46 - 1;
                                          pppppcVar50 = pppppcVar50 + 2;
                                        } while (uVar46 != 0);
                                      }
                                      ppppppcVar45 = (code ******)
                                                     func_0x024d927c(pppppppcVar23,_DAT_059dfe48,6);
LAB_03728668:
                                      lVar27 = (*(code *)*ppppppcVar45)
                                                         (pppppppcVar23,ppppppcVar45[1]);
                                      if ((lVar27 != 0) && (plVar33 != (long *)0x0)) {
                                        pppppppcVar26 =
                                             (code *******)
                                             func_0x03704874(plVar33,*(undefined8 *)(lVar27 + 0x28),
                                                             0);
                                        return pppppppcVar26;
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
                    plVar35 = (long *)func_0x0249fb90();
                    *(undefined8 *)((long)puVar12 + -0x2d0) = 0x37286b0;
                    *(long **)((long)puVar12 + -0x2c0) = plVar33;
                    *(code ********)((long)puVar12 + -0x2b8) = pppppppcVar23;
                    if ((bRam0000000005e2dcc1 & 1) == 0) {
                      func_0x0249f8e4(&DAT_059dfe48);
                      func_0x0249f8e4(&DAT_05a27d90);
                      func_0x0249f8e4(&DAT_05a27d88);
                      bRam0000000005e2dcc1 = 1;
                    }
                    *(undefined8 *)((long)puVar12 + -0x2d8) = 0;
                    if (plVar35 != (long *)0x0) {
                      lVar27 = *plVar35;
                      uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                      if (uVar46 != 0) {
                        piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(code *****)(piVar48 + -2) == _DAT_059dfe48) {
                            puVar30 = (undefined8 *)
                                      (lVar27 + (long)(*piVar48 + 0x22) * 0x10 + 0x138);
                            goto LAB_03728758;
                          }
                          uVar46 = uVar46 - 1;
                          piVar48 = piVar48 + 4;
                        } while (uVar46 != 0);
                      }
                      puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfe48,0x22);
LAB_03728758:
                      lVar27 = (*(code *)*puVar30)(plVar35,puVar30[1]);
                      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x68) == 0)) {
                        uVar21 = 0;
                        *(undefined8 *)((long)puVar12 + -0x2d8) = 0;
                      }
                      else {
                        uVar15 = *(undefined4 *)(*(long *)(lVar27 + 0x68) + 0x10);
                        *(undefined8 *)((long)puVar12 + -0x2e0) = 0;
                        *(undefined4 *)((long)puVar12 + -0x2c4) = uVar15;
                        func_0x028866e4((undefined1 *)((long)puVar12 + -0x2e0),
                                        (undefined1 *)((long)puVar12 + -0x2c4),_DAT_05a27d88);
                        uVar21 = *(undefined8 *)((long)puVar12 + -0x2e0);
                      }
                      lVar27 = _DAT_05a27d90;
                      *(undefined8 *)((long)puVar12 + -0x2d8) = uVar21;
                      lVar25 = *(long *)(_DAT_05a27d90 + 0x20);
                      uVar4 = *(ushort *)(lVar25 + 0x135);
                      lVar20 = lVar25;
                      if ((uVar4 & 1) == 0) {
                        lVar25 = func_0x024d8f40(lVar25);
                        uVar4 = *(ushort *)(*(long *)(lVar27 + 0x20) + 0x135);
                        lVar20 = *(long *)(lVar27 + 0x20);
                      }
                      uVar15 = *(undefined4 *)(**(long **)(lVar25 + 0xc0) + 0xfc);
                      if ((uVar4 & 1) == 0) {
                        lVar20 = func_0x024d8f40(lVar20);
                      }
                      uVar21 = func_0x0249f90c((undefined1 *)((long)puVar12 + -0x2d8),
                                               *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) +
                                                        0x80) + 0x20);
                      func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x2e0),uVar21,uVar15);
                      return (code *******)(ulong)*(uint *)((long)puVar12 + -0x2e0);
                    }
                    auVar57 = func_0x0249fb90();
                    lVar27 = auVar57._8_8_;
                    *(undefined8 *)((long)puVar12 + -0x2f0) = 0x372883c;
                    if (lVar27 != 0) {
                      if (*(int *)(auVar57._0_8_ + 0x10) < *(int *)(lVar27 + 0x18)) {
                        uVar16 = 0;
LAB_03728870:
                        return (code *******)(ulong)(uVar16 & 1);
                      }
                      lVar20 = *(long *)(auVar57._0_8_ + 0x18);
                      if (lVar20 != 0) {
                        uVar16 = func_0x0387f210(lVar20,lVar27,0);
                        uVar16 = uVar16 ^ 1;
                        goto LAB_03728870;
                      }
                    }
                    auVar57 = func_0x0249fb90();
                    lVar27 = auVar57._8_8_;
                    *(undefined8 *)((long)puVar12 + -0x300) = 0x3728880;
                    if (lVar27 == 0) {
LAB_037288c0:
                      lVar27 = func_0x0249fb90();
                      return *(code ********)(lVar27 + 0x10);
                    }
                    if (*(int *)(auVar57._0_8_ + 0x10) < *(int *)(lVar27 + 0x18)) {
                      lVar20 = *(long *)(auVar57._0_8_ + 0x18);
                      if (lVar20 == 0) goto LAB_037288c0;
                      uVar16 = func_0x0387f210(lVar20,lVar27,0);
                      uVar16 = uVar16 ^ 1;
                    }
                    else {
                      uVar16 = 0;
                    }
                    return (code *******)(ulong)(uVar16 & 1);
                  }
                }
              }
            }
            uVar40 = func_0x0249fb90();
            *(undefined8 *)((long)puVar12 + -0x2a0) = 0x36e2a48;
            *(code ********)((long)puVar12 + -0x290) = pppppppcVar42;
            *(undefined **)((long)puVar12 + -0x288) = puVar53;
            *(long **)((long)puVar12 + -0x280) = plVar33;
            *(code ********)((long)puVar12 + -0x278) = pppppppcVar23;
            *(code ********)((long)puVar12 + -0x270) = pppppppcVar52;
            *(code ********)((long)puVar12 + -0x268) = pppppppcVar39;
            puVar49 = (undefined *)0x5e2d000;
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
            *(undefined8 *)((long)puVar12 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2b8) = 0;
            plVar35 = (long *)func_0x0249fb80(_DAT_059e7a38);
            func_0x04431c8c(plVar35,0);
            if (plVar35 != (long *)0x0) {
              pppppppcVar26 = (code *******)0x0;
              func_0x0442b590(plVar35,_DAT_05a9e920);
              lVar27 = func_0x036d5e58(uVar40);
              if ((lVar27 != 0) && (*(long *)(lVar27 + 0x28) != 0)) {
                puVar49 = &DAT_05a9fca8;
                func_0x04433eb4(plVar35,*(undefined4 *)(*(long *)(lVar27 + 0x28) + 0x10),0);
                func_0x0442b540(plVar35,10,0);
                pppppppcVar26 = (code *******)0x0;
                func_0x0442b590(plVar35,_DAT_05a9fca8);
                lVar27 = func_0x036d5e58(uVar40);
                if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
                  puVar49 = &DAT_05a7a1e0;
                  func_0x04433eb4(plVar35,*(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x38),0);
                  func_0x0442b540(plVar35,10,0);
                  pppppppcVar26 = (code *******)0x0;
                  func_0x0442b590(plVar35,_DAT_05a7a1e0);
                  lVar27 = func_0x036d5e58(uVar40);
                  if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
                    puVar49 = &DAT_05a815a8;
                    func_0x04433eb4(plVar35,*(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x14),0);
                    func_0x0442b540(plVar35,10,0);
                    pppppppcVar26 = (code *******)0x0;
                    func_0x0442b590(plVar35,_DAT_05a815a8);
                    lVar27 = func_0x036d5e58(uVar40);
                    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
                      puVar49 = &DAT_05a934d8;
                      func_0x04433eb4(plVar35,*(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x10),0);
                      func_0x0442b540(plVar35,10,0);
                      pppppppcVar26 = (code *******)0x0;
                      func_0x0442b590(plVar35,_DAT_05a934d8);
                      lVar27 = func_0x036d5e58(uVar40);
                      if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
                        puVar49 = &DAT_05a27fc8;
                        auVar57 = func_0x03753e70(*(long *)(lVar27 + 0x18),0);
                        *(undefined1 (*) [16])((long)puVar12 + -0x2b8) = auVar57;
                        lVar27 = *(long *)(_DAT_05a27fc8 + 0x20);
                        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                          lVar27 = func_0x024d8f40();
                        }
                        plVar33 = (long *)&DAT_059e2ba0;
                        puVar53 = &DAT_05a79720;
                        pppppppcVar42 = (code *******)&DAT_05a9e3c0;
                        pcVar32 = (char *)func_0x0249f90c((undefined1 *)((long)puVar12 + -0x2b8),
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)(lVar27 + 0xc0) + 8)
                                                           + 0x80));
                        lVar27 = _DAT_05a27fb0;
                        if (*pcVar32 == '\0') {
                          lVar27 = 0;
                        }
                        else {
                          lVar25 = *(long *)(_DAT_05a27fb0 + 0x20);
                          uVar4 = *(ushort *)(lVar25 + 0x135);
                          lVar20 = lVar25;
                          if ((uVar4 & 1) == 0) {
                            lVar25 = func_0x024d8f40(lVar25);
                            uVar4 = *(ushort *)(*(long *)(lVar27 + 0x20) + 0x135);
                            lVar20 = *(long *)(lVar27 + 0x20);
                          }
                          puVar49 = (undefined *)(ulong)*(uint *)(**(long **)(lVar25 + 0xc0) + 0xfc)
                          ;
                          if ((uVar4 & 1) == 0) {
                            lVar20 = func_0x024d8f40(lVar20);
                          }
                          uVar37 = func_0x0249f90c((undefined1 *)((long)puVar12 + -0x2b8),
                                                   *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
                          func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x298),uVar37,puVar49);
                          iVar17 = *(int *)(_DAT_059e2ba0 + 0xe4);
                          *(undefined8 *)((long)puVar12 + -0x2c0) =
                               *(undefined8 *)((long)puVar12 + -0x298);
                          if (iVar17 == 0) {
                            func_0x0249fa64();
                          }
                          lVar27 = func_0x0430e224((undefined1 *)((long)puVar12 + -0x2c0),0);
                        }
                        lVar20 = _DAT_05a79720;
                        if (lVar27 != 0) {
                          lVar20 = lVar27;
                        }
                        func_0x0442b590(plVar35,lVar20,0);
                        func_0x0442b540(plVar35,10,0);
                        pppppppcVar26 = (code *******)0x0;
                        func_0x0442b590(plVar35,_DAT_05a9e3c0);
                        lVar27 = func_0x036d5e58(uVar40);
                        if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
                          uVar21 = func_0x03753af4(*(long *)(lVar27 + 0x18),0);
                          *(undefined8 *)((long)puVar12 + -0x2a8) = uVar21;
                          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2ba0);
                          }
                          uVar46 = func_0x0430dd84(uVar21,*(undefined8 *)
                                                           (*(long *)(_DAT_059e2ba0 + 0xb8) + 8),0);
                          lVar27 = _DAT_05a79720;
                          if ((uVar46 & 1) != 0) {
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64();
                            }
                            lVar27 = func_0x0430e224((undefined1 *)((long)puVar12 + -0x2a8),0);
                          }
                          func_0x0442b590(plVar35,lVar27,0);
                          pppppppcVar26 =
                               (code *******)
                               (**(code **)(*plVar35 + 0x168))
                                         (plVar35,*(undefined8 *)(*plVar35 + 0x170));
                          return pppppppcVar26;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar27 = func_0x0249fb90();
            *(undefined8 *)((long)puVar12 + -0x300) = 0x36e2e70;
            *(code ********)((long)puVar12 + -0x2f0) = pppppppcVar42;
            *(undefined **)((long)puVar12 + -0x2e8) = puVar53;
            *(long **)((long)puVar12 + -0x2e0) = plVar33;
            *(undefined **)((long)puVar12 + -0x2d8) = puVar49;
            *(undefined8 *)((long)puVar12 + -0x2d0) = uVar40;
            *(long **)((long)puVar12 + -0x2c8) = plVar35;
            if ((bRam0000000005e2da63 & 1) == 0) {
              func_0x0249f8e4(&DAT_059da1f8);
              func_0x0249f8e4(&DAT_059fa1e8);
              func_0x0249f8e4(&DAT_059df8e8);
              bRam0000000005e2da63 = 1;
            }
            if (*(int *)(_DAT_059da1f8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            pppppppcVar22 = (code *******)func_0x03962be0(0);
            if (((ulong)pppppppcVar22 & 1) == 0) {
              return pppppppcVar22;
            }
            uVar40 = 0x5e2d000;
            puVar49 = &DAT_059da1f8;
            if (pppppppcVar26 != (code *******)0x0) {
              ppppppcVar45 = *pppppppcVar26;
              uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
              if (uVar46 != 0) {
                pppppcVar50 = ppppppcVar45[0x16] + 1;
                do {
                  if (pppppcVar50[-1] == _DAT_059df8e8) {
                    ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
                    goto LAB_036e2f54;
                  }
                  uVar46 = uVar46 - 1;
                  pppppcVar50 = pppppcVar50 + 2;
                } while (uVar46 != 0);
              }
              ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar26,_DAT_059df8e8,5);
LAB_036e2f54:
              uVar37 = (*(code *)*ppppppcVar45)(pppppppcVar26,ppppppcVar45[1]);
              if (lVar27 != 0) {
                puVar18 = (undefined *)func_0x036eb814(lVar27,uVar37,0);
                uVar40 = uVar37;
                if (*(long *)(lVar27 + 0x10) != 0) {
                  pppppppcVar42 = (code *******)&DAT_059fa1e8;
                  plVar33 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  puVar53 = (undefined *)(ulong)*(uint *)(plVar33[1] + 0xfc);
                  uVar21 = func_0x0249f90c(*(long *)(lVar27 + 0x10),*(undefined8 *)(*plVar33 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x2f4),uVar21,puVar53);
                  uVar21 = 0;
                  func_0x034b666c(puVar18,pppppppcVar26,*(undefined4 *)((long)puVar12 + -0x2f4),0);
                  puVar49 = puVar18;
                  if (*(long *)(lVar27 + 0x10) != 0) {
                    plVar33 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                    puVar53 = (undefined *)(ulong)*(uint *)(plVar33[1] + 0xfc);
                    uVar21 = func_0x0249f90c(*(long *)(lVar27 + 0x10),
                                             *(undefined8 *)(*plVar33 + 0x80));
                    func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x2f4),uVar21,puVar53);
                    uVar21 = 0;
                    func_0x034b676c(puVar18,pppppppcVar26,*(undefined4 *)((long)puVar12 + -0x2f4),0)
                    ;
                    if (*(long *)(lVar27 + 0x10) != 0) {
                      plVar33 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                      puVar53 = (undefined *)(ulong)*(uint *)(plVar33[1] + 0xfc);
                      uVar21 = func_0x0249f90c(*(long *)(lVar27 + 0x10),
                                               *(undefined8 *)(*plVar33 + 0x80));
                      func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x2f4),uVar21,puVar53);
                      uVar21 = 0;
                      func_0x034b6ccc(puVar18,pppppppcVar26,*(undefined4 *)((long)puVar12 + -0x2f4),
                                      0);
                      if (*(long *)(lVar27 + 0x10) != 0) {
                        plVar33 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                        pppppppcVar26 = (code *******)(ulong)*(uint *)(plVar33[1] + 0xfc);
                        uVar21 = func_0x0249f90c(*(long *)(lVar27 + 0x10),
                                                 *(undefined8 *)(*plVar33 + 0x80));
                        func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x2f4),uVar21,pppppppcVar26)
                        ;
                        uVar21 = 0;
                        func_0x034b6dc0(puVar18,uVar37,*(undefined4 *)((long)puVar12 + -0x2f4),0);
                        plVar33 = *(long **)(lVar27 + 0x10);
                        if (plVar33 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036e30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          pppppppcVar26 =
                               (code *******)
                               (**(code **)(*plVar33 + 0x1c8))
                                         (plVar33,uVar37,*(undefined8 *)(*plVar33 + 0x1d0));
                          return pppppppcVar26;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar55 = func_0x0249fb90();
            plVar33 = auVar55._8_8_;
            *(undefined8 *)((long)puVar12 + -800) = 0x36e30d4;
            *(undefined8 *)((long)puVar12 + -0x318) = uVar40;
            *(code ********)((long)puVar12 + -0x310) = pppppppcVar26;
            *(long *)((long)puVar12 + -0x308) = lVar27;
            if ((bRam0000000005e2da64 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da64 = 1;
            }
            if (plVar33 != (long *)0x0) {
              lVar27 = *plVar33;
              uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar46 != 0) {
                piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
                    puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 5) * 0x10 + 0x138);
                    goto LAB_036e3178;
                  }
                  uVar46 = uVar46 - 1;
                  piVar48 = piVar48 + 4;
                } while (uVar46 != 0);
              }
              puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_036e3178:
              uVar40 = (*(code *)*puVar30)(plVar33,puVar30[1]);
              plVar33 = *(long **)(auVar55._0_8_ + 0x10);
              if (plVar33 != (long *)0x0) {
                plVar33 = (long *)(**(code **)(*plVar33 + 0x1c8))
                                            (plVar33,uVar40,*(undefined8 *)(*plVar33 + 0x1d0));
                if (plVar33 == (long *)0x0) {
                  return (code *******)0x1;
                }
                lVar27 = *plVar33;
                auVar55._8_8_ = &DAT_059dfbc0;
                auVar55._0_8_ = plVar33;
                uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                      puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3200;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0x12);
LAB_036e3200:
                lVar27 = (*(code *)*puVar30)(plVar33,puVar30[1]);
                if (lVar27 == 0) {
                  return (code *******)0x1;
                }
                lVar27 = *plVar33;
                uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                      puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3270;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0x12);
LAB_036e3270:
                plVar33 = (long *)(*(code *)*puVar30)(plVar33,puVar30[1]);
                if (plVar33 != (long *)0x0) {
                  lVar27 = *plVar33;
                  uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar46 != 0) {
                    piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar48 + -2) == _DAT_059df2a8) {
                        puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                        goto LAB_036e32dc;
                      }
                      uVar46 = uVar46 - 1;
                      piVar48 = piVar48 + 4;
                    } while (uVar46 != 0);
                  }
                  puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df2a8,2);
LAB_036e32dc:
                    /* WARNING: Could not recover jumptable at 0x036e32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar33,puVar30[1]);
                  return pppppppcVar26;
                }
              }
            }
            auVar56 = func_0x0249fb90();
            plVar33 = auVar56._8_8_;
            *(undefined8 *)((long)puVar12 + -0x340) = 0x36e32f4;
            *(undefined8 *)((long)puVar12 + -0x338) = 0x5e2d000;
            *(long *)((long)puVar12 + -0x330) = auVar55._8_8_;
            *(long *)((long)puVar12 + -0x328) = auVar55._0_8_;
            if ((bRam0000000005e2da65 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df2a8);
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da65 = 1;
            }
            if (plVar33 != (long *)0x0) {
              lVar27 = *plVar33;
              uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar46 != 0) {
                piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
                    puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 5) * 0x10 + 0x138);
                    goto LAB_036e3398;
                  }
                  uVar46 = uVar46 - 1;
                  piVar48 = piVar48 + 4;
                } while (uVar46 != 0);
              }
              puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_036e3398:
              uVar40 = (*(code *)*puVar30)(plVar33,puVar30[1]);
              plVar33 = *(long **)(auVar56._0_8_ + 0x10);
              if (plVar33 != (long *)0x0) {
                plVar33 = (long *)(**(code **)(*plVar33 + 0x1c8))
                                            (plVar33,uVar40,*(undefined8 *)(*plVar33 + 0x1d0));
                if (plVar33 == (long *)0x0) {
                  return (code *******)0x0;
                }
                lVar27 = *plVar33;
                auVar56._8_8_ = &DAT_059dfbc0;
                auVar56._0_8_ = plVar33;
                uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                      puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3420;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0x12);
LAB_036e3420:
                lVar27 = (*(code *)*puVar30)(plVar33,puVar30[1]);
                if (lVar27 == 0) {
                  return (code *******)0x0;
                }
                lVar27 = *plVar33;
                uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                      puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 0x12) * 0x10 + 0x138);
                      goto LAB_036e3490;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0x12);
LAB_036e3490:
                plVar33 = (long *)(*(code *)*puVar30)(plVar33,puVar30[1]);
                if (plVar33 != (long *)0x0) {
                  lVar27 = *plVar33;
                  uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar46 != 0) {
                    piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar48 + -2) == _DAT_059df2a8) {
                        puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 3) * 0x10 + 0x138);
                        goto LAB_036e34fc;
                      }
                      uVar46 = uVar46 - 1;
                      piVar48 = piVar48 + 4;
                    } while (uVar46 != 0);
                  }
                  puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df2a8,3);
LAB_036e34fc:
                    /* WARNING: Could not recover jumptable at 0x036e350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar33,puVar30[1]);
                  return pppppppcVar26;
                }
              }
            }
            auVar57 = func_0x0249fb90();
            plVar33 = auVar57._8_8_;
            ppppppcVar45 = auVar57._0_8_;
            *(undefined8 *)((long)puVar12 + -0x370) = 0x36e3514;
            *(undefined **)((long)puVar12 + -0x360) = puVar49;
            *(undefined8 *)((long)puVar12 + -0x358) = 0x5e2d000;
            *(long *)((long)puVar12 + -0x350) = auVar56._8_8_;
            *(long *)((long)puVar12 + -0x348) = auVar56._0_8_;
            lVar27 = 0x5e2d000;
            if ((bRam0000000005e2da66 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfbc0);
              bRam0000000005e2da66 = 1;
            }
            lVar20 = func_0x036d5e58(ppppppcVar45);
            if (lVar20 != 0) {
              lVar27 = *(long *)(lVar20 + 0x20);
              puVar49 = &DAT_059dfbc0;
              if (lVar27 != 0) {
                if (plVar33 == (long *)0x0) goto LAB_036e3670;
                lVar20 = *plVar33;
                uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                      puVar30 = (undefined8 *)(lVar20 + (long)*piVar48 * 0x10 + 0x138);
                      goto LAB_036e35b4;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,0);
LAB_036e35b4:
                uVar40 = (*(code *)*puVar30)(plVar33,puVar30[1]);
                func_0x03704ea8(lVar27,uVar40,0);
              }
              pppppppcVar26 = (code *******)func_0x036d5e58(ppppppcVar45);
              if (pppppppcVar26 != (code *******)0x0) {
                ppppppcVar45 = pppppppcVar26[3];
                if (ppppppcVar45 == (code ******)0x0) {
                  return pppppppcVar26;
                }
                if (plVar33 != (long *)0x0) {
                  lVar27 = *plVar33;
                  uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar46 != 0) {
                    piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                        puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 3) * 0x10 + 0x138);
                        goto LAB_036e3648;
                      }
                      uVar46 = uVar46 - 1;
                      piVar48 = piVar48 + 4;
                    } while (uVar46 != 0);
                  }
                  puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059dfbc0,3);
LAB_036e3648:
                  plVar33 = (long *)(*(code *)*puVar30)(plVar33,puVar30[1]);
                  uVar37 = 0;
                  uVar40 = *(undefined8 *)((long)puVar12 + -0x360);
                  *(undefined8 *)((long)puVar12 + -0x380) = *(undefined8 *)((long)puVar12 + -0x370);
                  *(code ********)((long)puVar12 + -0x370) = pppppppcVar42;
                  *(undefined **)((long)puVar12 + -0x368) = puVar53;
                  *(undefined8 *)((long)puVar12 + -0x360) = uVar40;
                  *(undefined8 *)((long)puVar12 + -0x358) = *(undefined8 *)((long)puVar12 + -0x358);
                  *(undefined8 *)((long)puVar12 + -0x350) = *(undefined8 *)((long)puVar12 + -0x350);
                  *(undefined8 *)((long)puVar12 + -0x348) = *(undefined8 *)((long)puVar12 + -0x348);
                  uVar46 = 0x5e2d000;
                  if ((bRam0000000005e2de65 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb60);
                    func_0x0249f8e4(&DAT_059deb70);
                    func_0x0249f8e4(&DAT_059e2548);
                    bRam0000000005e2de65 = 1;
                  }
                  if (plVar33 != (long *)0x0) {
                    lVar27 = *plVar33;
                    uVar46 = (ulong)*(uint *)((long)ppppppcVar45 + 0x14);
                    uVar47 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar47 != 0) {
                      piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar48 + -2) == _DAT_059deb70) {
                          puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                          goto LAB_037548ac;
                        }
                        uVar47 = uVar47 - 1;
                        piVar48 = piVar48 + 4;
                      } while (uVar47 != 0);
                    }
                    uVar37 = 2;
                    puVar30 = (undefined8 *)func_0x024d927c(plVar33);
LAB_037548ac:
                    plVar35 = (long *)(*(code *)*puVar30)(plVar33,puVar30[1]);
                    if (plVar35 != (long *)0x0) {
                      lVar27 = *plVar35;
                      uVar15 = *(undefined4 *)(ppppppcVar45 + 0xe);
                      uVar2 = *(undefined4 *)(ppppppcVar45 + 2);
                      uVar3 = *(undefined1 *)((long)ppppppcVar45 + 0x94);
                      uVar47 = (ulong)*(ushort *)(lVar27 + 0x12e);
                      if (uVar47 != 0) {
                        piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(code *****)(piVar48 + -2) == _DAT_059deb60) {
                            puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_03754930;
                          }
                          uVar47 = uVar47 - 1;
                          piVar48 = piVar48 + 4;
                        } while (uVar47 != 0);
                      }
                      puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb60,0xc);
LAB_03754930:
                      uVar15 = (*(code *)*puVar30)(plVar35,CONCAT44(uVar15,uVar2),uVar3,puVar30[1]);
                      if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2548);
                      }
                      pppppppcVar26 = (code *******)func_0x045a9bd0(uVar46,uVar15,0);
                      *(int *)((long)ppppppcVar45 + 0x14) = (int)pppppppcVar26;
                      return pppppppcVar26;
                    }
                  }
                  auVar57 = func_0x0249fb90();
                  plVar35 = auVar57._8_8_;
                  lVar27 = auVar57._0_8_;
                  *(undefined8 *)((long)puVar12 + -0x3b0) = 0x3754988;
                  *(undefined **)((long)puVar12 + -0x3a8) = puVar53;
                  *(undefined8 *)((long)puVar12 + -0x3a0) = uVar40;
                  *(long **)((long)puVar12 + -0x398) = plVar33;
                  *(ulong *)((long)puVar12 + -0x390) = uVar46;
                  *(code *******)((long)puVar12 + -0x388) = ppppppcVar45;
                  uVar40 = uVar37;
                  if ((bRam0000000005e2de66 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    bRam0000000005e2de66 = 1;
                  }
                  if (plVar35 != (long *)0x0) {
                    lVar20 = *plVar35;
                    iVar17 = *(int *)(lVar27 + 0x90);
                    uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
                    if (uVar46 != 0) {
                      piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar48 + -2) == _DAT_059deb78) {
                          puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                          goto LAB_03754a3c;
                        }
                        uVar46 = uVar46 - 1;
                        piVar48 = piVar48 + 4;
                      } while (uVar46 != 0);
                    }
                    puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb78,2);
LAB_03754a3c:
                    pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
                    if (iVar17 < (int)pppppppcVar26) {
                      uVar21 = func_0x03530c84(uVar37,0);
                      lVar20 = *plVar35;
                      uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
                      if (uVar46 != 0) {
                        piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar48 + -2) == _DAT_059deb78) {
                            puVar30 = (undefined8 *)(lVar20 + (long)*piVar48 * 0x10 + 0x138);
                            goto LAB_03754aac;
                          }
                          uVar46 = uVar46 - 1;
                          piVar48 = piVar48 + 4;
                        } while (uVar46 != 0);
                      }
                      puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb78,0);
LAB_03754aac:
                      uVar40 = (*(code *)*puVar30)(plVar35,puVar30[1]);
                      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                        func_0x0249fa64(_DAT_059e2ba0);
                      }
                      uVar21 = func_0x0430d994(uVar21,uVar40,0);
                      *(undefined8 *)((long)puVar12 + -0x3b8) = uVar21;
                      *(undefined8 *)((long)puVar12 + -0x3d0) = 0;
                      *(undefined8 *)((long)puVar12 + -0x3c8) = 0;
                      pppppppcVar26 =
                           (code *******)
                           func_0x028866e4((undefined1 *)((long)puVar12 + -0x3d0),
                                           (undefined1 *)((long)puVar12 + -0x3b8),_DAT_05a27fa0);
                      uVar21 = *(undefined8 *)((long)puVar12 + -0x3d0);
                      *(undefined8 *)(lVar27 + 0x88) = *(undefined8 *)((long)puVar12 + -0x3c8);
                      *(undefined8 *)(lVar27 + 0x80) = uVar21;
                    }
                    return pppppppcVar26;
                  }
                  auVar57 = func_0x0249fb90();
                  lVar20 = auVar57._0_8_;
                  *(undefined8 *)((long)puVar12 + -0x400) = 0x3754b28;
                  *(undefined **)((long)puVar12 + -0x3f8) = puVar53;
                  *(undefined8 *)((long)puVar12 + -0x3f0) = 0x5e2d000;
                  *(undefined8 *)((long)puVar12 + -1000) = uVar37;
                  *(undefined8 *)((long)puVar12 + -0x3e0) = 0;
                  *(long *)((long)puVar12 + -0x3d8) = lVar27;
                  *(long *)((long)puVar12 + -0x418) = auVar57._8_8_;
                  *(undefined8 *)((long)puVar12 + -0x410) = uVar40;
                  if ((bRam0000000005e2de67 & 1) == 0) {
                    func_0x0249f8e4(&DAT_059deb78);
                    func_0x0249f8e4(&DAT_059e2ba0);
                    func_0x0249f8e4(&DAT_05a27fa0);
                    func_0x0249f8e4(&DAT_05a29960);
                    func_0x0249f8e4(&DAT_059d3fd0);
                    bRam0000000005e2de67 = 1;
                  }
                  iVar17 = *(int *)(_DAT_059d3fd0 + 0xe4);
                  *(undefined8 *)((long)puVar12 + -0x420) = 0;
                  if (iVar17 == 0) {
                    func_0x0249fa64();
                  }
                  pppppppcVar26 =
                       (code *******)
                       func_0x0288eda8((undefined1 *)((long)puVar12 + -0x418),
                                       (undefined1 *)((long)puVar12 + -0x420),_DAT_05a29960);
                  if (((ulong)pppppppcVar26 & 1) == 0) {
                    *(undefined4 *)(lVar20 + 0x90) = 0;
                    return pppppppcVar26;
                  }
                  plVar33 = *(long **)((long)puVar12 + -0x420);
                  iVar17 = *(int *)(lVar20 + 0x90) + 1;
                  *(int *)(lVar20 + 0x90) = iVar17;
                  if (plVar33 != (long *)0x0) {
                    lVar27 = *plVar33;
                    uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar46 != 0) {
                      piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar48 + -2) == _DAT_059deb78) {
                          puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                          goto LAB_03754c40;
                        }
                        uVar46 = uVar46 - 1;
                        piVar48 = piVar48 + 4;
                      } while (uVar46 != 0);
                    }
                    puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059deb78,2);
LAB_03754c40:
                    iVar14 = (*(code *)*puVar30)(plVar33,puVar30[1]);
                    if (iVar17 < iVar14) {
                      uVar21 = func_0x03530c84(uVar21,0);
                      plVar33 = *(long **)((long)puVar12 + -0x420);
                      if (plVar33 != (long *)0x0) {
                        lVar27 = *plVar33;
                        uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                        if (uVar46 != 0) {
                          piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar48 + -2) == _DAT_059deb78) {
                              puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d04;
                            }
                            uVar46 = uVar46 - 1;
                            piVar48 = piVar48 + 4;
                          } while (uVar46 != 0);
                        }
                        puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059deb78,1);
LAB_03754d04:
                        uVar40 = (*(code *)*puVar30)(plVar33,puVar30[1]);
                        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e2ba0);
                        }
                        uVar21 = func_0x0430d994(uVar21,uVar40,0);
                        *(undefined8 *)((long)puVar12 + -0x408) = uVar21;
                        *(undefined8 *)((long)puVar12 + -0x430) = 0;
                        *(undefined8 *)((long)puVar12 + -0x428) = 0;
                        pppppppcVar26 =
                             (code *******)
                             func_0x028866e4((undefined1 *)((long)puVar12 + -0x430),
                                             (undefined1 *)((long)puVar12 + -0x408),_DAT_05a27fa0);
                        uVar21 = *(undefined8 *)((long)puVar12 + -0x430);
                        *(undefined8 *)(lVar20 + 0x88) = *(undefined8 *)((long)puVar12 + -0x428);
                        *(undefined8 *)(lVar20 + 0x80) = uVar21;
                        return pppppppcVar26;
                      }
                    }
                    else {
                      plVar33 = *(long **)((long)puVar12 + -0x420);
                      if (plVar33 != (long *)0x0) {
                        lVar27 = *plVar33;
                        uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                        if (uVar46 != 0) {
                          piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar48 + -2) == _DAT_059deb78) {
                              puVar30 = (undefined8 *)(lVar27 + (long)(*piVar48 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_03754d7c;
                            }
                            uVar46 = uVar46 - 1;
                            piVar48 = piVar48 + 4;
                          } while (uVar46 != 0);
                        }
                        puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059deb78,2);
LAB_03754d7c:
                        pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar33,puVar30[1]);
                        *(undefined8 *)(lVar20 + 0x80) = 0;
                        *(undefined8 *)(lVar20 + 0x88) = 0;
                        *(int *)(lVar20 + 0x90) = (int)pppppppcVar26;
                        return pppppppcVar26;
                      }
                    }
                  }
                  pppppppcVar26 = (code *******)func_0x0249fb90();
                  return pppppppcVar26;
                }
              }
            }
LAB_036e3670:
            auVar57 = func_0x0249fb90();
            *(undefined8 *)((long)puVar12 + -0x3a0) = 0x36e3674;
            *(undefined **)((long)puVar12 + -0x390) = puVar49;
            *(long *)((long)puVar12 + -0x388) = lVar27;
            *(code *******)((long)puVar12 + -0x380) = ppppppcVar45;
            *(long **)((long)puVar12 + -0x378) = plVar33;
            if ((bRam0000000005e2da67 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0);
              bRam0000000005e2da67 = 1;
            }
            lVar27 = *(long *)(auVar57._0_8_ + 0x28);
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar12 + -0x3a0) = *(undefined8 *)((long)puVar12 + -0x3a0);
            *(undefined8 *)((long)puVar12 + -0x390) = *(undefined8 *)((long)puVar12 + -0x390);
            *(undefined8 *)((long)puVar12 + -0x388) = *(undefined8 *)((long)puVar12 + -0x388);
            *(undefined8 *)((long)puVar12 + -0x380) = *(undefined8 *)((long)puVar12 + -0x380);
            *(undefined8 *)((long)puVar12 + -0x378) = *(undefined8 *)((long)puVar12 + -0x378);
            if ((bRam0000000005e32387 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e2ba0,lVar27,0);
              bRam0000000005e32387 = 1;
            }
            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            *(undefined8 *)((long)puVar12 + -0x398) = 0;
            func_0x042539d4((undefined1 *)((long)puVar12 + -0x398),auVar57._8_8_ - lVar27,0);
            return *(code ********)((long)puVar12 + -0x398);
          }
        }
      }
    }
  }
  uVar21 = 0x37820e8;
  auVar58 = func_0x0249fb90();
LAB_037820e8:
  lVar20 = auVar58._8_8_;
  plVar33 = auVar58._0_8_;
  puVar12 = (undefined8 *)((long)puVar30 + -0x40);
  *(undefined8 *)((long)puVar30 + -0x40) = uVar21;
  *(code ********)((long)puVar30 + -0x38) = pppppppcVar28;
  *(code ********)((long)puVar30 + -0x30) = pppppppcVar42;
  *(code ********)((long)puVar30 + -0x28) = pppppppcVar43;
  *(code ********)((long)puVar30 + -0x20) = pppppppcVar52;
  *(ulong *)((long)puVar30 + -0x18) = uVar46;
  *(code ********)((long)puVar30 + -0x10) = pppppppcVar23;
  *(code ********)((long)puVar30 + -8) = pppppppcVar39;
  lVar27 = 0x5e2d000;
  pppppppcVar26 = pppppppcVar24;
  if ((bRam0000000005e2df9b & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9b = 1;
    pppppppcVar26 = pppppppcVar24;
  }
  if (lVar20 != 0) {
    lVar27 = func_0x036d5ec8(lVar20,0);
    pppppppcVar24 = (code *******)func_0x036d5f00(lVar20,0);
    if (plVar33 != (long *)0x0) {
      lVar25 = *plVar33;
      pppppppcVar42 = (code *******)&DAT_059df8e8;
      uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar46 != 0) {
        piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
            puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 5) * 0x10 + 0x138);
            goto LAB_037821d0;
          }
          uVar46 = uVar46 - 1;
          piVar48 = piVar48 + 4;
        } while (uVar46 != 0);
      }
      puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_037821d0:
      uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
      pppppppcVar29 = (code *******)0x0;
      pppppppcVar41 = (code *******)func_0x036d3908(lVar20,uVar21);
      pppppppcVar23 = pppppppcVar24;
      if (pppppppcVar41 != (code *******)0x0) {
        ppppppcVar45 = *pppppppcVar41;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == _DAT_059dfbc0) {
              ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 3) * 2 + 0x27;
              goto LAB_0378224c;
            }
            uVar46 = uVar46 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar46 != 0);
        }
        pppppppcVar29 = (code *******)0x3;
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar41);
LAB_0378224c:
        plVar35 = (long *)(*(code *)*ppppppcVar45)(pppppppcVar41,ppppppcVar45[1]);
        pppppppcVar43 = pppppppcVar41;
        if (plVar35 != (long *)0x0) {
          lVar25 = *plVar35;
          uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar46 != 0) {
            piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar48 + -2) == _DAT_059deb70) {
                puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                goto LAB_037822b8;
              }
              uVar46 = uVar46 - 1;
              piVar48 = piVar48 + 4;
            } while (uVar46 != 0);
          }
          puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb70,2);
LAB_037822b8:
          pppppppcVar28 = (code *******)&DAT_059e1498;
          pppppppcVar43 = (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
          lVar25 = *plVar33;
          uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar46 != 0) {
            piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
                puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 5) * 0x10 + 0x138);
                goto LAB_03782320;
              }
              uVar46 = uVar46 - 1;
              piVar48 = piVar48 + 4;
            } while (uVar46 != 0);
          }
          puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_03782320:
          uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
          uVar21 = func_0x036d3908(lVar20,uVar21,0);
          auVar7._8_8_ = uVar21;
          auVar7._0_8_ = plVar33;
          auVar58._8_8_ = uVar21;
          auVar58._0_8_ = plVar33;
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pppppppcVar29 = (code *******)0x0;
          uVar16 = func_0x036c47c0(uVar21,plVar33);
          if ((lVar27 != 0) && (auVar58 = auVar7, pppppppcVar43 != (code *******)0x0)) {
            pppppppcVar28 = (code *******)&DAT_059deb60;
            ppppppcVar45 = *pppppppcVar43;
            pppppppcVar29 = (code *******)(ulong)*(byte *)(lVar27 + 0x94);
            auVar58[8] = *(byte *)(lVar27 + 0x94);
            auVar58._0_8_ = CONCAT44(0,uVar16);
            auVar58._9_7_ = 0;
            uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
            pppppppcVar42 =
                 (code *******)
                 CONCAT44(*(undefined4 *)(lVar27 + 0x70),*(undefined4 *)(lVar27 + 0x10));
            if (uVar46 != 0) {
              pppppcVar50 = ppppppcVar45[0x16] + 1;
              do {
                if (pppppcVar50[-1] == _DAT_059deb60) {
                  ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 0xd) * 2 + 0x27;
                  goto LAB_037823d8;
                }
                uVar46 = uVar46 - 1;
                pppppcVar50 = pppppcVar50 + 2;
              } while (uVar46 != 0);
            }
            ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059deb60,0xd);
LAB_037823d8:
            pppppppcVar26 = (code *******)ppppppcVar45[1];
            iVar17 = (*(code *)*ppppppcVar45)(pppppppcVar43,pppppppcVar42);
            if (pppppppcVar24 != (code *******)0x0) {
              func_0x03700d78(pppppppcVar24,(uVar16 - *(int *)(pppppppcVar24 + 2)) - iVar17,
                              CONCAT44(0,uVar16),0);
              *(undefined4 *)(lVar27 + 0x38) = 0;
              uVar15 = *(undefined4 *)(lVar27 + 0x10);
              uVar2 = *(undefined4 *)(lVar27 + 0x70);
              ppppppcVar45 = *pppppppcVar43;
              uVar3 = *(undefined1 *)(lVar27 + 0x94);
              uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
              if (uVar46 != 0) {
                pppppcVar50 = ppppppcVar45[0x16] + 1;
                do {
                  if (pppppcVar50[-1] == _DAT_059deb60) {
                    ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 0xd) * 2 + 0x27;
                    goto LAB_0378246c;
                  }
                  uVar46 = uVar46 - 1;
                  pppppcVar50 = pppppcVar50 + 2;
                } while (uVar46 != 0);
              }
              ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43,_DAT_059deb60,0xd);
LAB_0378246c:
              pppppppcVar26 =
                   (code *******)
                   (*(code *)*ppppppcVar45)
                             (pppppppcVar43,CONCAT44(uVar2,uVar15),uVar3,ppppppcVar45[1]);
              *(int *)(lVar27 + 0x14) = (int)pppppppcVar26 + -1;
              return pppppppcVar26;
            }
          }
        }
      }
    }
  }
  uVar21 = 0x37824a0;
  auVar60 = func_0x0249fb90();
LAB_037824a0:
  plVar35 = auVar58._8_8_;
  lVar20 = auVar60._8_8_;
  plVar33 = auVar60._0_8_;
  *(undefined8 *)((long)puVar12 + -0x40) = uVar21;
  *(code ********)((long)puVar12 + -0x30) = pppppppcVar42;
  *(code ********)((long)puVar12 + -0x28) = pppppppcVar43;
  *(long **)((long)puVar12 + -0x20) = plVar35;
  *(long *)((long)puVar12 + -0x18) = auVar58._0_8_;
  *(code ********)((long)puVar12 + -0x10) = pppppppcVar23;
  *(long *)((long)puVar12 + -8) = lVar27;
  lVar27 = 0x5e2d000;
  if ((bRam0000000005e2df9c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2df9c = 1;
  }
  if (plVar33 != (long *)0x0) {
    lVar25 = *plVar33;
    uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar46 != 0) {
      piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
          puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 5) * 0x10 + 0x138);
          goto LAB_03782564;
        }
        uVar46 = uVar46 - 1;
        piVar48 = piVar48 + 4;
      } while (uVar46 != 0);
    }
    pppppppcVar29 = (code *******)0x5;
    puVar30 = (undefined8 *)func_0x024d927c(plVar33);
LAB_03782564:
    uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
    if (lVar20 != 0) {
      pppppppcVar29 = (code *******)0x0;
      pppppppcVar43 = (code *******)func_0x036d3908(lVar20,uVar21);
      lVar27 = func_0x036d5ee4(lVar20,0);
      lVar20 = func_0x036d5f1c(lVar20,0);
      auVar9._8_8_ = lVar20;
      auVar9._0_8_ = plVar33;
      auVar8._8_8_ = lVar20;
      auVar8._0_8_ = plVar33;
      if (pppppppcVar43 != (code *******)0x0) {
        ppppppcVar45 = *pppppppcVar43;
        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
        if (uVar46 != 0) {
          pppppcVar50 = ppppppcVar45[0x16] + 1;
          do {
            if (pppppcVar50[-1] == _DAT_059dfbc0) {
              ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
              goto LAB_03782600;
            }
            uVar46 = uVar46 - 1;
            pppppcVar50 = pppppcVar50 + 2;
          } while (uVar46 != 0);
        }
        pppppppcVar29 = (code *******)0x0;
        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar43);
LAB_03782600:
        plVar36 = (long *)(*(code *)*ppppppcVar45)(pppppppcVar43,ppppppcVar45[1]);
        auVar60 = auVar8;
        if (plVar36 != (long *)0x0) {
          lVar25 = *plVar36;
          uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
          pppppppcVar42 = (code *******)&DAT_059e1498;
          if (uVar46 != 0) {
            piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar48 + -2) == _DAT_059e0788) {
                puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                goto LAB_03782674;
              }
              uVar46 = uVar46 - 1;
              piVar48 = piVar48 + 4;
            } while (uVar46 != 0);
          }
          puVar30 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059e0788,2);
LAB_03782674:
          plVar35 = (long *)(*(code *)*puVar30)(plVar36,puVar30[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          pppppppcVar29 = (code *******)0x0;
          uVar16 = func_0x036c49d4(pppppppcVar43,plVar33);
          auVar60 = auVar9;
          if (plVar35 != (long *)0x0) {
            lVar25 = *plVar35;
            pppppppcVar23 = (code *******)CONCAT44(0,uVar16);
            auVar10._8_8_ = lVar20;
            auVar10._0_8_ = pppppppcVar23;
            auVar60._8_8_ = lVar20;
            auVar60._0_8_ = pppppppcVar23;
            pppppppcVar43 = (code *******)&DAT_059e0780;
            uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar46 != 0) {
              piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar48 + -2) == _DAT_059e0780) {
                  puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 7) * 0x10 + 0x138);
                  goto LAB_03782708;
                }
                uVar46 = uVar46 - 1;
                piVar48 = piVar48 + 4;
              } while (uVar46 != 0);
            }
            pppppppcVar29 = (code *******)0x7;
            puVar30 = (undefined8 *)func_0x024d927c(plVar35);
LAB_03782708:
            iVar17 = (*(code *)*puVar30)(plVar35,puVar30[1]);
            if (lVar20 != 0) {
              pppppppcVar26 = (code *******)0x0;
              func_0x03700d78(lVar20,(uVar16 - *(int *)(lVar20 + 0x10)) - iVar17);
              pppppppcVar29 = pppppppcVar23;
              auVar60 = auVar10;
              if (lVar27 != 0) {
                func_0x03704850(lVar27,0);
                lVar20 = *plVar35;
                uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar48 + -2) == _DAT_059e0780) {
                      puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                      goto LAB_03782794;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059e0780,2);
LAB_03782794:
                pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
                *(int *)(lVar27 + 0x14) = (int)pppppppcVar26 + -1;
                return pppppppcVar26;
              }
            }
          }
        }
      }
    }
  }
  auVar57 = func_0x0249fb90();
  uVar40 = auVar57._8_8_;
  uVar21 = auVar57._0_8_;
  *(code *******)((long)puVar12 + -0x80) = unaff_x29;
  *(undefined8 *)((long)puVar12 + -0x78) = 0x37827c0;
  *(code ********)((long)puVar12 + -0x70) = pppppppcVar42;
  *(code ********)((long)puVar12 + -0x68) = pppppppcVar43;
  *(long **)((long)puVar12 + -0x60) = plVar35;
  *(long *)((long)puVar12 + -0x58) = auVar60._8_8_;
  *(long *)((long)puVar12 + -0x50) = auVar60._0_8_;
  *(long *)((long)puVar12 + -0x48) = lVar27;
  pppppppcVar42 = pppppppcVar29;
  pppppppcVar23 = pppppppcVar26;
  pppppppcVar24 = pppppppcVar22;
  if ((bRam0000000005e2df9d & 1) == 0) {
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2df9d = 1;
  }
  plVar35 = (long *)func_0x0376e450(uVar21,uVar40);
  plVar33 = (long *)0x5e2d000;
  if (plVar35 == (long *)0x0) {
LAB_037829b0:
    uVar37 = 0x37829b4;
    auVar57 = func_0x0249fb90();
  }
  else {
    pppppppcVar42 = (code *******)0x0;
    pppppppcVar41 = (code *******)func_0x036d9cf8(plVar35,pppppppcVar26);
    if (((ulong)pppppppcVar41 & 1) == 0) {
      return pppppppcVar41;
    }
    plVar33 = plVar35;
    if (pppppppcVar26 == (code *******)0x0) goto LAB_037829b0;
    ppppppcVar45 = *pppppppcVar26;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df8e8) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
          goto LAB_03782894;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar26,_DAT_059df8e8,5);
LAB_03782894:
    uVar37 = (*(code *)*ppppppcVar45)(pppppppcVar26,ppppppcVar45[1]);
    pppppppcVar42 = (code *******)func_0x036eb4a0(plVar35,uVar37,0);
    if (((ulong)pppppppcVar42 & 1) == 0) {
      return pppppppcVar42;
    }
    uVar37 = 0x37828c8;
    pppppppcVar42 = pppppppcVar26;
    pppppppcVar23 = pppppppcVar29;
  }
  uVar19 = auVar57._8_8_;
  lVar27 = auVar57._0_8_;
  *(undefined8 *)((long)puVar12 + -0x1e0) = uVar37;
  *(code ********)((long)puVar12 + -0x1d0) = unaff_x28;
  *(code ********)((long)puVar12 + -0x1c8) = unaff_x27;
  *(code ********)((long)puVar12 + -0x1c0) = param_5;
  *(code ********)((long)puVar12 + -0x1b8) = pppppppcVar28;
  *(long **)((long)puVar12 + -0x1b0) = plVar33;
  *(undefined8 *)((long)puVar12 + -0x1a8) = uVar21;
  *(code ********)((long)puVar12 + -0x1a0) = pppppppcVar26;
  *(undefined8 *)((long)puVar12 + -0x198) = uVar40;
  *(code ********)((long)puVar12 + -400) = pppppppcVar29;
  *(code ********)((long)puVar12 + -0x188) = pppppppcVar22;
  pppppppcVar26 = pppppppcVar42;
  pppppppcVar22 = pppppppcVar23;
  if ((bRam0000000005e2dfb7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dfb7 = 1;
  }
  pppppppcVar29 = (code *******)func_0x0376e450(lVar27,uVar19);
  pppppppcVar41 = (code *******)0x5e2d000;
  if (pppppppcVar42 != (code *******)0x0) {
    ppppppcVar45 = *pppppppcVar42;
    uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
    if (uVar46 != 0) {
      pppppcVar50 = ppppppcVar45[0x16] + 1;
      do {
        if (pppppcVar50[-1] == _DAT_059df8e8) {
          ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 5) * 2 + 0x27;
          goto LAB_03782a98;
        }
        uVar46 = uVar46 - 1;
        pppppcVar50 = pppppcVar50 + 2;
      } while (uVar46 != 0);
    }
    pppppppcVar26 = (code *******)0x5;
    ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar42);
LAB_03782a98:
    uVar21 = (*(code *)*ppppppcVar45)(pppppppcVar42,ppppppcVar45[1]);
    pppppppcVar41 = pppppppcVar29;
    if (pppppppcVar29 != (code *******)0x0) {
      pppppppcVar26 = (code *******)0x0;
      plVar35 = (long *)func_0x036d3908(pppppppcVar29,uVar21);
      if (plVar35 != (long *)0x0) {
        lVar20 = *plVar35;
        unaff_x27 = (code *******)&DAT_059dfbc0;
        uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar46 != 0) {
          piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
              puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 2) * 0x10 + 0x138);
              goto LAB_03782b18;
            }
            uVar46 = uVar46 - 1;
            piVar48 = piVar48 + 4;
          } while (uVar46 != 0);
        }
        pppppppcVar26 = (code *******)0x2;
        puVar30 = (undefined8 *)func_0x024d927c(plVar35);
LAB_03782b18:
        pppppppcVar38 = (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
        plVar33 = plVar35;
        if (pppppppcVar38 != (code *******)0x0) {
          ppppppcVar45 = *pppppppcVar38;
          unaff_x28 = (code *******)&DAT_059dfe38;
          uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
          if (uVar46 != 0) {
            pppppcVar50 = ppppppcVar45[0x16] + 1;
            do {
              if (pppppcVar50[-1] == _DAT_059dfe38) {
                ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
                goto LAB_03782b84;
              }
              uVar46 = uVar46 - 1;
              pppppcVar50 = pppppcVar50 + 2;
            } while (uVar46 != 0);
          }
          pppppppcVar26 = (code *******)0x2;
          ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar38);
LAB_03782b84:
          pppppppcVar28 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar38,ppppppcVar45[1]);
          if (((ulong)pppppppcVar28 & 1) == 0) {
            return pppppppcVar28;
          }
          pppppppcVar43 = (code *******)func_0x036d5ffc(pppppppcVar29,0);
          pppppppcVar28 = pppppppcVar38;
          if (pppppppcVar43 != (code *******)0x0) {
            param_5 = *(code ********)(lVar27 + 0x30);
            uVar46 = func_0x036d392c(pppppppcVar29,0);
            pppppppcVar22 = (code *******)(uVar46 & 0xffffffff);
            pppppppcVar24 = (code *******)0x0;
            pppppppcVar26 = param_5;
            func_0x0374def0(pppppppcVar43,pppppppcVar42);
            pppppppcVar28 = pppppppcVar43;
          }
          lVar20 = *plVar35;
          uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar46 != 0) {
            piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(code *****)(piVar48 + -2) == _DAT_059dfbc0) {
                puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 2) * 0x10 + 0x138);
                goto LAB_03782c20;
              }
              uVar46 = uVar46 - 1;
              piVar48 = piVar48 + 4;
            } while (uVar46 != 0);
          }
          pppppppcVar26 = (code *******)0x2;
          puVar30 = (undefined8 *)func_0x024d927c(plVar35);
LAB_03782c20:
          plVar35 = (long *)(*(code *)*puVar30)(plVar35,puVar30[1]);
          if (plVar35 != (long *)0x0) {
            lVar20 = *plVar35;
            uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar46 != 0) {
              piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(code *****)(piVar48 + -2) == _DAT_059dfe38) {
                  puVar30 = (undefined8 *)(lVar20 + (long)*piVar48 * 0x10 + 0x138);
                  goto LAB_03782c80;
                }
                uVar46 = uVar46 - 1;
                piVar48 = piVar48 + 4;
              } while (uVar46 != 0);
            }
            pppppppcVar26 = (code *******)0x0;
            puVar30 = (undefined8 *)func_0x024d927c(plVar35);
LAB_03782c80:
            plVar36 = (long *)(*(code *)*puVar30)(plVar35,puVar30[1]);
            plVar33 = plVar35;
            if (plVar36 != (long *)0x0) {
              lVar20 = *plVar36;
              uVar46 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar46 != 0) {
                piVar48 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar48 + -2) == _DAT_059dfe68) {
                    puVar30 = (undefined8 *)(lVar20 + (long)(*piVar48 + 1) * 0x10 + 0x138);
                    goto LAB_03782cec;
                  }
                  uVar46 = uVar46 - 1;
                  piVar48 = piVar48 + 4;
                } while (uVar46 != 0);
              }
              puVar30 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfe68,1);
LAB_03782cec:
              pppppppcVar22 = pppppppcVar29;
              pppppppcVar24 = pppppppcVar29;
              pppppppcVar26 =
                   (code *******)
                   (*(code *)*puVar30)(plVar36,pppppppcVar42,lVar27,pppppppcVar29,pppppppcVar29,
                                       pppppppcVar23,puVar30[1]);
              if ((pppppppcVar26 == (code *******)0x0) || (*pppppppcVar26 == _DAT_059e2700)) {
                func_0x037743ac(lVar27,uVar19);
                pppppppcVar26 = (code *******)func_0x03530c84(pppppppcVar23,0);
                *(code ********)(lVar27 + 0x20) = pppppppcVar26;
                return pppppppcVar26;
              }
              goto LAB_03782d68;
            }
          }
        }
      }
    }
  }
  plVar36 = plVar33;
  func_0x0249fb90();
LAB_03782d68:
  auVar57 = func_0x0249ff10(pppppppcVar26);
  plVar33 = auVar57._8_8_;
  lVar20 = auVar57._0_8_;
  *(code *******)((long)puVar12 + -0x240) = unaff_x29;
  *(undefined8 *)((long)puVar12 + -0x230) = 0x3782d70;
  *(code ********)((long)puVar12 + -0x228) = unaff_x27;
  *(code ********)((long)puVar12 + -0x220) = param_5;
  *(code ********)((long)puVar12 + -0x218) = pppppppcVar28;
  *(long **)((long)puVar12 + -0x210) = plVar36;
  *(code ********)((long)puVar12 + -0x208) = pppppppcVar41;
  *(code ********)((long)puVar12 + -0x200) = pppppppcVar42;
  *(undefined8 *)((long)puVar12 + -0x1f8) = uVar19;
  *(long *)((long)puVar12 + -0x1f0) = lVar27;
  *(code ********)((long)puVar12 + -0x1e8) = pppppppcVar23;
  pppppppcVar42 = pppppppcVar26;
  pppppppcVar23 = pppppppcVar22;
  pppppppcVar41 = pppppppcVar24;
  if ((bRam0000000005e2df9e & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2df9e = 1;
  }
  *(undefined8 *)((long)puVar12 + -0x238) = 0;
  lVar27 = func_0x0376e450(lVar20,pppppppcVar26);
  pppppppcVar29 = (code *******)0x0;
  if (lVar27 != 0) {
    pppppppcVar29 = (code *******)func_0x036d06d8(lVar27,0);
    if (((ulong)pppppppcVar29 & 1) != 0) {
      pppppppcVar29 = (code *******)func_0x036d5f70(lVar27,0);
      if (plVar33 != (long *)0x0) {
        lVar25 = *plVar33;
        uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar46 != 0) {
          piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(code *****)(piVar48 + -2) == _DAT_059df8e8) {
              puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 5) * 0x10 + 0x138);
              goto LAB_03782e80;
            }
            uVar46 = uVar46 - 1;
            piVar48 = piVar48 + 4;
          } while (uVar46 != 0);
        }
        puVar30 = (undefined8 *)func_0x024d927c(plVar33,_DAT_059df8e8,5);
LAB_03782e80:
        uVar21 = (*(code *)*puVar30)(plVar33,puVar30[1]);
        pppppppcVar42 = (code *******)0x0;
        pppppppcVar38 = (code *******)func_0x036d3908(lVar27,uVar21);
        param_5 = pppppppcVar29;
        if (pppppppcVar38 != (code *******)0x0) {
          ppppppcVar45 = *pppppppcVar38;
          uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
          if (uVar46 != 0) {
            pppppcVar50 = ppppppcVar45[0x16] + 1;
            do {
              if (pppppcVar50[-1] == _DAT_059dfbc0) {
                ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 6) * 2 + 0x27;
                goto LAB_03782efc;
              }
              uVar46 = uVar46 - 1;
              pppppcVar50 = pppppcVar50 + 2;
            } while (uVar46 != 0);
          }
          pppppppcVar42 = (code *******)0x6;
          ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar38);
LAB_03782efc:
          plVar35 = (long *)(*(code *)*ppppppcVar45)(pppppppcVar38,ppppppcVar45[1]);
          pppppppcVar28 = pppppppcVar38;
          if ((pppppppcVar29 != (code *******)0x0) &&
             (unaff_x27 = (code *******)0x0, plVar35 != (long *)0x0)) {
            lVar25 = *plVar35;
            ppppppcVar45 = pppppppcVar29[5];
            uVar46 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar46 != 0) {
              piVar48 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar48 + -2) == _DAT_059df030) {
                  puVar30 = (undefined8 *)(lVar25 + (long)(*piVar48 + 9) * 0x10 + 0x138);
                  goto LAB_03782f70;
                }
                uVar46 = uVar46 - 1;
                piVar48 = piVar48 + 4;
              } while (uVar46 != 0);
            }
            puVar30 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059df030,9);
LAB_03782f70:
            uVar46 = (*(code *)*puVar30)(plVar35,plVar33,ppppppcVar45,puVar30[1]);
            func_0x0374a538((undefined1 *)((long)puVar12 + -0x238),uVar46,uVar46 >> 0x20,0);
            func_0x036e1be4(lVar27,0);
            pppppppcVar42 = (code *******)func_0x03530c84(pppppppcVar22,0);
            *(code ********)(lVar20 + 0x20) = pppppppcVar42;
            if (pppppppcVar24 == (code *******)0x0) {
              return pppppppcVar42;
            }
            *(undefined8 *)((long)puVar12 + -0x298) = *(undefined8 *)((long)puVar12 + -0x238);
            uVar21 = func_0x0249fa6c(_DAT_059d9ea8,(undefined1 *)((long)puVar12 + -0x298));
            *(undefined8 *)((long)puVar12 + -0x350) = 0;
            *(undefined8 *)((long)puVar12 + -0x2d8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2e0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2c8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2d0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2b8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2c0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2a8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2b0) = 0;
            *(undefined8 *)((long)puVar12 + -0x2e8) = 0;
            *(undefined8 *)((long)puVar12 + -0x2f0) = 0;
            func_0x034ba874((undefined1 *)((long)puVar12 + -0x2f0),7,pppppppcVar26,pppppppcVar26,
                            pppppppcVar22,pppppppcVar38,0,uVar21);
            pppppppcVar26 = _DAT_059c9978;
            func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x340),
                            (undefined1 *)((long)puVar12 + -0x2f0),0x50);
            ppppppcVar45 = *pppppppcVar24;
            uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
            if (uVar46 != 0) {
              pppppcVar50 = ppppppcVar45[0x16] + 1;
              do {
                if ((code *******)pppppcVar50[-1] == pppppppcVar26) {
                  ppppppcVar45 = ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
                  goto LAB_0378307c;
                }
                uVar46 = uVar46 - 1;
                pppppcVar50 = pppppcVar50 + 2;
              } while (uVar46 != 0);
            }
            ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar24,pppppppcVar26,2);
LAB_0378307c:
            pppppcVar50 = *ppppppcVar45;
            func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x290),
                            (undefined1 *)((long)puVar12 + -0x340),0x50);
            pppppppcVar26 =
                 (code *******)
                 (*(code *)pppppcVar50)
                           (pppppppcVar24,(undefined1 *)((long)puVar12 + -0x290),ppppppcVar45[1]);
            return pppppppcVar26;
          }
        }
      }
      auVar57 = func_0x0249fb90();
      lVar25 = auVar57._0_8_;
      *(code *******)((long)puVar12 + -0x3a0) = unaff_x29;
      *(undefined8 *)((long)puVar12 + -0x390) = 0x37830c4;
      *(code ********)((long)puVar12 + -0x388) = pppppppcVar28;
      *(long *)((long)puVar12 + -0x380) = lVar27;
      *(long **)((long)puVar12 + -0x378) = plVar33;
      *(long *)((long)puVar12 + -0x370) = lVar20;
      *(code ********)((long)puVar12 + -0x368) = pppppppcVar26;
      *(code ********)((long)puVar12 + -0x360) = pppppppcVar22;
      *(code ********)((long)puVar12 + -0x358) = pppppppcVar24;
      if ((bRam0000000005e2df9f & 1) == 0) {
        func_0x0249f8e4(&DAT_059c9978);
        bRam0000000005e2df9f = 1;
      }
      pppppppcVar26 = (code *******)func_0x0376e450(lVar25,pppppppcVar42);
      pppppppcVar22 = (code *******)0x0;
      if (pppppppcVar26 != (code *******)0x0) {
        pppppppcVar22 = (code *******)func_0x036e21f8(pppppppcVar26,0);
        if (((ulong)pppppppcVar22 & 1) != 0) {
          func_0x036d7cb4(pppppppcVar26,pppppppcVar23,auVar57._8_8_,lVar25,pppppppcVar42,0);
          uVar21 = func_0x03530c84(pppppppcVar23,0);
          *(undefined8 *)(lVar25 + 0x20) = uVar21;
          *(undefined8 *)((long)puVar12 + -0x4a0) = 0;
          *(undefined8 *)((long)puVar12 + -0x428) = 0;
          *(undefined8 *)((long)puVar12 + -0x430) = 0;
          *(undefined8 *)((long)puVar12 + -0x418) = 0;
          *(undefined8 *)((long)puVar12 + -0x420) = 0;
          *(undefined8 *)((long)puVar12 + -0x408) = 0;
          *(undefined8 *)((long)puVar12 + -0x410) = 0;
          *(undefined8 *)((long)puVar12 + -0x3f8) = 0;
          *(undefined8 *)((long)puVar12 + -0x400) = 0;
          *(undefined8 *)((long)puVar12 + -0x438) = 0;
          *(undefined8 *)((long)puVar12 + -0x440) = 0;
          pppppppcVar24 = pppppppcVar42;
          pppppppcVar29 = pppppppcVar42;
          pppppppcVar38 = pppppppcVar23;
          func_0x034ba874((undefined1 *)((long)puVar12 + -0x440),0xd);
          pppppppcVar22 = _DAT_059c9978;
          if (pppppppcVar41 == (code *******)0x0) {
            uVar21 = 0x3783264;
            auVar58 = func_0x0249fb90();
            puVar13 = (undefined1 *)((long)puVar12 + -0x4a0);
          }
          else {
            func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x490),
                            (undefined1 *)((long)puVar12 + -0x440),0x50);
            ppppppcVar45 = *pppppppcVar41;
            uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
            if (uVar46 != 0) {
              pppppcVar50 = ppppppcVar45[0x16] + 1;
              do {
                if ((code *******)pppppcVar50[-1] == pppppppcVar22) {
                  pppppppcVar26 =
                       (code *******)(ppppppcVar45 + (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27);
                  goto LAB_03783208;
                }
                uVar46 = uVar46 - 1;
                pppppcVar50 = pppppcVar50 + 2;
              } while (uVar46 != 0);
            }
            pppppppcVar26 = (code *******)func_0x024d927c(pppppppcVar41,pppppppcVar22,2);
LAB_03783208:
            pppppppcVar28 = (code *******)*pppppppcVar26;
            func_0x054ed0d0((undefined1 *)((long)puVar12 + -0x3f0),
                            (undefined1 *)((long)puVar12 + -0x490),0x50);
            (*(code *)pppppppcVar28)
                      (pppppppcVar41,(undefined1 *)((long)puVar12 + -0x3f0),pppppppcVar26[1]);
            uVar21 = 0x3783244;
            puVar13 = (undefined1 *)((long)puVar12 + -0x4a0);
            pppppppcVar24 = pppppppcVar41;
            pppppppcVar29 = pppppppcVar42;
            pppppppcVar38 = pppppppcVar23;
            auVar58 = auVar57;
          }
SUB_03783264:
          pppppppcVar43 = pppppppcVar29;
          plVar33 = auVar58._0_8_;
          *(code *******)(puVar13 + -0x60) = unaff_x29;
          *(undefined8 *)(puVar13 + -0x58) = uVar21;
          *(code ********)(puVar13 + -0x50) = unaff_x28;
          *(code ********)(puVar13 + -0x48) = unaff_x27;
          *(code ********)(puVar13 + -0x40) = param_5;
          *(code ********)(puVar13 + -0x38) = pppppppcVar28;
          *(code ********)(puVar13 + -0x30) = pppppppcVar26;
          *(undefined1 (*) [16])(puVar13 + -0x28) = auVar57;
          *(code ********)(puVar13 + -0x18) = pppppppcVar42;
          *(code ********)(puVar13 + -0x10) = pppppppcVar41;
          *(code ********)(puVar13 + -8) = pppppppcVar23;
          *(code ********)(puVar13 + -0xb8) = pppppppcVar43;
          pppppppcVar22 = pppppppcVar24;
          pppppppcVar42 = pppppppcVar43;
          pppppppcVar23 = pppppppcVar38;
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
          iVar17 = *(int *)(_DAT_059db250 + 0xe4);
          *(undefined8 *)(puVar13 + -0xc0) = 0;
          if (iVar17 == 0) {
            func_0x0249fa64();
          }
          pppppppcVar26 = (code *******)func_0x03773874(puVar13 + -0xb8);
          uVar21 = func_0x0249fb80(_DAT_059c6000);
          auVar62._8_8_ = pppppppcVar22;
          auVar62._0_8_ = pppppppcVar42;
          if (plVar33 != (long *)0x0) {
            uVar37 = 0;
            func_0x02a9aa34(uVar21,plVar33,*(undefined8 *)(*plVar33 + 0x250));
            uVar40 = _DAT_05a447b8;
            pppppppcVar22 = (code *******)func_0x026ec554(pppppppcVar26,uVar21);
            auVar62._8_8_ = uVar40;
            auVar62._0_8_ = uVar37;
            if (pppppppcVar22 != (code *******)0x0) {
              ppppppcVar45 = *pppppppcVar22;
              uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
              if (uVar46 != 0) {
                pppppcVar50 = ppppppcVar45[0x16] + 1;
                do {
                  if (pppppcVar50[-1] == _DAT_059ca360) {
                    ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
                    goto LAB_037833d8;
                  }
                  uVar46 = uVar46 - 1;
                  pppppcVar50 = pppppcVar50 + 2;
                } while (uVar46 != 0);
              }
              uVar40 = 0;
              ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar22);
LAB_037833d8:
              pppppppcVar26 = (code *******)(*(code *)*ppppppcVar45)(pppppppcVar22,ppppppcVar45[1]);
              auVar62._8_8_ = uVar40;
              auVar62._0_8_ = uVar37;
              *(code ********)(puVar13 + -0xc0) = pppppppcVar26;
              *(undefined8 *)(puVar13 + -0xd0) = 0;
              *(undefined1 **)(puVar13 + -200) = puVar13 + -0xc0;
              if (pppppppcVar26 == (code *******)0x0) {
LAB_037836dc:
                pppppppcVar26 = (code *******)func_0x0249fb90();
LAB_037836e0:
                pppppppcVar38 = (code *******)0x0;
                puVar30 = (undefined8 *)(puVar13 + -0xc0);
                goto LAB_037836e8;
              }
              param_5 = (code *******)&DAT_059df6e0;
              unaff_x27 = (code *******)&DAT_059cb6b8;
              unaff_x28 = (code *******)&DAT_059c9978;
              pppppppcVar22 = pppppppcVar26;
              do {
                uVar21 = auVar62._0_8_;
                ppppppcVar45 = *pppppppcVar22;
                uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                if (uVar46 != 0) {
                  pppppcVar50 = ppppppcVar45[0x16] + 1;
                  do {
                    if (pppppcVar50[-1] == _DAT_059df6e0) {
                      ppppppcVar45 = ppppppcVar45 + (long)*(int *)pppppcVar50 * 2 + 0x27;
                      goto LAB_0378345c;
                    }
                    uVar46 = uVar46 - 1;
                    pppppcVar50 = pppppcVar50 + 2;
                  } while (uVar46 != 0);
                }
                uVar40 = 0;
                ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar22);
                auVar62._8_8_ = uVar40;
                auVar62._0_8_ = uVar21;
LAB_0378345c:
                pppppppcVar26 =
                     (code *******)(*(code *)*ppppppcVar45)(pppppppcVar22,ppppppcVar45[1]);
                uVar21 = auVar62._0_8_;
                if (((ulong)pppppppcVar26 & 1) == 0) goto LAB_037836e0;
                plVar35 = *(long **)(puVar13 + -0xc0);
                if (plVar35 == (long *)0x0) {
                  func_0x0249fb90();
                  pppppppcVar26 = (code *******)0x0;
                  break;
                }
                lVar27 = *plVar35;
                uVar46 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar46 != 0) {
                  piVar48 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar48 + -2) == _DAT_059cb6b8) {
                      puVar30 = (undefined8 *)(lVar27 + (long)*piVar48 * 0x10 + 0x138);
                      goto LAB_037834c0;
                    }
                    uVar46 = uVar46 - 1;
                    piVar48 = piVar48 + 4;
                  } while (uVar46 != 0);
                }
                uVar40 = 0;
                puVar30 = (undefined8 *)func_0x024d927c(plVar35);
                auVar62._8_8_ = uVar40;
                auVar62._0_8_ = uVar21;
LAB_037834c0:
                pppppppcVar26 = (code *******)(*(code *)*puVar30)(plVar35,puVar30[1]);
                lVar27 = func_0x0376e450(plVar33,pppppppcVar26);
                if (lVar27 != 0) {
                  uVar46 = func_0x036e2208(lVar27,0);
                  if ((uVar46 & 1) != 0) {
                    pppppppcVar23 = pppppppcVar43;
                    auVar62 = auVar58;
                    uVar46 = func_0x036d7cb4(lVar27,pppppppcVar38);
                    if ((uVar46 & 1) != 0) {
                      if (*(int *)(lVar27 + 0x18) == 1) {
                        *(undefined8 *)(puVar13 + -0x108) = 0;
                        *(undefined8 *)(puVar13 + -0x110) = 0;
                        *(undefined8 *)(puVar13 + -0xf8) = 0;
                        *(undefined8 *)(puVar13 + -0x100) = 0;
                        *(undefined8 *)(puVar13 + -0xe8) = 0;
                        *(undefined8 *)(puVar13 + -0xf0) = 0;
                        *(undefined8 *)(puVar13 + -0xd8) = 0;
                        *(undefined8 *)(puVar13 + -0xe0) = 0;
                        *(undefined8 *)(puVar13 + -0x118) = 0;
                        *(undefined8 *)(puVar13 + -0x120) = 0;
                        *(undefined8 *)(puVar13 + -0x1d0) = 0;
                        pppppppcVar42 = pppppppcVar26;
                        pppppppcVar41 = pppppppcVar26;
                        pppppppcVar23 = pppppppcVar38;
                        func_0x034ba874(puVar13 + -0x120,0xe);
                        pppppppcVar22 = _DAT_059c9978;
                        auVar62._8_8_ = pppppppcVar42;
                        auVar62._0_8_ = pppppppcVar41;
                        if (pppppppcVar24 == (code *******)0x0) goto LAB_03783780;
                        func_0x054ed0d0(puVar13 + -0x1c0,puVar13 + -0x120,0x50);
                        ppppppcVar45 = *pppppppcVar24;
                        uVar46 = (ulong)*(ushort *)((long)ppppppcVar45 + 0x12e);
                        if (uVar46 != 0) {
                          pppppcVar50 = ppppppcVar45[0x16] + 1;
                          do {
                            if ((code *******)pppppcVar50[-1] == pppppppcVar22) {
                              ppppppcVar45 = ppppppcVar45 +
                                             (long)(*(int *)pppppcVar50 + 2) * 2 + 0x27;
                              goto LAB_037836b0;
                            }
                            uVar46 = uVar46 - 1;
                            pppppcVar50 = pppppcVar50 + 2;
                          } while (uVar46 != 0);
                        }
                        ppppppcVar45 = (code ******)func_0x024d927c(pppppppcVar24,pppppppcVar22,2);
LAB_037836b0:
                        pppppcVar54 = *ppppppcVar45;
                        func_0x054ed0d0(puVar13 + -0xb0,puVar13 + -0x1c0,0x50);
                        pppppcVar50 = ppppppcVar45[1];
                        (*(code *)pppppcVar54)(pppppppcVar24,puVar13 + -0xb0);
                        auVar62._8_8_ = pppppcVar50;
                        auVar62._0_8_ = pppppppcVar41;
                      }
                      else if (*(int *)(lVar27 + 0x18) == 2) goto code_r0x03783528;
                    }
                  }
                }
                pppppppcVar22 = *(code ********)(puVar13 + -0xc0);
                if (pppppppcVar22 == (code *******)0x0) goto LAB_037836dc;
              } while( true );
            }
          }
          func_0x0249fb90();
          goto LAB_0378377c;
        }
      }
      return pppppppcVar22;
    }
  }
  return pppppppcVar29;
}


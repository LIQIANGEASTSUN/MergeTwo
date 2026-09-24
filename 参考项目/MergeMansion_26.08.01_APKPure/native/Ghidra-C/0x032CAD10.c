/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.ValueTuple`3<CurrencyUsageResult, Currencies, System.Int64> TryToFastOpenChest(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem chest, GameLogic.Config.Types.MetacoreTime currentTime, Merge.MergeBoardId boardId)
 * Ghidra function entry: 033cad10
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_033cad10(long ****param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  long ****pppplVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  ulong uVar15;
  long **pplVar16;
  int *piVar17;
  undefined4 uVar18;
  long ****pppplVar19;
  long lVar20;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined *puStack_148;
  long *plStack_140;
  long lStack_138;
  long ***ppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [4];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long ***ppplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  undefined4 uStack_54;
  long *plVar8;
  
  lVar20 = 0x5e2c000;
  if ((bRam0000000005e2c3f6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059dc880);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a34898);
    func_0x0249f8e4(&DAT_05a34ea8);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3f6 = 1;
  }
  pppplVar11 = param_1;
  lVar6 = func_0x036ebc6c(param_2,param_3,param_1,0);
  if (param_1 != (long ****)0x0) {
    ppplVar13 = *param_1;
    uVar15 = (ulong)*(ushort *)((long)ppplVar13 + 0x12e);
    unaff_x24 = (long *)&DAT_059dc880;
    if (uVar15 != 0) {
      pplVar16 = ppplVar13[0x16] + 1;
      do {
        if (pplVar16[-1] == _DAT_059e0220) {
          ppplVar13 = ppplVar13 + (long)(*(int *)pplVar16 + 6) * 2 + 0x27;
          goto LAB_033cae2c;
        }
        uVar15 = uVar15 - 1;
        pplVar16 = pplVar16 + 2;
      } while (uVar15 != 0);
    }
    pppplVar11 = (long ****)0x6;
    ppplVar13 = (long ***)func_0x024d927c(param_1);
LAB_033cae2c:
    lVar20 = (*(code *)*ppplVar13)(param_1,ppplVar13[1]);
    if (*(int *)(_DAT_059dc880 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059dc880);
    }
    param_3 = lVar6;
    if (lVar20 != 0) {
      pppplVar11 = (long ****)0x0;
      unaff_x24 = (long *)&DAT_05a34898;
      uVar15 = func_0x0387a32c(lVar20,*(undefined8 *)(*(long *)(_DAT_059dc880 + 0xb8) + 400));
      ppplVar13 = (long ***)(lVar6 >> 0x20);
      uVar18 = (undefined4)lVar6;
      if ((uVar15 & 1) != 0) goto LAB_033caf10;
      ppplVar14 = *param_1;
      uVar15 = (ulong)*(ushort *)((long)ppplVar14 + 0x12e);
      if (uVar15 != 0) {
        pplVar16 = ppplVar14[0x16] + 1;
        do {
          if (pplVar16[-1] == _DAT_059e0220) {
            ppplVar14 = ppplVar14 + (long)(*(int *)pplVar16 + 6) * 2 + 0x27;
            goto LAB_033caecc;
          }
          uVar15 = uVar15 - 1;
          pplVar16 = pplVar16 + 2;
        } while (uVar15 != 0);
      }
      pppplVar11 = (long ****)0x6;
      ppplVar14 = (long ***)func_0x024d927c(param_1);
LAB_033caecc:
      lVar6 = (*(code *)*ppplVar14)(param_1,ppplVar14[1]);
      if (lVar6 == 0) goto LAB_033cb220;
      if (*(char *)(lVar6 + 0x188) == '\0') {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar15 = func_0x03639d34(param_1,0xd,0);
        if ((uVar15 & 1) != 0) goto LAB_033caf10;
        ppplVar14 = *param_1;
        uVar15 = (ulong)*(ushort *)((long)ppplVar14 + 0x12e);
        if (uVar15 != 0) {
          pplVar16 = ppplVar14[0x16] + 1;
          do {
            if (pplVar16[-1] == _DAT_059e0220) {
              ppplVar14 = ppplVar14 + (long)(*(int *)pplVar16 + 4) * 2 + 0x27;
              goto LAB_033cb1c0;
            }
            uVar15 = uVar15 - 1;
            pplVar16 = pplVar16 + 2;
          } while (uVar15 != 0);
        }
        ppplVar14 = (long ***)func_0x024d927c(param_1,_DAT_059e0220,4);
LAB_033cb1c0:
        lVar6 = (*(code *)*ppplVar14)(param_1,ppplVar14[1]);
        pppplVar11 = &ppplStack_68;
        ppplStack_88 = (long ***)0x0;
        uStack_80 = 0;
        ppplStack_68 = ppplVar13;
        uStack_54 = uVar18;
        func_0x02953678(&ppplStack_88,&uStack_54,pppplVar11,_DAT_05a34898);
        lVar20 = 0;
        if (lVar6 == 0) goto LAB_033cb220;
        uStack_a0 = 0;
        func_0x03683960(lVar6,param_1,ppplStack_88,uStack_80,0x33,0,0,0);
        bVar4 = false;
      }
      else {
LAB_033caf10:
        bVar4 = true;
      }
      ppplVar14 = *param_1;
      uVar15 = (ulong)*(ushort *)((long)ppplVar14 + 0x12e);
      if (uVar15 != 0) {
        pplVar16 = ppplVar14[0x16] + 1;
        do {
          if (pplVar16[-1] == _DAT_059e0220) {
            ppplVar14 = ppplVar14 + (long)(*(int *)pplVar16 + 4) * 2 + 0x27;
            goto LAB_033caf64;
          }
          uVar15 = uVar15 - 1;
          pplVar16 = pplVar16 + 2;
        } while (uVar15 != 0);
      }
      ppplVar14 = (long ***)func_0x024d927c(param_1,_DAT_059e0220,4);
LAB_033caf64:
      lVar20 = (*(code *)*ppplVar14)(param_1,ppplVar14[1]);
      pppplVar11 = &ppplStack_68;
      ppplStack_88 = (long ***)0x0;
      uStack_80 = 0;
      ppplStack_68 = ppplVar13;
      uStack_54 = uVar18;
      func_0x02953678(&ppplStack_88,&uStack_54,pppplVar11,_DAT_05a34898);
      if (param_2 != 0) {
        uVar15 = func_0x036d392c(param_2,0);
        ppplVar14 = *param_1;
        unaff_x24 = (long *)(uVar15 & 0xffffffff);
        uVar15 = (ulong)*(ushort *)((long)ppplVar14 + 0x12e);
        if (uVar15 != 0) {
          pplVar16 = ppplVar14[0x16] + 1;
          do {
            if (pplVar16[-1] == _DAT_059df8e8) {
              ppplVar14 = ppplVar14 + (long)(*(int *)pplVar16 + 5) * 2 + 0x27;
              goto LAB_033cb008;
            }
            uVar15 = uVar15 - 1;
            pplVar16 = pplVar16 + 2;
          } while (uVar15 != 0);
        }
        ppplVar14 = (long ***)func_0x024d927c(param_1,_DAT_059df8e8,5);
LAB_033cb008:
        uVar7 = (*(code *)*ppplVar14)(param_1,ppplVar14[1]);
        unaff_x25 = (undefined *)func_0x036d62d4(param_2,uVar7,0);
        if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059d89a0);
        }
        pppplVar11 = (long ****)0x0;
        uVar7 = func_0x03627590(param_4,unaff_x25,0,0,0);
        if (lVar20 != 0) {
          uStack_a0 = _DAT_05a93bf8;
          uStack_98 = 0;
          pppplVar11 = (long ****)ppplStack_88;
          iVar5 = func_0x03685074(lVar20,param_1,ppplStack_88,uStack_80,7,unaff_x24,0,uVar7);
          if (iVar5 != 1) {
LAB_033cb158:
            uStack_70 = 0;
            ppplStack_68 = (long ***)CONCAT44(ppplStack_68._4_4_,iVar5);
            uStack_78 = 0;
            ppplStack_88 = ppplVar13;
            uStack_54 = uVar18;
            func_0x0295639c(&uStack_78,&ppplStack_68,&uStack_54,&ppplStack_88,_DAT_05a34ea8);
            auVar21._8_8_ = uStack_70;
            auVar21._0_8_ = uStack_78;
            return auVar21;
          }
          func_0x036faf48(param_2,0);
          if (bVar4) {
            iVar5 = 1;
            goto LAB_033cb158;
          }
          ppplVar14 = *param_1;
          uVar15 = (ulong)*(ushort *)((long)ppplVar14 + 0x12e);
          if (uVar15 != 0) {
            pplVar16 = ppplVar14[0x16] + 1;
            do {
              if (pplVar16[-1] == _DAT_059e0220) {
                ppplVar14 = ppplVar14 + (long)(*(int *)pplVar16 + 6) * 2 + 0x27;
                goto LAB_033cb138;
              }
              uVar15 = uVar15 - 1;
              pplVar16 = pplVar16 + 2;
            } while (uVar15 != 0);
          }
          pppplVar11 = (long ****)0x6;
          ppplVar14 = (long ***)func_0x024d927c(param_1);
LAB_033cb138:
          lVar6 = (*(code *)*ppplVar14)(param_1,ppplVar14[1]);
          if (lVar6 != 0) {
            iVar5 = 1;
            *(undefined1 *)(lVar6 + 0x188) = 1;
            goto LAB_033cb158;
          }
        }
      }
    }
  }
LAB_033cb220:
  auVar21 = func_0x0249fb90();
  plVar8 = auVar21._0_8_;
  uStack_e0 = 0x33cb224;
  pppplVar19 = (long ****)(auVar21._8_8_ & 0xffffffff);
  auVar22._8_8_ = 0x5e2c000;
  auVar22._0_8_ = pppplVar19;
  pppplVar12 = pppplVar11;
  puStack_d8 = unaff_x25;
  plStack_d0 = unaff_x24;
  lStack_c8 = lVar20;
  uStack_c0 = param_4;
  lStack_b8 = param_2;
  lStack_b0 = param_3;
  ppplStack_a8 = (long ***)param_1;
  if ((bRam0000000005e2c3f7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_05a34e70);
    func_0x0249f8e4(&DAT_05a93bf8);
    bRam0000000005e2c3f7 = 1;
  }
  if (pppplVar11 == (long ****)0x0) {
LAB_033cb610:
    auVar21 = func_0x0249fb90();
    lVar6 = auVar21._8_8_;
    plVar9 = auVar21._0_8_;
    uStack_150 = 0x33cb614;
    puStack_148 = unaff_x25;
    plStack_140 = unaff_x24;
    lStack_138 = lVar20;
    ppplStack_130 = (long ***)pppplVar11;
    plStack_118 = plVar8;
    if ((bRam0000000005e2c3f8 & 1) == 0) {
      uStack_128 = auVar22._8_8_;
      uStack_120 = auVar22._0_8_;
      func_0x0249f8e4(&DAT_059e0220);
      func_0x0249f8e4(&DAT_059e46b8);
      func_0x0249f8e4(&DAT_05a34ea8);
      func_0x0249f8e4(&DAT_05a93bf8);
      auVar22._8_8_ = uStack_128;
      auVar22._0_8_ = uStack_120;
      bRam0000000005e2c3f8 = 1;
    }
    uStack_128 = auVar22._8_8_;
    uStack_120 = auVar22._0_8_;
    if (plVar9 != (long *)0x0) {
      lVar20 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long **)(piVar17 + -2) == _DAT_059e0220) {
            puVar10 = (undefined8 *)(lVar20 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_033cb6d4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0220,4);
      auVar22._8_8_ = uStack_128;
      auVar22._0_8_ = uStack_120;
LAB_033cb6d4:
      uStack_128 = auVar22._8_8_;
      uStack_120 = auVar22._0_8_;
      lVar20 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      auVar22._8_8_ = uStack_128;
      auVar22._0_8_ = uStack_120;
      if (lVar6 != 0) {
        func_0x0353ab18(&uStack_180,lVar6,plVar9,0);
        auVar22._8_8_ = uStack_128;
        auVar22._0_8_ = uStack_120;
        uVar1 = *(int *)(lVar6 + 0x30) - 1;
        if (uVar1 < 8) {
          uVar18 = *(undefined4 *)(&UNK_0154faa4 + (ulong)uVar1 * 4);
        }
        else {
          uVar18 = 1;
        }
        if (lVar20 != 0) {
          iVar5 = func_0x03685074(lVar20,plVar9,uStack_180,uStack_178,uVar18,0,0,pppplVar12,
                                  _DAT_05a93bf8,0);
          if (iVar5 == 2) {
            uStack_154 = 2;
          }
          else if (iVar5 == 0) {
            uStack_154 = 0;
          }
          else {
            if (lStack_170 != 0) {
              if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              func_0x03645058(plVar9,lStack_170,0);
            }
            func_0x0353a9b8(lVar6,plVar9,pppplVar12,0);
            uStack_154 = 1;
          }
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_158 = (undefined4)uStack_180;
          uStack_180 = uStack_178;
          func_0x0295639c(&uStack_168,&uStack_154,&uStack_158,&uStack_180,_DAT_05a34ea8);
          auVar2._8_8_ = uStack_160;
          auVar2._0_8_ = uStack_168;
          return auVar2;
        }
      }
    }
    uStack_128 = auVar22._8_8_;
    uStack_120 = auVar22._0_8_;
    iVar5 = func_0x0249fb90();
    if (7 < iVar5 - 1U) {
      auVar24._8_8_ = extraout_x1;
      auVar24._0_8_ = 1;
      return auVar24;
    }
    auVar23._4_4_ = 0;
    auVar23._0_4_ = *(uint *)(&UNK_0154faa4 + (ulong)(iVar5 - 1U) * 4);
    auVar23._8_8_ = extraout_x1;
    return auVar23;
  }
  ppplVar13 = *pppplVar11;
  uVar15 = (ulong)*(ushort *)((long)ppplVar13 + 0x12e);
  if (uVar15 != 0) {
    pplVar16 = ppplVar13[0x16] + 1;
    do {
      if (pplVar16[-1] == _DAT_059e0220) {
        ppplVar13 = ppplVar13 + (long)(*(int *)pplVar16 + 4) * 2 + 0x27;
        goto LAB_033cb310;
      }
      uVar15 = uVar15 - 1;
      pplVar16 = pplVar16 + 2;
    } while (uVar15 != 0);
  }
  ppplVar13 = (long ***)func_0x024d927c(pppplVar11,_DAT_059e0220,4);
LAB_033cb310:
  lVar20 = (*(code *)*ppplVar13)(pppplVar11,ppplVar13[1]);
  auVar22 = func_0x034bbdd0(plVar8,pppplVar11,pppplVar19,0);
  ppplVar13 = *pppplVar11;
  uVar15 = (ulong)*(ushort *)((long)ppplVar13 + 0x12e);
  if (uVar15 != 0) {
    pplVar16 = ppplVar13[0x16] + 1;
    do {
      if (pplVar16[-1] == _DAT_059df8e8) {
        ppplVar13 = ppplVar13 + (long)(*(int *)pplVar16 + 5) * 2 + 0x27;
        pppplVar12 = pppplVar19;
        goto LAB_033cb390;
      }
      uVar15 = uVar15 - 1;
      pplVar16 = pplVar16 + 2;
    } while (uVar15 != 0);
  }
  pppplVar12 = (long ****)0x5;
  ppplVar13 = (long ***)func_0x024d927c(pppplVar11,_DAT_059df8e8,5);
LAB_033cb390:
  plVar9 = (long *)(*(code *)*ppplVar13)(pppplVar11,ppplVar13[1]);
  if (plVar9 == (long *)0x0) goto LAB_033cb610;
  lVar6 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == _DAT_059dfe60) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar17 + 0x4f) * 0x10 + 0x138);
        goto LAB_033cb3fc;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe60,0x4f);
LAB_033cb3fc:
  uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  pppplVar12 = (long ****)0x0;
  uVar15 = func_0x034bc880(plVar8,uVar7,0);
  if ((uVar15 & 1) == 0) {
    unaff_x24 = plVar9;
    if (plVar8 == (long *)0x0) goto LAB_033cb610;
    lVar6 = *plVar8;
    unaff_x25 = &DAT_059defe8;
    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059defe8) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_033cb478;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    pppplVar12 = (long ****)0x2;
    puVar10 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059defe8,2);
LAB_033cb478:
    unaff_x24 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
    if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059d89a0);
    }
    uVar7 = func_0x03627c8c(unaff_x24,0);
    if (lVar20 == 0) goto LAB_033cb610;
    uStack_110 = _DAT_05a93bf8;
    uStack_108 = 0;
    iVar5 = func_0x03685074(lVar20,pppplVar11,auVar22._0_8_,auVar22._8_8_,9,0,0,uVar7);
    if (iVar5 == 1) {
      lVar20 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059defe8) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_033cb550;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059defe8,0);
LAB_033cb550:
      iVar5 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      lVar20 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059defe8) {
            puVar10 = (undefined8 *)(lVar20 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_033cb5b0;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059defe8,1);
LAB_033cb5b0:
      (*(code *)*puVar10)(plVar8,iVar5 + 1,puVar10[1]);
      auStack_e4[0] = 1;
      goto LAB_033cb5d4;
    }
  }
  auStack_e4[0] = 0;
LAB_033cb5d4:
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = auVar22._0_4_;
  uStack_f0 = auVar22._8_8_;
  func_0x0295639c(&uStack_100,auStack_e4,&uStack_e8,&uStack_f0,_DAT_05a34e70);
  auVar3._8_8_ = uStack_f8;
  auVar3._0_8_ = uStack_100;
  return auVar3;
}


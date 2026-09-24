/* Ghidra 12.1.2 native pseudocode; RVA 0x3E372E4; MergeEngine.Util.WeightedItemUtil.GenerateWeightedItemList<WeightedToolLevel, int>; status ok */


long * MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList_WeightedToolLevel__int_
                 (long *param_1,long *param_2,ulong param_3,long **param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined4 uVar5;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *extraout_x1;
  ulong uVar20;
  long **pplVar21;
  long lVar22;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  code *pcVar29;
  ulong uVar30;
  ulong uVar31;
  int *piVar32;
  long *plVar33;
  undefined8 uVar34;
  long **pplVar35;
  long *plVar36;
  long *plVar37;
  int iVar38;
  undefined *puVar39;
  undefined *puVar40;
  long *plVar41;
  long lVar42;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [12];
  long alStack_780 [6];
  ulong auStack_750 [3];
  long lStack_738;
  char acStack_72c [4];
  long lStack_728;
  undefined1 auStack_720 [8];
  long alStack_718 [6];
  undefined1 auStack_6e8 [16];
  undefined8 auStack_6d8 [4];
  undefined1 auStack_6b8 [16];
  undefined8 auStack_6a8 [6];
  undefined1 auStack_678 [16];
  undefined8 auStack_668 [6];
  undefined1 auStack_638 [16];
  undefined8 auStack_628 [6];
  undefined1 auStack_5f8 [16];
  long alStack_5e8 [11];
  long *plStack_590;
  long lStack_588;
  undefined4 uStack_57c;
  long lStack_578;
  undefined1 auStack_570 [8];
  long alStack_568 [29];
  ulong uStack_480;
  long *plStack_478;
  char acStack_46c [4];
  long lStack_468;
  undefined1 auStack_460 [8];
  long alStack_458 [31];
  ulong auStack_360 [35];
  long alStack_248 [5];
  long alStack_220 [4];
  long alStack_200 [2];
  ulong auStack_1f0 [2];
  long *aplStack_1e0 [2];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long alStack_1c0 [13];
  long alStack_158 [5];
  long alStack_130 [2];
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  long lStack_c8;
  
  plVar24 = param_4[7];
  uVar20 = param_3;
  pplVar21 = param_4;
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar24 = param_4[7];
    if (plVar24 == (long *)0x0) {
      func_0x03256878(param_4);
      plVar24 = param_4[7];
    }
  }
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  func_0x04032fbc(lVar11,param_4[7][1]);
  if (lVar11 == 0) goto LAB_03f37668;
  plVar24 = (long *)(lVar11 + 0x10);
  *plVar24 = (long)param_2;
  func_0x032809c4(plVar24,param_2);
  if ((*(byte *)(param_4[7][5] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar12 = func_0x03280ca0();
  pplVar21 = (long **)param_4[7][6];
  func_0x04e552d8(uVar12,lVar11,param_4[7][4]);
  uVar20 = param_4[7][7];
  func_0x03e118e0(param_1,uVar12);
  if ((*(byte *)(param_4[7][8] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  param_2 = (long *)func_0x03280ca0();
  MergeEngine_Util_WeightedItemList_TItem____ctor(param_2,param_4[7][9]);
  if (param_1 == (long *)0x0) goto LAB_03f37668;
  lVar11 = param_4[7][10];
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  lVar25 = *param_1;
  uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar31 != 0) {
    piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar11) {
        puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03f37450;
      }
      uVar31 = uVar31 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar31 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(param_1);
LAB_03f37450:
  param_1 = (long *)(*(code *)*puVar13)(param_1,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  if (param_1 != (long *)0x0) {
    pplVar35 = (long **)0x0;
    do {
      lVar11 = *param_1;
      uVar31 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f374bc;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(param_1);
LAB_03f374bc:
      uVar31 = (*(code *)*puVar13)(param_1,puVar13[1]);
      if ((uVar31 & 1) == 0) {
        param_4 = (long **)0x0;
        goto LAB_03f375d4;
      }
      lVar11 = param_4[7][0xc];
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *param_1;
      uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f37530;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(param_1);
LAB_03f37530:
      uVar12 = (*(code *)*puVar13)(param_1,puVar13[1]);
      lVar11 = *plVar24;
      if (lVar11 == 0) goto LAB_03f37660;
      uVar20 = *(ulong *)(lVar11 + 0x28);
      uVar4 = (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),uVar12);
      if (param_3 == 0) goto LAB_03f37664;
      uVar5 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),uVar12,*(undefined8 *)(param_3 + 0x28));
      if ((*(byte *)(param_4[7][0x13] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar12 = func_0x03280ca0();
      pplVar35 = (long **)(ulong)(uVar4 + (int)pplVar35);
      uVar20 = (ulong)uVar4;
      pplVar21 = pplVar35;
      MergeEngine_Util_WeightedItem_T____ctor(uVar12,uVar5,uVar20,pplVar35,param_4[7][0x14]);
      if (param_2 == (long *)0x0) goto LAB_03f3765c;
      uVar20 = param_4[7][0x15];
      MergeEngine_Util_WeightedItemList_TItem___AddItem(param_2,uVar12);
    } while( true );
  }
  goto LAB_03f3766c;
LAB_03f3765c:
  func_0x03280cac();
LAB_03f37660:
  func_0x03280cac();
LAB_03f37664:
  func_0x03280cac();
LAB_03f37668:
  func_0x03280cac();
LAB_03f3766c:
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(param_4);
    if (auVar52._8_4_ != 1) break;
    puVar13 = (undefined8 *)func_0x072ce910(auVar52._0_8_);
    param_4 = (long **)*puVar13;
    func_0x072ce920();
LAB_03f375d4:
    if (param_1 != (long *)0x0) {
      lVar11 = *param_1;
      uVar31 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f3762c;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(param_1);
LAB_03f3762c:
      (*(code *)*puVar13)(param_1,puVar13[1]);
    }
    if (param_4 == (long **)0x0) {
      return param_2;
    }
  }
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    uVar31 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03f3771c;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(param_1);
LAB_03f3771c:
    (*(code *)*puVar13)(param_1,puVar13[1]);
  }
  func_0x03365958(auVar52._0_8_);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  plVar24 = auVar50._0_8_;
  alStack_130[0] = tpidr_el0;
  lStack_c8 = *(long *)(alStack_130[0] + 0x28);
  plVar36 = pplVar21[7];
  pplVar35 = pplVar21;
  uStack_f8 = uVar20;
  if (plVar36 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar36 = pplVar21[7];
    if (plVar36 == (long *)0x0) {
      func_0x03256878(pplVar21);
      plVar36 = pplVar21[7];
    }
  }
  plStack_f0 = (long *)(ulong)*(uint *)(plVar36[0xe] + 0xfc);
  plVar41 = (long *)(ulong)*(uint *)(plVar36[0x12] + 0xfc);
  uVar20 = (ulong)((long)plStack_f0 + 0xfU) & 0x1fffffff0;
  plVar33 = (long *)((long)alStack_130 - uVar20);
  plStack_108 = (long *)((long)plVar33 - uVar20);
  plStack_118 = (long *)((long)plStack_108 - uVar20);
  puVar39 = (undefined *)((ulong)((long)plVar41 + 0xfU) & 0x1fffffff0);
  lVar42 = (long)plStack_118 - (long)puVar39;
  plVar37 = (long *)(lVar42 - (long)puVar39);
  lVar25 = (long)plVar37 - uVar20;
  func_0x072ce9a0(lVar25,0);
  lVar11 = lVar25 - (long)puVar39;
  alStack_130[1] = lVar11;
  plStack_120 = plVar41;
  func_0x072ce9a0(lVar11,0,plVar41);
  if ((*(byte *)(*plVar36 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar36 = (long *)func_0x03280ca0();
  (**(code **)pplVar21[7][1])();
  if (plVar36 != (long *)0x0) {
    plStack_110 = plVar36 + 2;
    *plStack_110 = auVar50._8_8_;
    func_0x032809c4(plStack_110,auVar50._8_8_);
    if ((*(byte *)(pplVar21[7][5] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar12 = func_0x03280ca0();
    pplVar35 = (long **)pplVar21[7][6];
    (*(code *)*pplVar35)(uVar12,plVar36,pplVar21[7][4]);
    (**(code **)pplVar21[7][7])(plVar24,uVar12);
    if ((*(byte *)(pplVar21[7][8] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar14 = (long *)func_0x03280ca0();
    auVar50._8_8_ = plVar14;
    auVar50._0_8_ = plVar24;
    (**(code **)pplVar21[7][9])();
    if (plVar24 != (long *)0x0) {
      lVar19 = pplVar21[7][10];
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar26 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
      plStack_100 = plVar14;
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar19) {
            puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f37974;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,lVar19,0);
LAB_03f37974:
      plVar14 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
      auVar50._8_8_ = plVar14;
      if (plVar14 != (long *)0x0) {
        puVar39 = (undefined *)0x0;
        do {
          auVar50._0_8_ = plVar24;
          lVar19 = *plVar14;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
                goto LAB_03f379e0;
              }
              uVar20 = uVar20 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar20 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0774e8e0,0);
LAB_03f379e0:
          uVar20 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar20 & 1) == 0) {
            lVar25 = 0;
            goto LAB_03f37bec;
          }
          lVar19 = pplVar21[7][0xc];
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c(lVar19);
          }
          lVar26 = *plVar14;
          uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar20 != 0) {
            piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar19) {
                lVar19 = lVar26 + (long)*piVar32 * 0x10 + 0x138;
                goto LAB_03f37a54;
              }
              uVar20 = uVar20 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar20 != 0);
          }
          lVar19 = func_0x03256b10(plVar14,lVar19,0);
LAB_03f37a54:
          lVar19 = *(long *)(lVar19 + 8);
          pplVar35 = &plStack_e8;
          plStack_e8 = plVar33;
          (**(code **)(lVar19 + 0x10))(*(undefined8 *)(lVar19 + 8),lVar19,plVar14,pplVar35,plVar33);
          plVar24 = plStack_f0;
          func_0x072ce970(lVar25,plVar33,plStack_f0);
          plVar41 = plStack_108;
          lVar19 = *plStack_110;
          func_0x072ce970(plStack_108,lVar25,plVar24);
          plVar36 = (long *)0x0;
          if (lVar19 == 0) goto LAB_03f37c90;
          if (-1 < *(int *)(pplVar21[7][0xe] + 0x28)) {
            plVar41 = (long *)*plVar41;
          }
          puVar13 = (undefined8 *)pplVar21[7][0xf];
          pplVar35 = &plStack_e8;
          plStack_e8 = plVar41;
          (*(code *)puVar13[2])(*puVar13,puVar13,lVar19,pplVar35,&uStack_cc);
          plVar36 = plStack_118;
          plVar41 = (long *)(ulong)uStack_cc;
          func_0x072ce970(plStack_118,lVar25,plStack_f0);
          if (uStack_f8 == 0) goto LAB_03f37c94;
          if (-1 < *(int *)(pplVar21[7][0xe] + 0x28)) {
            plVar36 = (long *)*plVar36;
          }
          puVar13 = (undefined8 *)pplVar21[7][0x11];
          plStack_e8 = plVar36;
          puStack_e0 = (uint *)lVar42;
          (*(code *)puVar13[2])(*puVar13,puVar13,uStack_f8,&plStack_e8,lVar42);
          plVar24 = plStack_120;
          lVar19 = alStack_130[1];
          func_0x072ce970(alStack_130[1],lVar42,plStack_120);
          func_0x072ce970(plVar37,lVar19,plVar24);
          if ((*(byte *)(pplVar21[7][0x13] + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar36 = (long *)func_0x03280ca0();
          plStack_e8 = plVar37;
          if (-1 < *(int *)(pplVar21[7][0x12] + 0x28)) {
            plStack_e8 = (long *)*plVar37;
          }
          puVar13 = (undefined8 *)pplVar21[7][0x14];
          uStack_d0 = uStack_cc + (int)puVar39;
          puVar39 = (undefined *)(ulong)uStack_d0;
          puStack_e0 = &uStack_cc;
          puStack_d8 = &uStack_d0;
          pplVar35 = &plStack_e8;
          (*(code *)puVar13[2])(*puVar13,puVar13,plVar36,pplVar35,&uStack_d0);
          if (plStack_100 == (long *)0x0) goto LAB_03f37c8c;
          (**(code **)pplVar21[7][0x15])(plStack_100,plVar36);
          plVar24 = plVar33;
        } while( true );
      }
      goto LAB_03f37c9c;
    }
  }
LAB_03f37c98:
  func_0x03280cac();
LAB_03f37c9c:
  func_0x03280cac();
LAB_03f37ca0:
  plVar24 = (long *)func_0x03280ca4(lVar25);
  do {
    plVar14 = auVar50._8_8_;
    auVar52 = func_0x072ce990(plVar24);
    uVar12 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) {
      if (plVar14 == (long *)0x0) goto LAB_03f37d5c;
      lVar25 = *plVar14;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 == 0) goto LAB_03f37d34;
      piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      goto LAB_03f37d1c;
    }
    plVar24 = (long *)func_0x072ce910(uVar12);
    lVar25 = *plVar24;
    func_0x072ce920();
LAB_03f37bec:
    plVar24 = auVar50._8_8_;
    if (plVar24 != (long *)0x0) {
      lVar19 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f37c44;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0774e8c8,0);
LAB_03f37c44:
      (*(code *)*puVar13)(plVar24,puVar13[1]);
    }
    if (lVar25 != 0) goto LAB_03f37ca0;
    plVar24 = plStack_100;
    if (*(long *)(alStack_130[0] + 0x28) == lStack_c8) {
      return plStack_100;
    }
  } while( true );
LAB_03f37c8c:
  func_0x03280cac();
  plVar24 = plVar33;
LAB_03f37c90:
  func_0x03280cac();
LAB_03f37c94:
  auVar50._0_8_ = plVar24;
  func_0x03280cac();
  goto LAB_03f37c98;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar32 = piVar32 + 4;
    if (uVar20 == 0) break;
LAB_03f382b0:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03f382e4;
    }
  }
LAB_03f382c8:
  lVar19 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f382e4:
  (*(code *)*puVar13)(plVar33,puVar13[1]);
LAB_03f382f0:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  plVar14 = auVar50._0_8_;
  *(undefined1 **)(lVar11 + -0xb0) = &stack0xffffffffffffff40;
  *(undefined8 *)(lVar11 + -0xa8) = 0x3f38308;
  *(long *)(lVar11 + -0xa0) = lVar42;
  *(long **)(lVar11 + -0x98) = plVar41;
  *(undefined **)(lVar11 + -0x90) = puVar39;
  *(long **)(lVar11 + -0x88) = plVar37;
  *(long **)(lVar11 + -0x80) = plVar36;
  *(undefined8 *)(lVar11 + -0x78) = uVar12;
  *(undefined8 *)(lVar11 + -0x70) = 0;
  *(long **)(lVar11 + -0x68) = plVar33;
  *(long **)(lVar11 + -0x60) = plVar15;
  *(long *)(lVar11 + -0x58) = lVar25;
  *(long *)(lVar11 + -0xe0) = auVar50._8_8_;
  plVar24 = (long *)tpidr_el0;
  *(long *)(lVar11 + -0xb8) = plVar24[5];
  lVar25 = *(long *)(lVar19 + 0x38);
  if (lVar25 == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777bd50);
    lVar25 = *(long *)(lVar19 + 0x38);
    if (lVar25 == 0) {
      func_0x03256878(lVar19);
      lVar25 = *(long *)(lVar19 + 0x38);
    }
  }
  uVar4 = *(uint *)(*(long *)(lVar25 + 0x68) + 0xfc);
  puVar13 = (undefined8 *)(ulong)uVar4;
  if ((*(byte *)(*(long *)(lVar25 + 0x68) + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
    uVar4 = *(uint *)(lVar25 + 0xfc);
    lVar25 = *(long *)(lVar19 + 0x38);
  }
  puVar9 = (undefined8 *)((lVar11 + -0xf0) - ((ulong)(uVar4 + 0x10) + 0xf & 0x1fffffff0));
  uVar20 = (long)puVar13 + 0xfU & 0x1fffffff0;
  lVar26 = (long)puVar9 - uVar20;
  lVar27 = lVar26 - uVar20;
  func_0x072ce9a0(lVar27,0,puVar13);
  lVar42 = lVar27 - uVar20;
  *(long *)(lVar11 + -0xe8) = lVar42;
  func_0x072ce9a0(lVar42,0,puVar13);
  uVar20 = (*(code *)**(undefined8 **)(lVar25 + 8))(plVar14);
  if ((uVar20 & 1) == 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x10))(plVar14);
    lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
    }
    lVar25 = *(long *)(lVar19 + 0x38);
    *(long **)(lVar11 + -0xd8) = plVar24;
    lVar25 = *(long *)(lVar25 + 0x30);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar25 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
    if (lVar25 == 0) {
      lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      if (*(int *)(lVar25 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(lVar19 + 0x38);
      lVar25 = *(long *)(lVar22 + 0x30);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
        lVar22 = *(long *)(lVar19 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x28);
      uVar12 = **(undefined8 **)(lVar25 + 0xb8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar25 = func_0x03280ca0(lVar22);
      (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x40))
                (lVar25,uVar12,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x38));
      lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar22 + 0xb8) + 8) = lVar25;
      lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar22 + 0xb8) + 8,lVar25);
    }
    uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x48))(plVar14,lVar25);
    puVar39 = PTR_DAT_0777bd50;
    plVar24 = (long *)(uVar20 & 0xffffffff);
    lVar25 = *(long *)PTR_DAT_0777bd50;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
      lVar25 = *(long *)puVar39;
    }
    plVar36 = (long *)**(long **)(lVar25 + 0xb8);
    if (plVar36 != (long *)0x0) {
      puVar18 = *(undefined8 **)(*plVar36 + 0x1b0);
      iVar6 = (**(code **)(*plVar36 + 0x1a8))(plVar36,plVar24);
      if (plVar14 != (long *)0x0) {
        lVar25 = **(long **)(lVar19 + 0x38);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar14;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar25) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03f385fc;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        puVar18 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03f385fc:
        plVar24 = (long *)(*(code *)*puVar17)(plVar14,puVar17[1]);
        puVar40 = PTR_DAT_0774e8e0;
        if (plVar24 != (long *)0x0) {
          iVar38 = 0;
          do {
            lVar25 = *plVar24;
            uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar20 != 0) {
              piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)puVar40) {
                  puVar17 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_03f3866c;
                }
                uVar20 = uVar20 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar20 != 0);
            }
            puVar18 = (undefined8 *)0x0;
            puVar17 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03f3866c:
            plVar36 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
            if (((ulong)plVar36 & 1) == 0) {
              puVar39 = (undefined *)0x9;
              goto joined_r0x03f38784;
            }
            lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x58);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = func_0x0325681c(lVar25);
            }
            lVar22 = *plVar24;
            uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar20 != 0) {
              piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar25) {
                  lVar25 = lVar22 + (long)*piVar32 * 0x10 + 0x138;
                  goto LAB_03f386e0;
                }
                uVar20 = uVar20 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar20 != 0);
            }
            lVar25 = func_0x03256b10(plVar24,lVar25,0);
LAB_03f386e0:
            *(long *)(lVar11 + -0xc0) = lVar26;
            lVar25 = *(long *)(lVar25 + 8);
            (**(code **)(lVar25 + 0x10))
                      (*(undefined8 *)(lVar25 + 8),lVar25,plVar24,lVar11 + -0xc0,lVar26);
            func_0x072ce970(lVar27,lVar26,puVar13);
            lVar22 = *(long *)(lVar19 + 0x38);
            lVar25 = *(long *)(lVar22 + 0x68);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = func_0x0325681c();
              lVar22 = *(long *)(lVar19 + 0x38);
            }
            puVar18 = puVar9;
            func_0x0328158c(lVar25,*(undefined8 *)(lVar22 + 0x70),puVar9,lVar27,0,lVar11 + -0xc0);
            iVar38 = *(int *)(lVar11 + -0xc0) + iVar38;
          } while (iVar38 < iVar6 + 1);
          func_0x072ce970(lVar26,lVar27,puVar13);
          puVar18 = puVar13;
          plVar36 = (long *)func_0x072ce970(*(undefined8 *)(lVar11 + -0xe8),lVar26);
          puVar39 = (undefined *)0x8;
joined_r0x03f38784:
          puVar9 = (undefined8 *)0x0;
          goto joined_r0x03f38784;
        }
        goto LAB_03f388bc;
      }
    }
    func_0x03280cac();
  }
  func_0x03280a2c(PTR_DAT_0774e6e8);
  puVar39 = (undefined *)func_0x03280ca0();
  uVar12 = func_0x03280a2c(PTR_DAT_0777bd58);
  puVar18 = (undefined8 *)0x0;
  func_0x056ede60(puVar39,uVar12);
  func_0x03280b7c(puVar39,lVar19);
LAB_03f388bc:
  func_0x03280cac();
LAB_03f388c0:
  func_0x03280ca4(puVar9);
  do {
    auVar52 = func_0x072ce990();
    if (auVar52._8_4_ != 1) {
      if (plVar24 == (long *)0x0) goto LAB_03f38970;
      lVar11 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar20 == 0) goto LAB_03f38948;
      piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_03f38930;
    }
    puVar9 = (undefined8 *)func_0x072ce910(auVar52._0_8_);
    puVar9 = (undefined8 *)*puVar9;
    plVar36 = (long *)func_0x072ce920();
    puVar39 = (undefined *)0x0;
joined_r0x03f38784:
    if (plVar24 != (long *)0x0) {
      lVar25 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f387dc;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar18 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03f387dc:
      plVar36 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
    }
    if (puVar9 != (undefined8 *)0x0) goto LAB_03f388c0;
    lVar25 = *(long *)(lVar11 + -0xd8);
    iVar6 = (int)puVar39;
    if (iVar6 == 9) {
LAB_03f38804:
      puVar9 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x78);
      uVar12 = *puVar9;
      *(long **)(lVar11 + -0xd0) = plVar14;
      *(long *)(lVar11 + -200) = lVar26;
      (*(code *)puVar9[2])(uVar12,puVar9,0,lVar11 + -0xd0,lVar26);
LAB_03f3883c:
      puVar18 = puVar13;
      plVar36 = (long *)func_0x072ce970(*(undefined8 *)(lVar11 + -0xe0),lVar26);
    }
    else {
      if (iVar6 == 8) {
        func_0x072ce970(lVar26,*(undefined8 *)(lVar11 + -0xe8),puVar13);
        goto LAB_03f3883c;
      }
      if (iVar6 == 0) goto LAB_03f38804;
    }
    if (*(long *)(lVar25 + 0x28) == *(long *)(lVar11 + -0xb8)) {
      return plVar36;
    }
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar32 = piVar32 + 4;
    if (uVar20 == 0) break;
LAB_03d40dec:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03d40e20;
    }
  }
LAB_03d40e04:
  lVar19 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40e20:
  (*(code *)*puVar13)(plVar24,puVar13[1]);
LAB_03d40e2c:
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  plVar36 = auVar50._0_8_;
  *(undefined1 **)(lVar11 + -0x90) = &stack0xffffffffffffff40;
  *(undefined8 *)(lVar11 + -0x88) = 0x3d40e44;
  *(long **)(lVar11 + -0x80) = plVar41;
  *(undefined8 *)(lVar11 + -0x70) = uVar8;
  *(undefined8 *)(lVar11 + -0x68) = uVar2;
  *(undefined8 *)(lVar11 + -0x60) = uVar12;
  *(undefined8 *)(lVar11 + -0x58) = uVar34;
  *(undefined8 *)(lVar11 + -0x50) = uVar7;
  *(undefined8 *)(lVar11 + -0x48) = 0;
  *(long **)(lVar11 + -0x40) = plVar24;
  *(long *)(lVar11 + -0x38) = lVar25;
  lVar25 = tpidr_el0;
  *(undefined8 *)(lVar11 + -0x98) = *(undefined8 *)(lVar25 + 0x28);
  plVar24 = *(long **)(lVar19 + 0x38);
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar24 = *(long **)(lVar19 + 0x38);
    if (plVar24 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar24 = *(long **)(lVar19 + 0x38);
    }
  }
  uVar31 = (ulong)*(uint *)(plVar24[5] + 0xfc);
  uVar20 = uVar31 + 0xf & 0x1fffffff0;
  plVar33 = (long *)((lVar11 + -0xb0) - uVar20);
  lVar26 = (long)plVar33 - uVar20;
  uVar20 = uVar31;
  func_0x072ce9a0(lVar26,0);
  if (plVar36 == (long *)0x0) {
    uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar12 = func_0x05ac7464(uVar12,0);
    goto LAB_03d41288;
  }
  lVar27 = plVar24[1];
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  plVar24 = (long *)func_0x03280b90(plVar36,lVar27);
  if (plVar24 == (long *)0x0) {
    lVar27 = **(long **)(lVar19 + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4107c;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4107c:
    plVar24 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    if (plVar24 == (long *)0x0) goto LAB_03d41290;
    lVar27 = *plVar24;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d410e4;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d410e4:
    plVar37 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
    if (((ulong)plVar37 & 1) == 0) {
      plVar36 = (long *)0x0;
      iVar38 = 6;
      iVar6 = 6;
      goto joined_r0x03d41154;
    }
    lVar27 = *(long *)(*(long *)(lVar19 + 0x38) + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          lVar27 = lVar22 + (long)*piVar32 * 0x10 + 0x138;
          goto LAB_03d41168;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    lVar27 = func_0x03256b10(plVar24,lVar27,0);
LAB_03d41168:
    *(long **)(lVar11 + -0xb0) = plVar33;
    lVar27 = *(long *)(lVar27 + 8);
    pplVar35 = (long **)(lVar11 + -0xb0);
    (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar24,pplVar35,plVar33);
    uVar20 = uVar31;
    plVar37 = (long *)func_0x072ce970(lVar26,plVar33);
    plVar36 = (long *)0x0;
    iVar6 = 8;
    iVar38 = 8;
    if (plVar24 == (long *)0x0) goto LAB_03d41200;
    goto LAB_03d411a0;
  }
  lVar27 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar24;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d40fd0;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40fd0:
  iVar6 = (*(code *)*puVar13)(plVar24,puVar13[1]);
  if (iVar6 < 1) goto LAB_03d41218;
  lVar27 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  *(undefined4 *)(lVar11 + -0x9c) = 0;
  lVar22 = *plVar24;
  uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        lVar27 = lVar22 + (long)*piVar32 * 0x10 + 0x138;
        goto LAB_03d4104c;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  lVar27 = func_0x03256b10(plVar24,lVar27,0);
LAB_03d4104c:
  *(long *)(lVar11 + -0xb0) = lVar11 + -0x9c;
  *(long **)(lVar11 + -0xa8) = plVar33;
  lVar27 = *(long *)(lVar27 + 8);
  pplVar35 = (long **)(lVar11 + -0xb0);
  (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar24,pplVar35,plVar33);
LAB_03d41234:
  uVar20 = uVar31;
  plVar37 = (long *)func_0x072ce970(auVar50._8_8_,plVar33);
LAB_03d41244:
  if (*(long *)(lVar25 + 0x28) == *(long *)(lVar11 + -0x98)) {
    return plVar37;
  }
  do {
    auVar52 = func_0x072ce990();
    uVar12 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) {
      if (plVar24 == (long *)0x0) goto LAB_03d41340;
      lVar27 = *plVar24;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 == 0) goto LAB_03d41318;
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      goto LAB_03d41300;
    }
    puVar13 = (undefined8 *)func_0x072ce910(uVar12);
    plVar36 = (long *)*puVar13;
    plVar37 = (long *)func_0x072ce920();
    iVar38 = 0;
    iVar6 = 0;
joined_r0x03d41154:
    if (plVar24 != (long *)0x0) {
LAB_03d411a0:
      iVar6 = iVar38;
      lVar27 = *plVar24;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d411f4;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d411f4:
      plVar37 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
    }
LAB_03d41200:
    if (plVar36 == (long *)0x0) {
      if (iVar6 == 8) {
        func_0x072ce970(plVar33,lVar26,uVar31);
        goto LAB_03d41234;
      }
      if ((iVar6 != 6) && (iVar6 != 0)) goto LAB_03d41244;
LAB_03d41218:
      uVar12 = func_0x05ac75f4(0);
LAB_03d41288:
      func_0x03280b7c(uVar12,lVar19);
LAB_03d41290:
      func_0x03280cac();
    }
    func_0x03280ca4(plVar36);
  } while( true );
  while( true ) {
    uVar31 = uVar31 - 1;
    piVar32 = piVar32 + 4;
    if (uVar31 == 0) break;
LAB_03d41784:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03d417b8;
    }
  }
LAB_03d4179c:
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d417b8:
  (*(code *)*puVar13)(plVar33,puVar13[1]);
LAB_03d417c4:
  func_0x03365958(plVar36);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar19 = auVar51._8_8_;
  plVar37 = auVar51._0_8_;
  *(undefined8 *)(lVar26 + -0xb0) = 0x3d417dc;
  *(long **)(lVar26 + -0xa0) = plVar24;
  *(long **)(lVar26 + -0x98) = plVar36;
  *(undefined8 *)(lVar26 + -0x90) = 0;
  *(long **)(lVar26 + -0x88) = plVar33;
  *(long *)(lVar26 + -0x80) = lVar27;
  *(undefined8 **)(lVar26 + -0x78) = extraout_x8;
  uVar31 = uVar20;
  if (*(long *)(uVar20 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar20 + 0x38) == 0) {
      func_0x03256878(uVar20);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar37 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41a7c;
  }
  lVar27 = **(long **)(uVar20 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar37;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d41894;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar31 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_03d41894:
  plVar33 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar51._8_8_ = lVar19;
  auVar51._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d41a84;
  do {
    lVar27 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d418fc;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d418fc:
    uVar28 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    if ((uVar28 & 1) == 0) {
      plVar36 = (long *)0x0;
      plVar24 = (long *)0xb;
      goto joined_r0x03d419c0;
    }
    lVar27 = *(long *)(*(long *)(uVar20 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41970;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar27,0);
LAB_03d41970:
    auVar50 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    uVar31 = auVar50._8_8_;
    plVar36 = auVar50._0_8_;
    pplVar35 = *(long ***)(lVar19 + 0x28);
    uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
  } while ((uVar28 & 1) == 0);
  plVar24 = (long *)0xa;
joined_r0x03d419c0:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar27 = *plVar33;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d41a18;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41a18:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar51._8_8_ = lVar19;
    auVar51._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (((int)plVar24 != 0xb) && ((int)plVar24 != 0)) {
        return plVar36;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d41a7c:
      func_0x03280b7c(uVar8,uVar20);
LAB_03d41a84:
      func_0x03280cac();
    }
    plVar33 = auVar51._0_8_;
    auVar52 = func_0x03280ca4(auVar51._8_8_);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar24 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar24;
    func_0x072ce920();
    plVar24 = (long *)0x0;
    plVar36 = (long *)0x0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41b30;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41b30:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar43 = func_0x02f09514();
  lVar19 = auVar43._8_8_;
  plVar37 = auVar43._0_8_;
  *(undefined8 *)(lVar26 + -0xf0) = 0x3d41b54;
  *(long **)(lVar26 + -0xe0) = plVar24;
  *(long **)(lVar26 + -0xd8) = plVar36;
  *(undefined8 *)(lVar26 + -0xd0) = uVar8;
  *(undefined8 *)(lVar26 + -200) = 0;
  *(long **)(lVar26 + -0xc0) = plVar33;
  *(ulong *)(lVar26 + -0xb8) = uVar20;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar37 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41df4;
  }
  lVar27 = **(long **)(uVar31 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar37;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d41c0c;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_03d41c0c:
  plVar33 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar43._8_8_ = lVar19;
  auVar43._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d41dfc;
  do {
    lVar27 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41c74;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41c74:
    uVar28 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    if ((uVar28 & 1) == 0) {
      plVar36 = (long *)0x0;
      plVar24 = (long *)0xb;
      goto joined_r0x03d41d38;
    }
    lVar27 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41ce8;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar27,0);
LAB_03d41ce8:
    auVar50 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    uVar20 = auVar50._8_8_;
    plVar36 = auVar50._0_8_;
    pplVar35 = *(long ***)(lVar19 + 0x28);
    uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
  } while ((uVar28 & 1) == 0);
  plVar24 = (long *)0xa;
joined_r0x03d41d38:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar27 = *plVar33;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d41d90;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41d90:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar43._8_8_ = lVar19;
    auVar43._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (((int)plVar24 != 0xb) && ((int)plVar24 != 0)) {
        return plVar36;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d41df4:
      func_0x03280b7c(uVar8,uVar31);
LAB_03d41dfc:
      func_0x03280cac();
    }
    plVar33 = auVar43._0_8_;
    auVar52 = func_0x03280ca4(auVar43._8_8_);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar24 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar24;
    func_0x072ce920();
    plVar24 = (long *)0x0;
    plVar36 = (long *)0x0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41ea8;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41ea8:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  lVar19 = auVar44._8_8_;
  plVar37 = auVar44._0_8_;
  *(undefined8 *)(lVar26 + -0x130) = 0x3d41ecc;
  *(long **)(lVar26 + -0x120) = plVar24;
  *(long **)(lVar26 + -0x118) = plVar36;
  *(undefined8 *)(lVar26 + -0x110) = uVar8;
  *(undefined8 *)(lVar26 + -0x108) = 0;
  *(long **)(lVar26 + -0x100) = plVar33;
  *(ulong *)(lVar26 + -0xf8) = uVar31;
  uVar31 = uVar20;
  if (*(long *)(uVar20 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar20 + 0x38) == 0) {
      func_0x03256878(uVar20);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar37 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d4216c;
  }
  lVar27 = **(long **)(uVar20 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar37;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d41f84;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar31 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_03d41f84:
  plVar33 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar44._8_8_ = lVar19;
  auVar44._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d42174;
  do {
    lVar27 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41fec;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41fec:
    uVar28 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    if ((uVar28 & 1) == 0) {
      plVar36 = (long *)0x0;
      plVar24 = (long *)0xb;
      goto joined_r0x03d420b0;
    }
    lVar27 = *(long *)(*(long *)(uVar20 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42060;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar27,0);
LAB_03d42060:
    auVar50 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    uVar31 = auVar50._8_8_;
    plVar36 = auVar50._0_8_;
    pplVar35 = *(long ***)(lVar19 + 0x28);
    uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
  } while ((uVar28 & 1) == 0);
  plVar24 = (long *)0xa;
joined_r0x03d420b0:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar27 = *plVar33;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d42108;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42108:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar44._8_8_ = lVar19;
    auVar44._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (((int)plVar24 != 0xb) && ((int)plVar24 != 0)) {
        return plVar36;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d4216c:
      func_0x03280b7c(uVar8,uVar20);
LAB_03d42174:
      func_0x03280cac();
    }
    plVar33 = auVar44._0_8_;
    auVar52 = func_0x03280ca4(auVar44._8_8_);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar24 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar24;
    func_0x072ce920();
    plVar24 = (long *)0x0;
    plVar36 = (long *)0x0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42220;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42220:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar45 = func_0x02f09514();
  lVar19 = auVar45._8_8_;
  plVar37 = auVar45._0_8_;
  *(undefined8 *)(lVar26 + -0x160) = 0x3d42244;
  *(long **)(lVar26 + -0x158) = plVar36;
  *(undefined8 *)(lVar26 + -0x150) = uVar8;
  *(undefined8 *)(lVar26 + -0x148) = 0;
  *(long **)(lVar26 + -0x140) = plVar33;
  *(ulong *)(lVar26 + -0x138) = uVar20;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  *(undefined8 *)(lVar26 + -0x1a0) = 0;
  *(undefined8 *)(lVar26 + -0x198) = 0;
  *(undefined8 *)(lVar26 + -400) = 0;
  *(undefined8 *)(lVar26 + -0x1c0) = 0;
  *(undefined8 *)(lVar26 + -0x1b8) = 0;
  *(undefined8 *)(lVar26 + -0x1b0) = 0;
  puVar39 = PTR_DAT_07774b08;
  if ((plVar37 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d42520;
  }
  lVar27 = **(long **)(uVar31 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar37;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d42310;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_03d42310:
  plVar36 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar45._8_8_ = lVar19;
  auVar45._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d42528;
  do {
    lVar27 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42378;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42378:
    plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    if (((ulong)plVar33 & 1) == 0) {
      iVar6 = 0xb;
      goto joined_r0x03d42454;
    }
    lVar27 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d423ec;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar27,0);
LAB_03d423ec:
    (*(code *)*puVar13)(lVar26 + -0x180,plVar36,puVar13[1]);
    *(undefined8 *)(lVar26 + -0x198) = *(undefined8 *)(lVar26 + -0x178);
    *(undefined8 *)(lVar26 + -0x1a0) = *(undefined8 *)(lVar26 + -0x180);
    *(undefined8 *)(lVar26 + -400) = *(undefined8 *)(lVar26 + -0x170);
    pcVar29 = *(code **)(lVar19 + 0x18);
    uVar8 = *(undefined8 *)(lVar19 + 0x40);
    *(undefined8 *)(lVar26 + -0x178) = *(undefined8 *)(lVar26 + -0x178);
    *(undefined8 *)(lVar26 + -0x180) = *(undefined8 *)(lVar26 + -0x180);
    *(undefined8 *)(lVar26 + -0x170) = *(undefined8 *)(lVar26 + -0x170);
    uVar20 = *(ulong *)(lVar19 + 0x28);
    plVar33 = (long *)(*pcVar29)(uVar8,lVar26 + -0x180);
  } while (((ulong)plVar33 & 1) == 0);
  iVar6 = 10;
  *(undefined8 *)(lVar26 + -0x1b8) = *(undefined8 *)(lVar26 + -0x198);
  *(undefined8 *)(lVar26 + -0x1c0) = *(undefined8 *)(lVar26 + -0x1a0);
  *(undefined8 *)(lVar26 + -0x1b0) = *(undefined8 *)(lVar26 + -400);
joined_r0x03d42454:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar27 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d424ac;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d424ac:
      plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar45._8_8_ = lVar19;
    auVar45._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (iVar6 == 10) {
        uVar8 = *(undefined8 *)(lVar26 + -0x1b8);
        uVar12 = *(undefined8 *)(lVar26 + -0x1c0);
        extraout_x8_00[2] = *(undefined8 *)(lVar26 + -0x1b0);
        extraout_x8_00[1] = uVar8;
        *extraout_x8_00 = uVar12;
        return plVar33;
      }
      if ((iVar6 != 0xb) && (iVar6 != 0)) {
        return plVar33;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d42520:
      func_0x03280b7c(uVar8,uVar31);
LAB_03d42528:
      func_0x03280cac();
    }
    plVar36 = auVar45._0_8_;
    auVar52 = func_0x03280ca4(auVar45._8_8_);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar33 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar33;
    plVar33 = (long *)func_0x072ce920();
    iVar6 = 0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d425cc;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d425cc:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar46 = func_0x02f09514();
  lVar19 = auVar46._8_8_;
  plVar33 = auVar46._0_8_;
  *(undefined8 *)(lVar26 + -0x1f0) = 0x3d425f0;
  *(undefined8 *)(lVar26 + -0x1e8) = uVar8;
  *(undefined8 *)(lVar26 + -0x1e0) = 0;
  *(long **)(lVar26 + -0x1d8) = plVar36;
  *(undefined8 **)(lVar26 + -0x1d0) = extraout_x8_00;
  *(ulong *)(lVar26 + -0x1c8) = uVar31;
  uVar31 = uVar20;
  if (*(long *)(uVar20 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar20 + 0x38) == 0) {
      func_0x03256878(uVar20);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar34 = func_0x03280a2c(puVar39);
    uVar34 = func_0x05ac7464(uVar34,0);
    goto LAB_03d42878;
  }
  lVar27 = **(long **)(uVar20 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar33;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d426a4;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar31 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d426a4:
  plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar46._8_8_ = lVar19;
  auVar46._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d42880;
  do {
    lVar27 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4270c;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4270c:
    uVar28 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    if ((uVar28 & 1) == 0) {
      plVar33 = (long *)0x0;
      uVar8 = 0xb;
      goto joined_r0x03d427c4;
    }
    lVar27 = *(long *)(*(long *)(uVar20 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42780;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar27,0);
LAB_03d42780:
    plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    uVar31 = *(ulong *)(lVar19 + 0x28);
    uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
  } while ((uVar28 & 1) == 0);
  uVar8 = 10;
joined_r0x03d427c4:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar27 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d4281c;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4281c:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar46._8_8_ = lVar19;
    auVar46._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (((int)uVar8 != 0xb) && ((int)uVar8 != 0)) {
        return plVar33;
      }
      uVar34 = func_0x05ac7660(0);
LAB_03d42878:
      func_0x03280b7c(uVar34,uVar20);
LAB_03d42880:
      func_0x03280cac();
    }
    plVar36 = auVar46._0_8_;
    auVar52 = func_0x03280ca4(auVar46._8_8_);
    uVar34 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar33 = (long *)func_0x072ce910(uVar34);
    lVar19 = *plVar33;
    func_0x072ce920();
    uVar8 = 0;
    plVar33 = (long *)0x0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42928;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42928:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar34);
  func_0x03280ca4(0);
  auVar47 = func_0x02f09514();
  lVar19 = auVar47._8_8_;
  plVar33 = auVar47._0_8_;
  *(undefined8 *)(lVar26 + -0x220) = 0x3d4294c;
  *(undefined8 *)(lVar26 + -0x218) = uVar8;
  *(undefined8 *)(lVar26 + -0x210) = uVar34;
  *(undefined8 *)(lVar26 + -0x208) = 0;
  *(long **)(lVar26 + -0x200) = plVar36;
  *(ulong *)(lVar26 + -0x1f8) = uVar20;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar34 = func_0x03280a2c(puVar39);
    uVar34 = func_0x05ac7464(uVar34,0);
    goto LAB_03d42bd4;
  }
  lVar27 = **(long **)(uVar31 + 0x38);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar33;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d42a00;
      }
      uVar28 = uVar28 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar28 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42a00:
  plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar47._8_8_ = lVar19;
  auVar47._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d42bdc;
  do {
    lVar27 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42a68;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42a68:
    uVar28 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    if ((uVar28 & 1) == 0) {
      plVar33 = (long *)0x0;
      uVar8 = 0xb;
      goto joined_r0x03d42b20;
    }
    lVar27 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42adc;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar27,0);
LAB_03d42adc:
    plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    uVar20 = *(ulong *)(lVar19 + 0x28);
    uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
  } while ((uVar28 & 1) == 0);
  uVar8 = 10;
joined_r0x03d42b20:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar27 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d42b78;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42b78:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar47._8_8_ = lVar19;
    auVar47._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (((int)uVar8 != 0xb) && ((int)uVar8 != 0)) {
        return plVar33;
      }
      uVar34 = func_0x05ac7660(0);
LAB_03d42bd4:
      func_0x03280b7c(uVar34,uVar31);
LAB_03d42bdc:
      func_0x03280cac();
    }
    plVar36 = auVar47._0_8_;
    auVar52 = func_0x03280ca4(auVar47._8_8_);
    uVar34 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar33 = (long *)func_0x072ce910(uVar34);
    lVar19 = *plVar33;
    func_0x072ce920();
    uVar8 = 0;
    plVar33 = (long *)0x0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42c84;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42c84:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar34);
  func_0x03280ca4(0);
  auVar48 = func_0x02f09514();
  uVar28 = auVar48._8_8_;
  plVar33 = auVar48._0_8_;
  *(long *)(lVar26 + -0x280) = lVar11 + -0x90;
  *(undefined8 *)(lVar26 + -0x278) = 0x3d42ca8;
  *(long *)(lVar26 + -0x270) = lVar42;
  *(long *)(lVar26 + -0x268) = lVar25;
  *(undefined8 *)(lVar26 + -0x260) = uVar12;
  *(undefined8 *)(lVar26 + -600) = 0;
  *(long **)(lVar26 + -0x250) = plVar24;
  *(undefined8 *)(lVar26 + -0x248) = uVar8;
  *(undefined8 *)(lVar26 + -0x240) = uVar34;
  *(undefined8 *)(lVar26 + -0x238) = 0;
  *(long **)(lVar26 + -0x230) = plVar36;
  *(ulong *)(lVar26 + -0x228) = uVar31;
  *(ulong *)(lVar26 + -0x2a0) = uVar20;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar26 + -0x288) = *(undefined8 *)(lVar11 + 0x28);
  plVar24 = pplVar35[7];
  pplVar21 = pplVar35;
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar24 = pplVar35[7];
    if (plVar24 == (long *)0x0) {
      func_0x03256878(pplVar35);
      plVar24 = pplVar35[7];
    }
  }
  uVar31 = (ulong)*(uint *)(plVar24[5] + 0xfc);
  uVar20 = uVar31 + 0xf & 0x1fffffff0;
  lVar25 = (lVar26 + -0x2a0) - uVar20;
  puVar13 = (undefined8 *)(lVar25 - uVar20);
  lVar19 = (long)puVar13 - uVar20;
  func_0x072ce9a0(lVar19,0,uVar31);
  lVar42 = lVar19 - uVar20;
  uVar20 = uVar31;
  func_0x072ce9a0(lVar42,0);
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, uVar28 == 0)) {
    uVar12 = func_0x03280a2c(puVar39);
    uVar12 = func_0x05ac7464(uVar12,0);
    goto LAB_03d43068;
  }
  lVar27 = *plVar24;
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c(lVar27);
  }
  lVar22 = *plVar33;
  uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar30 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar27) {
        puVar9 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d42de0;
      }
      uVar30 = uVar30 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar30 != 0);
  }
  uVar20 = 0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42de0:
  plVar36 = (long *)(*(code *)*puVar9)(plVar33,puVar9[1]);
  puVar39 = PTR_DAT_0774e8e0;
  auVar48._8_8_ = uVar28;
  auVar48._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d43070;
  do {
    lVar27 = *plVar36;
    uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
          puVar9 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d42e48;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    uVar20 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42e48:
    plVar33 = (long *)(*(code *)*puVar9)(plVar36,puVar9[1]);
    if (((ulong)plVar33 & 1) == 0) {
      plVar24 = (long *)0xb;
      goto joined_r0x03d42f70;
    }
    lVar27 = pplVar35[7][3];
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          lVar27 = lVar22 + (long)*piVar32 * 0x10 + 0x138;
          goto LAB_03d42ebc;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    lVar27 = func_0x03256b10(plVar36,lVar27,0);
LAB_03d42ebc:
    *(long *)(lVar26 + -0x298) = lVar25;
    lVar27 = *(long *)(lVar27 + 8);
    (**(code **)(lVar27 + 0x10))(*(undefined8 *)(lVar27 + 8),lVar27,plVar36,lVar26 + -0x298,lVar25);
    func_0x072ce970(lVar19,lVar25,uVar31);
    func_0x072ce970(puVar13,lVar19,uVar31);
    puVar9 = puVar13;
    if (-1 < *(int *)(pplVar35[7][5] + 0x28)) {
      puVar9 = (undefined8 *)*puVar13;
    }
    puVar18 = (undefined8 *)pplVar35[7][6];
    uVar12 = *puVar18;
    *(undefined8 **)(lVar26 + -0x298) = puVar9;
    pplVar21 = (long **)(lVar26 + -0x298);
    uVar20 = uVar28;
    (*(code *)puVar18[2])(uVar12);
  } while (*(char *)(lVar26 + -0x28c) == '\0');
  func_0x072ce970(lVar25,lVar19,uVar31);
  uVar20 = uVar31;
  plVar33 = (long *)func_0x072ce970(lVar42,lVar25);
  plVar24 = (long *)0xa;
joined_r0x03d42f70:
  lVar27 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar22 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d42fc8;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42fc8:
      plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar48._8_8_ = lVar27;
    auVar48._0_8_ = plVar36;
    if (lVar27 == 0) {
      iVar6 = (int)plVar24;
      if (iVar6 == 10) {
        func_0x072ce970(lVar25,lVar42,uVar31);
        uVar20 = uVar31;
        plVar33 = (long *)func_0x072ce970(*(undefined8 *)(lVar26 + -0x2a0),lVar25);
      }
      else if ((iVar6 == 0xb) || (iVar6 == 0)) {
        uVar12 = func_0x05ac7660(0);
LAB_03d43068:
        func_0x03280b7c(uVar12,pplVar35);
LAB_03d43070:
        func_0x03280cac();
        goto LAB_03d43074;
      }
      if (*(long *)(lVar11 + 0x28) == *(long *)(lVar26 + -0x288)) {
        return plVar33;
      }
    }
    else {
LAB_03d43074:
      plVar36 = auVar48._0_8_;
      func_0x03280ca4(auVar48._8_8_);
    }
    auVar52 = func_0x072ce990();
    uVar12 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) goto LAB_03d430c0;
    plVar24 = (long *)func_0x072ce910(uVar12);
    lVar27 = *plVar24;
    plVar33 = (long *)func_0x072ce920();
    plVar24 = (long *)0x0;
  } while( true );
  while( true ) {
    uVar31 = uVar31 - 1;
    piVar32 = piVar32 + 4;
    if (uVar31 == 0) break;
LAB_03d4352c:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
      goto LAB_03d43560;
    }
  }
LAB_03d43544:
  uVar20 = 0;
  plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43560:
  (*(code *)*plVar24)(pplVar35,plVar24[1]);
LAB_03d4356c:
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar27 = auVar50._8_8_;
  plVar24 = auVar50._0_8_;
  *(undefined8 *)(lVar42 + -0x60) = 0x3d43584;
  *(long *)(lVar42 + -0x50) = lVar25;
  *(undefined8 *)(lVar42 + -0x48) = uVar8;
  *(undefined8 *)(lVar42 + -0x40) = 0;
  *(long ***)(lVar42 + -0x38) = pplVar35;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar27 + 0x38) == 0) {
      func_0x03256878(lVar27);
    }
  }
  if (plVar24 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar27);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar33 = (long *)func_0x03280b90(plVar24,lVar22);
    if (plVar33 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d436b4;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar11,0);
LAB_03d436b4:
      iVar6 = (*(code *)*puVar13)(plVar33,puVar13[1]);
      if (iVar6 < 1) {
        return (long *)0x0;
      }
      lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d4372c;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar11,0);
LAB_03d4372c:
                    /* WARNING: Could not recover jumptable at 0x03d43744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar24 = (long *)(*(code *)*puVar13)(plVar33,0,puVar13[1]);
      return plVar24;
    }
    lVar22 = **(long **)(lVar27 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar24;
    uVar31 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d43754;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d43754:
    pplVar35 = (long **)(*(code *)*puVar13)(plVar24,puVar13[1]);
    if (pplVar35 != (long **)0x0) {
      plVar24 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar24[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
            plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d437bc;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d437bc:
      uVar31 = (*(code *)*plVar24)(pplVar35,plVar24[1]);
      if ((uVar31 & 1) == 0) {
        lVar27 = 0;
        lVar25 = 6;
        goto joined_r0x03d43830;
      }
      lVar25 = *(long *)(*(long *)(lVar27 + 0x38) + 0x38);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      plVar24 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar24[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar25) {
            plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d43844;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43844:
      plVar24 = (long *)(*(code *)*plVar24)(pplVar35,plVar24[1]);
      lVar27 = 0;
      lVar25 = 8;
      if (pplVar35 == (long **)0x0) goto LAB_03d438c0;
      goto LAB_03d43860;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(lVar27);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar24 = (long *)func_0x072ce910(uVar8);
    lVar27 = *plVar24;
    func_0x072ce920();
    lVar25 = 0;
joined_r0x03d43830:
    plVar24 = (long *)0x0;
    if (pplVar35 != (long **)0x0) {
LAB_03d43860:
      plVar33 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar33 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar33[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            plVar33 = plVar33 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d438b4;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar33 = (long *)func_0x03256b10(pplVar35);
LAB_03d438b4:
      (*(code *)*plVar33)(pplVar35,plVar33[1]);
    }
LAB_03d438c0:
    if (lVar27 == 0) {
      if (((int)lVar25 != 6) && ((int)lVar25 != 0)) {
        return plVar24;
      }
      return (long *)0x0;
    }
  }
  if (pplVar35 != (long **)0x0) {
    plVar24 = *pplVar35;
    uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(plVar24[0x16] + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
          goto LAB_03d439a8;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d439a8:
    (*(code *)*plVar24)(pplVar35,plVar24[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar27 = auVar50._8_8_;
  plVar24 = auVar50._0_8_;
  *(undefined8 *)(lVar42 + -0x90) = unaff_d9;
  *(undefined8 *)(lVar42 + -0x88) = unaff_d8;
  *(undefined8 *)(lVar42 + -0x80) = 0x3d439cc;
  *(undefined8 *)(lVar42 + -0x78) = uVar8;
  *(undefined8 *)(lVar42 + -0x70) = 0;
  *(long ***)(lVar42 + -0x68) = pplVar35;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar27 + 0x38) == 0) {
      func_0x03256878(lVar27);
    }
  }
  if (plVar24 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar27);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar33 = (long *)func_0x03280b90(plVar24,lVar22);
    if (plVar33 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d43afc;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar11,0);
LAB_03d43afc:
      plVar24 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
      if ((int)plVar24 < 1) {
        return plVar24;
      }
      lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d43b74;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar11,0);
LAB_03d43b74:
      plVar24 = (long *)(*(code *)*puVar13)(plVar33,0,puVar13[1]);
      return plVar24;
    }
    lVar22 = **(long **)(lVar27 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar24;
    uVar31 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d43b9c;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d43b9c:
    pplVar35 = (long **)(*(code *)*puVar13)(plVar24,puVar13[1]);
    if (pplVar35 != (long **)0x0) {
      plVar24 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar24[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
            plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d43c04;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43c04:
      plVar24 = (long *)(*(code *)*plVar24)(pplVar35,plVar24[1]);
      if (((ulong)plVar24 & 1) == 0) {
        lVar27 = 0;
        goto LAB_03d43c78;
      }
      lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x38);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      plVar24 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar24[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar27) {
            plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d43c90;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43c90:
      plVar24 = (long *)(*(code *)*plVar24)(pplVar35,plVar24[1]);
      lVar27 = 0;
      if (pplVar35 == (long **)0x0) goto LAB_03d43d10;
      goto LAB_03d43cb0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(lVar27);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    plVar24 = (long *)func_0x072ce910(uVar8);
    lVar27 = *plVar24;
    plVar24 = (long *)func_0x072ce920();
LAB_03d43c78:
    if (pplVar35 != (long **)0x0) {
LAB_03d43cb0:
      plVar24 = *pplVar35;
      uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(plVar24[0x16] + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
            goto LAB_03d43d04;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43d04:
      plVar24 = (long *)(*(code *)*plVar24)(pplVar35,plVar24[1]);
    }
LAB_03d43d10:
    if (lVar27 == 0) {
      return plVar24;
    }
  }
  if (pplVar35 != (long **)0x0) {
    plVar24 = *pplVar35;
    uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(plVar24[0x16] + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
          goto LAB_03d43dfc;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43dfc:
    (*(code *)*plVar24)(pplVar35,plVar24[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  plVar33 = auVar50._0_8_;
  *(long *)(lVar42 + -0xf0) = lVar26 + -0x280;
  *(undefined8 *)(lVar42 + -0xe8) = 0x3d43e20;
  *(long *)(lVar42 + -0xe0) = lVar19;
  *(undefined8 *)(lVar42 + -0xd0) = uVar12;
  *(undefined8 *)(lVar42 + -200) = 0;
  *(long **)(lVar42 + -0xc0) = plVar36;
  *(long *)(lVar42 + -0xb8) = lVar42;
  *(long *)(lVar42 + -0xb0) = lVar25;
  *(undefined8 *)(lVar42 + -0xa8) = uVar8;
  *(undefined8 *)(lVar42 + -0xa0) = 0;
  *(long ***)(lVar42 + -0x98) = pplVar35;
  lVar25 = tpidr_el0;
  *(undefined8 *)(lVar42 + -0xf8) = *(undefined8 *)(lVar25 + 0x28);
  plVar24 = *(long **)(uVar20 + 0x38);
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar24 = *(long **)(uVar20 + 0x38);
    if (plVar24 == (long *)0x0) {
      func_0x03256878(uVar20);
      plVar24 = *(long **)(uVar20 + 0x38);
    }
  }
  uVar28 = (ulong)*(uint *)(plVar24[5] + 0xfc);
  uVar31 = uVar28 + 0xf & 0x1fffffff0;
  lVar19 = (lVar42 + -0x110) - uVar31;
  lVar27 = lVar19 - uVar31;
  func_0x072ce9a0(lVar27,0,uVar28);
  lVar26 = lVar27 - uVar31;
  auVar49._8_8_ = lVar26;
  auVar49._0_8_ = lVar27;
  uVar31 = uVar28;
  func_0x072ce9a0(lVar26,0);
  if (plVar33 == (long *)0x0) {
    uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,uVar20);
  }
  else {
    lVar22 = plVar24[1];
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar24 = (long *)func_0x03280b90(plVar33,lVar22);
    if (plVar24 != (long *)0x0) {
      lVar22 = *(long *)(*(long *)(uVar20 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar24;
      uVar31 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d43fc8;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,lVar22,0);
LAB_03d43fc8:
      iVar6 = (*(code *)*puVar13)(plVar24,puVar13[1]);
      if (iVar6 < 1) goto LAB_03d44210;
      lVar22 = *(long *)(*(long *)(uVar20 + 0x38) + 8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      *(undefined4 *)(lVar42 + -0xfc) = 0;
      lVar23 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar22) {
            lVar22 = lVar23 + (long)*piVar32 * 0x10 + 0x138;
            goto LAB_03d44044;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      lVar22 = func_0x03256b10(plVar24,lVar22,0);
LAB_03d44044:
      *(long *)(lVar42 + -0x110) = lVar42 + -0xfc;
      *(long *)(lVar42 + -0x108) = lVar19;
      lVar22 = *(long *)(lVar22 + 8);
      pplVar21 = (long **)(lVar42 + -0x110);
      (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar24,pplVar21,lVar19);
      goto LAB_03d44230;
    }
    lVar22 = **(long **)(uVar20 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar33;
    uVar30 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44074;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44074:
    plVar24 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    if (plVar24 != (long *)0x0) {
      lVar22 = *plVar24;
      uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d440dc;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d440dc:
      plVar36 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
      if (((ulong)plVar36 & 1) == 0) {
        uVar20 = 0;
        iVar38 = 6;
        iVar6 = 6;
        goto joined_r0x03d4414c;
      }
      lVar22 = *(long *)(*(long *)(uVar20 + 0x38) + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar22) {
            lVar22 = lVar23 + (long)*piVar32 * 0x10 + 0x138;
            goto LAB_03d44160;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      lVar22 = func_0x03256b10(plVar24,lVar22,0);
LAB_03d44160:
      *(long *)(lVar42 + -0x110) = lVar19;
      lVar22 = *(long *)(lVar22 + 8);
      pplVar21 = (long **)(lVar42 + -0x110);
      (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar24,pplVar21,lVar19);
      uVar31 = uVar28;
      plVar36 = (long *)func_0x072ce970(lVar27,lVar19);
      uVar20 = 0;
      iVar6 = 8;
      iVar38 = 8;
      if (plVar24 == (long *)0x0) goto LAB_03d441f8;
      goto LAB_03d44198;
    }
  }
  func_0x03280cac();
LAB_03d4429c:
  func_0x03280ca4(uVar20);
  do {
    auVar52 = func_0x072ce990();
    uVar12 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) {
      if (plVar24 == (long *)0x0) goto LAB_03d44348;
      lVar22 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar20 == 0) goto LAB_03d44320;
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    puVar10 = (ulong *)func_0x072ce910(uVar12);
    uVar20 = *puVar10;
    plVar36 = (long *)func_0x072ce920();
    iVar38 = 0;
    iVar6 = 0;
joined_r0x03d4414c:
    if (plVar24 != (long *)0x0) {
LAB_03d44198:
      iVar6 = iVar38;
      lVar22 = *plVar24;
      uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d441ec;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d441ec:
      plVar36 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
    }
LAB_03d441f8:
    if (uVar20 != 0) goto LAB_03d4429c;
    if (iVar6 == 0) {
LAB_03d44210:
      func_0x072ce9a0(lVar26,0,uVar28);
      lVar22 = lVar26;
LAB_03d44228:
      func_0x072ce970(lVar19,lVar22,uVar28);
LAB_03d44230:
      uVar31 = uVar28;
      plVar36 = (long *)func_0x072ce970(auVar50._8_8_,lVar19);
    }
    else {
      lVar22 = lVar27;
      if (iVar6 == 8) goto LAB_03d44228;
      if (iVar6 == 6) goto LAB_03d44210;
    }
    if (*(long *)(lVar25 + 0x28) == *(long *)(lVar42 + -0xf8)) {
      return plVar36;
    }
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar32 = piVar32 + 4;
    if (uVar20 == 0) break;
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03d4433c;
    }
  }
LAB_03d44320:
  uVar31 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d4433c:
  (*(code *)*puVar13)(plVar24,puVar13[1]);
LAB_03d44348:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar22 = auVar51._8_8_;
  plVar36 = auVar51._0_8_;
  *(undefined8 *)(lVar26 + -0x40) = 0x3d44360;
  *(long **)(lVar26 + -0x30) = plVar24;
  *(long *)(lVar26 + -0x28) = lVar27;
  *(long *)(lVar26 + -0x20) = lVar26;
  *(long *)(lVar26 + -0x18) = lVar19;
  *(ulong *)(lVar26 + -0x10) = uVar28;
  *(long *)(lVar26 + -8) = auVar50._8_8_;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar31);
  }
  else {
    lVar19 = **(long **)(uVar31 + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar27 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44418;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44418:
    plVar36 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar19 = *plVar36;
        uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar28 != 0) {
          piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44480;
            }
            uVar28 = uVar28 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar28 != 0);
        }
        uVar20 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44480:
        uVar28 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        if ((uVar28 & 1) == 0) {
          auVar49 = ZEXT816(0);
          iVar6 = 0xb;
          goto joined_r0x03d44544;
        }
        lVar19 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar27 = *plVar36;
        uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d444f4;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar19,0);
LAB_03d444f4:
        auVar49 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        uVar20 = auVar49._8_8_;
        pplVar21 = *(long ***)(lVar22 + 0x28);
        uVar28 = (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),auVar49._0_8_);
      } while ((uVar28 & 1) == 0);
      iVar6 = 10;
joined_r0x03d44544:
      uVar31 = 0;
      plVar24 = (long *)puVar39;
      goto joined_r0x03d44544;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(uVar31);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar31 = *puVar10;
    func_0x072ce920();
    iVar6 = 0;
    auVar49 = ZEXT816(0);
joined_r0x03d44544:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d4459c;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4459c:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    plVar33 = auVar49._0_8_;
    if (uVar31 == 0) {
      if ((iVar6 == 0xb) || (iVar6 == 0)) {
        plVar33 = (long *)0x0;
      }
      return plVar33;
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d446b0;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d446b0:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar19 = auVar50._8_8_;
  plVar33 = auVar50._0_8_;
  *(undefined8 *)(lVar26 + -0x80) = 0x3d446d4;
  *(long **)(lVar26 + -0x70) = plVar24;
  *(undefined1 (*) [16])(lVar26 + -0x68) = auVar49;
  *(undefined8 *)(lVar26 + -0x58) = uVar8;
  *(undefined8 *)(lVar26 + -0x50) = 0;
  *(long **)(lVar26 + -0x48) = plVar36;
  uVar31 = uVar20;
  if (*(long *)(uVar20 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar20 + 0x38) == 0) {
      func_0x03256878(uVar20);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar20);
  }
  else {
    lVar27 = **(long **)(uVar20 + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4478c;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4478c:
    plVar33 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar27 = *plVar33;
        uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar28 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d447f4;
            }
            uVar28 = uVar28 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar28 != 0);
        }
        uVar31 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d447f4:
        uVar28 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        if ((uVar28 & 1) == 0) {
          auVar49 = ZEXT816(0);
          iVar6 = 0xb;
          goto joined_r0x03d448b8;
        }
        lVar27 = *(long *)(*(long *)(uVar20 + 0x38) + 0x18);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar22 = *plVar33;
        uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar31 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar27) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44868;
            }
            uVar31 = uVar31 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar31 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar27,0);
LAB_03d44868:
        auVar49 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        uVar31 = auVar49._8_8_;
        pplVar21 = *(long ***)(lVar19 + 0x28);
        uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar49._0_8_);
      } while ((uVar28 & 1) == 0);
      iVar6 = 10;
joined_r0x03d448b8:
      uVar20 = 0;
      plVar24 = (long *)puVar39;
      goto joined_r0x03d448b8;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(uVar20);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar20 = *puVar10;
    func_0x072ce920();
    iVar6 = 0;
    auVar49 = ZEXT816(0);
joined_r0x03d448b8:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d44910;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44910:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    plVar36 = auVar49._0_8_;
    if (uVar20 == 0) {
      if ((iVar6 == 0xb) || (iVar6 == 0)) {
        plVar36 = (long *)0x0;
      }
      return plVar36;
    }
  }
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44a24;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44a24:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar19 = auVar50._8_8_;
  plVar36 = auVar50._0_8_;
  *(undefined8 *)(lVar26 + -0xc0) = 0x3d44a48;
  *(long **)(lVar26 + -0xb0) = plVar24;
  *(undefined1 (*) [16])(lVar26 + -0xa8) = auVar49;
  *(undefined8 *)(lVar26 + -0x98) = uVar8;
  *(undefined8 *)(lVar26 + -0x90) = 0;
  *(long **)(lVar26 + -0x88) = plVar33;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar31);
  }
  else {
    lVar27 = **(long **)(uVar31 + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44b00;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44b00:
    plVar36 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar27 = *plVar36;
        uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar28 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44b68;
            }
            uVar28 = uVar28 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar28 != 0);
        }
        uVar20 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44b68:
        uVar28 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        if ((uVar28 & 1) == 0) {
          auVar49 = ZEXT816(0);
          iVar6 = 0xb;
          goto joined_r0x03d44c2c;
        }
        lVar27 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar22 = *plVar36;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar27) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44bdc;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar27,0);
LAB_03d44bdc:
        auVar49 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        uVar20 = auVar49._8_8_;
        pplVar21 = *(long ***)(lVar19 + 0x28);
        uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar49._0_8_);
      } while ((uVar28 & 1) == 0);
      iVar6 = 10;
joined_r0x03d44c2c:
      uVar31 = 0;
      plVar24 = (long *)puVar39;
      goto joined_r0x03d44c2c;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(uVar31);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar31 = *puVar10;
    func_0x072ce920();
    iVar6 = 0;
    auVar49 = ZEXT816(0);
joined_r0x03d44c2c:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d44c84;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44c84:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    plVar33 = auVar49._0_8_;
    if (uVar31 == 0) {
      if ((iVar6 == 0xb) || (iVar6 == 0)) {
        plVar33 = (long *)0x0;
      }
      return plVar33;
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44d98;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44d98:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar19 = auVar50._8_8_;
  plVar33 = auVar50._0_8_;
  *(undefined8 *)(lVar26 + -0x100) = 0x3d44dbc;
  *(long **)(lVar26 + -0xf0) = plVar24;
  *(undefined1 (*) [16])(lVar26 + -0xe8) = auVar49;
  *(undefined8 *)(lVar26 + -0xd8) = uVar8;
  *(undefined8 *)(lVar26 + -0xd0) = 0;
  *(long **)(lVar26 + -200) = plVar36;
  uVar31 = uVar20;
  if (*(long *)(uVar20 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar20 + 0x38) == 0) {
      func_0x03256878(uVar20);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar20);
  }
  else {
    lVar27 = **(long **)(uVar20 + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d44e74;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44e74:
    plVar33 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar27 = *plVar33;
        uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar28 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44edc;
            }
            uVar28 = uVar28 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar28 != 0);
        }
        uVar31 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44edc:
        uVar28 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        if ((uVar28 & 1) == 0) {
          auVar49 = ZEXT816(0);
          iVar6 = 0xb;
          goto joined_r0x03d44fa0;
        }
        lVar27 = *(long *)(*(long *)(uVar20 + 0x38) + 0x18);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar22 = *plVar33;
        uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar31 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar27) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d44f50;
            }
            uVar31 = uVar31 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar31 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar27,0);
LAB_03d44f50:
        auVar49 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        uVar31 = auVar49._8_8_;
        pplVar21 = *(long ***)(lVar19 + 0x28);
        uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar49._0_8_);
      } while ((uVar28 & 1) == 0);
      iVar6 = 10;
joined_r0x03d44fa0:
      uVar20 = 0;
      plVar24 = (long *)puVar39;
      goto joined_r0x03d44fa0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar52 = func_0x03280ca4(uVar20);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar20 = *puVar10;
    func_0x072ce920();
    iVar6 = 0;
    auVar49 = ZEXT816(0);
joined_r0x03d44fa0:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d44ff8;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar31 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44ff8:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    plVar36 = auVar49._0_8_;
    if (uVar20 == 0) {
      if ((iVar6 == 0xb) || (iVar6 == 0)) {
        plVar36 = (long *)0x0;
      }
      return plVar36;
    }
  }
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4510c;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    uVar31 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4510c:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar19 = auVar50._8_8_;
  plVar36 = auVar50._0_8_;
  *(undefined8 *)(lVar26 + -0x130) = 0x3d45130;
  *(undefined1 (*) [16])(lVar26 + -0x128) = auVar49;
  *(undefined8 *)(lVar26 + -0x118) = uVar8;
  *(undefined8 *)(lVar26 + -0x110) = 0;
  *(long **)(lVar26 + -0x108) = plVar33;
  uVar20 = uVar31;
  if (*(long *)(uVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar31 + 0x38) == 0) {
      func_0x03256878(uVar31);
    }
  }
  puVar39 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar39);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar31);
  }
  else {
    lVar27 = **(long **)(uVar31 + 0x38);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d451e4;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d451e4:
    plVar36 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar27 = *plVar36;
        uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar28 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d4524c;
            }
            uVar28 = uVar28 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar28 != 0);
        }
        uVar20 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4524c:
        uVar28 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        if ((uVar28 & 1) == 0) {
          plVar33 = (long *)0x0;
          iVar6 = 0xb;
          goto joined_r0x03d45304;
        }
        lVar27 = *(long *)(*(long *)(uVar31 + 0x38) + 0x18);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar22 = *plVar36;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar27) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d452c0;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar27,0);
LAB_03d452c0:
        plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
        uVar20 = *(ulong *)(lVar19 + 0x28);
        uVar28 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
      } while ((uVar28 & 1) == 0);
      iVar6 = 10;
joined_r0x03d45304:
      uVar31 = 0;
      goto joined_r0x03d45304;
    }
  }
  func_0x03280cac();
  while( true ) {
    puVar39 = auVar49._0_8_;
    auVar52 = func_0x03280ca4(uVar31);
    uVar8 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar31 = *puVar10;
    func_0x072ce920();
    iVar6 = 0;
    plVar33 = (long *)0x0;
joined_r0x03d45304:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar28 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar28 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d4535c;
          }
          uVar28 = uVar28 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar28 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4535c:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar49._8_8_ = plVar33;
    auVar49._0_8_ = puVar39;
    if (uVar31 == 0) {
      if ((iVar6 == 0xb) || (iVar6 == 0)) {
        plVar33 = (long *)0x0;
      }
      return plVar33;
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d45460;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d45460:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  uVar31 = auVar50._8_8_;
  plVar33 = auVar50._0_8_;
  *(long *)(lVar26 + -400) = lVar42 + -0xf0;
  *(undefined8 *)(lVar26 + -0x188) = 0x3d45484;
  *(long *)(lVar26 + -0x180) = lVar11;
  *(long *)(lVar26 + -0x178) = lVar25;
  *(undefined8 *)(lVar26 + -0x170) = uVar12;
  *(undefined8 *)(lVar26 + -0x168) = 0;
  *(long **)(lVar26 + -0x160) = plVar24;
  *(undefined1 (*) [16])(lVar26 + -0x158) = auVar49;
  *(undefined8 *)(lVar26 + -0x148) = uVar8;
  *(undefined8 *)(lVar26 + -0x140) = 0;
  *(long **)(lVar26 + -0x138) = plVar36;
  lVar11 = tpidr_el0;
  *(ulong *)(lVar26 + -0x1b8) = uVar20;
  *(long *)(lVar26 + -0x1b0) = lVar11;
  *(undefined8 *)(lVar26 + -0x198) = *(undefined8 *)(lVar11 + 0x28);
  plVar24 = pplVar21[7];
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar24 = pplVar21[7];
    if (plVar24 == (long *)0x0) {
      func_0x03256878(pplVar21);
      plVar24 = pplVar21[7];
    }
  }
  uVar28 = (ulong)*(uint *)(plVar24[5] + 0xfc);
  uVar20 = uVar28 + 0xf & 0x1fffffff0;
  lVar25 = lVar26 + (-0x1c0 - uVar20);
  puVar13 = (undefined8 *)(lVar25 - uVar20);
  lVar19 = (long)puVar13 - uVar20;
  func_0x072ce9a0(lVar19,0,uVar28);
  lVar11 = lVar19 - uVar20;
  func_0x072ce9a0(lVar11,0,uVar28);
  lVar42 = lVar11 - uVar20;
  uVar20 = uVar28;
  func_0x072ce9a0(lVar42,0);
  puVar39 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar39 = PTR_DAT_077799b8, uVar31 == 0)) {
    uVar12 = func_0x03280a2c(puVar39);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,pplVar21);
  }
  else {
    lVar27 = *plVar24;
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar22 = *plVar33;
    uVar30 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar27) {
          puVar9 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d455d8;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    uVar20 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d455d8:
    plVar33 = (long *)(*(code *)*puVar9)(plVar33,puVar9[1]);
    puVar39 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar27 = *plVar33;
        uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar30 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar39) {
              puVar9 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03d45640;
            }
            uVar30 = uVar30 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar30 != 0);
        }
        uVar20 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d45640:
        plVar36 = (long *)(*(code *)*puVar9)(plVar33,puVar9[1]);
        if (((ulong)plVar36 & 1) == 0) {
          plVar24 = (long *)0xb;
          goto joined_r0x03d45768;
        }
        lVar27 = pplVar21[7][3];
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar22 = *plVar33;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar27) {
              lVar27 = lVar22 + (long)*piVar32 * 0x10 + 0x138;
              goto LAB_03d456b4;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        lVar27 = func_0x03256b10(plVar33,lVar27,0);
LAB_03d456b4:
        *(long *)(lVar26 + -0x1a8) = lVar25;
        lVar27 = *(long *)(lVar27 + 8);
        (**(code **)(lVar27 + 0x10))
                  (*(undefined8 *)(lVar27 + 8),lVar27,plVar33,lVar26 + -0x1a8,lVar25);
        func_0x072ce970(lVar19,lVar25,uVar28);
        func_0x072ce970(puVar13,lVar19,uVar28);
        puVar9 = puVar13;
        if (-1 < *(int *)(pplVar21[7][5] + 0x28)) {
          puVar9 = (undefined8 *)*puVar13;
        }
        puVar18 = (undefined8 *)pplVar21[7][6];
        uVar12 = *puVar18;
        *(undefined8 **)(lVar26 + -0x1a8) = puVar9;
        uVar20 = uVar31;
        (*(code *)puVar18[2])(uVar12,puVar18,uVar31,lVar26 + -0x1a8,lVar26 + -0x19c);
      } while (*(char *)(lVar26 + -0x19c) == '\0');
      func_0x072ce970(lVar25,lVar19,uVar28);
      uVar20 = uVar28;
      plVar36 = (long *)func_0x072ce970(lVar11,lVar25);
      plVar24 = (long *)0xa;
joined_r0x03d45768:
      pplVar21 = (long **)0x0;
      goto joined_r0x03d45768;
    }
  }
  func_0x03280cac();
LAB_03d45878:
  func_0x03280ca4(pplVar21);
  do {
    auVar52 = func_0x072ce990();
    if (auVar52._8_4_ != 1) {
      if (plVar33 == (long *)0x0) goto LAB_03d45928;
      lVar19 = *plVar33;
      uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar31 == 0) goto LAB_03d45900;
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    plVar24 = (long *)func_0x072ce910(auVar52._0_8_);
    pplVar21 = (long **)*plVar24;
    plVar36 = (long *)func_0x072ce920();
    plVar24 = (long *)0x0;
joined_r0x03d45768:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d457c0;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d457c0:
      plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    if (pplVar21 != (long **)0x0) goto LAB_03d45878;
    iVar6 = (int)plVar24;
    if (iVar6 == 0xb) {
LAB_03d457e4:
      func_0x072ce9a0(lVar42,0,uVar28);
      lVar11 = lVar42;
LAB_03d457f8:
      func_0x072ce970(lVar25,lVar11,uVar28);
      uVar20 = uVar28;
      plVar36 = (long *)func_0x072ce970(*(undefined8 *)(lVar26 + -0x1b8),lVar25);
    }
    else {
      if (iVar6 == 10) goto LAB_03d457f8;
      if (iVar6 == 0) goto LAB_03d457e4;
    }
    if (*(long *)(*(long *)(lVar26 + -0x1b0) + 0x28) == *(long *)(lVar26 + -0x198)) {
      return plVar36;
    }
  } while( true );
  while( true ) {
    uVar31 = uVar31 - 1;
    piVar32 = piVar32 + 4;
    if (uVar31 == 0) break;
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03d4591c;
    }
  }
LAB_03d45900:
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4591c:
  (*(code *)*puVar13)(plVar33,puVar13[1]);
LAB_03d45928:
  func_0x03365958(auVar52._0_8_);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  *(undefined8 *)(lVar42 + -0x30) = 0x3d45940;
  *(long *)(lVar42 + -0x20) = lVar11;
  *(long *)(lVar42 + -0x18) = lVar25;
  *(ulong *)(lVar42 + -0x10) = uVar28;
  *(long **)(lVar42 + -8) = plVar24;
  lVar11 = *(long *)(uVar20 + 0x38);
  if (lVar11 == 0) {
    func_0x03256878(uVar20);
    lVar11 = *(long *)(uVar20 + 0x38);
  }
  uVar12 = func_0x053e0d5c(*(undefined8 *)(lVar11 + 0x10));
  lVar11 = *(long *)(*(long *)(uVar20 + 0x38) + 0x28);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  plVar24 = (long *)func_0x03280ca0(lVar11);
  func_0x0539b9c0(plVar24,auVar50._0_8_,auVar50._8_8_,uVar12,0,
                  *(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x30));
  return plVar24;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar32 = piVar32 + 4;
    if (uVar28 == 0) break;
LAB_03d41300:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03d41334;
    }
  }
LAB_03d41318:
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d41334:
  (*(code *)*puVar13)(plVar24,puVar13[1]);
LAB_03d41340:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar27 = auVar51._8_8_;
  plVar36 = auVar51._0_8_;
  *(undefined8 *)(lVar26 + -0x30) = 0x3d41358;
  *(long *)(lVar26 + -0x28) = lVar26;
  *(long *)(lVar26 + -0x20) = lVar19;
  *(long **)(lVar26 + -0x18) = plVar33;
  *(ulong *)(lVar26 + -0x10) = uVar31;
  *(long *)(lVar26 + -8) = auVar50._8_8_;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar27 + 0x38) == 0) {
      func_0x03256878(lVar27);
    }
  }
  *(undefined8 *)(lVar26 + -0x50) = 0;
  *(undefined8 *)(lVar26 + -0x48) = 0;
  *(undefined8 *)(lVar26 + -0x40) = 0;
  if (plVar36 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41710;
  }
  lVar19 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  plVar33 = (long *)func_0x03280b90(plVar36,lVar19);
  if (plVar33 == (long *)0x0) {
    lVar19 = **(long **)(lVar27 + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar22 = *plVar36;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4153c;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4153c:
    plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    if (plVar33 == (long *)0x0) goto LAB_03d41718;
    lVar19 = *plVar33;
    uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d415a4;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d415a4:
    plVar37 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    if (((ulong)plVar37 & 1) == 0) {
      plVar36 = (long *)0x0;
      iVar38 = 6;
      iVar6 = 6;
      goto joined_r0x03d41614;
    }
    lVar19 = *(long *)(*(long *)(lVar27 + 0x38) + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar22 = *plVar33;
    uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41628;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41628:
    plVar37 = (long *)(*(code *)*puVar13)(lVar26 + -0x68,plVar33,puVar13[1]);
    plVar36 = (long *)0x0;
    iVar6 = 8;
    *(undefined8 *)(lVar26 + -0x48) = *(undefined8 *)(lVar26 + -0x60);
    *(undefined8 *)(lVar26 + -0x50) = *(undefined8 *)(lVar26 + -0x68);
    *(undefined8 *)(lVar26 + -0x40) = *(undefined8 *)(lVar26 + -0x58);
    iVar38 = 8;
    if (plVar33 == (long *)0x0) goto LAB_03d416b4;
    goto LAB_03d41654;
  }
  lVar19 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  lVar22 = *plVar33;
  uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar31 != 0) {
    piVar32 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar19) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d41498;
      }
      uVar31 = uVar31 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar31 != 0);
  }
  uVar20 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d41498:
  iVar6 = (*(code *)*puVar13)(plVar33,puVar13[1]);
  if (iVar6 < 1) {
    do {
      uVar8 = func_0x05ac75f4(0);
LAB_03d41710:
      func_0x03280b7c(uVar8,lVar27);
LAB_03d41718:
      func_0x03280cac();
      do {
        auVar52 = func_0x03280ca4(plVar36);
        plVar36 = auVar52._0_8_;
        if (auVar52._8_4_ != 1) {
          if (plVar33 == (long *)0x0) goto LAB_03d417c4;
          lVar19 = *plVar33;
          uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar31 == 0) goto LAB_03d4179c;
          piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_03d41784;
        }
        puVar13 = (undefined8 *)func_0x072ce910(plVar36);
        plVar36 = (long *)*puVar13;
        plVar37 = (long *)func_0x072ce920();
        iVar38 = 0;
        iVar6 = 0;
joined_r0x03d41614:
        if (plVar33 != (long *)0x0) {
LAB_03d41654:
          iVar6 = iVar38;
          lVar19 = *plVar33;
          uVar31 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar31 != 0) {
            piVar32 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar32 * 0x10 + 0x138);
                goto LAB_03d416a8;
              }
              uVar31 = uVar31 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar31 != 0);
          }
          uVar20 = 0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d416a8:
          plVar37 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
        }
LAB_03d416b4:
      } while (plVar36 != (long *)0x0);
      if (iVar6 == 8) {
        uVar12 = *(undefined8 *)(lVar26 + -0x40);
        uVar34 = *(undefined8 *)(lVar26 + -0x48);
        uVar8 = *(undefined8 *)(lVar26 + -0x50);
        goto LAB_03d416e0;
      }
    } while ((iVar6 == 6) || (iVar6 == 0));
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar25 = *plVar33;
    uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d41510;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar11,0);
LAB_03d41510:
    plVar37 = (long *)(*(code *)*puVar13)(lVar26 + -0x68,plVar33,0,puVar13[1]);
    uVar12 = *(undefined8 *)(lVar26 + -0x58);
    uVar34 = *(undefined8 *)(lVar26 + -0x60);
    uVar8 = *(undefined8 *)(lVar26 + -0x68);
LAB_03d416e0:
    extraout_x8[2] = uVar12;
    extraout_x8[1] = uVar34;
    *extraout_x8 = uVar8;
  }
  return plVar37;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar32 = piVar32 + 4;
    if (uVar20 == 0) break;
LAB_03f37d1c:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03f37d50;
    }
  }
LAB_03f37d34:
  puVar13 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0774e8c8,0);
LAB_03f37d50:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_03f37d5c:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar25 = auVar51._8_8_;
  *(undefined8 *)(lVar11 + -0x50) = 0x3f37d74;
  *(undefined **)(lVar11 + -0x40) = puVar39;
  *(long **)(lVar11 + -0x38) = plVar37;
  *(long **)(lVar11 + -0x30) = plVar36;
  *(undefined1 (*) [16])(lVar11 + -0x28) = auVar50;
  *(long **)(lVar11 + -0x18) = plVar33;
  *(undefined8 *)(lVar11 + -0x10) = uVar12;
  *(undefined8 *)(lVar11 + -8) = 0;
  lVar19 = *(long *)(lVar25 + 0x38);
  if (lVar19 == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777bd48);
    func_0x03280a18(PTR_DAT_0777bd50);
    lVar19 = *(long *)(lVar25 + 0x38);
    if (lVar19 == 0) {
      func_0x03256878(lVar25);
      lVar19 = *(long *)(lVar25 + 0x38);
    }
  }
  uVar20 = func_0x03ce7fe8(auVar51._0_8_,*(undefined8 *)(lVar19 + 8));
  plVar24 = plVar37;
  puVar40 = puVar39;
  if ((uVar20 & 1) == 0) {
    plVar15 = (long *)func_0x03d5ffd0(auVar51._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10)
                                     );
    lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 0x30);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 0x30);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 0x30);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar26 = *(long *)(lVar25 + 0x38);
      lVar19 = *(long *)(lVar26 + 0x30);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
        lVar26 = *(long *)(lVar25 + 0x38);
      }
      lVar26 = *(long *)(lVar26 + 0x28);
      uVar12 = **(undefined8 **)(lVar19 + 0xb8);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      lVar19 = func_0x03280ca0(lVar26);
      pplVar35 = *(long ***)(*(long *)(lVar25 + 0x38) + 0x40);
      func_0x05356664(lVar19,uVar12,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x38));
      lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 0x30);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar26 + 0xb8) + 8) = lVar19;
      lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 0x30);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar26 + 0xb8) + 8,lVar19);
    }
    uVar20 = func_0x03d598d0(plVar15,lVar19,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x48));
    plVar14 = (long *)PTR_DAT_0777bd50;
    plVar33 = (long *)(uVar20 & 0xffffffff);
    lVar19 = *(long *)PTR_DAT_0777bd50;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
      lVar19 = *plVar14;
    }
    plVar16 = (long *)**(long **)(lVar19 + 0xb8);
    if (plVar16 != (long *)0x0) {
      lVar19 = *(long *)(*plVar16 + 0x1b0);
      uVar4 = (**(code **)(*plVar16 + 0x1a8))(plVar16,plVar33);
      if (plVar15 != (long *)0x0) {
        plVar14 = (long *)(ulong)uVar4;
        lVar26 = **(long **)(lVar25 + 0x38);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        lVar27 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar26) {
              puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_03f37fc0;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        lVar19 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03f37fc0:
        plVar33 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
        puVar40 = PTR_DAT_0777bd48;
        plVar24 = (long *)PTR_DAT_0774e8e0;
        if (plVar33 != (long *)0x0) {
          plVar36 = (long *)0x0;
          plVar14 = (long *)(ulong)(uVar4 + 1);
          do {
            lVar26 = *plVar33;
            uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar20 != 0) {
              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *plVar24) {
                  puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_03f38038;
                }
                uVar20 = uVar20 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar20 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f38038:
            uVar20 = (*(code *)*puVar13)(plVar33,puVar13[1]);
            if ((uVar20 & 1) == 0) {
              plVar16 = (long *)0x0;
              plVar36 = (long *)0x9;
              goto joined_r0x03f38140;
            }
            lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 0x58);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c(lVar26);
            }
            lVar27 = *plVar33;
            uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar20 != 0) {
              piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar26) {
                  puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_03f380ac;
                }
                uVar20 = uVar20 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar20 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f380ac:
            plVar16 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
            if (plVar16 == (long *)0x0) {
              func_0x03280cac();
              goto LAB_03f381f8;
            }
            lVar26 = *plVar16;
            uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar20 != 0) {
              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)puVar40) {
                  puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_03f3810c;
                }
                uVar20 = uVar20 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar20 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar16);
LAB_03f3810c:
            iVar6 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            uVar1 = iVar6 + (int)plVar36;
            plVar36 = (long *)(ulong)uVar1;
          } while ((int)uVar1 < (int)(uVar4 + 1));
          plVar36 = (long *)0x8;
joined_r0x03f38140:
          plVar14 = (long *)0x0;
          plVar37 = plVar24;
          puVar39 = puVar40;
          goto joined_r0x03f38140;
        }
        goto LAB_03f38238;
      }
    }
LAB_03f381f8:
    func_0x03280cac();
  }
  func_0x03280a2c(PTR_DAT_0774e6e8);
  plVar15 = (long *)func_0x03280ca0();
  uVar12 = func_0x03280a2c(PTR_DAT_0777bd58);
  lVar19 = 0;
  func_0x056ede60(plVar15,uVar12);
  func_0x03280b7c(plVar15,lVar25);
  plVar37 = plVar24;
  puVar39 = puVar40;
LAB_03f38238:
  func_0x03280cac();
  do {
    auVar52 = func_0x03280ca4(plVar14);
    uVar12 = auVar52._0_8_;
    if (auVar52._8_4_ != 1) {
      if (plVar33 == (long *)0x0) goto LAB_03f382f0;
      lVar26 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar20 == 0) goto LAB_03f382c8;
      piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      goto LAB_03f382b0;
    }
    plVar14 = (long *)func_0x072ce910(uVar12);
    plVar14 = (long *)*plVar14;
    func_0x072ce920();
    plVar36 = (long *)0x0;
    plVar16 = (long *)0x0;
joined_r0x03f38140:
    if (plVar33 != (long *)0x0) {
      lVar26 = *plVar33;
      uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f38198;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      lVar19 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f38198:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
  } while (plVar14 != (long *)0x0);
  if (((int)plVar36 != 9) && ((int)plVar36 != 0)) {
    return plVar16;
  }
  plVar24 = *(long **)(lVar11 + -0x10);
  lVar25 = *(long *)(*(long *)(lVar25 + 0x38) + 0x78);
  uVar12 = *(undefined8 *)(lVar11 + -0x30);
  uVar34 = *(undefined8 *)(lVar11 + -0x28);
  uVar8 = *(undefined8 *)(lVar11 + -0x40);
  uVar2 = *(undefined8 *)(lVar11 + -0x38);
  *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(lVar11 + -0x50);
  *(undefined8 *)(lVar11 + -0x28) = uVar34;
  *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar11 + -0x20);
  *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
  *(long **)(lVar11 + -0x10) = plVar24;
  *(undefined8 *)(lVar11 + -8) = *(undefined8 *)(lVar11 + -8);
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
  }
  if (plVar15 == (long *)0x0) {
    uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar7 = func_0x05ac7464(uVar7,0);
    goto LAB_03d40d74;
  }
  lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  plVar24 = (long *)func_0x03280b90(plVar15,lVar26);
  if (plVar24 == (long *)0x0) {
    lVar26 = **(long **)(lVar25 + 0x38);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar27 = *plVar15;
    uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar26) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d40bc4;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d40bc4:
    plVar24 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
    if (plVar24 == (long *)0x0) goto LAB_03d40d7c;
    lVar26 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d40c2c;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40c2c:
    uVar20 = (*(code *)*puVar13)(plVar24,puVar13[1]);
    if ((uVar20 & 1) == 0) {
      plVar15 = (long *)0x0;
      uVar34 = 6;
      goto joined_r0x03d40ca0;
    }
    lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 0x38);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    lVar27 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar26) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d40cb4;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40cb4:
    plVar36 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
    plVar15 = (long *)0x0;
    uVar34 = 8;
    if (plVar24 == (long *)0x0) goto LAB_03d40d30;
    goto LAB_03d40cd0;
  }
  lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar27 = *plVar24;
  uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar26) {
        puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d40b24;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  lVar19 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40b24:
  iVar6 = (*(code *)*puVar13)(plVar24,puVar13[1]);
  if (iVar6 < 1) {
    do {
      uVar7 = func_0x05ac75f4(0);
LAB_03d40d74:
      func_0x03280b7c(uVar7,lVar25);
LAB_03d40d7c:
      func_0x03280cac();
      do {
        auVar52 = func_0x03280ca4(plVar15);
        uVar7 = auVar52._0_8_;
        if (auVar52._8_4_ != 1) {
          if (plVar24 == (long *)0x0) goto LAB_03d40e2c;
          lVar26 = *plVar24;
          uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar20 == 0) goto LAB_03d40e04;
          piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          goto LAB_03d40dec;
        }
        puVar13 = (undefined8 *)func_0x072ce910(uVar7);
        plVar15 = (long *)*puVar13;
        func_0x072ce920();
        uVar34 = 0;
joined_r0x03d40ca0:
        plVar36 = (long *)0x0;
        if (plVar24 != (long *)0x0) {
LAB_03d40cd0:
          lVar26 = *plVar24;
          uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar20 != 0) {
            piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar13 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
                goto LAB_03d40d24;
              }
              uVar20 = uVar20 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar20 != 0);
          }
          lVar19 = 0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03d40d24:
          (*(code *)*puVar13)(plVar24,puVar13[1]);
        }
LAB_03d40d30:
      } while (plVar15 != (long *)0x0);
      if (((int)uVar34 != 6) && ((int)uVar34 != 0)) {
        return plVar36;
      }
    } while( true );
  }
  lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  lVar25 = *plVar24;
  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar11) {
        puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_03d40b9c;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  puVar13 = (undefined8 *)func_0x03256b10(plVar24,lVar11,0);
LAB_03d40b9c:
                    /* WARNING: Could not recover jumptable at 0x03d40bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar24 = (long *)(*(code *)*puVar13)(plVar24,0,puVar13[1]);
  return plVar24;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar32 = piVar32 + 4;
    if (uVar20 == 0) break;
LAB_03f38930:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_03f38964;
    }
  }
LAB_03f38948:
  puVar18 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03f38964:
  (*(code *)*puVar9)(plVar24,puVar9[1]);
LAB_03f38970:
  func_0x03365958(auVar52._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined8 *)(lVar42 + -0x20) = 0x3f38988;
  *(undefined8 **)(lVar42 + -0x18) = puVar13;
  *(undefined **)(lVar42 + -0x10) = puVar39;
  *(long *)(lVar42 + -8) = lVar19;
  puVar13 = puVar18;
  if ((bRam0000000007e17df6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0777bd60);
    func_0x03280a18(PTR_DAT_0777bd68);
    func_0x03280a18(PTR_DAT_0776a998);
    bRam0000000007e17df6 = 1;
  }
  puVar39 = PTR_DAT_077730b8;
  if (extraout_x1 == (long *)0x0) {
LAB_03f38a4c:
    *puVar18 = 0;
    func_0x032809c4(puVar18,0);
    plVar24 = (long *)0x0;
  }
  else {
    lVar11 = *extraout_x1;
    bVar3 = *(byte *)(*(long *)PTR_DAT_0777bd68 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0777bd68)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_0777bd60 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0777bd60))
      goto LAB_03f38a4c;
      lVar11 = *(long *)PTR_DAT_077730b8;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar39;
      }
      plVar24 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x150);
      if (plVar24 == (long *)0x0) goto LAB_03f38bec;
      lVar11 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779818) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f38b7c;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_07779818,0);
LAB_03f38b7c:
      uVar12 = (*(code *)*puVar13)(plVar24,puVar13[1]);
      plVar24 = (long *)extraout_x1[0xe];
      uVar8 = *(undefined8 *)PTR_DAT_0776a998;
      if (plVar24 == (long *)0x0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
      }
    }
    else {
      lVar11 = *(long *)PTR_DAT_077730b8;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar39;
      }
      plVar24 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x150);
      if (plVar24 == (long *)0x0) {
LAB_03f38bec:
        auVar50 = func_0x03280cac();
        lVar11 = auVar50._8_8_;
        plVar24 = auVar50._0_8_;
        *(undefined8 *)(lVar42 + -0x40) = 0x3f38bf0;
        *(undefined8 *)(lVar42 + -0x38) = 0;
        *(long **)(lVar42 + -0x30) = extraout_x1;
        *(undefined8 **)(lVar42 + -0x28) = puVar18;
        if ((*(long *)(lVar11 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar11 + 0x38) == 0)) {
          func_0x03256878(lVar11);
        }
        if ((plVar24 != (long *)0x0) && (lVar25 = plVar24[4], lVar25 != 0)) {
          *(undefined1 *)(lVar25 + 0x18) = 1;
          uVar12 = **(undefined8 **)(lVar11 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar12 = func_0x057a51c4(uVar12,0);
          *(undefined8 *)(lVar25 + 0x20) = uVar12;
          func_0x032809c4((undefined8 *)(lVar25 + 0x20),uVar12);
          return plVar24;
        }
        auVar50 = func_0x03280cac();
        lVar25 = auVar50._8_8_;
        plVar36 = auVar50._0_8_;
        *(undefined8 *)(lVar42 + -0x60) = 0x3f38c88;
        *(undefined8 *)(lVar42 + -0x58) = 0;
        *(long *)(lVar42 + -0x50) = lVar11;
        *(long **)(lVar42 + -0x48) = plVar24;
        if ((*(long *)(lVar25 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar25 + 0x38) == 0)) {
          func_0x03256878(lVar25);
        }
        lVar11 = plVar36[4];
        if (lVar11 != 0) {
          *(undefined1 *)(lVar11 + 0x18) = 1;
          uVar12 = **(undefined8 **)(lVar25 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar12 = func_0x057a51c4(uVar12,0);
          *(undefined8 *)(lVar11 + 0x20) = uVar12;
          func_0x032809c4((undefined8 *)(lVar11 + 0x20),uVar12);
          return plVar36;
        }
        auVar50 = func_0x03280cac();
        *(undefined8 *)(lVar42 + -0x80) = 0x3f38d1c;
        *(long *)(lVar42 + -0x78) = lVar25;
        *(undefined8 *)(lVar42 + -0x70) = 0;
        *(long **)(lVar42 + -0x68) = plVar36;
        lVar11 = puVar13[7];
        if (lVar11 == 0) {
          func_0x03256878(puVar13);
          lVar11 = puVar13[7];
        }
        uVar5 = func_0x06d744bc(auVar50._8_8_,*(undefined8 *)(lVar11 + 0x10));
        iVar6 = func_0x03f3934c(auVar50._0_8_,uVar5,auVar50._8_8_,*(undefined8 *)(puVar13[7] + 0x18)
                               );
        return (long *)(ulong)(iVar6 != -1);
      }
      lVar11 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779818) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03f38b50;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_07779818,0);
LAB_03f38b50:
      uVar12 = (*(code *)*puVar13)(plVar24,puVar13[1]);
      lVar11 = extraout_x1[2];
      uVar8 = *(undefined8 *)PTR_DAT_0776a998;
    }
    uVar12 = func_0x055f7538(uVar12,uVar8,lVar11,0);
    *puVar18 = uVar12;
    func_0x032809c4(puVar18,uVar12);
    plVar24 = (long *)0x1;
  }
  return plVar24;
LAB_03d430c0:
  if (plVar36 != (long *)0x0) {
    lVar27 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar28 != 0) {
      piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar27 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d43118;
        }
        uVar28 = uVar28 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar28 != 0);
    }
    uVar20 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d43118:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar50 = func_0x02f09514();
  lVar27 = auVar50._8_8_;
  plVar33 = auVar50._0_8_;
  *(undefined8 *)(lVar42 + -0x30) = 0x3d4313c;
  *(long *)(lVar42 + -0x20) = lVar25;
  *(ulong *)(lVar42 + -0x18) = uVar31;
  *(long **)(lVar42 + -0x10) = plVar24;
  *(long ***)(lVar42 + -8) = pplVar35;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar27 + 0x38) == 0) {
      func_0x03256878(lVar27);
    }
  }
  if (plVar33 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar27);
LAB_03d434bc:
    func_0x03280cac();
    do {
      auVar52 = func_0x03280ca4(lVar27);
      uVar8 = auVar52._0_8_;
      if (auVar52._8_4_ != 1) {
        if (pplVar35 == (long **)0x0) goto LAB_03d4356c;
        plVar24 = *pplVar35;
        uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
        if (uVar31 == 0) goto LAB_03d43544;
        piVar32 = (int *)(plVar24[0x16] + 8);
        goto LAB_03d4352c;
      }
      plVar24 = (long *)func_0x072ce910(uVar8);
      lVar27 = *plVar24;
      func_0x072ce920();
      lVar25 = 0;
joined_r0x03d433e8:
      uVar4 = 0;
      if (pplVar35 != (long **)0x0) {
LAB_03d43418:
        plVar24 = *pplVar35;
        uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar32 = (int *)(plVar24[0x16] + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
              plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
              goto LAB_03d4346c;
            }
            uVar31 = uVar31 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar31 != 0);
        }
        uVar20 = 0;
        plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d4346c:
        (*(code *)*plVar24)(pplVar35,plVar24[1]);
      }
LAB_03d43478:
    } while (lVar27 != 0);
    if (((int)lVar25 != 6) && ((int)lVar25 != 0)) goto LAB_03d4348c;
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar24 = (long *)func_0x03280b90(plVar33,lVar22);
    if (plVar24 == (long *)0x0) {
      lVar22 = **(long **)(lVar27 + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar33;
      uVar31 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar31 != 0) {
        piVar32 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d4330c;
          }
          uVar31 = uVar31 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar31 != 0);
      }
      uVar20 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4330c:
      pplVar35 = (long **)(*(code *)*puVar13)(plVar33,puVar13[1]);
      if (pplVar35 != (long **)0x0) {
        plVar24 = *pplVar35;
        uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar32 = (int *)(plVar24[0x16] + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8e0) {
              plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
              goto LAB_03d43374;
            }
            uVar31 = uVar31 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar31 != 0);
        }
        uVar20 = 0;
        plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d43374:
        uVar31 = (*(code *)*plVar24)(pplVar35,plVar24[1]);
        if ((uVar31 & 1) == 0) {
          lVar27 = 0;
          lVar25 = 6;
          goto joined_r0x03d433e8;
        }
        lVar25 = *(long *)(*(long *)(lVar27 + 0x38) + 0x38);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        plVar24 = *pplVar35;
        uVar31 = (ulong)*(ushort *)((long)plVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar32 = (int *)(plVar24[0x16] + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar25) {
              plVar24 = plVar24 + (long)*piVar32 * 2 + 0x27;
              goto LAB_03d433fc;
            }
            uVar31 = uVar31 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar31 != 0);
        }
        uVar20 = 0;
        plVar24 = (long *)func_0x03256b10(pplVar35);
LAB_03d433fc:
        uVar4 = (*(code *)*plVar24)(pplVar35,plVar24[1]);
        lVar27 = 0;
        lVar25 = 8;
        if (pplVar35 == (long **)0x0) goto LAB_03d43478;
        goto LAB_03d43418;
      }
      goto LAB_03d434bc;
    }
    lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar25 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar20 != 0) {
      piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_03d4326c;
        }
        uVar20 = uVar20 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar24,lVar11,0);
LAB_03d4326c:
    iVar6 = (*(code *)*puVar13)(plVar24,puVar13[1]);
    if (0 < iVar6) {
      lVar11 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar25 = *plVar24;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_03d432e4;
          }
          uVar20 = uVar20 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar24,lVar11,0);
LAB_03d432e4:
                    /* WARNING: Could not recover jumptable at 0x03d432fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar24 = (long *)(*(code *)*puVar13)(plVar24,0,puVar13[1]);
      return plVar24;
    }
  }
  uVar4 = 0;
LAB_03d4348c:
  return (long *)(ulong)uVar4;
}


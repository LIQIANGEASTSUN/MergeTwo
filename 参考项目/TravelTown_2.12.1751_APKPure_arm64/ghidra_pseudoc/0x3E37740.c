/* Ghidra 12.1.2 native pseudocode; RVA 0x3E37740; MergeEngine.Util.WeightedItemUtil.GenerateWeightedItemList<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>; status ok */


long * MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                 (long *param_1,long *param_2,long param_3,long **param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
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
  long **pplVar20;
  long **pplVar21;
  long lVar22;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  code *pcVar27;
  ulong uVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  long *plVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  int iVar37;
  undefined *puVar38;
  undefined *puVar39;
  long *plVar40;
  long lVar41;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  long alStack_720 [6];
  ulong auStack_6f0 [3];
  long lStack_6d8;
  char acStack_6cc [4];
  long lStack_6c8;
  undefined1 auStack_6c0 [8];
  long alStack_6b8 [6];
  undefined1 auStack_688 [16];
  undefined8 auStack_678 [4];
  undefined1 auStack_658 [16];
  undefined8 auStack_648 [6];
  undefined1 auStack_618 [16];
  undefined8 auStack_608 [6];
  undefined1 auStack_5d8 [16];
  undefined8 auStack_5c8 [6];
  undefined1 auStack_598 [16];
  long alStack_588 [11];
  long *plStack_530;
  long lStack_528;
  undefined4 uStack_51c;
  long lStack_518;
  undefined1 auStack_510 [8];
  long alStack_508 [29];
  ulong uStack_420;
  long *plStack_418;
  char acStack_40c [4];
  long lStack_408;
  undefined1 auStack_400 [8];
  long alStack_3f8 [31];
  ulong auStack_300 [35];
  long alStack_1e8 [5];
  long alStack_1c0 [4];
  long alStack_1a0 [2];
  ulong auStack_190 [2];
  long *aplStack_180 [2];
  undefined8 uStack_170;
  long lStack_168;
  long alStack_160 [18];
  long alStack_d0 [2];
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  uint *puStack_80;
  uint *puStack_78;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  alStack_d0[0] = tpidr_el0;
  lStack_68 = *(long *)(alStack_d0[0] + 0x28);
  plVar35 = param_4[7];
  pplVar21 = param_4;
  lStack_98 = param_3;
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = param_4[7];
    if (plVar35 == (long *)0x0) {
      func_0x03256878(param_4);
      plVar35 = param_4[7];
    }
  }
  plStack_90 = (long *)(ulong)*(uint *)(plVar35[0xe] + 0xfc);
  plVar40 = (long *)(ulong)*(uint *)(plVar35[0x12] + 0xfc);
  uVar29 = (ulong)((long)plStack_90 + 0xfU) & 0x1fffffff0;
  plVar33 = (long *)((long)alStack_d0 - uVar29);
  plStack_a8 = (long *)((long)plVar33 - uVar29);
  plStack_b8 = (long *)((long)plStack_a8 - uVar29);
  puVar38 = (undefined *)((ulong)((long)plVar40 + 0xfU) & 0x1fffffff0);
  lVar41 = (long)plStack_b8 - (long)puVar38;
  plVar36 = (long *)(lVar41 - (long)puVar38);
  lVar31 = (long)plVar36 - uVar29;
  func_0x072ce9a0(lVar31,0);
  lVar11 = lVar31 - (long)puVar38;
  alStack_d0[1] = lVar11;
  plStack_c0 = plVar40;
  func_0x072ce9a0(lVar11,0,plVar40);
  if ((*(byte *)(*plVar35 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar35 = (long *)func_0x03280ca0();
  (**(code **)param_4[7][1])();
  if (plVar35 != (long *)0x0) {
    plStack_b0 = plVar35 + 2;
    *plStack_b0 = (long)param_2;
    func_0x032809c4(plStack_b0,param_2);
    if ((*(byte *)(param_4[7][5] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar12 = func_0x03280ca0();
    pplVar21 = (long **)param_4[7][6];
    (*(code *)*pplVar21)(uVar12,plVar35,param_4[7][4]);
    (**(code **)param_4[7][7])(param_1,uVar12);
    if ((*(byte *)(param_4[7][8] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    param_2 = (long *)func_0x03280ca0();
    (**(code **)param_4[7][9])();
    if (param_1 != (long *)0x0) {
      lVar19 = param_4[7][10];
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar24 = *param_1;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      plStack_a0 = param_2;
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar19) {
            puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f37974;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(param_1,lVar19,0);
LAB_03f37974:
      param_2 = (long *)(*(code *)*puVar13)(param_1,puVar13[1]);
      if (param_2 != (long *)0x0) {
        puVar38 = (undefined *)0x0;
        do {
          lVar19 = *param_2;
          uVar29 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar29 != 0) {
            piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_03f379e0;
              }
              uVar29 = uVar29 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar29 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8e0,0);
LAB_03f379e0:
          uVar29 = (*(code *)*puVar13)(param_2,puVar13[1]);
          if ((uVar29 & 1) == 0) {
            lVar31 = 0;
            goto LAB_03f37bec;
          }
          lVar19 = param_4[7][0xc];
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c(lVar19);
          }
          lVar24 = *param_2;
          uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar29 != 0) {
            piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == lVar19) {
                lVar19 = lVar24 + (long)*piVar30 * 0x10 + 0x138;
                goto LAB_03f37a54;
              }
              uVar29 = uVar29 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar29 != 0);
          }
          lVar19 = func_0x03256b10(param_2,lVar19,0);
LAB_03f37a54:
          lVar19 = *(long *)(lVar19 + 8);
          pplVar21 = &plStack_88;
          plStack_88 = plVar33;
          (**(code **)(lVar19 + 0x10))(*(undefined8 *)(lVar19 + 8),lVar19,param_2,pplVar21,plVar33);
          param_1 = plStack_90;
          func_0x072ce970(lVar31,plVar33,plStack_90);
          plVar40 = plStack_a8;
          lVar19 = *plStack_b0;
          func_0x072ce970(plStack_a8,lVar31,param_1);
          plVar35 = (long *)0x0;
          if (lVar19 == 0) goto LAB_03f37c90;
          if (-1 < *(int *)(param_4[7][0xe] + 0x28)) {
            plVar40 = (long *)*plVar40;
          }
          puVar13 = (undefined8 *)param_4[7][0xf];
          pplVar21 = &plStack_88;
          plStack_88 = plVar40;
          (*(code *)puVar13[2])(*puVar13,puVar13,lVar19,pplVar21,&uStack_6c);
          plVar35 = plStack_b8;
          plVar40 = (long *)(ulong)uStack_6c;
          func_0x072ce970(plStack_b8,lVar31,plStack_90);
          if (lStack_98 == 0) goto LAB_03f37c94;
          if (-1 < *(int *)(param_4[7][0xe] + 0x28)) {
            plVar35 = (long *)*plVar35;
          }
          puVar13 = (undefined8 *)param_4[7][0x11];
          plStack_88 = plVar35;
          puStack_80 = (uint *)lVar41;
          (*(code *)puVar13[2])(*puVar13,puVar13,lStack_98,&plStack_88,lVar41);
          plVar35 = plStack_c0;
          lVar19 = alStack_d0[1];
          func_0x072ce970(alStack_d0[1],lVar41,plStack_c0);
          func_0x072ce970(plVar36,lVar19,plVar35);
          if ((*(byte *)(param_4[7][0x13] + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar35 = (long *)func_0x03280ca0();
          plStack_88 = plVar36;
          if (-1 < *(int *)(param_4[7][0x12] + 0x28)) {
            plStack_88 = (long *)*plVar36;
          }
          puVar13 = (undefined8 *)param_4[7][0x14];
          uStack_70 = uStack_6c + (int)puVar38;
          puVar38 = (undefined *)(ulong)uStack_70;
          puStack_80 = &uStack_6c;
          puStack_78 = &uStack_70;
          pplVar21 = &plStack_88;
          (*(code *)puVar13[2])(*puVar13,puVar13,plVar35,pplVar21,&uStack_70);
          param_1 = plVar33;
          if (plStack_a0 == (long *)0x0) goto LAB_03f37c8c;
          (**(code **)param_4[7][0x15])(plStack_a0,plVar35);
        } while( true );
      }
      goto LAB_03f37c9c;
    }
  }
  goto LAB_03f37c98;
LAB_03f37c8c:
  func_0x03280cac();
LAB_03f37c90:
  func_0x03280cac();
LAB_03f37c94:
  func_0x03280cac();
LAB_03f37c98:
  func_0x03280cac();
LAB_03f37c9c:
  func_0x03280cac();
LAB_03f37ca0:
  plVar14 = (long *)func_0x03280ca4(lVar31);
  do {
    auVar50 = func_0x072ce990(plVar14);
    uVar12 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (param_2 == (long *)0x0) goto LAB_03f37d5c;
      lVar31 = *param_2;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 == 0) goto LAB_03f37d34;
      piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      goto LAB_03f37d1c;
    }
    plVar14 = (long *)func_0x072ce910(uVar12);
    lVar31 = *plVar14;
    func_0x072ce920();
LAB_03f37bec:
    if (param_2 != (long *)0x0) {
      lVar19 = *param_2;
      uVar29 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f37c44;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_03f37c44:
      (*(code *)*puVar13)(param_2,puVar13[1]);
    }
    if (lVar31 != 0) goto LAB_03f37ca0;
    plVar14 = plStack_a0;
    if (*(long *)(alStack_d0[0] + 0x28) == lStack_68) {
      return plStack_a0;
    }
  } while( true );
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar30 = piVar30 + 4;
    if (uVar29 == 0) break;
LAB_03f382b0:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
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
  auVar49 = func_0x02f09514();
  plVar14 = auVar49._0_8_;
  *(undefined1 **)(lVar11 + -0xb0) = &stack0xffffffffffffffa0;
  *(undefined8 *)(lVar11 + -0xa8) = 0x3f38308;
  *(long *)(lVar11 + -0xa0) = lVar41;
  *(long **)(lVar11 + -0x98) = plVar40;
  *(undefined **)(lVar11 + -0x90) = puVar38;
  *(long **)(lVar11 + -0x88) = plVar36;
  *(long **)(lVar11 + -0x80) = plVar35;
  *(undefined8 *)(lVar11 + -0x78) = uVar12;
  *(undefined8 *)(lVar11 + -0x70) = 0;
  *(long **)(lVar11 + -0x68) = plVar33;
  *(long **)(lVar11 + -0x60) = plVar15;
  *(long *)(lVar11 + -0x58) = lVar31;
  *(long *)(lVar11 + -0xe0) = auVar49._8_8_;
  plVar35 = (long *)tpidr_el0;
  *(long *)(lVar11 + -0xb8) = plVar35[5];
  lVar31 = *(long *)(lVar19 + 0x38);
  if (lVar31 == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777bd50);
    lVar31 = *(long *)(lVar19 + 0x38);
    if (lVar31 == 0) {
      func_0x03256878(lVar19);
      lVar31 = *(long *)(lVar19 + 0x38);
    }
  }
  uVar4 = *(uint *)(*(long *)(lVar31 + 0x68) + 0xfc);
  puVar13 = (undefined8 *)(ulong)uVar4;
  if ((*(byte *)(*(long *)(lVar31 + 0x68) + 0x135) & 1) == 0) {
    lVar31 = func_0x0325681c();
    uVar4 = *(uint *)(lVar31 + 0xfc);
    lVar31 = *(long *)(lVar19 + 0x38);
  }
  puVar9 = (undefined8 *)((lVar11 + -0xf0) - ((ulong)(uVar4 + 0x10) + 0xf & 0x1fffffff0));
  uVar29 = (long)puVar13 + 0xfU & 0x1fffffff0;
  lVar24 = (long)puVar9 - uVar29;
  lVar25 = lVar24 - uVar29;
  func_0x072ce9a0(lVar25,0,puVar13);
  lVar41 = lVar25 - uVar29;
  *(long *)(lVar11 + -0xe8) = lVar41;
  func_0x072ce9a0(lVar41,0,puVar13);
  uVar29 = (*(code *)**(undefined8 **)(lVar31 + 8))(plVar14);
  if ((uVar29 & 1) == 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x10))(plVar14);
    lVar31 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c(lVar31);
    }
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c(lVar31);
    }
    lVar31 = *(long *)(lVar19 + 0x38);
    *(long **)(lVar11 + -0xd8) = plVar35;
    lVar31 = *(long *)(lVar31 + 0x30);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xb8) + 8);
    if (lVar31 == 0) {
      lVar31 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      if (*(int *)(lVar31 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(lVar19 + 0x38);
      lVar31 = *(long *)(lVar22 + 0x30);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
        lVar22 = *(long *)(lVar19 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x28);
      uVar12 = **(undefined8 **)(lVar31 + 0xb8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar31 = func_0x03280ca0(lVar22);
      (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x40))
                (lVar31,uVar12,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x38));
      lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar22 + 0xb8) + 8) = lVar31;
      lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 0x30);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar22 + 0xb8) + 8,lVar31);
    }
    uVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x48))(plVar14,lVar31);
    puVar38 = PTR_DAT_0777bd50;
    plVar35 = (long *)(uVar29 & 0xffffffff);
    lVar31 = *(long *)PTR_DAT_0777bd50;
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c(lVar31);
      lVar31 = *(long *)puVar38;
    }
    plVar33 = (long *)**(long **)(lVar31 + 0xb8);
    if (plVar33 != (long *)0x0) {
      puVar18 = *(undefined8 **)(*plVar33 + 0x1b0);
      iVar5 = (**(code **)(*plVar33 + 0x1a8))(plVar33,plVar35);
      if (plVar14 != (long *)0x0) {
        lVar31 = **(long **)(lVar19 + 0x38);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        lVar22 = *plVar14;
        uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar31) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03f385fc;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        puVar18 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03f385fc:
        plVar35 = (long *)(*(code *)*puVar17)(plVar14,puVar17[1]);
        puVar39 = PTR_DAT_0774e8e0;
        if (plVar35 != (long *)0x0) {
          iVar37 = 0;
          do {
            lVar31 = *plVar35;
            uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)puVar39) {
                  puVar17 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_03f3866c;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            puVar18 = (undefined8 *)0x0;
            puVar17 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03f3866c:
            plVar33 = (long *)(*(code *)*puVar17)(plVar35,puVar17[1]);
            if (((ulong)plVar33 & 1) == 0) {
              puVar38 = (undefined *)0x9;
              goto joined_r0x03f38784;
            }
            lVar31 = *(long *)(*(long *)(lVar19 + 0x38) + 0x58);
            if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
              lVar31 = func_0x0325681c(lVar31);
            }
            lVar22 = *plVar35;
            uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == lVar31) {
                  lVar31 = lVar22 + (long)*piVar30 * 0x10 + 0x138;
                  goto LAB_03f386e0;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            lVar31 = func_0x03256b10(plVar35,lVar31,0);
LAB_03f386e0:
            *(long *)(lVar11 + -0xc0) = lVar24;
            lVar31 = *(long *)(lVar31 + 8);
            (**(code **)(lVar31 + 0x10))
                      (*(undefined8 *)(lVar31 + 8),lVar31,plVar35,lVar11 + -0xc0,lVar24);
            func_0x072ce970(lVar25,lVar24,puVar13);
            lVar22 = *(long *)(lVar19 + 0x38);
            lVar31 = *(long *)(lVar22 + 0x68);
            if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
              lVar31 = func_0x0325681c();
              lVar22 = *(long *)(lVar19 + 0x38);
            }
            puVar18 = puVar9;
            func_0x0328158c(lVar31,*(undefined8 *)(lVar22 + 0x70),puVar9,lVar25,0,lVar11 + -0xc0);
            iVar37 = *(int *)(lVar11 + -0xc0) + iVar37;
          } while (iVar37 < iVar5 + 1);
          func_0x072ce970(lVar24,lVar25,puVar13);
          puVar18 = puVar13;
          plVar33 = (long *)func_0x072ce970(*(undefined8 *)(lVar11 + -0xe8),lVar24);
          puVar38 = (undefined *)0x8;
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
  puVar38 = (undefined *)func_0x03280ca0();
  uVar12 = func_0x03280a2c(PTR_DAT_0777bd58);
  puVar18 = (undefined8 *)0x0;
  func_0x056ede60(puVar38,uVar12);
  func_0x03280b7c(puVar38,lVar19);
LAB_03f388bc:
  func_0x03280cac();
LAB_03f388c0:
  func_0x03280ca4(puVar9);
  do {
    auVar50 = func_0x072ce990();
    if (auVar50._8_4_ != 1) {
      if (plVar35 == (long *)0x0) goto LAB_03f38970;
      lVar11 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar29 == 0) goto LAB_03f38948;
      piVar30 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_03f38930;
    }
    puVar9 = (undefined8 *)func_0x072ce910(auVar50._0_8_);
    puVar9 = (undefined8 *)*puVar9;
    plVar33 = (long *)func_0x072ce920();
    puVar38 = (undefined *)0x0;
joined_r0x03f38784:
    if (plVar35 != (long *)0x0) {
      lVar31 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f387dc;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar18 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03f387dc:
      plVar33 = (long *)(*(code *)*puVar17)(plVar35,puVar17[1]);
    }
    if (puVar9 != (undefined8 *)0x0) goto LAB_03f388c0;
    lVar31 = *(long *)(lVar11 + -0xd8);
    iVar5 = (int)puVar38;
    if (iVar5 == 9) {
LAB_03f38804:
      puVar9 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x78);
      uVar12 = *puVar9;
      *(long **)(lVar11 + -0xd0) = plVar14;
      *(long *)(lVar11 + -200) = lVar24;
      (*(code *)puVar9[2])(uVar12,puVar9,0,lVar11 + -0xd0,lVar24);
LAB_03f3883c:
      puVar18 = puVar13;
      plVar33 = (long *)func_0x072ce970(*(undefined8 *)(lVar11 + -0xe0),lVar24);
    }
    else {
      if (iVar5 == 8) {
        func_0x072ce970(lVar24,*(undefined8 *)(lVar11 + -0xe8),puVar13);
        goto LAB_03f3883c;
      }
      if (iVar5 == 0) goto LAB_03f38804;
    }
    if (*(long *)(lVar31 + 0x28) == *(long *)(lVar11 + -0xb8)) {
      return plVar33;
    }
  } while( true );
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar30 = piVar30 + 4;
    if (uVar29 == 0) break;
LAB_03d40dec:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03d40e20;
    }
  }
LAB_03d40e04:
  lVar19 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40e20:
  (*(code *)*puVar13)(plVar35,puVar13[1]);
LAB_03d40e2c:
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  plVar33 = auVar49._0_8_;
  *(undefined1 **)(lVar11 + -0x90) = &stack0xffffffffffffffa0;
  *(undefined8 *)(lVar11 + -0x88) = 0x3d40e44;
  *(long **)(lVar11 + -0x80) = plVar40;
  *(undefined8 *)(lVar11 + -0x70) = uVar8;
  *(undefined8 *)(lVar11 + -0x68) = uVar2;
  *(undefined8 *)(lVar11 + -0x60) = uVar12;
  *(undefined8 *)(lVar11 + -0x58) = uVar34;
  *(undefined8 *)(lVar11 + -0x50) = uVar7;
  *(undefined8 *)(lVar11 + -0x48) = 0;
  *(long **)(lVar11 + -0x40) = plVar35;
  *(long *)(lVar11 + -0x38) = lVar31;
  lVar31 = tpidr_el0;
  *(undefined8 *)(lVar11 + -0x98) = *(undefined8 *)(lVar31 + 0x28);
  plVar35 = *(long **)(lVar19 + 0x38);
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = *(long **)(lVar19 + 0x38);
    if (plVar35 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar35 = *(long **)(lVar19 + 0x38);
    }
  }
  uVar32 = (ulong)*(uint *)(plVar35[5] + 0xfc);
  uVar29 = uVar32 + 0xf & 0x1fffffff0;
  plVar36 = (long *)((lVar11 + -0xb0) - uVar29);
  lVar24 = (long)plVar36 - uVar29;
  uVar29 = uVar32;
  func_0x072ce9a0(lVar24,0);
  if (plVar33 == (long *)0x0) {
    uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar12 = func_0x05ac7464(uVar12,0);
    goto LAB_03d41288;
  }
  lVar25 = plVar35[1];
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  plVar35 = (long *)func_0x03280b90(plVar33,lVar25);
  if (plVar35 == (long *)0x0) {
    lVar25 = **(long **)(lVar19 + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4107c;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4107c:
    plVar35 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    if (plVar35 == (long *)0x0) goto LAB_03d41290;
    lVar25 = *plVar35;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d410e4;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d410e4:
    plVar40 = (long *)(*(code *)*puVar13)(plVar35,puVar13[1]);
    if (((ulong)plVar40 & 1) == 0) {
      plVar33 = (long *)0x0;
      iVar37 = 6;
      iVar5 = 6;
      goto joined_r0x03d41154;
    }
    lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar35;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          lVar25 = lVar22 + (long)*piVar30 * 0x10 + 0x138;
          goto LAB_03d41168;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    lVar25 = func_0x03256b10(plVar35,lVar25,0);
LAB_03d41168:
    *(long **)(lVar11 + -0xb0) = plVar36;
    lVar25 = *(long *)(lVar25 + 8);
    pplVar21 = (long **)(lVar11 + -0xb0);
    (**(code **)(lVar25 + 0x10))(*(undefined8 *)(lVar25 + 8),lVar25,plVar35,pplVar21,plVar36);
    uVar29 = uVar32;
    plVar40 = (long *)func_0x072ce970(lVar24,plVar36);
    plVar33 = (long *)0x0;
    iVar5 = 8;
    iVar37 = 8;
    if (plVar35 == (long *)0x0) goto LAB_03d41200;
    goto LAB_03d411a0;
  }
  lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar35;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d40fd0;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40fd0:
  iVar5 = (*(code *)*puVar13)(plVar35,puVar13[1]);
  if (iVar5 < 1) goto LAB_03d41218;
  lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  *(undefined4 *)(lVar11 + -0x9c) = 0;
  lVar22 = *plVar35;
  uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar29 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        lVar25 = lVar22 + (long)*piVar30 * 0x10 + 0x138;
        goto LAB_03d4104c;
      }
      uVar29 = uVar29 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar29 != 0);
  }
  lVar25 = func_0x03256b10(plVar35,lVar25,0);
LAB_03d4104c:
  *(long *)(lVar11 + -0xb0) = lVar11 + -0x9c;
  *(long **)(lVar11 + -0xa8) = plVar36;
  lVar25 = *(long *)(lVar25 + 8);
  pplVar21 = (long **)(lVar11 + -0xb0);
  (**(code **)(lVar25 + 0x10))(*(undefined8 *)(lVar25 + 8),lVar25,plVar35,pplVar21,plVar36);
LAB_03d41234:
  uVar29 = uVar32;
  plVar40 = (long *)func_0x072ce970(auVar49._8_8_,plVar36);
LAB_03d41244:
  if (*(long *)(lVar31 + 0x28) == *(long *)(lVar11 + -0x98)) {
    return plVar40;
  }
  do {
    auVar50 = func_0x072ce990();
    uVar12 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (plVar35 == (long *)0x0) goto LAB_03d41340;
      lVar25 = *plVar35;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 == 0) goto LAB_03d41318;
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      goto LAB_03d41300;
    }
    puVar13 = (undefined8 *)func_0x072ce910(uVar12);
    plVar33 = (long *)*puVar13;
    plVar40 = (long *)func_0x072ce920();
    iVar37 = 0;
    iVar5 = 0;
joined_r0x03d41154:
    if (plVar35 != (long *)0x0) {
LAB_03d411a0:
      iVar5 = iVar37;
      lVar25 = *plVar35;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d411f4;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d411f4:
      plVar40 = (long *)(*(code *)*puVar13)(plVar35,puVar13[1]);
    }
LAB_03d41200:
    if (plVar33 == (long *)0x0) {
      if (iVar5 == 8) {
        func_0x072ce970(plVar36,lVar24,uVar32);
        goto LAB_03d41234;
      }
      if ((iVar5 != 6) && (iVar5 != 0)) goto LAB_03d41244;
LAB_03d41218:
      uVar12 = func_0x05ac75f4(0);
LAB_03d41288:
      func_0x03280b7c(uVar12,lVar19);
LAB_03d41290:
      func_0x03280cac();
    }
    func_0x03280ca4(plVar33);
  } while( true );
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar30 = piVar30 + 4;
    if (uVar32 == 0) break;
LAB_03d41784:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03d417b8;
    }
  }
LAB_03d4179c:
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d417b8:
  (*(code *)*puVar13)(plVar36,puVar13[1]);
LAB_03d417c4:
  func_0x03365958(plVar33);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar19 = auVar49._8_8_;
  plVar40 = auVar49._0_8_;
  *(undefined8 *)(lVar24 + -0xb0) = 0x3d417dc;
  *(long **)(lVar24 + -0xa0) = plVar35;
  *(long **)(lVar24 + -0x98) = plVar33;
  *(undefined8 *)(lVar24 + -0x90) = 0;
  *(long **)(lVar24 + -0x88) = plVar36;
  *(long *)(lVar24 + -0x80) = lVar25;
  *(undefined8 **)(lVar24 + -0x78) = extraout_x8;
  uVar32 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar40 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41a7c;
  }
  lVar25 = **(long **)(uVar29 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar40;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d41894;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar32 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar40);
LAB_03d41894:
  plVar36 = (long *)(*(code *)*puVar13)(plVar40,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar49._8_8_ = lVar19;
  auVar49._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d41a84;
  do {
    lVar25 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d418fc;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d418fc:
    uVar26 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    if ((uVar26 & 1) == 0) {
      plVar33 = (long *)0x0;
      plVar35 = (long *)0xb;
      goto joined_r0x03d419c0;
    }
    lVar25 = *(long *)(*(long *)(uVar29 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41970;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar25,0);
LAB_03d41970:
    auVar49 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    uVar32 = auVar49._8_8_;
    plVar33 = auVar49._0_8_;
    pplVar21 = *(long ***)(lVar19 + 0x28);
    uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
  } while ((uVar26 & 1) == 0);
  plVar35 = (long *)0xa;
joined_r0x03d419c0:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar25 = *plVar36;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d41a18;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41a18:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar49._8_8_ = lVar19;
    auVar49._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (((int)plVar35 != 0xb) && ((int)plVar35 != 0)) {
        return plVar33;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d41a7c:
      func_0x03280b7c(uVar8,uVar29);
LAB_03d41a84:
      func_0x03280cac();
    }
    plVar36 = auVar49._0_8_;
    auVar50 = func_0x03280ca4(auVar49._8_8_);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar35 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar35;
    func_0x072ce920();
    plVar35 = (long *)0x0;
    plVar33 = (long *)0x0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41b30;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41b30:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar42 = func_0x02f09514();
  lVar19 = auVar42._8_8_;
  plVar40 = auVar42._0_8_;
  *(undefined8 *)(lVar24 + -0xf0) = 0x3d41b54;
  *(long **)(lVar24 + -0xe0) = plVar35;
  *(long **)(lVar24 + -0xd8) = plVar33;
  *(undefined8 *)(lVar24 + -0xd0) = uVar8;
  *(undefined8 *)(lVar24 + -200) = 0;
  *(long **)(lVar24 + -0xc0) = plVar36;
  *(ulong *)(lVar24 + -0xb8) = uVar29;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar40 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41df4;
  }
  lVar25 = **(long **)(uVar32 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar40;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d41c0c;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar40);
LAB_03d41c0c:
  plVar36 = (long *)(*(code *)*puVar13)(plVar40,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar42._8_8_ = lVar19;
  auVar42._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d41dfc;
  do {
    lVar25 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41c74;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41c74:
    uVar26 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    if ((uVar26 & 1) == 0) {
      plVar33 = (long *)0x0;
      plVar35 = (long *)0xb;
      goto joined_r0x03d41d38;
    }
    lVar25 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41ce8;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar25,0);
LAB_03d41ce8:
    auVar49 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    uVar29 = auVar49._8_8_;
    plVar33 = auVar49._0_8_;
    pplVar21 = *(long ***)(lVar19 + 0x28);
    uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
  } while ((uVar26 & 1) == 0);
  plVar35 = (long *)0xa;
joined_r0x03d41d38:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar25 = *plVar36;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d41d90;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41d90:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar42._8_8_ = lVar19;
    auVar42._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (((int)plVar35 != 0xb) && ((int)plVar35 != 0)) {
        return plVar33;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d41df4:
      func_0x03280b7c(uVar8,uVar32);
LAB_03d41dfc:
      func_0x03280cac();
    }
    plVar36 = auVar42._0_8_;
    auVar50 = func_0x03280ca4(auVar42._8_8_);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar35 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar35;
    func_0x072ce920();
    plVar35 = (long *)0x0;
    plVar33 = (long *)0x0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41ea8;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41ea8:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar43 = func_0x02f09514();
  lVar19 = auVar43._8_8_;
  plVar40 = auVar43._0_8_;
  *(undefined8 *)(lVar24 + -0x130) = 0x3d41ecc;
  *(long **)(lVar24 + -0x120) = plVar35;
  *(long **)(lVar24 + -0x118) = plVar33;
  *(undefined8 *)(lVar24 + -0x110) = uVar8;
  *(undefined8 *)(lVar24 + -0x108) = 0;
  *(long **)(lVar24 + -0x100) = plVar36;
  *(ulong *)(lVar24 + -0xf8) = uVar32;
  uVar32 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar40 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d4216c;
  }
  lVar25 = **(long **)(uVar29 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar40;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d41f84;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar32 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar40);
LAB_03d41f84:
  plVar36 = (long *)(*(code *)*puVar13)(plVar40,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar43._8_8_ = lVar19;
  auVar43._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d42174;
  do {
    lVar25 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41fec;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41fec:
    uVar26 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    if ((uVar26 & 1) == 0) {
      plVar33 = (long *)0x0;
      plVar35 = (long *)0xb;
      goto joined_r0x03d420b0;
    }
    lVar25 = *(long *)(*(long *)(uVar29 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42060;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar25,0);
LAB_03d42060:
    auVar49 = (*(code *)*puVar13)(plVar36,puVar13[1]);
    uVar32 = auVar49._8_8_;
    plVar33 = auVar49._0_8_;
    pplVar21 = *(long ***)(lVar19 + 0x28);
    uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar33);
  } while ((uVar26 & 1) == 0);
  plVar35 = (long *)0xa;
joined_r0x03d420b0:
  lVar19 = 0;
  do {
    if (plVar36 != (long *)0x0) {
      lVar25 = *plVar36;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d42108;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42108:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    auVar43._8_8_ = lVar19;
    auVar43._0_8_ = plVar36;
    if (lVar19 == 0) {
      if (((int)plVar35 != 0xb) && ((int)plVar35 != 0)) {
        return plVar33;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d4216c:
      func_0x03280b7c(uVar8,uVar29);
LAB_03d42174:
      func_0x03280cac();
    }
    plVar36 = auVar43._0_8_;
    auVar50 = func_0x03280ca4(auVar43._8_8_);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar35 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar35;
    func_0x072ce920();
    plVar35 = (long *)0x0;
    plVar33 = (long *)0x0;
  } while( true );
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42220;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42220:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  lVar19 = auVar44._8_8_;
  plVar40 = auVar44._0_8_;
  *(undefined8 *)(lVar24 + -0x160) = 0x3d42244;
  *(long **)(lVar24 + -0x158) = plVar33;
  *(undefined8 *)(lVar24 + -0x150) = uVar8;
  *(undefined8 *)(lVar24 + -0x148) = 0;
  *(long **)(lVar24 + -0x140) = plVar36;
  *(ulong *)(lVar24 + -0x138) = uVar29;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  *(undefined8 *)(lVar24 + -0x1a0) = 0;
  *(undefined8 *)(lVar24 + -0x198) = 0;
  *(undefined8 *)(lVar24 + -400) = 0;
  *(undefined8 *)(lVar24 + -0x1c0) = 0;
  *(undefined8 *)(lVar24 + -0x1b8) = 0;
  *(undefined8 *)(lVar24 + -0x1b0) = 0;
  puVar38 = PTR_DAT_07774b08;
  if ((plVar40 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d42520;
  }
  lVar25 = **(long **)(uVar32 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar40;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d42310;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar40);
LAB_03d42310:
  plVar33 = (long *)(*(code *)*puVar13)(plVar40,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar44._8_8_ = lVar19;
  auVar44._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d42528;
  do {
    lVar25 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42378;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42378:
    plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    if (((ulong)plVar36 & 1) == 0) {
      iVar5 = 0xb;
      goto joined_r0x03d42454;
    }
    lVar25 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d423ec;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar25,0);
LAB_03d423ec:
    (*(code *)*puVar13)(lVar24 + -0x180,plVar33,puVar13[1]);
    *(undefined8 *)(lVar24 + -0x198) = *(undefined8 *)(lVar24 + -0x178);
    *(undefined8 *)(lVar24 + -0x1a0) = *(undefined8 *)(lVar24 + -0x180);
    *(undefined8 *)(lVar24 + -400) = *(undefined8 *)(lVar24 + -0x170);
    pcVar27 = *(code **)(lVar19 + 0x18);
    uVar8 = *(undefined8 *)(lVar19 + 0x40);
    *(undefined8 *)(lVar24 + -0x178) = *(undefined8 *)(lVar24 + -0x178);
    *(undefined8 *)(lVar24 + -0x180) = *(undefined8 *)(lVar24 + -0x180);
    *(undefined8 *)(lVar24 + -0x170) = *(undefined8 *)(lVar24 + -0x170);
    uVar29 = *(ulong *)(lVar19 + 0x28);
    plVar36 = (long *)(*pcVar27)(uVar8,lVar24 + -0x180);
  } while (((ulong)plVar36 & 1) == 0);
  iVar5 = 10;
  *(undefined8 *)(lVar24 + -0x1b8) = *(undefined8 *)(lVar24 + -0x198);
  *(undefined8 *)(lVar24 + -0x1c0) = *(undefined8 *)(lVar24 + -0x1a0);
  *(undefined8 *)(lVar24 + -0x1b0) = *(undefined8 *)(lVar24 + -400);
joined_r0x03d42454:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar25 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d424ac;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d424ac:
      plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar44._8_8_ = lVar19;
    auVar44._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (iVar5 == 10) {
        uVar8 = *(undefined8 *)(lVar24 + -0x1b8);
        uVar12 = *(undefined8 *)(lVar24 + -0x1c0);
        extraout_x8_00[2] = *(undefined8 *)(lVar24 + -0x1b0);
        extraout_x8_00[1] = uVar8;
        *extraout_x8_00 = uVar12;
        return plVar36;
      }
      if ((iVar5 != 0xb) && (iVar5 != 0)) {
        return plVar36;
      }
      uVar8 = func_0x05ac7660(0);
LAB_03d42520:
      func_0x03280b7c(uVar8,uVar32);
LAB_03d42528:
      func_0x03280cac();
    }
    plVar33 = auVar44._0_8_;
    auVar50 = func_0x03280ca4(auVar44._8_8_);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar36 = (long *)func_0x072ce910(uVar8);
    lVar19 = *plVar36;
    plVar36 = (long *)func_0x072ce920();
    iVar5 = 0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d425cc;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d425cc:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar45 = func_0x02f09514();
  lVar19 = auVar45._8_8_;
  plVar36 = auVar45._0_8_;
  *(undefined8 *)(lVar24 + -0x1f0) = 0x3d425f0;
  *(undefined8 *)(lVar24 + -0x1e8) = uVar8;
  *(undefined8 *)(lVar24 + -0x1e0) = 0;
  *(long **)(lVar24 + -0x1d8) = plVar33;
  *(undefined8 **)(lVar24 + -0x1d0) = extraout_x8_00;
  *(ulong *)(lVar24 + -0x1c8) = uVar32;
  uVar32 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar34 = func_0x03280a2c(puVar38);
    uVar34 = func_0x05ac7464(uVar34,0);
    goto LAB_03d42878;
  }
  lVar25 = **(long **)(uVar29 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar36;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d426a4;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar32 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d426a4:
  plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar45._8_8_ = lVar19;
  auVar45._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d42880;
  do {
    lVar25 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4270c;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4270c:
    uVar26 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    if ((uVar26 & 1) == 0) {
      plVar36 = (long *)0x0;
      uVar8 = 0xb;
      goto joined_r0x03d427c4;
    }
    lVar25 = *(long *)(*(long *)(uVar29 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42780;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar25,0);
LAB_03d42780:
    plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    uVar32 = *(ulong *)(lVar19 + 0x28);
    uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
  } while ((uVar26 & 1) == 0);
  uVar8 = 10;
joined_r0x03d427c4:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar25 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d4281c;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4281c:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar45._8_8_ = lVar19;
    auVar45._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (((int)uVar8 != 0xb) && ((int)uVar8 != 0)) {
        return plVar36;
      }
      uVar34 = func_0x05ac7660(0);
LAB_03d42878:
      func_0x03280b7c(uVar34,uVar29);
LAB_03d42880:
      func_0x03280cac();
    }
    plVar33 = auVar45._0_8_;
    auVar50 = func_0x03280ca4(auVar45._8_8_);
    uVar34 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar36 = (long *)func_0x072ce910(uVar34);
    lVar19 = *plVar36;
    func_0x072ce920();
    uVar8 = 0;
    plVar36 = (long *)0x0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42928;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42928:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar34);
  func_0x03280ca4(0);
  auVar46 = func_0x02f09514();
  lVar19 = auVar46._8_8_;
  plVar36 = auVar46._0_8_;
  *(undefined8 *)(lVar24 + -0x220) = 0x3d4294c;
  *(undefined8 *)(lVar24 + -0x218) = uVar8;
  *(undefined8 *)(lVar24 + -0x210) = uVar34;
  *(undefined8 *)(lVar24 + -0x208) = 0;
  *(long **)(lVar24 + -0x200) = plVar33;
  *(ulong *)(lVar24 + -0x1f8) = uVar29;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar34 = func_0x03280a2c(puVar38);
    uVar34 = func_0x05ac7464(uVar34,0);
    goto LAB_03d42bd4;
  }
  lVar25 = **(long **)(uVar32 + 0x38);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar36;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d42a00;
      }
      uVar26 = uVar26 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar26 != 0);
  }
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42a00:
  plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar46._8_8_ = lVar19;
  auVar46._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d42bdc;
  do {
    lVar25 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42a68;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42a68:
    uVar26 = (*(code *)*puVar13)(plVar33,puVar13[1]);
    if ((uVar26 & 1) == 0) {
      plVar36 = (long *)0x0;
      uVar8 = 0xb;
      goto joined_r0x03d42b20;
    }
    lVar25 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42adc;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar25,0);
LAB_03d42adc:
    plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    uVar29 = *(ulong *)(lVar19 + 0x28);
    uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
  } while ((uVar26 & 1) == 0);
  uVar8 = 10;
joined_r0x03d42b20:
  lVar19 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar25 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d42b78;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42b78:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar46._8_8_ = lVar19;
    auVar46._0_8_ = plVar33;
    if (lVar19 == 0) {
      if (((int)uVar8 != 0xb) && ((int)uVar8 != 0)) {
        return plVar36;
      }
      uVar34 = func_0x05ac7660(0);
LAB_03d42bd4:
      func_0x03280b7c(uVar34,uVar32);
LAB_03d42bdc:
      func_0x03280cac();
    }
    plVar33 = auVar46._0_8_;
    auVar50 = func_0x03280ca4(auVar46._8_8_);
    uVar34 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar36 = (long *)func_0x072ce910(uVar34);
    lVar19 = *plVar36;
    func_0x072ce920();
    uVar8 = 0;
    plVar36 = (long *)0x0;
  } while( true );
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42c84;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42c84:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar34);
  func_0x03280ca4(0);
  auVar47 = func_0x02f09514();
  uVar26 = auVar47._8_8_;
  plVar36 = auVar47._0_8_;
  *(long *)(lVar24 + -0x280) = lVar11 + -0x90;
  *(undefined8 *)(lVar24 + -0x278) = 0x3d42ca8;
  *(long *)(lVar24 + -0x270) = lVar41;
  *(long *)(lVar24 + -0x268) = lVar31;
  *(undefined8 *)(lVar24 + -0x260) = uVar12;
  *(undefined8 *)(lVar24 + -600) = 0;
  *(long **)(lVar24 + -0x250) = plVar35;
  *(undefined8 *)(lVar24 + -0x248) = uVar8;
  *(undefined8 *)(lVar24 + -0x240) = uVar34;
  *(undefined8 *)(lVar24 + -0x238) = 0;
  *(long **)(lVar24 + -0x230) = plVar33;
  *(ulong *)(lVar24 + -0x228) = uVar32;
  *(ulong *)(lVar24 + -0x2a0) = uVar29;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar24 + -0x288) = *(undefined8 *)(lVar11 + 0x28);
  plVar35 = pplVar21[7];
  pplVar20 = pplVar21;
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = pplVar21[7];
    if (plVar35 == (long *)0x0) {
      func_0x03256878(pplVar21);
      plVar35 = pplVar21[7];
    }
  }
  uVar32 = (ulong)*(uint *)(plVar35[5] + 0xfc);
  uVar29 = uVar32 + 0xf & 0x1fffffff0;
  lVar31 = (lVar24 + -0x2a0) - uVar29;
  puVar13 = (undefined8 *)(lVar31 - uVar29);
  lVar19 = (long)puVar13 - uVar29;
  func_0x072ce9a0(lVar19,0,uVar32);
  lVar41 = lVar19 - uVar29;
  uVar29 = uVar32;
  func_0x072ce9a0(lVar41,0);
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, uVar26 == 0)) {
    uVar12 = func_0x03280a2c(puVar38);
    uVar12 = func_0x05ac7464(uVar12,0);
    goto LAB_03d43068;
  }
  lVar25 = *plVar35;
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  lVar22 = *plVar36;
  uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar28 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar25) {
        puVar9 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d42de0;
      }
      uVar28 = uVar28 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar28 != 0);
  }
  uVar29 = 0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d42de0:
  plVar33 = (long *)(*(code *)*puVar9)(plVar36,puVar9[1]);
  puVar38 = PTR_DAT_0774e8e0;
  auVar47._8_8_ = uVar26;
  auVar47._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d43070;
  do {
    lVar25 = *plVar33;
    uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar28 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
          puVar9 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d42e48;
        }
        uVar28 = uVar28 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 != 0);
    }
    uVar29 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42e48:
    plVar36 = (long *)(*(code *)*puVar9)(plVar33,puVar9[1]);
    if (((ulong)plVar36 & 1) == 0) {
      plVar35 = (long *)0xb;
      goto joined_r0x03d42f70;
    }
    lVar25 = pplVar21[7][3];
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          lVar25 = lVar22 + (long)*piVar30 * 0x10 + 0x138;
          goto LAB_03d42ebc;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    lVar25 = func_0x03256b10(plVar33,lVar25,0);
LAB_03d42ebc:
    *(long *)(lVar24 + -0x298) = lVar31;
    lVar25 = *(long *)(lVar25 + 8);
    (**(code **)(lVar25 + 0x10))(*(undefined8 *)(lVar25 + 8),lVar25,plVar33,lVar24 + -0x298,lVar31);
    func_0x072ce970(lVar19,lVar31,uVar32);
    func_0x072ce970(puVar13,lVar19,uVar32);
    puVar9 = puVar13;
    if (-1 < *(int *)(pplVar21[7][5] + 0x28)) {
      puVar9 = (undefined8 *)*puVar13;
    }
    puVar18 = (undefined8 *)pplVar21[7][6];
    uVar12 = *puVar18;
    *(undefined8 **)(lVar24 + -0x298) = puVar9;
    pplVar20 = (long **)(lVar24 + -0x298);
    uVar29 = uVar26;
    (*(code *)puVar18[2])(uVar12);
  } while (*(char *)(lVar24 + -0x28c) == '\0');
  func_0x072ce970(lVar31,lVar19,uVar32);
  uVar29 = uVar32;
  plVar36 = (long *)func_0x072ce970(lVar41,lVar31);
  plVar35 = (long *)0xa;
joined_r0x03d42f70:
  lVar25 = 0;
  do {
    if (plVar33 != (long *)0x0) {
      lVar22 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d42fc8;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d42fc8:
      plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar47._8_8_ = lVar25;
    auVar47._0_8_ = plVar33;
    if (lVar25 == 0) {
      iVar5 = (int)plVar35;
      if (iVar5 == 10) {
        func_0x072ce970(lVar31,lVar41,uVar32);
        uVar29 = uVar32;
        plVar36 = (long *)func_0x072ce970(*(undefined8 *)(lVar24 + -0x2a0),lVar31);
      }
      else if ((iVar5 == 0xb) || (iVar5 == 0)) {
        uVar12 = func_0x05ac7660(0);
LAB_03d43068:
        func_0x03280b7c(uVar12,pplVar21);
LAB_03d43070:
        func_0x03280cac();
        goto LAB_03d43074;
      }
      if (*(long *)(lVar11 + 0x28) == *(long *)(lVar24 + -0x288)) {
        return plVar36;
      }
    }
    else {
LAB_03d43074:
      plVar33 = auVar47._0_8_;
      func_0x03280ca4(auVar47._8_8_);
    }
    auVar50 = func_0x072ce990();
    uVar12 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) goto LAB_03d430c0;
    plVar35 = (long *)func_0x072ce910(uVar12);
    lVar25 = *plVar35;
    plVar36 = (long *)func_0x072ce920();
    plVar35 = (long *)0x0;
  } while( true );
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar30 = piVar30 + 4;
    if (uVar32 == 0) break;
LAB_03d4352c:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
      goto LAB_03d43560;
    }
  }
LAB_03d43544:
  uVar29 = 0;
  plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43560:
  (*(code *)*plVar35)(pplVar21,plVar35[1]);
LAB_03d4356c:
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar25 = auVar49._8_8_;
  plVar35 = auVar49._0_8_;
  *(undefined8 *)(lVar41 + -0x60) = 0x3d43584;
  *(long *)(lVar41 + -0x50) = lVar31;
  *(undefined8 *)(lVar41 + -0x48) = uVar8;
  *(undefined8 *)(lVar41 + -0x40) = 0;
  *(long ***)(lVar41 + -0x38) = pplVar21;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
  }
  if (plVar35 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar25);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar36 = (long *)func_0x03280b90(plVar35,lVar22);
    if (plVar36 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar31 = *plVar36;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d436b4;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar11,0);
LAB_03d436b4:
      iVar5 = (*(code *)*puVar13)(plVar36,puVar13[1]);
      if (iVar5 < 1) {
        return (long *)0x0;
      }
      lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar31 = *plVar36;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d4372c;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar11,0);
LAB_03d4372c:
                    /* WARNING: Could not recover jumptable at 0x03d43744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar35 = (long *)(*(code *)*puVar13)(plVar36,0,puVar13[1]);
      return plVar35;
    }
    lVar22 = **(long **)(lVar25 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar35;
    uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d43754;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d43754:
    pplVar21 = (long **)(*(code *)*puVar13)(plVar35,puVar13[1]);
    if (pplVar21 != (long **)0x0) {
      plVar35 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar35[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
            plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d437bc;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d437bc:
      uVar32 = (*(code *)*plVar35)(pplVar21,plVar35[1]);
      if ((uVar32 & 1) == 0) {
        lVar25 = 0;
        lVar31 = 6;
        goto joined_r0x03d43830;
      }
      lVar31 = *(long *)(*(long *)(lVar25 + 0x38) + 0x38);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      plVar35 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar35[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar31) {
            plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d43844;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43844:
      plVar35 = (long *)(*(code *)*plVar35)(pplVar21,plVar35[1]);
      lVar25 = 0;
      lVar31 = 8;
      if (pplVar21 == (long **)0x0) goto LAB_03d438c0;
      goto LAB_03d43860;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar25);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar35 = (long *)func_0x072ce910(uVar8);
    lVar25 = *plVar35;
    func_0x072ce920();
    lVar31 = 0;
joined_r0x03d43830:
    plVar35 = (long *)0x0;
    if (pplVar21 != (long **)0x0) {
LAB_03d43860:
      plVar36 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar36 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar36[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            plVar36 = plVar36 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d438b4;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar36 = (long *)func_0x03256b10(pplVar21);
LAB_03d438b4:
      (*(code *)*plVar36)(pplVar21,plVar36[1]);
    }
LAB_03d438c0:
    if (lVar25 == 0) {
      if (((int)lVar31 != 6) && ((int)lVar31 != 0)) {
        return plVar35;
      }
      return (long *)0x0;
    }
  }
  if (pplVar21 != (long **)0x0) {
    plVar35 = *pplVar21;
    uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(plVar35[0x16] + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
          goto LAB_03d439a8;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d439a8:
    (*(code *)*plVar35)(pplVar21,plVar35[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar25 = auVar49._8_8_;
  plVar35 = auVar49._0_8_;
  *(undefined8 *)(lVar41 + -0x90) = unaff_d9;
  *(undefined8 *)(lVar41 + -0x88) = unaff_d8;
  *(undefined8 *)(lVar41 + -0x80) = 0x3d439cc;
  *(undefined8 *)(lVar41 + -0x78) = uVar8;
  *(undefined8 *)(lVar41 + -0x70) = 0;
  *(long ***)(lVar41 + -0x68) = pplVar21;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
  }
  if (plVar35 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar25);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar36 = (long *)func_0x03280b90(plVar35,lVar22);
    if (plVar36 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar31 = *plVar36;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d43afc;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar11,0);
LAB_03d43afc:
      plVar35 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
      if ((int)plVar35 < 1) {
        return plVar35;
      }
      lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar31 = *plVar36;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d43b74;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar11,0);
LAB_03d43b74:
      plVar35 = (long *)(*(code *)*puVar13)(plVar36,0,puVar13[1]);
      return plVar35;
    }
    lVar22 = **(long **)(lVar25 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar35;
    uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d43b9c;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d43b9c:
    pplVar21 = (long **)(*(code *)*puVar13)(plVar35,puVar13[1]);
    if (pplVar21 != (long **)0x0) {
      plVar35 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar35[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
            plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d43c04;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43c04:
      plVar35 = (long *)(*(code *)*plVar35)(pplVar21,plVar35[1]);
      if (((ulong)plVar35 & 1) == 0) {
        lVar25 = 0;
        goto LAB_03d43c78;
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x38) + 0x38);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      plVar35 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar35[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar25) {
            plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d43c90;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43c90:
      plVar35 = (long *)(*(code *)*plVar35)(pplVar21,plVar35[1]);
      lVar25 = 0;
      if (pplVar21 == (long **)0x0) goto LAB_03d43d10;
      goto LAB_03d43cb0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar25);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar35 = (long *)func_0x072ce910(uVar8);
    lVar25 = *plVar35;
    plVar35 = (long *)func_0x072ce920();
LAB_03d43c78:
    if (pplVar21 != (long **)0x0) {
LAB_03d43cb0:
      plVar35 = *pplVar21;
      uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(plVar35[0x16] + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
            goto LAB_03d43d04;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43d04:
      plVar35 = (long *)(*(code *)*plVar35)(pplVar21,plVar35[1]);
    }
LAB_03d43d10:
    if (lVar25 == 0) {
      return plVar35;
    }
  }
  if (pplVar21 != (long **)0x0) {
    plVar35 = *pplVar21;
    uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(plVar35[0x16] + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
          goto LAB_03d43dfc;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43dfc:
    (*(code *)*plVar35)(pplVar21,plVar35[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  plVar36 = auVar49._0_8_;
  *(long *)(lVar41 + -0xf0) = lVar24 + -0x280;
  *(undefined8 *)(lVar41 + -0xe8) = 0x3d43e20;
  *(long *)(lVar41 + -0xe0) = lVar19;
  *(undefined8 *)(lVar41 + -0xd0) = uVar12;
  *(undefined8 *)(lVar41 + -200) = 0;
  *(long **)(lVar41 + -0xc0) = plVar33;
  *(long *)(lVar41 + -0xb8) = lVar41;
  *(long *)(lVar41 + -0xb0) = lVar31;
  *(undefined8 *)(lVar41 + -0xa8) = uVar8;
  *(undefined8 *)(lVar41 + -0xa0) = 0;
  *(long ***)(lVar41 + -0x98) = pplVar21;
  lVar31 = tpidr_el0;
  *(undefined8 *)(lVar41 + -0xf8) = *(undefined8 *)(lVar31 + 0x28);
  plVar35 = *(long **)(uVar29 + 0x38);
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = *(long **)(uVar29 + 0x38);
    if (plVar35 == (long *)0x0) {
      func_0x03256878(uVar29);
      plVar35 = *(long **)(uVar29 + 0x38);
    }
  }
  uVar26 = (ulong)*(uint *)(plVar35[5] + 0xfc);
  uVar32 = uVar26 + 0xf & 0x1fffffff0;
  lVar19 = (lVar41 + -0x110) - uVar32;
  lVar25 = lVar19 - uVar32;
  func_0x072ce9a0(lVar25,0,uVar26);
  lVar24 = lVar25 - uVar32;
  auVar48._8_8_ = lVar24;
  auVar48._0_8_ = lVar25;
  uVar32 = uVar26;
  func_0x072ce9a0(lVar24,0);
  if (plVar36 == (long *)0x0) {
    uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,uVar29);
  }
  else {
    lVar22 = plVar35[1];
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar35 = (long *)func_0x03280b90(plVar36,lVar22);
    if (plVar35 != (long *)0x0) {
      lVar22 = *(long *)(*(long *)(uVar29 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar35;
      uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d43fc8;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar35,lVar22,0);
LAB_03d43fc8:
      iVar5 = (*(code *)*puVar13)(plVar35,puVar13[1]);
      if (iVar5 < 1) goto LAB_03d44210;
      lVar22 = *(long *)(*(long *)(uVar29 + 0x38) + 8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      *(undefined4 *)(lVar41 + -0xfc) = 0;
      lVar23 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar22) {
            lVar22 = lVar23 + (long)*piVar30 * 0x10 + 0x138;
            goto LAB_03d44044;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      lVar22 = func_0x03256b10(plVar35,lVar22,0);
LAB_03d44044:
      *(long *)(lVar41 + -0x110) = lVar41 + -0xfc;
      *(long *)(lVar41 + -0x108) = lVar19;
      lVar22 = *(long *)(lVar22 + 8);
      pplVar20 = (long **)(lVar41 + -0x110);
      (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar35,pplVar20,lVar19);
      goto LAB_03d44230;
    }
    lVar22 = **(long **)(uVar29 + 0x38);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar23 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44074;
        }
        uVar28 = uVar28 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44074:
    plVar35 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    if (plVar35 != (long *)0x0) {
      lVar22 = *plVar35;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 != 0) {
        piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d440dc;
          }
          uVar28 = uVar28 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar28 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d440dc:
      plVar33 = (long *)(*(code *)*puVar13)(plVar35,puVar13[1]);
      if (((ulong)plVar33 & 1) == 0) {
        uVar29 = 0;
        iVar37 = 6;
        iVar5 = 6;
        goto joined_r0x03d4414c;
      }
      lVar22 = *(long *)(*(long *)(uVar29 + 0x38) + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar22) {
            lVar22 = lVar23 + (long)*piVar30 * 0x10 + 0x138;
            goto LAB_03d44160;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      lVar22 = func_0x03256b10(plVar35,lVar22,0);
LAB_03d44160:
      *(long *)(lVar41 + -0x110) = lVar19;
      lVar22 = *(long *)(lVar22 + 8);
      pplVar20 = (long **)(lVar41 + -0x110);
      (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar35,pplVar20,lVar19);
      uVar32 = uVar26;
      plVar33 = (long *)func_0x072ce970(lVar25,lVar19);
      uVar29 = 0;
      iVar5 = 8;
      iVar37 = 8;
      if (plVar35 == (long *)0x0) goto LAB_03d441f8;
      goto LAB_03d44198;
    }
  }
  func_0x03280cac();
LAB_03d4429c:
  func_0x03280ca4(uVar29);
  do {
    auVar50 = func_0x072ce990();
    uVar12 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (plVar35 == (long *)0x0) goto LAB_03d44348;
      lVar22 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar29 == 0) goto LAB_03d44320;
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    puVar10 = (ulong *)func_0x072ce910(uVar12);
    uVar29 = *puVar10;
    plVar33 = (long *)func_0x072ce920();
    iVar37 = 0;
    iVar5 = 0;
joined_r0x03d4414c:
    if (plVar35 != (long *)0x0) {
LAB_03d44198:
      iVar5 = iVar37;
      lVar22 = *plVar35;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 != 0) {
        piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d441ec;
          }
          uVar28 = uVar28 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar28 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d441ec:
      plVar33 = (long *)(*(code *)*puVar13)(plVar35,puVar13[1]);
    }
LAB_03d441f8:
    if (uVar29 != 0) goto LAB_03d4429c;
    if (iVar5 == 0) {
LAB_03d44210:
      func_0x072ce9a0(lVar24,0,uVar26);
      lVar22 = lVar24;
LAB_03d44228:
      func_0x072ce970(lVar19,lVar22,uVar26);
LAB_03d44230:
      uVar32 = uVar26;
      plVar33 = (long *)func_0x072ce970(auVar49._8_8_,lVar19);
    }
    else {
      lVar22 = lVar25;
      if (iVar5 == 8) goto LAB_03d44228;
      if (iVar5 == 6) goto LAB_03d44210;
    }
    if (*(long *)(lVar31 + 0x28) == *(long *)(lVar41 + -0xf8)) {
      return plVar33;
    }
  } while( true );
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar30 = piVar30 + 4;
    if (uVar29 == 0) break;
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03d4433c;
    }
  }
LAB_03d44320:
  uVar32 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d4433c:
  (*(code *)*puVar13)(plVar35,puVar13[1]);
LAB_03d44348:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar42 = func_0x02f09514();
  lVar22 = auVar42._8_8_;
  plVar33 = auVar42._0_8_;
  *(undefined8 *)(lVar24 + -0x40) = 0x3d44360;
  *(long **)(lVar24 + -0x30) = plVar35;
  *(long *)(lVar24 + -0x28) = lVar25;
  *(long *)(lVar24 + -0x20) = lVar24;
  *(long *)(lVar24 + -0x18) = lVar19;
  *(ulong *)(lVar24 + -0x10) = uVar26;
  *(long *)(lVar24 + -8) = auVar49._8_8_;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar32);
  }
  else {
    lVar19 = **(long **)(uVar32 + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar25 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44418;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44418:
    plVar33 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar19 = *plVar33;
        uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar26 != 0) {
          piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44480;
            }
            uVar26 = uVar26 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar26 != 0);
        }
        uVar29 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44480:
        uVar26 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        if ((uVar26 & 1) == 0) {
          auVar48 = ZEXT816(0);
          iVar5 = 0xb;
          goto joined_r0x03d44544;
        }
        lVar19 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar25 = *plVar33;
        uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d444f4;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar19,0);
LAB_03d444f4:
        auVar48 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        uVar29 = auVar48._8_8_;
        pplVar20 = *(long ***)(lVar22 + 0x28);
        uVar26 = (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),auVar48._0_8_);
      } while ((uVar26 & 1) == 0);
      iVar5 = 10;
joined_r0x03d44544:
      uVar32 = 0;
      plVar35 = (long *)puVar38;
      goto joined_r0x03d44544;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar32);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar32 = *puVar10;
    func_0x072ce920();
    iVar5 = 0;
    auVar48 = ZEXT816(0);
joined_r0x03d44544:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d4459c;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4459c:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    plVar36 = auVar48._0_8_;
    if (uVar32 == 0) {
      if ((iVar5 == 0xb) || (iVar5 == 0)) {
        plVar36 = (long *)0x0;
      }
      return plVar36;
    }
  }
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d446b0;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d446b0:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar19 = auVar49._8_8_;
  plVar36 = auVar49._0_8_;
  *(undefined8 *)(lVar24 + -0x80) = 0x3d446d4;
  *(long **)(lVar24 + -0x70) = plVar35;
  *(undefined1 (*) [16])(lVar24 + -0x68) = auVar48;
  *(undefined8 *)(lVar24 + -0x58) = uVar8;
  *(undefined8 *)(lVar24 + -0x50) = 0;
  *(long **)(lVar24 + -0x48) = plVar33;
  uVar32 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar29);
  }
  else {
    lVar25 = **(long **)(uVar29 + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4478c;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4478c:
    plVar36 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar25 = *plVar36;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d447f4;
            }
            uVar26 = uVar26 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar26 != 0);
        }
        uVar32 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d447f4:
        uVar26 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        if ((uVar26 & 1) == 0) {
          auVar48 = ZEXT816(0);
          iVar5 = 0xb;
          goto joined_r0x03d448b8;
        }
        lVar25 = *(long *)(*(long *)(uVar29 + 0x38) + 0x18);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar36;
        uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44868;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar25,0);
LAB_03d44868:
        auVar48 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        uVar32 = auVar48._8_8_;
        pplVar20 = *(long ***)(lVar19 + 0x28);
        uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar48._0_8_);
      } while ((uVar26 & 1) == 0);
      iVar5 = 10;
joined_r0x03d448b8:
      uVar29 = 0;
      plVar35 = (long *)puVar38;
      goto joined_r0x03d448b8;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar29);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar29 = *puVar10;
    func_0x072ce920();
    iVar5 = 0;
    auVar48 = ZEXT816(0);
joined_r0x03d448b8:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d44910;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44910:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    plVar33 = auVar48._0_8_;
    if (uVar29 == 0) {
      if ((iVar5 == 0xb) || (iVar5 == 0)) {
        plVar33 = (long *)0x0;
      }
      return plVar33;
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar29 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44a24;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44a24:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar19 = auVar49._8_8_;
  plVar33 = auVar49._0_8_;
  *(undefined8 *)(lVar24 + -0xc0) = 0x3d44a48;
  *(long **)(lVar24 + -0xb0) = plVar35;
  *(undefined1 (*) [16])(lVar24 + -0xa8) = auVar48;
  *(undefined8 *)(lVar24 + -0x98) = uVar8;
  *(undefined8 *)(lVar24 + -0x90) = 0;
  *(long **)(lVar24 + -0x88) = plVar36;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar32);
  }
  else {
    lVar25 = **(long **)(uVar32 + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44b00;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44b00:
    plVar33 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar25 = *plVar33;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44b68;
            }
            uVar26 = uVar26 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar26 != 0);
        }
        uVar29 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44b68:
        uVar26 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        if ((uVar26 & 1) == 0) {
          auVar48 = ZEXT816(0);
          iVar5 = 0xb;
          goto joined_r0x03d44c2c;
        }
        lVar25 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar33;
        uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44bdc;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar25,0);
LAB_03d44bdc:
        auVar48 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        uVar29 = auVar48._8_8_;
        pplVar20 = *(long ***)(lVar19 + 0x28);
        uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar48._0_8_);
      } while ((uVar26 & 1) == 0);
      iVar5 = 10;
joined_r0x03d44c2c:
      uVar32 = 0;
      plVar35 = (long *)puVar38;
      goto joined_r0x03d44c2c;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar32);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar32 = *puVar10;
    func_0x072ce920();
    iVar5 = 0;
    auVar48 = ZEXT816(0);
joined_r0x03d44c2c:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d44c84;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44c84:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    plVar36 = auVar48._0_8_;
    if (uVar32 == 0) {
      if ((iVar5 == 0xb) || (iVar5 == 0)) {
        plVar36 = (long *)0x0;
      }
      return plVar36;
    }
  }
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44d98;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d44d98:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar19 = auVar49._8_8_;
  plVar36 = auVar49._0_8_;
  *(undefined8 *)(lVar24 + -0x100) = 0x3d44dbc;
  *(long **)(lVar24 + -0xf0) = plVar35;
  *(undefined1 (*) [16])(lVar24 + -0xe8) = auVar48;
  *(undefined8 *)(lVar24 + -0xd8) = uVar8;
  *(undefined8 *)(lVar24 + -0xd0) = 0;
  *(long **)(lVar24 + -200) = plVar33;
  uVar32 = uVar29;
  if (*(long *)(uVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar29 + 0x38) == 0) {
      func_0x03256878(uVar29);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar29);
  }
  else {
    lVar25 = **(long **)(uVar29 + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d44e74;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44e74:
    plVar36 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar25 = *plVar36;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44edc;
            }
            uVar26 = uVar26 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar26 != 0);
        }
        uVar32 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44edc:
        uVar26 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        if ((uVar26 & 1) == 0) {
          auVar48 = ZEXT816(0);
          iVar5 = 0xb;
          goto joined_r0x03d44fa0;
        }
        lVar25 = *(long *)(*(long *)(uVar29 + 0x38) + 0x18);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar36;
        uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d44f50;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar25,0);
LAB_03d44f50:
        auVar48 = (*(code *)*puVar13)(plVar36,puVar13[1]);
        uVar32 = auVar48._8_8_;
        pplVar20 = *(long ***)(lVar19 + 0x28);
        uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),auVar48._0_8_);
      } while ((uVar26 & 1) == 0);
      iVar5 = 10;
joined_r0x03d44fa0:
      uVar29 = 0;
      plVar35 = (long *)puVar38;
      goto joined_r0x03d44fa0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar29);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar29 = *puVar10;
    func_0x072ce920();
    iVar5 = 0;
    auVar48 = ZEXT816(0);
joined_r0x03d44fa0:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d44ff8;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar32 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d44ff8:
      (*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    plVar33 = auVar48._0_8_;
    if (uVar29 == 0) {
      if ((iVar5 == 0xb) || (iVar5 == 0)) {
        plVar33 = (long *)0x0;
      }
      return plVar33;
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar19 = *plVar36;
    uVar29 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4510c;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    uVar32 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4510c:
    (*(code *)*puVar13)(plVar36,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar19 = auVar49._8_8_;
  plVar33 = auVar49._0_8_;
  *(undefined8 *)(lVar24 + -0x130) = 0x3d45130;
  *(undefined1 (*) [16])(lVar24 + -0x128) = auVar48;
  *(undefined8 *)(lVar24 + -0x118) = uVar8;
  *(undefined8 *)(lVar24 + -0x110) = 0;
  *(long **)(lVar24 + -0x108) = plVar36;
  uVar29 = uVar32;
  if (*(long *)(uVar32 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar32 + 0x38) == 0) {
      func_0x03256878(uVar32);
    }
  }
  puVar38 = PTR_DAT_07774b08;
  if ((plVar33 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar8 = func_0x03280a2c(puVar38);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,uVar32);
  }
  else {
    lVar25 = **(long **)(uVar32 + 0x38);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d451e4;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d451e4:
    plVar33 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar33 != (long *)0x0) {
      do {
        lVar25 = *plVar33;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d4524c;
            }
            uVar26 = uVar26 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar26 != 0);
        }
        uVar29 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4524c:
        uVar26 = (*(code *)*puVar13)(plVar33,puVar13[1]);
        if ((uVar26 & 1) == 0) {
          plVar36 = (long *)0x0;
          iVar5 = 0xb;
          goto joined_r0x03d45304;
        }
        lVar25 = *(long *)(*(long *)(uVar32 + 0x38) + 0x18);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar33;
        uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d452c0;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar33,lVar25,0);
LAB_03d452c0:
        plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
        uVar29 = *(ulong *)(lVar19 + 0x28);
        uVar26 = (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),plVar36);
      } while ((uVar26 & 1) == 0);
      iVar5 = 10;
joined_r0x03d45304:
      uVar32 = 0;
      goto joined_r0x03d45304;
    }
  }
  func_0x03280cac();
  while( true ) {
    puVar38 = auVar48._0_8_;
    auVar50 = func_0x03280ca4(uVar32);
    uVar8 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar8);
    uVar32 = *puVar10;
    func_0x072ce920();
    iVar5 = 0;
    plVar36 = (long *)0x0;
joined_r0x03d45304:
    if (plVar33 != (long *)0x0) {
      lVar19 = *plVar33;
      uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d4535c;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4535c:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
    auVar48._8_8_ = plVar36;
    auVar48._0_8_ = puVar38;
    if (uVar32 == 0) {
      if ((iVar5 == 0xb) || (iVar5 == 0)) {
        plVar36 = (long *)0x0;
      }
      return plVar36;
    }
  }
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d45460;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d45460:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  uVar32 = auVar49._8_8_;
  plVar36 = auVar49._0_8_;
  *(long *)(lVar24 + -400) = lVar41 + -0xf0;
  *(undefined8 *)(lVar24 + -0x188) = 0x3d45484;
  *(long *)(lVar24 + -0x180) = lVar11;
  *(long *)(lVar24 + -0x178) = lVar31;
  *(undefined8 *)(lVar24 + -0x170) = uVar12;
  *(undefined8 *)(lVar24 + -0x168) = 0;
  *(long **)(lVar24 + -0x160) = plVar35;
  *(undefined1 (*) [16])(lVar24 + -0x158) = auVar48;
  *(undefined8 *)(lVar24 + -0x148) = uVar8;
  *(undefined8 *)(lVar24 + -0x140) = 0;
  *(long **)(lVar24 + -0x138) = plVar33;
  lVar11 = tpidr_el0;
  *(ulong *)(lVar24 + -0x1b8) = uVar29;
  *(long *)(lVar24 + -0x1b0) = lVar11;
  *(undefined8 *)(lVar24 + -0x198) = *(undefined8 *)(lVar11 + 0x28);
  plVar35 = pplVar20[7];
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = pplVar20[7];
    if (plVar35 == (long *)0x0) {
      func_0x03256878(pplVar20);
      plVar35 = pplVar20[7];
    }
  }
  uVar26 = (ulong)*(uint *)(plVar35[5] + 0xfc);
  uVar29 = uVar26 + 0xf & 0x1fffffff0;
  lVar31 = lVar24 + (-0x1c0 - uVar29);
  puVar13 = (undefined8 *)(lVar31 - uVar29);
  lVar19 = (long)puVar13 - uVar29;
  func_0x072ce9a0(lVar19,0,uVar26);
  lVar11 = lVar19 - uVar29;
  func_0x072ce9a0(lVar11,0,uVar26);
  lVar41 = lVar11 - uVar29;
  uVar29 = uVar26;
  func_0x072ce9a0(lVar41,0);
  puVar38 = PTR_DAT_07774b08;
  if ((plVar36 == (long *)0x0) || (puVar38 = PTR_DAT_077799b8, uVar32 == 0)) {
    uVar12 = func_0x03280a2c(puVar38);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,pplVar20);
  }
  else {
    lVar25 = *plVar35;
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar22 = *plVar36;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar9 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d455d8;
        }
        uVar28 = uVar28 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 != 0);
    }
    uVar29 = 0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d455d8:
    plVar36 = (long *)(*(code *)*puVar9)(plVar36,puVar9[1]);
    puVar38 = PTR_DAT_0774e8e0;
    if (plVar36 != (long *)0x0) {
      do {
        lVar25 = *plVar36;
        uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar28 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)puVar38) {
              puVar9 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03d45640;
            }
            uVar28 = uVar28 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar28 != 0);
        }
        uVar29 = 0;
        puVar9 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d45640:
        plVar33 = (long *)(*(code *)*puVar9)(plVar36,puVar9[1]);
        if (((ulong)plVar33 & 1) == 0) {
          plVar35 = (long *)0xb;
          goto joined_r0x03d45768;
        }
        lVar25 = pplVar20[7][3];
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar22 = *plVar36;
        uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              lVar25 = lVar22 + (long)*piVar30 * 0x10 + 0x138;
              goto LAB_03d456b4;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        lVar25 = func_0x03256b10(plVar36,lVar25,0);
LAB_03d456b4:
        *(long *)(lVar24 + -0x1a8) = lVar31;
        lVar25 = *(long *)(lVar25 + 8);
        (**(code **)(lVar25 + 0x10))
                  (*(undefined8 *)(lVar25 + 8),lVar25,plVar36,lVar24 + -0x1a8,lVar31);
        func_0x072ce970(lVar19,lVar31,uVar26);
        func_0x072ce970(puVar13,lVar19,uVar26);
        puVar9 = puVar13;
        if (-1 < *(int *)(pplVar20[7][5] + 0x28)) {
          puVar9 = (undefined8 *)*puVar13;
        }
        puVar18 = (undefined8 *)pplVar20[7][6];
        uVar12 = *puVar18;
        *(undefined8 **)(lVar24 + -0x1a8) = puVar9;
        uVar29 = uVar32;
        (*(code *)puVar18[2])(uVar12,puVar18,uVar32,lVar24 + -0x1a8,lVar24 + -0x19c);
      } while (*(char *)(lVar24 + -0x19c) == '\0');
      func_0x072ce970(lVar31,lVar19,uVar26);
      uVar29 = uVar26;
      plVar33 = (long *)func_0x072ce970(lVar11,lVar31);
      plVar35 = (long *)0xa;
joined_r0x03d45768:
      pplVar20 = (long **)0x0;
      goto joined_r0x03d45768;
    }
  }
  func_0x03280cac();
LAB_03d45878:
  func_0x03280ca4(pplVar20);
  do {
    auVar50 = func_0x072ce990();
    if (auVar50._8_4_ != 1) {
      if (plVar36 == (long *)0x0) goto LAB_03d45928;
      lVar19 = *plVar36;
      uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar32 == 0) goto LAB_03d45900;
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    plVar35 = (long *)func_0x072ce910(auVar50._0_8_);
    pplVar20 = (long **)*plVar35;
    plVar33 = (long *)func_0x072ce920();
    plVar35 = (long *)0x0;
joined_r0x03d45768:
    if (plVar36 != (long *)0x0) {
      lVar19 = *plVar36;
      uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d457c0;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d457c0:
      plVar33 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    }
    if (pplVar20 != (long **)0x0) goto LAB_03d45878;
    iVar5 = (int)plVar35;
    if (iVar5 == 0xb) {
LAB_03d457e4:
      func_0x072ce9a0(lVar41,0,uVar26);
      lVar11 = lVar41;
LAB_03d457f8:
      func_0x072ce970(lVar31,lVar11,uVar26);
      uVar29 = uVar26;
      plVar33 = (long *)func_0x072ce970(*(undefined8 *)(lVar24 + -0x1b8),lVar31);
    }
    else {
      if (iVar5 == 10) goto LAB_03d457f8;
      if (iVar5 == 0) goto LAB_03d457e4;
    }
    if (*(long *)(*(long *)(lVar24 + -0x1b0) + 0x28) == *(long *)(lVar24 + -0x198)) {
      return plVar33;
    }
  } while( true );
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar30 = piVar30 + 4;
    if (uVar32 == 0) break;
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03d4591c;
    }
  }
LAB_03d45900:
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4591c:
  (*(code *)*puVar13)(plVar36,puVar13[1]);
LAB_03d45928:
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  *(undefined8 *)(lVar41 + -0x30) = 0x3d45940;
  *(long *)(lVar41 + -0x20) = lVar11;
  *(long *)(lVar41 + -0x18) = lVar31;
  *(ulong *)(lVar41 + -0x10) = uVar26;
  *(long **)(lVar41 + -8) = plVar35;
  lVar11 = *(long *)(uVar29 + 0x38);
  if (lVar11 == 0) {
    func_0x03256878(uVar29);
    lVar11 = *(long *)(uVar29 + 0x38);
  }
  uVar12 = func_0x053e0d5c(*(undefined8 *)(lVar11 + 0x10));
  lVar11 = *(long *)(*(long *)(uVar29 + 0x38) + 0x28);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  plVar35 = (long *)func_0x03280ca0(lVar11);
  func_0x0539b9c0(plVar35,auVar49._0_8_,auVar49._8_8_,uVar12,0,
                  *(undefined8 *)(*(long *)(uVar29 + 0x38) + 0x30));
  return plVar35;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar30 = piVar30 + 4;
    if (uVar26 == 0) break;
LAB_03d41300:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03d41334;
    }
  }
LAB_03d41318:
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d41334:
  (*(code *)*puVar13)(plVar35,puVar13[1]);
LAB_03d41340:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar42 = func_0x02f09514();
  lVar25 = auVar42._8_8_;
  plVar33 = auVar42._0_8_;
  *(undefined8 *)(lVar24 + -0x30) = 0x3d41358;
  *(long *)(lVar24 + -0x28) = lVar24;
  *(long *)(lVar24 + -0x20) = lVar19;
  *(long **)(lVar24 + -0x18) = plVar36;
  *(ulong *)(lVar24 + -0x10) = uVar32;
  *(long *)(lVar24 + -8) = auVar49._8_8_;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
  }
  *(undefined8 *)(lVar24 + -0x50) = 0;
  *(undefined8 *)(lVar24 + -0x48) = 0;
  *(undefined8 *)(lVar24 + -0x40) = 0;
  if (plVar33 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    goto LAB_03d41710;
  }
  lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  plVar36 = (long *)func_0x03280b90(plVar33,lVar19);
  if (plVar36 == (long *)0x0) {
    lVar19 = **(long **)(lVar25 + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar22 = *plVar33;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4153c;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d4153c:
    plVar36 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
    if (plVar36 == (long *)0x0) goto LAB_03d41718;
    lVar19 = *plVar36;
    uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d415a4;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d415a4:
    plVar40 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
    if (((ulong)plVar40 & 1) == 0) {
      plVar33 = (long *)0x0;
      iVar37 = 6;
      iVar5 = 6;
      goto joined_r0x03d41614;
    }
    lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 0x38);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar22 = *plVar36;
    uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar32 != 0) {
      piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar19) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41628;
        }
        uVar32 = uVar32 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar32 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41628:
    plVar40 = (long *)(*(code *)*puVar13)(lVar24 + -0x68,plVar36,puVar13[1]);
    plVar33 = (long *)0x0;
    iVar5 = 8;
    *(undefined8 *)(lVar24 + -0x48) = *(undefined8 *)(lVar24 + -0x60);
    *(undefined8 *)(lVar24 + -0x50) = *(undefined8 *)(lVar24 + -0x68);
    *(undefined8 *)(lVar24 + -0x40) = *(undefined8 *)(lVar24 + -0x58);
    iVar37 = 8;
    if (plVar36 == (long *)0x0) goto LAB_03d416b4;
    goto LAB_03d41654;
  }
  lVar19 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  lVar22 = *plVar36;
  uVar32 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar32 != 0) {
    piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar19) {
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d41498;
      }
      uVar32 = uVar32 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar32 != 0);
  }
  uVar29 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d41498:
  iVar5 = (*(code *)*puVar13)(plVar36,puVar13[1]);
  if (iVar5 < 1) {
    do {
      uVar8 = func_0x05ac75f4(0);
LAB_03d41710:
      func_0x03280b7c(uVar8,lVar25);
LAB_03d41718:
      func_0x03280cac();
      do {
        auVar50 = func_0x03280ca4(plVar33);
        plVar33 = auVar50._0_8_;
        if (auVar50._8_4_ != 1) {
          if (plVar36 == (long *)0x0) goto LAB_03d417c4;
          lVar19 = *plVar36;
          uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar32 == 0) goto LAB_03d4179c;
          piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_03d41784;
        }
        puVar13 = (undefined8 *)func_0x072ce910(plVar33);
        plVar33 = (long *)*puVar13;
        plVar40 = (long *)func_0x072ce920();
        iVar37 = 0;
        iVar5 = 0;
joined_r0x03d41614:
        if (plVar36 != (long *)0x0) {
LAB_03d41654:
          iVar5 = iVar37;
          lVar19 = *plVar36;
          uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar32 != 0) {
            piVar30 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_03d416a8;
              }
              uVar32 = uVar32 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar32 != 0);
          }
          uVar29 = 0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d416a8:
          plVar40 = (long *)(*(code *)*puVar13)(plVar36,puVar13[1]);
        }
LAB_03d416b4:
      } while (plVar33 != (long *)0x0);
      if (iVar5 == 8) {
        uVar12 = *(undefined8 *)(lVar24 + -0x40);
        uVar34 = *(undefined8 *)(lVar24 + -0x48);
        uVar8 = *(undefined8 *)(lVar24 + -0x50);
        goto LAB_03d416e0;
      }
    } while ((iVar5 == 6) || (iVar5 == 0));
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar31 = *plVar36;
    uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d41510;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar36,lVar11,0);
LAB_03d41510:
    plVar40 = (long *)(*(code *)*puVar13)(lVar24 + -0x68,plVar36,0,puVar13[1]);
    uVar12 = *(undefined8 *)(lVar24 + -0x58);
    uVar34 = *(undefined8 *)(lVar24 + -0x60);
    uVar8 = *(undefined8 *)(lVar24 + -0x68);
LAB_03d416e0:
    extraout_x8[2] = uVar12;
    extraout_x8[1] = uVar34;
    *extraout_x8 = uVar8;
  }
  return plVar40;
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar30 = piVar30 + 4;
    if (uVar29 == 0) break;
LAB_03f37d1c:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03f37d50;
    }
  }
LAB_03f37d34:
  puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_03f37d50:
  (*(code *)*puVar13)(param_2,puVar13[1]);
LAB_03f37d5c:
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar31 = auVar49._8_8_;
  *(undefined8 *)(lVar11 + -0x50) = 0x3f37d74;
  *(undefined **)(lVar11 + -0x40) = puVar38;
  *(long **)(lVar11 + -0x38) = plVar36;
  *(long **)(lVar11 + -0x30) = plVar35;
  *(long **)(lVar11 + -0x28) = param_1;
  *(long **)(lVar11 + -0x20) = param_2;
  *(long **)(lVar11 + -0x18) = plVar33;
  *(undefined8 *)(lVar11 + -0x10) = uVar12;
  *(undefined8 *)(lVar11 + -8) = 0;
  lVar19 = *(long *)(lVar31 + 0x38);
  if (lVar19 == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777bd48);
    func_0x03280a18(PTR_DAT_0777bd50);
    lVar19 = *(long *)(lVar31 + 0x38);
    if (lVar19 == 0) {
      func_0x03256878(lVar31);
      lVar19 = *(long *)(lVar31 + 0x38);
    }
  }
  uVar29 = func_0x03ce7fe8(auVar49._0_8_,*(undefined8 *)(lVar19 + 8));
  plVar14 = plVar36;
  puVar39 = puVar38;
  if ((uVar29 & 1) == 0) {
    plVar15 = (long *)func_0x03d5ffd0(auVar49._0_8_,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x10)
                                     );
    lVar19 = *(long *)(*(long *)(lVar31 + 0x38) + 0x30);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(lVar31 + 0x38) + 0x30);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(lVar31 + 0x38) + 0x30);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar24 = *(long *)(lVar31 + 0x38);
      lVar19 = *(long *)(lVar24 + 0x30);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
        lVar24 = *(long *)(lVar31 + 0x38);
      }
      lVar24 = *(long *)(lVar24 + 0x28);
      uVar12 = **(undefined8 **)(lVar19 + 0xb8);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      lVar19 = func_0x03280ca0(lVar24);
      pplVar21 = *(long ***)(*(long *)(lVar31 + 0x38) + 0x40);
      func_0x05356664(lVar19,uVar12,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x38));
      lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x30);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar24 + 0xb8) + 8) = lVar19;
      lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x30);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar24 + 0xb8) + 8,lVar19);
    }
    uVar29 = func_0x03d598d0(plVar15,lVar19,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 0x48));
    param_2 = (long *)PTR_DAT_0777bd50;
    plVar33 = (long *)(uVar29 & 0xffffffff);
    lVar19 = *(long *)PTR_DAT_0777bd50;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
      lVar19 = *param_2;
    }
    plVar16 = (long *)**(long **)(lVar19 + 0xb8);
    if (plVar16 != (long *)0x0) {
      lVar19 = *(long *)(*plVar16 + 0x1b0);
      uVar4 = (**(code **)(*plVar16 + 0x1a8))(plVar16,plVar33);
      if (plVar15 != (long *)0x0) {
        param_2 = (long *)(ulong)uVar4;
        lVar24 = **(long **)(lVar31 + 0x38);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
        }
        lVar25 = *plVar15;
        uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar29 != 0) {
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar24) {
              puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_03f37fc0;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        lVar19 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03f37fc0:
        plVar33 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
        puVar39 = PTR_DAT_0777bd48;
        plVar14 = (long *)PTR_DAT_0774e8e0;
        if (plVar33 != (long *)0x0) {
          plVar35 = (long *)0x0;
          param_2 = (long *)(ulong)(uVar4 + 1);
          do {
            lVar24 = *plVar33;
            uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *plVar14) {
                  puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_03f38038;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f38038:
            uVar29 = (*(code *)*puVar13)(plVar33,puVar13[1]);
            if ((uVar29 & 1) == 0) {
              plVar16 = (long *)0x0;
              plVar35 = (long *)0x9;
              goto joined_r0x03f38140;
            }
            lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x58);
            if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
              lVar24 = func_0x0325681c(lVar24);
            }
            lVar25 = *plVar33;
            uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == lVar24) {
                  puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_03f380ac;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f380ac:
            plVar16 = (long *)(*(code *)*puVar13)(plVar33,puVar13[1]);
            if (plVar16 == (long *)0x0) {
              func_0x03280cac();
              goto LAB_03f381f8;
            }
            lVar24 = *plVar16;
            uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar29 != 0) {
              piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)puVar39) {
                  puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_03f3810c;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            lVar19 = 0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar16);
LAB_03f3810c:
            iVar5 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            uVar1 = iVar5 + (int)plVar35;
            plVar35 = (long *)(ulong)uVar1;
          } while ((int)uVar1 < (int)(uVar4 + 1));
          plVar35 = (long *)0x8;
joined_r0x03f38140:
          param_2 = (long *)0x0;
          plVar36 = plVar14;
          puVar38 = puVar39;
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
  func_0x03280b7c(plVar15,lVar31);
  plVar36 = plVar14;
  puVar38 = puVar39;
LAB_03f38238:
  func_0x03280cac();
  do {
    auVar50 = func_0x03280ca4(param_2);
    uVar12 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (plVar33 == (long *)0x0) goto LAB_03f382f0;
      lVar24 = *plVar33;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 == 0) goto LAB_03f382c8;
      piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      goto LAB_03f382b0;
    }
    param_2 = (long *)func_0x072ce910(uVar12);
    param_2 = (long *)*param_2;
    func_0x072ce920();
    plVar35 = (long *)0x0;
    plVar16 = (long *)0x0;
joined_r0x03f38140:
    if (plVar33 != (long *)0x0) {
      lVar24 = *plVar33;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f38198;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      lVar19 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03f38198:
      (*(code *)*puVar13)(plVar33,puVar13[1]);
    }
  } while (param_2 != (long *)0x0);
  if (((int)plVar35 != 9) && ((int)plVar35 != 0)) {
    return plVar16;
  }
  plVar35 = *(long **)(lVar11 + -0x10);
  lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 0x78);
  uVar12 = *(undefined8 *)(lVar11 + -0x30);
  uVar34 = *(undefined8 *)(lVar11 + -0x28);
  uVar8 = *(undefined8 *)(lVar11 + -0x40);
  uVar2 = *(undefined8 *)(lVar11 + -0x38);
  *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(lVar11 + -0x50);
  *(undefined8 *)(lVar11 + -0x28) = uVar34;
  *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar11 + -0x20);
  *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
  *(long **)(lVar11 + -0x10) = plVar35;
  *(undefined8 *)(lVar11 + -8) = *(undefined8 *)(lVar11 + -8);
  if (*(long *)(lVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
  }
  if (plVar15 == (long *)0x0) {
    uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar7 = func_0x05ac7464(uVar7,0);
    goto LAB_03d40d74;
  }
  lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
    lVar24 = func_0x0325681c(lVar24);
  }
  plVar35 = (long *)func_0x03280b90(plVar15,lVar24);
  if (plVar35 == (long *)0x0) {
    lVar24 = **(long **)(lVar31 + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar25 = *plVar15;
    uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar24) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d40bc4;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar15);
LAB_03d40bc4:
    plVar35 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
    if (plVar35 == (long *)0x0) goto LAB_03d40d7c;
    lVar24 = *plVar35;
    uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d40c2c;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40c2c:
    uVar29 = (*(code *)*puVar13)(plVar35,puVar13[1]);
    if ((uVar29 & 1) == 0) {
      plVar15 = (long *)0x0;
      uVar34 = 6;
      goto joined_r0x03d40ca0;
    }
    lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x38);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar25 = *plVar35;
    uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar24) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d40cb4;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    lVar19 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40cb4:
    plVar33 = (long *)(*(code *)*puVar13)(plVar35,puVar13[1]);
    plVar15 = (long *)0x0;
    uVar34 = 8;
    if (plVar35 == (long *)0x0) goto LAB_03d40d30;
    goto LAB_03d40cd0;
  }
  lVar24 = *(long *)(*(long *)(lVar31 + 0x38) + 0x10);
  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
    lVar24 = func_0x0325681c(lVar24);
  }
  lVar25 = *plVar35;
  uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar29 != 0) {
    piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar24) {
        puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d40b24;
      }
      uVar29 = uVar29 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar29 != 0);
  }
  lVar19 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40b24:
  iVar5 = (*(code *)*puVar13)(plVar35,puVar13[1]);
  if (iVar5 < 1) {
    do {
      uVar7 = func_0x05ac75f4(0);
LAB_03d40d74:
      func_0x03280b7c(uVar7,lVar31);
LAB_03d40d7c:
      func_0x03280cac();
      do {
        auVar50 = func_0x03280ca4(plVar15);
        uVar7 = auVar50._0_8_;
        if (auVar50._8_4_ != 1) {
          if (plVar35 == (long *)0x0) goto LAB_03d40e2c;
          lVar24 = *plVar35;
          uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar29 == 0) goto LAB_03d40e04;
          piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          goto LAB_03d40dec;
        }
        puVar13 = (undefined8 *)func_0x072ce910(uVar7);
        plVar15 = (long *)*puVar13;
        func_0x072ce920();
        uVar34 = 0;
joined_r0x03d40ca0:
        plVar33 = (long *)0x0;
        if (plVar35 != (long *)0x0) {
LAB_03d40cd0:
          lVar24 = *plVar35;
          uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar29 != 0) {
            piVar30 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar13 = (undefined8 *)(lVar24 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_03d40d24;
              }
              uVar29 = uVar29 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar29 != 0);
          }
          lVar19 = 0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03d40d24:
          (*(code *)*puVar13)(plVar35,puVar13[1]);
        }
LAB_03d40d30:
      } while (plVar15 != (long *)0x0);
      if (((int)uVar34 != 6) && ((int)uVar34 != 0)) {
        return plVar33;
      }
    } while( true );
  }
  lVar11 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  lVar31 = *plVar35;
  uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar29 != 0) {
    piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar30 + -2) == lVar11) {
        puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
        goto LAB_03d40b9c;
      }
      uVar29 = uVar29 - 1;
      piVar30 = piVar30 + 4;
    } while (uVar29 != 0);
  }
  puVar13 = (undefined8 *)func_0x03256b10(plVar35,lVar11,0);
LAB_03d40b9c:
                    /* WARNING: Could not recover jumptable at 0x03d40bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar35 = (long *)(*(code *)*puVar13)(plVar35,0,puVar13[1]);
  return plVar35;
  while( true ) {
    uVar29 = uVar29 - 1;
    piVar30 = piVar30 + 4;
    if (uVar29 == 0) break;
LAB_03f38930:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_03f38964;
    }
  }
LAB_03f38948:
  puVar18 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar35);
LAB_03f38964:
  (*(code *)*puVar9)(plVar35,puVar9[1]);
LAB_03f38970:
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined8 *)(lVar41 + -0x20) = 0x3f38988;
  *(undefined8 **)(lVar41 + -0x18) = puVar13;
  *(undefined **)(lVar41 + -0x10) = puVar38;
  *(long *)(lVar41 + -8) = lVar19;
  puVar13 = puVar18;
  if ((bRam0000000007e17df6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0777bd60);
    func_0x03280a18(PTR_DAT_0777bd68);
    func_0x03280a18(PTR_DAT_0776a998);
    bRam0000000007e17df6 = 1;
  }
  puVar38 = PTR_DAT_077730b8;
  if (extraout_x1 == (long *)0x0) {
LAB_03f38a4c:
    *puVar18 = 0;
    func_0x032809c4(puVar18,0);
    plVar35 = (long *)0x0;
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
        lVar11 = *(long *)puVar38;
      }
      plVar35 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x150);
      if (plVar35 == (long *)0x0) goto LAB_03f38bec;
      lVar11 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_07779818) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f38b7c;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar35,*(long *)PTR_DAT_07779818,0);
LAB_03f38b7c:
      uVar12 = (*(code *)*puVar13)(plVar35,puVar13[1]);
      plVar35 = (long *)extraout_x1[0xe];
      uVar8 = *(undefined8 *)PTR_DAT_0776a998;
      if (plVar35 == (long *)0x0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(*plVar35 + 0x1c8))(plVar35,*(undefined8 *)(*plVar35 + 0x1d0));
      }
    }
    else {
      lVar11 = *(long *)PTR_DAT_077730b8;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar38;
      }
      plVar35 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x150);
      if (plVar35 == (long *)0x0) {
LAB_03f38bec:
        auVar49 = func_0x03280cac();
        lVar11 = auVar49._8_8_;
        plVar35 = auVar49._0_8_;
        *(undefined8 *)(lVar41 + -0x40) = 0x3f38bf0;
        *(undefined8 *)(lVar41 + -0x38) = 0;
        *(long **)(lVar41 + -0x30) = extraout_x1;
        *(undefined8 **)(lVar41 + -0x28) = puVar18;
        if ((*(long *)(lVar11 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar11 + 0x38) == 0)) {
          func_0x03256878(lVar11);
        }
        if ((plVar35 != (long *)0x0) && (lVar31 = plVar35[4], lVar31 != 0)) {
          *(undefined1 *)(lVar31 + 0x18) = 1;
          uVar12 = **(undefined8 **)(lVar11 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar12 = func_0x057a51c4(uVar12,0);
          *(undefined8 *)(lVar31 + 0x20) = uVar12;
          func_0x032809c4((undefined8 *)(lVar31 + 0x20),uVar12);
          return plVar35;
        }
        auVar49 = func_0x03280cac();
        lVar31 = auVar49._8_8_;
        plVar33 = auVar49._0_8_;
        *(undefined8 *)(lVar41 + -0x60) = 0x3f38c88;
        *(undefined8 *)(lVar41 + -0x58) = 0;
        *(long *)(lVar41 + -0x50) = lVar11;
        *(long **)(lVar41 + -0x48) = plVar35;
        if ((*(long *)(lVar31 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar31 + 0x38) == 0)) {
          func_0x03256878(lVar31);
        }
        lVar11 = plVar33[4];
        if (lVar11 != 0) {
          *(undefined1 *)(lVar11 + 0x18) = 1;
          uVar12 = **(undefined8 **)(lVar31 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar12 = func_0x057a51c4(uVar12,0);
          *(undefined8 *)(lVar11 + 0x20) = uVar12;
          func_0x032809c4((undefined8 *)(lVar11 + 0x20),uVar12);
          return plVar33;
        }
        auVar49 = func_0x03280cac();
        *(undefined8 *)(lVar41 + -0x80) = 0x3f38d1c;
        *(long *)(lVar41 + -0x78) = lVar31;
        *(undefined8 *)(lVar41 + -0x70) = 0;
        *(long **)(lVar41 + -0x68) = plVar33;
        lVar11 = puVar13[7];
        if (lVar11 == 0) {
          func_0x03256878(puVar13);
          lVar11 = puVar13[7];
        }
        uVar6 = func_0x06d744bc(auVar49._8_8_,*(undefined8 *)(lVar11 + 0x10));
        iVar5 = func_0x03f3934c(auVar49._0_8_,uVar6,auVar49._8_8_,*(undefined8 *)(puVar13[7] + 0x18)
                               );
        return (long *)(ulong)(iVar5 != -1);
      }
      lVar11 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_07779818) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03f38b50;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar35,*(long *)PTR_DAT_07779818,0);
LAB_03f38b50:
      uVar12 = (*(code *)*puVar13)(plVar35,puVar13[1]);
      lVar11 = extraout_x1[2];
      uVar8 = *(undefined8 *)PTR_DAT_0776a998;
    }
    uVar12 = func_0x055f7538(uVar12,uVar8,lVar11,0);
    *puVar18 = uVar12;
    func_0x032809c4(puVar18,uVar12);
    plVar35 = (long *)0x1;
  }
  return plVar35;
LAB_03d430c0:
  if (plVar33 != (long *)0x0) {
    lVar25 = *plVar33;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d43118;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    uVar29 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d43118:
    (*(code *)*puVar13)(plVar33,puVar13[1]);
  }
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar49 = func_0x02f09514();
  lVar25 = auVar49._8_8_;
  plVar36 = auVar49._0_8_;
  *(undefined8 *)(lVar41 + -0x30) = 0x3d4313c;
  *(long *)(lVar41 + -0x20) = lVar31;
  *(ulong *)(lVar41 + -0x18) = uVar32;
  *(long **)(lVar41 + -0x10) = plVar35;
  *(long ***)(lVar41 + -8) = pplVar21;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
  }
  if (plVar36 == (long *)0x0) {
    uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,lVar25);
LAB_03d434bc:
    func_0x03280cac();
    do {
      auVar50 = func_0x03280ca4(lVar25);
      uVar8 = auVar50._0_8_;
      if (auVar50._8_4_ != 1) {
        if (pplVar21 == (long **)0x0) goto LAB_03d4356c;
        plVar35 = *pplVar21;
        uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
        if (uVar32 == 0) goto LAB_03d43544;
        piVar30 = (int *)(plVar35[0x16] + 8);
        goto LAB_03d4352c;
      }
      plVar35 = (long *)func_0x072ce910(uVar8);
      lVar25 = *plVar35;
      func_0x072ce920();
      lVar31 = 0;
joined_r0x03d433e8:
      uVar4 = 0;
      if (pplVar21 != (long **)0x0) {
LAB_03d43418:
        plVar35 = *pplVar21;
        uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(plVar35[0x16] + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
              plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
              goto LAB_03d4346c;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        uVar29 = 0;
        plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d4346c:
        (*(code *)*plVar35)(pplVar21,plVar35[1]);
      }
LAB_03d43478:
    } while (lVar25 != 0);
    if (((int)lVar31 != 6) && ((int)lVar31 != 0)) goto LAB_03d4348c;
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    plVar35 = (long *)func_0x03280b90(plVar36,lVar22);
    if (plVar35 == (long *)0x0) {
      lVar22 = **(long **)(lVar25 + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar23 = *plVar36;
      uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar32 != 0) {
        piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d4330c;
          }
          uVar32 = uVar32 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar32 != 0);
      }
      uVar29 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d4330c:
      pplVar21 = (long **)(*(code *)*puVar13)(plVar36,puVar13[1]);
      if (pplVar21 != (long **)0x0) {
        plVar35 = *pplVar21;
        uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(plVar35[0x16] + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8e0) {
              plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
              goto LAB_03d43374;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        uVar29 = 0;
        plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d43374:
        uVar32 = (*(code *)*plVar35)(pplVar21,plVar35[1]);
        if ((uVar32 & 1) == 0) {
          lVar25 = 0;
          lVar31 = 6;
          goto joined_r0x03d433e8;
        }
        lVar31 = *(long *)(*(long *)(lVar25 + 0x38) + 0x38);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        plVar35 = *pplVar21;
        uVar32 = (ulong)*(ushort *)((long)plVar35 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(plVar35[0x16] + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar31) {
              plVar35 = plVar35 + (long)*piVar30 * 2 + 0x27;
              goto LAB_03d433fc;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        uVar29 = 0;
        plVar35 = (long *)func_0x03256b10(pplVar21);
LAB_03d433fc:
        uVar4 = (*(code *)*plVar35)(pplVar21,plVar35[1]);
        lVar25 = 0;
        lVar31 = 8;
        if (pplVar21 == (long **)0x0) goto LAB_03d43478;
        goto LAB_03d43418;
      }
      goto LAB_03d434bc;
    }
    lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar31 = *plVar35;
    uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar29 != 0) {
      piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_03d4326c;
        }
        uVar29 = uVar29 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar35,lVar11,0);
LAB_03d4326c:
    iVar5 = (*(code *)*puVar13)(plVar35,puVar13[1]);
    if (0 < iVar5) {
      lVar11 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar31 = *plVar35;
      uVar29 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar29 != 0) {
        piVar30 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar31 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_03d432e4;
          }
          uVar29 = uVar29 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar29 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar35,lVar11,0);
LAB_03d432e4:
                    /* WARNING: Could not recover jumptable at 0x03d432fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar35 = (long *)(*(code *)*puVar13)(plVar35,0,puVar13[1]);
      return plVar35;
    }
  }
  uVar4 = 0;
LAB_03d4348c:
  return (long *)(ulong)uVar4;
}


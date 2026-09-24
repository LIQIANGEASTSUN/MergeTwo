/* Ghidra 12.1.2 native pseudocode; RVA 0x6A873A8; Merger.MergeBoard.Logic.CombineValidators.ItemConsumableCombinerValidator.CanConsume; status ok */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
Merger_MergeBoard_Logic_CombineValidators_ItemConsumableCombinerValidator__CanConsume
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *******pppppppuVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 uVar8;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  int iVar9;
  int iVar10;
  ulong *puVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long **pplVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *extraout_x8;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  int *piVar39;
  long **pplVar40;
  ulong uVar41;
  long *plVar42;
  undefined1 *puVar43;
  undefined *puVar44;
  long *plVar45;
  long *plVar46;
  undefined1 *puVar47;
  long *plVar48;
  undefined *unaff_x28;
  undefined8 uVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uStack_430;
  long *aplStack_428 [4];
  long lStack_408;
  undefined1 auStack_400 [8];
  long alStack_3f8 [11];
  undefined8 uStack_3a0;
  long *plStack_398;
  char acStack_38c [4];
  long lStack_388;
  undefined1 auStack_380 [8];
  long alStack_378 [83];
  long *plStack_e0;
  long lStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  char cStack_ac;
  long lStack_a8;
  
  puVar19 = PTR_DAT_0776aeb0;
  if ((bRam0000000007e2a7a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776aeb0);
    bRam0000000007e2a7a5 = 1;
  }
  plVar23 = (long *)func_0x06b8751c(param_2);
  lVar27 = *(long *)puVar19;
  lVar29 = *(long *)(lVar27 + 0x38);
  if (lVar29 == 0) {
    func_0x03256878(lVar27);
    lVar29 = *(long *)(lVar27 + 0x38);
  }
  lVar29 = *(long *)(lVar29 + 8);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  plVar11 = (long *)func_0x03280b90(plVar23,lVar29);
  if (plVar11 != (long *)0x0) {
    lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          puVar12 = (undefined8 *)(lVar29 + (long)(*piVar39 + 4) * 0x10 + 0x138);
          goto LAB_03d37ca0;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,4);
LAB_03d37ca0:
                    /* WARNING: Could not recover jumptable at 0x03d37cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,param_3,puVar12[1]);
    return puVar12;
  }
  pplVar28 = *(long ***)(*(long *)(lVar27 + 0x38) + 0x20);
  plVar11 = (long *)0x0;
  pplVar40 = pplVar28;
  if (pplVar28[7] == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pplVar28[7] == (long *)0x0) {
      func_0x03256878(pplVar28);
    }
  }
  plVar13 = (long *)func_0x039574b0(pplVar28[7][1]);
  plVar14 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
LAB_03d3903c:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,pplVar28);
  }
  else {
    lVar27 = pplVar28[7][4];
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar29 = *plVar23;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d38e24;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar11 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d38e24:
    plVar14 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar14 != (long *)0x0) {
      do {
        lVar27 = *plVar14;
        uVar35 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar12 = (undefined8 *)(lVar27 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d38e8c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03d38e8c:
        uVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if ((uVar7 & 1) == 0) {
          pplVar28 = (long **)0x0;
          goto LAB_03d38fa4;
        }
        lVar27 = pplVar28[7][6];
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar29 = *plVar14;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar27) {
              puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d38f04;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03d38f04:
        uVar15 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if (plVar13 == (long *)0x0) {
          func_0x03280cac();
          goto LAB_03d3903c;
        }
        lVar27 = *pplVar28[7];
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar29 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar27) {
              puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d38f7c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar13,lVar27,0);
LAB_03d38f7c:
        pplVar40 = (long **)puVar12[1];
        plVar11 = param_3;
        uVar35 = (*(code *)*puVar12)(plVar13,uVar15);
        if ((uVar35 & 1) != 0) {
          pplVar28 = (long **)0x0;
          goto joined_r0x03d38f98;
        }
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(pplVar28);
    if (auVar50._8_4_ != 1) break;
    plVar23 = (long *)func_0x072ce910(auVar50._0_8_);
    pplVar28 = (long **)*plVar23;
    func_0x072ce920();
LAB_03d38fa4:
    uVar7 = 0;
joined_r0x03d38f98:
    if (plVar14 != (long *)0x0) {
      lVar27 = *plVar14;
      uVar35 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar27 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d39000;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar11 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03d39000:
      (*(code *)*puVar12)(plVar14,puVar12[1]);
    }
    if (pplVar28 == (long **)0x0) {
      return (undefined8 *)(ulong)(uVar7 & 1);
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar27 = *plVar14;
    uVar35 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar27 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d390f8;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar11 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03d390f8:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  pppppppuStack_d0 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  plVar23 = (long *)tpidr_el0;
  lStack_a8 = plVar23[5];
  plVar14 = pplVar40[7];
  pplVar28 = pplVar40;
  pppppppuStack_c8 = pppppppuStack_d0;
  if (plVar14 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar14 = pplVar40[7];
    if (plVar14 == (long *)0x0) {
      func_0x03256878(pplVar40);
      plVar14 = pplVar40[7];
    }
  }
  plVar45 = (long *)(ulong)*(uint *)(plVar14[8] + 0xfc);
  uVar35 = (ulong)((long)plVar45 + 0xfU) & 0x1fffffff0;
  plVar46 = (long *)((long)&plStack_e0 - uVar35);
  plVar42 = (long *)((long)plVar46 - uVar35);
  plVar48 = (long *)((long)plVar42 - uVar35);
  lVar27 = (long)plVar48 - uVar35;
  plVar26 = plVar45;
  lStack_d8 = lVar27;
  func_0x072ce9a0(lVar27,0);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(**(code **)plVar14[1])();
  }
  plVar16 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d39504:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,pplVar40);
  }
  else {
    lVar29 = pplVar40[7][4];
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar30 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar29) {
          puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d39258;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d39258:
    plStack_e0 = plVar23;
    plVar16 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    if (plVar16 != (long *)0x0) {
      do {
        lVar29 = *plVar16;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8e0) {
              puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d392c4;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar16);
LAB_03d392c4:
        uVar35 = (*(code *)*puVar12)(plVar16,puVar12[1]);
        unaff_x28 = (undefined *)(uVar35 & 0xffffffff);
        if ((uVar35 & 1) == 0) {
          pplVar40 = (long **)0x0;
          goto LAB_03d3945c;
        }
        lVar29 = pplVar40[7][6];
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        lVar30 = *plVar16;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar29) {
              lVar29 = lVar30 + (long)*piVar39 * 0x10 + 0x138;
              goto LAB_03d3933c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        lVar29 = func_0x03256b10(plVar16,lVar29,0);
LAB_03d3933c:
        lVar29 = *(long *)(lVar29 + 8);
        pplVar28 = &plStack_c0;
        plStack_c0 = plVar46;
        (**(code **)(lVar29 + 0x10))(*(undefined8 *)(lVar29 + 8),lVar29,plVar16,pplVar28,plVar46);
        lVar29 = lStack_d8;
        func_0x072ce970(lStack_d8,plVar46,plVar45);
        func_0x072ce970(plVar42,lVar29,plVar45);
        plVar14 = pplVar40[7];
        pppppppuVar1 = pppppppuStack_d0;
        if (-1 < *(int *)(plVar14[8] + 0x28)) {
          pppppppuVar1 = &pppppppuStack_c8;
        }
        plVar26 = plVar45;
        func_0x072ce970(plVar48,pppppppuVar1);
        if (plVar11 == (long *)0x0) {
          func_0x03280cac();
          goto LAB_03d39504;
        }
        lVar29 = *plVar14;
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
          plVar14 = pplVar40[7];
        }
        plVar13 = plVar14 + 8;
        plVar14 = plVar42;
        plVar23 = plVar48;
        if (-1 < *(int *)(*plVar13 + 0x28)) {
          plVar14 = (long *)*plVar42;
          plVar23 = (long *)*plVar48;
        }
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar29) {
              lVar29 = lVar30 + (long)*piVar39 * 0x10 + 0x138;
              goto LAB_03d39428;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        lVar29 = func_0x03256b10(plVar11,lVar29,0);
LAB_03d39428:
        pplVar28 = &plStack_c0;
        plVar26 = plVar11;
        plStack_c0 = plVar14;
        plStack_b8 = plVar23;
        (**(code **)(*(long *)(lVar29 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar29 + 8) + 8));
        if (cStack_ac != '\0') {
          pplVar40 = (long **)0x0;
          goto joined_r0x03d39450;
        }
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03d39524:
  func_0x03280ca4(pplVar40);
  do {
    auVar50 = func_0x072ce990();
    uVar15 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (plVar16 == (long *)0x0) goto LAB_03d395d0;
      lVar29 = *plVar16;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 == 0) goto LAB_03d395a8;
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      goto LAB_03d39590;
    }
    plVar13 = (long *)func_0x072ce910(uVar15);
    pplVar40 = (long **)*plVar13;
    func_0x072ce920();
LAB_03d3945c:
    unaff_x28 = (undefined *)0x0;
joined_r0x03d39450:
    if (plVar16 != (long *)0x0) {
      lVar29 = *plVar16;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d394b8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar16);
LAB_03d394b8:
      (*(code *)*puVar12)(plVar16,puVar12[1]);
    }
    if (pplVar40 != (long **)0x0) goto LAB_03d39524;
    if (plStack_e0[5] == lStack_a8) {
      return (undefined8 *)(ulong)((uint)unaff_x28 & 1);
    }
  } while( true );
LAB_03d398c0:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
LAB_03d398cc:
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d398e8;
LAB_03d39c8c:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d39c98;
LAB_03d3a058:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3a064;
LAB_03d3a424:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3a430;
LAB_03d3a7f0:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3a7fc;
LAB_03d3abbc:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3abc8;
LAB_03d3af88:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3af94;
LAB_03d3b354:
  uVar15 = func_0x03280cbc();
  func_0x03280b7c(uVar15,lVar29);
  goto LAB_03d3b360;
  while( true ) {
    uVar37 = uVar37 - 1;
    piVar39 = piVar39 + 4;
    if (uVar37 == 0) break;
LAB_03d3c244:
    if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar18 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
      goto LAB_03d3c278;
    }
  }
LAB_03d3c25c:
  uVar36 = 0;
  puVar18 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3c278:
  (*(code *)*puVar18)(plVar13,puVar18[1]);
LAB_03d3c284:
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar52 = func_0x02f09514();
  *(undefined8 *)(puVar47 + -0x20) = 0x3d3c29c;
  *(undefined8 *)(puVar47 + -0x18) = uVar15;
  *(undefined8 *)(puVar47 + -0x10) = 0;
  *(long **)(puVar47 + -8) = plVar13;
  uVar41 = auVar52._8_8_ & 0xffffffff;
  auVar51._8_8_ = uVar41;
  auVar51._0_8_ = auVar52._0_8_;
  uVar37 = uVar36;
  if (*(long *)(uVar36 + 0x38) == 0) {
    func_0x03256878(uVar36);
  }
  if (auVar52._0_8_ == 0) {
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar52 = func_0x03280b7c(uVar15,uVar36);
    puVar43 = puVar47 + -0x60;
    *(long *)(puVar47 + -0x60) = lVar27 + -0x2a0;
    *(undefined8 *)(puVar47 + -0x58) = 0x3d3c2fc;
    *(long *)(puVar47 + -0x50) = lVar30;
    *(ulong *)(puVar47 + -0x48) = uVar35;
    *(undefined8 *)(puVar47 + -0x40) = 0x7fffffff;
    *(undefined8 *)(puVar47 + -0x38) = 0;
    *(ulong *)(puVar47 + -0x30) = uVar41;
    *(ulong *)(puVar47 + -0x28) = uVar36;
    uVar35 = tpidr_el0;
    *(undefined8 *)(puVar47 + -0x68) = *(undefined8 *)(uVar35 + 0x28);
    *(undefined1 **)(puVar47 + -0x88) = auVar52._8_8_;
    lVar30 = *(long *)(uVar37 + 0x38);
    if (lVar30 == 0) {
      func_0x03256878(uVar37);
      lVar30 = *(long *)(uVar37 + 0x38);
    }
    uVar36 = (ulong)*(uint *)(*(long *)(lVar30 + 8) + 0xfc);
    puVar18 = (undefined8 *)(puVar47 + (-0x90 - (uVar36 + 0xf & 0x1fffffff0)));
    puVar17 = puVar18;
    if (auVar52._0_8_ == 0) {
      uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
      uVar15 = func_0x05ac7464(uVar15,0);
      puVar24 = (undefined8 *)func_0x03280b7c(uVar15,uVar37);
    }
    else {
      puVar2 = auVar52._8_8_;
      if (-1 < *(int *)(*(long *)(lVar30 + 8) + 0x28)) {
        puVar2 = puVar47 + -0x88;
      }
      func_0x072ce970(puVar18,puVar2);
      puVar24 = *(undefined8 **)(lVar30 + 0x10);
      uVar15 = *puVar24;
      if (-1 < *(int *)(*(long *)(lVar30 + 8) + 0x28)) {
        puVar17 = (undefined8 *)*puVar18;
      }
      *(long *)(puVar47 + -0x80) = auVar52._0_8_;
      *(undefined8 **)(puVar47 + -0x78) = puVar17;
      pplVar28 = (long **)(puVar47 + -0x80);
      uVar36 = 0;
      (*(code *)puVar24[2])(uVar15);
      puVar24 = *(undefined8 **)(puVar47 + -0x70);
      if (*(long *)(uVar35 + 0x28) == *(long *)(puVar47 + -0x68)) {
        return puVar24;
      }
    }
    uVar15 = 0x3d3c3f4;
    auVar51 = func_0x072ce990(puVar24);
  }
  else {
    uVar37 = *(ulong *)(puVar47 + -0x10);
    uVar36 = *(ulong *)(*(long *)(uVar36 + 0x38) + 0x10);
    uVar15 = *(undefined8 *)(puVar47 + -0x20);
    auVar52._8_8_ = *(undefined8 *)(puVar47 + -0x18);
    auVar52._0_8_ = *(undefined8 *)(puVar47 + -8);
    puVar18 = (undefined8 *)puVar47;
  }
  uVar22 = auVar51._0_8_;
  puVar18[-4] = uVar15;
  puVar18[-3] = auVar52._8_8_;
  puVar18[-2] = uVar37;
  puVar18[-1] = auVar52._0_8_;
  plVar23 = *(long **)(uVar36 + 0x38);
  if (plVar23 == (long *)0x0) {
    func_0x03256878(uVar36);
    plVar23 = *(long **)(uVar36 + 0x38);
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar24 = (undefined8 *)func_0x03280ca0();
  plVar23 = *(long **)(*(long *)(uVar36 + 0x38) + 8);
  func_0x04fd61e4(puVar24,0xfffffffe);
  if (puVar24 != (undefined8 *)0x0) {
    puVar24[5] = uVar22;
    func_0x032809c4(puVar24 + 5,uVar22);
    *(int *)((long)puVar24 + 0x34) = auVar51._8_4_;
    return puVar24;
  }
  auVar52 = func_0x03280cac();
  lVar31 = auVar52._8_8_;
  puVar19 = auVar52._0_8_;
  puVar18[-0xe] = puVar43;
  puVar18[-0xd] = 0x3d3c470;
  puVar18[-0xc] = puVar12;
  puVar18[-10] = lVar30;
  puVar18[-9] = uVar35;
  puVar18[-8] = puVar17;
  puVar18[-7] = 0;
  puVar18[-6] = uVar22;
  puVar18[-5] = auVar51._8_8_ & 0xffffffff;
  lVar27 = tpidr_el0;
  puVar18[-0xf] = *(undefined8 *)(lVar27 + 0x28);
  puVar18[-0x10] = lVar31;
  plVar11 = (long *)plVar23[7];
  if (plVar11 == (long *)0x0) {
    func_0x03256878(plVar23);
    plVar11 = (long *)plVar23[7];
  }
  pplVar40 = (long **)(ulong)*(uint *)(plVar11[3] + 0xfc);
  puVar12 = (undefined8 *)((long)puVar18 + (-0x80 - ((long)pplVar40 + 0xfU & 0x1fffffff0)));
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar24 = (undefined8 *)func_0x03280ca0();
  puVar17 = *(undefined8 **)(plVar23[7] + 8);
  (*(code *)*puVar17)(puVar24,0xfffffffe);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x03280cac();
  }
  else {
    func_0x02f17738(puVar24,*(long *)(*(long *)plVar23[7] + 0x80) + 0x80,puVar19);
    plVar23 = (long *)plVar23[7];
    lVar30 = lVar31;
    if (-1 < *(int *)(plVar23[3] + 0x28)) {
      lVar30 = (long)(puVar18 + -0x10);
    }
    func_0x072ce970(puVar12,lVar30,pplVar40);
    puVar17 = puVar12;
    pplVar28 = pplVar40;
    func_0x03280a3c(puVar24,*(long *)(*plVar23 + 0x80) + 0xc0);
    if (*(long *)(lVar27 + 0x28) == puVar18[-0xf]) {
      return puVar24;
    }
  }
  auVar51 = func_0x072ce990();
  lVar30 = auVar51._8_8_;
  puVar12[-4] = 0x3d3c59c;
  puVar12[-2] = plVar23;
  puVar12[-1] = lVar31;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar51._0_8_ == 0) {
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar51 = func_0x03280b7c(uVar15,lVar30);
    lVar31 = auVar51._8_8_;
    puVar12[-8] = 0x3d3c5f8;
    puVar12[-6] = 0;
    puVar12[-5] = lVar30;
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
    if (auVar51._0_8_ != 0) {
      auVar53 = *(undefined1 (*) [16])(puVar12 + -6);
      auVar54._8_8_ = 0;
      auVar54._0_8_ = auVar51._0_8_;
      lVar30 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
      puVar4 = puVar12 + -4;
      uVar15 = puVar12[-8];
      goto LAB_03d3c85c;
    }
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar51 = func_0x03280b7c(uVar15,lVar31);
    lVar30 = auVar51._8_8_;
    puVar12[-0xc] = 0x3d3c654;
    puVar12[-10] = 0;
    puVar12[-9] = lVar31;
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
    if (auVar51._0_8_ != 0) {
      auVar54 = *(undefined1 (*) [16])(puVar12 + -10);
      auVar55._8_8_ = 0;
      auVar55._0_8_ = auVar51._0_8_;
      lVar30 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
      puVar5 = puVar12 + -8;
      uVar15 = puVar12[-0xc];
      goto LAB_03d3c8e4;
    }
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar51 = func_0x03280b7c(uVar15,lVar30);
    lVar31 = auVar51._8_8_;
    puVar12[-0x10] = 0x3d3c6b0;
    puVar12[-0xe] = 0;
    puVar12[-0xd] = lVar30;
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
    if (auVar51._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x03d3c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x38) + 8))(auVar51._0_8_,0);
      return puVar12;
    }
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar51 = func_0x03280b7c(uVar15,lVar31);
    puVar12[-0x14] = 0x3d3c710;
    puVar12[-0x13] = pplVar40;
    puVar12[-0x12] = 0;
    puVar12[-0x11] = lVar31;
    puVar20 = puVar17;
    if (puVar17[7] == 0) {
      func_0x03256878(puVar17);
    }
    if (auVar51._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x03d3c754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)
                (*(code *)**(undefined8 **)(puVar17[7] + 0x10))(auVar51._0_8_,auVar51._8_8_);
      return puVar12;
    }
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar52 = func_0x03280b7c(uVar15,puVar17);
    uVar15 = auVar52._8_8_;
    puVar3 = puVar12 + -0x18;
    puVar12[-0x18] = 0x3d3c774;
    puVar12[-0x17] = 0;
    puVar12[-0x16] = auVar51._8_8_;
    puVar12[-0x15] = puVar17;
    puVar17 = puVar20;
    if (puVar20[7] == 0) {
      func_0x03256878(puVar20);
    }
    if (auVar52._0_8_ == 0) {
      uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
      uVar22 = func_0x05ac7464(uVar22,0);
      uVar49 = 0x3d3c7d4;
      auVar53 = func_0x03280b7c(uVar22,puVar20);
      pplVar40 = (long **)0x0;
      goto LAB_03d3c7d4;
    }
    lVar30 = puVar12[-0x16];
    puVar17 = *(undefined8 **)(puVar20[7] + 0x10);
    puVar6 = puVar12 + -0x14;
    uVar15 = puVar12[-0x18];
    auVar56._8_8_ = puVar12[-0x15];
    auVar56._0_8_ = puVar12[-0x17];
  }
  else {
    uVar15 = puVar12[-2];
    puVar20 = (undefined8 *)puVar12[-1];
    auVar53._8_8_ = 0;
    auVar53._0_8_ = auVar51._0_8_;
    puVar17 = *(undefined8 **)(*(long *)(lVar30 + 0x38) + 8);
    uVar49 = puVar12[-4];
    puVar3 = puVar12;
LAB_03d3c7d4:
    puVar4 = puVar3 + -4;
    puVar3[-4] = uVar49;
    puVar3[-3] = pplVar40;
    puVar3[-2] = uVar15;
    puVar3[-1] = puVar20;
    plVar23 = (long *)puVar17[7];
    if (plVar23 == (long *)0x0) {
      func_0x03256878(puVar17);
      plVar23 = (long *)puVar17[7];
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar20 = (undefined8 *)func_0x03280ca0();
    lVar30 = *(long *)(puVar17[7] + 8);
    func_0x04fd7fb0(puVar20,0xfffffffe);
    if (puVar20 != (undefined8 *)0x0) {
      puVar20[7] = auVar53._0_8_;
      func_0x032809c4(puVar20 + 7,auVar53._0_8_);
      puVar20[5] = auVar53._8_8_;
      func_0x032809c4(puVar20 + 5,auVar53._8_8_);
      return puVar20;
    }
    uVar15 = 0x3d3c85c;
    auVar54 = func_0x03280cac();
    pplVar40 = (long **)0x0;
LAB_03d3c85c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x20);
    *(undefined8 *)((long)puVar4 + -0x20) = uVar15;
    *(long ***)((long)puVar4 + -0x18) = pplVar40;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar53;
    plVar23 = *(long **)(lVar30 + 0x38);
    if (plVar23 == (long *)0x0) {
      func_0x03256878(lVar30);
      plVar23 = *(long **)(lVar30 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar17 = (undefined8 *)func_0x03280ca0();
    lVar30 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
    func_0x04fd8508(puVar17,0xfffffffe);
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[7] = auVar54._0_8_;
      func_0x032809c4(puVar17 + 7,auVar54._0_8_);
      puVar17[5] = auVar54._8_8_;
      func_0x032809c4(puVar17 + 5,auVar54._8_8_);
      return puVar17;
    }
    uVar15 = 0x3d3c8e4;
    auVar55 = func_0x03280cac();
    pplVar40 = (long **)0x0;
LAB_03d3c8e4:
    *(undefined8 *)((long)puVar5 + -0x20) = uVar15;
    *(long ***)((long)puVar5 + -0x18) = pplVar40;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar54;
    plVar23 = *(long **)(lVar30 + 0x38);
    if (plVar23 == (long *)0x0) {
      func_0x03256878(lVar30);
      plVar23 = *(long **)(lVar30 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar17 = (undefined8 *)func_0x03280ca0();
    lVar30 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
    func_0x04fd8a60(puVar17,0xfffffffe);
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[8] = auVar55._0_8_;
      func_0x032809c4(puVar17 + 8,auVar55._0_8_);
      puVar17[6] = auVar55._8_8_;
      func_0x032809c4(puVar17 + 6,auVar55._8_8_);
      return puVar17;
    }
    auVar56 = func_0x03280cac();
    puVar6 = (undefined8 *)((long)puVar5 + -0x50);
    *(undefined8 *)((long)puVar5 + -0x50) = 0x3d3c96c;
    *(undefined **)((long)puVar5 + -0x40) = puVar19;
    *(undefined8 *)((long)puVar5 + -0x38) = 0;
    *(undefined1 (*) [16])((long)puVar5 + -0x30) = auVar55;
    plVar23 = *(long **)(lVar30 + 0x38);
    if (plVar23 == (long *)0x0) {
      func_0x03256878(lVar30);
      plVar23 = *(long **)(lVar30 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar20 = (undefined8 *)func_0x03280ca0();
    puVar17 = *(undefined8 **)(*(long *)(lVar30 + 0x38) + 8);
    (*(code *)*puVar17)(puVar20,0xfffffffe);
    if (puVar20 != (undefined8 *)0x0) {
      func_0x02f17738(puVar20,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0xc0,auVar56._0_8_);
      func_0x02f17738(puVar20,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0x80,auVar56._8_8_);
      return puVar20;
    }
    uVar15 = 0x3d3ca18;
    auVar52 = func_0x03280cac();
    puVar19 = (undefined *)0x0;
  }
  *(undefined8 *)((long)puVar6 + -0x20) = uVar15;
  *(long *)((long)puVar6 + -0x18) = auVar56._0_8_;
  *(long *)((long)puVar6 + -0x10) = lVar30;
  *(long *)((long)puVar6 + -8) = auVar56._8_8_;
  plVar23 = (long *)puVar17[7];
  if (plVar23 == (long *)0x0) {
    func_0x03256878(puVar17);
    plVar23 = (long *)puVar17[7];
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar20 = (undefined8 *)func_0x03280ca0();
  lVar30 = *(long *)(puVar17[7] + 8);
  func_0x04fd99ec(puVar20,0xfffffffe);
  if (puVar20 != (undefined8 *)0x0) {
    puVar20[9] = auVar52._0_8_;
    func_0x032809c4(puVar20 + 9,auVar52._0_8_);
    puVar20[7] = auVar52._8_8_;
    func_0x032809c4(puVar20 + 7,auVar52._8_8_);
    return puVar20;
  }
  auVar51 = func_0x03280cac();
  plVar23 = auVar51._0_8_;
  *(undefined8 *)((long)puVar6 + -0x50) = 0x3d3caa0;
  *(undefined8 **)((long)puVar6 + -0x48) = puVar12;
  *(undefined **)((long)puVar6 + -0x40) = puVar19;
  *(undefined8 *)((long)puVar6 + -0x38) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x30) = auVar52;
  puVar17 = (undefined8 *)(auVar51._8_8_ & 0xffffffff);
  lVar31 = lVar30;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
  }
  puVar44 = puVar19;
  if (plVar23 == (long *)0x0) {
LAB_03d3cd94:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    puVar19 = puVar44;
LAB_03d3cdc0:
    func_0x03280b7c(uVar15,lVar30);
  }
  else {
    lVar32 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    plVar11 = (long *)func_0x03280b90(plVar23,lVar32);
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3cbd8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,0);
LAB_03d3cbd8:
                    /* WARNING: Could not recover jumptable at 0x03d3cbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar17,puVar12[1]);
      return puVar12;
    }
    if (auVar51._8_4_ < 0) {
      uVar15 = func_0x03280a2c(PTR_DAT_07751628);
      uVar15 = func_0x05ac74c0(uVar15,0);
      goto LAB_03d3cdc0;
    }
    lVar32 = **(long **)(lVar30 + 0x38);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar33 = *plVar23;
    uVar35 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar32) {
          puVar20 = (undefined8 *)(lVar33 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3cc00;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    lVar31 = 0;
    puVar20 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3cc00:
    plVar23 = (long *)(*(code *)*puVar20)(plVar23,puVar20[1]);
    puVar44 = PTR_DAT_0774e8e0;
    if (plVar23 != (long *)0x0) {
      do {
        puVar12 = puVar17;
        lVar32 = *plVar23;
        uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar44) {
              puVar17 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3cc6c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        lVar31 = 0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3cc6c:
        uVar35 = (*(code *)*puVar17)(plVar23,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          uVar15 = func_0x03280a2c(PTR_DAT_07751628);
          uVar15 = func_0x05ac74c0(uVar15,0);
          func_0x03280b7c(uVar15,lVar30);
          goto LAB_03d3cd94;
        }
        puVar17 = (undefined8 *)(ulong)((int)puVar12 - 1);
      } while ((int)puVar12 != 0);
      lVar30 = *(long *)(*(long *)(lVar30 + 0x38) + 0x28);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar32 = *plVar23;
      uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar17 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3cce8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      lVar31 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3cce8:
      puVar17 = (undefined8 *)(*(code *)*puVar17)(plVar23,puVar17[1]);
      lVar30 = 0;
      if (plVar23 == (long *)0x0) goto LAB_03d3cd60;
      goto LAB_03d3cd00;
    }
  }
  puVar44 = puVar19;
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar30);
    uVar15 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar11 = (long *)func_0x072ce910(uVar15);
    lVar30 = *plVar11;
    func_0x072ce920();
    puVar17 = (undefined8 *)0x0;
    if (plVar23 != (long *)0x0) {
LAB_03d3cd00:
      lVar32 = *plVar23;
      uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar20 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3cd54;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      lVar31 = 0;
      puVar20 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3cd54:
      (*(code *)*puVar20)(plVar23,puVar20[1]);
    }
LAB_03d3cd60:
    if (lVar30 == 0) {
      return puVar17;
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar30 = *plVar23;
    uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3ce6c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    lVar31 = 0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3ce6c:
    (*(code *)*puVar17)(plVar23,puVar17[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar11 = auVar51._0_8_;
  *(undefined8 *)((long)puVar6 + -0x80) = 0x3d3ce90;
  *(undefined8 **)((long)puVar6 + -0x78) = puVar12;
  *(undefined **)((long)puVar6 + -0x70) = puVar44;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar15;
  *(undefined8 *)((long)puVar6 + -0x60) = 0;
  *(long **)((long)puVar6 + -0x58) = plVar23;
  puVar17 = (undefined8 *)(auVar51._8_8_ & 0xffffffff);
  lVar30 = lVar31;
  if (*(long *)(lVar31 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar31 + 0x38) == 0) {
      func_0x03256878(lVar31);
    }
  }
  puVar19 = puVar44;
  if (plVar11 == (long *)0x0) {
LAB_03d3d184:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    puVar44 = puVar19;
LAB_03d3d1b0:
    func_0x03280b7c(uVar15,lVar31);
  }
  else {
    lVar32 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    plVar23 = (long *)func_0x03280b90(plVar11,lVar32);
    if (plVar23 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar23;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3cfc8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar23,lVar27,0);
LAB_03d3cfc8:
                    /* WARNING: Could not recover jumptable at 0x03d3cfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar23,puVar17,puVar12[1]);
      return puVar12;
    }
    if (auVar51._8_4_ < 0) {
      uVar15 = func_0x03280a2c(PTR_DAT_07751628);
      uVar15 = func_0x05ac74c0(uVar15,0);
      goto LAB_03d3d1b0;
    }
    lVar32 = **(long **)(lVar31 + 0x38);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar33 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar32) {
          puVar20 = (undefined8 *)(lVar33 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3cff0;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    lVar30 = 0;
    puVar20 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3cff0:
    plVar11 = (long *)(*(code *)*puVar20)(plVar11,puVar20[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      do {
        puVar12 = puVar17;
        lVar32 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3d05c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        lVar30 = 0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d05c:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          uVar15 = func_0x03280a2c(PTR_DAT_07751628);
          uVar15 = func_0x05ac74c0(uVar15,0);
          func_0x03280b7c(uVar15,lVar31);
          goto LAB_03d3d184;
        }
        puVar17 = (undefined8 *)(ulong)((int)puVar12 - 1);
      } while ((int)puVar12 != 0);
      lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 0x28);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      lVar32 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar31) {
            puVar17 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d0d8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      lVar30 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d0d8:
      uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
      puVar17 = (undefined8 *)(uVar35 & 0xffffffff);
      lVar31 = 0;
      if (plVar11 == (long *)0x0) goto LAB_03d3d150;
      goto LAB_03d3d0f0;
    }
  }
  puVar19 = puVar44;
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar31);
    uVar15 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    plVar23 = (long *)func_0x072ce910(uVar15);
    lVar31 = *plVar23;
    func_0x072ce920();
    puVar17 = (undefined8 *)0x0;
    if (plVar11 != (long *)0x0) {
LAB_03d3d0f0:
      lVar32 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar20 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d144;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      lVar30 = 0;
      puVar20 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d144:
      (*(code *)*puVar20)(plVar11,puVar20[1]);
    }
LAB_03d3d150:
    if (lVar31 == 0) {
      return puVar17;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar31 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3d25c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    lVar30 = 0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d25c:
    (*(code *)*puVar17)(plVar11,puVar17[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar23 = auVar51._0_8_;
  *(undefined8 **)((long)puVar6 + -0xe0) = puVar18 + -0xe;
  *(undefined8 *)((long)puVar6 + -0xd8) = 0x3d3d280;
  *(undefined **)((long)puVar6 + -0xd0) = unaff_x28;
  *(long *)((long)puVar6 + -200) = lVar29;
  *(undefined1 **)((long)puVar6 + -0xc0) = puVar47;
  *(long *)((long)puVar6 + -0xb8) = lVar27;
  *(undefined8 **)((long)puVar6 + -0xb0) = puVar24;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar12;
  *(undefined **)((long)puVar6 + -0xa0) = puVar19;
  *(undefined8 *)((long)puVar6 + -0x98) = uVar15;
  *(undefined8 *)((long)puVar6 + -0x90) = 0;
  *(long **)((long)puVar6 + -0x88) = plVar11;
  lVar27 = tpidr_el0;
  *(undefined8 *)((long)puVar6 + -0xe8) = *(undefined8 *)(lVar27 + 0x28);
  plVar11 = pplVar28[7];
  pplVar40 = pplVar28;
  if (plVar11 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar11 = pplVar28[7];
    if (plVar11 == (long *)0x0) {
      func_0x03256878(pplVar28);
      plVar11 = pplVar28[7];
    }
  }
  uVar36 = (ulong)*(uint *)(plVar11[3] + 0xfc);
  uVar35 = uVar36 + 0xf & 0x1fffffff0;
  puVar43 = (undefined1 *)((long)puVar6 + (-0x100 - uVar35));
  lVar29 = (long)puVar43 - uVar35;
  uVar35 = uVar36;
  func_0x072ce9a0(lVar29,0);
  plVar14 = plVar11;
  if (plVar23 == (long *)0x0) {
LAB_03d3d644:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    plVar11 = plVar14;
  }
  else {
    lVar31 = plVar11[1];
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c(lVar31);
    }
    plVar14 = (long *)func_0x03280b90(plVar23,lVar31);
    if (plVar14 != (long *)0x0) {
      lVar31 = pplVar28[7][1];
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      *(int *)((long)puVar6 + -0xec) = auVar51._8_4_;
      lVar32 = *plVar14;
      uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar31) {
            lVar31 = lVar32 + (long)*piVar39 * 0x10 + 0x138;
            goto LAB_03d3d418;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      lVar31 = func_0x03256b10(plVar14,lVar31,0);
LAB_03d3d418:
      *(undefined1 **)((long)puVar6 + -0x100) = (undefined1 *)((long)puVar6 + -0xec);
      *(undefined1 **)((long)puVar6 + -0xf8) = puVar43;
      lVar31 = *(long *)(lVar31 + 8);
      pplVar40 = (long **)((long)puVar6 + -0x100);
      (**(code **)(lVar31 + 0x10))(*(undefined8 *)(lVar31 + 8),lVar31,plVar14,pplVar40,puVar43);
      goto LAB_03d3d5e8;
    }
    if (-1 < auVar51._8_4_) {
      lVar31 = *pplVar28[7];
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      lVar32 = *plVar23;
      uVar37 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar31) {
            puVar12 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d448;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      uVar35 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3d448:
      plVar23 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
      plVar14 = (long *)PTR_DAT_0774e8e0;
      puVar19 = (undefined *)(auVar51._8_8_ & 0xffffffff);
      if (plVar23 != (long *)0x0) {
        do {
          unaff_x28 = puVar19;
          lVar31 = *plVar23;
          uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar37 != 0) {
            piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == *plVar14) {
                puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
                goto LAB_03d3d4b4;
              }
              uVar37 = uVar37 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar37 != 0);
          }
          uVar35 = 0;
          puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3d4b4:
          uVar37 = (*(code *)*puVar12)(plVar23,puVar12[1]);
          if ((uVar37 & 1) == 0) {
            uVar15 = func_0x03280a2c(PTR_DAT_07751628);
            uVar15 = func_0x05ac74c0(uVar15,0);
            func_0x03280b7c(uVar15,pplVar28);
            goto LAB_03d3d644;
          }
          puVar19 = (undefined *)(ulong)((int)unaff_x28 - 1);
        } while ((int)unaff_x28 != 0);
        lVar31 = pplVar28[7][5];
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        lVar32 = *plVar23;
        uVar35 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar31) {
              lVar31 = lVar32 + (long)*piVar39 * 0x10 + 0x138;
              goto LAB_03d3d530;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        lVar31 = func_0x03256b10(plVar23,lVar31,0);
LAB_03d3d530:
        *(undefined1 **)((long)puVar6 + -0x100) = puVar43;
        lVar31 = *(long *)(lVar31 + 8);
        pplVar40 = (long **)((long)puVar6 + -0x100);
        (**(code **)(lVar31 + 0x10))(*(undefined8 *)(lVar31 + 8),lVar31,plVar23,pplVar40,puVar43);
        uVar35 = uVar36;
        puVar12 = (undefined8 *)func_0x072ce970(lVar29,puVar43);
        pplVar28 = (long **)0x0;
        iVar10 = 0xf;
        iVar9 = 0xf;
        if (plVar23 == (long *)0x0) goto LAB_03d3d5c8;
        goto LAB_03d3d568;
      }
      goto LAB_03d3d678;
    }
    uVar15 = func_0x03280a2c(PTR_DAT_07751628);
    uVar15 = func_0x05ac74c0(uVar15,0);
  }
  func_0x03280b7c(uVar15,pplVar28);
LAB_03d3d678:
  plVar14 = plVar11;
  func_0x03280cac();
LAB_03d3d67c:
  func_0x03280ca4(pplVar28);
  do {
    auVar50 = func_0x072ce990();
    uVar15 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      uVar37 = 0;
      if (plVar23 == (long *)0x0) goto LAB_03d3d72c;
      lVar31 = *plVar23;
      uVar41 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar41 == 0) goto LAB_03d3d704;
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      goto LAB_03d3d6ec;
    }
    puVar12 = (undefined8 *)func_0x072ce910(uVar15);
    pplVar28 = (long **)*puVar12;
    puVar12 = (undefined8 *)func_0x072ce920();
    iVar10 = 0;
    iVar9 = 0;
    if (plVar23 != (long *)0x0) {
LAB_03d3d568:
      iVar10 = iVar9;
      lVar31 = *plVar23;
      uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d5bc;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      uVar35 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3d5bc:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar23,puVar12[1]);
    }
LAB_03d3d5c8:
    if (pplVar28 != (long **)0x0) goto LAB_03d3d67c;
    if ((iVar10 == 0xf) || (iVar10 == 0)) {
      func_0x072ce970(puVar43,lVar29,uVar36);
LAB_03d3d5e8:
      uVar35 = uVar36;
      puVar12 = (undefined8 *)func_0x072ce970(lVar30,puVar43);
    }
    if (*(long *)(lVar27 + 0x28) == *(long *)((long)puVar6 + -0xe8)) {
      return puVar12;
    }
  } while( true );
  while( true ) {
    uVar35 = uVar35 - 1;
    piVar39 = piVar39 + 4;
    if (uVar35 == 0) break;
LAB_03d3db28:
    if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
      goto LAB_03d3db5c;
    }
  }
LAB_03d3db40:
  uVar36 = 0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3db5c:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_03d3db68:
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar23 = auVar51._0_8_;
  *(undefined8 *)(lVar29 + -0xb0) = 0x3d3db80;
  *(long **)(lVar29 + -0xa8) = plVar13;
  *(undefined8 *)(lVar29 + -0xa0) = uVar22;
  *(undefined8 *)(lVar29 + -0x98) = 0;
  *(long **)(lVar29 + -0x90) = plVar11;
  *(long **)(lVar29 + -0x88) = extraout_x8;
  uVar41 = auVar51._8_8_ & 0xffffffff;
  uVar35 = uVar36;
  if (*(long *)(uVar36 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar36 + 0x38) == 0) {
      func_0x03256878(uVar36);
    }
  }
  if (plVar23 == (long *)0x0) {
    uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,uVar36);
    plVar11 = extraout_x8;
  }
  else {
    if (auVar51._8_4_ < 0) {
      return (undefined8 *)0x0;
    }
    lVar30 = *(long *)(*(long *)(uVar36 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar23,lVar30);
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(uVar36 + 0x38) + 0x10);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3dcb8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,0);
LAB_03d3dcb8:
      iVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (iVar9 <= auVar51._8_4_) {
        return (undefined8 *)0x0;
      }
      lVar27 = *(long *)(*(long *)(uVar36 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3de30;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,0);
LAB_03d3de30:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,auVar51._8_8_ & 0xffffffff,puVar12[1]);
      return puVar12;
    }
    lVar30 = **(long **)(uVar36 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar23;
    uVar38 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar38 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3dd30;
        }
        uVar38 = uVar38 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar38 != 0);
    }
    uVar35 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3dd30:
    plVar11 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      do {
        lVar30 = *plVar11;
        uVar38 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar38 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3dd9c;
            }
            uVar38 = uVar38 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar38 != 0);
        }
        uVar35 = 0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3dd9c:
        uVar38 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar38 & 1) == 0) {
          uVar36 = 0;
          plVar13 = (long *)0x5;
          goto joined_r0x03d3de1c;
        }
        iVar9 = (int)uVar41;
        uVar41 = (ulong)(iVar9 - 1);
      } while (iVar9 != 0);
      lVar30 = *(long *)(*(long *)(uVar36 + 0x38) + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar11;
      uVar36 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar36 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3de58;
          }
          uVar36 = uVar36 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar36 != 0);
      }
      uVar35 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3de58:
      auVar51 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      uVar36 = 0;
      plVar13 = (long *)0xb;
      if (plVar11 == (long *)0x0) goto LAB_03d3ded8;
      goto LAB_03d3de78;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar36);
    uVar22 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar21 = (ulong *)func_0x072ce910(uVar22);
    uVar36 = *puVar21;
    func_0x072ce920();
    plVar13 = (long *)0x0;
joined_r0x03d3de1c:
    auVar51 = ZEXT816(0);
    if (plVar11 != (long *)0x0) {
LAB_03d3de78:
      lVar30 = *plVar11;
      uVar41 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar41 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3decc;
          }
          uVar41 = uVar41 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar41 != 0);
      }
      uVar35 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3decc:
      (*(code *)*puVar12)(plVar11,puVar12[1]);
    }
LAB_03d3ded8:
    plVar23 = auVar51._8_8_;
    if (uVar36 == 0) {
      if (((int)plVar13 != 5) && ((int)plVar13 != 0)) {
        return auVar51._0_8_;
      }
      return (undefined8 *)0x0;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar30 = *plVar11;
    uVar36 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar36 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3dfcc;
        }
        uVar36 = uVar36 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar36 != 0);
    }
    uVar35 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3dfcc:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar26 = auVar51._0_8_;
  *(undefined8 *)(lVar29 + -0xe0) = 0x3d3dff0;
  *(long **)(lVar29 + -0xd8) = plVar13;
  *(long **)(lVar29 + -0xd0) = plVar23;
  *(undefined8 *)(lVar29 + -200) = uVar22;
  *(undefined8 *)(lVar29 + -0xc0) = 0;
  *(long **)(lVar29 + -0xb8) = plVar11;
  uVar36 = uVar35;
  if (*(long *)(uVar35 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar35 + 0x38) == 0) {
      func_0x03256878(uVar35);
    }
  }
  if (plVar26 == (long *)0x0) {
    uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,uVar35);
  }
  else {
    if (auVar51._8_4_ < 0) {
      return (undefined8 *)0x0;
    }
    lVar30 = *(long *)(*(long *)(uVar35 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar23 = (long *)func_0x03280b90(plVar26,lVar30);
    if (plVar23 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(uVar35 + 0x38) + 0x10);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar23;
      uVar36 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar36 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e128;
          }
          uVar36 = uVar36 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar36 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar23,lVar27,0);
LAB_03d3e128:
      iVar9 = (*(code *)*puVar12)(plVar23,puVar12[1]);
      if (iVar9 <= auVar51._8_4_) {
        return (undefined8 *)0x0;
      }
      lVar27 = *(long *)(*(long *)(uVar35 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar23;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e29c;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar23,lVar27,0);
LAB_03d3e29c:
                    /* WARNING: Could not recover jumptable at 0x03d3e2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar23,auVar51._8_8_ & 0xffffffff,puVar12[1]);
      return puVar12;
    }
    lVar30 = **(long **)(uVar35 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar26;
    uVar41 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar41 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3e1a0;
        }
        uVar41 = uVar41 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar41 != 0);
    }
    uVar36 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar26);
LAB_03d3e1a0:
    plVar11 = (long *)(*(code *)*puVar12)(plVar26,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    plVar23 = (long *)(auVar51._8_8_ & 0xffffffff);
    if (plVar11 != (long *)0x0) {
      do {
        plVar13 = plVar23;
        lVar30 = *plVar11;
        uVar41 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar41 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3e20c;
            }
            uVar41 = uVar41 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar41 != 0);
        }
        uVar36 = 0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3e20c:
        uVar41 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar41 & 1) == 0) {
          uVar35 = 0;
          plVar26 = (long *)0x5;
          goto joined_r0x03d3e288;
        }
        plVar23 = (long *)(ulong)((int)plVar13 - 1);
      } while ((int)plVar13 != 0);
      lVar30 = *(long *)(*(long *)(uVar35 + 0x38) + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e2c4;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar36 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3e2c4:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      uVar35 = 0;
      plVar26 = (long *)0xb;
      if (plVar11 == (long *)0x0) goto LAB_03d3e340;
      goto LAB_03d3e2e0;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(uVar35);
    uVar22 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) break;
    puVar21 = (ulong *)func_0x072ce910(uVar22);
    uVar35 = *puVar21;
    func_0x072ce920();
    plVar26 = (long *)0x0;
joined_r0x03d3e288:
    puVar12 = (undefined8 *)0x0;
    if (plVar11 != (long *)0x0) {
LAB_03d3e2e0:
      lVar30 = *plVar11;
      uVar41 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar41 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e334;
          }
          uVar41 = uVar41 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar41 != 0);
      }
      uVar36 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3e334:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
LAB_03d3e340:
    if (uVar35 == 0) {
      if (((int)plVar26 != 5) && ((int)plVar26 != 0)) {
        return puVar12;
      }
      return (undefined8 *)0x0;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar30 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3e428;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    uVar36 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3e428:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar23 = auVar51._0_8_;
  *(undefined1 **)(lVar29 + -0x140) = (undefined1 *)((long)puVar6 + -0xe0);
  *(undefined8 *)(lVar29 + -0x138) = 0x3d3e44c;
  *(undefined **)(lVar29 + -0x130) = unaff_x28;
  *(long *)(lVar29 + -0x128) = lVar27;
  *(long **)(lVar29 + -0x120) = plVar14;
  *(undefined8 *)(lVar29 + -0x118) = uVar15;
  *(ulong *)(lVar29 + -0x110) = uVar37;
  *(long **)(lVar29 + -0x108) = plVar13;
  *(long **)(lVar29 + -0x100) = plVar26;
  *(undefined8 *)(lVar29 + -0xf8) = uVar22;
  *(undefined8 *)(lVar29 + -0xf0) = 0;
  *(long **)(lVar29 + -0xe8) = plVar11;
  *(ulong *)(lVar29 + -0x168) = uVar36;
  lVar27 = tpidr_el0;
  uVar35 = auVar51._8_8_ & 0xffffffff;
  *(undefined8 *)(lVar29 + -0x148) = *(undefined8 *)(lVar27 + 0x28);
  plVar11 = pplVar40[7];
  if (plVar11 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar11 = pplVar40[7];
    if (plVar11 == (long *)0x0) {
      func_0x03256878(pplVar40);
      plVar11 = pplVar40[7];
    }
  }
  uVar36 = (ulong)*(uint *)(plVar11[5] + 0xfc);
  uVar37 = uVar36 + 0xf & 0x1fffffff0;
  lVar31 = (lVar29 + -0x170) - uVar37;
  lVar33 = lVar31 - uVar37;
  func_0x072ce9a0(lVar33,0,uVar36);
  lVar32 = lVar33 - uVar37;
  func_0x072ce9a0(lVar32,0,uVar36);
  lVar30 = lVar32;
  if (plVar23 == (long *)0x0) {
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,pplVar40);
  }
  else {
    iVar9 = auVar51._8_4_;
    if (iVar9 < 0) goto LAB_03d3e854;
    lVar25 = plVar11[1];
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    plVar11 = (long *)func_0x03280b90(plVar23,lVar25);
    if (plVar11 != (long *)0x0) {
      lVar25 = pplVar40[7][2];
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar34 = *plVar11;
      uVar37 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar25) {
            puVar12 = (undefined8 *)(lVar34 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e5fc;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar25,0);
LAB_03d3e5fc:
      iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (iVar10 <= iVar9) goto LAB_03d3e854;
      lVar25 = pplVar40[7][1];
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      *(int *)(lVar29 + -0x14c) = iVar9;
      lVar34 = *plVar11;
      lVar30 = *(long *)(lVar29 + -0x168);
      uVar37 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar25) {
            lVar25 = lVar34 + (long)*piVar39 * 0x10 + 0x138;
            goto LAB_03d3e774;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      lVar25 = func_0x03256b10(plVar11,lVar25,0);
LAB_03d3e774:
      *(long *)(lVar29 + -0x160) = lVar29 + -0x14c;
      *(long *)(lVar29 + -0x158) = lVar31;
      lVar25 = *(long *)(lVar25 + 8);
      (**(code **)(lVar25 + 0x10))
                (*(undefined8 *)(lVar25 + 8),lVar25,plVar11,lVar29 + -0x160,lVar31);
      goto LAB_03d3e878;
    }
    lVar25 = *pplVar40[7];
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar34 = *plVar23;
    uVar37 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar37 != 0) {
      piVar39 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar25) {
          puVar12 = (undefined8 *)(lVar34 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3e67c;
        }
        uVar37 = uVar37 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar37 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar23,lVar25,0);
LAB_03d3e67c:
    plVar23 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar23 != (long *)0x0) {
      do {
        lVar25 = *plVar23;
        uVar37 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar37 != 0) {
          piVar39 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar12 = (undefined8 *)(lVar25 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3e6e8;
            }
            uVar37 = uVar37 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar37 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar19,0);
LAB_03d3e6e8:
        puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar23,puVar12[1]);
        if (((ulong)puVar12 & 1) == 0) {
          pplVar40 = (long **)0x0;
          iVar10 = 5;
          iVar9 = 5;
          goto joined_r0x03d3e760;
        }
        iVar9 = (int)uVar35;
        uVar35 = (ulong)(iVar9 - 1);
      } while (iVar9 != 0);
      lVar25 = pplVar40[7][7];
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar34 = *plVar23;
      uVar37 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar25) {
            lVar25 = lVar34 + (long)*piVar39 * 0x10 + 0x138;
            goto LAB_03d3e7a4;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      lVar25 = func_0x03256b10(plVar23,lVar25,0);
LAB_03d3e7a4:
      *(long *)(lVar29 + -0x160) = lVar31;
      lVar25 = *(long *)(lVar25 + 8);
      (**(code **)(lVar25 + 0x10))
                (*(undefined8 *)(lVar25 + 8),lVar25,plVar23,lVar29 + -0x160,lVar31);
      puVar12 = (undefined8 *)func_0x072ce970(lVar33,lVar31,uVar36);
      pplVar40 = (long **)0x0;
      iVar9 = 0xb;
      iVar10 = 0xb;
      if (plVar23 == (long *)0x0) goto LAB_03d3e83c;
      goto LAB_03d3e7dc;
    }
  }
  func_0x03280cac();
LAB_03d3e8e4:
  func_0x03280ca4(pplVar40);
  do {
    auVar50 = func_0x072ce990();
    if (auVar50._8_4_ != 1) {
      if (plVar23 == (long *)0x0) goto LAB_03d3e990;
      lVar27 = *plVar23;
      uVar36 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar36 == 0) goto LAB_03d3e968;
      piVar39 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      break;
    }
    puVar12 = (undefined8 *)func_0x072ce910(auVar50._0_8_);
    pplVar40 = (long **)*puVar12;
    puVar12 = (undefined8 *)func_0x072ce920();
    iVar10 = 0;
    iVar9 = 0;
joined_r0x03d3e760:
    if (plVar23 != (long *)0x0) {
LAB_03d3e7dc:
      iVar9 = iVar10;
      lVar25 = *plVar23;
      uVar37 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar25 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3e830;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d3e830:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar23,puVar12[1]);
    }
LAB_03d3e83c:
    if (pplVar40 != (long **)0x0) goto LAB_03d3e8e4;
    if (iVar9 == 0) {
LAB_03d3e854:
      func_0x072ce9a0(lVar30,0,uVar36);
      lVar25 = lVar30;
LAB_03d3e86c:
      func_0x072ce970(lVar31,lVar25,uVar36);
      lVar30 = *(long *)(lVar29 + -0x168);
LAB_03d3e878:
      puVar12 = (undefined8 *)func_0x072ce970(lVar30,lVar31,uVar36);
    }
    else {
      lVar25 = lVar33;
      if (iVar9 == 0xb) goto LAB_03d3e86c;
      if (iVar9 == 5) goto LAB_03d3e854;
    }
    if (*(long *)(lVar27 + 0x28) == *(long *)(lVar29 + -0x148)) {
      return puVar12;
    }
  } while( true );
  while( true ) {
    uVar36 = uVar36 - 1;
    piVar39 = piVar39 + 4;
    if (uVar36 == 0) break;
    if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar27 + (long)*piVar39 * 0x10 + 0x138);
      goto LAB_03d3e984;
    }
  }
LAB_03d3e968:
  puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d3e984:
  (*(code *)*puVar12)(plVar23,puVar12[1]);
LAB_03d3e990:
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  lVar27 = func_0x02f09514();
  *(undefined8 *)(lVar32 + -0x10) = 0x3d3e9a8;
  *(ulong *)(lVar32 + -8) = uVar35;
  lVar29 = *(long *)(lVar27 + 0x38);
  if (lVar29 == 0) {
    func_0x03256878(lVar27);
    lVar29 = *(long *)(lVar27 + 0x38);
  }
  lVar29 = *(long *)(lVar29 + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  return (undefined8 *)**(undefined8 **)(lVar27 + 0xb8);
  while( true ) {
    uVar41 = uVar41 - 1;
    piVar39 = piVar39 + 4;
    if (uVar41 == 0) break;
LAB_03d3d6ec:
    if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
      goto LAB_03d3d720;
    }
  }
LAB_03d3d704:
  uVar35 = 0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar23);
LAB_03d3d720:
  (*(code *)*puVar12)(plVar23,puVar12[1]);
LAB_03d3d72c:
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  plVar11 = auVar51._0_8_;
  *(undefined8 *)(lVar29 + -0x40) = 0x3d3d744;
  *(undefined8 *)(lVar29 + -0x30) = 0;
  *(long **)(lVar29 + -0x28) = plVar23;
  *(long *)(lVar29 + -0x20) = lVar29;
  *(undefined1 **)(lVar29 + -0x18) = puVar43;
  *(ulong *)(lVar29 + -0x10) = uVar36;
  *(long *)(lVar29 + -8) = lVar30;
  uVar41 = auVar51._8_8_ & 0xffffffff;
  uVar36 = uVar35;
  if (*(long *)(uVar35 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar35 + 0x38) == 0) {
      func_0x03256878(uVar35);
    }
  }
  *(undefined8 *)(lVar29 + -0x60) = 0;
  *(undefined8 *)(lVar29 + -0x58) = 0;
  *(undefined8 *)(lVar29 + -0x50) = 0;
  plVar13 = plVar23;
  if (plVar11 == (long *)0x0) {
LAB_03d3da84:
    uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar22 = func_0x05ac7464(uVar22,0);
    plVar23 = plVar13;
LAB_03d3dab0:
    func_0x03280b7c(uVar22,uVar35);
  }
  else {
    lVar30 = *(long *)(*(long *)(uVar35 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar13 = (long *)func_0x03280b90(plVar11,lVar30);
    if (plVar13 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(uVar35 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar30 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d890;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar13,lVar27,0);
LAB_03d3d890:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(lVar29 + -0x78,plVar13,uVar41,puVar12[1]);
      lVar27 = *(long *)(lVar29 + -0x68);
      lVar30 = *(long *)(lVar29 + -0x70);
      lVar29 = *(long *)(lVar29 + -0x78);
      goto LAB_03d3da48;
    }
    if (auVar51._8_4_ < 0) {
      uVar22 = func_0x03280a2c(PTR_DAT_07751628);
      uVar22 = func_0x05ac74c0(uVar22,0);
      goto LAB_03d3dab0;
    }
    lVar30 = **(long **)(uVar35 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar11;
    uVar38 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar38 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3d8bc;
        }
        uVar38 = uVar38 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar38 != 0);
    }
    uVar36 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d8bc:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    plVar13 = (long *)PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      do {
        uVar37 = uVar41;
        lVar30 = *plVar11;
        uVar41 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar41 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *plVar13) {
              puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3d928;
            }
            uVar41 = uVar41 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar41 != 0);
        }
        uVar36 = 0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d928:
        uVar41 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar41 & 1) == 0) {
          uVar22 = func_0x03280a2c(PTR_DAT_07751628);
          uVar22 = func_0x05ac74c0(uVar22,0);
          func_0x03280b7c(uVar22,uVar35);
          goto LAB_03d3da84;
        }
        uVar41 = (ulong)((int)uVar37 - 1);
      } while ((int)uVar37 != 0);
      lVar30 = *(long *)(*(long *)(uVar35 + 0x38) + 0x28);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3d9a4;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar36 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3d9a4:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(lVar29 + -0x78,plVar11,puVar12[1]);
      uVar35 = 0;
      iVar9 = 0xf;
      *(undefined8 *)(lVar29 + -0x58) = *(undefined8 *)(lVar29 + -0x70);
      *(undefined8 *)(lVar29 + -0x60) = *(undefined8 *)(lVar29 + -0x78);
      *(undefined8 *)(lVar29 + -0x50) = *(undefined8 *)(lVar29 + -0x68);
      if (plVar11 == (long *)0x0) goto LAB_03d3da30;
      goto LAB_03d3d9d0;
    }
  }
  plVar13 = plVar23;
  func_0x03280cac();
  do {
    auVar50 = func_0x03280ca4(uVar35);
    uVar22 = auVar50._0_8_;
    if (auVar50._8_4_ != 1) {
      if (plVar11 == (long *)0x0) goto LAB_03d3db68;
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 == 0) goto LAB_03d3db40;
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      goto LAB_03d3db28;
    }
    puVar21 = (ulong *)func_0x072ce910(uVar22);
    uVar35 = *puVar21;
    puVar12 = (undefined8 *)func_0x072ce920();
    iVar9 = 0;
    if (plVar11 != (long *)0x0) {
LAB_03d3d9d0:
      lVar30 = *plVar11;
      uVar41 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar41 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3da24;
          }
          uVar41 = uVar41 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar41 != 0);
      }
      uVar36 = 0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3da24:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    }
LAB_03d3da30:
  } while (uVar35 != 0);
  if ((iVar9 != 0xf) && (iVar9 != 0)) {
    return puVar12;
  }
  lVar27 = *(long *)(lVar29 + -0x50);
  lVar30 = *(long *)(lVar29 + -0x58);
  lVar29 = *(long *)(lVar29 + -0x60);
LAB_03d3da48:
  extraout_x8[2] = lVar27;
  extraout_x8[1] = lVar30;
  *extraout_x8 = lVar29;
  return puVar12;
  while( true ) {
    uVar35 = uVar35 - 1;
    piVar39 = piVar39 + 4;
    if (uVar35 == 0) break;
LAB_03d39590:
    if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
      goto LAB_03d395c4;
    }
  }
LAB_03d395a8:
  plVar26 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar16);
LAB_03d395c4:
  (*(code *)*puVar12)(plVar16,puVar12[1]);
LAB_03d395d0:
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x30) = 0x3d395e8;
  *(long **)(lVar27 + -0x28) = plVar45;
  *(long **)(lVar27 + -0x20) = plVar11;
  *(undefined8 *)(lVar27 + -0x18) = uVar15;
  *(undefined8 *)(lVar27 + -0x10) = 0;
  *(long **)(lVar27 + -8) = plVar16;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) goto LAB_03d398cc;
  lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
  puVar19 = PTR_DAT_0774f708;
  if (plVar11 != (long *)0x0) {
    lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          lVar29 = lVar29 + (long)*piVar39 * 0x10;
          goto LAB_03d39788;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    uVar15 = 0;
LAB_03d39710:
    puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3978c:
                    /* WARNING: Could not recover jumptable at 0x03d397a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    return puVar12;
  }
  plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    lVar27 = *(long *)puVar19;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d39788:
          puVar12 = (undefined8 *)(lVar29 + 0x138);
          goto LAB_03d3978c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    uVar15 = 1;
    goto LAB_03d39710;
  }
  lVar30 = **(long **)(lVar29 + 0x38);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  lVar31 = *plVar13;
  uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar35 != 0) {
    piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar39 + -2) == lVar30) {
        puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
        goto LAB_03d397b0;
      }
      uVar35 = uVar35 - 1;
      piVar39 = piVar39 + 4;
    } while (uVar35 != 0);
  }
  plVar26 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d397b0:
  plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
  puVar19 = PTR_DAT_0774e8e0;
  if (plVar11 != (long *)0x0) {
    puVar12 = (undefined8 *)0x0;
    plVar45 = (long *)0x7fffffff;
    do {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d39820;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39820:
      uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
      if ((uVar35 & 1) == 0) {
        lVar29 = 0;
        goto LAB_03d39844;
      }
      if ((int)puVar12 == 0x7fffffff) goto LAB_03d398c0;
      puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
    } while( true );
  }
LAB_03d398e8:
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d39844:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3989c;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3989c:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d39990;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39990:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x60) = 0x3d399b4;
  *(long **)(lVar27 + -0x58) = plVar45;
  *(undefined8 *)(lVar27 + -0x50) = uVar15;
  *(undefined8 *)(lVar27 + -0x48) = 0;
  *(undefined8 *)(lVar27 + -0x40) = 0;
  *(long **)(lVar27 + -0x38) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d39c98:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d39b54;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d39adc:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d39b58:
                    /* WARNING: Could not recover jumptable at 0x03d39b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d39b54:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d39b58;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d39adc;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d39b7c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d39b7c:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d39bec;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39bec:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d39c10;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d39c8c;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d39c10:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d39c68;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39c68:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d39d5c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39d5c:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x90) = 0x3d39d80;
  *(long **)(lVar27 + -0x88) = plVar45;
  *(undefined8 *)(lVar27 + -0x80) = uVar15;
  *(undefined8 *)(lVar27 + -0x78) = 0;
  *(undefined8 *)(lVar27 + -0x70) = 0;
  *(long **)(lVar27 + -0x68) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3a064:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d39f20;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d39ea8:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d39f24:
                    /* WARNING: Could not recover jumptable at 0x03d39f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d39f20:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d39f24;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d39ea8;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d39f48;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d39f48:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d39fb8;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d39fb8:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d39fdc;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d3a058;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d39fdc:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3a034;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a034:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3a128;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a128:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0xc0) = 0x3d3a14c;
  *(long **)(lVar27 + -0xb8) = plVar45;
  *(undefined8 *)(lVar27 + -0xb0) = uVar15;
  *(undefined8 *)(lVar27 + -0xa8) = 0;
  *(undefined8 *)(lVar27 + -0xa0) = 0;
  *(long **)(lVar27 + -0x98) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3a430:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d3a2ec;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d3a274:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3a2f0:
                    /* WARNING: Could not recover jumptable at 0x03d3a304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d3a2ec:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d3a2f0;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d3a274;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3a314;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3a314:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3a384;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a384:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d3a3a8;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d3a424;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d3a3a8:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3a400;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a400:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3a4f4;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a4f4:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0xf0) = 0x3d3a518;
  *(long **)(lVar27 + -0xe8) = plVar45;
  *(undefined8 *)(lVar27 + -0xe0) = uVar15;
  *(undefined8 *)(lVar27 + -0xd8) = 0;
  *(undefined8 *)(lVar27 + -0xd0) = 0;
  *(long **)(lVar27 + -200) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3a7fc:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d3a6b8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d3a640:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3a6bc:
                    /* WARNING: Could not recover jumptable at 0x03d3a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d3a6b8:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d3a6bc;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d3a640;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3a6e0;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3a6e0:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3a750;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a750:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d3a774;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d3a7f0;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d3a774:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3a7cc;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a7cc:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3a8c0;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3a8c0:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x120) = 0x3d3a8e4;
  *(long **)(lVar27 + -0x118) = plVar45;
  *(undefined8 *)(lVar27 + -0x110) = uVar15;
  *(undefined8 *)(lVar27 + -0x108) = 0;
  *(undefined8 *)(lVar27 + -0x100) = 0;
  *(long **)(lVar27 + -0xf8) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3abc8:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d3aa84;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d3aa0c:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3aa88:
                    /* WARNING: Could not recover jumptable at 0x03d3aa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d3aa84:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d3aa88;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d3aa0c;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3aaac;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3aaac:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3ab1c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3ab1c:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d3ab40;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d3abbc;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d3ab40:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3ab98;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3ab98:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3ac8c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3ac8c:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x150) = 0x3d3acb0;
  *(long **)(lVar27 + -0x148) = plVar45;
  *(undefined8 *)(lVar27 + -0x140) = uVar15;
  *(undefined8 *)(lVar27 + -0x138) = 0;
  *(undefined8 *)(lVar27 + -0x130) = 0;
  *(long **)(lVar27 + -0x128) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3af94:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
    puVar19 = PTR_DAT_0774f708;
    if (plVar11 != (long *)0x0) {
      lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)*piVar39 * 0x10;
            goto LAB_03d3ae50;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 0;
LAB_03d3add8:
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3ae54:
                    /* WARNING: Could not recover jumptable at 0x03d3ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      return puVar12;
    }
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      lVar27 = *(long *)puVar19;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar27) {
            lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d3ae50:
            puVar12 = (undefined8 *)(lVar29 + 0x138);
            goto LAB_03d3ae54;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      uVar15 = 1;
      goto LAB_03d3add8;
    }
    lVar30 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar31 = *plVar13;
    uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar30) {
          puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3ae78;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3ae78:
    plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      plVar45 = (long *)0x7fffffff;
      do {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3aee8;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3aee8:
        uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          lVar29 = 0;
          goto LAB_03d3af0c;
        }
        if ((int)puVar12 == 0x7fffffff) goto LAB_03d3af88;
        puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar50 = func_0x03280ca4(lVar29);
    uVar15 = auVar50._0_8_;
    puVar12 = (undefined8 *)0x0;
    if (auVar50._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar15);
    lVar29 = *plVar13;
    func_0x072ce920();
LAB_03d3af0c:
    if (plVar11 != (long *)0x0) {
      lVar30 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3af64;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3af64:
      (*(code *)*puVar17)(plVar11,puVar17[1]);
    }
    if (lVar29 == 0) {
      return puVar12;
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
          goto LAB_03d3b058;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    plVar26 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3b058:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  lVar29 = auVar51._8_8_;
  plVar13 = auVar51._0_8_;
  *(undefined8 *)(lVar27 + -0x180) = 0x3d3b07c;
  *(long **)(lVar27 + -0x178) = plVar45;
  *(undefined8 *)(lVar27 + -0x170) = uVar15;
  *(undefined8 *)(lVar27 + -0x168) = 0;
  *(undefined8 *)(lVar27 + -0x160) = 0;
  *(long **)(lVar27 + -0x158) = plVar11;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774f708);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  plVar11 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
LAB_03d3b360:
    uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,lVar29);
LAB_03d3b37c:
    func_0x03280cac();
    while( true ) {
      auVar50 = func_0x03280ca4(lVar29);
      uVar15 = auVar50._0_8_;
      puVar12 = (undefined8 *)0x0;
      if (auVar50._8_4_ != 1) break;
      plVar13 = (long *)func_0x072ce910(uVar15);
      lVar29 = *plVar13;
      func_0x072ce920();
LAB_03d3b2d8:
      if (plVar11 != (long *)0x0) {
        lVar30 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b330;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar26 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3b330:
        (*(code *)*puVar17)(plVar11,puVar17[1]);
      }
      if (lVar29 == 0) {
        return puVar12;
      }
    }
    if (plVar11 != (long *)0x0) {
      lVar29 = *plVar11;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3b424;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3b424:
      (*(code *)*puVar12)(plVar11,puVar12[1]);
    }
    func_0x03365958(uVar15);
    func_0x03280ca4(0);
    auVar51 = func_0x02f09514();
    lVar29 = auVar51._8_8_;
    plVar13 = auVar51._0_8_;
    *(undefined8 *)(lVar27 + -0x1c0) = 0x3d3b448;
    *(long **)(lVar27 + -0x1b0) = plVar46;
    *(long **)(lVar27 + -0x1a8) = plVar45;
    *(undefined8 *)(lVar27 + -0x1a0) = uVar15;
    *(undefined8 *)(lVar27 + -0x198) = 0;
    *(undefined8 *)(lVar27 + -400) = 0;
    *(long **)(lVar27 + -0x188) = plVar11;
    plVar11 = plVar26;
    if (plVar26[7] == 0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_0774e8e0);
      if (plVar26[7] == 0) {
        func_0x03256878(plVar26);
      }
    }
    puVar19 = PTR_DAT_07774b08;
    if ((plVar13 != (long *)0x0) && (puVar19 = PTR_DAT_077799b8, lVar29 != 0)) {
      lVar30 = *(long *)plVar26[7];
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3b500;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar11 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3b500:
      plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      plVar45 = (long *)PTR_DAT_0774e8e0;
      puVar12 = (undefined8 *)0x0;
      plVar46 = (long *)0x7fffffff;
      while (plVar13 != (long *)0x0) {
        lVar30 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *plVar45) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b570;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3b570:
        uVar35 = (*(code *)*puVar17)(plVar13,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          plVar26 = (long *)0x0;
          goto LAB_03d3b628;
        }
        lVar30 = *(long *)(plVar26[7] + 0x18);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar31 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar30) {
              puVar17 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b5e4;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar13,lVar30,0);
LAB_03d3b5e4:
        auVar51 = (*(code *)*puVar17)(plVar13,puVar17[1]);
        plVar11 = auVar51._8_8_;
        pplVar28 = *(long ***)(lVar29 + 0x28);
        uVar35 = (**(code **)(lVar29 + 0x18))(*(undefined8 *)(lVar29 + 0x40),auVar51._0_8_);
        if ((uVar35 & 1) != 0) {
          if ((int)puVar12 == 0x7fffffff) goto LAB_03d3b6dc;
          puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
        }
      }
      func_0x03280cac();
      puVar19 = PTR_DAT_07774b08;
    }
    uVar15 = func_0x03280a2c(puVar19);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,plVar26);
    while( true ) {
      func_0x03280ca4(plVar26);
LAB_03d3b6dc:
      uVar15 = func_0x03280cbc();
      auVar50 = func_0x03280b7c(uVar15,plVar26);
      uVar15 = auVar50._0_8_;
      puVar12 = (undefined8 *)0x7fffffff;
      if (auVar50._8_4_ != 1) break;
      puVar17 = (undefined8 *)func_0x072ce910(uVar15);
      plVar26 = (long *)*puVar17;
      func_0x072ce920();
LAB_03d3b628:
      if (plVar13 != (long *)0x0) {
        lVar29 = *plVar13;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar17 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b680;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3b680:
        (*(code *)*puVar17)(plVar13,puVar17[1]);
      }
      if (plVar26 == (long *)0x0) {
        return puVar12;
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar29 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3b78c;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar11 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3b78c:
      (*(code *)*puVar12)(plVar13,puVar12[1]);
    }
    func_0x03365958(uVar15);
    func_0x03280ca4(0);
    auVar51 = func_0x02f09514();
    lVar29 = auVar51._8_8_;
    plVar26 = auVar51._0_8_;
    *(undefined8 *)(lVar27 + -0x200) = 0x3d3b7b0;
    *(long **)(lVar27 + -0x1f0) = plVar46;
    *(long **)(lVar27 + -0x1e8) = plVar45;
    *(undefined8 *)(lVar27 + -0x1e0) = uVar15;
    *(undefined8 *)(lVar27 + -0x1d8) = 0x7fffffff;
    *(undefined8 *)(lVar27 + -0x1d0) = 0;
    *(long **)(lVar27 + -0x1c8) = plVar13;
    plVar13 = plVar11;
    if (plVar11[7] == 0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_0774e8e0);
      if (plVar11[7] == 0) {
        func_0x03256878(plVar11);
      }
    }
    puVar19 = PTR_DAT_07774b08;
    if ((plVar26 != (long *)0x0) && (puVar19 = PTR_DAT_077799b8, lVar29 != 0)) {
      lVar30 = *(long *)plVar11[7];
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar26;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3b868;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar13 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar26);
LAB_03d3b868:
      plVar26 = (long *)(*(code *)*puVar12)(plVar26,puVar12[1]);
      plVar45 = (long *)PTR_DAT_0774e8e0;
      puVar12 = (undefined8 *)0x0;
      plVar46 = (long *)0x7fffffff;
      while (plVar26 != (long *)0x0) {
        lVar30 = *plVar26;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *plVar45) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b8d8;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar13 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar26);
LAB_03d3b8d8:
        uVar35 = (*(code *)*puVar17)(plVar26,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          plVar11 = (long *)0x0;
          goto LAB_03d3b984;
        }
        lVar30 = *(long *)(plVar11[7] + 0x18);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar31 = *plVar26;
        uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar30) {
              puVar17 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b94c;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar26,lVar30,0);
LAB_03d3b94c:
        uVar8 = (*(code *)*puVar17)(plVar26,puVar17[1]);
        plVar13 = *(long **)(lVar29 + 0x28);
        uVar35 = (**(code **)(lVar29 + 0x18))(*(undefined8 *)(lVar29 + 0x40),uVar8);
        if ((uVar35 & 1) != 0) {
          if ((int)puVar12 == 0x7fffffff) goto LAB_03d3ba38;
          puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
        }
      }
      func_0x03280cac();
      puVar19 = PTR_DAT_07774b08;
    }
    uVar15 = func_0x03280a2c(puVar19);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,plVar11);
    while( true ) {
      func_0x03280ca4(plVar11);
LAB_03d3ba38:
      uVar15 = func_0x03280cbc();
      auVar50 = func_0x03280b7c(uVar15,plVar11);
      uVar15 = auVar50._0_8_;
      puVar12 = (undefined8 *)0x7fffffff;
      if (auVar50._8_4_ != 1) break;
      puVar17 = (undefined8 *)func_0x072ce910(uVar15);
      plVar11 = (long *)*puVar17;
      func_0x072ce920();
LAB_03d3b984:
      if (plVar26 != (long *)0x0) {
        lVar29 = *plVar26;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar17 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3b9dc;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar13 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar26);
LAB_03d3b9dc:
        (*(code *)*puVar17)(plVar26,puVar17[1]);
      }
      if (plVar11 == (long *)0x0) {
        return puVar12;
      }
    }
    if (plVar26 != (long *)0x0) {
      lVar29 = *plVar26;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3bae8;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar13 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar26);
LAB_03d3bae8:
      (*(code *)*puVar12)(plVar26,puVar12[1]);
    }
    func_0x03365958(uVar15);
    func_0x03280ca4(0);
    auVar51 = func_0x02f09514();
    lVar29 = auVar51._8_8_;
    plVar42 = auVar51._0_8_;
    *(undefined8 *)(lVar27 + -0x240) = 0x3d3bb0c;
    *(long **)(lVar27 + -0x230) = plVar46;
    *(long **)(lVar27 + -0x228) = plVar45;
    *(undefined8 *)(lVar27 + -0x220) = uVar15;
    *(undefined8 *)(lVar27 + -0x218) = 0x7fffffff;
    *(undefined8 *)(lVar27 + -0x210) = 0;
    *(long **)(lVar27 + -0x208) = plVar26;
    plVar11 = plVar13;
    if (plVar13[7] == 0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_0774e8e0);
      if (plVar13[7] == 0) {
        func_0x03256878(plVar13);
      }
    }
    puVar19 = PTR_DAT_07774b08;
    if ((plVar42 != (long *)0x0) && (puVar19 = PTR_DAT_077799b8, lVar29 != 0)) {
      lVar30 = *(long *)plVar13[7];
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar42;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3bbc4;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar11 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar42);
LAB_03d3bbc4:
      plVar42 = (long *)(*(code *)*puVar12)(plVar42,puVar12[1]);
      plVar45 = (long *)PTR_DAT_0774e8e0;
      puVar12 = (undefined8 *)0x0;
      plVar46 = (long *)0x7fffffff;
      while (plVar42 != (long *)0x0) {
        lVar30 = *plVar42;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *plVar45) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3bc34;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar42);
LAB_03d3bc34:
        uVar35 = (*(code *)*puVar17)(plVar42,puVar17[1]);
        if ((uVar35 & 1) == 0) {
          plVar13 = (long *)0x0;
          goto LAB_03d3bce0;
        }
        lVar30 = *(long *)(plVar13[7] + 0x18);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar31 = *plVar42;
        uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar30) {
              puVar17 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3bca8;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar42,lVar30,0);
LAB_03d3bca8:
        uVar15 = (*(code *)*puVar17)(plVar42,puVar17[1]);
        plVar11 = *(long **)(lVar29 + 0x28);
        uVar35 = (**(code **)(lVar29 + 0x18))(*(undefined8 *)(lVar29 + 0x40),uVar15);
        if ((uVar35 & 1) != 0) {
          if ((int)puVar12 == 0x7fffffff) goto LAB_03d3bd94;
          puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
        }
      }
      func_0x03280cac();
      puVar19 = PTR_DAT_07774b08;
    }
    uVar15 = func_0x03280a2c(puVar19);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,plVar13);
    while( true ) {
      func_0x03280ca4(plVar13);
LAB_03d3bd94:
      uVar15 = func_0x03280cbc();
      auVar50 = func_0x03280b7c(uVar15,plVar13);
      uVar15 = auVar50._0_8_;
      puVar12 = (undefined8 *)0x7fffffff;
      if (auVar50._8_4_ != 1) break;
      puVar17 = (undefined8 *)func_0x072ce910(uVar15);
      plVar13 = (long *)*puVar17;
      func_0x072ce920();
LAB_03d3bce0:
      if (plVar42 != (long *)0x0) {
        lVar29 = *plVar42;
        uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar35 != 0) {
          piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar17 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3bd38;
            }
            uVar35 = uVar35 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar35 != 0);
        }
        plVar11 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar42);
LAB_03d3bd38:
        (*(code *)*puVar17)(plVar42,puVar17[1]);
      }
      if (plVar13 == (long *)0x0) {
        return puVar12;
      }
    }
    if (plVar42 != (long *)0x0) {
      lVar29 = *plVar42;
      uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar29 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3be44;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar11 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar42);
LAB_03d3be44:
      (*(code *)*puVar12)(plVar42,puVar12[1]);
    }
    func_0x03365958(uVar15);
    func_0x03280ca4(0);
    auVar51 = func_0x02f09514();
    plVar13 = auVar51._0_8_;
    puVar43 = (undefined1 *)(lVar27 + -0x2a0);
    *(undefined1 **)(lVar27 + -0x2a0) = &stack0xffffffffffffff60;
    *(undefined8 *)(lVar27 + -0x298) = 0x3d3be68;
    *(undefined **)(lVar27 + -0x290) = unaff_x28;
    *(long **)(lVar27 + -0x288) = plVar48;
    *(long **)(lVar27 + -0x280) = plVar23;
    *(long **)(lVar27 + -0x278) = plVar14;
    *(long **)(lVar27 + -0x270) = plVar46;
    *(long **)(lVar27 + -0x268) = plVar45;
    *(undefined8 *)(lVar27 + -0x260) = uVar15;
    *(undefined8 *)(lVar27 + -600) = 0x7fffffff;
    *(undefined8 *)(lVar27 + -0x250) = 0;
    *(long **)(lVar27 + -0x248) = plVar42;
    lVar29 = tpidr_el0;
    *(undefined8 *)(lVar27 + -0x2a8) = *(undefined8 *)(lVar29 + 0x28);
    plVar23 = (long *)plVar11[7];
    if (plVar23 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_0774e8e0);
      plVar23 = (long *)plVar11[7];
      if (plVar23 == (long *)0x0) {
        func_0x03256878(plVar11);
        plVar23 = (long *)plVar11[7];
      }
    }
    uVar35 = (ulong)*(uint *)(plVar23[5] + 0xfc);
    uVar36 = uVar35 + 0xf & 0x1fffffff0;
    lVar30 = (lVar27 + -0x2c0) - uVar36;
    puVar12 = (undefined8 *)(lVar30 - uVar36);
    puVar47 = (undefined1 *)((long)puVar12 - uVar36);
    uVar36 = uVar35;
    func_0x072ce9a0(puVar47,0);
    puVar19 = PTR_DAT_07774b08;
    if ((plVar13 != (long *)0x0) && (puVar19 = PTR_DAT_077799b8, auVar51._8_8_ != 0)) {
      lVar31 = *plVar23;
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      lVar32 = *plVar13;
      uVar37 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar37 != 0) {
        piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar31) {
            puVar17 = (undefined8 *)(lVar32 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3bf80;
          }
          uVar37 = uVar37 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar37 != 0);
      }
      uVar36 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3bf80:
      plVar13 = (long *)(*(code *)*puVar17)(plVar13,puVar17[1]);
      unaff_x28 = PTR_DAT_0774e8e0;
      puVar17 = (undefined8 *)0x0;
      while (plVar13 != (long *)0x0) {
        lVar31 = *plVar13;
        uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar37 != 0) {
          piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)unaff_x28) {
              puVar18 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3bfec;
            }
            uVar37 = uVar37 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar37 != 0);
        }
        uVar36 = 0;
        puVar18 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3bfec:
        uVar37 = (*(code *)*puVar18)(plVar13,puVar18[1]);
        if ((uVar37 & 1) == 0) {
          plVar11 = (long *)0x0;
          goto LAB_03d3c0f4;
        }
        lVar31 = *(long *)(plVar11[7] + 0x18);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        lVar32 = *plVar13;
        uVar36 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar36 != 0) {
          piVar39 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == lVar31) {
              lVar31 = lVar32 + (long)*piVar39 * 0x10 + 0x138;
              goto LAB_03d3c060;
            }
            uVar36 = uVar36 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar36 != 0);
        }
        lVar31 = func_0x03256b10(plVar13,lVar31,0);
LAB_03d3c060:
        *(long *)(lVar27 + -0x2b8) = lVar30;
        lVar31 = *(long *)(lVar31 + 8);
        (**(code **)(lVar31 + 0x10))
                  (*(undefined8 *)(lVar31 + 8),lVar31,plVar13,lVar27 + -0x2b8,lVar30);
        func_0x072ce970(puVar47,lVar30,uVar35);
        func_0x072ce970(puVar12,puVar47,uVar35);
        puVar18 = puVar12;
        if (-1 < *(int *)(*(long *)(plVar11[7] + 0x28) + 0x28)) {
          puVar18 = (undefined8 *)*puVar12;
        }
        puVar24 = *(undefined8 **)(plVar11[7] + 0x30);
        uVar15 = *puVar24;
        *(undefined8 **)(lVar27 + -0x2b8) = puVar18;
        pplVar28 = (long **)(lVar27 + -0x2b8);
        uVar36 = auVar51._8_8_;
        (*(code *)puVar24[2])(uVar15);
        if (*(char *)(lVar27 + -0x2ac) != '\0') {
          if ((int)puVar17 == 0x7fffffff) goto LAB_03d3c1c4;
          puVar17 = (undefined8 *)(ulong)((int)puVar17 + 1);
        }
      }
      func_0x03280cac();
      puVar19 = PTR_DAT_07774b08;
    }
    uVar15 = func_0x03280a2c(puVar19);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,plVar11);
LAB_03d3c1bc:
    func_0x03280ca4(plVar11);
LAB_03d3c1c4:
    uVar15 = func_0x03280cbc();
    func_0x03280b7c(uVar15,plVar11);
    do {
      auVar50 = func_0x072ce990();
      uVar15 = auVar50._0_8_;
      puVar17 = (undefined8 *)0x7fffffff;
      if (auVar50._8_4_ != 1) {
        if (plVar13 == (long *)0x0) goto LAB_03d3c284;
        lVar31 = *plVar13;
        uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar37 == 0) goto LAB_03d3c25c;
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        goto LAB_03d3c244;
      }
      puVar18 = (undefined8 *)func_0x072ce910(uVar15);
      plVar11 = (long *)*puVar18;
      func_0x072ce920();
LAB_03d3c0f4:
      if (plVar13 != (long *)0x0) {
        lVar31 = *plVar13;
        uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar37 != 0) {
          piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar18 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
              goto LAB_03d3c14c;
            }
            uVar37 = uVar37 - 1;
            piVar39 = piVar39 + 4;
          } while (uVar37 != 0);
        }
        uVar36 = 0;
        puVar18 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3c14c:
        (*(code *)*puVar18)(plVar13,puVar18[1]);
      }
      if (plVar11 != (long *)0x0) goto LAB_03d3c1bc;
      if (*(long *)(lVar29 + 0x28) == *(long *)(lVar27 + -0x2a8)) {
        return puVar17;
      }
    } while( true );
  }
  lVar30 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  plVar11 = (long *)func_0x03280b90(plVar13,lVar30);
  puVar19 = PTR_DAT_0774f708;
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)func_0x03280b90(plVar13,*(undefined8 *)PTR_DAT_0774f708);
    if (plVar11 == (long *)0x0) {
      lVar30 = **(long **)(lVar29 + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar31 = *plVar13;
      uVar35 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar35 != 0) {
        piVar39 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == lVar30) {
            puVar12 = (undefined8 *)(lVar31 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_03d3b244;
          }
          uVar35 = uVar35 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar35 != 0);
      }
      plVar26 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03d3b244:
      plVar11 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      puVar19 = PTR_DAT_0774e8e0;
      if (plVar11 != (long *)0x0) {
        puVar12 = (undefined8 *)0x0;
        plVar45 = (long *)0x7fffffff;
        do {
          lVar30 = *plVar11;
          uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar35 != 0) {
            piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar39 + -2) == *(long *)puVar19) {
                puVar17 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
                goto LAB_03d3b2b4;
              }
              uVar35 = uVar35 - 1;
              piVar39 = piVar39 + 4;
            } while (uVar35 != 0);
          }
          plVar26 = (long *)0x0;
          puVar17 = (undefined8 *)func_0x03256b10(plVar11);
LAB_03d3b2b4:
          uVar35 = (*(code *)*puVar17)(plVar11,puVar17[1]);
          if ((uVar35 & 1) == 0) {
            lVar29 = 0;
            goto LAB_03d3b2d8;
          }
          if ((int)puVar12 == 0x7fffffff) goto LAB_03d3b354;
          puVar12 = (undefined8 *)(ulong)((int)puVar12 + 1);
        } while( true );
      }
      goto LAB_03d3b37c;
    }
    lVar29 = *plVar11;
    lVar27 = *(long *)puVar19;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          lVar29 = lVar29 + (long)(*piVar39 + 1) * 0x10;
LAB_03d3b21c:
          puVar12 = (undefined8 *)(lVar29 + 0x138);
          goto LAB_03d3b220;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    uVar15 = 1;
  }
  else {
    lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar29 = *plVar11;
    uVar35 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar35 != 0) {
      piVar39 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == lVar27) {
          lVar29 = lVar29 + (long)*piVar39 * 0x10;
          goto LAB_03d3b21c;
        }
        uVar35 = uVar35 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar35 != 0);
    }
    uVar15 = 0;
  }
  puVar12 = (undefined8 *)func_0x03256b10(plVar11,lVar27,uVar15);
LAB_03d3b220:
                    /* WARNING: Could not recover jumptable at 0x03d3b234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  return puVar12;
}


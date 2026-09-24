/* Ghidra 12.1.2 native pseudocode; RVA 0x4944D9C; MergeEngine.Util.WeightedItemList<TItem>.AddItems; status ok */


long * MergeEngine_Util_WeightedItemList_TItem___AddItems
                 (undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *unaff_x28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 auStack_190 [4];
  long alStack_170 [2];
  long alStack_160 [2];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [8];
  long alStack_138 [11];
  undefined8 *puStack_e0;
  long lStack_d8;
  
  lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  lVar13 = func_0x03280ca0(lVar13);
  lVar14 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  func_0x054221d4(lVar13,param_1,*(undefined8 *)(lVar14 + 0x80),*(undefined8 *)(lVar14 + 0x90));
  uVar9 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98);
  uVar8 = uVar9;
  if (*(long *)(uVar9 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar9 + 0x38) == 0) {
      func_0x03256878(uVar9);
    }
  }
  if (param_2 == (long *)0x0) goto LAB_03e0f290;
  lVar14 = **(long **)(uVar9 + 0x38);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
  }
  lVar10 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar15 != 0) {
    piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar14) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_03e0f108;
      }
      uVar15 = uVar15 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar15 != 0);
  }
  uVar8 = 0;
  puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_03e0f108:
  unaff_x20 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar22 = PTR_DAT_0774e8e0;
  if (unaff_x20 != (long *)0x0) {
    do {
      lVar14 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar22) {
            puVar3 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0f170;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      uVar8 = 0;
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f170:
      uVar15 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      if ((uVar15 & 1) == 0) {
        uVar9 = 0;
        goto LAB_03e0f210;
      }
      lVar14 = *(long *)(*(long *)(uVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar10 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar14) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0f1e4;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      uVar8 = 0;
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f1e4:
      uVar4 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      if (lVar13 == 0) goto LAB_03e0f28c;
      uVar8 = *(ulong *)(lVar13 + 0x28);
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40));
    } while( true );
  }
LAB_03e0f294:
  func_0x03280cac();
  while( true ) {
    auVar24 = func_0x03280ca4(uVar9);
    if (auVar24._8_4_ != 1) break;
    puVar5 = (ulong *)func_0x072ce910(auVar24._0_8_);
    uVar9 = *puVar5;
    func_0x072ce920();
LAB_03e0f210:
    if (unaff_x20 != (long *)0x0) {
      lVar13 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0f268;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      uVar8 = 0;
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f268:
      (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    }
    if (uVar9 == 0) {
      return param_2;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar13 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0f334;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar9 != 0);
    }
    uVar8 = 0;
    puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f334:
    (*(code *)*puVar3)(unaff_x20,puVar3[1]);
  }
  func_0x03365958(auVar24._0_8_);
  func_0x03280ca4(0);
  auVar23 = func_0x02f09514();
  lVar13 = auVar23._8_8_;
  plVar19 = auVar23._0_8_;
  uVar9 = uVar8;
  if (*(long *)(uVar8 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar8 + 0x38) == 0) {
      func_0x03256878(uVar8);
    }
  }
  if (plVar19 == (long *)0x0) {
LAB_03e0f5a8:
    func_0x03280cac();
  }
  else {
    lVar14 = **(long **)(uVar8 + 0x38);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar10 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar14) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0f40c;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    uVar9 = 0;
    puVar3 = (undefined8 *)func_0x03256b10(plVar19);
LAB_03e0f40c:
    unaff_x20 = (long *)(*(code *)*puVar3)(plVar19,puVar3[1]);
    puVar22 = PTR_DAT_0774e8e0;
    if (unaff_x20 != (long *)0x0) {
      uVar15 = 0;
      do {
        lVar14 = *unaff_x20;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar22) {
              puVar3 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e0f478;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        uVar9 = 0;
        puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f478:
        uVar16 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
        if ((uVar16 & 1) == 0) {
          uVar8 = 0;
          goto LAB_03e0f524;
        }
        lVar14 = *(long *)(*(long *)(uVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar10 = *unaff_x20;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar14) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e0f4ec;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        uVar9 = 0;
        puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f4ec:
        uVar4 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
        if (lVar13 == 0) goto LAB_03e0f5a4;
        iVar2 = (int)uVar15;
        (**(code **)(lVar13 + 0x18))
                  (*(undefined8 *)(lVar13 + 0x40),uVar4,uVar15,*(undefined8 *)(lVar13 + 0x28));
        uVar9 = uVar15;
        uVar15 = (ulong)(iVar2 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar24 = func_0x03280ca4(uVar8);
    if (auVar24._8_4_ != 1) break;
    puVar5 = (ulong *)func_0x072ce910(auVar24._0_8_);
    uVar8 = *puVar5;
    func_0x072ce920();
LAB_03e0f524:
    if (unaff_x20 != (long *)0x0) {
      lVar13 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0f57c;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      uVar9 = 0;
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f57c:
      (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    }
    if (uVar8 == 0) {
      return plVar19;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar13 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0f64c;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    uVar9 = 0;
    puVar3 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f64c:
    (*(code *)*puVar3)(unaff_x20,puVar3[1]);
  }
  func_0x03365958(auVar24._0_8_);
  func_0x03280ca4(0);
  auVar23 = func_0x02f09514();
  uVar8 = auVar23._8_8_;
  plVar19 = auVar23._0_8_;
  lVar13 = tpidr_el0;
  lStack_d8 = *(long *)(lVar13 + 0x28);
  plVar20 = *(long **)(uVar9 + 0x38);
  if (plVar20 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar20 = *(long **)(uVar9 + 0x38);
    if (plVar20 == (long *)0x0) {
      func_0x03256878(uVar9);
      plVar20 = *(long **)(uVar9 + 0x38);
    }
  }
  uVar16 = (ulong)*(uint *)(plVar20[4] + 0xfc);
  uVar15 = uVar16 + 0xf & 0x1fffffff0;
  puVar3 = (undefined8 *)((long)&puStack_e0 - uVar15);
  puVar21 = (undefined8 *)((long)puVar3 - uVar15);
  lVar14 = (long)puVar21 - uVar15;
  uVar15 = uVar16;
  func_0x072ce9a0(lVar14,0);
  puVar22 = unaff_x28;
  if (plVar19 == (long *)0x0) {
LAB_03e0f97c:
    func_0x03280cac();
    unaff_x28 = puVar22;
  }
  else {
    lVar10 = *plVar20;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar11 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0f784;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    uVar15 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar19);
LAB_03e0f784:
    plVar20 = (long *)(*(code *)*puVar6)(plVar19,puVar6[1]);
    puVar22 = PTR_DAT_0774e8e0;
    if (plVar20 != (long *)0x0) {
      do {
        lVar10 = *plVar20;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar22) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e0f7ec;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        uVar15 = 0;
        puVar6 = (undefined8 *)func_0x03256b10(plVar20);
LAB_03e0f7ec:
        uVar17 = (*(code *)*puVar6)(plVar20,puVar6[1]);
        if ((uVar17 & 1) == 0) {
          uVar9 = 0;
          goto LAB_03e0f8dc;
        }
        lVar10 = *(long *)(*(long *)(uVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar11 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar10) {
              lVar10 = lVar11 + (long)*piVar18 * 0x10 + 0x138;
              goto LAB_03e0f860;
            }
            uVar15 = uVar15 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar15 != 0);
        }
        lVar10 = func_0x03256b10(plVar20,lVar10,0);
LAB_03e0f860:
        lVar10 = *(long *)(lVar10 + 8);
        puStack_e0 = puVar3;
        (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar20,&puStack_e0,puVar3);
        func_0x072ce970(lVar14,puVar3,uVar16);
        uVar15 = uVar16;
        func_0x072ce970(puVar21,lVar14);
        if (uVar8 == 0) goto LAB_03e0f978;
        puStack_e0 = puVar21;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar9 + 0x38) + 0x20) + 0x28)) {
          puStack_e0 = (undefined8 *)*puVar21;
        }
        puVar6 = *(undefined8 **)(*(long *)(uVar9 + 0x38) + 0x30);
        uVar15 = uVar8;
        (*(code *)puVar6[2])(*puVar6,puVar6,uVar8,&puStack_e0);
      } while( true );
    }
  }
  puVar22 = unaff_x28;
  func_0x03280cac();
LAB_03e0f984:
  func_0x03280ca4(uVar9);
  do {
    auVar24 = func_0x072ce990();
    uVar4 = auVar24._0_8_;
    if (auVar24._8_4_ != 1) {
      if (plVar20 == (long *)0x0) goto LAB_03e0fa30;
      lVar10 = *plVar20;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_03e0fa08;
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_03e0f9f0;
    }
    puVar5 = (ulong *)func_0x072ce910(uVar4);
    uVar9 = *puVar5;
    func_0x072ce920();
LAB_03e0f8dc:
    if (plVar20 != (long *)0x0) {
      lVar10 = *plVar20;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0f934;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      uVar15 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar20);
LAB_03e0f934:
      (*(code *)*puVar6)(plVar20,puVar6[1]);
    }
    if (uVar9 != 0) goto LAB_03e0f984;
    if (*(long *)(lVar13 + 0x28) == lStack_d8) {
      return plVar19;
    }
  } while( true );
LAB_03e0f28c:
  func_0x03280cac(uVar4,uVar4);
LAB_03e0f290:
  func_0x03280cac();
  goto LAB_03e0f294;
LAB_03e0f5a4:
  func_0x03280cac(uVar4,uVar4);
  goto LAB_03e0f5a8;
LAB_03e0f978:
  func_0x03280cac();
  goto LAB_03e0f97c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar18 = piVar18 + 4;
    if (uVar8 == 0) break;
LAB_03e0f9f0:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03e0fa24;
    }
  }
LAB_03e0fa08:
  uVar15 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar20);
LAB_03e0fa24:
  (*(code *)*puVar6)(plVar20,puVar6[1]);
LAB_03e0fa30:
  func_0x03365958(uVar4);
  func_0x03280ca4(0);
  auVar23 = func_0x02f09514();
  plVar7 = auVar23._0_8_;
  *(undefined1 **)(lVar14 + -0x60) = &stack0xffffffffffffff30;
  *(undefined8 *)(lVar14 + -0x58) = 0x3e0fa48;
  *(undefined **)(lVar14 + -0x50) = puVar22;
  *(long *)(lVar14 + -0x48) = lVar13;
  *(long *)(lVar14 + -0x40) = lVar14;
  *(undefined8 **)(lVar14 + -0x38) = puVar21;
  *(undefined8 **)(lVar14 + -0x30) = puVar3;
  *(ulong *)(lVar14 + -0x28) = uVar16;
  *(undefined8 *)(lVar14 + -0x20) = uVar4;
  *(undefined8 *)(lVar14 + -0x18) = 0;
  *(long **)(lVar14 + -0x10) = plVar20;
  *(long **)(lVar14 + -8) = plVar19;
  lVar13 = tpidr_el0;
  *(long *)(lVar14 + -0x88) = lVar13;
  *(undefined8 *)(lVar14 + -0x68) = *(undefined8 *)(lVar13 + 0x28);
  plVar19 = *(long **)(uVar15 + 0x38);
  if (plVar19 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar19 = *(long **)(uVar15 + 0x38);
    if (plVar19 == (long *)0x0) {
      func_0x03256878(uVar15);
      plVar19 = *(long **)(uVar15 + 0x38);
    }
  }
  uVar9 = (ulong)*(uint *)(plVar19[4] + 0xfc);
  uVar8 = uVar9 + 0xf & 0x1fffffff0;
  lVar13 = (lVar14 + -0x90) - uVar8;
  puVar3 = (undefined8 *)(lVar13 - uVar8);
  lVar10 = (long)puVar3 - uVar8;
  func_0x072ce9a0(lVar10,0,uVar9);
  plVar20 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar19;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar12 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar21 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0fb60;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar7,lVar11,0);
LAB_03e0fb60:
    pcVar1 = (code *)*puVar21;
    uVar4 = puVar21[1];
    *(long **)(lVar14 + -0x90) = plVar7;
    plVar20 = (long *)(*pcVar1)(plVar7,uVar4);
    puVar22 = PTR_DAT_0774e8e0;
    if (plVar20 != (long *)0x0) {
      iVar2 = 0;
      plVar19 = (long *)(lVar14 + -0x6c);
      do {
        lVar11 = *plVar20;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar22) {
              puVar21 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e0fbd4;
            }
            uVar8 = uVar8 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar8 != 0);
        }
        puVar21 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar22,0);
LAB_03e0fbd4:
        uVar8 = (*(code *)*puVar21)(plVar20,puVar21[1]);
        if ((uVar8 & 1) == 0) {
          uVar15 = 0;
          goto LAB_03e0fcd0;
        }
        lVar11 = *(long *)(*(long *)(uVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar12 = *plVar20;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              lVar11 = lVar12 + (long)*piVar18 * 0x10 + 0x138;
              goto LAB_03e0fc48;
            }
            uVar8 = uVar8 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar8 != 0);
        }
        lVar11 = func_0x03256b10(plVar20,lVar11,0);
LAB_03e0fc48:
        *(long *)(lVar14 + -0x80) = lVar13;
        lVar11 = *(long *)(lVar11 + 8);
        (**(code **)(lVar11 + 0x10))
                  (*(undefined8 *)(lVar11 + 8),lVar11,plVar20,lVar14 + -0x80,lVar13);
        func_0x072ce970(lVar10,lVar13,uVar9);
        func_0x072ce970(puVar3,lVar10,uVar9);
        if (auVar23._8_8_ == 0) goto LAB_03e0fd6c;
        puVar21 = puVar3;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar15 + 0x38) + 0x20) + 0x28)) {
          puVar21 = (undefined8 *)*puVar3;
        }
        puVar6 = *(undefined8 **)(*(long *)(uVar15 + 0x38) + 0x30);
        uVar4 = *puVar6;
        *(int *)(lVar14 + -0x6c) = iVar2;
        *(undefined8 **)(lVar14 + -0x80) = puVar21;
        *(long **)(lVar14 + -0x78) = plVar19;
        (*(code *)puVar6[2])(uVar4,puVar6,auVar23._8_8_,lVar14 + -0x80,lVar14 + -0x6c);
        iVar2 = iVar2 + 1;
      } while( true );
    }
    goto LAB_03e0fd74;
  }
LAB_03e0fd70:
  func_0x03280cac();
LAB_03e0fd74:
  func_0x03280cac();
LAB_03e0fd78:
  plVar7 = (long *)func_0x03280ca4(uVar15);
  do {
    auVar24 = func_0x072ce990(plVar7);
    if (auVar24._8_4_ != 1) {
      if (plVar20 == (long *)0x0) goto LAB_03e0fe24;
      lVar13 = *plVar20;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_03e0fdfc;
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_03e0fde4;
    }
    puVar5 = (ulong *)func_0x072ce910(auVar24._0_8_);
    uVar15 = *puVar5;
    func_0x072ce920();
LAB_03e0fcd0:
    if (plVar20 != (long *)0x0) {
      lVar13 = *plVar20;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e0fd28;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fd28:
      (*(code *)*puVar3)(plVar20,puVar3[1]);
    }
    if (uVar15 != 0) goto LAB_03e0fd78;
    plVar7 = *(long **)(lVar14 + -0x90);
    if (*(long *)(*(long *)(lVar14 + -0x88) + 0x28) == *(long *)(lVar14 + -0x68)) {
      return plVar7;
    }
  } while( true );
LAB_03e0fd6c:
  func_0x03280cac();
  goto LAB_03e0fd70;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar18 = piVar18 + 4;
    if (uVar8 == 0) break;
LAB_03e0fde4:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar3 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03e0fe18;
    }
  }
LAB_03e0fdfc:
  puVar3 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fe18:
  (*(code *)*puVar3)(plVar20,puVar3[1]);
LAB_03e0fe24:
  func_0x03365958(auVar24._0_8_);
  func_0x03280ca4(0);
  auVar23 = func_0x02f09514();
  lVar13 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  *(undefined8 *)(lVar10 + -0x20) = 0x3e0fe3c;
  *(long **)(lVar10 + -0x10) = plVar20;
  *(long **)(lVar10 + -8) = plVar19;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (plVar7 == (long *)0x0) {
    plVar19 = (long *)0x1;
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar14 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar13) {
          puVar3 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03e0fed0;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar7,lVar13,0);
LAB_03e0fed0:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    plVar19 = (long *)(ulong)(iVar2 == 0);
  }
  return plVar19;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x666BF9C; MergeEngine.ECS.Systems.Board.ChargableSystem.OnAllSystemsInitialized; status ok */


long * MergeEngine_ECS_Systems_Board_ChargableSystem__OnAllSystemsInitialized(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  long *unaff_x20;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *unaff_x28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 auStack_190 [4];
  long alStack_170 [2];
  long alStack_160 [2];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [8];
  long alStack_138 [11];
  undefined8 *puStack_e0;
  long lStack_d8;
  
  puVar3 = PTR_DAT_07807f98;
  puVar2 = PTR_DAT_07807f90;
  puVar24 = PTR_DAT_0774e758;
  if ((bRam0000000007e280ee & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807fa0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07807f90);
    func_0x03280a18(PTR_DAT_07807fa8);
    func_0x03280a18(PTR_DAT_07807fb0);
    func_0x03280a18(PTR_DAT_07807f98);
    bRam0000000007e280ee = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar24);
  func_0x056ed730(uVar9,param_1,*(undefined8 *)puVar2,0);
  func_0x064a6d6c(param_1,uVar9,0);
  plVar10 = (long *)func_0x03eb6ac8(param_1,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_07807fb0;
  puVar24 = PTR_DAT_07807fa8;
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807fa0);
  func_0x054221d4(lVar11,param_1,*(undefined8 *)puVar24,0);
  uVar14 = *(ulong *)puVar2;
  uVar13 = uVar14;
  if (*(long *)(uVar14 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar14 + 0x38) == 0) {
      func_0x03256878(uVar14);
    }
  }
  if (plVar10 == (long *)0x0) goto LAB_03e0f290;
  lVar12 = **(long **)(uVar14 + 0x38);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar15 = *plVar10;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar12) {
        puVar5 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_03e0f108;
      }
      uVar18 = uVar18 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar18 != 0);
  }
  uVar13 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e0f108:
  unaff_x20 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
  puVar24 = PTR_DAT_0774e8e0;
  if (unaff_x20 != (long *)0x0) {
    do {
      lVar12 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar18 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar24) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0f170;
          }
          uVar18 = uVar18 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar18 != 0);
      }
      uVar13 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f170:
      uVar18 = (*(code *)*puVar5)(unaff_x20,puVar5[1]);
      if ((uVar18 & 1) == 0) {
        uVar14 = 0;
        goto LAB_03e0f210;
      }
      lVar12 = *(long *)(*(long *)(uVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar5 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0f1e4;
          }
          uVar18 = uVar18 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar18 != 0);
      }
      uVar13 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f1e4:
      uVar9 = (*(code *)*puVar5)(unaff_x20,puVar5[1]);
      if (lVar11 == 0) goto LAB_03e0f28c;
      uVar13 = *(ulong *)(lVar11 + 0x28);
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40));
    } while( true );
  }
LAB_03e0f294:
  func_0x03280cac();
  while( true ) {
    auVar26 = func_0x03280ca4(uVar14);
    if (auVar26._8_4_ != 1) break;
    puVar6 = (ulong *)func_0x072ce910(auVar26._0_8_);
    uVar14 = *puVar6;
    func_0x072ce920();
LAB_03e0f210:
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar18 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0f268;
          }
          uVar18 = uVar18 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar18 != 0);
      }
      uVar13 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f268:
      (*(code *)*puVar5)(unaff_x20,puVar5[1]);
    }
    if (uVar14 == 0) {
      return plVar10;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar11 = *unaff_x20;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0f334;
        }
        uVar14 = uVar14 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar14 != 0);
    }
    uVar13 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f334:
    (*(code *)*puVar5)(unaff_x20,puVar5[1]);
  }
  func_0x03365958(auVar26._0_8_);
  func_0x03280ca4(0);
  auVar25 = func_0x02f09514();
  lVar11 = auVar25._8_8_;
  plVar10 = auVar25._0_8_;
  uVar14 = uVar13;
  if (*(long *)(uVar13 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar13 + 0x38) == 0) {
      func_0x03256878(uVar13);
    }
  }
  if (plVar10 == (long *)0x0) {
LAB_03e0f5a8:
    func_0x03280cac();
  }
  else {
    lVar12 = **(long **)(uVar13 + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar15 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar5 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0f40c;
        }
        uVar18 = uVar18 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar18 != 0);
    }
    uVar14 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e0f40c:
    unaff_x20 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    puVar24 = PTR_DAT_0774e8e0;
    if (unaff_x20 != (long *)0x0) {
      uVar18 = 0;
      do {
        lVar12 = *unaff_x20;
        uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar24) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e0f478;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        uVar14 = 0;
        puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f478:
        uVar19 = (*(code *)*puVar5)(unaff_x20,puVar5[1]);
        if ((uVar19 & 1) == 0) {
          uVar13 = 0;
          goto LAB_03e0f524;
        }
        lVar12 = *(long *)(*(long *)(uVar13 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar15 = *unaff_x20;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar12) {
              puVar5 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e0f4ec;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        uVar14 = 0;
        puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f4ec:
        uVar9 = (*(code *)*puVar5)(unaff_x20,puVar5[1]);
        if (lVar11 == 0) goto LAB_03e0f5a4;
        iVar4 = (int)uVar18;
        (**(code **)(lVar11 + 0x18))
                  (*(undefined8 *)(lVar11 + 0x40),uVar9,uVar18,*(undefined8 *)(lVar11 + 0x28));
        uVar14 = uVar18;
        uVar18 = (ulong)(iVar4 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar26 = func_0x03280ca4(uVar13);
    if (auVar26._8_4_ != 1) break;
    puVar6 = (ulong *)func_0x072ce910(auVar26._0_8_);
    uVar13 = *puVar6;
    func_0x072ce920();
LAB_03e0f524:
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar18 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0f57c;
          }
          uVar18 = uVar18 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar18 != 0);
      }
      uVar14 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f57c:
      (*(code *)*puVar5)(unaff_x20,puVar5[1]);
    }
    if (uVar13 == 0) {
      return plVar10;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar11 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0f64c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    uVar14 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f64c:
    (*(code *)*puVar5)(unaff_x20,puVar5[1]);
  }
  func_0x03365958(auVar26._0_8_);
  func_0x03280ca4(0);
  auVar25 = func_0x02f09514();
  uVar13 = auVar25._8_8_;
  plVar10 = auVar25._0_8_;
  lVar11 = tpidr_el0;
  lStack_d8 = *(long *)(lVar11 + 0x28);
  plVar22 = *(long **)(uVar14 + 0x38);
  if (plVar22 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar22 = *(long **)(uVar14 + 0x38);
    if (plVar22 == (long *)0x0) {
      func_0x03256878(uVar14);
      plVar22 = *(long **)(uVar14 + 0x38);
    }
  }
  uVar19 = (ulong)*(uint *)(plVar22[4] + 0xfc);
  uVar18 = uVar19 + 0xf & 0x1fffffff0;
  puVar5 = (undefined8 *)((long)&puStack_e0 - uVar18);
  puVar23 = (undefined8 *)((long)puVar5 - uVar18);
  lVar12 = (long)puVar23 - uVar18;
  uVar18 = uVar19;
  func_0x072ce9a0(lVar12,0);
  puVar24 = unaff_x28;
  if (plVar10 == (long *)0x0) {
LAB_03e0f97c:
    func_0x03280cac();
    unaff_x28 = puVar24;
  }
  else {
    lVar15 = *plVar22;
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar16 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0f784;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    uVar18 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e0f784:
    plVar22 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
    puVar24 = PTR_DAT_0774e8e0;
    if (plVar22 != (long *)0x0) {
      do {
        lVar15 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar24) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e0f7ec;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        uVar18 = 0;
        puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_03e0f7ec:
        uVar20 = (*(code *)*puVar7)(plVar22,puVar7[1]);
        if ((uVar20 & 1) == 0) {
          uVar14 = 0;
          goto LAB_03e0f8dc;
        }
        lVar15 = *(long *)(*(long *)(uVar14 + 0x38) + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar16 = *plVar22;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar15) {
              lVar15 = lVar16 + (long)*piVar21 * 0x10 + 0x138;
              goto LAB_03e0f860;
            }
            uVar18 = uVar18 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar18 != 0);
        }
        lVar15 = func_0x03256b10(plVar22,lVar15,0);
LAB_03e0f860:
        lVar15 = *(long *)(lVar15 + 8);
        puStack_e0 = puVar5;
        (**(code **)(lVar15 + 0x10))(*(undefined8 *)(lVar15 + 8),lVar15,plVar22,&puStack_e0,puVar5);
        func_0x072ce970(lVar12,puVar5,uVar19);
        uVar18 = uVar19;
        func_0x072ce970(puVar23,lVar12);
        if (uVar13 == 0) goto LAB_03e0f978;
        puStack_e0 = puVar23;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar14 + 0x38) + 0x20) + 0x28)) {
          puStack_e0 = (undefined8 *)*puVar23;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar14 + 0x38) + 0x30);
        uVar18 = uVar13;
        (*(code *)puVar7[2])(*puVar7,puVar7,uVar13,&puStack_e0);
      } while( true );
    }
  }
  puVar24 = unaff_x28;
  func_0x03280cac();
LAB_03e0f984:
  func_0x03280ca4(uVar14);
  do {
    auVar26 = func_0x072ce990();
    uVar9 = auVar26._0_8_;
    if (auVar26._8_4_ != 1) {
      if (plVar22 == (long *)0x0) goto LAB_03e0fa30;
      lVar15 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 == 0) goto LAB_03e0fa08;
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      goto LAB_03e0f9f0;
    }
    puVar6 = (ulong *)func_0x072ce910(uVar9);
    uVar14 = *puVar6;
    func_0x072ce920();
LAB_03e0f8dc:
    if (plVar22 != (long *)0x0) {
      lVar15 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0f934;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      uVar18 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_03e0f934:
      (*(code *)*puVar7)(plVar22,puVar7[1]);
    }
    if (uVar14 != 0) goto LAB_03e0f984;
    if (*(long *)(lVar11 + 0x28) == lStack_d8) {
      return plVar10;
    }
  } while( true );
LAB_03e0f28c:
  func_0x03280cac(uVar9,uVar9);
LAB_03e0f290:
  func_0x03280cac();
  goto LAB_03e0f294;
LAB_03e0f5a4:
  func_0x03280cac(uVar9,uVar9);
  goto LAB_03e0f5a8;
LAB_03e0f978:
  func_0x03280cac();
  goto LAB_03e0f97c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar21 = piVar21 + 4;
    if (uVar13 == 0) break;
LAB_03e0f9f0:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03e0fa24;
    }
  }
LAB_03e0fa08:
  uVar18 = 0;
  puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_03e0fa24:
  (*(code *)*puVar7)(plVar22,puVar7[1]);
LAB_03e0fa30:
  func_0x03365958(uVar9);
  func_0x03280ca4(0);
  auVar25 = func_0x02f09514();
  plVar8 = auVar25._0_8_;
  *(undefined1 **)(lVar12 + -0x60) = &stack0xffffffffffffff30;
  *(undefined8 *)(lVar12 + -0x58) = 0x3e0fa48;
  *(undefined **)(lVar12 + -0x50) = puVar24;
  *(long *)(lVar12 + -0x48) = lVar11;
  *(long *)(lVar12 + -0x40) = lVar12;
  *(undefined8 **)(lVar12 + -0x38) = puVar23;
  *(undefined8 **)(lVar12 + -0x30) = puVar5;
  *(ulong *)(lVar12 + -0x28) = uVar19;
  *(undefined8 *)(lVar12 + -0x20) = uVar9;
  *(undefined8 *)(lVar12 + -0x18) = 0;
  *(long **)(lVar12 + -0x10) = plVar22;
  *(long **)(lVar12 + -8) = plVar10;
  lVar11 = tpidr_el0;
  *(long *)(lVar12 + -0x88) = lVar11;
  *(undefined8 *)(lVar12 + -0x68) = *(undefined8 *)(lVar11 + 0x28);
  plVar10 = *(long **)(uVar18 + 0x38);
  if (plVar10 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar10 = *(long **)(uVar18 + 0x38);
    if (plVar10 == (long *)0x0) {
      func_0x03256878(uVar18);
      plVar10 = *(long **)(uVar18 + 0x38);
    }
  }
  uVar14 = (ulong)*(uint *)(plVar10[4] + 0xfc);
  uVar13 = uVar14 + 0xf & 0x1fffffff0;
  lVar11 = (lVar12 + -0x90) - uVar13;
  puVar5 = (undefined8 *)(lVar11 - uVar13);
  lVar15 = (long)puVar5 - uVar13;
  func_0x072ce9a0(lVar15,0,uVar14);
  plVar22 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    lVar16 = *plVar10;
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar17 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar16) {
          puVar23 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0fb60;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar23 = (undefined8 *)func_0x03256b10(plVar8,lVar16,0);
LAB_03e0fb60:
    pcVar1 = (code *)*puVar23;
    uVar9 = puVar23[1];
    *(long **)(lVar12 + -0x90) = plVar8;
    plVar22 = (long *)(*pcVar1)(plVar8,uVar9);
    puVar24 = PTR_DAT_0774e8e0;
    if (plVar22 != (long *)0x0) {
      iVar4 = 0;
      plVar10 = (long *)(lVar12 + -0x6c);
      do {
        lVar16 = *plVar22;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar24) {
              puVar23 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e0fbd4;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar23 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar24,0);
LAB_03e0fbd4:
        uVar13 = (*(code *)*puVar23)(plVar22,puVar23[1]);
        if ((uVar13 & 1) == 0) {
          uVar18 = 0;
          goto LAB_03e0fcd0;
        }
        lVar16 = *(long *)(*(long *)(uVar18 + 0x38) + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar17 = *plVar22;
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar16) {
              lVar16 = lVar17 + (long)*piVar21 * 0x10 + 0x138;
              goto LAB_03e0fc48;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        lVar16 = func_0x03256b10(plVar22,lVar16,0);
LAB_03e0fc48:
        *(long *)(lVar12 + -0x80) = lVar11;
        lVar16 = *(long *)(lVar16 + 8);
        (**(code **)(lVar16 + 0x10))
                  (*(undefined8 *)(lVar16 + 8),lVar16,plVar22,lVar12 + -0x80,lVar11);
        func_0x072ce970(lVar15,lVar11,uVar14);
        func_0x072ce970(puVar5,lVar15,uVar14);
        if (auVar25._8_8_ == 0) goto LAB_03e0fd6c;
        puVar23 = puVar5;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar18 + 0x38) + 0x20) + 0x28)) {
          puVar23 = (undefined8 *)*puVar5;
        }
        puVar7 = *(undefined8 **)(*(long *)(uVar18 + 0x38) + 0x30);
        uVar9 = *puVar7;
        *(int *)(lVar12 + -0x6c) = iVar4;
        *(undefined8 **)(lVar12 + -0x80) = puVar23;
        *(long **)(lVar12 + -0x78) = plVar10;
        (*(code *)puVar7[2])(uVar9,puVar7,auVar25._8_8_,lVar12 + -0x80,lVar12 + -0x6c);
        iVar4 = iVar4 + 1;
      } while( true );
    }
    goto LAB_03e0fd74;
  }
LAB_03e0fd70:
  func_0x03280cac();
LAB_03e0fd74:
  func_0x03280cac();
LAB_03e0fd78:
  plVar8 = (long *)func_0x03280ca4(uVar18);
  do {
    auVar26 = func_0x072ce990(plVar8);
    if (auVar26._8_4_ != 1) {
      if (plVar22 == (long *)0x0) goto LAB_03e0fe24;
      lVar11 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_03e0fdfc;
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_03e0fde4;
    }
    puVar6 = (ulong *)func_0x072ce910(auVar26._0_8_);
    uVar18 = *puVar6;
    func_0x072ce920();
LAB_03e0fcd0:
    if (plVar22 != (long *)0x0) {
      lVar11 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e0fd28;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fd28:
      (*(code *)*puVar5)(plVar22,puVar5[1]);
    }
    if (uVar18 != 0) goto LAB_03e0fd78;
    plVar8 = *(long **)(lVar12 + -0x90);
    if (*(long *)(*(long *)(lVar12 + -0x88) + 0x28) == *(long *)(lVar12 + -0x68)) {
      return plVar8;
    }
  } while( true );
LAB_03e0fd6c:
  func_0x03280cac();
  goto LAB_03e0fd70;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar21 = piVar21 + 4;
    if (uVar13 == 0) break;
LAB_03e0fde4:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03e0fe18;
    }
  }
LAB_03e0fdfc:
  puVar5 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fe18:
  (*(code *)*puVar5)(plVar22,puVar5[1]);
LAB_03e0fe24:
  func_0x03365958(auVar26._0_8_);
  func_0x03280ca4(0);
  auVar25 = func_0x02f09514();
  lVar11 = auVar25._8_8_;
  plVar8 = auVar25._0_8_;
  *(undefined8 *)(lVar15 + -0x20) = 0x3e0fe3c;
  *(long **)(lVar15 + -0x10) = plVar22;
  *(long **)(lVar15 + -8) = plVar10;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar8 == (long *)0x0) {
    plVar10 = (long *)0x1;
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar11) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e0fed0;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e0fed0:
    iVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    plVar10 = (long *)(ulong)(iVar4 == 0);
  }
  return plVar10;
}


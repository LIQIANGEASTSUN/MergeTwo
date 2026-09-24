/* Ghidra 12.1.2 native pseudocode; RVA 0x673105C; Merger.Game.Views.BoardItem.BoardItemView2.NotifyBehaviourAdded; status ok */

long * Merger_Game_Views_BoardItem_BoardItemView2__NotifyBehaviourAdded(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *extraout_x8;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  long *unaff_x20;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *unaff_x28;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 auStack_190 [4];
  long alStack_170 [2];
  long alStack_160 [2];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [8];
  long alStack_138 [11];
  undefined8 *puStack_e0;
  long lStack_d8;
  
  if ((bRam0000000007e28984 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d798);
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d7b0);
    func_0x03280a18(PTR_DAT_0780d858);
    func_0x03280a18(PTR_DAT_0780d7f0);
    bRam0000000007e28984 = 1;
  }
  puVar23 = PTR_DAT_0780d7f0;
  if (*(long *)(param_1 + 0x90) == 0) {
    plVar8 = (long *)func_0x03280cac();
    lVar20 = plVar8[0x1e];
    lVar15 = plVar8[0x1d];
    lVar12 = plVar8[0x1b];
    lVar14 = plVar8[0x1a];
    lVar13 = plVar8[0x19];
    lVar25 = plVar8[0x18];
    lVar24 = plVar8[0x17];
    extraout_x8[5] = plVar8[0x1c];
    extraout_x8[4] = lVar12;
    extraout_x8[7] = lVar20;
    extraout_x8[6] = lVar15;
    extraout_x8[1] = lVar25;
    *extraout_x8 = lVar24;
    extraout_x8[3] = lVar14;
    extraout_x8[2] = lVar13;
    return plVar8;
  }
  plVar8 = (long *)func_0x04fe2bac(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8);
  lVar15 = *(long *)puVar23;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c(lVar15);
    lVar15 = *(long *)puVar23;
  }
  puVar2 = PTR_DAT_0780d7b0;
  lVar20 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar20 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c(lVar15);
      lVar15 = *(long *)puVar23;
    }
    uVar21 = **(undefined8 **)(lVar15 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d798);
    func_0x054221d4(lVar20,uVar21,*(undefined8 *)PTR_DAT_0780d858,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar23 + 0xb8) + 0x10);
    *plVar9 = lVar20;
    func_0x032809c4(plVar9,lVar20);
  }
  uVar11 = *(ulong *)puVar2;
  uVar10 = uVar11;
  if (*(long *)(uVar11 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar11 + 0x38) == 0) {
      func_0x03256878(uVar11);
    }
  }
  if (plVar8 == (long *)0x0) goto LAB_03e0f290;
  lVar15 = **(long **)(uVar11 + 0x38);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  lVar12 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar16 != 0) {
    piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar15) {
        puVar4 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_03e0f108;
      }
      uVar16 = uVar16 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar16 != 0);
  }
  uVar10 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e0f108:
  unaff_x20 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  puVar23 = PTR_DAT_0774e8e0;
  if (unaff_x20 != (long *)0x0) {
    do {
      lVar15 = *unaff_x20;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar23) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0f170;
          }
          uVar16 = uVar16 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar16 != 0);
      }
      uVar10 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f170:
      uVar16 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      if ((uVar16 & 1) == 0) {
        uVar11 = 0;
        goto LAB_03e0f210;
      }
      lVar15 = *(long *)(*(long *)(uVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar12 = *unaff_x20;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0f1e4;
          }
          uVar16 = uVar16 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar16 != 0);
      }
      uVar10 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f1e4:
      uVar21 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      if (lVar20 == 0) goto LAB_03e0f28c;
      uVar10 = *(ulong *)(lVar20 + 0x28);
      (**(code **)(lVar20 + 0x18))(*(undefined8 *)(lVar20 + 0x40));
    } while( true );
  }
LAB_03e0f294:
  func_0x03280cac();
  while( true ) {
    auVar27 = func_0x03280ca4(uVar11);
    if (auVar27._8_4_ != 1) break;
    puVar5 = (ulong *)func_0x072ce910(auVar27._0_8_);
    uVar11 = *puVar5;
    func_0x072ce920();
LAB_03e0f210:
    if (unaff_x20 != (long *)0x0) {
      lVar15 = *unaff_x20;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0f268;
          }
          uVar16 = uVar16 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar16 != 0);
      }
      uVar10 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f268:
      (*(code *)*puVar4)(unaff_x20,puVar4[1]);
    }
    if (uVar11 == 0) {
      return plVar8;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar15 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0f334;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    uVar10 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f334:
    (*(code *)*puVar4)(unaff_x20,puVar4[1]);
  }
  func_0x03365958(auVar27._0_8_);
  func_0x03280ca4(0);
  auVar26 = func_0x02f09514();
  lVar15 = auVar26._8_8_;
  plVar8 = auVar26._0_8_;
  uVar11 = uVar10;
  if (*(long *)(uVar10 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar10 + 0x38) == 0) {
      func_0x03256878(uVar10);
    }
  }
  if (plVar8 == (long *)0x0) {
LAB_03e0f5a8:
    func_0x03280cac();
  }
  else {
    lVar20 = **(long **)(uVar10 + 0x38);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar12 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar20) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0f40c;
        }
        uVar16 = uVar16 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar16 != 0);
    }
    uVar11 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e0f40c:
    unaff_x20 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar23 = PTR_DAT_0774e8e0;
    if (unaff_x20 != (long *)0x0) {
      uVar16 = 0;
      do {
        lVar20 = *unaff_x20;
        uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar23) {
              puVar4 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03e0f478;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        uVar11 = 0;
        puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f478:
        uVar17 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
        if ((uVar17 & 1) == 0) {
          uVar10 = 0;
          goto LAB_03e0f524;
        }
        lVar20 = *(long *)(*(long *)(uVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar12 = *unaff_x20;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar20) {
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03e0f4ec;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        uVar11 = 0;
        puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f4ec:
        uVar21 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
        if (lVar15 == 0) goto LAB_03e0f5a4;
        iVar3 = (int)uVar16;
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),uVar21,uVar16,*(undefined8 *)(lVar15 + 0x28));
        uVar11 = uVar16;
        uVar16 = (ulong)(iVar3 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar27 = func_0x03280ca4(uVar10);
    if (auVar27._8_4_ != 1) break;
    puVar5 = (ulong *)func_0x072ce910(auVar27._0_8_);
    uVar10 = *puVar5;
    func_0x072ce920();
LAB_03e0f524:
    if (unaff_x20 != (long *)0x0) {
      lVar15 = *unaff_x20;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0f57c;
          }
          uVar16 = uVar16 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar16 != 0);
      }
      uVar11 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f57c:
      (*(code *)*puVar4)(unaff_x20,puVar4[1]);
    }
    if (uVar10 == 0) {
      return plVar8;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar15 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0f64c;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    uVar11 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_03e0f64c:
    (*(code *)*puVar4)(unaff_x20,puVar4[1]);
  }
  func_0x03365958(auVar27._0_8_);
  func_0x03280ca4(0);
  auVar26 = func_0x02f09514();
  uVar10 = auVar26._8_8_;
  plVar8 = auVar26._0_8_;
  lVar15 = tpidr_el0;
  lStack_d8 = *(long *)(lVar15 + 0x28);
  plVar9 = *(long **)(uVar11 + 0x38);
  if (plVar9 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar9 = *(long **)(uVar11 + 0x38);
    if (plVar9 == (long *)0x0) {
      func_0x03256878(uVar11);
      plVar9 = *(long **)(uVar11 + 0x38);
    }
  }
  uVar17 = (ulong)*(uint *)(plVar9[4] + 0xfc);
  uVar16 = uVar17 + 0xf & 0x1fffffff0;
  puVar4 = (undefined8 *)((long)&puStack_e0 - uVar16);
  puVar22 = (undefined8 *)((long)puVar4 - uVar16);
  lVar20 = (long)puVar22 - uVar16;
  uVar16 = uVar17;
  func_0x072ce9a0(lVar20,0);
  puVar23 = unaff_x28;
  if (plVar8 == (long *)0x0) {
LAB_03e0f97c:
    func_0x03280cac();
    unaff_x28 = puVar23;
  }
  else {
    lVar12 = *plVar9;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar13 = *plVar8;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar12) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0f784;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    uVar16 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e0f784:
    plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    puVar23 = PTR_DAT_0774e8e0;
    if (plVar9 != (long *)0x0) {
      do {
        lVar12 = *plVar9;
        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar23) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03e0f7ec;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        uVar16 = 0;
        puVar6 = (undefined8 *)func_0x03256b10(plVar9);
LAB_03e0f7ec:
        uVar18 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if ((uVar18 & 1) == 0) {
          uVar11 = 0;
          goto LAB_03e0f8dc;
        }
        lVar12 = *(long *)(*(long *)(uVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar13 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar12) {
              lVar12 = lVar13 + (long)*piVar19 * 0x10 + 0x138;
              goto LAB_03e0f860;
            }
            uVar16 = uVar16 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar16 != 0);
        }
        lVar12 = func_0x03256b10(plVar9,lVar12,0);
LAB_03e0f860:
        lVar12 = *(long *)(lVar12 + 8);
        puStack_e0 = puVar4;
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar9,&puStack_e0,puVar4);
        func_0x072ce970(lVar20,puVar4,uVar17);
        uVar16 = uVar17;
        func_0x072ce970(puVar22,lVar20);
        if (uVar10 == 0) goto LAB_03e0f978;
        puStack_e0 = puVar22;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar11 + 0x38) + 0x20) + 0x28)) {
          puStack_e0 = (undefined8 *)*puVar22;
        }
        puVar6 = *(undefined8 **)(*(long *)(uVar11 + 0x38) + 0x30);
        uVar16 = uVar10;
        (*(code *)puVar6[2])(*puVar6,puVar6,uVar10,&puStack_e0);
      } while( true );
    }
  }
  puVar23 = unaff_x28;
  func_0x03280cac();
LAB_03e0f984:
  func_0x03280ca4(uVar11);
  do {
    auVar27 = func_0x072ce990();
    uVar21 = auVar27._0_8_;
    if (auVar27._8_4_ != 1) {
      if (plVar9 == (long *)0x0) goto LAB_03e0fa30;
      lVar12 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 == 0) goto LAB_03e0fa08;
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_03e0f9f0;
    }
    puVar5 = (ulong *)func_0x072ce910(uVar21);
    uVar11 = *puVar5;
    func_0x072ce920();
LAB_03e0f8dc:
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0f934;
          }
          uVar10 = uVar10 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar10 != 0);
      }
      uVar16 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar9);
LAB_03e0f934:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (uVar11 != 0) goto LAB_03e0f984;
    if (*(long *)(lVar15 + 0x28) == lStack_d8) {
      return plVar8;
    }
  } while( true );
LAB_03e0f28c:
  func_0x03280cac(uVar21,uVar21);
LAB_03e0f290:
  func_0x03280cac();
  goto LAB_03e0f294;
LAB_03e0f5a4:
  func_0x03280cac(uVar21,uVar21);
  goto LAB_03e0f5a8;
LAB_03e0f978:
  func_0x03280cac();
  goto LAB_03e0f97c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar19 = piVar19 + 4;
    if (uVar10 == 0) break;
LAB_03e0f9f0:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03e0fa24;
    }
  }
LAB_03e0fa08:
  uVar16 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar9);
LAB_03e0fa24:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_03e0fa30:
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  auVar26 = func_0x02f09514();
  plVar7 = auVar26._0_8_;
  *(undefined1 **)(lVar20 + -0x60) = &stack0xffffffffffffff30;
  *(undefined8 *)(lVar20 + -0x58) = 0x3e0fa48;
  *(undefined **)(lVar20 + -0x50) = puVar23;
  *(long *)(lVar20 + -0x48) = lVar15;
  *(long *)(lVar20 + -0x40) = lVar20;
  *(undefined8 **)(lVar20 + -0x38) = puVar22;
  *(undefined8 **)(lVar20 + -0x30) = puVar4;
  *(ulong *)(lVar20 + -0x28) = uVar17;
  *(undefined8 *)(lVar20 + -0x20) = uVar21;
  *(undefined8 *)(lVar20 + -0x18) = 0;
  *(long **)(lVar20 + -0x10) = plVar9;
  *(long **)(lVar20 + -8) = plVar8;
  lVar15 = tpidr_el0;
  *(long *)(lVar20 + -0x88) = lVar15;
  *(undefined8 *)(lVar20 + -0x68) = *(undefined8 *)(lVar15 + 0x28);
  plVar8 = *(long **)(uVar16 + 0x38);
  if (plVar8 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar8 = *(long **)(uVar16 + 0x38);
    if (plVar8 == (long *)0x0) {
      func_0x03256878(uVar16);
      plVar8 = *(long **)(uVar16 + 0x38);
    }
  }
  uVar11 = (ulong)*(uint *)(plVar8[4] + 0xfc);
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  lVar15 = (lVar20 + -0x90) - uVar10;
  puVar4 = (undefined8 *)(lVar15 - uVar10);
  lVar12 = (long)puVar4 - uVar10;
  func_0x072ce9a0(lVar12,0,uVar11);
  plVar9 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar8;
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar14 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar13) {
          puVar22 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0fb60;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(plVar7,lVar13,0);
LAB_03e0fb60:
    pcVar1 = (code *)*puVar22;
    uVar21 = puVar22[1];
    *(long **)(lVar20 + -0x90) = plVar7;
    plVar9 = (long *)(*pcVar1)(plVar7,uVar21);
    puVar23 = PTR_DAT_0774e8e0;
    if (plVar9 != (long *)0x0) {
      iVar3 = 0;
      plVar8 = (long *)(lVar20 + -0x6c);
      do {
        lVar13 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar23) {
              puVar22 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03e0fbd4;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar23,0);
LAB_03e0fbd4:
        uVar10 = (*(code *)*puVar22)(plVar9,puVar22[1]);
        if ((uVar10 & 1) == 0) {
          uVar16 = 0;
          goto LAB_03e0fcd0;
        }
        lVar13 = *(long *)(*(long *)(uVar16 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        lVar14 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar13) {
              lVar13 = lVar14 + (long)*piVar19 * 0x10 + 0x138;
              goto LAB_03e0fc48;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        lVar13 = func_0x03256b10(plVar9,lVar13,0);
LAB_03e0fc48:
        *(long *)(lVar20 + -0x80) = lVar15;
        lVar13 = *(long *)(lVar13 + 8);
        (**(code **)(lVar13 + 0x10))
                  (*(undefined8 *)(lVar13 + 8),lVar13,plVar9,lVar20 + -0x80,lVar15);
        func_0x072ce970(lVar12,lVar15,uVar11);
        func_0x072ce970(puVar4,lVar12,uVar11);
        if (auVar26._8_8_ == 0) goto LAB_03e0fd6c;
        puVar22 = puVar4;
        if (-1 < *(int *)(*(long *)(*(long *)(uVar16 + 0x38) + 0x20) + 0x28)) {
          puVar22 = (undefined8 *)*puVar4;
        }
        puVar6 = *(undefined8 **)(*(long *)(uVar16 + 0x38) + 0x30);
        uVar21 = *puVar6;
        *(int *)(lVar20 + -0x6c) = iVar3;
        *(undefined8 **)(lVar20 + -0x80) = puVar22;
        *(long **)(lVar20 + -0x78) = plVar8;
        (*(code *)puVar6[2])(uVar21,puVar6,auVar26._8_8_,lVar20 + -0x80,lVar20 + -0x6c);
        iVar3 = iVar3 + 1;
      } while( true );
    }
    goto LAB_03e0fd74;
  }
LAB_03e0fd70:
  func_0x03280cac();
LAB_03e0fd74:
  func_0x03280cac();
LAB_03e0fd78:
  plVar7 = (long *)func_0x03280ca4(uVar16);
  do {
    auVar27 = func_0x072ce990(plVar7);
    if (auVar27._8_4_ != 1) {
      if (plVar9 == (long *)0x0) goto LAB_03e0fe24;
      lVar15 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 == 0) goto LAB_03e0fdfc;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      goto LAB_03e0fde4;
    }
    puVar5 = (ulong *)func_0x072ce910(auVar27._0_8_);
    uVar16 = *puVar5;
    func_0x072ce920();
LAB_03e0fcd0:
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e0fd28;
          }
          uVar10 = uVar10 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fd28:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
    if (uVar16 != 0) goto LAB_03e0fd78;
    plVar7 = *(long **)(lVar20 + -0x90);
    if (*(long *)(*(long *)(lVar20 + -0x88) + 0x28) == *(long *)(lVar20 + -0x68)) {
      return plVar7;
    }
  } while( true );
LAB_03e0fd6c:
  func_0x03280cac();
  goto LAB_03e0fd70;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar19 = piVar19 + 4;
    if (uVar10 == 0) break;
LAB_03e0fde4:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar4 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03e0fe18;
    }
  }
LAB_03e0fdfc:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0774e8c8,0);
LAB_03e0fe18:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_03e0fe24:
  func_0x03365958(auVar27._0_8_);
  func_0x03280ca4(0);
  auVar26 = func_0x02f09514();
  lVar15 = auVar26._8_8_;
  plVar7 = auVar26._0_8_;
  *(undefined8 *)(lVar12 + -0x20) = 0x3e0fe3c;
  *(long **)(lVar12 + -0x10) = plVar9;
  *(long **)(lVar12 + -8) = plVar8;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (plVar7 == (long *)0x0) {
    plVar8 = (long *)0x1;
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar20 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar4 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03e0fed0;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar7,lVar15,0);
LAB_03e0fed0:
    iVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    plVar8 = (long *)(ulong)(iVar3 == 0);
  }
  return plVar8;
}


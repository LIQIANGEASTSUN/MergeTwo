/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7CAC0; MergeEngine.Configuration.Definitions.Reward.FindAllMultiplesByType<object>; status ok */


long * MergeEngine_Configuration_Definitions_Reward__FindAllMultiplesByType_object_
                 (undefined *param_1,ulong param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long extraout_x1;
  long extraout_x1_00;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  long alStack_2b0 [6];
  long alStack_280 [8];
  long alStack_240 [17];
  undefined8 auStack_1b8 [3];
  long alStack_1a0 [4];
  undefined auStack_180 [8];
  long alStack_178 [11];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  plVar18 = *(long **)(param_3 + 0x38);
  lVar19 = param_3;
  if (plVar18 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_07779fc8);
    plVar18 = *(long **)(param_3 + 0x38);
    if (plVar18 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar18 = *(long **)(param_3 + 0x38);
    }
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar18 = (long *)func_0x03280ca0();
  func_0x04143c38(plVar18,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x04145068(&uStack_78,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
    puVar31 = PTR_DAT_07779fb8;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
LAB_03e7cb8c:
    uVar6 = func_0x051159b4(&uStack_60,*(undefined8 *)puVar31);
    lVar26 = lStack_50;
    if ((uVar6 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(lVar26,lVar13);
      if (lVar13 != 0) {
        lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        if (lVar26 == 0) {
          lVar7 = 0;
          if (plVar18 == (long *)0x0) goto LAB_03e7ccb0;
LAB_03e7cc0c:
          lVar15 = plVar18[2];
          lVar16 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
          *(int *)((long)plVar18 + 0x1c) = *(int *)((long)plVar18 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar2 = *(uint *)(plVar18 + 3);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(plVar18 + 3) = uVar2 + 1;
              *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
              func_0x032809c4();
            }
            else {
              lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              func_0x0414446c(plVar18);
            }
            goto LAB_03e7cb8c;
          }
LAB_03e7ccb4:
          func_0x03280cac();
        }
        else {
          lVar7 = func_0x03280b90(lVar26,lVar13);
          if (lVar7 != 0) {
            if (plVar18 != (long *)0x0) goto LAB_03e7cc0c;
LAB_03e7ccb0:
            func_0x03280cac();
            goto LAB_03e7ccb4;
          }
        }
        func_0x03281048(lVar26,lVar13);
        goto LAB_03e7ccc4;
      }
      goto LAB_03e7cb8c;
    }
    func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_07779fb0);
LAB_03e7cc7c:
    if ((param_2 & 1) != 0) {
      MergeEngine_Configuration_Definitions_Reward__EnrichMultipleWithConditionals_object_
                (param_1,plVar18,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
    }
    return plVar18;
  }
LAB_03e7ccc4:
  auVar34 = func_0x03280cac();
  if (auVar34._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar34._0_8_);
    lVar26 = *plVar8;
    func_0x072ce920();
    func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar26 == 0) goto LAB_03e7cc7c;
    func_0x03280ca4(lVar26);
  }
  func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(auVar34._0_8_);
  func_0x03280ca4(0);
  auVar34 = func_0x02f09514();
  puVar22 = auVar34._0_8_;
  puVar32 = &stack0xffffffffffffff20;
  puVar31 = (undefined *)tpidr_el0;
  lStack_e8 = *(long *)(puVar31 + 0x28);
  plVar18 = *(long **)(lVar19 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_07779fc8);
    plVar18 = *(long **)(lVar19 + 0x38);
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar18 = *(long **)(lVar19 + 0x38);
    }
  }
  plVar25 = (long *)(ulong)*(uint *)(plVar18[2] + 0xfc);
  uVar6 = (long)plVar25 + 0xfU & 0x1fffffff0;
  puVar28 = (undefined8 *)(((long)&uStack_120 - uVar6) - uVar6);
  puVar29 = (undefined *)((long)puVar28 - uVar6);
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  puStack_f0 = (undefined *)0x0;
  plVar8 = plVar25;
  func_0x072ce9a0(puVar29,0);
  uStack_120._4_4_ = auVar34._8_4_;
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar9 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))();
  puVar27 = puVar22;
  if (*(long *)(puVar22 + 0x18) != 0) {
    func_0x04145068(&puStack_118,*(long *)(puVar22 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
    plVar18 = (long *)PTR_DAT_07779fb8;
    uStack_f8 = uStack_110;
    puStack_100 = puStack_118;
    puStack_f0 = puStack_108;
    puVar30 = puVar22;
    while( true ) {
      do {
        uVar10 = func_0x051159b4(&puStack_100,*plVar18);
        puVar27 = puStack_f0;
        if ((uVar10 & 1) == 0) {
          func_0x051159b0(&puStack_100,*(undefined8 *)PTR_DAT_07779fb0);
          goto LAB_03e7cf58;
        }
        lVar26 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        lVar26 = func_0x03280b90(puVar27,lVar26);
        puVar30 = puVar27;
      } while (lVar26 == 0);
      lVar26 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      uVar11 = func_0x03280ba0(puVar27,lVar26,(long)&uStack_120 - uVar6);
      func_0x072ce970(puVar29,uVar11,plVar25);
      plVar8 = plVar25;
      func_0x072ce970(puVar28,puVar29);
      if (plVar9 == (long *)0x0) break;
      puStack_118 = puVar28;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar19 + 0x38) + 0x10) + 0x28)) {
        puStack_118 = (undefined8 *)*puVar28;
      }
      puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x18);
      plVar8 = plVar9;
      (*(code *)puVar14[2])(*puVar14,puVar14,plVar9,&puStack_118);
    }
    func_0x03280cac();
    param_1 = puVar22;
  }
  func_0x03280cac();
  puVar22 = param_1;
  puVar30 = puVar27;
  while( true ) {
    auVar34 = func_0x072ce990();
    plVar25 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) break;
    plVar12 = (long *)func_0x072ce910(plVar25);
    lVar26 = *plVar12;
    func_0x072ce920();
    func_0x051159b0(&puStack_100,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar26 != 0) {
      func_0x03280ca4(lVar26);
      break;
    }
LAB_03e7cf58:
    if ((uStack_120._4_4_ & 1) != 0) {
      plVar8 = *(long **)(*(long *)(lVar19 + 0x38) + 0x20);
      plVar9 = (long *)(*(code *)*plVar8)(puVar22,plVar9);
    }
    if (*(long *)(puVar31 + 0x28) == lStack_e8) {
      return plVar9;
    }
  }
  puVar27 = (undefined *)0x0;
  func_0x051159b0(&puStack_100,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(plVar25);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  plVar12 = auVar33._8_8_;
  uVar11 = auVar33._0_8_;
  *(undefined8 *)(puVar29 + -0x20) = 0x3e7d040;
  *(undefined **)(puVar29 + -0x10) = puVar22;
  *(long *)(puVar29 + -8) = lVar19;
  lVar19 = plVar8[7];
  if (lVar19 == 0) {
    uVar11 = func_0x03256878(plVar8);
    lVar19 = plVar8[7];
  }
  uVar6 = MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_
                    (uVar11,plVar12,*(undefined8 *)(lVar19 + 8));
  if ((uVar6 & 1) == 0) {
    return plVar12;
  }
  lVar26 = *(long *)(plVar8[7] + 0x10);
  *(undefined1 **)(puVar29 + -0x60) = &stack0xffffffffffffff20;
  *(undefined8 *)(puVar29 + -0x58) = *(undefined8 *)(puVar29 + -0x20);
  *(undefined **)(puVar29 + -0x50) = puVar31;
  *(undefined **)(puVar29 + -0x48) = puVar30;
  *(undefined **)(puVar29 + -0x40) = puVar29;
  *(undefined8 **)(puVar29 + -0x38) = puVar28;
  *(undefined8 *)(puVar29 + -0x30) = 0;
  *(long **)(puVar29 + -0x28) = plVar25;
  *(long **)(puVar29 + -0x20) = plVar9;
  *(long **)(puVar29 + -0x18) = plVar18;
  *(undefined8 *)(puVar29 + -0x10) = *(undefined8 *)(puVar29 + -0x10);
  *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
  plVar18 = *(long **)(lVar26 + 0x38);
  lVar19 = lVar26;
  if (plVar18 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar18 = *(long **)(lVar26 + 0x38);
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar26);
      plVar18 = *(long **)(lVar26 + 0x38);
    }
  }
  *(undefined8 *)(puVar29 + -0x80) = 0;
  *(undefined8 *)(puVar29 + -0x78) = 0;
  *(undefined8 *)(puVar29 + -0x70) = 0;
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar18 = (long *)func_0x03280ca0();
  func_0x04143c38(plVar18,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 8));
  puVar22 = puVar29;
  if (plVar12 != (long *)0x0) {
    func_0x04145068(puVar29 + -0x98,plVar12,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x10));
    puVar32 = PTR_DAT_0777b2d8;
    puVar28 = (undefined8 *)PTR_DAT_0777b2d0;
    puVar30 = PTR_DAT_0777b2c8;
    puVar27 = PTR_DAT_07771788;
    puVar22 = PTR_DAT_0776dcd8;
    puVar31 = PTR_DAT_077503b8;
    *(undefined8 *)(puVar29 + -0x78) = *(undefined8 *)(puVar29 + -0x90);
    *(undefined8 *)(puVar29 + -0x80) = *(undefined8 *)(puVar29 + -0x98);
    *(undefined8 *)(puVar29 + -0x70) = *(undefined8 *)(puVar29 + -0x88);
    while( true ) {
      uVar6 = func_0x051159b4(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x88));
      if ((uVar6 & 1) == 0) {
        plVar9 = (long *)0x0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar9 = (long *)func_0x03280ca0();
      func_0x04034120(plVar9,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x28));
      if (plVar9 == (long *)0x0) break;
      plVar12 = plVar9 + 2;
      *plVar12 = *(long *)(puVar29 + -0x70);
      func_0x032809c4(plVar12);
      plVar25 = (long *)*plVar12;
      if (plVar25 == (long *)0x0) goto LAB_03e7bcac;
      lVar13 = *plVar25;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar27) {
            puVar14 = (undefined8 *)(lVar13 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar6 = uVar6 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar6 != 0);
      }
      lVar19 = 4;
      puVar14 = (undefined8 *)func_0x03256b10(plVar25);
LAB_03e7b9d0:
      lVar13 = (*(code *)*puVar14)(plVar25,puVar14[1]);
      if (lVar13 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar13 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar25 = (long *)func_0x03280ca0();
        func_0x05355fbc(plVar25,plVar9,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x60));
        lVar19 = *(long *)(*(long *)(lVar26 + 0x38) + 0x68);
        plVar8 = (long *)func_0x03d45130(plVar18,plVar25);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)*plVar12;
          plVar9 = (long *)0x0;
          if (plVar8 == (long *)0x0) goto LAB_03e7bcc0;
          lVar13 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar14 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar6 = uVar6 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar6 != 0);
          }
          lVar19 = 0;
          puVar14 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7bbbc:
          plVar12 = (long *)(*(code *)*puVar14)(plVar8,puVar14[1]);
          if (plVar18 == (long *)0x0) goto LAB_03e7bcc4;
          plVar9 = *(long **)(*(long *)(lVar26 + 0x38) + 0x40);
          if ((*(byte *)((long)plVar9 + 0x135) & 1) == 0) {
            plVar9 = (long *)func_0x0325681c(plVar9);
          }
          if (plVar12 != (long *)0x0) {
            lVar13 = func_0x03280b90(plVar12,plVar9);
            if (lVar13 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar13 = 0;
LAB_03e7bc0c:
          lVar7 = plVar18[2];
          lVar15 = *(long *)(*(long *)(lVar26 + 0x38) + 0x80);
          *(int *)((long)plVar18 + 0x1c) = *(int *)((long)plVar18 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(plVar18 + 3);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(plVar18 + 3) = uVar2 + 1;
            *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            func_0x032809c4();
          }
          else {
            lVar19 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(plVar18);
          }
        }
        else {
          lVar13 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar27) {
                puVar14 = (undefined8 *)(lVar13 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar6 = uVar6 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar6 != 0);
          }
          lVar19 = 4;
          puVar14 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7bb08:
          plVar9 = (long *)(*(code *)*puVar14)(plVar8,puVar14[1]);
          if (plVar9 == (long *)0x0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(plVar9,0);
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03e7bcb4;
          lVar13 = *plVar12;
          plVar25 = (long *)(ulong)uVar2;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar27) {
                puVar14 = (undefined8 *)(lVar13 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar6 = uVar6 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar6 != 0);
          }
          lVar19 = 4;
          puVar14 = (undefined8 *)func_0x03256b10(plVar12);
LAB_03e7bb84:
          lVar13 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          if (lVar13 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar13,0);
          lVar19 = 0;
          func_0x0611f10c(plVar9,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar19 = 0;
        func_0x0556c434(*(undefined8 *)puVar30,*(undefined8 *)puVar31,0,*(undefined8 *)puVar32,
                        *puVar28,0,0);
      }
    }
    func_0x03280cac();
LAB_03e7bcac:
    func_0x03280cac();
LAB_03e7bcb0:
    func_0x03280cac();
LAB_03e7bcb4:
    func_0x03280cac();
LAB_03e7bcb8:
    func_0x03280cac();
LAB_03e7bcbc:
    func_0x03280cac();
    plVar8 = plVar12;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    plVar12 = plVar8;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(plVar12,plVar9);
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar9);
    uVar11 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) break;
    puVar14 = (undefined8 *)func_0x072ce910(uVar11);
    plVar9 = (long *)*puVar14;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x90));
    if (plVar9 == (long *)0x0) {
      return plVar18;
    }
  }
  func_0x051159b0(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x90));
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined **)(puVar29 + -0x100) = puVar32;
  *(code **)(puVar29 + -0xf8) =
       MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_;
  *(undefined **)(puVar29 + -0xf0) = puVar31;
  *(undefined **)(puVar29 + -0xe8) = puVar30;
  *(undefined **)(puVar29 + -0xe0) = puVar22;
  *(undefined8 **)(puVar29 + -0xd8) = puVar28;
  *(undefined **)(puVar29 + -0xd0) = puVar27;
  *(long **)(puVar29 + -200) = plVar25;
  *(undefined8 *)(puVar29 + -0xc0) = 0;
  *(undefined8 *)(puVar29 + -0xb8) = uVar11;
  *(long **)(puVar29 + -0xb0) = plVar18;
  *(long *)(puVar29 + -0xa8) = lVar26;
  lVar26 = tpidr_el0;
  *(long *)(puVar29 + -0x160) = lVar26;
  *(undefined8 *)(puVar29 + -0x108) = *(undefined8 *)(lVar26 + 0x28);
  plVar18 = (long *)(lVar19 + 0x38);
  plVar8 = (long *)*plVar18;
  if (plVar8 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar8 = (long *)*plVar18;
    if (plVar8 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar8 = *(long **)(lVar19 + 0x38);
    }
  }
  lVar19 = plVar8[8];
  uVar2 = *(uint *)(plVar8[3] + 0xfc);
  uVar10 = (ulong)uVar2;
  uVar6 = (ulong)*(uint *)(lVar19 + 0xfc);
  if ((*(byte *)(plVar8[3] + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
    plVar8 = (long *)*plVar18;
    uVar2 = *(uint *)(lVar19 + 0xfc);
    lVar19 = plVar8[8];
  }
  uVar1 = *(ushort *)(lVar19 + 0x135);
  *(undefined **)(puVar29 + -0x158) =
       puVar29 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0));
  lVar26 = lVar19;
  if ((uVar1 & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
    plVar8 = (long *)*plVar18;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar26 = plVar8[8];
  }
  lVar13 = (long)(puVar29 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0))) -
           ((ulong)(*(int *)(lVar19 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x128) = lVar13;
  lVar19 = lVar26;
  if ((uVar1 & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
    plVar8 = (long *)*plVar18;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar19 = plVar8[8];
  }
  lVar13 = lVar13 - ((ulong)(*(int *)(lVar26 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x140) = lVar13;
  lVar26 = lVar19;
  if ((uVar1 & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
    plVar8 = (long *)*plVar18;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar26 = plVar8[8];
  }
  lVar13 = lVar13 - ((ulong)(*(int *)(lVar19 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x150) = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
    plVar8 = (long *)*plVar18;
  }
  lVar13 = lVar13 - ((ulong)(*(int *)(lVar26 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x148) = lVar13;
  uVar24 = uVar6 + 0xf & 0x1fffffff0;
  lVar13 = lVar13 - uVar24;
  *(ulong *)(puVar29 + -0x138) = lVar13 - uVar24;
  uVar20 = uVar10 + 0xf & 0x1fffffff0;
  lVar7 = (lVar13 - uVar24) - uVar20;
  lVar19 = lVar7 - uVar20;
  func_0x072ce9a0(lVar19,0,uVar10);
  lVar26 = lVar19 - uVar24;
  func_0x072ce9a0(lVar26,0,uVar6);
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar11 = func_0x03280ca0();
  lVar15 = *plVar18;
  *(undefined8 *)(puVar29 + -0x130) = uVar11;
  (*(code *)**(undefined8 **)(lVar15 + 8))();
  if (extraout_x1 != 0) {
    puVar28 = *(undefined8 **)(*plVar18 + 0x10);
    uVar11 = *puVar28;
    *(long *)(puVar29 + -0x120) = lVar7;
    (*(code *)puVar28[2])(uVar11,puVar28,extraout_x1,puVar29 + -0x120,lVar7);
    func_0x072ce970(lVar19,lVar7,uVar10);
    while( true ) {
      uVar10 = (*(code *)**(undefined8 **)(*plVar18 + 0x88))(lVar19);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar18 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar7 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar18 + 0x28))();
      puVar28 = *(undefined8 **)(*plVar18 + 0x30);
      uVar11 = *puVar28;
      *(long *)(puVar29 + -0x120) = lVar13;
      (*(code *)puVar28[2])(uVar11,puVar28,lVar19,puVar29 + -0x120,lVar13);
      if (lVar7 == 0) break;
      func_0x03280a3c(lVar7,*(undefined8 *)(*(long *)(*plVar18 + 0x20) + 0x80),lVar13,uVar6);
      lVar16 = *plVar18;
      lVar15 = *(long *)(lVar16 + 0x40);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar16 = *plVar18;
      }
      uVar23 = *(undefined8 *)(lVar16 + 0x48);
      uVar11 = func_0x03280a38(lVar7,*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x80));
      func_0x0328158c(lVar15,uVar23,*(undefined8 *)(puVar29 + -0x128),uVar11,0,puVar29 + -0x120);
      if (*(long *)(puVar29 + -0x120) == 0) goto LAB_03e7c404;
      if (*(int *)(*(long *)(puVar29 + -0x120) + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*plVar18 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar11 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar18 + 0x60))(uVar11,lVar7,*(undefined8 *)(*plVar18 + 0x50))
        ;
        puVar28 = *(undefined8 **)(*plVar18 + 0x68);
        uVar23 = *puVar28;
        *(undefined8 *)(puVar29 + -0x120) = *(undefined8 *)(puVar29 + -0x130);
        *(undefined8 *)(puVar29 + -0x118) = uVar11;
        *(long *)(puVar29 + -0x110) = lVar13;
        (*(code *)puVar28[2])(uVar23,puVar28,0,puVar29 + -0x120,lVar13);
        func_0x072ce970(lVar26,lVar13,uVar6);
        uVar11 = *(undefined8 *)(puVar29 + -0x138);
        func_0x072ce970(uVar11,lVar26,uVar6);
        uVar10 = func_0x03280c64(*(undefined8 *)(*plVar18 + 0x40),uVar11);
        lVar16 = *plVar18;
        lVar15 = *(long *)(lVar16 + 0x40);
        if ((uVar10 & 1) == 0) {
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
            lVar16 = *plVar18;
          }
          uVar23 = *(undefined8 *)(lVar16 + 0x78);
          uVar11 = func_0x03280a38(lVar7,*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x80));
          func_0x0328158c(lVar15,uVar23,*(undefined8 *)(puVar29 + -0x148),uVar11,0,puVar29 + -0x120)
          ;
          uVar11 = *(undefined8 *)(puVar29 + -0x120);
          lVar7 = *(long *)(*plVar18 + 0x40);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = func_0x0325681c(lVar7);
          }
          puVar28 = (undefined8 *)func_0x03280ba0(uVar11,lVar7,lVar13);
          if (*(long *)(puVar29 + -0x130) == 0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar18 + 0x40) + 0x28)) {
            puVar28 = (undefined8 *)*puVar28;
          }
          puVar14 = *(undefined8 **)(*plVar18 + 0x80);
          uVar11 = *puVar14;
          *(undefined8 **)(puVar29 + -0x120) = puVar28;
          (*(code *)puVar14[2])(uVar11,puVar14,*(undefined8 *)(puVar29 + -0x130),puVar29 + -0x120);
        }
        else {
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
            lVar16 = *plVar18;
          }
          func_0x0328158c(lVar15,*(undefined8 *)(lVar16 + 0x48),*(undefined8 *)(puVar29 + -0x140),
                          lVar26,0,puVar29 + -0x120);
          lVar15 = *(long *)(puVar29 + -0x120);
          if (lVar15 == 0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(lVar15,0);
          lVar17 = *plVar18;
          lVar16 = *(long *)(lVar17 + 0x40);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
            lVar17 = *plVar18;
          }
          uVar23 = *(undefined8 *)(lVar17 + 0x48);
          uVar11 = func_0x03280a38(lVar7,*(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x80));
          func_0x0328158c(lVar16,uVar23,*(undefined8 *)(puVar29 + -0x150),uVar11,0,puVar29 + -0x120)
          ;
          if (*(long *)(puVar29 + -0x120) == 0) goto LAB_03e7c408;
          iVar4 = func_0x0611efd4(*(long *)(puVar29 + -0x120),0);
          func_0x0611f10c(lVar15,iVar4 + iVar3,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0556c434(*(undefined8 *)PTR_DAT_0777b2c8,*(undefined8 *)PTR_DAT_077503b8,0,
                        *(undefined8 *)PTR_DAT_0777b2d8,*(undefined8 *)PTR_DAT_0777b2d0,0,0);
      }
    }
    func_0x03280cac();
LAB_03e7c404:
    func_0x03280cac();
LAB_03e7c408:
    func_0x03280cac();
LAB_03e7c40c:
    func_0x03280cac();
LAB_03e7c410:
    func_0x03280cac();
  }
  func_0x03280cac();
  do {
    func_0x03280ca4(uVar6);
    while( true ) {
      auVar34 = func_0x072ce990();
      uVar11 = auVar34._0_8_;
      if (auVar34._8_4_ != 1) {
        lVar7 = *plVar18;
        lVar13 = *(long *)(lVar7 + 0x18);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c();
          lVar7 = *plVar18;
        }
        lVar15 = *(long *)(puVar29 + -0x158);
        func_0x0328158c(lVar13,*(undefined8 *)(lVar7 + 0x90),lVar15,lVar19,0,0);
        func_0x03365958(uVar11);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(code **)(lVar26 + -0x30) =
             MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_;
        *(undefined8 *)(lVar26 + -0x20) = 0;
        *(undefined8 *)(lVar26 + -0x18) = uVar11;
        *(long *)(lVar26 + -0x10) = lVar19;
        *(long **)(lVar26 + -8) = plVar18;
        if (*(long *)(lVar15 + 0x38) == 0) {
          func_0x03256878(lVar15);
        }
        if ((extraout_x1_00 == 0) || (*(int *)(extraout_x1_00 + 0x18) < 2)) {
          plVar18 = (long *)0x0;
        }
        else {
          lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c();
          }
          if (*(int *)(lVar19 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c();
          }
          lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
          if (lVar19 == 0) {
            lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c();
            }
            if (*(int *)(lVar19 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar26 = *(long *)(lVar15 + 0x38);
            lVar19 = *(long *)(lVar26 + 0x20);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c();
              lVar26 = *(long *)(lVar15 + 0x38);
            }
            lVar26 = *(long *)(lVar26 + 0x18);
            uVar11 = **(undefined8 **)(lVar19 + 0xb8);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c(lVar26);
            }
            lVar19 = func_0x03280ca0(lVar26);
            func_0x053569b8(lVar19,uVar11,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x30));
            lVar26 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar26 + 0xb8) + 8) = lVar19;
            lVar26 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar26 + 0xb8) + 8,lVar19);
          }
          uVar11 = func_0x03d45b80(extraout_x1_00,lVar19,
                                   *(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar11,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x50));
          plVar18 = (long *)(ulong)(iVar3 != *(int *)(extraout_x1_00 + 0x18));
        }
        return plVar18;
      }
      puVar5 = (ulong *)func_0x072ce910(uVar11);
      uVar6 = *puVar5;
      func_0x072ce920();
LAB_03e7c394:
      lVar7 = *plVar18;
      lVar13 = *(long *)(lVar7 + 0x18);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
        lVar7 = *plVar18;
      }
      func_0x0328158c(lVar13,*(undefined8 *)(lVar7 + 0x90),*(undefined8 *)(puVar29 + -0x158),lVar19,
                      0,0);
      if (uVar6 != 0) break;
      if (*(long *)(*(long *)(puVar29 + -0x160) + 0x28) == *(long *)(puVar29 + -0x108)) {
        return *(long **)(puVar29 + -0x130);
      }
    }
  } while( true );
}


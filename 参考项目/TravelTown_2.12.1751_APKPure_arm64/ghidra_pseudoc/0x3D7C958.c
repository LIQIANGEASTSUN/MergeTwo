/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7C958; MergeEngine.Configuration.Definitions.Reward.EnrichMultipleWithConditionals<__Il2CppFullySharedGenericType>; status ok */


long * MergeEngine_Configuration_Definitions_Reward__EnrichMultipleWithConditionals___Il2CppFullySharedGenericType_
                 (long param_1,long *param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long extraout_x1;
  long extraout_x1_00;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long alStack_2f0 [6];
  long alStack_2c0 [8];
  long alStack_280 [17];
  undefined8 auStack_1f8 [3];
  long alStack_1e0 [4];
  undefined auStack_1c0 [8];
  long alStack_1b8 [11];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar17 = param_3;
  if (param_3[7] == 0) {
    func_0x03280a18(PTR_DAT_0777b2e0);
    func_0x03280a18(PTR_DAT_0777b2e8);
    func_0x03280a18(PTR_DAT_0777b2f0);
    func_0x03280a18(PTR_DAT_0777b2f8);
    if (param_3[7] == 0) {
      func_0x03256878(param_3);
    }
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x04145068(&uStack_38,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0777b2f8);
    puVar24 = PTR_DAT_0777b2e8;
    while( true ) {
      uVar7 = func_0x051159b4(&uStack_38,*(undefined8 *)puVar24);
      if ((uVar7 & 1) == 0) {
        func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_0777b2e0);
        return param_2;
      }
      if (lStack_28 == 0) break;
      puVar17 = *(undefined8 **)(param_3[7] + 8);
      (*(code *)*puVar17)(lStack_28,param_2);
    }
    func_0x03280cac();
  }
  auVar35 = func_0x03280cac();
  if (auVar35._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar35._0_8_);
    lVar26 = *plVar8;
    func_0x072ce920();
    func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_0777b2e0);
    if (lVar26 == 0) {
      return param_2;
    }
    func_0x03280ca4(lVar26);
  }
  func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_0777b2e0);
  func_0x03365958(auVar35._0_8_);
  func_0x03280ca4(0);
  auVar34 = func_0x02f09514();
  puVar24 = auVar34._0_8_;
  uStack_80 = 0x3e7cac0;
  plVar8 = (long *)puVar17[7];
  puVar5 = puVar17;
  if (plVar8 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_07779fc8);
    plVar8 = (long *)puVar17[7];
    if (plVar8 == (long *)0x0) {
      func_0x03256878(puVar17);
      plVar8 = (long *)puVar17[7];
    }
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar8 = (long *)func_0x03280ca0();
  func_0x04143c38(plVar8,*(undefined8 *)(puVar17[7] + 8));
  if (*(long *)(puVar24 + 0x18) == 0) {
LAB_03e7ccc4:
    auVar35 = func_0x03280cac();
    if (auVar35._8_4_ == 1) {
      plVar10 = (long *)func_0x072ce910(auVar35._0_8_);
      lVar26 = *plVar10;
      func_0x072ce920();
      func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07779fb0);
      if (lVar26 == 0) goto LAB_03e7cc7c;
      func_0x03280ca4(lVar26);
    }
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07779fb0);
    func_0x03365958(auVar35._0_8_);
    func_0x03280ca4(0);
    auVar35 = func_0x02f09514();
    puVar23 = auVar35._0_8_;
    puVar33 = &stack0xfffffffffffffee0;
    puVar32 = (undefined *)tpidr_el0;
    lStack_128 = *(long *)(puVar32 + 0x28);
    plVar8 = (long *)puVar5[7];
    if (plVar8 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07779fb0);
      func_0x03280a18(PTR_DAT_07779fb8);
      func_0x03280a18(PTR_DAT_07779fc0);
      func_0x03280a18(PTR_DAT_07779fc8);
      plVar8 = (long *)puVar5[7];
      if (plVar8 == (long *)0x0) {
        func_0x03256878(puVar5);
        plVar8 = (long *)puVar5[7];
      }
    }
    plVar28 = (long *)(ulong)*(uint *)(plVar8[2] + 0xfc);
    uVar7 = (long)plVar28 + 0xfU & 0x1fffffff0;
    puVar17 = (undefined8 *)(((long)&uStack_160 - uVar7) - uVar7);
    puVar31 = (undefined *)((long)puVar17 - uVar7);
    puStack_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    puStack_130 = (undefined *)0x0;
    plVar10 = plVar28;
    func_0x072ce9a0(puVar31,0);
    uStack_160._4_4_ = auVar35._8_4_;
    if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar11 = (long *)func_0x03280ca0();
    (*(code *)**(undefined8 **)(puVar5[7] + 8))();
    puVar29 = puVar23;
    if (*(long *)(puVar23 + 0x18) != 0) {
      func_0x04145068(&puStack_158,*(long *)(puVar23 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
      plVar8 = (long *)PTR_DAT_07779fb8;
      uStack_138 = uStack_150;
      puStack_140 = puStack_158;
      puStack_130 = puStack_148;
      puVar24 = puVar23;
      while( true ) {
        do {
          uVar12 = func_0x051159b4(&puStack_140,*plVar8);
          puVar29 = puStack_130;
          if ((uVar12 & 1) == 0) {
            func_0x051159b0(&puStack_140,*(undefined8 *)PTR_DAT_07779fb0);
            goto LAB_03e7cf58;
          }
          lVar26 = *(long *)(puVar5[7] + 0x10);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = func_0x0325681c(lVar26);
          }
          lVar26 = func_0x03280b90(puVar29,lVar26);
          puVar24 = puVar29;
        } while (lVar26 == 0);
        lVar26 = *(long *)(puVar5[7] + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        uVar13 = func_0x03280ba0(puVar29,lVar26,(long)&uStack_160 - uVar7);
        func_0x072ce970(puVar31,uVar13,plVar28);
        plVar10 = plVar28;
        func_0x072ce970(puVar17,puVar31);
        if (plVar11 == (long *)0x0) break;
        puStack_158 = puVar17;
        if (-1 < *(int *)(*(long *)(puVar5[7] + 0x10) + 0x28)) {
          puStack_158 = (undefined8 *)*puVar17;
        }
        puVar16 = *(undefined8 **)(puVar5[7] + 0x18);
        plVar10 = plVar11;
        (*(code *)puVar16[2])(*puVar16,puVar16,plVar11,&puStack_158);
      }
      func_0x03280cac();
      puVar24 = puVar23;
    }
    func_0x03280cac();
    puVar23 = puVar24;
    puVar24 = puVar29;
    while( true ) {
      auVar35 = func_0x072ce990();
      plVar28 = auVar35._0_8_;
      if (auVar35._8_4_ != 1) break;
      plVar14 = (long *)func_0x072ce910(plVar28);
      lVar26 = *plVar14;
      func_0x072ce920();
      func_0x051159b0(&puStack_140,*(undefined8 *)PTR_DAT_07779fb0);
      if (lVar26 != 0) {
        func_0x03280ca4(lVar26);
        break;
      }
LAB_03e7cf58:
      if ((uStack_160._4_4_ & 1) != 0) {
        plVar10 = *(long **)(puVar5[7] + 0x20);
        plVar11 = (long *)(*(code *)*plVar10)(puVar23,plVar11);
      }
      if (*(long *)(puVar32 + 0x28) == lStack_128) {
        return plVar11;
      }
    }
    puVar29 = (undefined *)0x0;
    func_0x051159b0(&puStack_140,*(undefined8 *)PTR_DAT_07779fb0);
    func_0x03365958(plVar28);
    func_0x03280ca4(0);
    auVar34 = func_0x02f09514();
    plVar14 = auVar34._8_8_;
    uVar13 = auVar34._0_8_;
    *(undefined8 *)(puVar31 + -0x20) = 0x3e7d040;
    *(undefined **)(puVar31 + -0x10) = puVar23;
    *(undefined8 **)(puVar31 + -8) = puVar5;
    lVar26 = plVar10[7];
    if (lVar26 == 0) {
      uVar13 = func_0x03256878(plVar10);
      lVar26 = plVar10[7];
    }
    uVar7 = MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_
                      (uVar13,plVar14,*(undefined8 *)(lVar26 + 8));
    if ((uVar7 & 1) == 0) {
      return plVar14;
    }
    lVar15 = *(long *)(plVar10[7] + 0x10);
    *(undefined1 **)(puVar31 + -0x60) = &stack0xfffffffffffffee0;
    *(undefined8 *)(puVar31 + -0x58) = *(undefined8 *)(puVar31 + -0x20);
    *(undefined **)(puVar31 + -0x50) = puVar32;
    *(undefined **)(puVar31 + -0x48) = puVar24;
    *(undefined **)(puVar31 + -0x40) = puVar31;
    *(undefined8 **)(puVar31 + -0x38) = puVar17;
    *(undefined8 *)(puVar31 + -0x30) = 0;
    *(long **)(puVar31 + -0x28) = plVar28;
    *(long **)(puVar31 + -0x20) = plVar11;
    *(long **)(puVar31 + -0x18) = plVar8;
    *(undefined8 *)(puVar31 + -0x10) = *(undefined8 *)(puVar31 + -0x10);
    *(undefined8 *)(puVar31 + -8) = *(undefined8 *)(puVar31 + -8);
    plVar8 = *(long **)(lVar15 + 0x38);
    lVar26 = lVar15;
    if (plVar8 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07771788);
      func_0x03280a18(PTR_DAT_0777b2c0);
      func_0x03280a18(PTR_DAT_0777b2c8);
      func_0x03280a18(PTR_DAT_0777b2d0);
      func_0x03280a18(PTR_DAT_0777b2d8);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar8 = *(long **)(lVar15 + 0x38);
      if (plVar8 == (long *)0x0) {
        func_0x03256878(lVar15);
        plVar8 = *(long **)(lVar15 + 0x38);
      }
    }
    *(undefined8 *)(puVar31 + -0x80) = 0;
    *(undefined8 *)(puVar31 + -0x78) = 0;
    *(undefined8 *)(puVar31 + -0x70) = 0;
    if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar8 = (long *)func_0x03280ca0();
    func_0x04143c38(plVar8,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 8));
    puVar23 = puVar31;
    if (plVar14 != (long *)0x0) {
      func_0x04145068(puVar31 + -0x98,plVar14,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
      puVar33 = PTR_DAT_0777b2d8;
      puVar17 = (undefined8 *)PTR_DAT_0777b2d0;
      puVar24 = PTR_DAT_0777b2c8;
      puVar29 = PTR_DAT_07771788;
      puVar23 = PTR_DAT_0776dcd8;
      puVar32 = PTR_DAT_077503b8;
      *(undefined8 *)(puVar31 + -0x78) = *(undefined8 *)(puVar31 + -0x90);
      *(undefined8 *)(puVar31 + -0x80) = *(undefined8 *)(puVar31 + -0x98);
      *(undefined8 *)(puVar31 + -0x70) = *(undefined8 *)(puVar31 + -0x88);
      while( true ) {
        uVar7 = func_0x051159b4(puVar31 + -0x80,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x88));
        if ((uVar7 & 1) == 0) {
          plVar11 = (long *)0x0;
          goto LAB_03e7bc6c;
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x20) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar11 = (long *)func_0x03280ca0();
        func_0x04034120(plVar11,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x28));
        if (plVar11 == (long *)0x0) break;
        plVar14 = plVar11 + 2;
        *plVar14 = *(long *)(puVar31 + -0x70);
        func_0x032809c4(plVar14);
        plVar28 = (long *)*plVar14;
        if (plVar28 == (long *)0x0) goto LAB_03e7bcac;
        lVar9 = *plVar28;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar29) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar22 + 4) * 0x10 + 0x138);
              goto LAB_03e7b9d0;
            }
            uVar7 = uVar7 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar7 != 0);
        }
        lVar26 = 4;
        puVar5 = (undefined8 *)func_0x03256b10(plVar28);
LAB_03e7b9d0:
        lVar9 = (*(code *)*puVar5)(plVar28,puVar5[1]);
        if (lVar9 == 0) {
          func_0x03280cac();
          break;
        }
        if (*(int *)(lVar9 + 0x10) == 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x58) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar28 = (long *)func_0x03280ca0();
          func_0x05355fbc(plVar28,plVar11,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x50),
                          *(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x60));
          lVar26 = *(long *)(*(long *)(lVar15 + 0x38) + 0x68);
          plVar10 = (long *)func_0x03d45130(plVar8,plVar28);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)*plVar14;
            plVar11 = (long *)0x0;
            if (plVar10 == (long *)0x0) goto LAB_03e7bcc0;
            lVar9 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777b2c0) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_03e7bbbc;
                }
                uVar7 = uVar7 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar7 != 0);
            }
            lVar26 = 0;
            puVar5 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e7bbbc:
            plVar14 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
            if (plVar8 == (long *)0x0) goto LAB_03e7bcc4;
            plVar11 = *(long **)(*(long *)(lVar15 + 0x38) + 0x40);
            if ((*(byte *)((long)plVar11 + 0x135) & 1) == 0) {
              plVar11 = (long *)func_0x0325681c(plVar11);
            }
            if (plVar14 != (long *)0x0) {
              lVar9 = func_0x03280b90(plVar14,plVar11);
              if (lVar9 != 0) goto LAB_03e7bc0c;
              goto LAB_03e7bcc8;
            }
            lVar9 = 0;
LAB_03e7bc0c:
            lVar30 = plVar8[2];
            lVar18 = *(long *)(*(long *)(lVar15 + 0x38) + 0x80);
            *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
            if (lVar30 == 0) goto LAB_03e7bcbc;
            uVar2 = *(uint *)(plVar8 + 3);
            if (uVar2 < *(uint *)(lVar30 + 0x18)) {
              *(uint *)(plVar8 + 3) = uVar2 + 1;
              *(long *)(lVar30 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
              func_0x032809c4();
            }
            else {
              lVar26 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              func_0x0414446c(plVar8);
            }
          }
          else {
            lVar9 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar29) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar22 + 4) * 0x10 + 0x138);
                  goto LAB_03e7bb08;
                }
                uVar7 = uVar7 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar7 != 0);
            }
            lVar26 = 4;
            puVar5 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e7bb08:
            plVar11 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
            if (plVar11 == (long *)0x0) goto LAB_03e7bcb0;
            uVar2 = func_0x0611efd4(plVar11,0);
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_03e7bcb4;
            lVar9 = *plVar14;
            plVar28 = (long *)(ulong)uVar2;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar29) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar22 + 4) * 0x10 + 0x138);
                  goto LAB_03e7bb84;
                }
                uVar7 = uVar7 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar7 != 0);
            }
            lVar26 = 4;
            puVar5 = (undefined8 *)func_0x03256b10(plVar14);
LAB_03e7bb84:
            lVar9 = (*(code *)*puVar5)(plVar14,puVar5[1]);
            if (lVar9 == 0) goto LAB_03e7bcb8;
            iVar3 = func_0x0611efd4(lVar9,0);
            lVar26 = 0;
            func_0x0611f10c(plVar11,iVar3 + uVar2);
          }
        }
        else {
          if (*(int *)(*(long *)puVar23 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar26 = 0;
          func_0x0556c434(*(undefined8 *)puVar24,*(undefined8 *)puVar32,0,*(undefined8 *)puVar33,
                          *puVar17,0,0);
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
      plVar10 = plVar14;
LAB_03e7bcc0:
      func_0x03280cac();
LAB_03e7bcc4:
      plVar14 = plVar10;
      func_0x03280cac();
LAB_03e7bcc8:
      func_0x03281048(plVar14,plVar11);
    }
    func_0x03280cac();
    while( true ) {
      auVar35 = func_0x03280ca4(plVar11);
      uVar13 = auVar35._0_8_;
      if (auVar35._8_4_ != 1) break;
      puVar5 = (undefined8 *)func_0x072ce910(uVar13);
      plVar11 = (long *)*puVar5;
      func_0x072ce920();
LAB_03e7bc6c:
      func_0x051159b0(puVar31 + -0x80,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x90));
      if (plVar11 == (long *)0x0) {
        return plVar8;
      }
    }
    func_0x051159b0(puVar31 + -0x80,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x90));
    func_0x03365958(uVar13);
    func_0x03280ca4(0);
    func_0x02f09514();
    *(undefined **)(puVar31 + -0x100) = puVar33;
    *(code **)(puVar31 + -0xf8) =
         MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_;
    *(undefined **)(puVar31 + -0xf0) = puVar32;
    *(undefined **)(puVar31 + -0xe8) = puVar24;
    *(undefined **)(puVar31 + -0xe0) = puVar23;
    *(undefined8 **)(puVar31 + -0xd8) = puVar17;
    *(undefined **)(puVar31 + -0xd0) = puVar29;
    *(long **)(puVar31 + -200) = plVar28;
    *(undefined8 *)(puVar31 + -0xc0) = 0;
    *(undefined8 *)(puVar31 + -0xb8) = uVar13;
    *(long **)(puVar31 + -0xb0) = plVar8;
    *(long *)(puVar31 + -0xa8) = lVar15;
    lVar15 = tpidr_el0;
    *(long *)(puVar31 + -0x160) = lVar15;
    *(undefined8 *)(puVar31 + -0x108) = *(undefined8 *)(lVar15 + 0x28);
    plVar8 = (long *)(lVar26 + 0x38);
    plVar10 = (long *)*plVar8;
    if (plVar10 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_0777b2c8);
      func_0x03280a18(PTR_DAT_0777b2d0);
      func_0x03280a18(PTR_DAT_0777b2d8);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar10 = (long *)*plVar8;
      if (plVar10 == (long *)0x0) {
        func_0x03256878(lVar26);
        plVar10 = *(long **)(lVar26 + 0x38);
      }
    }
    lVar26 = plVar10[8];
    uVar2 = *(uint *)(plVar10[3] + 0xfc);
    uVar12 = (ulong)uVar2;
    uVar7 = (ulong)*(uint *)(lVar26 + 0xfc);
    if ((*(byte *)(plVar10[3] + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
      plVar10 = (long *)*plVar8;
      uVar2 = *(uint *)(lVar26 + 0xfc);
      lVar26 = plVar10[8];
    }
    uVar1 = *(ushort *)(lVar26 + 0x135);
    *(undefined **)(puVar31 + -0x158) =
         puVar31 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0));
    lVar15 = lVar26;
    if ((uVar1 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
      plVar10 = (long *)*plVar8;
      uVar1 = *(ushort *)(plVar10[8] + 0x135);
      lVar15 = plVar10[8];
    }
    lVar9 = (long)(puVar31 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0))) -
            ((ulong)(*(int *)(lVar26 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
    *(long *)(puVar31 + -0x128) = lVar9;
    lVar26 = lVar15;
    if ((uVar1 & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
      plVar10 = (long *)*plVar8;
      uVar1 = *(ushort *)(plVar10[8] + 0x135);
      lVar26 = plVar10[8];
    }
    lVar9 = lVar9 - ((ulong)(*(int *)(lVar15 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
    *(long *)(puVar31 + -0x140) = lVar9;
    lVar15 = lVar26;
    if ((uVar1 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
      plVar10 = (long *)*plVar8;
      uVar1 = *(ushort *)(plVar10[8] + 0x135);
      lVar15 = plVar10[8];
    }
    lVar9 = lVar9 - ((ulong)(*(int *)(lVar26 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
    *(long *)(puVar31 + -0x150) = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
      plVar10 = (long *)*plVar8;
    }
    lVar9 = lVar9 - ((ulong)(*(int *)(lVar15 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
    *(long *)(puVar31 + -0x148) = lVar9;
    uVar27 = uVar7 + 0xf & 0x1fffffff0;
    lVar9 = lVar9 - uVar27;
    *(ulong *)(puVar31 + -0x138) = lVar9 - uVar27;
    uVar21 = uVar12 + 0xf & 0x1fffffff0;
    lVar30 = (lVar9 - uVar27) - uVar21;
    lVar26 = lVar30 - uVar21;
    func_0x072ce9a0(lVar26,0,uVar12);
    lVar15 = lVar26 - uVar27;
    func_0x072ce9a0(lVar15,0,uVar7);
    if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar13 = func_0x03280ca0();
    lVar18 = *plVar8;
    *(undefined8 *)(puVar31 + -0x130) = uVar13;
    (*(code *)**(undefined8 **)(lVar18 + 8))();
    if (extraout_x1 != 0) {
      puVar17 = *(undefined8 **)(*plVar8 + 0x10);
      uVar13 = *puVar17;
      *(long *)(puVar31 + -0x120) = lVar30;
      (*(code *)puVar17[2])(uVar13,puVar17,extraout_x1,puVar31 + -0x120,lVar30);
      func_0x072ce970(lVar26,lVar30,uVar12);
      while( true ) {
        uVar12 = (*(code *)**(undefined8 **)(*plVar8 + 0x88))(lVar26);
        if ((uVar12 & 1) == 0) {
          uVar7 = 0;
          goto LAB_03e7c394;
        }
        if ((*(byte *)(*(long *)(*plVar8 + 0x20) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar30 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar8 + 0x28))();
        puVar17 = *(undefined8 **)(*plVar8 + 0x30);
        uVar13 = *puVar17;
        *(long *)(puVar31 + -0x120) = lVar9;
        (*(code *)puVar17[2])(uVar13,puVar17,lVar26,puVar31 + -0x120,lVar9);
        if (lVar30 == 0) break;
        func_0x03280a3c(lVar30,*(undefined8 *)(*(long *)(*plVar8 + 0x20) + 0x80),lVar9,uVar7);
        lVar19 = *plVar8;
        lVar18 = *(long *)(lVar19 + 0x40);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
          lVar19 = *plVar8;
        }
        uVar25 = *(undefined8 *)(lVar19 + 0x48);
        uVar13 = func_0x03280a38(lVar30,*(undefined8 *)(*(long *)(lVar19 + 0x20) + 0x80));
        func_0x0328158c(lVar18,uVar25,*(undefined8 *)(puVar31 + -0x128),uVar13,0,puVar31 + -0x120);
        if (*(long *)(puVar31 + -0x120) == 0) goto LAB_03e7c404;
        if (*(int *)(*(long *)(puVar31 + -0x120) + 0x10) == 0) {
          if ((*(byte *)(*(long *)(*plVar8 + 0x58) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar13 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*plVar8 + 0x60))
                    (uVar13,lVar30,*(undefined8 *)(*plVar8 + 0x50));
          puVar17 = *(undefined8 **)(*plVar8 + 0x68);
          uVar25 = *puVar17;
          *(undefined8 *)(puVar31 + -0x120) = *(undefined8 *)(puVar31 + -0x130);
          *(undefined8 *)(puVar31 + -0x118) = uVar13;
          *(long *)(puVar31 + -0x110) = lVar9;
          (*(code *)puVar17[2])(uVar25,puVar17,0,puVar31 + -0x120,lVar9);
          func_0x072ce970(lVar15,lVar9,uVar7);
          uVar13 = *(undefined8 *)(puVar31 + -0x138);
          func_0x072ce970(uVar13,lVar15,uVar7);
          uVar12 = func_0x03280c64(*(undefined8 *)(*plVar8 + 0x40),uVar13);
          lVar19 = *plVar8;
          lVar18 = *(long *)(lVar19 + 0x40);
          if ((uVar12 & 1) == 0) {
            if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = func_0x0325681c(lVar18);
              lVar19 = *plVar8;
            }
            uVar25 = *(undefined8 *)(lVar19 + 0x78);
            uVar13 = func_0x03280a38(lVar30,*(undefined8 *)(*(long *)(lVar19 + 0x20) + 0x80));
            func_0x0328158c(lVar18,uVar25,*(undefined8 *)(puVar31 + -0x148),uVar13,0,
                            puVar31 + -0x120);
            uVar13 = *(undefined8 *)(puVar31 + -0x120);
            lVar30 = *(long *)(*plVar8 + 0x40);
            if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
              lVar30 = func_0x0325681c(lVar30);
            }
            puVar17 = (undefined8 *)func_0x03280ba0(uVar13,lVar30,lVar9);
            if (*(long *)(puVar31 + -0x130) == 0) goto LAB_03e7c410;
            if (-1 < *(int *)(*(long *)(*plVar8 + 0x40) + 0x28)) {
              puVar17 = (undefined8 *)*puVar17;
            }
            puVar5 = *(undefined8 **)(*plVar8 + 0x80);
            uVar13 = *puVar5;
            *(undefined8 **)(puVar31 + -0x120) = puVar17;
            (*(code *)puVar5[2])(uVar13,puVar5,*(undefined8 *)(puVar31 + -0x130),puVar31 + -0x120);
          }
          else {
            if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = func_0x0325681c(lVar18);
              lVar19 = *plVar8;
            }
            func_0x0328158c(lVar18,*(undefined8 *)(lVar19 + 0x48),*(undefined8 *)(puVar31 + -0x140),
                            lVar15,0,puVar31 + -0x120);
            lVar18 = *(long *)(puVar31 + -0x120);
            if (lVar18 == 0) goto LAB_03e7c40c;
            iVar3 = func_0x0611efd4(lVar18,0);
            lVar20 = *plVar8;
            lVar19 = *(long *)(lVar20 + 0x40);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c(lVar19);
              lVar20 = *plVar8;
            }
            uVar25 = *(undefined8 *)(lVar20 + 0x48);
            uVar13 = func_0x03280a38(lVar30,*(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x80));
            func_0x0328158c(lVar19,uVar25,*(undefined8 *)(puVar31 + -0x150),uVar13,0,
                            puVar31 + -0x120);
            if (*(long *)(puVar31 + -0x120) == 0) goto LAB_03e7c408;
            iVar4 = func_0x0611efd4(*(long *)(puVar31 + -0x120),0);
            func_0x0611f10c(lVar18,iVar4 + iVar3,0);
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
      func_0x03280ca4(uVar7);
      while( true ) {
        auVar35 = func_0x072ce990();
        uVar13 = auVar35._0_8_;
        if (auVar35._8_4_ != 1) {
          lVar30 = *plVar8;
          lVar9 = *(long *)(lVar30 + 0x18);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = func_0x0325681c();
            lVar30 = *plVar8;
          }
          lVar18 = *(long *)(puVar31 + -0x158);
          func_0x0328158c(lVar9,*(undefined8 *)(lVar30 + 0x90),lVar18,lVar26,0,0);
          func_0x03365958(uVar13);
          func_0x03280ca4(0);
          func_0x02f09514();
          *(code **)(lVar15 + -0x30) =
               MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_;
          *(undefined8 *)(lVar15 + -0x20) = 0;
          *(undefined8 *)(lVar15 + -0x18) = uVar13;
          *(long *)(lVar15 + -0x10) = lVar26;
          *(long **)(lVar15 + -8) = plVar8;
          if (*(long *)(lVar18 + 0x38) == 0) {
            func_0x03256878(lVar18);
          }
          if ((extraout_x1_00 == 0) || (*(int *)(extraout_x1_00 + 0x18) < 2)) {
            plVar8 = (long *)0x0;
          }
          else {
            lVar26 = *(long *)(*(long *)(lVar18 + 0x38) + 0x20);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c();
            }
            if (*(int *)(lVar26 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar26 = *(long *)(*(long *)(lVar18 + 0x38) + 0x20);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c();
            }
            lVar26 = *(long *)(*(long *)(lVar26 + 0xb8) + 8);
            if (lVar26 == 0) {
              lVar26 = *(long *)(*(long *)(lVar18 + 0x38) + 0x20);
              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                lVar26 = func_0x0325681c();
              }
              if (*(int *)(lVar26 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar15 = *(long *)(lVar18 + 0x38);
              lVar26 = *(long *)(lVar15 + 0x20);
              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                lVar26 = func_0x0325681c();
                lVar15 = *(long *)(lVar18 + 0x38);
              }
              lVar15 = *(long *)(lVar15 + 0x18);
              uVar13 = **(undefined8 **)(lVar26 + 0xb8);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c(lVar15);
              }
              lVar26 = func_0x03280ca0(lVar15);
              func_0x053569b8(lVar26,uVar13,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x28),
                              *(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x30));
              lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x20);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c();
              }
              *(long *)(*(long *)(lVar15 + 0xb8) + 8) = lVar26;
              lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x20);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c();
              }
              func_0x032809c4(*(long *)(lVar15 + 0xb8) + 8,lVar26);
            }
            uVar13 = func_0x03d45b80(extraout_x1_00,lVar26,
                                     *(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x38));
            iVar3 = func_0x03d3a518(uVar13,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x50));
            plVar8 = (long *)(ulong)(iVar3 != *(int *)(extraout_x1_00 + 0x18));
          }
          return plVar8;
        }
        puVar6 = (ulong *)func_0x072ce910(uVar13);
        uVar7 = *puVar6;
        func_0x072ce920();
LAB_03e7c394:
        lVar30 = *plVar8;
        lVar9 = *(long *)(lVar30 + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c();
          lVar30 = *plVar8;
        }
        func_0x0328158c(lVar9,*(undefined8 *)(lVar30 + 0x90),*(undefined8 *)(puVar31 + -0x158),
                        lVar26,0,0);
        if (uVar7 != 0) break;
        if (*(long *)(*(long *)(puVar31 + -0x160) + 0x28) == *(long *)(puVar31 + -0x108)) {
          return *(long **)(puVar31 + -0x130);
        }
      }
    } while( true );
  }
  func_0x04145068(&uStack_b8,*(long *)(puVar24 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
  puVar32 = PTR_DAT_07779fb8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  lStack_90 = lStack_a8;
LAB_03e7cb8c:
  uVar7 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar32);
  lVar26 = lStack_90;
  if ((uVar7 & 1) != 0) {
    lVar15 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar15 = func_0x03280b90(lVar26,lVar15);
    if (lVar15 != 0) {
      lVar15 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if (lVar26 == 0) {
        lVar9 = 0;
        if (plVar8 == (long *)0x0) goto LAB_03e7ccb0;
LAB_03e7cc0c:
        lVar30 = plVar8[2];
        lVar18 = *(long *)(puVar17[7] + 0x18);
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (lVar30 != 0) {
          uVar2 = *(uint *)(plVar8 + 3);
          if (uVar2 < *(uint *)(lVar30 + 0x18)) {
            *(uint *)(plVar8 + 3) = uVar2 + 1;
            *(long *)(lVar30 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
            func_0x032809c4();
          }
          else {
            puVar5 = *(undefined8 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(plVar8);
          }
          goto LAB_03e7cb8c;
        }
LAB_03e7ccb4:
        func_0x03280cac();
      }
      else {
        lVar9 = func_0x03280b90(lVar26,lVar15);
        if (lVar9 != 0) {
          if (plVar8 != (long *)0x0) goto LAB_03e7cc0c;
LAB_03e7ccb0:
          func_0x03280cac();
          goto LAB_03e7ccb4;
        }
      }
      func_0x03281048(lVar26,lVar15);
      goto LAB_03e7ccc4;
    }
    goto LAB_03e7cb8c;
  }
  func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07779fb0);
LAB_03e7cc7c:
  if ((auVar34._8_8_ & 1) != 0) {
    func_0x03e7c7f4(puVar24,plVar8,*(undefined8 *)(puVar17[7] + 0x20));
  }
  return plVar8;
}


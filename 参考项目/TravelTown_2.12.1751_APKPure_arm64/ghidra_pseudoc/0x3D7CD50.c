/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7CD50; MergeEngine.Configuration.Definitions.Reward.FindAllMultiplesByType<__Il2CppFullySharedGenericType>; status ok */


long * MergeEngine_Configuration_Definitions_Reward__FindAllMultiplesByType___Il2CppFullySharedGenericType_
                 (undefined *param_1,uint param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x1;
  long extraout_x1_00;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  undefined *unaff_x20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  long alStack_230 [6];
  long alStack_200 [8];
  long alStack_1c0 [17];
  undefined8 auStack_138 [3];
  long alStack_120 [4];
  undefined auStack_100 [8];
  long alStack_f8 [11];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar32 = &stack0xffffffffffffffa0;
  puVar31 = (undefined *)tpidr_el0;
  lStack_68 = *(long *)(puVar31 + 0x28);
  plVar22 = *(long **)(param_3 + 0x38);
  if (plVar22 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_07779fc8);
    plVar22 = *(long **)(param_3 + 0x38);
    if (plVar22 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar22 = *(long **)(param_3 + 0x38);
    }
  }
  plVar24 = (long *)(ulong)*(uint *)(plVar22[2] + 0xfc);
  uVar19 = (long)plVar24 + 0xfU & 0x1fffffff0;
  puVar27 = (undefined8 *)(((long)&uStack_a0 - uVar19) - uVar19);
  puVar29 = (undefined *)((long)puVar27 - uVar19);
  puStack_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  puStack_70 = (undefined *)0x0;
  plVar5 = plVar24;
  func_0x072ce9a0(puVar29,0);
  uStack_a0._4_4_ = param_2;
  if ((*(byte *)(*plVar22 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar7 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))();
  puVar25 = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x04145068(&puStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
    plVar22 = (long *)PTR_DAT_07779fb8;
    uStack_78 = uStack_90;
    puStack_80 = puStack_98;
    puStack_70 = puStack_88;
    puVar30 = param_1;
    while( true ) {
      do {
        uVar8 = func_0x051159b4(&puStack_80,*plVar22);
        puVar25 = puStack_70;
        if ((uVar8 & 1) == 0) {
          func_0x051159b0(&puStack_80,*(undefined8 *)PTR_DAT_07779fb0);
          goto LAB_03e7cf58;
        }
        lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar11 = func_0x03280b90(puVar25,lVar11);
        puVar30 = puVar25;
      } while (lVar11 == 0);
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      uVar9 = func_0x03280ba0(puVar25,lVar11,(long)&uStack_a0 - uVar19);
      func_0x072ce970(puVar29,uVar9,plVar24);
      plVar5 = plVar24;
      func_0x072ce970(puVar27,puVar29);
      if (plVar7 == (long *)0x0) break;
      puStack_98 = puVar27;
      if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x10) + 0x28)) {
        puStack_98 = (undefined8 *)*puVar27;
      }
      puVar12 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x18);
      plVar5 = plVar7;
      (*(code *)puVar12[2])(*puVar12,puVar12,plVar7,&puStack_98);
    }
    func_0x03280cac();
    unaff_x20 = param_1;
  }
  func_0x03280cac();
  param_1 = unaff_x20;
  puVar30 = puVar25;
  while( true ) {
    auVar34 = func_0x072ce990();
    plVar24 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) break;
    plVar10 = (long *)func_0x072ce910(plVar24);
    lVar11 = *plVar10;
    func_0x072ce920();
    func_0x051159b0(&puStack_80,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar11 != 0) {
      func_0x03280ca4(lVar11);
      break;
    }
LAB_03e7cf58:
    if ((uStack_a0._4_4_ & 1) != 0) {
      plVar5 = *(long **)(*(long *)(param_3 + 0x38) + 0x20);
      plVar7 = (long *)(*(code *)*plVar5)(param_1,plVar7);
    }
    if (*(long *)(puVar31 + 0x28) == lStack_68) {
      return plVar7;
    }
  }
  puVar25 = (undefined *)0x0;
  func_0x051159b0(&puStack_80,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(plVar24);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  plVar10 = auVar33._8_8_;
  uVar9 = auVar33._0_8_;
  *(undefined8 *)(puVar29 + -0x20) = 0x3e7d040;
  *(undefined **)(puVar29 + -0x10) = param_1;
  *(long *)(puVar29 + -8) = param_3;
  lVar11 = plVar5[7];
  if (lVar11 == 0) {
    uVar9 = func_0x03256878(plVar5);
    lVar11 = plVar5[7];
  }
  uVar19 = MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_
                     (uVar9,plVar10,*(undefined8 *)(lVar11 + 8));
  if ((uVar19 & 1) == 0) {
    return plVar10;
  }
  lVar13 = *(long *)(plVar5[7] + 0x10);
  *(undefined1 **)(puVar29 + -0x60) = &stack0xffffffffffffffa0;
  *(undefined8 *)(puVar29 + -0x58) = *(undefined8 *)(puVar29 + -0x20);
  *(undefined **)(puVar29 + -0x50) = puVar31;
  *(undefined **)(puVar29 + -0x48) = puVar30;
  *(undefined **)(puVar29 + -0x40) = puVar29;
  *(undefined8 **)(puVar29 + -0x38) = puVar27;
  *(undefined8 *)(puVar29 + -0x30) = 0;
  *(long **)(puVar29 + -0x28) = plVar24;
  *(long **)(puVar29 + -0x20) = plVar7;
  *(long **)(puVar29 + -0x18) = plVar22;
  *(undefined8 *)(puVar29 + -0x10) = *(undefined8 *)(puVar29 + -0x10);
  *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
  plVar22 = *(long **)(lVar13 + 0x38);
  lVar11 = lVar13;
  if (plVar22 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar22 = *(long **)(lVar13 + 0x38);
    if (plVar22 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar22 = *(long **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(puVar29 + -0x80) = 0;
  *(undefined8 *)(puVar29 + -0x78) = 0;
  *(undefined8 *)(puVar29 + -0x70) = 0;
  if ((*(byte *)(*plVar22 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar22 = (long *)func_0x03280ca0();
  func_0x04143c38(plVar22,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 8));
  puVar28 = puVar29;
  if (plVar10 != (long *)0x0) {
    func_0x04145068(puVar29 + -0x98,plVar10,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    puVar32 = PTR_DAT_0777b2d8;
    puVar27 = (undefined8 *)PTR_DAT_0777b2d0;
    puVar30 = PTR_DAT_0777b2c8;
    puVar25 = PTR_DAT_07771788;
    puVar28 = PTR_DAT_0776dcd8;
    puVar31 = PTR_DAT_077503b8;
    *(undefined8 *)(puVar29 + -0x78) = *(undefined8 *)(puVar29 + -0x90);
    *(undefined8 *)(puVar29 + -0x80) = *(undefined8 *)(puVar29 + -0x98);
    *(undefined8 *)(puVar29 + -0x70) = *(undefined8 *)(puVar29 + -0x88);
    while( true ) {
      uVar19 = func_0x051159b4(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x88));
      if ((uVar19 & 1) == 0) {
        plVar7 = (long *)0x0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar7 = (long *)func_0x03280ca0();
      func_0x04034120(plVar7,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x28));
      if (plVar7 == (long *)0x0) break;
      plVar10 = plVar7 + 2;
      *plVar10 = *(long *)(puVar29 + -0x70);
      func_0x032809c4(plVar10);
      plVar24 = (long *)*plVar10;
      if (plVar24 == (long *)0x0) goto LAB_03e7bcac;
      lVar14 = *plVar24;
      uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar20 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      lVar11 = 4;
      puVar12 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03e7b9d0:
      lVar14 = (*(code *)*puVar12)(plVar24,puVar12[1]);
      if (lVar14 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar14 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar24 = (long *)func_0x03280ca0();
        func_0x05355fbc(plVar24,plVar7,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x60));
        lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x68);
        plVar5 = (long *)func_0x03d45130(plVar22,plVar24);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)*plVar10;
          plVar7 = (long *)0x0;
          if (plVar5 == (long *)0x0) goto LAB_03e7bcc0;
          lVar14 = *plVar5;
          uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar11 = 0;
          puVar12 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7bbbc:
          plVar10 = (long *)(*(code *)*puVar12)(plVar5,puVar12[1]);
          if (plVar22 == (long *)0x0) goto LAB_03e7bcc4;
          plVar7 = *(long **)(*(long *)(lVar13 + 0x38) + 0x40);
          if ((*(byte *)((long)plVar7 + 0x135) & 1) == 0) {
            plVar7 = (long *)func_0x0325681c(plVar7);
          }
          if (plVar10 != (long *)0x0) {
            lVar14 = func_0x03280b90(plVar10,plVar7);
            if (lVar14 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar14 = 0;
LAB_03e7bc0c:
          lVar26 = plVar22[2];
          lVar15 = *(long *)(*(long *)(lVar13 + 0x38) + 0x80);
          *(int *)((long)plVar22 + 0x1c) = *(int *)((long)plVar22 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(plVar22 + 3);
          if (uVar2 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(plVar22 + 3) = uVar2 + 1;
            *(long *)(lVar26 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
            func_0x032809c4();
          }
          else {
            lVar11 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(plVar22);
          }
        }
        else {
          lVar14 = *plVar5;
          uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar11 = 4;
          puVar12 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7bb08:
          plVar7 = (long *)(*(code *)*puVar12)(plVar5,puVar12[1]);
          if (plVar7 == (long *)0x0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(plVar7,0);
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03e7bcb4;
          lVar14 = *plVar10;
          plVar24 = (long *)(ulong)uVar2;
          uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar11 = 4;
          puVar12 = (undefined8 *)func_0x03256b10(plVar10);
LAB_03e7bb84:
          lVar14 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          if (lVar14 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar14,0);
          lVar11 = 0;
          func_0x0611f10c(plVar7,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)puVar28 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar11 = 0;
        func_0x0556c434(*(undefined8 *)puVar30,*(undefined8 *)puVar31,0,*(undefined8 *)puVar32,
                        *puVar27,0,0);
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
    plVar5 = plVar10;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    plVar10 = plVar5;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(plVar10,plVar7);
  }
  func_0x03280cac();
  while( true ) {
    auVar34 = func_0x03280ca4(plVar7);
    uVar9 = auVar34._0_8_;
    if (auVar34._8_4_ != 1) break;
    puVar12 = (undefined8 *)func_0x072ce910(uVar9);
    plVar7 = (long *)*puVar12;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x90));
    if (plVar7 == (long *)0x0) {
      return plVar22;
    }
  }
  func_0x051159b0(puVar29 + -0x80,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x90));
  func_0x03365958(uVar9);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined **)(puVar29 + -0x100) = puVar32;
  *(code **)(puVar29 + -0xf8) =
       MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_;
  *(undefined **)(puVar29 + -0xf0) = puVar31;
  *(undefined **)(puVar29 + -0xe8) = puVar30;
  *(undefined **)(puVar29 + -0xe0) = puVar28;
  *(undefined8 **)(puVar29 + -0xd8) = puVar27;
  *(undefined **)(puVar29 + -0xd0) = puVar25;
  *(long **)(puVar29 + -200) = plVar24;
  *(undefined8 *)(puVar29 + -0xc0) = 0;
  *(undefined8 *)(puVar29 + -0xb8) = uVar9;
  *(long **)(puVar29 + -0xb0) = plVar22;
  *(long *)(puVar29 + -0xa8) = lVar13;
  lVar13 = tpidr_el0;
  *(long *)(puVar29 + -0x160) = lVar13;
  *(undefined8 *)(puVar29 + -0x108) = *(undefined8 *)(lVar13 + 0x28);
  plVar22 = (long *)(lVar11 + 0x38);
  plVar5 = (long *)*plVar22;
  if (plVar5 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar5 = (long *)*plVar22;
    if (plVar5 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar5 = *(long **)(lVar11 + 0x38);
    }
  }
  lVar11 = plVar5[8];
  uVar2 = *(uint *)(plVar5[3] + 0xfc);
  uVar8 = (ulong)uVar2;
  uVar19 = (ulong)*(uint *)(lVar11 + 0xfc);
  if ((*(byte *)(plVar5[3] + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
    plVar5 = (long *)*plVar22;
    uVar2 = *(uint *)(lVar11 + 0xfc);
    lVar11 = plVar5[8];
  }
  uVar1 = *(ushort *)(lVar11 + 0x135);
  *(undefined **)(puVar29 + -0x158) =
       puVar29 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0));
  lVar13 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
    plVar5 = (long *)*plVar22;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar13 = plVar5[8];
  }
  lVar14 = (long)(puVar29 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0))) -
           ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x128) = lVar14;
  lVar11 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar5 = (long *)*plVar22;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar11 = plVar5[8];
  }
  lVar14 = lVar14 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x140) = lVar14;
  lVar13 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
    plVar5 = (long *)*plVar22;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar13 = plVar5[8];
  }
  lVar14 = lVar14 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x150) = lVar14;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar5 = (long *)*plVar22;
  }
  lVar14 = lVar14 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar29 + -0x148) = lVar14;
  uVar23 = uVar19 + 0xf & 0x1fffffff0;
  lVar14 = lVar14 - uVar23;
  *(ulong *)(puVar29 + -0x138) = lVar14 - uVar23;
  uVar18 = uVar8 + 0xf & 0x1fffffff0;
  lVar26 = (lVar14 - uVar23) - uVar18;
  lVar11 = lVar26 - uVar18;
  func_0x072ce9a0(lVar11,0,uVar8);
  lVar13 = lVar11 - uVar23;
  func_0x072ce9a0(lVar13,0,uVar19);
  if ((*(byte *)(*plVar5 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar9 = func_0x03280ca0();
  lVar15 = *plVar22;
  *(undefined8 *)(puVar29 + -0x130) = uVar9;
  (*(code *)**(undefined8 **)(lVar15 + 8))();
  if (extraout_x1 != 0) {
    puVar27 = *(undefined8 **)(*plVar22 + 0x10);
    uVar9 = *puVar27;
    *(long *)(puVar29 + -0x120) = lVar26;
    (*(code *)puVar27[2])(uVar9,puVar27,extraout_x1,puVar29 + -0x120,lVar26);
    func_0x072ce970(lVar11,lVar26,uVar8);
    while( true ) {
      uVar8 = (*(code *)**(undefined8 **)(*plVar22 + 0x88))(lVar11);
      if ((uVar8 & 1) == 0) {
        uVar19 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar22 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar26 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar22 + 0x28))();
      puVar27 = *(undefined8 **)(*plVar22 + 0x30);
      uVar9 = *puVar27;
      *(long *)(puVar29 + -0x120) = lVar14;
      (*(code *)puVar27[2])(uVar9,puVar27,lVar11,puVar29 + -0x120,lVar14);
      if (lVar26 == 0) break;
      func_0x03280a3c(lVar26,*(undefined8 *)(*(long *)(*plVar22 + 0x20) + 0x80),lVar14,uVar19);
      lVar16 = *plVar22;
      lVar15 = *(long *)(lVar16 + 0x40);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar16 = *plVar22;
      }
      uVar21 = *(undefined8 *)(lVar16 + 0x48);
      uVar9 = func_0x03280a38(lVar26,*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x80));
      func_0x0328158c(lVar15,uVar21,*(undefined8 *)(puVar29 + -0x128),uVar9,0,puVar29 + -0x120);
      if (*(long *)(puVar29 + -0x120) == 0) goto LAB_03e7c404;
      if (*(int *)(*(long *)(puVar29 + -0x120) + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*plVar22 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar9 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar22 + 0x60))(uVar9,lVar26,*(undefined8 *)(*plVar22 + 0x50))
        ;
        puVar27 = *(undefined8 **)(*plVar22 + 0x68);
        uVar21 = *puVar27;
        *(undefined8 *)(puVar29 + -0x120) = *(undefined8 *)(puVar29 + -0x130);
        *(undefined8 *)(puVar29 + -0x118) = uVar9;
        *(long *)(puVar29 + -0x110) = lVar14;
        (*(code *)puVar27[2])(uVar21,puVar27,0,puVar29 + -0x120,lVar14);
        func_0x072ce970(lVar13,lVar14,uVar19);
        uVar9 = *(undefined8 *)(puVar29 + -0x138);
        func_0x072ce970(uVar9,lVar13,uVar19);
        uVar8 = func_0x03280c64(*(undefined8 *)(*plVar22 + 0x40),uVar9);
        lVar16 = *plVar22;
        lVar15 = *(long *)(lVar16 + 0x40);
        if ((uVar8 & 1) == 0) {
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
            lVar16 = *plVar22;
          }
          uVar21 = *(undefined8 *)(lVar16 + 0x78);
          uVar9 = func_0x03280a38(lVar26,*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x80));
          func_0x0328158c(lVar15,uVar21,*(undefined8 *)(puVar29 + -0x148),uVar9,0,puVar29 + -0x120);
          uVar9 = *(undefined8 *)(puVar29 + -0x120);
          lVar26 = *(long *)(*plVar22 + 0x40);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = func_0x0325681c(lVar26);
          }
          puVar27 = (undefined8 *)func_0x03280ba0(uVar9,lVar26,lVar14);
          if (*(long *)(puVar29 + -0x130) == 0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar22 + 0x40) + 0x28)) {
            puVar27 = (undefined8 *)*puVar27;
          }
          puVar12 = *(undefined8 **)(*plVar22 + 0x80);
          uVar9 = *puVar12;
          *(undefined8 **)(puVar29 + -0x120) = puVar27;
          (*(code *)puVar12[2])(uVar9,puVar12,*(undefined8 *)(puVar29 + -0x130),puVar29 + -0x120);
        }
        else {
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
            lVar16 = *plVar22;
          }
          func_0x0328158c(lVar15,*(undefined8 *)(lVar16 + 0x48),*(undefined8 *)(puVar29 + -0x140),
                          lVar13,0,puVar29 + -0x120);
          lVar15 = *(long *)(puVar29 + -0x120);
          if (lVar15 == 0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(lVar15,0);
          lVar17 = *plVar22;
          lVar16 = *(long *)(lVar17 + 0x40);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
            lVar17 = *plVar22;
          }
          uVar21 = *(undefined8 *)(lVar17 + 0x48);
          uVar9 = func_0x03280a38(lVar26,*(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x80));
          func_0x0328158c(lVar16,uVar21,*(undefined8 *)(puVar29 + -0x150),uVar9,0,puVar29 + -0x120);
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
    func_0x03280ca4(uVar19);
    while( true ) {
      auVar34 = func_0x072ce990();
      uVar9 = auVar34._0_8_;
      if (auVar34._8_4_ != 1) {
        lVar26 = *plVar22;
        lVar14 = *(long *)(lVar26 + 0x18);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c();
          lVar26 = *plVar22;
        }
        lVar15 = *(long *)(puVar29 + -0x158);
        func_0x0328158c(lVar14,*(undefined8 *)(lVar26 + 0x90),lVar15,lVar11,0,0);
        func_0x03365958(uVar9);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(code **)(lVar13 + -0x30) =
             MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_;
        *(undefined8 *)(lVar13 + -0x20) = 0;
        *(undefined8 *)(lVar13 + -0x18) = uVar9;
        *(long *)(lVar13 + -0x10) = lVar11;
        *(long **)(lVar13 + -8) = plVar22;
        if (*(long *)(lVar15 + 0x38) == 0) {
          func_0x03256878(lVar15);
        }
        if ((extraout_x1_00 == 0) || (*(int *)(extraout_x1_00 + 0x18) < 2)) {
          plVar22 = (long *)0x0;
        }
        else {
          lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 == 0) {
            lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = func_0x0325681c();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(lVar15 + 0x38);
            lVar11 = *(long *)(lVar13 + 0x20);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = func_0x0325681c();
              lVar13 = *(long *)(lVar15 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x18);
            uVar9 = **(undefined8 **)(lVar11 + 0xb8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar11 = func_0x03280ca0(lVar13);
            func_0x053569b8(lVar11,uVar9,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x30));
            lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar11;
            lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar13 + 0xb8) + 8,lVar11);
          }
          uVar9 = func_0x03d45b80(extraout_x1_00,lVar11,
                                  *(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar9,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x50));
          plVar22 = (long *)(ulong)(iVar3 != *(int *)(extraout_x1_00 + 0x18));
        }
        return plVar22;
      }
      puVar6 = (ulong *)func_0x072ce910(uVar9);
      uVar19 = *puVar6;
      func_0x072ce920();
LAB_03e7c394:
      lVar26 = *plVar22;
      lVar14 = *(long *)(lVar26 + 0x18);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
        lVar26 = *plVar22;
      }
      func_0x0328158c(lVar14,*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(puVar29 + -0x158),lVar11
                      ,0,0);
      if (uVar19 != 0) break;
      if (*(long *)(*(long *)(puVar29 + -0x160) + 0x28) == *(long *)(puVar29 + -0x108)) {
        return *(long **)(puVar29 + -0x130);
      }
    }
  } while( true );
}


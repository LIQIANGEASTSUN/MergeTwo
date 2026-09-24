/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7D040; MergeEngine.Configuration.Definitions.Reward.TryAggregate<object>; status ok */


long * MergeEngine_Configuration_Definitions_Reward__TryAggregate_object_
                 (undefined8 param_1,long *param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  long extraout_x1;
  long extraout_x1_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x22;
  ulong uVar19;
  long *unaff_x23;
  ulong uVar20;
  undefined *unaff_x24;
  long lVar21;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long *plVar22;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined1 auVar23 [12];
  long alStack_190 [6];
  long alStack_160 [4];
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = *(long *)(param_3 + 0x38);
  if (lVar14 == 0) {
    param_1 = func_0x03256878(param_3);
    lVar14 = *(long *)(param_3 + 0x38);
  }
  uVar9 = MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_
                    (param_1,param_2,*(undefined8 *)(lVar14 + 8));
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
  plVar11 = *(long **)(lVar10 + 0x38);
  lVar14 = lVar10;
  if (plVar11 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar11 = *(long **)(lVar10 + 0x38);
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar10);
      plVar11 = *(long **)(lVar10 + 0x38);
    }
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar11 = (long *)func_0x03280ca0();
  func_0x04143c38(plVar11,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
  if (param_2 != (long *)0x0) {
    func_0x04145068(&uStack_98,param_2,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    unaff_x29 = PTR_DAT_0777b2d8;
    unaff_x25 = PTR_DAT_0777b2d0;
    unaff_x27 = PTR_DAT_0777b2c8;
    unaff_x24 = PTR_DAT_07771788;
    unaff_x26 = PTR_DAT_0776dcd8;
    unaff_x28 = PTR_DAT_077503b8;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while( true ) {
      uVar9 = func_0x051159b4(&uStack_80,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x88));
      if ((uVar9 & 1) == 0) {
        unaff_x22 = 0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      func_0x04034120(unaff_x22,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28));
      if (unaff_x22 == 0) break;
      param_2 = (long *)(unaff_x22 + 0x10);
      *param_2 = lStack_70;
      func_0x032809c4(param_2);
      unaff_x23 = (long *)*param_2;
      if (unaff_x23 == (long *)0x0) goto LAB_03e7bcac;
      lVar12 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      lVar14 = 4;
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x23);
LAB_03e7b9d0:
      lVar12 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      if (lVar12 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar12 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        unaff_x23 = (long *)func_0x03280ca0();
        func_0x05355fbc(unaff_x23,unaff_x22,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x60));
        lVar14 = *(long *)(*(long *)(lVar10 + 0x38) + 0x68);
        plVar6 = (long *)func_0x03d45130(plVar11,unaff_x23);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)*param_2;
          unaff_x22 = 0;
          if (plVar6 == (long *)0x0) goto LAB_03e7bcc0;
          lVar12 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          lVar14 = 0;
          puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e7bbbc:
          param_2 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
          if (plVar11 == (long *)0x0) goto LAB_03e7bcc4;
          unaff_x22 = *(long *)(*(long *)(lVar10 + 0x38) + 0x40);
          if ((*(byte *)(unaff_x22 + 0x135) & 1) == 0) {
            unaff_x22 = func_0x0325681c(unaff_x22);
          }
          if (param_2 != (long *)0x0) {
            lVar12 = func_0x03280b90(param_2,unaff_x22);
            if (lVar12 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar12 = 0;
LAB_03e7bc0c:
          lVar21 = plVar11[2];
          lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 0x80);
          *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(plVar11 + 3);
          if (uVar2 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(plVar11 + 3) = uVar2 + 1;
            *(long *)(lVar21 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
            func_0x032809c4();
          }
          else {
            lVar14 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(plVar11);
          }
        }
        else {
          lVar12 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          lVar14 = 4;
          puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e7bb08:
          unaff_x22 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          if (unaff_x22 == 0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(unaff_x22,0);
          param_2 = (long *)*param_2;
          if (param_2 == (long *)0x0) goto LAB_03e7bcb4;
          lVar12 = *param_2;
          unaff_x23 = (long *)(ulong)uVar2;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          lVar14 = 4;
          puVar5 = (undefined8 *)func_0x03256b10(param_2);
LAB_03e7bb84:
          lVar12 = (*(code *)*puVar5)(param_2,puVar5[1]);
          if (lVar12 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar12,0);
          lVar14 = 0;
          func_0x0611f10c(unaff_x22,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)unaff_x26 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar14 = 0;
        func_0x0556c434(*(undefined8 *)unaff_x27,*(undefined8 *)unaff_x28,0,*(undefined8 *)unaff_x29
                        ,*(undefined8 *)unaff_x25,0,0);
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
    plVar6 = param_2;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    param_2 = plVar6;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(param_2,unaff_x22);
  }
  func_0x03280cac();
  while( true ) {
    auVar23 = func_0x03280ca4(unaff_x22);
    uStack_b8 = auVar23._0_8_;
    if (auVar23._8_4_ != 1) break;
    plVar6 = (long *)func_0x072ce910(uStack_b8);
    unaff_x22 = *plVar6;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(&uStack_80,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x90));
    if (unaff_x22 == 0) {
      return plVar11;
    }
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x90));
  func_0x03365958(uStack_b8);
  func_0x03280ca4(0);
  func_0x02f09514();
  pcStack_f8 = 
  MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_;
  uStack_c0 = 0;
  alStack_160[0] = tpidr_el0;
  lStack_108 = *(long *)(alStack_160[0] + 0x28);
  plVar6 = (long *)(lVar14 + 0x38);
  plVar17 = (long *)*plVar6;
  puStack_100 = unaff_x29;
  puStack_f0 = unaff_x28;
  puStack_e8 = unaff_x27;
  puStack_e0 = unaff_x26;
  puStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  plStack_c8 = unaff_x23;
  plStack_b0 = plVar11;
  lStack_a8 = lVar10;
  if (plVar17 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar17 = (long *)*plVar6;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar17 = *(long **)(lVar14 + 0x38);
    }
  }
  lVar14 = plVar17[8];
  uVar2 = *(uint *)(plVar17[3] + 0xfc);
  uVar20 = (ulong)uVar2;
  uVar9 = (ulong)*(uint *)(lVar14 + 0xfc);
  if ((*(byte *)(plVar17[3] + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
    plVar17 = (long *)*plVar6;
    uVar2 = *(uint *)(lVar14 + 0xfc);
    lVar14 = plVar17[8];
  }
  lVar12 = (long)alStack_160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0);
  uVar1 = *(ushort *)(lVar14 + 0x135);
  lVar10 = lVar14;
  alStack_160[1] = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
    plVar17 = (long *)*plVar6;
    uVar1 = *(ushort *)(plVar17[8] + 0x135);
    lVar10 = plVar17[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar14 = lVar10;
  lStack_128 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
    plVar17 = (long *)*plVar6;
    uVar1 = *(ushort *)(plVar17[8] + 0x135);
    lVar14 = plVar17[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar10 = lVar14;
  lStack_140 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
    plVar17 = (long *)*plVar6;
    uVar1 = *(ushort *)(plVar17[8] + 0x135);
    lVar10 = plVar17[8];
  }
  lVar12 = lVar12 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  alStack_160[2] = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
    plVar17 = (long *)*plVar6;
  }
  alStack_160[3] = lVar12 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar19 = uVar9 + 0xf & 0x1fffffff0;
  plVar22 = (long *)(alStack_160[3] - uVar19);
  lStack_138 = (long)plVar22 - uVar19;
  uVar15 = uVar20 + 0xf & 0x1fffffff0;
  plVar11 = (long *)(lStack_138 - uVar15);
  lVar14 = (long)plVar11 - uVar15;
  func_0x072ce9a0(lVar14,0,uVar20);
  lVar10 = lVar14 - uVar19;
  func_0x072ce9a0(lVar10,0,uVar9);
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plStack_130 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*plVar6 + 8))();
  if (extraout_x1 != 0) {
    puVar5 = *(undefined8 **)(*plVar6 + 0x10);
    plStack_120 = plVar11;
    (*(code *)puVar5[2])(*puVar5,puVar5,extraout_x1,&plStack_120,plVar11);
    func_0x072ce970(lVar14,plVar11,uVar20);
    while( true ) {
      uVar20 = (*(code *)**(undefined8 **)(*plVar6 + 0x88))(lVar14);
      if ((uVar20 & 1) == 0) {
        uVar9 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar6 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar6 + 0x28))();
      puVar5 = *(undefined8 **)(*plVar6 + 0x30);
      plStack_120 = plVar22;
      (*(code *)puVar5[2])(*puVar5,puVar5,lVar14,&plStack_120,plVar22);
      if (lVar12 == 0) break;
      func_0x03280a3c(lVar12,*(undefined8 *)(*(long *)(*plVar6 + 0x20) + 0x80),plVar22,uVar9);
      lVar13 = *plVar6;
      lVar21 = *(long *)(lVar13 + 0x40);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
        lVar13 = *plVar6;
      }
      uVar18 = *(undefined8 *)(lVar13 + 0x48);
      uVar7 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x80));
      func_0x0328158c(lVar21,uVar18,lStack_128,uVar7,0,&plStack_120);
      if (plStack_120 == (long *)0x0) goto LAB_03e7c404;
      if ((int)plStack_120[2] == 0) {
        if ((*(byte *)(*(long *)(*plVar6 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar7 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar6 + 0x60))(uVar7,lVar12,*(undefined8 *)(*plVar6 + 0x50));
        puVar5 = *(undefined8 **)(*plVar6 + 0x68);
        plStack_120 = plStack_130;
        uStack_118 = uVar7;
        plStack_110 = plVar22;
        (*(code *)puVar5[2])(*puVar5,puVar5,0,&plStack_120,plVar22);
        func_0x072ce970(lVar10,plVar22,uVar9);
        lVar21 = lStack_138;
        func_0x072ce970(lStack_138,lVar10,uVar9);
        uVar20 = func_0x03280c64(*(undefined8 *)(*plVar6 + 0x40),lVar21);
        lVar13 = *plVar6;
        lVar21 = *(long *)(lVar13 + 0x40);
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
            lVar13 = *plVar6;
          }
          uVar18 = *(undefined8 *)(lVar13 + 0x78);
          uVar7 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x80));
          func_0x0328158c(lVar21,uVar18,alStack_160[3],uVar7,0,&plStack_120);
          plVar11 = plStack_120;
          lVar12 = *(long *)(*plVar6 + 0x40);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c(lVar12);
          }
          plVar11 = (long *)func_0x03280ba0(plVar11,lVar12,plVar22);
          if (plStack_130 == (long *)0x0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar6 + 0x40) + 0x28)) {
            plVar11 = (long *)*plVar11;
          }
          puVar5 = *(undefined8 **)(*plVar6 + 0x80);
          plStack_120 = plVar11;
          (*(code *)puVar5[2])(*puVar5,puVar5,plStack_130,&plStack_120);
        }
        else {
          if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
            lVar13 = *plVar6;
          }
          func_0x0328158c(lVar21,*(undefined8 *)(lVar13 + 0x48),lStack_140,lVar10,0,&plStack_120);
          plVar11 = plStack_120;
          if (plStack_120 == (long *)0x0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(plStack_120,0);
          lVar13 = *plVar6;
          lVar21 = *(long *)(lVar13 + 0x40);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
            lVar13 = *plVar6;
          }
          uVar18 = *(undefined8 *)(lVar13 + 0x48);
          uVar7 = func_0x03280a38(lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x80));
          func_0x0328158c(lVar21,uVar18,alStack_160[2],uVar7,0,&plStack_120);
          if (plStack_120 == (long *)0x0) goto LAB_03e7c408;
          iVar4 = func_0x0611efd4(plStack_120,0);
          func_0x0611f10c(plVar11,iVar4 + iVar3,0);
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
    func_0x03280ca4(uVar9);
    while( true ) {
      auVar23 = func_0x072ce990();
      uVar7 = auVar23._0_8_;
      if (auVar23._8_4_ != 1) {
        lVar21 = *plVar6;
        lVar12 = *(long *)(lVar21 + 0x18);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
          lVar21 = *plVar6;
        }
        lVar13 = alStack_160[1];
        func_0x0328158c(lVar12,*(undefined8 *)(lVar21 + 0x90),alStack_160[1],lVar14,0,0);
        func_0x03365958(uVar7);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(code **)(lVar10 + -0x30) =
             MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_;
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)(lVar10 + -0x18) = uVar7;
        *(long *)(lVar10 + -0x10) = lVar14;
        *(long **)(lVar10 + -8) = plVar6;
        if (*(long *)(lVar13 + 0x38) == 0) {
          func_0x03256878(lVar13);
        }
        if ((extraout_x1_00 == 0) || (*(int *)(extraout_x1_00 + 0x18) < 2)) {
          plVar11 = (long *)0x0;
        }
        else {
          lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar14 == 0) {
            lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar10 = *(long *)(lVar13 + 0x38);
            lVar14 = *(long *)(lVar10 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
              lVar10 = *(long *)(lVar13 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x18);
            uVar7 = **(undefined8 **)(lVar14 + 0xb8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = func_0x0325681c(lVar10);
            }
            lVar14 = func_0x03280ca0(lVar10);
            func_0x053569b8(lVar14,uVar7,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x30));
            lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar10 + 0xb8) + 8) = lVar14;
            lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar10 + 0xb8) + 8,lVar14);
          }
          uVar7 = func_0x03d45b80(extraout_x1_00,lVar14,
                                  *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar7,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x50));
          plVar11 = (long *)(ulong)(iVar3 != *(int *)(extraout_x1_00 + 0x18));
        }
        return plVar11;
      }
      puVar8 = (ulong *)func_0x072ce910(uVar7);
      uVar9 = *puVar8;
      func_0x072ce920();
LAB_03e7c394:
      lVar21 = *plVar6;
      lVar12 = *(long *)(lVar21 + 0x18);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
        lVar21 = *plVar6;
      }
      func_0x0328158c(lVar12,*(undefined8 *)(lVar21 + 0x90),alStack_160[1],lVar14,0,0);
      if (uVar9 != 0) break;
      if (*(long *)(alStack_160[0] + 0x28) == lStack_108) {
        return plStack_130;
      }
    }
  } while( true );
}


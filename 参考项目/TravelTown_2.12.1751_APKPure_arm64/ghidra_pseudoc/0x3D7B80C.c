/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7B80C; MergeEngine.Configuration.Definitions.Reward.Aggregate<object>; status ok */


undefined8 *
MergeEngine_Configuration_Definitions_Reward__Aggregate_object_
          (undefined8 param_1,long *param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long extraout_x1;
  undefined8 *puVar10;
  long extraout_x1_00;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x22;
  long *unaff_x23;
  ulong uVar20;
  undefined *unaff_x24;
  ulong uVar21;
  undefined *unaff_x25;
  long lVar22;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined1 auVar23 [12];
  long alStack_190 [6];
  long alStack_160 [4];
  long lStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
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
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  plVar12 = *(long **)(param_3 + 0x38);
  lVar11 = param_3;
  if (plVar12 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar12 = *(long **)(param_3 + 0x38);
    if (plVar12 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar12 = *(long **)(param_3 + 0x38);
    }
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if ((*(byte *)(*plVar12 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar5 = (undefined8 *)func_0x03280ca0();
  func_0x04143c38(puVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (param_2 != (long *)0x0) {
    func_0x04145068(&uStack_98,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
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
      uVar6 = func_0x051159b4(&uStack_80,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x88));
      if ((uVar6 & 1) == 0) {
        unaff_x22 = 0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      unaff_x22 = func_0x03280ca0();
      func_0x04034120(unaff_x22,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28));
      if (unaff_x22 == 0) break;
      param_2 = (long *)(unaff_x22 + 0x10);
      *param_2 = lStack_70;
      func_0x032809c4(param_2);
      unaff_x23 = (long *)*param_2;
      if (unaff_x23 == (long *)0x0) goto LAB_03e7bcac;
      lVar13 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      lVar11 = 4;
      puVar7 = (undefined8 *)func_0x03256b10(unaff_x23);
LAB_03e7b9d0:
      lVar13 = (*(code *)*puVar7)(unaff_x23,puVar7[1]);
      if (lVar13 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar13 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        unaff_x23 = (long *)func_0x03280ca0();
        func_0x05355fbc(unaff_x23,unaff_x22,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x60));
        lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x68);
        plVar12 = (long *)func_0x03d45130(puVar5,unaff_x23);
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)*param_2;
          unaff_x22 = 0;
          if (plVar12 == (long *)0x0) goto LAB_03e7bcc0;
          lVar13 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          lVar11 = 0;
          puVar7 = (undefined8 *)func_0x03256b10(plVar12);
LAB_03e7bbbc:
          param_2 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
          if (puVar5 == (undefined8 *)0x0) goto LAB_03e7bcc4;
          unaff_x22 = *(long *)(*(long *)(param_3 + 0x38) + 0x40);
          if ((*(byte *)(unaff_x22 + 0x135) & 1) == 0) {
            unaff_x22 = func_0x0325681c(unaff_x22);
          }
          if (param_2 != (long *)0x0) {
            lVar13 = func_0x03280b90(param_2,unaff_x22);
            if (lVar13 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar13 = 0;
LAB_03e7bc0c:
          lVar17 = puVar5[2];
          lVar22 = *(long *)(*(long *)(param_3 + 0x38) + 0x80);
          *(int *)((long)puVar5 + 0x1c) = *(int *)((long)puVar5 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(puVar5 + 3);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(puVar5 + 3) = uVar2 + 1;
            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            func_0x032809c4();
          }
          else {
            lVar11 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar5);
          }
        }
        else {
          lVar13 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
                puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          lVar11 = 4;
          puVar7 = (undefined8 *)func_0x03256b10(plVar12);
LAB_03e7bb08:
          unaff_x22 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          if (unaff_x22 == 0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(unaff_x22,0);
          param_2 = (long *)*param_2;
          if (param_2 == (long *)0x0) goto LAB_03e7bcb4;
          lVar13 = *param_2;
          unaff_x23 = (long *)(ulong)uVar2;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
                puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          lVar11 = 4;
          puVar7 = (undefined8 *)func_0x03256b10(param_2);
LAB_03e7bb84:
          lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
          if (lVar13 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar13,0);
          lVar11 = 0;
          func_0x0611f10c(unaff_x22,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)unaff_x26 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar11 = 0;
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
    plVar12 = param_2;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    param_2 = plVar12;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(param_2,unaff_x22);
  }
  func_0x03280cac();
  while( true ) {
    auVar23 = func_0x03280ca4(unaff_x22);
    uStack_b8 = auVar23._0_8_;
    if (auVar23._8_4_ != 1) break;
    plVar12 = (long *)func_0x072ce910(uStack_b8);
    unaff_x22 = *plVar12;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(&uStack_80,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x90));
    if (unaff_x22 == 0) {
      return puVar5;
    }
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x90));
  func_0x03365958(uStack_b8);
  func_0x03280ca4(0);
  func_0x02f09514();
  pcStack_f8 = 
  MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_;
  uStack_c0 = 0;
  alStack_160[0] = tpidr_el0;
  lStack_108 = *(long *)(alStack_160[0] + 0x28);
  plVar12 = (long *)(lVar11 + 0x38);
  plVar18 = (long *)*plVar12;
  puStack_100 = unaff_x29;
  puStack_f0 = unaff_x28;
  puStack_e8 = unaff_x27;
  puStack_e0 = unaff_x26;
  puStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  plStack_c8 = unaff_x23;
  puStack_b0 = puVar5;
  lStack_a8 = param_3;
  if (plVar18 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar18 = (long *)*plVar12;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar18 = *(long **)(lVar11 + 0x38);
    }
  }
  lVar11 = plVar18[8];
  uVar2 = *(uint *)(plVar18[3] + 0xfc);
  uVar21 = (ulong)uVar2;
  uVar6 = (ulong)*(uint *)(lVar11 + 0xfc);
  if ((*(byte *)(plVar18[3] + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
    plVar18 = (long *)*plVar12;
    uVar2 = *(uint *)(lVar11 + 0xfc);
    lVar11 = plVar18[8];
  }
  lVar17 = (long)alStack_160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar13 = lVar11;
  alStack_160[1] = lVar17;
  if ((uVar1 & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
    plVar18 = (long *)*plVar12;
    uVar1 = *(ushort *)(plVar18[8] + 0x135);
    lVar13 = plVar18[8];
  }
  lVar17 = lVar17 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = lVar13;
  lStack_128 = lVar17;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar18 = (long *)*plVar12;
    uVar1 = *(ushort *)(plVar18[8] + 0x135);
    lVar11 = plVar18[8];
  }
  lVar17 = lVar17 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar13 = lVar11;
  lStack_140 = lVar17;
  if ((uVar1 & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
    plVar18 = (long *)*plVar12;
    uVar1 = *(ushort *)(plVar18[8] + 0x135);
    lVar13 = plVar18[8];
  }
  lVar17 = lVar17 - ((ulong)(*(int *)(lVar11 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  alStack_160[2] = lVar17;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar18 = (long *)*plVar12;
  }
  alStack_160[3] = lVar17 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar20 = uVar6 + 0xf & 0x1fffffff0;
  puVar7 = (undefined8 *)(alStack_160[3] - uVar20);
  lStack_138 = (long)puVar7 - uVar20;
  uVar15 = uVar21 + 0xf & 0x1fffffff0;
  puVar5 = (undefined8 *)(lStack_138 - uVar15);
  lVar11 = (long)puVar5 - uVar15;
  func_0x072ce9a0(lVar11,0,uVar21);
  lVar13 = lVar11 - uVar20;
  func_0x072ce9a0(lVar13,0,uVar6);
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puStack_130 = (undefined8 *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*plVar12 + 8))();
  if (extraout_x1 != 0) {
    puVar10 = *(undefined8 **)(*plVar12 + 0x10);
    puStack_120 = puVar5;
    (*(code *)puVar10[2])(*puVar10,puVar10,extraout_x1,&puStack_120,puVar5);
    func_0x072ce970(lVar11,puVar5,uVar21);
    while( true ) {
      uVar21 = (*(code *)**(undefined8 **)(*plVar12 + 0x88))(lVar11);
      if ((uVar21 & 1) == 0) {
        uVar6 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar12 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar12 + 0x28))();
      puVar5 = *(undefined8 **)(*plVar12 + 0x30);
      puStack_120 = puVar7;
      (*(code *)puVar5[2])(*puVar5,puVar5,lVar11,&puStack_120,puVar7);
      if (lVar17 == 0) break;
      func_0x03280a3c(lVar17,*(undefined8 *)(*(long *)(*plVar12 + 0x20) + 0x80),puVar7,uVar6);
      lVar14 = *plVar12;
      lVar22 = *(long *)(lVar14 + 0x40);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
        lVar14 = *plVar12;
      }
      uVar19 = *(undefined8 *)(lVar14 + 0x48);
      uVar8 = func_0x03280a38(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x80));
      func_0x0328158c(lVar22,uVar19,lStack_128,uVar8,0,&puStack_120);
      if (puStack_120 == (undefined8 *)0x0) goto LAB_03e7c404;
      if (*(int *)(puStack_120 + 2) == 0) {
        if ((*(byte *)(*(long *)(*plVar12 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar8 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar12 + 0x60))(uVar8,lVar17,*(undefined8 *)(*plVar12 + 0x50))
        ;
        puVar5 = *(undefined8 **)(*plVar12 + 0x68);
        puStack_120 = puStack_130;
        uStack_118 = uVar8;
        puStack_110 = puVar7;
        (*(code *)puVar5[2])(*puVar5,puVar5,0,&puStack_120,puVar7);
        func_0x072ce970(lVar13,puVar7,uVar6);
        lVar22 = lStack_138;
        func_0x072ce970(lStack_138,lVar13,uVar6);
        uVar21 = func_0x03280c64(*(undefined8 *)(*plVar12 + 0x40),lVar22);
        lVar14 = *plVar12;
        lVar22 = *(long *)(lVar14 + 0x40);
        if ((uVar21 & 1) == 0) {
          if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c(lVar22);
            lVar14 = *plVar12;
          }
          uVar19 = *(undefined8 *)(lVar14 + 0x78);
          uVar8 = func_0x03280a38(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x80));
          func_0x0328158c(lVar22,uVar19,alStack_160[3],uVar8,0,&puStack_120);
          puVar5 = puStack_120;
          lVar17 = *(long *)(*plVar12 + 0x40);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c(lVar17);
          }
          puVar5 = (undefined8 *)func_0x03280ba0(puVar5,lVar17,puVar7);
          if (puStack_130 == (undefined8 *)0x0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar12 + 0x40) + 0x28)) {
            puVar5 = (undefined8 *)*puVar5;
          }
          puVar10 = *(undefined8 **)(*plVar12 + 0x80);
          puStack_120 = puVar5;
          (*(code *)puVar10[2])(*puVar10,puVar10,puStack_130,&puStack_120);
        }
        else {
          if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c(lVar22);
            lVar14 = *plVar12;
          }
          func_0x0328158c(lVar22,*(undefined8 *)(lVar14 + 0x48),lStack_140,lVar13,0,&puStack_120);
          puVar5 = puStack_120;
          if (puStack_120 == (undefined8 *)0x0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(puStack_120,0);
          lVar14 = *plVar12;
          lVar22 = *(long *)(lVar14 + 0x40);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c(lVar22);
            lVar14 = *plVar12;
          }
          uVar19 = *(undefined8 *)(lVar14 + 0x48);
          uVar8 = func_0x03280a38(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x80));
          func_0x0328158c(lVar22,uVar19,alStack_160[2],uVar8,0,&puStack_120);
          if (puStack_120 == (undefined8 *)0x0) goto LAB_03e7c408;
          iVar4 = func_0x0611efd4(puStack_120,0);
          func_0x0611f10c(puVar5,iVar4 + iVar3,0);
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
      auVar23 = func_0x072ce990();
      uVar8 = auVar23._0_8_;
      if (auVar23._8_4_ != 1) {
        lVar22 = *plVar12;
        lVar17 = *(long *)(lVar22 + 0x18);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c();
          lVar22 = *plVar12;
        }
        lVar14 = alStack_160[1];
        func_0x0328158c(lVar17,*(undefined8 *)(lVar22 + 0x90),alStack_160[1],lVar11,0,0);
        func_0x03365958(uVar8);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(undefined8 *)(lVar13 + -0x30) = 0x3e7c4dc;
        *(undefined8 *)(lVar13 + -0x20) = 0;
        *(undefined8 *)(lVar13 + -0x18) = uVar8;
        *(long *)(lVar13 + -0x10) = lVar11;
        *(long **)(lVar13 + -8) = plVar12;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if ((extraout_x1_00 == 0) || (*(int *)(extraout_x1_00 + 0x18) < 2)) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 == 0) {
            lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = func_0x0325681c();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(lVar14 + 0x38);
            lVar11 = *(long *)(lVar13 + 0x20);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = func_0x0325681c();
              lVar13 = *(long *)(lVar14 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x18);
            uVar8 = **(undefined8 **)(lVar11 + 0xb8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar11 = func_0x03280ca0(lVar13);
            func_0x053569b8(lVar11,uVar8,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x30));
            lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar11;
            lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar13 + 0xb8) + 8,lVar11);
          }
          uVar8 = func_0x03d45b80(extraout_x1_00,lVar11,
                                  *(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar8,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x50));
          puVar5 = (undefined8 *)(ulong)(iVar3 != *(int *)(extraout_x1_00 + 0x18));
        }
        return puVar5;
      }
      puVar9 = (ulong *)func_0x072ce910(uVar8);
      uVar6 = *puVar9;
      func_0x072ce920();
LAB_03e7c394:
      lVar22 = *plVar12;
      lVar17 = *(long *)(lVar22 + 0x18);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
        lVar22 = *plVar12;
      }
      func_0x0328158c(lVar17,*(undefined8 *)(lVar22 + 0x90),alStack_160[1],lVar11,0,0);
      if (uVar6 != 0) break;
      if (*(long *)(alStack_160[0] + 0x28) == lStack_108) {
        return puStack_130;
      }
    }
  } while( true );
}


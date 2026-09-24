/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7B4B4; MergeEngine.Configuration.Definitions.Reward.AddViewDatas<__Il2CppFullySharedGenericType>; status ok */


ulong MergeEngine_Configuration_Definitions_Reward__AddViewDatas___Il2CppFullySharedGenericType_
                (undefined8 param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  long *extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar11;
  long extraout_x1_01;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *unaff_x28;
  undefined *puVar31;
  undefined1 auVar32 [12];
  long alStack_200 [6];
  long alStack_1d0 [8];
  long alStack_190 [17];
  undefined8 auStack_108 [3];
  long alStack_f0 [4];
  undefined auStack_d0 [8];
  long alStack_c8 [11];
  long *plStack_70;
  long lStack_68;
  
  puVar31 = &stack0xffffffffffffffa0;
  puVar28 = (undefined *)tpidr_el0;
  lStack_68 = *(long *)(puVar28 + 0x28);
  puVar29 = *(undefined **)(param_3 + 0x38);
  if (puVar29 == (undefined *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    puVar29 = *(undefined **)(param_3 + 0x38);
    if (puVar29 == (undefined *)0x0) {
      func_0x03256878(param_3);
      puVar29 = *(undefined **)(param_3 + 0x38);
    }
  }
  uVar23 = (ulong)*(uint *)(*(long *)(puVar29 + 0x20) + 0xfc);
  uVar17 = uVar23 + 0xf & 0x1fffffff0;
  plVar24 = (long *)((long)&plStack_70 - uVar17);
  puVar25 = (undefined *)((long)plVar24 - uVar17);
  puVar26 = puVar25 + -uVar17;
  uVar17 = uVar23;
  func_0x072ce9a0(puVar26,0);
  if (param_2 == 0) {
    func_0x03280cac();
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(*(code *)**(undefined8 **)(puVar29 + 8))(param_2);
    puVar30 = PTR_DAT_0774e8e0;
    if (plVar5 != (long *)0x0) {
      do {
        lVar12 = *plVar5;
        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar30) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03e7b5d4;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        uVar17 = 0;
        puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b5d4:
        uVar18 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar18 & 1) == 0) {
          param_3 = 0;
          goto LAB_03e7b6ac;
        }
        lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar13 = *plVar5;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar12) {
              lVar12 = lVar13 + (long)*piVar20 * 0x10 + 0x138;
              goto LAB_03e7b648;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        lVar12 = func_0x03256b10(plVar5,lVar12,0);
LAB_03e7b648:
        lVar12 = *(long *)(lVar12 + 8);
        plStack_70 = plVar24;
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar5,&plStack_70,plVar24);
        func_0x072ce970(puVar26,plVar24,uVar23);
        func_0x072ce970(puVar25,puVar26,uVar23);
        uVar7 = func_0x03280b94(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),puVar25);
        uVar17 = 0;
        func_0x06b25acc(param_1,uVar7);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03e7b74c:
  func_0x03280ca4(param_3);
  puVar30 = puVar29;
  do {
    auVar32 = func_0x072ce990();
    uVar7 = auVar32._0_8_;
    if (auVar32._8_4_ != 1) {
      if (plVar5 == (long *)0x0) goto LAB_03e7b7f4;
      lVar12 = *plVar5;
      uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar18 == 0) goto LAB_03e7b7cc;
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    plVar8 = (long *)func_0x072ce910(uVar7);
    param_3 = *plVar8;
    uVar18 = func_0x072ce920();
LAB_03e7b6ac:
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03e7b704;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      uVar17 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b704:
      uVar18 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    puVar29 = puVar30;
    if (param_3 != 0) goto LAB_03e7b74c;
    if (*(long *)(puVar28 + 0x28) == lStack_68) {
      return uVar18;
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03e7b7e8;
    }
  }
LAB_03e7b7cc:
  uVar17 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b7e8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_03e7b7f4:
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined1 **)(puVar26 + -0x60) = &stack0xffffffffffffffa0;
  *(undefined8 *)(puVar26 + -0x58) = 0x3e7b80c;
  *(undefined **)(puVar26 + -0x50) = unaff_x28;
  *(undefined **)(puVar26 + -0x48) = puVar30;
  *(undefined **)(puVar26 + -0x40) = puVar28;
  *(undefined **)(puVar26 + -0x38) = puVar26;
  *(undefined **)(puVar26 + -0x30) = puVar25;
  *(long **)(puVar26 + -0x28) = plVar24;
  *(ulong *)(puVar26 + -0x20) = uVar23;
  *(undefined8 *)(puVar26 + -0x18) = uVar7;
  *(undefined8 *)(puVar26 + -0x10) = 0;
  *(long **)(puVar26 + -8) = plVar5;
  plVar5 = *(long **)(uVar17 + 0x38);
  uVar18 = uVar17;
  if (plVar5 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar5 = *(long **)(uVar17 + 0x38);
    if (plVar5 == (long *)0x0) {
      func_0x03256878(uVar17);
      plVar5 = *(long **)(uVar17 + 0x38);
    }
  }
  *(undefined8 *)(puVar26 + -0x80) = 0;
  *(undefined8 *)(puVar26 + -0x78) = 0;
  *(undefined8 *)(puVar26 + -0x70) = 0;
  if ((*(byte *)(*plVar5 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar9 = func_0x03280ca0();
  func_0x04143c38(uVar9,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 8));
  puVar29 = puVar26;
  if (extraout_x1 != (long *)0x0) {
    func_0x04145068(puVar26 + -0x98,extraout_x1,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x10));
    puVar31 = PTR_DAT_0777b2d8;
    puVar29 = PTR_DAT_0777b2d0;
    puVar30 = PTR_DAT_0777b2c8;
    puVar25 = PTR_DAT_07771788;
    puVar28 = PTR_DAT_0776dcd8;
    unaff_x28 = PTR_DAT_077503b8;
    *(undefined8 *)(puVar26 + -0x78) = *(undefined8 *)(puVar26 + -0x90);
    *(undefined8 *)(puVar26 + -0x80) = *(undefined8 *)(puVar26 + -0x98);
    *(undefined8 *)(puVar26 + -0x70) = *(undefined8 *)(puVar26 + -0x88);
    plVar5 = extraout_x1;
    while( true ) {
      uVar23 = func_0x051159b4(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x88));
      if ((uVar23 & 1) == 0) {
        uVar23 = 0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(uVar17 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      func_0x04034120(uVar23,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x28));
      if (uVar23 == 0) break;
      plVar5 = (long *)(uVar23 + 0x10);
      *plVar5 = *(long *)(puVar26 + -0x70);
      func_0x032809c4(plVar5);
      plVar24 = (long *)*plVar5;
      if (plVar24 == (long *)0x0) goto LAB_03e7bcac;
      lVar12 = *plVar24;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar20 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      uVar18 = 4;
      puVar6 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03e7b9d0:
      lVar12 = (*(code *)*puVar6)(plVar24,puVar6[1]);
      if (lVar12 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar12 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(uVar17 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar24 = (long *)func_0x03280ca0();
        func_0x05355fbc(plVar24,uVar23,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x60));
        uVar18 = *(ulong *)(*(long *)(uVar17 + 0x38) + 0x68);
        plVar8 = (long *)func_0x03d45130(uVar9,plVar24);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)*plVar5;
          uVar23 = 0;
          if (plVar8 == (long *)0x0) goto LAB_03e7bcc0;
          lVar12 = *plVar8;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          uVar18 = 0;
          puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7bbbc:
          plVar5 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
          if (uVar9 == 0) goto LAB_03e7bcc4;
          uVar23 = *(ulong *)(*(long *)(uVar17 + 0x38) + 0x40);
          if ((*(byte *)(uVar23 + 0x135) & 1) == 0) {
            uVar23 = func_0x0325681c(uVar23);
          }
          if (plVar5 != (long *)0x0) {
            lVar12 = func_0x03280b90(plVar5,uVar23);
            if (lVar12 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar12 = 0;
LAB_03e7bc0c:
          lVar13 = *(long *)(uVar9 + 0x10);
          lVar21 = *(long *)(*(long *)(uVar17 + 0x38) + 0x80);
          *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(uVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(uVar9 + 0x18) = uVar2 + 1;
            *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
            func_0x032809c4();
          }
          else {
            uVar18 = *(ulong *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(uVar9);
          }
        }
        else {
          lVar12 = *plVar8;
          uVar23 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar23 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar23 = uVar23 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar23 != 0);
          }
          uVar18 = 4;
          puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7bb08:
          uVar23 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          if (uVar23 == 0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(uVar23,0);
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_03e7bcb4;
          lVar12 = *plVar5;
          plVar24 = (long *)(ulong)uVar2;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          uVar18 = 4;
          puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7bb84:
          lVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar12 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar12,0);
          uVar18 = 0;
          func_0x0611f10c(uVar23,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)puVar28 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar18 = 0;
        func_0x0556c434(*(undefined8 *)puVar30,*(undefined8 *)unaff_x28,0,*(undefined8 *)puVar31,
                        *(undefined8 *)puVar29,0,0);
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
    plVar8 = plVar5;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    plVar5 = plVar8;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(plVar5,uVar23);
  }
  func_0x03280cac();
  while( true ) {
    auVar32 = func_0x03280ca4(uVar23);
    uVar7 = auVar32._0_8_;
    if (auVar32._8_4_ != 1) break;
    puVar10 = (ulong *)func_0x072ce910(uVar7);
    uVar23 = *puVar10;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x90));
    if (uVar23 == 0) {
      return uVar9;
    }
  }
  func_0x051159b0(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar17 + 0x38) + 0x90));
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined **)(puVar26 + -0x100) = puVar31;
  *(undefined8 *)(puVar26 + -0xf8) = 0x3e7bd80;
  *(undefined **)(puVar26 + -0xf0) = unaff_x28;
  *(undefined **)(puVar26 + -0xe8) = puVar30;
  *(undefined **)(puVar26 + -0xe0) = puVar28;
  *(undefined **)(puVar26 + -0xd8) = puVar29;
  *(undefined **)(puVar26 + -0xd0) = puVar25;
  *(long **)(puVar26 + -200) = plVar24;
  *(undefined8 *)(puVar26 + -0xc0) = 0;
  *(undefined8 *)(puVar26 + -0xb8) = uVar7;
  *(ulong *)(puVar26 + -0xb0) = uVar9;
  *(ulong *)(puVar26 + -0xa8) = uVar17;
  lVar12 = tpidr_el0;
  *(long *)(puVar26 + -0x160) = lVar12;
  *(undefined8 *)(puVar26 + -0x108) = *(undefined8 *)(lVar12 + 0x28);
  plVar24 = (long *)(uVar18 + 0x38);
  plVar5 = (long *)*plVar24;
  if (plVar5 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar5 = (long *)*plVar24;
    if (plVar5 == (long *)0x0) {
      func_0x03256878(uVar18);
      plVar5 = *(long **)(uVar18 + 0x38);
    }
  }
  lVar12 = plVar5[8];
  uVar2 = *(uint *)(plVar5[3] + 0xfc);
  uVar17 = (ulong)uVar2;
  uVar23 = (ulong)*(uint *)(lVar12 + 0xfc);
  if ((*(byte *)(plVar5[3] + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
    plVar5 = (long *)*plVar24;
    uVar2 = *(uint *)(lVar12 + 0xfc);
    lVar12 = plVar5[8];
  }
  uVar1 = *(ushort *)(lVar12 + 0x135);
  *(undefined **)(puVar26 + -0x158) =
       puVar26 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0));
  lVar13 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
    plVar5 = (long *)*plVar24;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar13 = plVar5[8];
  }
  lVar21 = (long)(puVar26 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0))) -
           ((ulong)(*(int *)(lVar12 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x128) = lVar21;
  lVar12 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar5 = (long *)*plVar24;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar12 = plVar5[8];
  }
  lVar21 = lVar21 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x140) = lVar21;
  lVar13 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
    plVar5 = (long *)*plVar24;
    uVar1 = *(ushort *)(plVar5[8] + 0x135);
    lVar13 = plVar5[8];
  }
  lVar21 = lVar21 - ((ulong)(*(int *)(lVar12 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x150) = lVar21;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar5 = (long *)*plVar24;
  }
  lVar21 = lVar21 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x148) = lVar21;
  uVar9 = uVar23 + 0xf & 0x1fffffff0;
  lVar21 = lVar21 - uVar9;
  *(ulong *)(puVar26 + -0x138) = lVar21 - uVar9;
  uVar18 = uVar17 + 0xf & 0x1fffffff0;
  lVar27 = (lVar21 - uVar9) - uVar18;
  lVar12 = lVar27 - uVar18;
  func_0x072ce9a0(lVar12,0,uVar17);
  lVar13 = lVar12 - uVar9;
  func_0x072ce9a0(lVar13,0,uVar23);
  if ((*(byte *)(*plVar5 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar7 = func_0x03280ca0();
  lVar14 = *plVar24;
  *(undefined8 *)(puVar26 + -0x130) = uVar7;
  (*(code *)**(undefined8 **)(lVar14 + 8))();
  if (extraout_x1_00 != 0) {
    puVar6 = *(undefined8 **)(*plVar24 + 0x10);
    uVar7 = *puVar6;
    *(long *)(puVar26 + -0x120) = lVar27;
    (*(code *)puVar6[2])(uVar7,puVar6,extraout_x1_00,puVar26 + -0x120,lVar27);
    func_0x072ce970(lVar12,lVar27,uVar17);
    while( true ) {
      uVar17 = (*(code *)**(undefined8 **)(*plVar24 + 0x88))(lVar12);
      if ((uVar17 & 1) == 0) {
        uVar23 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar24 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar27 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar24 + 0x28))();
      puVar6 = *(undefined8 **)(*plVar24 + 0x30);
      uVar7 = *puVar6;
      *(long *)(puVar26 + -0x120) = lVar21;
      (*(code *)puVar6[2])(uVar7,puVar6,lVar12,puVar26 + -0x120,lVar21);
      if (lVar27 == 0) break;
      func_0x03280a3c(lVar27,*(undefined8 *)(*(long *)(*plVar24 + 0x20) + 0x80),lVar21,uVar23);
      lVar15 = *plVar24;
      lVar14 = *(long *)(lVar15 + 0x40);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar15 = *plVar24;
      }
      uVar22 = *(undefined8 *)(lVar15 + 0x48);
      uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x80));
      func_0x0328158c(lVar14,uVar22,*(undefined8 *)(puVar26 + -0x128),uVar7,0,puVar26 + -0x120);
      if (*(long *)(puVar26 + -0x120) == 0) goto LAB_03e7c404;
      if (*(int *)(*(long *)(puVar26 + -0x120) + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*plVar24 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar7 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar24 + 0x60))(uVar7,lVar27,*(undefined8 *)(*plVar24 + 0x50))
        ;
        puVar6 = *(undefined8 **)(*plVar24 + 0x68);
        uVar22 = *puVar6;
        *(undefined8 *)(puVar26 + -0x120) = *(undefined8 *)(puVar26 + -0x130);
        *(undefined8 *)(puVar26 + -0x118) = uVar7;
        *(long *)(puVar26 + -0x110) = lVar21;
        (*(code *)puVar6[2])(uVar22,puVar6,0,puVar26 + -0x120,lVar21);
        func_0x072ce970(lVar13,lVar21,uVar23);
        uVar7 = *(undefined8 *)(puVar26 + -0x138);
        func_0x072ce970(uVar7,lVar13,uVar23);
        uVar17 = func_0x03280c64(*(undefined8 *)(*plVar24 + 0x40),uVar7);
        lVar15 = *plVar24;
        lVar14 = *(long *)(lVar15 + 0x40);
        if ((uVar17 & 1) == 0) {
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c(lVar14);
            lVar15 = *plVar24;
          }
          uVar22 = *(undefined8 *)(lVar15 + 0x78);
          uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x80));
          func_0x0328158c(lVar14,uVar22,*(undefined8 *)(puVar26 + -0x148),uVar7,0,puVar26 + -0x120);
          uVar7 = *(undefined8 *)(puVar26 + -0x120);
          lVar27 = *(long *)(*plVar24 + 0x40);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c(lVar27);
          }
          puVar6 = (undefined8 *)func_0x03280ba0(uVar7,lVar27,lVar21);
          if (*(long *)(puVar26 + -0x130) == 0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar24 + 0x40) + 0x28)) {
            puVar6 = (undefined8 *)*puVar6;
          }
          puVar11 = *(undefined8 **)(*plVar24 + 0x80);
          uVar7 = *puVar11;
          *(undefined8 **)(puVar26 + -0x120) = puVar6;
          (*(code *)puVar11[2])(uVar7,puVar11,*(undefined8 *)(puVar26 + -0x130),puVar26 + -0x120);
        }
        else {
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c(lVar14);
            lVar15 = *plVar24;
          }
          func_0x0328158c(lVar14,*(undefined8 *)(lVar15 + 0x48),*(undefined8 *)(puVar26 + -0x140),
                          lVar13,0,puVar26 + -0x120);
          lVar14 = *(long *)(puVar26 + -0x120);
          if (lVar14 == 0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(lVar14,0);
          lVar16 = *plVar24;
          lVar15 = *(long *)(lVar16 + 0x40);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
            lVar16 = *plVar24;
          }
          uVar22 = *(undefined8 *)(lVar16 + 0x48);
          uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x80));
          func_0x0328158c(lVar15,uVar22,*(undefined8 *)(puVar26 + -0x150),uVar7,0,puVar26 + -0x120);
          if (*(long *)(puVar26 + -0x120) == 0) goto LAB_03e7c408;
          iVar4 = func_0x0611efd4(*(long *)(puVar26 + -0x120),0);
          func_0x0611f10c(lVar14,iVar4 + iVar3,0);
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
    func_0x03280ca4(uVar23);
    while( true ) {
      auVar32 = func_0x072ce990();
      uVar7 = auVar32._0_8_;
      if (auVar32._8_4_ != 1) {
        lVar27 = *plVar24;
        lVar21 = *(long *)(lVar27 + 0x18);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c();
          lVar27 = *plVar24;
        }
        lVar14 = *(long *)(puVar26 + -0x158);
        func_0x0328158c(lVar21,*(undefined8 *)(lVar27 + 0x90),lVar14,lVar12,0,0);
        func_0x03365958(uVar7);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(undefined8 *)(lVar13 + -0x30) = 0x3e7c4dc;
        *(undefined8 *)(lVar13 + -0x20) = 0;
        *(undefined8 *)(lVar13 + -0x18) = uVar7;
        *(long *)(lVar13 + -0x10) = lVar12;
        *(long **)(lVar13 + -8) = plVar24;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if ((extraout_x1_01 == 0) || (*(int *)(extraout_x1_01 + 0x18) < 2)) {
          uVar23 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
          if (lVar12 == 0) {
            lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = func_0x0325681c();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(lVar14 + 0x38);
            lVar12 = *(long *)(lVar13 + 0x20);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = func_0x0325681c();
              lVar13 = *(long *)(lVar14 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x18);
            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar12 = func_0x03280ca0(lVar13);
            func_0x053569b8(lVar12,uVar7,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x30));
            lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar12;
            lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar13 + 0xb8) + 8,lVar12);
          }
          uVar7 = func_0x03d45b80(extraout_x1_01,lVar12,
                                  *(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar7,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x50));
          uVar23 = (ulong)(iVar3 != *(int *)(extraout_x1_01 + 0x18));
        }
        return uVar23;
      }
      puVar10 = (ulong *)func_0x072ce910(uVar7);
      uVar23 = *puVar10;
      func_0x072ce920();
LAB_03e7c394:
      lVar27 = *plVar24;
      lVar21 = *(long *)(lVar27 + 0x18);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
        lVar27 = *plVar24;
      }
      func_0x0328158c(lVar21,*(undefined8 *)(lVar27 + 0x90),*(undefined8 *)(puVar26 + -0x158),lVar12
                      ,0,0);
      if (uVar23 != 0) break;
      if (*(long *)(*(long *)(puVar26 + -0x160) + 0x28) == *(long *)(puVar26 + -0x108)) {
        return *(ulong *)(puVar26 + -0x130);
      }
    }
  } while( true );
}


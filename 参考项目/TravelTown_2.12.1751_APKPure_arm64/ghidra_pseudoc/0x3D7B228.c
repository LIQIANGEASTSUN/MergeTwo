/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7B228; MergeEngine.Configuration.Definitions.Reward.AddViewDatas<object>; status ok */


ulong MergeEngine_Configuration_Definitions_Reward__AddViewDatas_object_
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
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar12;
  long extraout_x1_01;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *unaff_x28;
  undefined *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  long alStack_230 [6];
  long alStack_200 [8];
  long alStack_1c0 [17];
  undefined8 auStack_138 [3];
  long alStack_120 [4];
  undefined auStack_100 [8];
  long alStack_f8 [11];
  long *plStack_a0;
  long lStack_98;
  
  lVar13 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x03256878(param_3);
    }
  }
  if (param_2 == 0) {
    func_0x03280cac();
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)func_0x04545bc8(param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
    puVar28 = PTR_DAT_0774e8e0;
    if (plVar5 != (long *)0x0) {
      do {
        lVar14 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar19 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar28) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e7b2e0;
            }
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar19 != 0);
        }
        lVar13 = 0;
        puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b2e0:
        uVar19 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar19 & 1) == 0) {
          param_3 = 0;
          goto LAB_03e7b378;
        }
        lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        lVar14 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar19 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar13) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e7b354;
            }
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar19 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e7b354:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        lVar13 = 0;
        func_0x06b25acc(param_1,uVar7);
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar33 = func_0x03280ca4(param_3);
    if (auVar33._8_4_ != 1) break;
    plVar8 = (long *)func_0x072ce910(auVar33._0_8_);
    param_3 = *plVar8;
    uVar19 = func_0x072ce920();
LAB_03e7b378:
    if (plVar5 != (long *)0x0) {
      lVar14 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar19 != 0) {
        piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e7b3d0;
          }
          uVar19 = uVar19 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar19 != 0);
      }
      lVar13 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b3d0:
      uVar19 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (param_3 == 0) {
      return uVar19;
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar14 = *plVar5;
    uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar19 != 0) {
      piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e7b490;
        }
        uVar19 = uVar19 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar19 != 0);
    }
    lVar13 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b490:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  puVar31 = &stack0xffffffffffffff70;
  puVar28 = (undefined *)tpidr_el0;
  lStack_98 = *(long *)(puVar28 + 0x28);
  puVar29 = *(undefined **)(lVar13 + 0x38);
  if (puVar29 == (undefined *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    puVar29 = *(undefined **)(lVar13 + 0x38);
    if (puVar29 == (undefined *)0x0) {
      func_0x03256878(lVar13);
      puVar29 = *(undefined **)(lVar13 + 0x38);
    }
  }
  uVar19 = (ulong)*(uint *)(*(long *)(puVar29 + 0x20) + 0xfc);
  uVar20 = uVar19 + 0xf & 0x1fffffff0;
  plVar5 = (long *)((long)&plStack_a0 - uVar20);
  puVar25 = (undefined *)((long)plVar5 - uVar20);
  puVar26 = puVar25 + -uVar20;
  uVar20 = uVar19;
  func_0x072ce9a0(puVar26,0);
  if (auVar32._8_8_ == 0) {
    func_0x03280cac();
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)(*(code *)**(undefined8 **)(puVar29 + 8))(auVar32._8_8_);
    puVar30 = PTR_DAT_0774e8e0;
    if (plVar8 != (long *)0x0) {
      do {
        lVar14 = *plVar8;
        uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar21 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar30) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e7b5d4;
            }
            uVar21 = uVar21 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar21 != 0);
        }
        uVar20 = 0;
        puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7b5d4:
        uVar21 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar21 & 1) == 0) {
          lVar13 = 0;
          goto LAB_03e7b6ac;
        }
        lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar15 = *plVar8;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar14) {
              lVar14 = lVar15 + (long)*piVar23 * 0x10 + 0x138;
              goto LAB_03e7b648;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        lVar14 = func_0x03256b10(plVar8,lVar14,0);
LAB_03e7b648:
        lVar14 = *(long *)(lVar14 + 8);
        plStack_a0 = plVar5;
        (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),lVar14,plVar8,&plStack_a0,plVar5);
        func_0x072ce970(puVar26,plVar5,uVar19);
        func_0x072ce970(puVar25,puVar26,uVar19);
        uVar7 = func_0x03280b94(*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x20),puVar25);
        uVar20 = 0;
        func_0x06b25acc(auVar32._0_8_,uVar7);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03e7b74c:
  func_0x03280ca4(lVar13);
  puVar30 = puVar29;
  do {
    auVar33 = func_0x072ce990();
    uVar7 = auVar33._0_8_;
    if (auVar33._8_4_ != 1) {
      if (plVar8 == (long *)0x0) goto LAB_03e7b7f4;
      lVar13 = *plVar8;
      uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar21 == 0) goto LAB_03e7b7cc;
      piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    plVar9 = (long *)func_0x072ce910(uVar7);
    lVar13 = *plVar9;
    uVar21 = func_0x072ce920();
LAB_03e7b6ac:
    if (plVar8 != (long *)0x0) {
      lVar14 = *plVar8;
      uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar6 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e7b704;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      uVar20 = 0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7b704:
      uVar21 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    }
    puVar29 = puVar30;
    if (lVar13 != 0) goto LAB_03e7b74c;
    if (*(long *)(puVar28 + 0x28) == lStack_98) {
      return uVar21;
    }
  } while( true );
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar23 = piVar23 + 4;
    if (uVar21 == 0) break;
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_03e7b7e8;
    }
  }
LAB_03e7b7cc:
  uVar20 = 0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7b7e8:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_03e7b7f4:
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  func_0x02f09514();
  *(undefined1 **)(puVar26 + -0x60) = &stack0xffffffffffffff70;
  *(undefined8 *)(puVar26 + -0x58) = 0x3e7b80c;
  *(undefined **)(puVar26 + -0x50) = unaff_x28;
  *(undefined **)(puVar26 + -0x48) = puVar30;
  *(undefined **)(puVar26 + -0x40) = puVar28;
  *(undefined **)(puVar26 + -0x38) = puVar26;
  *(undefined **)(puVar26 + -0x30) = puVar25;
  *(long **)(puVar26 + -0x28) = plVar5;
  *(ulong *)(puVar26 + -0x20) = uVar19;
  *(undefined8 *)(puVar26 + -0x18) = uVar7;
  *(undefined8 *)(puVar26 + -0x10) = 0;
  *(long **)(puVar26 + -8) = plVar8;
  plVar8 = *(long **)(uVar20 + 0x38);
  uVar21 = uVar20;
  if (plVar8 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07771788);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar8 = *(long **)(uVar20 + 0x38);
    if (plVar8 == (long *)0x0) {
      func_0x03256878(uVar20);
      plVar8 = *(long **)(uVar20 + 0x38);
    }
  }
  *(undefined8 *)(puVar26 + -0x80) = 0;
  *(undefined8 *)(puVar26 + -0x78) = 0;
  *(undefined8 *)(puVar26 + -0x70) = 0;
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar10 = func_0x03280ca0();
  func_0x04143c38(uVar10,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 8));
  puVar29 = puVar26;
  if (extraout_x1 != (long *)0x0) {
    func_0x04145068(puVar26 + -0x98,extraout_x1,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x10));
    puVar31 = PTR_DAT_0777b2d8;
    puVar29 = PTR_DAT_0777b2d0;
    puVar30 = PTR_DAT_0777b2c8;
    puVar25 = PTR_DAT_07771788;
    puVar28 = PTR_DAT_0776dcd8;
    unaff_x28 = PTR_DAT_077503b8;
    *(undefined8 *)(puVar26 + -0x78) = *(undefined8 *)(puVar26 + -0x90);
    *(undefined8 *)(puVar26 + -0x80) = *(undefined8 *)(puVar26 + -0x98);
    *(undefined8 *)(puVar26 + -0x70) = *(undefined8 *)(puVar26 + -0x88);
    plVar8 = extraout_x1;
    while( true ) {
      uVar19 = func_0x051159b4(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x88));
      if ((uVar19 & 1) == 0) {
        uVar19 = 0;
        goto LAB_03e7bc6c;
      }
      if ((*(byte *)(*(long *)(*(long *)(uVar20 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar19 = func_0x03280ca0();
      func_0x04034120(uVar19,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x28));
      if (uVar19 == 0) break;
      plVar8 = (long *)(uVar19 + 0x10);
      *plVar8 = *(long *)(puVar26 + -0x70);
      func_0x032809c4(plVar8);
      plVar5 = (long *)*plVar8;
      if (plVar5 == (long *)0x0) goto LAB_03e7bcac;
      lVar13 = *plVar5;
      uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)puVar25) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar23 + 4) * 0x10 + 0x138);
            goto LAB_03e7b9d0;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      uVar21 = 4;
      puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e7b9d0:
      lVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar13 == 0) {
        func_0x03280cac();
        break;
      }
      if (*(int *)(lVar13 + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*(long *)(uVar20 + 0x38) + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar5 = (long *)func_0x03280ca0();
        func_0x05355fbc(plVar5,uVar19,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x50),
                        *(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x60));
        uVar21 = *(ulong *)(*(long *)(uVar20 + 0x38) + 0x68);
        plVar9 = (long *)func_0x03d45130(uVar10,plVar5);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)*plVar8;
          uVar19 = 0;
          if (plVar9 == (long *)0x0) goto LAB_03e7bcc0;
          lVar13 = *plVar9;
          uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777b2c0) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_03e7bbbc;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          uVar21 = 0;
          puVar6 = (undefined8 *)func_0x03256b10(plVar9);
LAB_03e7bbbc:
          plVar8 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
          if (uVar10 == 0) goto LAB_03e7bcc4;
          uVar19 = *(ulong *)(*(long *)(uVar20 + 0x38) + 0x40);
          if ((*(byte *)(uVar19 + 0x135) & 1) == 0) {
            uVar19 = func_0x0325681c(uVar19);
          }
          if (plVar8 != (long *)0x0) {
            lVar13 = func_0x03280b90(plVar8,uVar19);
            if (lVar13 != 0) goto LAB_03e7bc0c;
            goto LAB_03e7bcc8;
          }
          lVar13 = 0;
LAB_03e7bc0c:
          lVar14 = *(long *)(uVar10 + 0x10);
          lVar15 = *(long *)(*(long *)(uVar20 + 0x38) + 0x80);
          *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03e7bcbc;
          uVar2 = *(uint *)(uVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(uVar10 + 0x18) = uVar2 + 1;
            *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            func_0x032809c4();
          }
          else {
            uVar21 = *(ulong *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(uVar10);
          }
        }
        else {
          lVar13 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar19 != 0) {
            piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar25) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar23 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb08;
              }
              uVar19 = uVar19 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar19 != 0);
          }
          uVar21 = 4;
          puVar6 = (undefined8 *)func_0x03256b10(plVar9);
LAB_03e7bb08:
          uVar19 = (*(code *)*puVar6)(plVar9,puVar6[1]);
          if (uVar19 == 0) goto LAB_03e7bcb0;
          uVar2 = func_0x0611efd4(uVar19,0);
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_03e7bcb4;
          lVar13 = *plVar8;
          plVar5 = (long *)(ulong)uVar2;
          uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar25) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar23 + 4) * 0x10 + 0x138);
                goto LAB_03e7bb84;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          uVar21 = 4;
          puVar6 = (undefined8 *)func_0x03256b10(plVar8);
LAB_03e7bb84:
          lVar13 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          if (lVar13 == 0) goto LAB_03e7bcb8;
          iVar3 = func_0x0611efd4(lVar13,0);
          uVar21 = 0;
          func_0x0611f10c(uVar19,iVar3 + uVar2);
        }
      }
      else {
        if (*(int *)(*(long *)puVar28 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar21 = 0;
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
    plVar9 = plVar8;
LAB_03e7bcc0:
    func_0x03280cac();
LAB_03e7bcc4:
    plVar8 = plVar9;
    func_0x03280cac();
LAB_03e7bcc8:
    func_0x03281048(plVar8,uVar19);
  }
  func_0x03280cac();
  while( true ) {
    auVar33 = func_0x03280ca4(uVar19);
    uVar7 = auVar33._0_8_;
    if (auVar33._8_4_ != 1) break;
    puVar11 = (ulong *)func_0x072ce910(uVar7);
    uVar19 = *puVar11;
    func_0x072ce920();
LAB_03e7bc6c:
    func_0x051159b0(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x90));
    if (uVar19 == 0) {
      return uVar10;
    }
  }
  func_0x051159b0(puVar26 + -0x80,*(undefined8 *)(*(long *)(uVar20 + 0x38) + 0x90));
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
  *(long **)(puVar26 + -200) = plVar5;
  *(undefined8 *)(puVar26 + -0xc0) = 0;
  *(undefined8 *)(puVar26 + -0xb8) = uVar7;
  *(ulong *)(puVar26 + -0xb0) = uVar10;
  *(ulong *)(puVar26 + -0xa8) = uVar20;
  lVar13 = tpidr_el0;
  *(long *)(puVar26 + -0x160) = lVar13;
  *(undefined8 *)(puVar26 + -0x108) = *(undefined8 *)(lVar13 + 0x28);
  plVar5 = (long *)(uVar21 + 0x38);
  plVar8 = (long *)*plVar5;
  if (plVar8 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777b2c8);
    func_0x03280a18(PTR_DAT_0777b2d0);
    func_0x03280a18(PTR_DAT_0777b2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    plVar8 = (long *)*plVar5;
    if (plVar8 == (long *)0x0) {
      func_0x03256878(uVar21);
      plVar8 = *(long **)(uVar21 + 0x38);
    }
  }
  lVar13 = plVar8[8];
  uVar2 = *(uint *)(plVar8[3] + 0xfc);
  uVar20 = (ulong)uVar2;
  uVar19 = (ulong)*(uint *)(lVar13 + 0xfc);
  if ((*(byte *)(plVar8[3] + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
    plVar8 = (long *)*plVar5;
    uVar2 = *(uint *)(lVar13 + 0xfc);
    lVar13 = plVar8[8];
  }
  uVar1 = *(ushort *)(lVar13 + 0x135);
  *(undefined **)(puVar26 + -0x158) =
       puVar26 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0));
  lVar14 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar8 = (long *)*plVar5;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar14 = plVar8[8];
  }
  lVar15 = (long)(puVar26 + (-0x160 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0))) -
           ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x128) = lVar15;
  lVar13 = lVar14;
  if ((uVar1 & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
    plVar8 = (long *)*plVar5;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar13 = plVar8[8];
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x140) = lVar15;
  lVar14 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
    plVar8 = (long *)*plVar5;
    uVar1 = *(ushort *)(plVar8[8] + 0x135);
    lVar14 = plVar8[8];
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x150) = lVar15;
  if ((uVar1 & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
    plVar8 = (long *)*plVar5;
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(puVar26 + -0x148) = lVar15;
  uVar10 = uVar19 + 0xf & 0x1fffffff0;
  lVar15 = lVar15 - uVar10;
  *(ulong *)(puVar26 + -0x138) = lVar15 - uVar10;
  uVar21 = uVar20 + 0xf & 0x1fffffff0;
  lVar27 = (lVar15 - uVar10) - uVar21;
  lVar13 = lVar27 - uVar21;
  func_0x072ce9a0(lVar13,0,uVar20);
  lVar14 = lVar13 - uVar10;
  func_0x072ce9a0(lVar14,0,uVar19);
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar7 = func_0x03280ca0();
  lVar16 = *plVar5;
  *(undefined8 *)(puVar26 + -0x130) = uVar7;
  (*(code *)**(undefined8 **)(lVar16 + 8))();
  if (extraout_x1_00 != 0) {
    puVar6 = *(undefined8 **)(*plVar5 + 0x10);
    uVar7 = *puVar6;
    *(long *)(puVar26 + -0x120) = lVar27;
    (*(code *)puVar6[2])(uVar7,puVar6,extraout_x1_00,puVar26 + -0x120,lVar27);
    func_0x072ce970(lVar13,lVar27,uVar20);
    while( true ) {
      uVar20 = (*(code *)**(undefined8 **)(*plVar5 + 0x88))(lVar13);
      if ((uVar20 & 1) == 0) {
        uVar19 = 0;
        goto LAB_03e7c394;
      }
      if ((*(byte *)(*(long *)(*plVar5 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar27 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*plVar5 + 0x28))();
      puVar6 = *(undefined8 **)(*plVar5 + 0x30);
      uVar7 = *puVar6;
      *(long *)(puVar26 + -0x120) = lVar15;
      (*(code *)puVar6[2])(uVar7,puVar6,lVar13,puVar26 + -0x120,lVar15);
      if (lVar27 == 0) break;
      func_0x03280a3c(lVar27,*(undefined8 *)(*(long *)(*plVar5 + 0x20) + 0x80),lVar15,uVar19);
      lVar17 = *plVar5;
      lVar16 = *(long *)(lVar17 + 0x40);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
        lVar17 = *plVar5;
      }
      uVar24 = *(undefined8 *)(lVar17 + 0x48);
      uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x80));
      func_0x0328158c(lVar16,uVar24,*(undefined8 *)(puVar26 + -0x128),uVar7,0,puVar26 + -0x120);
      if (*(long *)(puVar26 + -0x120) == 0) goto LAB_03e7c404;
      if (*(int *)(*(long *)(puVar26 + -0x120) + 0x10) == 0) {
        if ((*(byte *)(*(long *)(*plVar5 + 0x58) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar7 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*plVar5 + 0x60))(uVar7,lVar27,*(undefined8 *)(*plVar5 + 0x50));
        puVar6 = *(undefined8 **)(*plVar5 + 0x68);
        uVar24 = *puVar6;
        *(undefined8 *)(puVar26 + -0x120) = *(undefined8 *)(puVar26 + -0x130);
        *(undefined8 *)(puVar26 + -0x118) = uVar7;
        *(long *)(puVar26 + -0x110) = lVar15;
        (*(code *)puVar6[2])(uVar24,puVar6,0,puVar26 + -0x120,lVar15);
        func_0x072ce970(lVar14,lVar15,uVar19);
        uVar7 = *(undefined8 *)(puVar26 + -0x138);
        func_0x072ce970(uVar7,lVar14,uVar19);
        uVar20 = func_0x03280c64(*(undefined8 *)(*plVar5 + 0x40),uVar7);
        lVar17 = *plVar5;
        lVar16 = *(long *)(lVar17 + 0x40);
        if ((uVar20 & 1) == 0) {
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
            lVar17 = *plVar5;
          }
          uVar24 = *(undefined8 *)(lVar17 + 0x78);
          uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x80));
          func_0x0328158c(lVar16,uVar24,*(undefined8 *)(puVar26 + -0x148),uVar7,0,puVar26 + -0x120);
          uVar7 = *(undefined8 *)(puVar26 + -0x120);
          lVar27 = *(long *)(*plVar5 + 0x40);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c(lVar27);
          }
          puVar6 = (undefined8 *)func_0x03280ba0(uVar7,lVar27,lVar15);
          if (*(long *)(puVar26 + -0x130) == 0) goto LAB_03e7c410;
          if (-1 < *(int *)(*(long *)(*plVar5 + 0x40) + 0x28)) {
            puVar6 = (undefined8 *)*puVar6;
          }
          puVar12 = *(undefined8 **)(*plVar5 + 0x80);
          uVar7 = *puVar12;
          *(undefined8 **)(puVar26 + -0x120) = puVar6;
          (*(code *)puVar12[2])(uVar7,puVar12,*(undefined8 *)(puVar26 + -0x130),puVar26 + -0x120);
        }
        else {
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
            lVar17 = *plVar5;
          }
          func_0x0328158c(lVar16,*(undefined8 *)(lVar17 + 0x48),*(undefined8 *)(puVar26 + -0x140),
                          lVar14,0,puVar26 + -0x120);
          lVar16 = *(long *)(puVar26 + -0x120);
          if (lVar16 == 0) goto LAB_03e7c40c;
          iVar3 = func_0x0611efd4(lVar16,0);
          lVar18 = *plVar5;
          lVar17 = *(long *)(lVar18 + 0x40);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c(lVar17);
            lVar18 = *plVar5;
          }
          uVar24 = *(undefined8 *)(lVar18 + 0x48);
          uVar7 = func_0x03280a38(lVar27,*(undefined8 *)(*(long *)(lVar18 + 0x20) + 0x80));
          func_0x0328158c(lVar17,uVar24,*(undefined8 *)(puVar26 + -0x150),uVar7,0,puVar26 + -0x120);
          if (*(long *)(puVar26 + -0x120) == 0) goto LAB_03e7c408;
          iVar4 = func_0x0611efd4(*(long *)(puVar26 + -0x120),0);
          func_0x0611f10c(lVar16,iVar4 + iVar3,0);
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
      auVar33 = func_0x072ce990();
      uVar7 = auVar33._0_8_;
      if (auVar33._8_4_ != 1) {
        lVar27 = *plVar5;
        lVar15 = *(long *)(lVar27 + 0x18);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c();
          lVar27 = *plVar5;
        }
        lVar16 = *(long *)(puVar26 + -0x158);
        func_0x0328158c(lVar15,*(undefined8 *)(lVar27 + 0x90),lVar16,lVar13,0,0);
        func_0x03365958(uVar7);
        func_0x03280ca4(0);
        func_0x02f09514();
        *(undefined8 *)(lVar14 + -0x30) = 0x3e7c4dc;
        *(undefined8 *)(lVar14 + -0x20) = 0;
        *(undefined8 *)(lVar14 + -0x18) = uVar7;
        *(long *)(lVar14 + -0x10) = lVar13;
        *(long **)(lVar14 + -8) = plVar5;
        if (*(long *)(lVar16 + 0x38) == 0) {
          func_0x03256878(lVar16);
        }
        if ((extraout_x1_01 == 0) || (*(int *)(extraout_x1_01 + 0x18) < 2)) {
          uVar19 = 0;
        }
        else {
          lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
          if (lVar13 == 0) {
            lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar14 = *(long *)(lVar16 + 0x38);
            lVar13 = *(long *)(lVar14 + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
              lVar14 = *(long *)(lVar16 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x18);
            uVar7 = **(undefined8 **)(lVar13 + 0xb8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c(lVar14);
            }
            lVar13 = func_0x03280ca0(lVar14);
            func_0x053569b8(lVar13,uVar7,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x28),
                            *(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x30));
            lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
            }
            *(long *)(*(long *)(lVar14 + 0xb8) + 8) = lVar13;
            lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar14 + 0xb8) + 8,lVar13);
          }
          uVar7 = func_0x03d45b80(extraout_x1_01,lVar13,
                                  *(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x38));
          iVar3 = func_0x03d3a518(uVar7,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x50));
          uVar19 = (ulong)(iVar3 != *(int *)(extraout_x1_01 + 0x18));
        }
        return uVar19;
      }
      puVar11 = (ulong *)func_0x072ce910(uVar7);
      uVar19 = *puVar11;
      func_0x072ce920();
LAB_03e7c394:
      lVar27 = *plVar5;
      lVar15 = *(long *)(lVar27 + 0x18);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
        lVar27 = *plVar5;
      }
      func_0x0328158c(lVar15,*(undefined8 *)(lVar27 + 0x90),*(undefined8 *)(puVar26 + -0x158),lVar13
                      ,0,0);
      if (uVar19 != 0) break;
      if (*(long *)(*(long *)(puVar26 + -0x160) + 0x28) == *(long *)(puVar26 + -0x108)) {
        return *(ulong *)(puVar26 + -0x130);
      }
    }
  } while( true );
}


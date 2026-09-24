/* Ghidra 12.1.2 native pseudocode; RVA 0x4C048BC; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.ApplyMetagameWeightBoosts; status ok */


undefined *
MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyMetagameWeightBoosts
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  ulong unaff_x20;
  long *plVar21;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar22;
  undefined *unaff_x23;
  long lVar23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x30;
  float fVar24;
  undefined8 unaff_d8;
  undefined1 auVar25 [16];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  uVar18 = param_3;
  if ((bRam0000000007e1ae78 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780098);
    bRam0000000007e1ae78 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar23 = *(long *)(param_1 + 0x90);
    uVar9 = func_0x0644eae4(*(long *)(param_1 + 0x68),0);
    if (lVar23 != 0) {
      puVar10 = (undefined *)func_0x06897e70(lVar23,uVar9,param_3,0);
      if ((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x20) < 1)) {
        return puVar10;
      }
      goto LAB_04d05210;
    }
  }
  func_0x03280cac();
  puVar14 = PTR_DAT_077800a8;
  puVar10 = PTR_DAT_077800a0;
  if ((bRam0000000007e1ae79 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800a8);
    func_0x03280a18(PTR_DAT_077800a0);
    func_0x03280a18(PTR_DAT_077800b0);
    bRam0000000007e1ae79 = 1;
  }
  lVar23 = *(long *)puVar10;
  uVar18 = func_0x03d87b94(extraout_x1,uVar18);
  puVar10 = (undefined *)func_0x03d601c0(uVar18,*(undefined8 *)puVar14);
  if (puVar10 != (undefined *)0x0) {
    puVar14 = extraout_x1;
    if (*(int *)(puVar10 + 0x18) != 0) {
      puVar14 = puVar10;
    }
    return puVar14;
  }
  func_0x03280cac();
  lVar12 = lVar23;
  if ((bRam0000000007e1ae7a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800b8);
    bRam0000000007e1ae7a = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  func_0x04054968(lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0xf0));
  puVar10 = PTR_DAT_077800b8;
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) = extraout_x1_00;
    func_0x032809c4((undefined8 *)(lVar11 + 0x10),extraout_x1_00);
    puVar10 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar10);
    func_0x0535aa98(puVar10,lVar11,
                    *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0xf8),0);
    return puVar10;
  }
  auVar25 = func_0x03280cac();
  if ((bRam0000000007e1ae7b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e1ae7b = 1;
  }
  lVar23 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x18);
  if (lVar23 == 0) {
    lVar23 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    if (*(int *)(lVar23 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar23 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    uVar18 = **(undefined8 **)(lVar23 + 0xb8);
    lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar23,uVar18,
                    *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x100),0);
    lVar19 = *(long *)(*(long *)(lVar12 + 0x20) + 0xc0);
    lVar11 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
      lVar19 = *(long *)(*(long *)(lVar12 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar11 + 0xb8) + 0x18) = lVar23;
    lVar11 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar11 + 0xb8) + 0x18,lVar23);
  }
  lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  puVar10 = PTR_DAT_077800e0;
  unaff_x19 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x20);
  if (unaff_x19 == (long *)0x0) {
    lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    uVar18 = **(undefined8 **)(lVar11 + 0xb8);
    unaff_x19 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(unaff_x19,uVar18,
                    *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x108),0);
    lVar19 = *(long *)(*(long *)(lVar12 + 0x20) + 0xc0);
    lVar11 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
      lVar19 = *(long *)(*(long *)(lVar12 + 0x20) + 0xc0);
    }
    *(long **)(*(long *)(lVar11 + 0xb8) + 0x20) = unaff_x19;
    lVar12 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x20,unaff_x19);
  }
  uVar22 = *(ulong *)puVar10;
  lVar23 = func_0x03f36e88(auVar25._8_8_,lVar23);
  plVar21 = *(long **)(auVar25._0_8_ + 0x60);
  if (plVar21 != (long *)0x0) {
    lVar12 = *plVar21;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_04d04dac;
        }
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar15 != 0);
    }
    unaff_x19 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04d04dac:
    plVar21 = (long *)(*(code *)*puVar13)(plVar21,puVar13[1]);
    if (lVar23 != 0) {
      lVar11 = *(long *)PTR_DAT_077800d8;
      lVar12 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280ca0(lVar12);
      func_0x04c1b8d8(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xa8));
      if ((plVar21 != (long *)0x0) &&
         (iVar8 = (**(code **)(*plVar21 + 0x1a8))
                            (plVar21,*(undefined4 *)(lVar23 + 0x18),
                             *(undefined8 *)(*plVar21 + 0x1b0)), lVar12 != 0)) {
        *(int *)(lVar12 + 0x10) = iVar8 + 1;
        uVar18 = *(undefined8 *)(lVar23 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar9 = func_0x03280ca0();
        lVar23 = *(long *)(*(long *)(lVar11 + 0x20) + 0xc0);
        func_0x05355fbc(uVar9,lVar12,*(undefined8 *)(lVar23 + 0xb0),*(undefined8 *)(lVar23 + 0xc0));
        lVar23 = func_0x03d4294c(uVar18,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
        if (lVar23 != 0) {
          return (undefined *)(ulong)*(uint *)(lVar23 + 0x10);
        }
      }
      auVar25 = func_0x03280cac();
      lVar23 = *(long *)(*(long *)(*(long *)(auVar25._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c(lVar23);
      }
      uVar18 = func_0x03280ca0(lVar23);
      func_0x04143c38(uVar18,*(undefined8 *)
                              (*(long *)(*(long *)(auVar25._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar13 = (undefined8 *)(auVar25._0_8_ + 0x10);
      *puVar13 = uVar18;
      func_0x032809c4(puVar13,uVar18);
      return auVar25._0_8_;
    }
  }
  auVar25 = func_0x03280cac();
  uVar18 = auVar25._8_8_;
  unaff_x20 = auVar25._0_8_;
  uStack_120 = 0x4d04de8;
  unaff_x25 = (undefined *)0x7e1a000;
  if ((bRam0000000007e1ae7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077800f0);
    func_0x03280a18(PTR_DAT_077800f8);
    func_0x03280a18(PTR_DAT_07780100);
    bRam0000000007e1ae7c = 1;
  }
  if ((uVar22 & 1) != 0) {
    uVar18 = func_0x04d046ec(unaff_x20,uVar18,param_5 & 0xffffffff,unaff_x19,
                             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110));
  }
  lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  unaff_x23 = *(undefined **)(*(long *)(lVar23 + 0xb8) + 0x28);
  if (unaff_x23 == (undefined *)0x0) {
    lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    if (*(int *)(lVar23 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    uVar9 = **(undefined8 **)(lVar23 + 0xb8);
    unaff_x23 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(unaff_x23,uVar9,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
    lVar12 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar23 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
      lVar12 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(undefined **)(*(long *)(lVar23 + 0xb8) + 0x28) = unaff_x23;
    lVar23 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar23 + 0xb8) + 0x28,unaff_x23);
  }
  lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c();
  }
  unaff_x26 = PTR_DAT_07780100;
  unaff_x24 = *(undefined **)(*(long *)(lVar23 + 0xb8) + 0x30);
  if (unaff_x24 == (undefined *)0x0) {
    lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    if (*(int *)(lVar23 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar23 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    unaff_x25 = (undefined *)**(undefined8 **)(lVar23 + 0xb8);
    unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(unaff_x24,unaff_x25,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120),0);
    lVar12 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar23 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
      lVar12 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(undefined **)(*(long *)(lVar23 + 0xb8) + 0x30) = unaff_x24;
    lVar23 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar23 + 0xb8) + 0x30,unaff_x24);
  }
  puVar10 = unaff_x24;
  uVar22 = func_0x03f372e4(uVar18,unaff_x23,unaff_x24,*(undefined8 *)unaff_x26);
  unaff_x21 = *(long **)(unaff_x20 + 0x60);
  if (unaff_x21 != (long *)0x0) {
    lVar23 = *unaff_x21;
    uVar15 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar15 != 0) {
      piVar20 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_04d05124;
        }
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(unaff_x21);
LAB_04d05124:
    uVar18 = (*(code *)*puVar13)(unaff_x21,puVar13[1]);
    unaff_x20 = uVar22;
    if (uVar22 != 0) {
      puVar10 = *(undefined **)PTR_DAT_077800f8;
      uVar7 = func_0x04a44654(uVar22,uVar18);
      if (unaff_x19 != (long *)0x0) {
        lVar23 = *unaff_x19;
        unaff_x20 = (ulong)uVar7;
        uVar22 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar22 != 0) {
          piVar20 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar13 = (undefined8 *)(lVar23 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_04d051a8;
            }
            uVar22 = uVar22 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar22 != 0);
        }
        puVar10 = (undefined *)0x0;
        puVar13 = (undefined8 *)func_0x03256b10(unaff_x19);
LAB_04d051a8:
        lVar23 = (*(code *)*puVar13)(unaff_x19,puVar13[1]);
        puVar14 = PTR_DAT_077800f0;
        if (lVar23 != 0) {
          uVar18 = func_0x0414419c(lVar23,uVar7 - 1,*(undefined8 *)PTR_DAT_0777e510);
          puStack_130 = (undefined *)0x0;
          uStack_128 = 0;
          func_0x048c959c(&puStack_130,uVar18,uVar7,*(undefined8 *)puVar14);
          return puStack_130;
        }
      }
    }
  }
  unaff_x30 = 0x4d05210;
  auVar25 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)&puStack_130;
  unaff_x22 = param_6;
LAB_04d05210:
  lVar23 = auVar25._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x30;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long **)((long)register0x00000008 + -8) = unaff_x19;
  uVar22 = 0x7e1a000;
  puVar14 = auVar25._0_8_;
  if ((bRam0000000007e1ae7d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    puVar14 = (undefined *)func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae7d = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (lVar23 == 0) {
LAB_04d05364:
    puVar17 = (undefined *)func_0x03280cac();
    puVar6 = PTR_DAT_07780140;
    puVar5 = PTR_DAT_07780138;
    puVar4 = PTR_DAT_07780130;
    puVar3 = PTR_DAT_07780128;
    puVar2 = PTR_DAT_07780120;
    puVar1 = PTR_DAT_0777ebc8;
    puVar14 = PTR_DAT_0777ebb0;
    *(code **)((long)register0x00000008 + -0xc0) =
         MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____ctor;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x88) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x80) = uVar22;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x78) = auVar25;
    *(undefined **)((long)register0x00000008 + -0x68) = puVar10;
    if ((bRam0000000007e1ae7e & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780128);
      func_0x03280a18(PTR_DAT_0777ebb0);
      func_0x03280a18(PTR_DAT_07780138);
      func_0x03280a18(PTR_DAT_07780130);
      func_0x03280a18(PTR_DAT_0777ebc8);
      func_0x03280a18(PTR_DAT_07780120);
      func_0x03280a18(PTR_DAT_07780140);
      bRam0000000007e1ae7e = 1;
    }
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x04fb4e7c(uVar18,*(undefined8 *)puVar3);
    *(undefined8 *)(puVar17 + 0x78) = uVar18;
    func_0x032809c4(puVar17 + 0x78,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04f610a8(uVar18,*(undefined8 *)puVar5);
    *(undefined8 *)(puVar17 + 0x80) = uVar18;
    func_0x032809c4(puVar17 + 0x80,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x04f2ad28(uVar18,*(undefined8 *)puVar14);
    *(undefined8 *)(puVar17 + 0x88) = uVar18;
    func_0x032809c4(puVar17 + 0x88,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06898a68(uVar18,0);
    *(undefined8 *)(puVar17 + 0x90) = uVar18;
    func_0x032809c4(puVar17 + 0x90,uVar18);
    return puVar17;
  }
  if (0 < *(int *)(lVar23 + 0x18)) {
    uVar22 = 0;
    unaff_x26 = (undefined *)0x7f800000;
    unaff_x27 = 0x80000000;
    do {
      uVar15 = func_0x041e65b8(lVar23,uVar22,*(undefined8 *)puVar2);
      unaff_x23 = puVar2;
      unaff_x24 = puVar1;
      unaff_x25 = puVar3;
      if (puVar10 == (undefined *)0x0) goto LAB_04d05364;
      puVar14 = (undefined *)func_0x053bbf78(puVar10,uVar15 >> 0x20,*(undefined8 *)puVar1);
      if (((ulong)puVar14 & 1) != 0) {
        fVar24 = (float)func_0x04d03610(auVar25._0_8_);
        iVar8 = func_0x041e65b8(lVar23,uVar22,*(undefined8 *)puVar2);
        unaff_x28 = (ulong)(uint)(int)(fVar24 * (float)iVar8);
        uVar16 = func_0x041e65b8(lVar23,uVar22,*(undefined8 *)puVar2);
        uVar15 = 0x80000000;
        if (fVar24 * (float)iVar8 != INFINITY) {
          uVar15 = unaff_x28;
        }
        puVar14 = (undefined *)
                  func_0x041e660c(lVar23,uVar22,uVar15 | uVar16 & 0xffffffff00000000,
                                  *(undefined8 *)puVar3);
      }
      uVar7 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar7;
    } while ((int)uVar7 < *(int *)(lVar23 + 0x18));
  }
  return puVar14;
}


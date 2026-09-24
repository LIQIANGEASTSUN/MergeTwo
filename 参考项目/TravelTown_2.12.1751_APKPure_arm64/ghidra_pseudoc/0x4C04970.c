/* Ghidra 12.1.2 native pseudocode; RVA 0x4C04970; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.ApplyToolFiltering; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyToolFiltering
                (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  undefined1 auVar23 [16];
  ulong auStack_100 [4];
  
  puVar2 = PTR_DAT_077800a8;
  puVar1 = PTR_DAT_077800a0;
  if ((bRam0000000007e1ae79 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800a8);
    func_0x03280a18(PTR_DAT_077800a0);
    func_0x03280a18(PTR_DAT_077800b0);
    bRam0000000007e1ae79 = 1;
  }
  lVar16 = *(long *)puVar1;
  uVar11 = func_0x03d87b94(param_2,param_3);
  uVar12 = func_0x03d601c0(uVar11,*(undefined8 *)puVar2);
  if (uVar12 != 0) {
    if (*(int *)(uVar12 + 0x18) != 0) {
      param_2 = uVar12;
    }
    return param_2;
  }
  func_0x03280cac();
  lVar14 = lVar16;
  if ((bRam0000000007e1ae7a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800b8);
    bRam0000000007e1ae7a = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  func_0x04054968(lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xf0));
  puVar1 = PTR_DAT_077800b8;
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x10) = extraout_x1;
    func_0x032809c4((undefined8 *)(lVar13 + 0x10),extraout_x1);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x0535aa98(uVar12,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xf8)
                    ,0);
    return uVar12;
  }
  auVar23 = func_0x03280cac();
  if ((bRam0000000007e1ae7b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e1ae7b = 1;
  }
  lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
  if (lVar16 == 0) {
    lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    uVar11 = **(undefined8 **)(lVar16 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar16,uVar11,
                    *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x100),0);
    lVar17 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar17 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar13 + 0xb8) + 0x18) = lVar16;
    lVar13 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar13 + 0xb8) + 0x18,lVar16);
  }
  lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  puVar1 = PTR_DAT_077800e0;
  plVar21 = *(long **)(*(long *)(lVar13 + 0xb8) + 0x20);
  if (plVar21 == (long *)0x0) {
    lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    uVar11 = **(undefined8 **)(lVar13 + 0xb8);
    plVar21 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar21,uVar11,
                    *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x108),0);
    lVar17 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar17 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long **)(*(long *)(lVar13 + 0xb8) + 0x20) = plVar21;
    lVar14 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x20,plVar21);
  }
  uVar12 = *(ulong *)puVar1;
  lVar16 = func_0x03f36e88(auVar23._8_8_,lVar16);
  plVar20 = *(long **)(auVar23._0_8_ + 0x60);
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar15 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_04d04dac;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    plVar21 = (long *)0x0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar20);
LAB_04d04dac:
    plVar20 = (long *)(*(code *)*puVar15)(plVar20,puVar15[1]);
    if (lVar16 != 0) {
      lVar13 = *(long *)PTR_DAT_077800d8;
      lVar14 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar14 = func_0x03280ca0(lVar14);
      func_0x04c1b8d8(lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xa8));
      if ((plVar20 != (long *)0x0) &&
         (iVar8 = (**(code **)(*plVar20 + 0x1a8))
                            (plVar20,*(undefined4 *)(lVar16 + 0x18),
                             *(undefined8 *)(*plVar20 + 0x1b0)), lVar14 != 0)) {
        *(int *)(lVar14 + 0x10) = iVar8 + 1;
        uVar11 = *(undefined8 *)(lVar16 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar10 = func_0x03280ca0();
        lVar16 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
        func_0x05355fbc(uVar10,lVar14,*(undefined8 *)(lVar16 + 0xb0),*(undefined8 *)(lVar16 + 0xc0))
        ;
        lVar16 = func_0x03d4294c(uVar11,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if (lVar16 != 0) {
          return (ulong)*(uint *)(lVar16 + 0x10);
        }
      }
      auVar23 = func_0x03280cac();
      lVar16 = *(long *)(*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      uVar11 = func_0x03280ca0(lVar16);
      func_0x04143c38(uVar11,*(undefined8 *)
                              (*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar15 = (undefined8 *)(auVar23._0_8_ + 0x10);
      *puVar15 = uVar11;
      func_0x032809c4(puVar15,uVar11);
      return auVar23._0_8_;
    }
  }
  auVar23 = func_0x03280cac();
  uVar11 = auVar23._8_8_;
  auStack_100[2] = 0x4d04de8;
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
  if ((uVar12 & 1) != 0) {
    uVar11 = func_0x04d046ec(auVar23._0_8_,uVar11,param_5 & 0xffffffff,plVar21,
                             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110));
  }
  lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
  if (lVar16 == 0) {
    lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar16 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar16,uVar10,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
    lVar13 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar14 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
      lVar13 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar14 + 0xb8) + 0x28) = lVar16;
    lVar14 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x28,lVar16);
  }
  lVar14 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar14 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  puVar1 = PTR_DAT_07780100;
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x30);
  if (lVar14 == 0) {
    lVar14 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar14 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar14 + 0xb8);
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar14,uVar10,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120),0);
    lVar17 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar17 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar13 + 0xb8) + 0x30) = lVar14;
    lVar13 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar13 + 0xb8) + 0x30,lVar14);
  }
  lVar16 = func_0x03f372e4(uVar11,lVar16,lVar14,*(undefined8 *)puVar1);
  plVar20 = *(long **)(auVar23._0_8_ + 0x60);
  if (plVar20 != (long *)0x0) {
    lVar13 = *plVar20;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_04d05124;
        }
        uVar12 = uVar12 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar12 != 0);
    }
    lVar14 = 0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar20);
LAB_04d05124:
    uVar11 = (*(code *)*puVar15)(plVar20,puVar15[1]);
    if (lVar16 != 0) {
      lVar14 = *(long *)PTR_DAT_077800f8;
      iVar8 = func_0x04a44654(lVar16,uVar11);
      if (plVar21 != (long *)0x0) {
        lVar16 = *plVar21;
        uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar12 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_04d051a8;
            }
            uVar12 = uVar12 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar12 != 0);
        }
        lVar14 = 0;
        puVar15 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04d051a8:
        lVar16 = (*(code *)*puVar15)(plVar21,puVar15[1]);
        puVar1 = PTR_DAT_077800f0;
        if (lVar16 != 0) {
          uVar11 = func_0x0414419c(lVar16,iVar8 + -1,*(undefined8 *)PTR_DAT_0777e510);
          auStack_100[0] = 0;
          auStack_100[1] = 0;
          func_0x048c959c(auStack_100,uVar11,iVar8,*(undefined8 *)puVar1);
          return auStack_100[0];
        }
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar16 = auVar23._8_8_;
  uVar12 = auVar23._0_8_;
  if ((bRam0000000007e1ae7d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    uVar12 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae7d = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (lVar16 == 0) {
LAB_04d05364:
    uVar12 = func_0x03280cac();
    puVar7 = PTR_DAT_07780140;
    puVar6 = PTR_DAT_07780138;
    puVar5 = PTR_DAT_07780130;
    puVar4 = PTR_DAT_07780128;
    puVar3 = PTR_DAT_07780120;
    puVar2 = PTR_DAT_0777ebc8;
    puVar1 = PTR_DAT_0777ebb0;
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
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x04fb4e7c(uVar11,*(undefined8 *)puVar4);
    *(undefined8 *)(uVar12 + 0x78) = uVar11;
    func_0x032809c4((undefined8 *)(uVar12 + 0x78),uVar11);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x04f610a8(uVar11,*(undefined8 *)puVar6);
    *(undefined8 *)(uVar12 + 0x80) = uVar11;
    func_0x032809c4((undefined8 *)(uVar12 + 0x80),uVar11);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x04f2ad28(uVar11,*(undefined8 *)puVar1);
    *(undefined8 *)(uVar12 + 0x88) = uVar11;
    func_0x032809c4((undefined8 *)(uVar12 + 0x88),uVar11);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar7);
    func_0x06898a68(uVar11,0);
    *(undefined8 *)(uVar12 + 0x90) = uVar11;
    func_0x032809c4((undefined8 *)(uVar12 + 0x90),uVar11);
    return uVar12;
  }
  if (0 < *(int *)(lVar16 + 0x18)) {
    iVar8 = 0;
    do {
      uVar12 = func_0x041e65b8(lVar16,iVar8,*(undefined8 *)puVar2);
      if (lVar14 == 0) goto LAB_04d05364;
      uVar12 = func_0x053bbf78(lVar14,uVar12 >> 0x20,*(undefined8 *)puVar1);
      if ((uVar12 & 1) != 0) {
        fVar22 = (float)func_0x04d03610(auVar23._0_8_);
        iVar9 = func_0x041e65b8(lVar16,iVar8,*(undefined8 *)puVar2);
        uVar18 = func_0x041e65b8(lVar16,iVar8,*(undefined8 *)puVar2);
        uVar12 = 0x80000000;
        if (fVar22 * (float)iVar9 != INFINITY) {
          uVar12 = (ulong)(uint)(int)(fVar22 * (float)iVar9);
        }
        uVar12 = func_0x041e660c(lVar16,iVar8,uVar12 | uVar18 & 0xffffffff00000000,
                                 *(undefined8 *)puVar3);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar16 + 0x18));
  }
  return uVar12;
}


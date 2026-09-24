/* Ghidra 12.1.2 native pseudocode; RVA 0x4C06A60; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.ApplyMetagameWeightBoosts; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyMetagameWeightBoosts
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                long param_6)

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
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined1 auVar23 [16];
  ulong auStack_130 [4];
  
  uVar12 = param_3;
  if ((bRam0000000007e1ae8c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780098);
    bRam0000000007e1ae8c = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar20 = *(long *)(param_1 + 0x90);
    uVar10 = func_0x0644eae4(*(long *)(param_1 + 0x68),0);
    if (lVar20 != 0) {
      uVar11 = func_0x06897e70(lVar20,uVar10,param_3,0);
      if ((uVar11 != 0) && (0 < *(int *)(uVar11 + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x04d06b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0))
                           (param_1,param_2,uVar11);
        return uVar11;
      }
      return uVar11;
    }
  }
  func_0x03280cac();
  puVar2 = PTR_DAT_077800a8;
  puVar1 = PTR_DAT_077800a0;
  if ((bRam0000000007e1ae8d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800a8);
    func_0x03280a18(PTR_DAT_077800a0);
    func_0x03280a18(PTR_DAT_077800b0);
    bRam0000000007e1ae8d = 1;
  }
  lVar20 = *(long *)puVar1;
  uVar12 = func_0x03d87b94(extraout_x1,uVar12);
  uVar11 = func_0x03d601c0(uVar12,*(undefined8 *)puVar2);
  if (uVar11 != 0) {
    uVar17 = extraout_x1;
    if (*(int *)(uVar11 + 0x18) != 0) {
      uVar17 = uVar11;
    }
    return uVar17;
  }
  func_0x03280cac();
  lVar14 = lVar20;
  if ((bRam0000000007e1ae8e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800b8);
    bRam0000000007e1ae8e = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0xf0))();
  puVar1 = PTR_DAT_077800b8;
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x10) = extraout_x1_00;
    func_0x032809c4((undefined8 *)(lVar13 + 0x10),extraout_x1_00);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x0535aa98(uVar11,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0xf8)
                    ,0);
    return uVar11;
  }
  auVar23 = func_0x03280cac();
  if ((bRam0000000007e1ae8f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e1ae8f = 1;
  }
  lVar20 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  if (*(int *)(lVar20 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar20 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
  if (lVar20 == 0) {
    lVar20 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    if (*(int *)(lVar20 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar20 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    uVar12 = **(undefined8 **)(lVar20 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar20,uVar12,
                    *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x100),0);
    lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar13 + 0xb8) + 0x18) = lVar20;
    lVar13 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar13 + 0xb8) + 0x18,lVar20);
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
    uVar12 = **(undefined8 **)(lVar13 + 0xb8);
    plVar21 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar21,uVar12,
                    *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x108),0);
    lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
    }
    *(long **)(*(long *)(lVar13 + 0xb8) + 0x20) = plVar21;
    lVar14 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x20,plVar21);
  }
  uVar11 = *(ulong *)puVar1;
  lVar20 = func_0x03f36e88(auVar23._8_8_,lVar20);
  plVar19 = *(long **)(auVar23._0_8_ + 0x60);
  if (plVar19 != (long *)0x0) {
    lVar14 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar15 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04d06f58;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    plVar21 = (long *)0x0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar19);
LAB_04d06f58:
    plVar19 = (long *)(*(code *)*puVar15)(plVar19,puVar15[1]);
    if (lVar20 != 0) {
      lVar13 = *(long *)PTR_DAT_077800d8;
      lVar14 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar14 = func_0x03280ca0(lVar14);
      func_0x04c1b8d8(lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xa8));
      if ((plVar19 != (long *)0x0) &&
         (iVar8 = (**(code **)(*plVar19 + 0x1a8))
                            (plVar19,*(undefined4 *)(lVar20 + 0x18),
                             *(undefined8 *)(*plVar19 + 0x1b0)), lVar14 != 0)) {
        *(int *)(lVar14 + 0x10) = iVar8 + 1;
        uVar12 = *(undefined8 *)(lVar20 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar10 = func_0x03280ca0();
        lVar20 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
        func_0x05355fbc(uVar10,lVar14,*(undefined8 *)(lVar20 + 0xb0),*(undefined8 *)(lVar20 + 0xc0))
        ;
        lVar20 = func_0x03d4294c(uVar12,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if (lVar20 != 0) {
          return (ulong)*(uint *)(lVar20 + 0x10);
        }
      }
      auVar23 = func_0x03280cac();
      lVar20 = *(long *)(*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      uVar12 = func_0x03280ca0(lVar20);
      func_0x04143c38(uVar12,*(undefined8 *)
                              (*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar15 = (undefined8 *)(auVar23._0_8_ + 0x10);
      *puVar15 = uVar12;
      func_0x032809c4(puVar15,uVar12);
      return auVar23._0_8_;
    }
  }
  auVar23 = func_0x03280cac();
  uVar12 = auVar23._8_8_;
  auStack_130[2] = 0x4d06f94;
  if ((bRam0000000007e1ae90 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077800f0);
    func_0x03280a18(PTR_DAT_077800f8);
    func_0x03280a18(PTR_DAT_07780100);
    bRam0000000007e1ae90 = 1;
  }
  if ((uVar11 & 1) != 0) {
    uVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110))
                       (auVar23._0_8_,uVar12,param_5 & 0xffffffff,plVar21);
  }
  lVar20 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  if (*(int *)(lVar20 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar20 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x28);
  if (lVar20 == 0) {
    lVar20 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    if (*(int *)(lVar20 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar20 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar20 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar20,uVar10,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
    lVar13 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar14 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
      lVar13 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar14 + 0xb8) + 0x28) = lVar20;
    lVar14 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x28,lVar20);
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
    lVar16 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar13 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar13 + 0xb8) + 0x30) = lVar14;
    lVar13 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar13 + 0xb8) + 0x30,lVar14);
  }
  lVar13 = *(long *)puVar1;
  lVar20 = func_0x03f372e4(uVar12,lVar20);
  plVar19 = *(long **)(auVar23._0_8_ + 0x60);
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04d072d4;
        }
        uVar11 = uVar11 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar11 != 0);
    }
    lVar14 = 0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar19);
LAB_04d072d4:
    uVar12 = (*(code *)*puVar15)(plVar19,puVar15[1]);
    if (lVar20 != 0) {
      lVar14 = *(long *)PTR_DAT_077800f8;
      iVar8 = func_0x04a44654(lVar20,uVar12);
      if (plVar21 != (long *)0x0) {
        lVar20 = *plVar21;
        uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_04d07358;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        lVar14 = 0;
        puVar15 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04d07358:
        lVar20 = (*(code *)*puVar15)(plVar21,puVar15[1]);
        puVar1 = PTR_DAT_077800f0;
        if (lVar20 != 0) {
          uVar12 = func_0x0414419c(lVar20,iVar8 + -1,*(undefined8 *)PTR_DAT_0777e510);
          auStack_130[0] = 0;
          auStack_130[1] = 0;
          func_0x048c959c(auStack_130,uVar12,iVar8,*(undefined8 *)puVar1);
          return auStack_130[0];
        }
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar20 = auVar23._8_8_;
  uVar11 = auVar23._0_8_;
  if ((bRam0000000007e1ae91 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    uVar11 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae91 = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (lVar20 != 0) {
    if (0 < *(int *)(lVar20 + 0x18)) {
      iVar8 = 0;
      do {
        uVar11 = func_0x041e65b8(lVar20,iVar8,*(undefined8 *)puVar2);
        if (lVar14 == 0) goto LAB_04d07528;
        uVar11 = func_0x053bbf78(lVar14,uVar11 >> 0x20,*(undefined8 *)puVar1);
        if ((uVar11 & 1) != 0) {
          fVar22 = (float)(*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x128))
                                    (auVar23._0_8_);
          iVar9 = func_0x041e65b8(lVar20,iVar8,*(undefined8 *)puVar2);
          uVar17 = func_0x041e65b8(lVar20,iVar8,*(undefined8 *)puVar2);
          uVar11 = 0x80000000;
          if (fVar22 * (float)iVar9 != INFINITY) {
            uVar11 = (ulong)(uint)(int)(fVar22 * (float)iVar9);
          }
          uVar11 = func_0x041e660c(lVar20,iVar8,uVar11 | uVar17 & 0xffffffff00000000,
                                   *(undefined8 *)puVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar20 + 0x18));
    }
    return uVar11;
  }
LAB_04d07528:
  auVar23 = func_0x03280cac();
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar4 = PTR_DAT_07780128;
  puVar3 = PTR_DAT_07780120;
  puVar2 = PTR_DAT_0777ebc8;
  puVar1 = PTR_DAT_0777ebb0;
  lVar20 = auVar23._0_8_;
  if ((bRam0000000007e1ae92 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_0777ebb0);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_0777ebc8);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e1ae92 = 1;
  }
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar12,*(undefined8 *)puVar4);
  *(undefined8 *)(lVar20 + 0x78) = uVar12;
  func_0x032809c4((undefined8 *)(lVar20 + 0x78),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar12,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar20 + 0x80) = uVar12;
  func_0x032809c4((undefined8 *)(lVar20 + 0x80),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04f2ad28(uVar12,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar20 + 0x88) = uVar12;
  func_0x032809c4((undefined8 *)(lVar20 + 0x88),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar12,0);
  *(undefined8 *)(lVar20 + 0x90) = uVar12;
  func_0x032809c4((undefined8 *)(lVar20 + 0x90),uVar12);
                    /* WARNING: Could not recover jumptable at 0x04d076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 0x130))
                     (lVar20);
  return uVar11;
}


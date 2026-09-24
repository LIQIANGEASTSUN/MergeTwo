/* Ghidra 12.1.2 native pseudocode; RVA 0x4C06C70; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.SelectRandomWeightedTool; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___SelectRandomWeightedTool
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
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
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  float fVar22;
  undefined1 auVar23 [16];
  ulong auStack_a0 [2];
  code *pcStack_90;
  
  if ((bRam0000000007e1ae8f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e1ae8f = 1;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    uVar20 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar11,uVar20,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x100),0);
    lVar15 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar15 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x18) = lVar11;
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x18,lVar11);
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  puVar1 = PTR_DAT_077800e0;
  plVar21 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x20);
  if (plVar21 == (long *)0x0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    plVar21 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar21,uVar20,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108),0);
    lVar15 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar15 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long **)(*(long *)(lVar12 + 0xb8) + 0x20) = plVar21;
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x20,plVar21);
  }
  uVar14 = *(ulong *)puVar1;
  lVar11 = func_0x03f36e88(param_2,lVar11);
  plVar19 = *(long **)(param_1 + 0x60);
  if (plVar19 != (long *)0x0) {
    lVar12 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04d06f58;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    plVar21 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar19);
LAB_04d06f58:
    plVar19 = (long *)(*(code *)*puVar13)(plVar19,puVar13[1]);
    if (lVar11 != 0) {
      lVar15 = *(long *)PTR_DAT_077800d8;
      lVar12 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280ca0(lVar12);
      func_0x04c1b8d8(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0xa8));
      if ((plVar19 != (long *)0x0) &&
         (iVar8 = (**(code **)(*plVar19 + 0x1a8))
                            (plVar19,*(undefined4 *)(lVar11 + 0x18),
                             *(undefined8 *)(*plVar19 + 0x1b0)), lVar12 != 0)) {
        *(int *)(lVar12 + 0x10) = iVar8 + 1;
        uVar20 = *(undefined8 *)(lVar11 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar10 = func_0x03280ca0();
        lVar11 = *(long *)(*(long *)(lVar15 + 0x20) + 0xc0);
        func_0x05355fbc(uVar10,lVar12,*(undefined8 *)(lVar11 + 0xb0),*(undefined8 *)(lVar11 + 0xc0))
        ;
        lVar11 = func_0x03d4294c(uVar20,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
        if (lVar11 != 0) {
          return (ulong)*(uint *)(lVar11 + 0x10);
        }
      }
      auVar23 = func_0x03280cac();
      lVar11 = *(long *)(*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      uVar20 = func_0x03280ca0(lVar11);
      func_0x04143c38(uVar20,*(undefined8 *)
                              (*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar13 = (undefined8 *)(auVar23._0_8_ + 0x10);
      *puVar13 = uVar20;
      func_0x032809c4(puVar13,uVar20);
      return auVar23._0_8_;
    }
  }
  auVar23 = func_0x03280cac();
  uVar20 = auVar23._8_8_;
  pcStack_90 = 
  MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GenerateRandomToolFromWeights;
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
  if ((uVar14 & 1) != 0) {
    uVar20 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110))
                       (auVar23._0_8_,uVar20,param_5 & 0xffffffff,plVar21);
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
  if (lVar11 == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar11,uVar10,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
    lVar15 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar15 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x28) = lVar11;
    lVar12 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x28,lVar11);
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  puVar1 = PTR_DAT_07780100;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
  if (lVar12 == 0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    uVar10 = **(undefined8 **)(lVar12 + 0xb8);
    lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar12,uVar10,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120),0);
    lVar16 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar15 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
      lVar16 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar15 + 0xb8) + 0x30) = lVar12;
    lVar15 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar15 + 0xb8) + 0x30,lVar12);
  }
  lVar15 = *(long *)puVar1;
  lVar11 = func_0x03f372e4(uVar20,lVar11);
  plVar19 = *(long **)(auVar23._0_8_ + 0x60);
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar14 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04d072d4;
        }
        uVar14 = uVar14 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar14 != 0);
    }
    lVar12 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar19);
LAB_04d072d4:
    uVar20 = (*(code *)*puVar13)(plVar19,puVar13[1]);
    if (lVar11 != 0) {
      lVar12 = *(long *)PTR_DAT_077800f8;
      iVar8 = func_0x04a44654(lVar11,uVar20);
      if (plVar21 != (long *)0x0) {
        lVar11 = *plVar21;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_04d07358;
            }
            uVar14 = uVar14 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar14 != 0);
        }
        lVar12 = 0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04d07358:
        lVar11 = (*(code *)*puVar13)(plVar21,puVar13[1]);
        puVar1 = PTR_DAT_077800f0;
        if (lVar11 != 0) {
          uVar20 = func_0x0414419c(lVar11,iVar8 + -1,*(undefined8 *)PTR_DAT_0777e510);
          auStack_a0[0] = 0;
          auStack_a0[1] = 0;
          func_0x048c959c(auStack_a0,uVar20,iVar8,*(undefined8 *)puVar1);
          return auStack_a0[0];
        }
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar11 = auVar23._8_8_;
  uVar14 = auVar23._0_8_;
  if ((bRam0000000007e1ae91 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    uVar14 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae91 = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (lVar11 != 0) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar8 = 0;
      do {
        uVar14 = func_0x041e65b8(lVar11,iVar8,*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_04d07528;
        uVar14 = func_0x053bbf78(lVar12,uVar14 >> 0x20,*(undefined8 *)puVar1);
        if ((uVar14 & 1) != 0) {
          fVar22 = (float)(*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x128))
                                    (auVar23._0_8_);
          iVar9 = func_0x041e65b8(lVar11,iVar8,*(undefined8 *)puVar2);
          uVar17 = func_0x041e65b8(lVar11,iVar8,*(undefined8 *)puVar2);
          uVar14 = 0x80000000;
          if (fVar22 * (float)iVar9 != INFINITY) {
            uVar14 = (ulong)(uint)(int)(fVar22 * (float)iVar9);
          }
          uVar14 = func_0x041e660c(lVar11,iVar8,uVar14 | uVar17 & 0xffffffff00000000,
                                   *(undefined8 *)puVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar11 + 0x18));
    }
    return uVar14;
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
  lVar11 = auVar23._0_8_;
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
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar20,*(undefined8 *)puVar4);
  *(undefined8 *)(lVar11 + 0x78) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x78),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar20,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar11 + 0x80) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x80),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04f2ad28(uVar20,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar11 + 0x88) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x88),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar20,0);
  *(undefined8 *)(lVar11 + 0x90) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x90),uVar20);
                    /* WARNING: Could not recover jumptable at 0x04d076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar23._8_8_ + 0x20) + 0xc0) + 0x130))
                     (lVar11);
  return uVar14;
}


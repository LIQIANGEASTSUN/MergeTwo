/* Ghidra 12.1.2 native pseudocode; RVA 0x4C06F94; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.GenerateRandomToolFromWeights; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GenerateRandomToolFromWeights
          (long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined4 param_5,
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
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
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
  if ((param_4 & 1) != 0) {
    param_2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110))
                        (param_1,param_2,param_5,param_3);
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (lVar10 == 0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    uVar19 = **(undefined8 **)(lVar10 + 0xb8);
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar10,uVar19,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
    lVar14 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar11 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
      lVar14 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar11 + 0xb8) + 0x28) = lVar10;
    lVar11 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar11 + 0xb8) + 0x28,lVar10);
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
  puVar1 = PTR_DAT_07780100;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x30);
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
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar11,uVar19,
                    *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120),0);
    lVar15 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar14 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
      lVar15 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar14 + 0xb8) + 0x30) = lVar11;
    lVar14 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar14 + 0xb8) + 0x30,lVar11);
  }
  lVar14 = *(long *)puVar1;
  lVar10 = func_0x03f372e4(param_2,lVar10);
  plVar18 = *(long **)(param_1 + 0x60);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_04d072d4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    lVar11 = 0;
    puVar12 = (undefined8 *)func_0x03256b10(plVar18);
LAB_04d072d4:
    uVar19 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    if (lVar10 != 0) {
      lVar11 = *(long *)PTR_DAT_077800f8;
      iVar8 = func_0x04a44654(lVar10,uVar19);
      if (param_3 != (long *)0x0) {
        lVar10 = *param_3;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_04d07358;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        lVar11 = 0;
        puVar12 = (undefined8 *)func_0x03256b10(param_3);
LAB_04d07358:
        lVar10 = (*(code *)*puVar12)(param_3,puVar12[1]);
        puVar1 = PTR_DAT_077800f0;
        if (lVar10 != 0) {
          uVar19 = func_0x0414419c(lVar10,iVar8 + -1,*(undefined8 *)PTR_DAT_0777e510);
          uStack_60 = 0;
          uStack_58 = 0;
          func_0x048c959c(&uStack_60,uVar19,iVar8,*(undefined8 *)puVar1);
          auVar21._8_8_ = uStack_58;
          auVar21._0_8_ = uStack_60;
          return auVar21;
        }
      }
    }
  }
  auVar21 = func_0x03280cac();
  lVar10 = auVar21._8_8_;
  uVar19 = auVar21._0_8_;
  if ((bRam0000000007e1ae91 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    auVar21 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae91 = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar1 = PTR_DAT_07780108;
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar8 = 0;
      do {
        uVar16 = func_0x041e65b8(lVar10,iVar8,*(undefined8 *)puVar2);
        if (lVar11 == 0) goto LAB_04d07528;
        auVar21 = func_0x053bbf78(lVar11,uVar16 >> 0x20,*(undefined8 *)puVar1);
        if ((auVar21._0_8_ & 1) != 0) {
          fVar20 = (float)(*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x128))(uVar19);
          iVar9 = func_0x041e65b8(lVar10,iVar8,*(undefined8 *)puVar2);
          uVar13 = func_0x041e65b8(lVar10,iVar8,*(undefined8 *)puVar2);
          uVar16 = 0x80000000;
          if (fVar20 * (float)iVar9 != INFINITY) {
            uVar16 = (ulong)(uint)(int)(fVar20 * (float)iVar9);
          }
          auVar21 = func_0x041e660c(lVar10,iVar8,uVar16 | uVar13 & 0xffffffff00000000,
                                    *(undefined8 *)puVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar10 + 0x18));
    }
    return auVar21;
  }
LAB_04d07528:
  auVar21 = func_0x03280cac();
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar4 = PTR_DAT_07780128;
  puVar3 = PTR_DAT_07780120;
  puVar2 = PTR_DAT_0777ebc8;
  puVar1 = PTR_DAT_0777ebb0;
  lVar10 = auVar21._0_8_;
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
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar19,*(undefined8 *)puVar4);
  *(undefined8 *)(lVar10 + 0x78) = uVar19;
  func_0x032809c4((undefined8 *)(lVar10 + 0x78),uVar19);
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar19,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar10 + 0x80) = uVar19;
  func_0x032809c4((undefined8 *)(lVar10 + 0x80),uVar19);
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04f2ad28(uVar19,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar10 + 0x88) = uVar19;
  func_0x032809c4((undefined8 *)(lVar10 + 0x88),uVar19);
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar19,0);
  *(undefined8 *)(lVar10 + 0x90) = uVar19;
  func_0x032809c4((undefined8 *)(lVar10 + 0x90),uVar19);
                    /* WARNING: Could not recover jumptable at 0x04d076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar21 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar21._8_8_ + 0x20) + 0xc0) + 0x130))
                      (lVar10);
  return auVar21;
}


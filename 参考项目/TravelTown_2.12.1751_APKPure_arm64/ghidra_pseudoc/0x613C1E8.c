/* Ghidra 12.1.2 native pseudocode; RVA 0x613C1E8; MergeEngine.Model.Configuration.LocalMergeItemsConfigurationModel.IsLocalItem; status ok */


ulong MergeEngine_Model_Configuration_LocalMergeItemsConfigurationModel__IsLocalItem
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar6;
  uint uVar5;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  ulong unaff_x22;
  ulong uVar21;
  long *unaff_x23;
  ulong uVar22;
  undefined8 unaff_x24;
  int iVar23;
  long unaff_x25;
  int iVar24;
  code *pcVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iStack_a8;
  int aiStack_a4 [3];
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar8 = PTR_DAT_0774e4e0;
  uVar21 = 0x7e24000;
  if ((bRam0000000007e2459a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e2459a = 1;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar10 = func_0x06fdeb74(uVar20,0,0);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x28);
  if (lVar11 == 0) {
    lVar11 = func_0x03280cac();
    if (*(ulong *)(lVar11 + 0x28) == 0) {
      uVar21 = func_0x03280cac();
      puVar8 = PTR_DAT_077db1b0;
      uStack_60 = 0x623c2a0;
      if ((bRam0000000007e2459b & 1) == 0) {
        uStack_58 = uVar20;
        func_0x03280a18(PTR_DAT_077db1b0);
        bRam0000000007e2459b = 1;
      }
      uVar20 = *(undefined8 *)puVar8;
      return uVar21;
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulong *)(lVar11 + 0x28);
    puVar2 = &stack0xffffffffffffffd0;
    pcVar25 = MergeEngine_Model_Configuration_LocalMergeItemsConfigurationModel__GetLocalItemNames;
code_r0x06a12fa8:
    *(code **)(puVar2 + -0x20) = pcVar25;
    *(long *)(puVar2 + -0x10) = param_1;
    *(undefined8 *)(puVar2 + -8) = param_2;
    if ((bRam0000000007e299e9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6f78,auVar26._8_8_);
      bRam0000000007e299e9 = 1;
    }
    lVar11 = *(long *)(auVar26._0_8_ + 0x58);
    if (lVar11 != 0) {
      lVar15 = *(long *)PTR_DAT_077e6f78;
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      lVar12 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      uVar21 = func_0x03280ca0(lVar12);
      func_0x04545928(uVar21,lVar11,
                      *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0xa0));
      return uVar21;
    }
    auVar27 = func_0x03280cac();
    uVar22 = auVar27._8_8_;
    uVar10 = *(ulong *)(auVar27._0_8_ + 0x60);
    *(code **)(puVar2 + -0x50) = MergeEngine_Configuration_LocalMergeItemsConfig__MakeTextureName;
    *(ulong *)(puVar2 + -0x40) = uVar21;
    *(undefined8 *)(puVar2 + -0x38) = uVar20;
    *(undefined8 *)(puVar2 + -0x30) = 0x7e29000;
    *(long *)(puVar2 + -0x28) = auVar26._0_8_;
    if ((bRam0000000007e1cd68 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e5d8,uVar22,0);
      bRam0000000007e1cd68 = 1;
    }
    if ((uVar10 == 0) || (*(int *)(uVar10 + 0x10) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((uVar22 != 0) && (*(int *)(uVar22 + 0x10) != 0)) {
      if (bVar3) {
        return uVar22;
      }
      if (uVar10 != 0) {
        iVar13 = *(int *)(uVar10 + 0x10);
        uVar21 = func_0x032bc400(*(int *)(uVar22 + 0x10) + iVar13);
        func_0x055f73c0(uVar21,0,uVar10);
        func_0x055f73c0(uVar21,iVar13,uVar22);
        return uVar21;
      }
      auVar26 = func_0x03280cac();
      lVar11 = auVar26._8_8_;
      lVar12 = auVar26._0_8_;
      if (lVar12 == lVar11) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if ((lVar12 != 0) && (lVar11 != 0)) {
          if (*(int *)(lVar12 + 0x10) == *(int *)(lVar11 + 0x10)) {
            lVar15 = lVar12 + 0x14;
            lVar11 = lVar11 + 0x14;
            lVar12 = (long)*(int *)(lVar12 + 0x10) << 1;
            *(undefined8 *)(puVar2 + -0x90) = 0x55ea870;
            *(undefined8 *)(puVar2 + -0x80) = unaff_x24;
            *(long **)(puVar2 + -0x78) = unaff_x23;
            *(ulong *)(puVar2 + -0x70) = uVar21;
            *(undefined8 *)(puVar2 + -0x68) = 0x7e1c000;
            *(ulong *)(puVar2 + -0x60) = uVar22;
            *(undefined8 *)(puVar2 + -0x58) = 0;
            if (lVar15 != lVar11) {
              lVar17 = func_0x057e39f8(0,0,lVar12,0);
              uVar20 = func_0x057e3a04(lVar12,0);
              uVar21 = func_0x057e3a10(uVar20,0);
              if (7 < uVar21) {
                lVar12 = func_0x057e3a24(uVar20,8,0);
                while( true ) {
                  uVar21 = func_0x057e3a10(lVar12,0);
                  uVar10 = func_0x057e3a10(lVar17,0);
                  if (uVar21 <= uVar10) {
                    return (ulong)(*(long *)(lVar15 + lVar12) == *(long *)(lVar11 + lVar12));
                  }
                  uVar21 = func_0x057f2854(*(undefined8 *)(lVar15 + lVar17),
                                           *(undefined8 *)(lVar11 + lVar17),0);
                  if ((uVar21 & 1) != 0) break;
                  lVar17 = func_0x057e3a1c(lVar17,8,0);
                }
                return 0;
              }
              uVar21 = func_0x057e3a10(uVar20,0);
              uVar10 = func_0x057e3a10(lVar17,0);
              if (uVar10 < uVar21) {
                do {
                  bVar3 = *(char *)(lVar15 + lVar17) == *(char *)(lVar11 + lVar17);
                  uVar21 = (ulong)bVar3;
                  if (!bVar3) {
                    return uVar21;
                  }
                  lVar17 = func_0x057e3a1c(lVar17,1,0);
                  uVar10 = func_0x057e3a10(uVar20,0);
                  uVar22 = func_0x057e3a10(lVar17,0);
                } while (uVar22 < uVar10);
                return uVar21;
              }
            }
            return 1;
          }
          uVar4 = 0;
        }
      }
      return (ulong)uVar4;
    }
    if (bVar3) {
      uVar10 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    return uVar10;
  }
  puVar2 = &stack0xffffffffffffffe0;
  uVar20 = 0x7e29000;
  if ((bRam0000000007e299e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07757c48,param_2,0);
    bRam0000000007e299e8 = 1;
  }
  lVar12 = func_0x06a12d04(lVar11);
  if (lVar12 == 0) {
    pcVar25 = MergeEngine_Configuration_LocalMergeItemsConfig__GetLocalItemNames;
    auVar26 = func_0x03280cac();
    param_1 = lVar11;
    uVar21 = unaff_x22;
    goto code_r0x06a12fa8;
  }
  lVar11 = *(long *)PTR_DAT_07757c48;
  if (*(long *)(lVar12 + 0x10) == 0) {
    return 0;
  }
  uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xb0);
  uVar4 = func_0x053c438c();
  iVar13 = (int)uVar20;
  lVar15 = *(long *)(lVar12 + 0x10);
  if (lVar15 != 0) {
    uVar5 = *(uint *)(lVar15 + 0x18);
    unaff_x22 = (ulong)uVar4;
    iVar24 = 0;
    if (uVar5 != 0) {
      iVar24 = (int)uVar4 / (int)uVar5;
    }
    uVar1 = uVar4 - iVar24 * uVar5;
    if (uVar1 < uVar5) {
      uVar5 = *(int *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) - 1;
      if ((int)uVar5 < 0) {
        return 0;
      }
      unaff_x25 = *(long *)(lVar12 + 0x18);
      if (unaff_x25 == 0) goto LAB_053c06e8;
      uVar16 = *(undefined8 *)(unaff_x25 + 0x18);
      iVar24 = 0;
      while (iVar13 = (int)uVar20, uVar5 < (uint)uVar16) {
        if (*(uint *)(unaff_x25 + (ulong)uVar5 * 0x10 + 0x20) == uVar4) {
          unaff_x23 = *(long **)(lVar12 + 0x30);
          if (unaff_x23 == (long *)0x0) goto LAB_053c06e8;
          lVar15 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20);
          unaff_x24 = *(undefined8 *)(unaff_x25 + (ulong)uVar5 * 0x10 + 0x28);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
          }
          lVar17 = *unaff_x23;
          uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar21 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar6 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_053c0644;
              }
              uVar21 = uVar21 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar21 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(unaff_x23,lVar15,0);
LAB_053c0644:
          param_4 = puVar6[1];
          uVar20 = param_2;
          uVar21 = (*(code *)*puVar6)(unaff_x23,unaff_x24);
          if ((uVar21 & 1) != 0) {
            return 1;
          }
          uVar16 = *(undefined8 *)(unaff_x25 + 0x18);
        }
        if ((int)(uint)uVar16 <= iVar24) goto LAB_053c06ac;
        if ((uint)uVar16 <= uVar5) break;
        uVar5 = *(uint *)(unaff_x25 + (ulong)uVar5 * 0x10 + 0x24);
        iVar24 = iVar24 + 1;
        if ((int)uVar5 < 0) {
          return 0;
        }
      }
    }
    func_0x03280cb4();
LAB_053c06ac:
    func_0x03280a2c(PTR_DAT_0774efe0);
    lVar12 = func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_077825d8);
    iVar13 = 0;
    func_0x057963c0(lVar12,uVar20);
    func_0x03280b7c(lVar12,lVar11);
  }
LAB_053c06e8:
  auVar26 = func_0x03280cac();
  lVar15 = auVar26._8_8_;
  uVar21 = auVar26._0_8_;
  iVar24 = *(int *)(uVar21 + 0x20);
  uVar20 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200);
  aiStack_a4[1] = 0x53c06ec;
  aiStack_a4[2] = 0;
  lStack_98 = unaff_x25;
  uStack_90 = unaff_x24;
  plStack_88 = unaff_x23;
  uStack_80 = unaff_x22;
  uStack_78 = param_2;
  lStack_70 = lVar12;
  lStack_68 = lVar11;
  if (lVar15 == 0) {
LAB_053c2640:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar16 = func_0x03280ca0();
    uVar7 = func_0x03280a2c(PTR_DAT_077776b8);
    lVar11 = 0;
    func_0x056e7310(uVar16,uVar7);
  }
  else {
    if (iVar13 < 0) {
      aiStack_a4[0] = iVar13;
      uVar16 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar11 = func_0x03280b94(uVar16,aiStack_a4);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar16 = func_0x03280ca0();
      puVar8 = PTR_DAT_077776c0;
    }
    else {
      if (-1 < iVar24) {
        if ((iVar13 <= *(int *)(lVar15 + 0x18)) && (iVar24 <= *(int *)(lVar15 + 0x18) - iVar13)) {
          uVar10 = uVar21;
          if ((0 < iVar24) && (iVar14 = *(int *)(uVar21 + 0x24), 0 < iVar14)) {
            lVar11 = 0;
            uVar22 = 0;
            iVar23 = 0;
            do {
              lVar12 = *(long *)(uVar21 + 0x18);
              if (lVar12 == 0) {
LAB_053c263c:
                func_0x03280cac();
                goto LAB_053c2640;
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar22) {
LAB_053c2638:
                func_0x03280cb4();
                goto LAB_053c263c;
              }
              if (-1 < *(int *)(lVar12 + lVar11 + 0x20)) {
                if (*(uint *)(lVar15 + 0x18) <= (uint)(iVar23 + iVar13)) goto LAB_053c2638;
                *(undefined8 *)(lVar15 + (long)(iVar23 + iVar13) * 8 + 0x20) =
                     *(undefined8 *)(lVar12 + lVar11 + 0x28);
                uVar10 = func_0x032809c4();
                iVar14 = *(int *)(uVar21 + 0x24);
                iVar23 = iVar23 + 1;
              }
              if (iVar24 <= iVar23) {
                return uVar10;
              }
              uVar22 = uVar22 + 1;
              lVar11 = lVar11 + 0x10;
            } while ((long)uVar22 < (long)iVar14);
          }
          return uVar10;
        }
        func_0x03280a2c(PTR_DAT_0774e6e8);
        uVar16 = func_0x03280ca0();
        uVar7 = func_0x03280a2c(PTR_DAT_0777b030);
        lVar11 = 0;
        func_0x056ede60(uVar16,uVar7);
        goto LAB_053c2760;
      }
      iStack_a8 = iVar24;
      uVar16 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar11 = func_0x03280b94(uVar16,&iStack_a8);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar16 = func_0x03280ca0();
      puVar8 = PTR_DAT_077598c8;
    }
    uVar7 = func_0x03280a2c(puVar8);
    uVar9 = func_0x03280a2c(PTR_DAT_077825f0);
    func_0x056ebf98(uVar16,uVar7,lVar11,uVar9,0);
  }
LAB_053c2760:
  auVar26 = func_0x03280b7c(uVar16,uVar20);
  lVar15 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  if (lVar15 == 0) {
LAB_053c2838:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar20 = func_0x03280ca0();
    uVar16 = func_0x03280a2c(PTR_DAT_07779588);
    func_0x056e7310(uVar20,uVar16,0);
    lVar11 = func_0x03280b7c(uVar20,lVar11);
    return *(ulong *)(lVar11 + 0x30);
  }
  if (*(int *)(lVar12 + 0x24) < 1) {
    uVar4 = 0;
  }
  else {
    lVar17 = 0;
    uVar21 = 0;
    uVar4 = 0;
    do {
      lVar18 = *(long *)(lVar12 + 0x18);
      if (lVar18 == 0) {
        func_0x03280cac();
LAB_053c2834:
        func_0x03280cb4();
        goto LAB_053c2838;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_053c2834;
      if (-1 < *(int *)(lVar18 + lVar17 + 0x20)) {
        uVar20 = *(undefined8 *)(lVar18 + lVar17 + 0x28);
        uVar10 = (**(code **)(lVar15 + 0x18))
                           (*(undefined8 *)(lVar15 + 0x40),uVar20,*(undefined8 *)(lVar15 + 0x28));
        if ((uVar10 & 1) != 0) {
          uVar5 = func_0x053c0700(lVar12,uVar20,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x148));
          uVar4 = uVar4 + (uVar5 & 1);
        }
      }
      uVar21 = uVar21 + 1;
      lVar17 = lVar17 + 0x10;
    } while ((long)uVar21 < (long)*(int *)(lVar12 + 0x24));
  }
  return (ulong)uVar4;
}


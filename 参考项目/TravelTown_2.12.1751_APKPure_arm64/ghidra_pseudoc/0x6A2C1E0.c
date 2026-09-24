/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2C1E0; MergeEngine.Configuration.Definitions.Reward.Equals; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__Equals(long *param_1,long *param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long extraout_x1;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puVar28;
  undefined *unaff_x29;
  undefined *puVar29;
  code *pcVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long *plStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  
  if ((bRam0000000007e2a45a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077751d8);
    bRam0000000007e2a45a = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_06b2c234:
    param_2 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_077751d8 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) goto LAB_06b2c234;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_077751d8) {
      param_2 = (long *)0x0;
    }
  }
  if ((bRam0000000007e2a45b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e558);
    bRam0000000007e2a45b = 1;
  }
  puVar27 = PTR_DAT_0774e558;
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar4 = func_0x057dadc4(param_1,0);
  uVar5 = func_0x057dadc4(param_2,0);
  if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar27);
  }
  uVar6 = func_0x057afc3c(uVar4,uVar5,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  if ((bRam0000000007e2a45c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777f898);
    func_0x03280a18(PTR_DAT_077801d0);
    func_0x03280a18(PTR_DAT_077801d8);
    bRam0000000007e2a45c = 1;
  }
  puVar24 = PTR_DAT_077801d8;
  puVar27 = PTR_DAT_0777f898;
  lVar7 = param_1[3];
  if (((lVar7 != 0) && (param_2 != (long *)0x0)) && (param_2[3] != 0)) {
    iVar21 = *(int *)(lVar7 + 0x18);
    if (iVar21 == *(int *)(param_2[3] + 0x18)) {
      unaff_x24 = (long *)(ulong)(0 < iVar21);
      if (0 < iVar21) {
        iVar21 = 0;
        do {
          plVar8 = (long *)func_0x0414419c(lVar7,iVar21,*(undefined8 *)puVar24);
          unaff_x25 = puVar24;
          if ((param_2[3] == 0) ||
             (uVar4 = func_0x0414419c(param_2[3],iVar21,*(undefined8 *)puVar24),
             plVar8 == (long *)0x0)) goto LAB_06b2c3d0;
          lVar7 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar27) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_06b2c378;
              }
              uVar6 = uVar6 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar27,0);
LAB_06b2c378:
          uVar6 = (*(code *)*puVar9)(plVar8,uVar4,puVar9[1]);
          if ((uVar6 & 1) == 0) break;
          lVar7 = param_1[3];
          if (lVar7 == 0) goto LAB_06b2c3d0;
          iVar21 = iVar21 + 1;
          unaff_x24 = (long *)(ulong)(iVar21 < *(int *)(lVar7 + 0x18));
        } while (iVar21 < *(int *)(lVar7 + 0x18));
      }
      uVar18 = (uint)unaff_x24 ^ 1;
    }
    else {
      uVar18 = 0;
    }
    return (ulong)uVar18;
  }
LAB_06b2c3d0:
  uVar4 = func_0x03280cac();
  puVar24 = PTR_DAT_0782f200;
  plVar8 = (long *)PTR_DAT_0782f1f8;
  puVar27 = PTR_DAT_0782f180;
  if ((bRam0000000007e2a45d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d96a0);
    func_0x03280a18(PTR_DAT_077d9808);
    func_0x03280a18(PTR_DAT_077d9800);
    func_0x03280a18(PTR_DAT_077d9810);
    func_0x03280a18(PTR_DAT_077d96b8);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782f208);
    func_0x03280a18(PTR_DAT_0782f210);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782f218);
    func_0x03280a18(PTR_DAT_0782f200);
    func_0x03280a18(PTR_DAT_0782f1f8);
    func_0x03280a18(PTR_DAT_077c1e60);
    func_0x03280a18(PTR_DAT_0782f220);
    func_0x03280a18(PTR_DAT_0782f228);
    func_0x03280a18(PTR_DAT_0782f180);
    bRam0000000007e2a45d = 1;
  }
  uVar6 = func_0x03280ca0(*plVar8);
  func_0x04143c38(uVar6,*(undefined8 *)puVar24);
  plVar10 = (long *)func_0x06b2acb4(uVar4);
  lVar7 = *(long *)puVar27;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c(lVar7);
    lVar7 = *(long *)puVar27;
  }
  puVar24 = PTR_DAT_077d96a0;
  lVar22 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
  if (lVar22 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar27;
    }
    plVar8 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077d96b8);
    func_0x053569b8(lVar22,plVar8,*(undefined8 *)PTR_DAT_0782f220,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar27 + 0xb8) + 0x38);
    *plVar11 = lVar22;
    func_0x032809c4(plVar11,lVar22);
  }
  plVar12 = (long *)func_0x03d45b80(plVar10,lVar22,*(undefined8 *)puVar24);
  plVar11 = unaff_x24;
  puVar25 = unaff_x25;
  puVar26 = unaff_x27;
  puVar28 = unaff_x28;
  puVar29 = unaff_x29;
  if (plVar12 == (long *)0x0) {
LAB_06b2c990:
    func_0x03280cac();
    unaff_x24 = plVar11;
    unaff_x25 = puVar25;
    unaff_x27 = puVar26;
    unaff_x28 = puVar28;
    unaff_x29 = puVar29;
  }
  else {
    lVar7 = *plVar12;
    uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0782f208) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b2c5f0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0782f208,0);
LAB_06b2c5f0:
    plVar10 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
    puVar29 = PTR_DAT_0782f218;
    puVar28 = PTR_DAT_077d9808;
    puVar25 = PTR_DAT_077c1e60;
    puVar26 = PTR_DAT_0774e8e0;
    plVar11 = (long *)PTR_DAT_0782f210;
    if (plVar10 != (long *)0x0) {
LAB_06b2c62c:
      lVar7 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar26) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2c678;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar26,0);
LAB_06b2c678:
      uVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar8 = (long *)0x0;
        goto LAB_06b2c8d8;
      }
      lVar7 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar11) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2c6d4;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar10,*plVar11,0);
LAB_06b2c6d4:
      uVar4 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      lVar7 = func_0x03d5b8d8(uVar4,*(undefined8 *)PTR_DAT_077d9800);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06b2c970;
        plVar12 = *(long **)(lVar7 + 0x20);
        if (plVar12 == (long *)0x0) {
LAB_06b2c964:
          func_0x03280cac();
LAB_06b2c968:
          func_0x03280cac();
          goto LAB_06b2c96c;
        }
        plVar8 = (long *)(**(code **)(*plVar12 + 0x398))(plVar12,*(undefined8 *)(*plVar12 + 0x3a0));
        lVar22 = *(long *)puVar27;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar22 = *(long *)puVar27;
        }
        lVar17 = *(long *)puVar25;
        puVar24 = *(undefined **)(*(long *)(lVar22 + 0xb8) + 0x40);
        if (puVar24 == (undefined *)0x0) {
          if (plVar8 != (long *)0x0) {
            if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) !=
                lVar17)) goto LAB_06b2c988;
          }
          if (*(int *)(lVar22 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar22 = *(long *)puVar27;
          }
          uVar4 = **(undefined8 **)(lVar22 + 0xb8);
          puVar24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077d9810);
          func_0x05356664(puVar24,uVar4,*(undefined8 *)PTR_DAT_0782f228,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar27 + 0xb8) + 0x40);
          *puVar9 = puVar24;
          func_0x032809c4(puVar9,puVar24);
          plVar11 = (long *)PTR_DAT_0782f210;
        }
        else if (plVar8 != (long *)0x0) {
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) !=
              lVar17)) goto LAB_06b2c980;
        }
        uVar3 = func_0x03d598d0(lVar7,puVar24,*(undefined8 *)puVar28);
        if (plVar8 == (long *)0x0) goto LAB_06b2c968;
        func_0x0611f034(plVar8,uVar3,0);
        if (*(int *)(lVar7 + 0x18) == 0) {
          func_0x03280cb4();
          goto LAB_06b2c964;
        }
        plVar12 = *(long **)(lVar7 + 0x20);
        if (plVar12 == (long *)0x0) goto LAB_06b2c974;
        plVar12 = (long *)(**(code **)(*plVar12 + 0x398))(plVar12,*(undefined8 *)(*plVar12 + 0x3a0))
        ;
        if (uVar6 == 0) goto LAB_06b2c978;
        if (plVar12 == (long *)0x0) {
LAB_06b2c860:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar25 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06b2c860;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar25) {
            plVar12 = (long *)0x0;
          }
        }
        lVar7 = *(long *)(uVar6 + 0x10);
        lVar22 = *(long *)puVar29;
        *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_06b2c97c;
        uVar18 = *(uint *)(uVar6 + 0x18);
        if (uVar18 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(uVar6 + 0x18) = uVar18 + 1;
          *(long **)(lVar7 + (long)(int)uVar18 * 8 + 0x20) = plVar12;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(uVar6,plVar12,
                          *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06b2c62c;
      }
LAB_06b2c96c:
      func_0x03280cac();
LAB_06b2c970:
      func_0x03280cb4();
LAB_06b2c974:
      func_0x03280cac();
LAB_06b2c978:
      func_0x03280cac();
LAB_06b2c97c:
      func_0x03280cac();
LAB_06b2c980:
      func_0x03281048(plVar8);
LAB_06b2c988:
      func_0x03281048(plVar8);
      goto LAB_06b2c990;
    }
  }
  puVar29 = unaff_x29;
  puVar28 = unaff_x28;
  puVar26 = unaff_x27;
  puVar25 = unaff_x25;
  plVar11 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    auVar31 = func_0x03280ca4(plVar8);
    uVar4 = auVar31._0_8_;
    if (auVar31._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(uVar4);
    plVar8 = (long *)*puVar9;
    func_0x072ce920();
LAB_06b2c8d8:
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2c930;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2c930:
      (*(code *)*puVar9)(plVar10,puVar9[1]);
    }
    if (plVar8 == (long *)0x0) {
      return uVar6;
    }
  }
  puVar9 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b2ca64;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2ca64:
    (*(code *)*puVar13)(plVar10,puVar13[1]);
  }
  func_0x03365958(uVar4);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  lVar7 = auVar32._8_8_;
  uVar14 = auVar32._0_8_;
  ppuVar2 = (undefined **)auStack_f0;
  pcStack_d0 = MergeEngine_Configuration_Definitions_Reward__AccumulateRewards;
  uVar19 = uVar14;
  uStack_c8 = uVar4;
  plStack_c0 = plVar10;
  uStack_b8 = uVar6;
  if ((bRam0000000007e2a45e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_0782ef28);
    uVar19 = func_0x03280a18(PTR_DAT_07779fc8);
    bRam0000000007e2a45e = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if ((lVar7 == 0) || (uVar19 = func_0x06b2c190(lVar7), (uVar19 & 1) != 0)) {
    return uVar19;
  }
  if (*(long *)(uVar14 + 0x10) != 0) {
    func_0x04144678(*(long *)(uVar14 + 0x10),*(undefined8 *)(lVar7 + 0x10),
                    *(undefined8 *)PTR_DAT_0782ef28);
    if (*(long *)(lVar7 + 0x18) != 0) {
      func_0x04145068(&uStack_e8,*(long *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
      puVar27 = PTR_DAT_07779fb8;
      while (uVar6 = func_0x051159b4(&uStack_e8,*(undefined8 *)puVar27), (uVar6 & 1) != 0) {
        MergeEngine_Configuration_Definitions_Reward__AddViewData(uVar14,uStack_d8);
      }
      uVar6 = func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
      return uVar6;
    }
  }
  auVar31 = func_0x03280cac();
  lVar7 = auVar31._0_8_;
  if (auVar31._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(lVar7);
    lVar22 = *plVar8;
    func_0x072ce920();
    uVar6 = func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar22 == 0) {
      return uVar6;
    }
    func_0x03280ca4(lVar22);
  }
  func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(lVar7);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  plVar8 = (long *)PTR_DAT_0782f180;
  lVar22 = auVar32._8_8_;
  pcStack_148 = MergeEngine_Configuration_Definitions_Reward__CompareItemBoxes;
  puStack_130 = puVar27;
  puStack_110 = (undefined8 *)0x0;
  lStack_108 = 0x7e2a000;
  lStack_f8 = 0;
  puStack_150 = puVar29;
  puStack_140 = puVar28;
  puStack_138 = puVar26;
  puStack_128 = puVar25;
  plStack_120 = plVar11;
  puStack_118 = puVar24;
  lStack_100 = lVar7;
  if ((bRam0000000007e2a45f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f230);
    func_0x03280a18(PTR_DAT_0782f238);
    func_0x03280a18(PTR_DAT_0782f240);
    func_0x03280a18(PTR_DAT_077e6f00);
    func_0x03280a18(PTR_DAT_077e6778);
    func_0x03280a18(PTR_DAT_0782f248);
    func_0x03280a18(PTR_DAT_077cdb48);
    func_0x03280a18(PTR_DAT_0782f250);
    func_0x03280a18(PTR_DAT_077cf188);
    func_0x03280a18(PTR_DAT_0782f258);
    func_0x03280a18(PTR_DAT_0782f260);
    func_0x03280a18(PTR_DAT_0782f268);
    func_0x03280a18(PTR_DAT_0782f270);
    func_0x03280a18(PTR_DAT_0782f278);
    func_0x03280a18(PTR_DAT_0782f280);
    func_0x03280a18(PTR_DAT_0782f180);
    bRam0000000007e2a45f = 1;
  }
  lVar7 = func_0x06b2aaec(auVar32._0_8_);
  lVar17 = *plVar8;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c(lVar17);
    lVar17 = *plVar8;
  }
  puVar25 = PTR_DAT_077e6f00;
  puVar26 = PTR_DAT_077e6778;
  lVar23 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x48);
  if (lVar23 == 0) {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c(lVar17);
      lVar17 = *plVar8;
    }
    puVar9 = (undefined8 *)**(undefined8 **)(lVar17 + 0xb8);
    lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(lVar23,puVar9,*(undefined8 *)PTR_DAT_0782f258,0);
    plVar10 = (long *)(*(long *)(*plVar8 + 0xb8) + 0x48);
    *plVar10 = lVar23;
    func_0x032809c4(plVar10,lVar23);
  }
  uVar4 = func_0x03d872a8(lVar7,lVar23,*(undefined8 *)puVar26);
  lVar17 = func_0x03d5ffd0(uVar4,*(undefined8 *)puVar25);
  if (lVar17 == 0) {
LAB_06b2d15c:
    func_0x03280cac();
    ppuVar2 = &puStack_150;
    lVar15 = extraout_x1;
    pcVar30 = MergeEngine_Configuration_Definitions_Reward__AreItemBoxesRefsEqual;
  }
  else {
    if (*(int *)(lVar17 + 0x18) == 0) {
      return 1;
    }
    lVar7 = *plVar8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *plVar8;
    }
    lVar23 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar23 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *plVar8;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar23,uVar4,*(undefined8 *)PTR_DAT_0782f260,0);
      plVar10 = (long *)(*(long *)(*plVar8 + 0xb8) + 0x50);
      *plVar10 = lVar23;
      func_0x032809c4(plVar10,lVar23);
    }
    lVar7 = func_0x03d872a8(lVar17,lVar23,*(undefined8 *)puVar26);
    lVar23 = *plVar8;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      func_0x03280b8c(lVar23);
      lVar23 = *plVar8;
    }
    puVar27 = PTR_DAT_0782f240;
    puVar29 = PTR_DAT_0782f238;
    puVar28 = PTR_DAT_0782f230;
    puVar9 = *(undefined8 **)(*(long *)(lVar23 + 0xb8) + 0x58);
    if (puVar9 == (undefined8 *)0x0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        func_0x03280b8c(lVar23);
        lVar23 = *plVar8;
      }
      puVar24 = (undefined *)**(undefined8 **)(lVar23 + 0xb8);
      puVar9 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(puVar9,puVar24,*(undefined8 *)PTR_DAT_0782f268,0);
      puVar13 = (undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x58);
      *puVar13 = puVar9;
      func_0x032809c4(puVar13,puVar9);
    }
    uVar4 = func_0x03d50a94(lVar7,puVar9,*(undefined8 *)puVar29);
    uVar4 = func_0x03d2c6a8(uVar4,*(undefined8 *)puVar28);
    lVar15 = func_0x03d5ffd0(uVar4,*(undefined8 *)puVar27);
    lVar23 = lVar17;
    if (lVar22 == 0) goto LAB_06b2d15c;
    lVar22 = func_0x06b2aaec(lVar22);
    lVar7 = *plVar8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *plVar8;
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0xb8) + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *plVar8;
      }
      puVar24 = (undefined *)**(undefined8 **)(lVar7 + 0xb8);
      puVar9 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(puVar9,puVar24,*(undefined8 *)PTR_DAT_0782f270,0);
      puVar13 = (undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x60);
      *puVar13 = puVar9;
      func_0x032809c4(puVar13,puVar9);
    }
    uVar4 = func_0x03d872a8(lVar22,puVar9,*(undefined8 *)puVar26);
    lVar16 = func_0x03d5ffd0(uVar4,*(undefined8 *)puVar25);
    lVar7 = lVar15;
    if (lVar16 == 0) goto LAB_06b2d15c;
    if (*(int *)(lVar17 + 0x18) != *(int *)(lVar16 + 0x18)) {
      return 0;
    }
    lVar22 = *plVar8;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar22 = *plVar8;
    }
    lVar17 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x68);
    if (lVar17 == 0) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar22 = *plVar8;
      }
      puVar9 = (undefined8 *)**(undefined8 **)(lVar22 + 0xb8);
      lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar17,puVar9,*(undefined8 *)PTR_DAT_0782f278,0);
      plVar10 = (long *)(*(long *)(*plVar8 + 0xb8) + 0x68);
      *plVar10 = lVar17;
      func_0x032809c4(plVar10,lVar17);
    }
    lVar22 = func_0x03d872a8(lVar16,lVar17,*(undefined8 *)puVar26);
    lVar17 = *plVar8;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c(lVar17);
      lVar17 = *plVar8;
    }
    lVar23 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x70);
    if (lVar23 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c(lVar17);
        lVar17 = *plVar8;
      }
      puVar9 = (undefined8 *)**(undefined8 **)(lVar17 + 0xb8);
      lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(lVar23,puVar9,*(undefined8 *)PTR_DAT_0782f280,0);
      plVar10 = (long *)(*(long *)(*plVar8 + 0xb8) + 0x70);
      *plVar10 = lVar23;
      func_0x032809c4(plVar10,lVar23);
    }
    uVar4 = func_0x03d50a94(lVar22,lVar23,*(undefined8 *)puVar29);
    uVar4 = func_0x03d2c6a8(uVar4,*(undefined8 *)puVar28);
    lVar17 = func_0x03d5ffd0(uVar4,*(undefined8 *)puVar27);
    if ((lVar15 == 0) || (lVar17 == 0)) goto LAB_06b2d15c;
    lVar22 = lStack_f8;
    lVar7 = lStack_100;
    lVar23 = lStack_108;
    puVar9 = puStack_110;
    puVar24 = puStack_118;
    plVar8 = plStack_120;
    puVar26 = puStack_128;
    puVar27 = puStack_130;
    puVar25 = puStack_138;
    pcVar30 = pcStack_148;
    if (*(int *)(lVar15 + 0x18) != *(int *)(lVar17 + 0x18)) {
      return 0;
    }
  }
  *(code **)((long)ppuVar2 + -0x50) = pcVar30;
  *(undefined **)((long)ppuVar2 + -0x48) = puVar25;
  *(undefined **)((long)ppuVar2 + -0x40) = puVar27;
  *(undefined **)((long)ppuVar2 + -0x38) = puVar26;
  *(long **)((long)ppuVar2 + -0x30) = plVar8;
  *(undefined **)((long)ppuVar2 + -0x28) = puVar24;
  *(undefined8 **)((long)ppuVar2 + -0x20) = puVar9;
  *(long *)((long)ppuVar2 + -0x18) = lVar23;
  *(long *)((long)ppuVar2 + -0x10) = lVar7;
  *(long *)((long)ppuVar2 + -8) = lVar22;
  if ((bRam0000000007e2a460 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f288);
    func_0x03280a18(PTR_DAT_0782f290);
    func_0x03280a18(PTR_DAT_0782f298);
    func_0x03280a18(PTR_DAT_0782f2a0);
    func_0x03280a18(PTR_DAT_0782f2a8);
    func_0x03280a18(PTR_DAT_0782f2b0);
    func_0x03280a18(PTR_DAT_0782f2b8);
    func_0x03280a18(PTR_DAT_0782f2c0);
    bRam0000000007e2a460 = 1;
  }
  puVar26 = PTR_DAT_0782f2c0;
  puVar24 = PTR_DAT_0782f298;
  puVar27 = PTR_DAT_0782f290;
  *(undefined8 *)((long)ppuVar2 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x58) = 0;
  if (lVar15 == 0) {
    auVar31 = func_0x03280cac();
    uVar4 = auVar31._0_8_;
    if (auVar31._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(uVar4);
      lVar7 = *plVar8;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*puVar9);
      if (lVar7 == 0) {
        iVar21 = 0;
        goto LAB_06b2d2c8;
      }
      uVar4 = func_0x03280ca4(lVar7);
    }
    else {
      lVar7 = 0;
    }
    func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*puVar9);
    if (lVar7 == 0) {
      func_0x03365958(uVar4);
    }
    func_0x03280ca4(lVar7);
    uVar6 = func_0x02f09514();
  }
  else {
    func_0x04145068((undefined1 *)((long)ppuVar2 + -0x68),lVar15,*(undefined8 *)PTR_DAT_0782f2b0);
    uVar6 = func_0x051159b4((undefined1 *)((long)ppuVar2 + -0x68),*(undefined8 *)puVar24);
    if ((uVar6 & 1) == 0) {
      iVar21 = 5;
      func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*(undefined8 *)puVar27);
LAB_06b2d2c8:
      return (ulong)(iVar21 != 4);
    }
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar26);
  }
  return uVar6;
}


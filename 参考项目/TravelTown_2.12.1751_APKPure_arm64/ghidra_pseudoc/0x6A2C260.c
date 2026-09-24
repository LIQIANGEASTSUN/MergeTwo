/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2C260; MergeEngine.Configuration.Definitions.Reward.IsSameOrderRewards; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__IsSameOrderRewards(long param_1,long param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x1;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puVar27;
  undefined *unaff_x29;
  undefined *puVar28;
  code *pcVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
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
  
  if ((bRam0000000007e2a45c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777f898);
    func_0x03280a18(PTR_DAT_077801d0);
    func_0x03280a18(PTR_DAT_077801d8);
    bRam0000000007e2a45c = 1;
  }
  puVar23 = PTR_DAT_077801d8;
  puVar26 = PTR_DAT_0777f898;
  lVar4 = *(long *)(param_1 + 0x18);
  if (((lVar4 != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x18) != 0)) {
    iVar20 = *(int *)(lVar4 + 0x18);
    if (iVar20 == *(int *)(*(long *)(param_2 + 0x18) + 0x18)) {
      unaff_x24 = (long *)(ulong)(0 < iVar20);
      if (0 < iVar20) {
        iVar20 = 0;
        do {
          plVar5 = (long *)func_0x0414419c(lVar4,iVar20,*(undefined8 *)puVar23);
          unaff_x25 = puVar23;
          if ((*(long *)(param_2 + 0x18) == 0) ||
             (uVar6 = func_0x0414419c(*(long *)(param_2 + 0x18),iVar20,*(undefined8 *)puVar23),
             plVar5 == (long *)0x0)) goto LAB_06b2c3d0;
          lVar4 = *plVar5;
          uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar26) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_06b2c378;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar26,0);
LAB_06b2c378:
          uVar17 = (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
          if ((uVar17 & 1) == 0) break;
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 == 0) goto LAB_06b2c3d0;
          iVar20 = iVar20 + 1;
          unaff_x24 = (long *)(ulong)(iVar20 < *(int *)(lVar4 + 0x18));
        } while (iVar20 < *(int *)(lVar4 + 0x18));
      }
      uVar16 = (uint)unaff_x24 ^ 1;
    }
    else {
      uVar16 = 0;
    }
    return (ulong)uVar16;
  }
LAB_06b2c3d0:
  uVar6 = func_0x03280cac();
  puVar23 = PTR_DAT_0782f200;
  plVar5 = (long *)PTR_DAT_0782f1f8;
  puVar26 = PTR_DAT_0782f180;
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
  uVar17 = func_0x03280ca0(*plVar5);
  func_0x04143c38(uVar17,*(undefined8 *)puVar23);
  plVar8 = (long *)func_0x06b2acb4(uVar6);
  lVar4 = *(long *)puVar26;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c(lVar4);
    lVar4 = *(long *)puVar26;
  }
  puVar23 = PTR_DAT_077d96a0;
  lVar21 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (lVar21 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c(lVar4);
      lVar4 = *(long *)puVar26;
    }
    plVar5 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077d96b8);
    func_0x053569b8(lVar21,plVar5,*(undefined8 *)PTR_DAT_0782f220,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar26 + 0xb8) + 0x38);
    *plVar9 = lVar21;
    func_0x032809c4(plVar9,lVar21);
  }
  plVar10 = (long *)func_0x03d45b80(plVar8,lVar21,*(undefined8 *)puVar23);
  plVar9 = unaff_x24;
  puVar24 = unaff_x25;
  puVar25 = unaff_x27;
  puVar27 = unaff_x28;
  puVar28 = unaff_x29;
  if (plVar10 == (long *)0x0) {
LAB_06b2c990:
    func_0x03280cac();
    unaff_x24 = plVar9;
    unaff_x25 = puVar24;
    unaff_x27 = puVar25;
    unaff_x28 = puVar27;
    unaff_x29 = puVar28;
  }
  else {
    lVar4 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0782f208) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06b2c5f0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0782f208,0);
LAB_06b2c5f0:
    plVar8 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
    puVar28 = PTR_DAT_0782f218;
    puVar27 = PTR_DAT_077d9808;
    puVar24 = PTR_DAT_077c1e60;
    puVar25 = PTR_DAT_0774e8e0;
    plVar9 = (long *)PTR_DAT_0782f210;
    if (plVar8 != (long *)0x0) {
LAB_06b2c62c:
      lVar4 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar25) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06b2c678;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar25,0);
LAB_06b2c678:
      uVar18 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar18 & 1) == 0) {
        plVar5 = (long *)0x0;
        goto LAB_06b2c8d8;
      }
      lVar4 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *plVar9) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06b2c6d4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,*plVar9,0);
LAB_06b2c6d4:
      uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      lVar4 = func_0x03d5b8d8(uVar6,*(undefined8 *)PTR_DAT_077d9800);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_06b2c970;
        plVar10 = *(long **)(lVar4 + 0x20);
        if (plVar10 == (long *)0x0) {
LAB_06b2c964:
          func_0x03280cac();
LAB_06b2c968:
          func_0x03280cac();
          goto LAB_06b2c96c;
        }
        plVar5 = (long *)(**(code **)(*plVar10 + 0x398))(plVar10,*(undefined8 *)(*plVar10 + 0x3a0));
        lVar21 = *(long *)puVar26;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar21 = *(long *)puVar26;
        }
        lVar15 = *(long *)puVar24;
        puVar23 = *(undefined **)(*(long *)(lVar21 + 0xb8) + 0x40);
        if (puVar23 == (undefined *)0x0) {
          if (plVar5 != (long *)0x0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                lVar15)) goto LAB_06b2c988;
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar21 = *(long *)puVar26;
          }
          uVar6 = **(undefined8 **)(lVar21 + 0xb8);
          puVar23 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077d9810);
          func_0x05356664(puVar23,uVar6,*(undefined8 *)PTR_DAT_0782f228,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar26 + 0xb8) + 0x40);
          *puVar7 = puVar23;
          func_0x032809c4(puVar7,puVar23);
          plVar9 = (long *)PTR_DAT_0782f210;
        }
        else if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
              lVar15)) goto LAB_06b2c980;
        }
        uVar3 = func_0x03d598d0(lVar4,puVar23,*(undefined8 *)puVar27);
        if (plVar5 == (long *)0x0) goto LAB_06b2c968;
        func_0x0611f034(plVar5,uVar3,0);
        if (*(int *)(lVar4 + 0x18) == 0) {
          func_0x03280cb4();
          goto LAB_06b2c964;
        }
        plVar10 = *(long **)(lVar4 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_06b2c974;
        plVar10 = (long *)(**(code **)(*plVar10 + 0x398))(plVar10,*(undefined8 *)(*plVar10 + 0x3a0))
        ;
        if (uVar17 == 0) goto LAB_06b2c978;
        if (plVar10 == (long *)0x0) {
LAB_06b2c860:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar24 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06b2c860;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar24) {
            plVar10 = (long *)0x0;
          }
        }
        lVar4 = *(long *)(uVar17 + 0x10);
        lVar21 = *(long *)puVar28;
        *(int *)(uVar17 + 0x1c) = *(int *)(uVar17 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_06b2c97c;
        uVar16 = *(uint *)(uVar17 + 0x18);
        if (uVar16 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(uVar17 + 0x18) = uVar16 + 1;
          *(long **)(lVar4 + (long)(int)uVar16 * 8 + 0x20) = plVar10;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(uVar17,plVar10,
                          *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
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
      func_0x03281048(plVar5);
LAB_06b2c988:
      func_0x03281048(plVar5);
      goto LAB_06b2c990;
    }
  }
  puVar28 = unaff_x29;
  puVar27 = unaff_x28;
  puVar25 = unaff_x27;
  puVar24 = unaff_x25;
  plVar9 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    auVar30 = func_0x03280ca4(plVar5);
    uVar6 = auVar30._0_8_;
    if (auVar30._8_4_ != 1) break;
    puVar7 = (undefined8 *)func_0x072ce910(uVar6);
    plVar5 = (long *)*puVar7;
    func_0x072ce920();
LAB_06b2c8d8:
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06b2c930;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2c930:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    if (plVar5 == (long *)0x0) {
      return uVar17;
    }
  }
  puVar7 = (undefined8 *)0x0;
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar18 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06b2ca64;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2ca64:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  func_0x03365958(uVar6);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  lVar4 = auVar31._8_8_;
  uVar12 = auVar31._0_8_;
  pcStack_d0 = MergeEngine_Configuration_Definitions_Reward__AccumulateRewards;
  uVar18 = uVar12;
  uStack_c8 = uVar6;
  plStack_c0 = plVar8;
  uStack_b8 = uVar17;
  if ((bRam0000000007e2a45e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_0782ef28);
    uVar18 = func_0x03280a18(PTR_DAT_07779fc8);
    bRam0000000007e2a45e = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if ((lVar4 == 0) || (uVar18 = func_0x06b2c190(lVar4), (uVar18 & 1) != 0)) {
    return uVar18;
  }
  if (*(long *)(uVar12 + 0x10) != 0) {
    func_0x04144678(*(long *)(uVar12 + 0x10),*(undefined8 *)(lVar4 + 0x10),
                    *(undefined8 *)PTR_DAT_0782ef28);
    if (*(long *)(lVar4 + 0x18) != 0) {
      func_0x04145068(&uStack_e8,*(long *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
      puVar26 = PTR_DAT_07779fb8;
      while (uVar17 = func_0x051159b4(&uStack_e8,*(undefined8 *)puVar26), (uVar17 & 1) != 0) {
        MergeEngine_Configuration_Definitions_Reward__AddViewData(uVar12,uStack_d8);
      }
      uVar17 = func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
      return uVar17;
    }
  }
  auVar30 = func_0x03280cac();
  lVar4 = auVar30._0_8_;
  if (auVar30._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(lVar4);
    lVar21 = *plVar5;
    func_0x072ce920();
    uVar17 = func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar21 == 0) {
      return uVar17;
    }
    func_0x03280ca4(lVar21);
  }
  func_0x051159b0(&uStack_e8,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(lVar4);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  plVar5 = (long *)PTR_DAT_0782f180;
  lVar21 = auVar31._8_8_;
  ppuVar2 = &puStack_150;
  pcStack_148 = MergeEngine_Configuration_Definitions_Reward__CompareItemBoxes;
  puStack_130 = puVar26;
  puStack_110 = (undefined8 *)0x0;
  lStack_108 = 0x7e2a000;
  lStack_f8 = 0;
  puStack_150 = puVar28;
  puStack_140 = puVar27;
  puStack_138 = puVar25;
  puStack_128 = puVar24;
  plStack_120 = plVar9;
  puStack_118 = puVar23;
  lStack_100 = lVar4;
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
  lVar4 = func_0x06b2aaec(auVar31._0_8_);
  lVar15 = *plVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c(lVar15);
    lVar15 = *plVar5;
  }
  puVar24 = PTR_DAT_077e6f00;
  puVar25 = PTR_DAT_077e6778;
  lVar22 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x48);
  if (lVar22 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c(lVar15);
      lVar15 = *plVar5;
    }
    puVar7 = (undefined8 *)**(undefined8 **)(lVar15 + 0xb8);
    lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(lVar22,puVar7,*(undefined8 *)PTR_DAT_0782f258,0);
    plVar8 = (long *)(*(long *)(*plVar5 + 0xb8) + 0x48);
    *plVar8 = lVar22;
    func_0x032809c4(plVar8,lVar22);
  }
  uVar6 = func_0x03d872a8(lVar4,lVar22,*(undefined8 *)puVar25);
  lVar15 = func_0x03d5ffd0(uVar6,*(undefined8 *)puVar24);
  if (lVar15 == 0) {
LAB_06b2d15c:
    pcVar29 = MergeEngine_Configuration_Definitions_Reward__AreItemBoxesRefsEqual;
    func_0x03280cac();
    lVar13 = extraout_x1;
  }
  else {
    if (*(int *)(lVar15 + 0x18) == 0) {
      return 1;
    }
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *plVar5;
    }
    lVar22 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
    if (lVar22 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar4 = *plVar5;
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar22,uVar6,*(undefined8 *)PTR_DAT_0782f260,0);
      plVar8 = (long *)(*(long *)(*plVar5 + 0xb8) + 0x50);
      *plVar8 = lVar22;
      func_0x032809c4(plVar8,lVar22);
    }
    lVar4 = func_0x03d872a8(lVar15,lVar22,*(undefined8 *)puVar25);
    lVar22 = *plVar5;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c(lVar22);
      lVar22 = *plVar5;
    }
    puVar26 = PTR_DAT_0782f240;
    puVar28 = PTR_DAT_0782f238;
    puVar27 = PTR_DAT_0782f230;
    puVar7 = *(undefined8 **)(*(long *)(lVar22 + 0xb8) + 0x58);
    if (puVar7 == (undefined8 *)0x0) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c(lVar22);
        lVar22 = *plVar5;
      }
      puVar23 = (undefined *)**(undefined8 **)(lVar22 + 0xb8);
      puVar7 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(puVar7,puVar23,*(undefined8 *)PTR_DAT_0782f268,0);
      puVar11 = (undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x58);
      *puVar11 = puVar7;
      func_0x032809c4(puVar11,puVar7);
    }
    uVar6 = func_0x03d50a94(lVar4,puVar7,*(undefined8 *)puVar28);
    uVar6 = func_0x03d2c6a8(uVar6,*(undefined8 *)puVar27);
    lVar13 = func_0x03d5ffd0(uVar6,*(undefined8 *)puVar26);
    lVar22 = lVar15;
    if (lVar21 == 0) goto LAB_06b2d15c;
    lVar21 = func_0x06b2aaec(lVar21);
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c(lVar4);
      lVar4 = *plVar5;
    }
    puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0xb8) + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c(lVar4);
        lVar4 = *plVar5;
      }
      puVar23 = (undefined *)**(undefined8 **)(lVar4 + 0xb8);
      puVar7 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(puVar7,puVar23,*(undefined8 *)PTR_DAT_0782f270,0);
      puVar11 = (undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x60);
      *puVar11 = puVar7;
      func_0x032809c4(puVar11,puVar7);
    }
    uVar6 = func_0x03d872a8(lVar21,puVar7,*(undefined8 *)puVar25);
    lVar14 = func_0x03d5ffd0(uVar6,*(undefined8 *)puVar24);
    lVar4 = lVar13;
    if (lVar14 == 0) goto LAB_06b2d15c;
    if (*(int *)(lVar15 + 0x18) != *(int *)(lVar14 + 0x18)) {
      return 0;
    }
    lVar21 = *plVar5;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *plVar5;
    }
    lVar15 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x68);
    if (lVar15 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar21 = *plVar5;
      }
      puVar7 = (undefined8 *)**(undefined8 **)(lVar21 + 0xb8);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar15,puVar7,*(undefined8 *)PTR_DAT_0782f278,0);
      plVar8 = (long *)(*(long *)(*plVar5 + 0xb8) + 0x68);
      *plVar8 = lVar15;
      func_0x032809c4(plVar8,lVar15);
    }
    lVar21 = func_0x03d872a8(lVar14,lVar15,*(undefined8 *)puVar25);
    lVar15 = *plVar5;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c(lVar15);
      lVar15 = *plVar5;
    }
    lVar22 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
    if (lVar22 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c(lVar15);
        lVar15 = *plVar5;
      }
      puVar7 = (undefined8 *)**(undefined8 **)(lVar15 + 0xb8);
      lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(lVar22,puVar7,*(undefined8 *)PTR_DAT_0782f280,0);
      plVar8 = (long *)(*(long *)(*plVar5 + 0xb8) + 0x70);
      *plVar8 = lVar22;
      func_0x032809c4(plVar8,lVar22);
    }
    uVar6 = func_0x03d50a94(lVar21,lVar22,*(undefined8 *)puVar28);
    uVar6 = func_0x03d2c6a8(uVar6,*(undefined8 *)puVar27);
    lVar15 = func_0x03d5ffd0(uVar6,*(undefined8 *)puVar26);
    if ((lVar13 == 0) || (lVar15 == 0)) goto LAB_06b2d15c;
    if (*(int *)(lVar13 + 0x18) != *(int *)(lVar15 + 0x18)) {
      return 0;
    }
    ppuVar2 = (undefined **)auStack_f0;
    lVar21 = lStack_f8;
    lVar4 = lStack_100;
    lVar22 = lStack_108;
    puVar7 = puStack_110;
    puVar23 = puStack_118;
    plVar5 = plStack_120;
    puVar25 = puStack_128;
    puVar26 = puStack_130;
    puVar24 = puStack_138;
    pcVar29 = pcStack_148;
  }
  *(code **)((long)ppuVar2 + -0x50) = pcVar29;
  *(undefined **)((long)ppuVar2 + -0x48) = puVar24;
  *(undefined **)((long)ppuVar2 + -0x40) = puVar26;
  *(undefined **)((long)ppuVar2 + -0x38) = puVar25;
  *(long **)((long)ppuVar2 + -0x30) = plVar5;
  *(undefined **)((long)ppuVar2 + -0x28) = puVar23;
  *(undefined8 **)((long)ppuVar2 + -0x20) = puVar7;
  *(long *)((long)ppuVar2 + -0x18) = lVar22;
  *(long *)((long)ppuVar2 + -0x10) = lVar4;
  *(long *)((long)ppuVar2 + -8) = lVar21;
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
  puVar25 = PTR_DAT_0782f2c0;
  puVar23 = PTR_DAT_0782f298;
  puVar26 = PTR_DAT_0782f290;
  *(undefined8 *)((long)ppuVar2 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x58) = 0;
  if (lVar13 == 0) {
    auVar30 = func_0x03280cac();
    uVar6 = auVar30._0_8_;
    if (auVar30._8_4_ == 1) {
      plVar5 = (long *)func_0x072ce910(uVar6);
      lVar4 = *plVar5;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*puVar7);
      if (lVar4 == 0) {
        iVar20 = 0;
        goto LAB_06b2d2c8;
      }
      uVar6 = func_0x03280ca4(lVar4);
    }
    else {
      lVar4 = 0;
    }
    func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*puVar7);
    if (lVar4 == 0) {
      func_0x03365958(uVar6);
    }
    func_0x03280ca4(lVar4);
    uVar17 = func_0x02f09514();
  }
  else {
    func_0x04145068((undefined1 *)((long)ppuVar2 + -0x68),lVar13,*(undefined8 *)PTR_DAT_0782f2b0);
    uVar17 = func_0x051159b4((undefined1 *)((long)ppuVar2 + -0x68),*(undefined8 *)puVar23);
    if ((uVar17 & 1) == 0) {
      iVar20 = 5;
      func_0x051159b0((undefined1 *)((long)ppuVar2 + -0x68),*(undefined8 *)puVar26);
LAB_06b2d2c8:
      return (ulong)(iVar20 != 4);
    }
    uVar17 = func_0x03280ca0(*(undefined8 *)puVar25);
  }
  return uVar17;
}


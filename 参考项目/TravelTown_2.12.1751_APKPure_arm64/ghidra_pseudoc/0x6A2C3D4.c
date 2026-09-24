/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2C3D4; MergeEngine.Configuration.Definitions.Reward.GetGroupedPortalItems; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__GetGroupedPortalItems(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x1;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
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
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  puVar23 = PTR_DAT_0782f200;
  plVar22 = (long *)PTR_DAT_0782f1f8;
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
  uVar5 = func_0x03280ca0(*plVar22);
  func_0x04143c38(uVar5,*(undefined8 *)puVar23);
  plVar6 = (long *)func_0x06b2acb4(param_1);
  lVar16 = *(long *)puVar26;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c(lVar16);
    lVar16 = *(long *)puVar26;
  }
  puVar23 = PTR_DAT_077d96a0;
  lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x38);
  if (lVar20 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c(lVar16);
      lVar16 = *(long *)puVar26;
    }
    plVar22 = (long *)**(undefined8 **)(lVar16 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077d96b8);
    func_0x053569b8(lVar20,plVar22,*(undefined8 *)PTR_DAT_0782f220,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar26 + 0xb8) + 0x38);
    *plVar7 = lVar20;
    func_0x032809c4(plVar7,lVar20);
  }
  plVar8 = (long *)func_0x03d45b80(plVar6,lVar20,*(undefined8 *)puVar23);
  plVar7 = unaff_x24;
  puVar24 = unaff_x25;
  puVar25 = unaff_x27;
  puVar27 = unaff_x28;
  puVar28 = unaff_x29;
  if (plVar8 == (long *)0x0) {
LAB_06b2c990:
    func_0x03280cac();
    unaff_x24 = plVar7;
    unaff_x25 = puVar24;
    unaff_x27 = puVar25;
    unaff_x28 = puVar27;
    unaff_x29 = puVar28;
  }
  else {
    lVar16 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0782f208) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b2c5f0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0782f208,0);
LAB_06b2c5f0:
    plVar6 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar28 = PTR_DAT_0782f218;
    puVar27 = PTR_DAT_077d9808;
    puVar24 = PTR_DAT_077c1e60;
    puVar25 = PTR_DAT_0774e8e0;
    plVar7 = (long *)PTR_DAT_0782f210;
    if (plVar6 != (long *)0x0) {
LAB_06b2c62c:
      lVar16 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar25) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b2c678;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar25,0);
LAB_06b2c678:
      uVar17 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      if ((uVar17 & 1) == 0) {
        plVar22 = (long *)0x0;
        goto LAB_06b2c8d8;
      }
      lVar16 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar7) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b2c6d4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar6,*plVar7,0);
LAB_06b2c6d4:
      uVar10 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      lVar16 = func_0x03d5b8d8(uVar10,*(undefined8 *)PTR_DAT_077d9800);
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06b2c970;
        plVar8 = *(long **)(lVar16 + 0x20);
        if (plVar8 == (long *)0x0) {
LAB_06b2c964:
          func_0x03280cac();
LAB_06b2c968:
          func_0x03280cac();
          goto LAB_06b2c96c;
        }
        plVar22 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
        lVar20 = *(long *)puVar26;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar20 = *(long *)puVar26;
        }
        lVar15 = *(long *)puVar24;
        puVar23 = *(undefined **)(*(long *)(lVar20 + 0xb8) + 0x40);
        if (puVar23 == (undefined *)0x0) {
          if (plVar22 != (long *)0x0) {
            if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
               (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                lVar15)) goto LAB_06b2c988;
          }
          if (*(int *)(lVar20 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar20 = *(long *)puVar26;
          }
          uVar10 = **(undefined8 **)(lVar20 + 0xb8);
          puVar23 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077d9810);
          func_0x05356664(puVar23,uVar10,*(undefined8 *)PTR_DAT_0782f228,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar26 + 0xb8) + 0x40);
          *puVar9 = puVar23;
          func_0x032809c4(puVar9,puVar23);
          plVar7 = (long *)PTR_DAT_0782f210;
        }
        else if (plVar22 != (long *)0x0) {
          if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
              lVar15)) goto LAB_06b2c980;
        }
        uVar4 = func_0x03d598d0(lVar16,puVar23,*(undefined8 *)puVar27);
        if (plVar22 == (long *)0x0) goto LAB_06b2c968;
        func_0x0611f034(plVar22,uVar4,0);
        if (*(int *)(lVar16 + 0x18) == 0) {
          func_0x03280cb4();
          goto LAB_06b2c964;
        }
        plVar8 = *(long **)(lVar16 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_06b2c974;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
        if (uVar5 == 0) goto LAB_06b2c978;
        if (plVar8 == (long *)0x0) {
LAB_06b2c860:
          plVar8 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar24 + 0x130);
          if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06b2c860;
          if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar24) {
            plVar8 = (long *)0x0;
          }
        }
        lVar16 = *(long *)(uVar5 + 0x10);
        lVar20 = *(long *)puVar28;
        *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_06b2c97c;
        uVar2 = *(uint *)(uVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(uVar5 + 0x18) = uVar2 + 1;
          *(long **)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = plVar8;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(uVar5,plVar8,
                          *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
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
      func_0x03281048(plVar22);
LAB_06b2c988:
      func_0x03281048(plVar22);
      goto LAB_06b2c990;
    }
  }
  puVar28 = unaff_x29;
  puVar27 = unaff_x28;
  puVar25 = unaff_x27;
  puVar24 = unaff_x25;
  plVar7 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    auVar30 = func_0x03280ca4(plVar22);
    uVar10 = auVar30._0_8_;
    if (auVar30._8_4_ != 1) break;
    puVar9 = (undefined8 *)func_0x072ce910(uVar10);
    plVar22 = (long *)*puVar9;
    func_0x072ce920();
LAB_06b2c8d8:
    if (plVar6 != (long *)0x0) {
      lVar16 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b2c930;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2c930:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
    if (plVar22 == (long *)0x0) {
      return uVar5;
    }
  }
  puVar9 = (undefined8 *)0x0;
  if (plVar6 != (long *)0x0) {
    lVar16 = *plVar6;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06b2ca64;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b2ca64:
    (*(code *)*puVar11)(plVar6,puVar11[1]);
  }
  func_0x03365958(uVar10);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  lVar16 = auVar31._8_8_;
  uVar12 = auVar31._0_8_;
  pcStack_80 = MergeEngine_Configuration_Definitions_Reward__AccumulateRewards;
  uVar17 = uVar12;
  uStack_78 = uVar10;
  plStack_70 = plVar6;
  uStack_68 = uVar5;
  if ((bRam0000000007e2a45e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_0782ef28);
    uVar17 = func_0x03280a18(PTR_DAT_07779fc8);
    bRam0000000007e2a45e = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if ((lVar16 == 0) || (uVar17 = func_0x06b2c190(lVar16), (uVar17 & 1) != 0)) {
    return uVar17;
  }
  if (*(long *)(uVar12 + 0x10) != 0) {
    func_0x04144678(*(long *)(uVar12 + 0x10),*(undefined8 *)(lVar16 + 0x10),
                    *(undefined8 *)PTR_DAT_0782ef28);
    if (*(long *)(lVar16 + 0x18) != 0) {
      func_0x04145068(&uStack_98,*(long *)(lVar16 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
      puVar26 = PTR_DAT_07779fb8;
      while (uVar5 = func_0x051159b4(&uStack_98,*(undefined8 *)puVar26), (uVar5 & 1) != 0) {
        MergeEngine_Configuration_Definitions_Reward__AddViewData(uVar12,uStack_88);
      }
      uVar5 = func_0x051159b0(&uStack_98,*(undefined8 *)PTR_DAT_07779fb0);
      return uVar5;
    }
  }
  auVar30 = func_0x03280cac();
  lVar16 = auVar30._0_8_;
  if (auVar30._8_4_ == 1) {
    plVar22 = (long *)func_0x072ce910(lVar16);
    lVar20 = *plVar22;
    func_0x072ce920();
    uVar5 = func_0x051159b0(&uStack_98,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar20 == 0) {
      return uVar5;
    }
    func_0x03280ca4(lVar20);
  }
  func_0x051159b0(&uStack_98,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(lVar16);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  plVar22 = (long *)PTR_DAT_0782f180;
  lVar20 = auVar31._8_8_;
  ppuVar3 = &puStack_100;
  pcStack_f8 = MergeEngine_Configuration_Definitions_Reward__CompareItemBoxes;
  puStack_e0 = puVar26;
  puStack_c0 = (undefined8 *)0x0;
  lStack_b8 = 0x7e2a000;
  lStack_a8 = 0;
  puStack_100 = puVar28;
  puStack_f0 = puVar27;
  puStack_e8 = puVar25;
  puStack_d8 = puVar24;
  plStack_d0 = plVar7;
  puStack_c8 = puVar23;
  lStack_b0 = lVar16;
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
  lVar16 = func_0x06b2aaec(auVar31._0_8_);
  lVar15 = *plVar22;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c(lVar15);
    lVar15 = *plVar22;
  }
  puVar24 = PTR_DAT_077e6f00;
  puVar25 = PTR_DAT_077e6778;
  lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x48);
  if (lVar21 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c(lVar15);
      lVar15 = *plVar22;
    }
    puVar9 = (undefined8 *)**(undefined8 **)(lVar15 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(lVar21,puVar9,*(undefined8 *)PTR_DAT_0782f258,0);
    plVar6 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x48);
    *plVar6 = lVar21;
    func_0x032809c4(plVar6,lVar21);
  }
  uVar10 = func_0x03d872a8(lVar16,lVar21,*(undefined8 *)puVar25);
  lVar15 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar24);
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
    lVar16 = *plVar22;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *plVar22;
    }
    lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x50);
    if (lVar21 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar16 = *plVar22;
      }
      uVar10 = **(undefined8 **)(lVar16 + 0xb8);
      lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar21,uVar10,*(undefined8 *)PTR_DAT_0782f260,0);
      plVar6 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x50);
      *plVar6 = lVar21;
      func_0x032809c4(plVar6,lVar21);
    }
    lVar16 = func_0x03d872a8(lVar15,lVar21,*(undefined8 *)puVar25);
    lVar21 = *plVar22;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c(lVar21);
      lVar21 = *plVar22;
    }
    puVar26 = PTR_DAT_0782f240;
    puVar28 = PTR_DAT_0782f238;
    puVar27 = PTR_DAT_0782f230;
    puVar9 = *(undefined8 **)(*(long *)(lVar21 + 0xb8) + 0x58);
    if (puVar9 == (undefined8 *)0x0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c(lVar21);
        lVar21 = *plVar22;
      }
      puVar23 = (undefined *)**(undefined8 **)(lVar21 + 0xb8);
      puVar9 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(puVar9,puVar23,*(undefined8 *)PTR_DAT_0782f268,0);
      puVar11 = (undefined8 *)(*(long *)(*plVar22 + 0xb8) + 0x58);
      *puVar11 = puVar9;
      func_0x032809c4(puVar11,puVar9);
    }
    uVar10 = func_0x03d50a94(lVar16,puVar9,*(undefined8 *)puVar28);
    uVar10 = func_0x03d2c6a8(uVar10,*(undefined8 *)puVar27);
    lVar13 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar26);
    lVar21 = lVar15;
    if (lVar20 == 0) goto LAB_06b2d15c;
    lVar20 = func_0x06b2aaec(lVar20);
    lVar16 = *plVar22;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c(lVar16);
      lVar16 = *plVar22;
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xb8) + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *plVar22;
      }
      puVar23 = (undefined *)**(undefined8 **)(lVar16 + 0xb8);
      puVar9 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(puVar9,puVar23,*(undefined8 *)PTR_DAT_0782f270,0);
      puVar11 = (undefined8 *)(*(long *)(*plVar22 + 0xb8) + 0x60);
      *puVar11 = puVar9;
      func_0x032809c4(puVar11,puVar9);
    }
    uVar10 = func_0x03d872a8(lVar20,puVar9,*(undefined8 *)puVar25);
    lVar14 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar24);
    lVar16 = lVar13;
    if (lVar14 == 0) goto LAB_06b2d15c;
    if (*(int *)(lVar15 + 0x18) != *(int *)(lVar14 + 0x18)) {
      return 0;
    }
    lVar20 = *plVar22;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar20 = *plVar22;
    }
    lVar15 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x68);
    if (lVar15 == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar20 = *plVar22;
      }
      puVar9 = (undefined8 *)**(undefined8 **)(lVar20 + 0xb8);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar15,puVar9,*(undefined8 *)PTR_DAT_0782f278,0);
      plVar6 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x68);
      *plVar6 = lVar15;
      func_0x032809c4(plVar6,lVar15);
    }
    lVar20 = func_0x03d872a8(lVar14,lVar15,*(undefined8 *)puVar25);
    lVar15 = *plVar22;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c(lVar15);
      lVar15 = *plVar22;
    }
    lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
    if (lVar21 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c(lVar15);
        lVar15 = *plVar22;
      }
      puVar9 = (undefined8 *)**(undefined8 **)(lVar15 + 0xb8);
      lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(lVar21,puVar9,*(undefined8 *)PTR_DAT_0782f280,0);
      plVar6 = (long *)(*(long *)(*plVar22 + 0xb8) + 0x70);
      *plVar6 = lVar21;
      func_0x032809c4(plVar6,lVar21);
    }
    uVar10 = func_0x03d50a94(lVar20,lVar21,*(undefined8 *)puVar28);
    uVar10 = func_0x03d2c6a8(uVar10,*(undefined8 *)puVar27);
    lVar15 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar26);
    if ((lVar13 == 0) || (lVar15 == 0)) goto LAB_06b2d15c;
    if (*(int *)(lVar13 + 0x18) != *(int *)(lVar15 + 0x18)) {
      return 0;
    }
    ppuVar3 = (undefined **)auStack_a0;
    lVar20 = lStack_a8;
    lVar16 = lStack_b0;
    lVar21 = lStack_b8;
    puVar9 = puStack_c0;
    puVar23 = puStack_c8;
    plVar22 = plStack_d0;
    puVar25 = puStack_d8;
    puVar26 = puStack_e0;
    puVar24 = puStack_e8;
    pcVar29 = pcStack_f8;
  }
  *(code **)((long)ppuVar3 + -0x50) = pcVar29;
  *(undefined **)((long)ppuVar3 + -0x48) = puVar24;
  *(undefined **)((long)ppuVar3 + -0x40) = puVar26;
  *(undefined **)((long)ppuVar3 + -0x38) = puVar25;
  *(long **)((long)ppuVar3 + -0x30) = plVar22;
  *(undefined **)((long)ppuVar3 + -0x28) = puVar23;
  *(undefined8 **)((long)ppuVar3 + -0x20) = puVar9;
  *(long *)((long)ppuVar3 + -0x18) = lVar21;
  *(long *)((long)ppuVar3 + -0x10) = lVar16;
  *(long *)((long)ppuVar3 + -8) = lVar20;
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
  *(undefined8 *)((long)ppuVar3 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x58) = 0;
  if (lVar13 == 0) {
    auVar30 = func_0x03280cac();
    uVar10 = auVar30._0_8_;
    if (auVar30._8_4_ == 1) {
      plVar22 = (long *)func_0x072ce910(uVar10);
      lVar16 = *plVar22;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)ppuVar3 + -0x68),*puVar9);
      if (lVar16 == 0) {
        iVar19 = 0;
        goto LAB_06b2d2c8;
      }
      uVar10 = func_0x03280ca4(lVar16);
    }
    else {
      lVar16 = 0;
    }
    func_0x051159b0((undefined1 *)((long)ppuVar3 + -0x68),*puVar9);
    if (lVar16 == 0) {
      func_0x03365958(uVar10);
    }
    func_0x03280ca4(lVar16);
    uVar5 = func_0x02f09514();
  }
  else {
    func_0x04145068((undefined1 *)((long)ppuVar3 + -0x68),lVar13,*(undefined8 *)PTR_DAT_0782f2b0);
    uVar5 = func_0x051159b4((undefined1 *)((long)ppuVar3 + -0x68),*(undefined8 *)puVar23);
    if ((uVar5 & 1) == 0) {
      iVar19 = 5;
      func_0x051159b0((undefined1 *)((long)ppuVar3 + -0x68),*(undefined8 *)puVar26);
LAB_06b2d2c8:
      return (ulong)(iVar19 != 4);
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar25);
  }
  return uVar5;
}


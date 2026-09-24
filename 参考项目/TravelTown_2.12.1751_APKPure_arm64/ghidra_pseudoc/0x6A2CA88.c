/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2CA88; MergeEngine.Configuration.Definitions.Reward.AccumulateRewards; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__AccumulateRewards(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long extraout_x1;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *puVar19;
  undefined *unaff_x25;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_1;
  if ((bRam0000000007e2a45e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779fb0);
    func_0x03280a18(PTR_DAT_07779fb8);
    func_0x03280a18(PTR_DAT_07779fc0);
    func_0x03280a18(PTR_DAT_0782ef28);
    uVar5 = func_0x03280a18(PTR_DAT_07779fc8);
    bRam0000000007e2a45e = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((param_2 == 0) || (uVar5 = func_0x06b2c190(param_2), (uVar5 & 1) != 0)) {
    return uVar5;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x04144678(*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),
                    *(undefined8 *)PTR_DAT_0782ef28);
    if (*(long *)(param_2 + 0x18) != 0) {
      func_0x04145068(&uStack_38,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_07779fc8);
      puVar19 = PTR_DAT_07779fb8;
      while (uVar5 = func_0x051159b4(&uStack_38,*(undefined8 *)puVar19), (uVar5 & 1) != 0) {
        func_0x06b25acc(param_1,uStack_28);
      }
      uVar5 = func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_07779fb0);
      return uVar5;
    }
  }
  auVar23 = func_0x03280cac();
  lVar15 = auVar23._0_8_;
  if (auVar23._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(lVar15);
    lVar14 = *plVar6;
    func_0x072ce920();
    uVar5 = func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_07779fb0);
    if (lVar14 == 0) {
      return uVar5;
    }
    func_0x03280ca4(lVar14);
  }
  func_0x051159b0(&uStack_38,*(undefined8 *)PTR_DAT_07779fb0);
  func_0x03365958(lVar15);
  func_0x03280ca4(0);
  auVar22 = func_0x02f09514();
  puVar19 = PTR_DAT_0782f180;
  lVar14 = auVar22._8_8_;
  puVar4 = &stack0xffffffffffffff60;
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
  lVar7 = func_0x06b2aaec(auVar22._0_8_);
  lVar12 = *(long *)puVar19;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c(lVar12);
    lVar12 = *(long *)puVar19;
  }
  puVar21 = PTR_DAT_077e6f00;
  puVar20 = PTR_DAT_077e6778;
  lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x48);
  puVar17 = unaff_x22;
  if (lVar16 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c(lVar12);
      lVar12 = *(long *)puVar19;
    }
    puVar17 = (undefined8 *)**(undefined8 **)(lVar12 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(lVar16,puVar17,*(undefined8 *)PTR_DAT_0782f258,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x48);
    *plVar6 = lVar16;
    func_0x032809c4(plVar6,lVar16);
  }
  uVar8 = func_0x03d872a8(lVar7,lVar16,*(undefined8 *)puVar20);
  lVar12 = func_0x03d5ffd0(uVar8,*(undefined8 *)puVar21);
  uVar8 = unaff_x23;
  puVar3 = unaff_x26;
  if (lVar12 == 0) {
LAB_06b2d15c:
    unaff_x26 = puVar3;
    unaff_x23 = uVar8;
    unaff_x22 = puVar17;
    lVar15 = lVar7;
    uVar8 = 0x6b2d160;
    func_0x03280cac();
    lVar10 = extraout_x1;
  }
  else {
    if (*(int *)(lVar12 + 0x18) == 0) {
      return 1;
    }
    lVar7 = *(long *)puVar19;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar19;
    }
    lVar16 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar16 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar19;
      }
      uVar18 = **(undefined8 **)(lVar7 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar16,uVar18,*(undefined8 *)PTR_DAT_0782f260,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x50);
      *plVar6 = lVar16;
      func_0x032809c4(plVar6,lVar16);
    }
    lVar7 = func_0x03d872a8(lVar12,lVar16,*(undefined8 *)puVar20);
    lVar16 = *(long *)puVar19;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c(lVar16);
      lVar16 = *(long *)puVar19;
    }
    puVar3 = PTR_DAT_0782f240;
    puVar2 = PTR_DAT_0782f238;
    puVar1 = PTR_DAT_0782f230;
    puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xb8) + 0x58);
    if (puVar17 == (undefined8 *)0x0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *(long *)puVar19;
      }
      uVar8 = **(undefined8 **)(lVar16 + 0xb8);
      puVar17 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(puVar17,uVar8,*(undefined8 *)PTR_DAT_0782f268,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x58);
      *puVar9 = puVar17;
      func_0x032809c4(puVar9,puVar17);
    }
    uVar18 = func_0x03d50a94(lVar7,puVar17,*(undefined8 *)puVar2);
    uVar18 = func_0x03d2c6a8(uVar18,*(undefined8 *)puVar1);
    lVar10 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar3);
    lVar16 = lVar12;
    if (lVar14 == 0) goto LAB_06b2d15c;
    lVar14 = func_0x06b2aaec(lVar14);
    lVar7 = *(long *)puVar19;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar19;
    }
    puVar17 = *(undefined8 **)(*(long *)(lVar7 + 0xb8) + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar19;
      }
      uVar8 = **(undefined8 **)(lVar7 + 0xb8);
      puVar17 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(puVar17,uVar8,*(undefined8 *)PTR_DAT_0782f270,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x60);
      *puVar9 = puVar17;
      func_0x032809c4(puVar9,puVar17);
    }
    uVar18 = func_0x03d872a8(lVar14,puVar17,*(undefined8 *)puVar20);
    lVar11 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar21);
    lVar7 = lVar10;
    if (lVar11 == 0) goto LAB_06b2d15c;
    if (*(int *)(lVar12 + 0x18) != *(int *)(lVar11 + 0x18)) {
      return 0;
    }
    lVar14 = *(long *)puVar19;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar14 = *(long *)puVar19;
    }
    lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x68);
    if (lVar12 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar14 = *(long *)puVar19;
      }
      puVar17 = (undefined8 *)**(undefined8 **)(lVar14 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar12,puVar17,*(undefined8 *)PTR_DAT_0782f278,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x68);
      *plVar6 = lVar12;
      func_0x032809c4(plVar6,lVar12);
    }
    lVar14 = func_0x03d872a8(lVar11,lVar12,*(undefined8 *)puVar20);
    lVar12 = *(long *)puVar19;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c(lVar12);
      lVar12 = *(long *)puVar19;
    }
    lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x70);
    if (lVar16 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c(lVar12);
        lVar12 = *(long *)puVar19;
      }
      puVar17 = (undefined8 *)**(undefined8 **)(lVar12 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(lVar16,puVar17,*(undefined8 *)PTR_DAT_0782f280,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x70);
      *plVar6 = lVar16;
      func_0x032809c4(plVar6,lVar16);
    }
    uVar18 = func_0x03d50a94(lVar14,lVar16,*(undefined8 *)puVar2);
    uVar18 = func_0x03d2c6a8(uVar18,*(undefined8 *)puVar1);
    lVar12 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar3);
    if ((lVar10 == 0) || (lVar12 == 0)) goto LAB_06b2d15c;
    if (*(int *)(lVar10 + 0x18) != *(int *)(lVar12 + 0x18)) {
      return 0;
    }
    lVar14 = 0;
    lVar16 = 0x7e2a000;
    uVar8 = 0x6b2cc04;
    puVar4 = auStack_40;
    puVar19 = unaff_x24;
    puVar20 = unaff_x25;
    puVar21 = unaff_x27;
  }
  *(undefined8 *)(puVar4 + -0x50) = uVar8;
  *(undefined **)(puVar4 + -0x48) = puVar21;
  *(undefined **)(puVar4 + -0x40) = unaff_x26;
  *(undefined **)(puVar4 + -0x38) = puVar20;
  *(undefined **)(puVar4 + -0x30) = puVar19;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x23;
  *(undefined8 **)(puVar4 + -0x20) = unaff_x22;
  *(long *)(puVar4 + -0x18) = lVar16;
  *(long *)(puVar4 + -0x10) = lVar15;
  *(long *)(puVar4 + -8) = lVar14;
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
  puVar21 = PTR_DAT_0782f2c0;
  puVar20 = PTR_DAT_0782f298;
  puVar19 = PTR_DAT_0782f290;
  *(undefined8 *)(puVar4 + -0x68) = 0;
  *(undefined8 *)(puVar4 + -0x60) = 0;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  if (lVar10 == 0) {
    auVar23 = func_0x03280cac();
    uVar8 = auVar23._0_8_;
    if (auVar23._8_4_ == 1) {
      plVar6 = (long *)func_0x072ce910(uVar8);
      lVar15 = *plVar6;
      func_0x072ce920();
      func_0x051159b0(puVar4 + -0x68,*unaff_x22);
      if (lVar15 == 0) {
        iVar13 = 0;
        goto LAB_06b2d2c8;
      }
      uVar8 = func_0x03280ca4(lVar15);
    }
    else {
      lVar15 = 0;
    }
    func_0x051159b0(puVar4 + -0x68,*unaff_x22);
    if (lVar15 == 0) {
      func_0x03365958(uVar8);
    }
    func_0x03280ca4(lVar15);
    uVar5 = func_0x02f09514();
  }
  else {
    func_0x04145068(puVar4 + -0x68,lVar10,*(undefined8 *)PTR_DAT_0782f2b0);
    uVar5 = func_0x051159b4(puVar4 + -0x68,*(undefined8 *)puVar20);
    if ((uVar5 & 1) == 0) {
      iVar13 = 5;
      func_0x051159b0(puVar4 + -0x68,*(undefined8 *)puVar19);
LAB_06b2d2c8:
      return (ulong)(iVar13 != 4);
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar21);
  }
  return uVar5;
}


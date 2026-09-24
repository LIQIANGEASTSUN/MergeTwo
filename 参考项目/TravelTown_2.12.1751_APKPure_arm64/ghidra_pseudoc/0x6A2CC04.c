/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2CC04; MergeEngine.Configuration.Definitions.Reward.CompareItemBoxes; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__CompareItemBoxes
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x1;
  long lVar14;
  int iVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  code *unaff_x30;
  undefined1 auVar19 [12];
  
  puVar3 = PTR_DAT_0782f180;
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
  lVar7 = func_0x06b2aaec(param_1);
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_077e6f00;
  puVar1 = PTR_DAT_077e6778;
  lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x48);
  puVar17 = unaff_x22;
  if (lVar16 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar3;
    }
    puVar17 = (undefined8 *)**(undefined8 **)(lVar14 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(lVar16,puVar17,*(undefined8 *)PTR_DAT_0782f258,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
    *plVar8 = lVar16;
    func_0x032809c4(plVar8,lVar16);
  }
  uVar9 = func_0x03d872a8(lVar7,lVar16,*(undefined8 *)puVar1);
  lVar14 = func_0x03d5ffd0(uVar9,*(undefined8 *)puVar2);
  uVar9 = unaff_x23;
  puVar6 = unaff_x26;
  if (lVar14 == 0) {
LAB_06b2d15c:
    unaff_x26 = puVar6;
    unaff_x23 = uVar9;
    unaff_x22 = puVar17;
    unaff_x21 = lVar16;
    unaff_x20 = lVar7;
    unaff_x19 = param_2;
    unaff_x30 = MergeEngine_Configuration_Definitions_Reward__AreItemBoxesRefsEqual;
    func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    lVar11 = extraout_x1;
    unaff_x24 = puVar3;
    unaff_x25 = puVar1;
    unaff_x27 = puVar2;
  }
  else {
    if (*(int *)(lVar14 + 0x18) == 0) {
      return 1;
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar3;
    }
    lVar16 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar16 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar3;
      }
      uVar18 = **(undefined8 **)(lVar7 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar16,uVar18,*(undefined8 *)PTR_DAT_0782f260,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      *plVar8 = lVar16;
      func_0x032809c4(plVar8,lVar16);
    }
    lVar7 = func_0x03d872a8(lVar14,lVar16,*(undefined8 *)puVar1);
    lVar16 = *(long *)puVar3;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c(lVar16);
      lVar16 = *(long *)puVar3;
    }
    puVar6 = PTR_DAT_0782f240;
    puVar5 = PTR_DAT_0782f238;
    puVar4 = PTR_DAT_0782f230;
    puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xb8) + 0x58);
    if (puVar17 == (undefined8 *)0x0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar16 + 0xb8);
      puVar17 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(puVar17,uVar9,*(undefined8 *)PTR_DAT_0782f268,0);
      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      *puVar10 = puVar17;
      func_0x032809c4(puVar10,puVar17);
    }
    uVar18 = func_0x03d50a94(lVar7,puVar17,*(undefined8 *)puVar5);
    uVar18 = func_0x03d2c6a8(uVar18,*(undefined8 *)puVar4);
    lVar11 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar6);
    lVar16 = lVar14;
    if (param_2 == 0) goto LAB_06b2d15c;
    param_2 = func_0x06b2aaec(param_2);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar17 = *(undefined8 **)(*(long *)(lVar7 + 0xb8) + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
      puVar17 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(puVar17,uVar9,*(undefined8 *)PTR_DAT_0782f270,0);
      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
      *puVar10 = puVar17;
      func_0x032809c4(puVar10,puVar17);
    }
    uVar18 = func_0x03d872a8(param_2,puVar17,*(undefined8 *)puVar1);
    lVar12 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar2);
    lVar7 = lVar11;
    if (lVar12 == 0) goto LAB_06b2d15c;
    if (*(int *)(lVar14 + 0x18) != *(int *)(lVar12 + 0x18)) {
      return 0;
    }
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar14 = *(long *)puVar3;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x68);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar14 = *(long *)puVar3;
      }
      puVar17 = (undefined8 *)**(undefined8 **)(lVar14 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
      func_0x05355fbc(lVar16,puVar17,*(undefined8 *)PTR_DAT_0782f278,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      *plVar8 = lVar16;
      func_0x032809c4(plVar8,lVar16);
    }
    param_2 = func_0x03d872a8(lVar12,lVar16,*(undefined8 *)puVar1);
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar3;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        func_0x03280b8c(lVar14);
        lVar14 = *(long *)puVar3;
      }
      puVar17 = (undefined8 *)**(undefined8 **)(lVar14 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f248);
      func_0x053569b8(lVar16,puVar17,*(undefined8 *)PTR_DAT_0782f280,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
      *plVar8 = lVar16;
      func_0x032809c4(plVar8,lVar16);
    }
    uVar18 = func_0x03d50a94(param_2,lVar16,*(undefined8 *)puVar5);
    uVar18 = func_0x03d2c6a8(uVar18,*(undefined8 *)puVar4);
    lVar14 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar6);
    if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_06b2d15c;
    if (*(int *)(lVar11 + 0x18) != *(int *)(lVar14 + 0x18)) {
      return 0;
    }
  }
  *(code **)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long *)((long)register0x00000008 + -8) = unaff_x19;
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
  puVar2 = PTR_DAT_0782f2c0;
  puVar1 = PTR_DAT_0782f298;
  puVar3 = PTR_DAT_0782f290;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  if (lVar11 == 0) {
    auVar19 = func_0x03280cac();
    uVar9 = auVar19._0_8_;
    if (auVar19._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(uVar9);
      lVar7 = *plVar8;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x68),*unaff_x22);
      if (lVar7 == 0) {
        iVar15 = 0;
        goto LAB_06b2d2c8;
      }
      uVar9 = func_0x03280ca4(lVar7);
    }
    else {
      lVar7 = 0;
    }
    func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x68),*unaff_x22);
    if (lVar7 == 0) {
      func_0x03365958(uVar9);
    }
    func_0x03280ca4(lVar7);
    uVar13 = func_0x02f09514();
  }
  else {
    func_0x04145068((undefined1 *)((long)register0x00000008 + -0x68),lVar11,
                    *(undefined8 *)PTR_DAT_0782f2b0);
    uVar13 = func_0x051159b4((undefined1 *)((long)register0x00000008 + -0x68),*(undefined8 *)puVar1)
    ;
    if ((uVar13 & 1) == 0) {
      iVar15 = 5;
      func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x68),*(undefined8 *)puVar3);
LAB_06b2d2c8:
      return (ulong)(iVar15 != 4);
    }
    uVar13 = func_0x03280ca0(*(undefined8 *)puVar2);
  }
  return uVar13;
}


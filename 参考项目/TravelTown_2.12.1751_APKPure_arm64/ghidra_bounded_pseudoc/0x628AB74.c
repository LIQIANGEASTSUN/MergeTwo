/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628AB74; bound 124 bytes; MergeEngine.ECS.Systems.ItemConsumeSystem.GetConsumedItems; status ok */


/* WARNING: Possible PIC construction at 0x0638adb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638aff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0638adb4) */
/* WARNING: Removing unreachable block (ram,0x0638adb8) */
/* WARNING: Removing unreachable block (ram,0x0638add4) */
/* WARNING: Removing unreachable block (ram,0x0638ae38) */
/* WARNING: Removing unreachable block (ram,0x0638ae44) */
/* WARNING: Removing unreachable block (ram,0x0638ae20) */
/* WARNING: Removing unreachable block (ram,0x0638affc) */
/* WARNING: Removing unreachable block (ram,0x0638b004) */
/* WARNING: Removing unreachable block (ram,0x0638b020) */
/* WARNING: Removing unreachable block (ram,0x0638b028) */
/* WARNING: Removing unreachable block (ram,0x0638b050) */
/* WARNING: Removing unreachable block (ram,0x0638b034) */
/* WARNING: Removing unreachable block (ram,0x0638b040) */
/* WARNING: Removing unreachable block (ram,0x0638b060) */
/* WARNING: Removing unreachable block (ram,0x0638b074) */
/* WARNING: Removing unreachable block (ram,0x0638b0c4) */
/* WARNING: Removing unreachable block (ram,0x0638b0d8) */
/* WARNING: Removing unreachable block (ram,0x0638b0f0) */
/* WARNING: Removing unreachable block (ram,0x0638b0f8) */

long * MergeEngine_ECS_Systems_ItemConsumeSystem__GetConsumedItems(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  code *unaff_x30;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if (param_2 == 0) {
    func_0x03280cac();
LAB_0638abbc:
    func_0x03280a2c(PTR_DAT_077517e8);
    uVar9 = func_0x03280ca0();
    func_0x056ef4a8(uVar9,0);
    uVar10 = func_0x03280a2c(PTR_DAT_077e7560);
    auVar14 = func_0x03280b7c(uVar9,uVar10);
    unaff_x24 = PTR_DAT_077e7570;
    puVar4 = PTR_DAT_077e7568;
    unaff_x20 = auVar14._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
    if ((bRam0000000007e25503 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d75b8);
      func_0x03280a18(PTR_DAT_077e7578);
      func_0x03280a18(PTR_DAT_077e7580);
      func_0x03280a18(PTR_DAT_077e7588);
      func_0x03280a18(PTR_DAT_0777a7e8);
      func_0x03280a18(PTR_DAT_077e7568);
      func_0x03280a18(PTR_DAT_077e7590);
      func_0x03280a18(PTR_DAT_077e7598);
      func_0x03280a18(PTR_DAT_077e75a0);
      func_0x03280a18(PTR_DAT_077e75a8);
      func_0x03280a18(PTR_DAT_077e75b0);
      func_0x03280a18(PTR_DAT_077e7570);
      bRam0000000007e25503 = 1;
    }
    unaff_x21 = func_0x03eb6ac8(unaff_x20,*(undefined8 *)puVar4);
    lVar13 = *(long *)unaff_x24;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)unaff_x24;
    }
    unaff_x25 = PTR_DAT_077e7580;
    unaff_x22 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (unaff_x22 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c(lVar13);
        lVar13 = *(long *)unaff_x24;
      }
      unaff_x23 = **(undefined8 **)(lVar13 + 0xb8);
      unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7588);
      func_0x05355fbc(unaff_x22,unaff_x23,*(undefined8 *)PTR_DAT_077e75a0,0);
      plVar11 = (long *)(*(long *)(*(long *)unaff_x24 + 0xb8) + 8);
      *plVar11 = unaff_x22;
      func_0x032809c4(plVar11,unaff_x22);
    }
    func_0x03d872a8(unaff_x21,unaff_x22,*(undefined8 *)unaff_x25);
    if (auVar14._8_8_ != 0) {
      if (0 < *(int *)(auVar14._8_8_ + 0x18)) {
        plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e75b0);
        return plVar11;
      }
      return (long *)0x0;
    }
    func_0x03280cac();
    unaff_x30 = MergeEngine_ECS_Systems_ItemConsumeSystem__GetAnyConsumedItems;
    auVar14 = func_0x03280cb4();
    unaff_x19 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x55) == '\0') {
      return (long *)0x0;
    }
    iVar8 = *(int *)(param_2 + 0x6c);
    if (iVar8 == 3) {
LAB_0638ab9c:
      return *(long **)(param_2 + 0x58);
    }
    if (iVar8 != 1) {
      if (iVar8 == 0) goto LAB_0638ab9c;
      goto LAB_0638abbc;
    }
  }
  lVar13 = auVar14._8_8_;
  *(code **)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  if ((bRam0000000007e25502 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6758);
    func_0x03280a18(PTR_DAT_077cdb40);
    func_0x03280a18(PTR_DAT_077e6770);
    func_0x03280a18(PTR_DAT_077e6778);
    func_0x03280a18(PTR_DAT_077cdb48);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077e75b8);
    func_0x03280a18(PTR_DAT_077e75c0);
    func_0x03280a18(PTR_DAT_077e75c8);
    func_0x03280a18(PTR_DAT_077e75d0);
    bRam0000000007e25502 = 1;
  }
  puVar7 = PTR_DAT_077e75c0;
  puVar6 = PTR_DAT_077e75b8;
  puVar5 = PTR_DAT_077e6778;
  puVar4 = PTR_DAT_077e6770;
  if (lVar13 == 0) {
LAB_0638b1c4:
    func_0x03280cac();
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x58);
    uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(uVar9,auVar14._0_8_,*(undefined8 *)puVar6,0);
    uVar9 = func_0x03d872a8(uVar10,uVar9,*(undefined8 *)puVar5);
    lVar12 = func_0x03d5b8d8(uVar9,*(undefined8 *)puVar4);
    if (*(long *)(lVar13 + 0x38) != 0) {
      plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e75d0);
      return plVar11;
    }
    lVar13 = func_0x03ced81c(lVar13,*(undefined8 *)PTR_DAT_077e6758);
    if ((lVar13 == 0) || (iVar8 = func_0x069f7264(lVar13,0,0), lVar12 == 0)) goto LAB_0638b1c4;
    iVar1 = *(int *)(lVar12 + 0x18);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar8 / iVar1;
    }
    uVar2 = iVar8 - iVar3 * iVar1;
    func_0x069f7148(lVar13,0,0);
    plVar11 = (long *)func_0x03280afc(*(undefined8 *)puVar7,1);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      if (plVar11 == (long *)0x0) goto LAB_0638b1c4;
      lVar13 = *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      if ((lVar13 != 0) &&
         (lVar12 = func_0x03280b90(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_0638b1cc;
      if ((int)plVar11[3] != 0) {
        plVar11[4] = lVar13;
        func_0x032809c4(plVar11 + 4,lVar13);
        return plVar11;
      }
    }
  }
  func_0x03280cb4();
LAB_0638b1cc:
  uVar9 = func_0x03280cd0();
  plVar11 = (long *)func_0x03280b7c(uVar9,0);
  return plVar11;
}


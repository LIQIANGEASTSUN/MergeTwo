/* Ghidra 12.1.2 native pseudocode; RVA 0x628ABF0; MergeEngine.ECS.Systems.ItemConsumeSystem.TryFindPreferredItemFromHint; status ok */

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

long * MergeEngine_ECS_Systems_ItemConsumeSystem__TryFindPreferredItemFromHint
                 (undefined8 param_1,long param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar5 = PTR_DAT_077e7570;
  puVar4 = PTR_DAT_077e7568;
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
  uVar9 = func_0x03eb6ac8(param_1,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c(lVar11);
    lVar11 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_077e7580;
  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c(lVar11);
      lVar11 = *(long *)puVar5;
    }
    uVar13 = **(undefined8 **)(lVar11 + 0xb8);
    lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7588);
    func_0x05355fbc(lVar12,uVar13,*(undefined8 *)PTR_DAT_077e75a0,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar10 = lVar12;
    func_0x032809c4(plVar10,lVar12);
  }
  func_0x03d872a8(uVar9,lVar12,*(undefined8 *)puVar4);
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      plVar10 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e75b0);
      return plVar10;
    }
    return (long *)0x0;
  }
  func_0x03280cac();
  auVar14 = func_0x03280cb4();
  lVar11 = auVar14._8_8_;
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
  if (lVar11 == 0) {
LAB_0638b1c4:
    func_0x03280cac();
  }
  else {
    uVar13 = *(undefined8 *)(lVar11 + 0x58);
    uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(uVar9,auVar14._0_8_,*(undefined8 *)puVar6,0);
    uVar9 = func_0x03d872a8(uVar13,uVar9,*(undefined8 *)puVar5);
    lVar12 = func_0x03d5b8d8(uVar9,*(undefined8 *)puVar4);
    if (*(long *)(lVar11 + 0x38) != 0) {
      plVar10 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e75d0);
      return plVar10;
    }
    lVar11 = func_0x03ced81c(lVar11,*(undefined8 *)PTR_DAT_077e6758);
    if ((lVar11 == 0) || (iVar8 = func_0x069f7264(lVar11,0,0), lVar12 == 0)) goto LAB_0638b1c4;
    iVar1 = *(int *)(lVar12 + 0x18);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar8 / iVar1;
    }
    uVar2 = iVar8 - iVar3 * iVar1;
    func_0x069f7148(lVar11,0,0);
    plVar10 = (long *)func_0x03280afc(*(undefined8 *)puVar7,1);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      if (plVar10 == (long *)0x0) goto LAB_0638b1c4;
      lVar11 = *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      if ((lVar11 != 0) &&
         (lVar12 = func_0x03280b90(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
      goto LAB_0638b1cc;
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar11;
        func_0x032809c4(plVar10 + 4,lVar11);
        return plVar10;
      }
    }
  }
  func_0x03280cb4();
LAB_0638b1cc:
  uVar9 = func_0x03280cd0();
  plVar10 = (long *)func_0x03280b7c(uVar9,0);
  return plVar10;
}


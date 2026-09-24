/* Ghidra 12.1.2 native pseudocode; RVA 0x628AEC8; MergeEngine.ECS.Systems.ItemConsumeSystem.GetAnyConsumedItems; status ok */

/* WARNING: Possible PIC construction at 0x0638aff8: Changing call to branch */
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

long * MergeEngine_ECS_Systems_ItemConsumeSystem__GetAnyConsumedItems
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
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  
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
  if (param_2 == 0) {
LAB_0638b1c4:
    func_0x03280cac();
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + 0x58);
    uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdb48);
    func_0x05355fbc(uVar9,param_1,*(undefined8 *)puVar6,0);
    uVar9 = func_0x03d872a8(uVar13,uVar9,*(undefined8 *)puVar5);
    lVar10 = func_0x03d5b8d8(uVar9,*(undefined8 *)puVar4);
    if (*(long *)(param_2 + 0x38) != 0) {
      plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e75d0);
      return plVar11;
    }
    lVar12 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6758);
    if ((lVar12 == 0) || (iVar8 = func_0x069f7264(lVar12,0,0), lVar10 == 0)) goto LAB_0638b1c4;
    iVar1 = *(int *)(lVar10 + 0x18);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar8 / iVar1;
    }
    uVar2 = iVar8 - iVar3 * iVar1;
    func_0x069f7148(lVar12,0,0);
    plVar11 = (long *)func_0x03280afc(*(undefined8 *)puVar7,1);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      if (plVar11 == (long *)0x0) goto LAB_0638b1c4;
      lVar10 = *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      if ((lVar10 != 0) &&
         (lVar12 = func_0x03280b90(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_0638b1cc;
      if ((int)plVar11[3] != 0) {
        plVar11[4] = lVar10;
        func_0x032809c4(plVar11 + 4,lVar10);
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


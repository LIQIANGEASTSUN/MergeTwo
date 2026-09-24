/* Ghidra 12.1.2 native pseudocode; RVA 0x601193C; MergeEngine.Configuration.Capabilities.SpawningLane.GetSpawningList; status ok */


long MergeEngine_Configuration_Capabilities_SpawningLane__GetSpawningList(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000007e237e4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cf458);
    func_0x03280a18(PTR_DAT_077cf460);
    func_0x03280a18(PTR_DAT_077cf500);
    func_0x03280a18(PTR_DAT_077cf470);
    func_0x03280a18(PTR_DAT_0777ffe8);
    func_0x03280a18(PTR_DAT_077cf508);
    func_0x03280a18(PTR_DAT_077cf488);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_077cf600);
    func_0x03280a18(PTR_DAT_077cf608);
    func_0x03280a18(PTR_DAT_077cf610);
    bRam0000000007e237e4 = 1;
  }
  puVar5 = PTR_DAT_077cf610;
  plVar7 = (long *)(param_1 + 0x20);
  lVar8 = *plVar7;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    lVar8 = *(long *)PTR_DAT_077cf610;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar8 = *(long *)puVar5;
    }
    puVar1 = PTR_DAT_077cf470;
    lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar10 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar8 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
      lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf488);
      func_0x053569b8(lVar10,uVar11,*(undefined8 *)PTR_DAT_077cf600,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      *plVar6 = lVar10;
      func_0x032809c4(plVar6,lVar10);
    }
    uVar9 = func_0x03d50a94(uVar9,lVar10,*(undefined8 *)puVar1);
    lVar8 = *(long *)puVar5;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
      lVar8 = *(long *)puVar5;
    }
    puVar4 = PTR_DAT_077cf500;
    puVar3 = PTR_DAT_077cf460;
    puVar2 = PTR_DAT_077cf458;
    puVar1 = PTR_DAT_0777ffe8;
    lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar10 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c(lVar8);
        lVar8 = *(long *)puVar5;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf508);
      func_0x053569b8(lVar10,uVar12,*(undefined8 *)PTR_DAT_077cf608,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar6 = lVar10;
      func_0x032809c4(plVar6,lVar10);
    }
    uVar11 = func_0x03d50a94(uVar11,lVar10,*(undefined8 *)puVar4);
    uVar9 = func_0x03d37218(uVar9,uVar11,*(undefined8 *)puVar2);
    uVar9 = func_0x03d3c654(uVar9,*(undefined8 *)puVar3);
    lVar8 = func_0x03d5ffd0(uVar9,*(undefined8 *)puVar1);
    *plVar7 = lVar8;
    func_0x032809c4(plVar7,lVar8);
  }
  return lVar8;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A848D8; Merger.MergeBoard.Logic.ToolSpawnHandler.GetToolSpawnPriorityStrategy; status ok */


long Merger_MergeBoard_Logic_ToolSpawnHandler__GetToolSpawnPriorityStrategy
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar4 = PTR_DAT_07831bf0;
  puVar3 = PTR_DAT_07831bb0;
  if ((bRam0000000007e2a77f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831bf8);
    func_0x03280a18(PTR_DAT_078149e8);
    func_0x03280a18(PTR_DAT_07831c00);
    func_0x03280a18(PTR_DAT_07831c08);
    func_0x03280a18(PTR_DAT_077800b8);
    func_0x03280a18(PTR_DAT_07831c10);
    func_0x03280a18(PTR_DAT_0777c2e0);
    func_0x03280a18(PTR_DAT_07831c18);
    func_0x03280a18(PTR_DAT_07831c20);
    func_0x03280a18(PTR_DAT_07831c28);
    func_0x03280a18(PTR_DAT_07831c30);
    func_0x03280a18(PTR_DAT_07831bf0);
    func_0x03280a18(PTR_DAT_07831bb0);
    bRam0000000007e2a77f = 1;
  }
  lVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06b84fb0(lVar8,0);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar9 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_07831c00;
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c10);
    func_0x0534bcd8(lVar11,uVar12,*(undefined8 *)PTR_DAT_07831c18,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    *plVar10 = lVar11;
    func_0x032809c4(plVar10,lVar11);
  }
  uVar12 = func_0x03d85660(param_2,lVar11,*(undefined8 *)puVar4);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c(lVar9);
    lVar9 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_07831bf8;
  puVar4 = PTR_DAT_078149e8;
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c(lVar9);
      lVar9 = *(long *)puVar3;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c08);
    func_0x0534bef4(lVar11,uVar13,*(undefined8 *)PTR_DAT_07831c20,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
    *plVar10 = lVar11;
    func_0x032809c4(plVar10,lVar11);
  }
  uVar12 = func_0x03d4c5c8(uVar12,lVar11,*(undefined8 *)puVar5);
  lVar9 = func_0x03d5fe5c(uVar12,*(undefined8 *)puVar4);
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 0x10);
    *plVar10 = lVar9;
    func_0x032809c4(plVar10,lVar9);
    puVar3 = PTR_DAT_07831c30;
    puVar1 = (undefined8 *)PTR_DAT_07831c28;
    if (*plVar10 != 0) {
      iVar2 = *(int *)(*plVar10 + 0x18);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800b8);
      if (1 < iVar2) {
        puVar1 = (undefined8 *)puVar3;
      }
      func_0x0535aa98(lVar9,lVar8,*puVar1,0);
      return lVar9;
    }
  }
  lVar8 = func_0x03280cac();
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar4 = PTR_DAT_07780128;
  puVar3 = PTR_DAT_07780120;
  if ((bRam0000000007e2a780 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e2a780 = 1;
  }
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar12,0);
  *(undefined8 *)(lVar8 + 0x68) = uVar12;
  func_0x032809c4((undefined8 *)(lVar8 + 0x68),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar12,*(undefined8 *)puVar4);
  *(undefined8 *)(lVar8 + 0x70) = uVar12;
  func_0x032809c4((undefined8 *)(lVar8 + 0x70),uVar12);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar12,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar8 + 0x78) = uVar12;
  func_0x032809c4((undefined8 *)(lVar8 + 0x78),uVar12);
  return lVar8;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6010F44; MergeEngine.Configuration.Capabilities.ItemsSpawningCapability.GetItemPoolWithSpawnCounts; status ok */


long MergeEngine_Configuration_Capabilities_ItemsSpawningCapability__GetItemPoolWithSpawnCounts
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((bRam0000000007e237de & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cf568);
    func_0x03280a18(PTR_DAT_077cf570);
    func_0x03280a18(PTR_DAT_077cf578);
    func_0x03280a18(PTR_DAT_077cf580);
    func_0x03280a18(PTR_DAT_077cf588);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_077cf590);
    func_0x03280a18(PTR_DAT_077cf598);
    func_0x03280a18(PTR_DAT_077cf5a0);
    func_0x03280a18(PTR_DAT_077cf5a8);
    func_0x03280a18(PTR_DAT_077cf5b0);
    func_0x03280a18(PTR_DAT_077cf5b8);
    func_0x03280a18(PTR_DAT_077cf548);
    bRam0000000007e237de = 1;
  }
  puVar1 = PTR_DAT_077cf548;
  plVar12 = (long *)(param_1 + 0x40);
  lVar10 = *plVar12;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    lVar10 = *(long *)PTR_DAT_077cf548;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar1;
    }
    puVar3 = PTR_DAT_077cf580;
    puVar2 = PTR_DAT_077cf570;
    lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
    if (lVar14 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar1;
      }
      uVar16 = **(undefined8 **)(lVar10 + 0xb8);
      lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf590);
      func_0x05354f08(lVar14,uVar16,*(undefined8 *)PTR_DAT_077cf5a8,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      *plVar11 = lVar14;
      func_0x032809c4(plVar11,lVar14);
    }
    uVar13 = func_0x03d4f2f4(uVar13,lVar14,*(undefined8 *)puVar2);
    uVar13 = func_0x03d5f984(uVar13,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    func_0x032809c4(plVar12,uVar13);
    lVar10 = *(long *)puVar1;
    lVar14 = *(long *)(param_1 + 0x40);
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_077cf568;
    lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x48);
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar1;
      }
      uVar16 = **(undefined8 **)(lVar10 + 0xb8);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
      func_0x05356664(lVar15,uVar16,*(undefined8 *)PTR_DAT_077cf5b0,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
      *plVar11 = lVar15;
      func_0x032809c4(plVar11,lVar15);
    }
    uVar13 = func_0x03d4b77c(uVar13,lVar15,*(undefined8 *)puVar2);
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c(lVar10);
      lVar10 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_077cf578;
    lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c(lVar10);
        lVar10 = *(long *)puVar1;
      }
      uVar16 = **(undefined8 **)(lVar10 + 0xb8);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf588);
      func_0x05354f08(lVar15,uVar16,*(undefined8 *)PTR_DAT_077cf5b8,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      *plVar11 = lVar15;
      func_0x032809c4(plVar11,lVar15);
    }
    uVar13 = func_0x03d4f2f4(uVar13,lVar15,*(undefined8 *)puVar2);
    if (lVar14 == 0) {
      lVar10 = func_0x03280cac();
      puVar9 = PTR_DAT_077cf5e8;
      puVar8 = PTR_DAT_077cf5e0;
      puVar7 = PTR_DAT_077cf5d8;
      puVar6 = PTR_DAT_077cf5d0;
      puVar5 = PTR_DAT_077cf5c8;
      puVar4 = PTR_DAT_077cf5c0;
      puVar3 = PTR_DAT_077cf4f0;
      puVar2 = PTR_DAT_077cf4d0;
      puVar1 = PTR_DAT_077cf4c8;
      if ((bRam0000000007e237df & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cf5e8);
        func_0x03280a18(PTR_DAT_077cf5c8);
        func_0x03280a18(PTR_DAT_077cf4e8);
        func_0x03280a18(PTR_DAT_077cf4c8);
        func_0x03280a18(PTR_DAT_077cf5d8);
        func_0x03280a18(PTR_DAT_077cf5e0);
        func_0x03280a18(PTR_DAT_077cf5c0);
        func_0x03280a18(PTR_DAT_077cf5d0);
        func_0x03280a18(PTR_DAT_077cf4d0);
        func_0x03280a18(PTR_DAT_077cf4f0);
        bRam0000000007e237df = 1;
      }
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x04143c38(uVar13,*(undefined8 *)puVar1);
      *(undefined8 *)(lVar10 + 0x48) = uVar13;
      func_0x032809c4((undefined8 *)(lVar10 + 0x48),uVar13);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(uVar13,*(undefined8 *)puVar5);
      *(undefined8 *)(lVar10 + 0x50) = uVar13;
      func_0x032809c4((undefined8 *)(lVar10 + 0x50),uVar13);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar6);
      func_0x04143c38(uVar13,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar10 + 0x58) = uVar13;
      func_0x032809c4((undefined8 *)(lVar10 + 0x58),uVar13);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar8);
      func_0x04143c38(uVar13,*(undefined8 *)puVar9);
      *(undefined8 *)(lVar10 + 0x60) = uVar13;
      func_0x032809c4((undefined8 *)(lVar10 + 0x60),uVar13);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04143c38(uVar13,*(undefined8 *)PTR_DAT_077cf4e8);
      *(undefined8 *)(lVar10 + 0x68) = uVar13;
      func_0x032809c4((undefined8 *)(lVar10 + 0x68),uVar13);
      *(undefined8 *)(lVar10 + 0x1c) = 0x100000001;
      *(undefined8 *)(lVar10 + 0x14) = 0x100000001;
      *(undefined4 *)(lVar10 + 0x24) = 1;
      return lVar10;
    }
    func_0x05515098(lVar14,uVar13,*(undefined8 *)PTR_DAT_077cf598);
    lVar10 = *plVar12;
  }
  return lVar10;
}


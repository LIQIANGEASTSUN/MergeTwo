/* Ghidra 12.1.2 native pseudocode; RVA 0x6011BAC; MergeEngine.Configuration.Capabilities.SpawningLane.GetItemPoolWithSpawnCounts; status ok */


long MergeEngine_Configuration_Capabilities_SpawningLane__GetItemPoolWithSpawnCounts(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000007e237e5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cf568);
    func_0x03280a18(PTR_DAT_077cf570);
    func_0x03280a18(PTR_DAT_077cf578);
    func_0x03280a18(PTR_DAT_077cf580);
    func_0x03280a18(PTR_DAT_077cf588);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_077cf590);
    func_0x03280a18(PTR_DAT_077cf598);
    func_0x03280a18(PTR_DAT_077cf5a0);
    func_0x03280a18(PTR_DAT_077cf618);
    func_0x03280a18(PTR_DAT_077cf620);
    func_0x03280a18(PTR_DAT_077cf628);
    func_0x03280a18(PTR_DAT_077cf610);
    bRam0000000007e237e5 = 1;
  }
  puVar3 = PTR_DAT_077cf610;
  plVar6 = (long *)(param_1 + 0x28);
  lVar4 = *plVar6;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = *(long *)PTR_DAT_077cf610;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_077cf580;
    puVar1 = PTR_DAT_077cf570;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar4 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf590);
      func_0x05354f08(lVar8,uVar10,*(undefined8 *)PTR_DAT_077cf618,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar5 = lVar8;
      func_0x032809c4(plVar5,lVar8);
    }
    uVar7 = func_0x03d4f2f4(uVar7,lVar8,*(undefined8 *)puVar1);
    uVar7 = func_0x03d5f984(uVar7,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    func_0x032809c4(plVar6,uVar7);
    lVar4 = *(long *)puVar3;
    lVar8 = *(long *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_077cf568;
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar4 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
      func_0x05356664(lVar9,uVar10,*(undefined8 *)PTR_DAT_077cf620,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
      *plVar5 = lVar9;
      func_0x032809c4(plVar5,lVar9);
    }
    uVar7 = func_0x03d4b77c(uVar7,lVar9,*(undefined8 *)puVar1);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c(lVar4);
      lVar4 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_077cf578;
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c(lVar4);
        lVar4 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf588);
      func_0x05354f08(lVar9,uVar10,*(undefined8 *)PTR_DAT_077cf628,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
      *plVar5 = lVar9;
      func_0x032809c4(plVar5,lVar9);
    }
    uVar7 = func_0x03d4f2f4(uVar7,lVar9,*(undefined8 *)puVar1);
    if (lVar8 == 0) {
      lVar4 = func_0x03280cac();
      return lVar4;
    }
    func_0x05515098(lVar8,uVar7,*(undefined8 *)PTR_DAT_077cf598);
    lVar4 = *plVar6;
  }
  return lVar4;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2BBF0; MergeEngine.Configuration.Definitions.Reward.Clone; status ok */


undefined8 MergeEngine_Configuration_Definitions_Reward__Clone(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000007e2a457 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f198);
    func_0x03280a18(PTR_DAT_0782f1a0);
    func_0x03280a18(PTR_DAT_0782f1a8);
    func_0x03280a18(PTR_DAT_077e5c60);
    func_0x03280a18(PTR_DAT_0782f1b0);
    func_0x03280a18(PTR_DAT_0782f1b8);
    func_0x03280a18(PTR_DAT_077751d8);
    func_0x03280a18(PTR_DAT_0782f1c0);
    func_0x03280a18(PTR_DAT_0782f1c8);
    func_0x03280a18(PTR_DAT_0782f180);
    bRam0000000007e2a457 = 1;
  }
  puVar2 = PTR_DAT_0782f180;
  lVar8 = *(long *)(param_1 + 0x18);
  uVar10 = 0;
  if (lVar8 != 0) {
    lVar5 = *(long *)PTR_DAT_0782f180;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_0782f1a0;
    puVar1 = PTR_DAT_077e5c60;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar5 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f1b8);
      func_0x053569b8(lVar9,uVar10,*(undefined8 *)PTR_DAT_0782f1c0,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar6 = lVar9;
      func_0x032809c4(plVar6,lVar9);
    }
    uVar10 = func_0x03d50a94(lVar8,lVar9,*(undefined8 *)puVar3);
    uVar10 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar1);
  }
  puVar1 = PTR_DAT_077751d8;
  lVar8 = *(long *)(param_1 + 0x10);
  uVar11 = 0;
  if (lVar8 != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_0782f1a8;
    puVar3 = PTR_DAT_0782f198;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar5 = *(long *)puVar2;
      }
      uVar11 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782f1b0);
      func_0x053569b8(lVar9,uVar11,*(undefined8 *)PTR_DAT_0782f1c8,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar6 = lVar9;
      func_0x032809c4(plVar6,lVar9);
    }
    uVar11 = func_0x03d50a94(lVar8,lVar9,*(undefined8 *)puVar3);
    uVar11 = func_0x03d5ffd0(uVar11,*(undefined8 *)puVar4);
  }
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x06b24c88(uVar7,uVar10,uVar11);
  return uVar7;
}


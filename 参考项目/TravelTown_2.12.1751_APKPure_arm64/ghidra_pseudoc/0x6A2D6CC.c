/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2D6CC; MergeEngine.Configuration.Definitions.Reward.CloneAndRemoveEventXP; status ok */


long MergeEngine_Configuration_Definitions_Reward__CloneAndRemoveEventXP(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000007e2a464 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077801f0);
    func_0x03280a18(PTR_DAT_0782f2d8);
    func_0x03280a18(PTR_DAT_077801f8);
    func_0x03280a18(PTR_DAT_077ceff8);
    func_0x03280a18(PTR_DAT_0782f2e0);
    func_0x03280a18(PTR_DAT_0782f2e8);
    func_0x03280a18(PTR_DAT_0782f180);
    bRam0000000007e2a464 = 1;
  }
  lVar2 = MergeEngine_Configuration_Definitions_Reward__Clone(param_1);
  puVar1 = PTR_DAT_0782f180;
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x18);
    lVar3 = *(long *)PTR_DAT_0782f180;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar3 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x78);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077801f8);
      func_0x0445dd5c(lVar6,uVar7,*(undefined8 *)PTR_DAT_0782f2e0,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
      *plVar4 = lVar6;
      func_0x032809c4(plVar4,lVar6);
    }
    if (lVar5 != 0) {
      func_0x04145c2c(lVar5,lVar6,*(undefined8 *)PTR_DAT_077801f0);
      lVar3 = func_0x06b2aaa0(lVar2);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c(lVar5);
        lVar5 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c(lVar5);
          lVar5 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077ceff8);
        func_0x0445dd5c(lVar6,uVar7,*(undefined8 *)PTR_DAT_0782f2e8,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
        *plVar4 = lVar6;
        func_0x032809c4(plVar4,lVar6);
      }
      if (lVar3 != 0) {
        func_0x04145c2c(lVar3,lVar6,*(undefined8 *)PTR_DAT_0782f2d8);
        return lVar2;
      }
    }
  }
  lVar2 = func_0x03280cac();
  return lVar2;
}


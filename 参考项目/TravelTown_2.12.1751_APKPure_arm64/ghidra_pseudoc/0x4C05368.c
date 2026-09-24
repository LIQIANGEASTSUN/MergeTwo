/* Ghidra 12.1.2 native pseudocode; RVA 0x4C05368; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>..ctor; status ok */


undefined1  [16] MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____ctor(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar4 = PTR_DAT_07780128;
  puVar3 = PTR_DAT_07780120;
  puVar2 = PTR_DAT_0777ebc8;
  puVar1 = PTR_DAT_0777ebb0;
  if ((bRam0000000007e1ae7e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_0777ebb0);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_0777ebc8);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e1ae7e = 1;
  }
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fb4e7c(uVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  func_0x032809c4((undefined8 *)(param_1 + 0x78),uVar8);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar8,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  func_0x032809c4((undefined8 *)(param_1 + 0x80),uVar8);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04f2ad28(uVar8,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  func_0x032809c4((undefined8 *)(param_1 + 0x88),uVar8);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar8,0);
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  func_0x032809c4((undefined8 *)(param_1 + 0x90),uVar8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1;
  return auVar9;
}


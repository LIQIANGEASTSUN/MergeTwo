/* Ghidra 12.1.2 native pseudocode; RVA 0x6794798; MergeEngine.ECS.Systems.Items.TimeLimitedActivationSystem.OnWillProcessComponents; status ok */


long MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__OnWillProcessComponents
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_078105b8;
  if ((bRam0000000007e28d7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_078105b8);
    bRam0000000007e28d7c = 1;
  }
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = func_0x057de4c8(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  func_0x032809c4((undefined8 *)(lVar3 + 0x30),param_2);
  return lVar3;
}


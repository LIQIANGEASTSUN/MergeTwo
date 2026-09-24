/* Ghidra 12.1.2 native pseudocode; RVA 0x5393940; MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<TCapability>..ctor; status ok */


void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability____ctor
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_0774e650;
  if ((bRam0000000007e1c3a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_07782d28);
    bRam0000000007e1c3a4 = 1;
  }
  puVar3 = PTR_DAT_07782d28;
  uStack_38 = 0;
  func_0x046f0664(param_1,param_2,param_3,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uStack_38 = func_0x05776944(0);
  uVar4 = func_0x057749c4(&uStack_38,0);
  *(uint *)(param_1 + 0x78) = uVar4 & 0xffff;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x060e89c8(uVar5,param_2,iVar1 + (uVar4 & 0xffff),0,0);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  func_0x032809c4((undefined8 *)(param_1 + 0x80),uVar5);
  return;
}


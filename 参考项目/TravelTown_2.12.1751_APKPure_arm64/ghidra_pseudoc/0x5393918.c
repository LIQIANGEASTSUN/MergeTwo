/* Ghidra 12.1.2 native pseudocode; RVA 0x5393918; MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<TCapability>.get_SkipCooldownSettings; status ok */


undefined8
MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability___get_SkipCooldownSettings
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    }
    return uVar5;
  }
  auVar7 = func_0x03280cac();
  puVar2 = PTR_DAT_0774e650;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000007e1c3a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_07782d28);
    bRam0000000007e1c3a4 = 1;
  }
  puVar3 = PTR_DAT_07782d28;
  uStack_48 = 0;
  func_0x046f0664(lVar6,auVar7._8_8_,param_3,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uStack_48 = func_0x05776944(0);
  uVar4 = func_0x057749c4(&uStack_48,0);
  *(uint *)(lVar6 + 0x78) = uVar4 & 0xffff;
  iVar1 = *(int *)(lVar6 + 0x68);
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x060e89c8(uVar5,auVar7._8_8_,iVar1 + (uVar4 & 0xffff),0,0);
  *(undefined8 *)(lVar6 + 0x80) = uVar5;
  uVar5 = func_0x032809c4((undefined8 *)(lVar6 + 0x80),uVar5);
  return uVar5;
}


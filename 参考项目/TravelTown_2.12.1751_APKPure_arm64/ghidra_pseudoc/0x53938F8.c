/* Ghidra 12.1.2 native pseudocode; RVA 0x53938F8; MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<TCapability>.get_ConsumedItemsDependant; status ok */


ulong MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability___get_ConsumedItemsDependant
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    return (ulong)*(byte *)(*(long *)(param_1 + 0x20) + 0x31);
  }
  lVar5 = func_0x03280cac();
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x20) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(*(long *)(lVar5 + 0x20) + 0x70);
    }
    return uVar6;
  }
  auVar8 = func_0x03280cac();
  puVar2 = PTR_DAT_0774e650;
  lVar5 = auVar8._0_8_;
  if ((bRam0000000007e1c3a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_07782d28);
    bRam0000000007e1c3a4 = 1;
  }
  puVar3 = PTR_DAT_07782d28;
  uStack_58 = 0;
  func_0x046f0664(lVar5,auVar8._8_8_,param_3,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uStack_58 = func_0x05776944(0);
  uVar4 = func_0x057749c4(&uStack_58,0);
  *(uint *)(lVar5 + 0x78) = uVar4 & 0xffff;
  iVar1 = *(int *)(lVar5 + 0x68);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x060e89c8(uVar7,auVar8._8_8_,iVar1 + (uVar4 & 0xffff),0,0);
  *(undefined8 *)(lVar5 + 0x80) = uVar7;
  uVar6 = func_0x032809c4((undefined8 *)(lVar5 + 0x80),uVar7);
  return uVar6;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x68FBBE4; MergeEngine.ECS.Components.Items.CollectableComponent.get_CollectableReward; status ok */


ulong MergeEngine_ECS_Components_Items_CollectableComponent__get_CollectableReward(long param_1)

{
  long lVar1;
  
  if ((bRam0000000007e29891 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826650);
    bRam0000000007e29891 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar1 != 0)) {
    return *(ulong *)(lVar1 + 0x18);
  }
  lVar1 = func_0x03280cac();
  if ((bRam0000000007e29892 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826650);
    bRam0000000007e29892 = 1;
  }
  if ((*(long *)(lVar1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x20), lVar1 != 0)) {
    return (ulong)(*(int *)(lVar1 + 0x14) != 0);
  }
  lVar1 = func_0x03280cac();
  if ((bRam0000000007e29893 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826650);
    bRam0000000007e29893 = 1;
  }
  if ((*(long *)(lVar1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x20), lVar1 != 0)) {
    return (ulong)(*(int *)(lVar1 + 0x14) == 2);
  }
  lVar1 = func_0x03280cac();
  return (ulong)*(byte *)(lVar1 + 0x44);
}


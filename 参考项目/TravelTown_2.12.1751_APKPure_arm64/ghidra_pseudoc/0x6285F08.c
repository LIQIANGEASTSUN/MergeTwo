/* Ghidra 12.1.2 native pseudocode; RVA 0x6285F08; MergeEngine.ECS.Systems.InventorySystem.GetStackSizeIfStacking; status ok */

undefined8
MergeEngine_ECS_Systems_InventorySystem__GetStackSizeIfStacking
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000007e254df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a948);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e254df = 1;
  }
  uVar1 = func_0x06b1d910(param_2,0);
  if (((((uVar1 & 1) == 0) && (uVar1 = func_0x06b1d9c4(param_2,0), (uVar1 & 1) == 0)) ||
      (param_3 == 0)) ||
     (lVar2 = func_0x03d20d84(param_3,*(undefined8 *)PTR_DAT_0777a948), lVar2 == 0)) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = 0;
    func_0x0437b6e0(&uStack_28,*(undefined4 *)(lVar2 + 0x28),*(undefined8 *)PTR_DAT_07750da0);
  }
  return uStack_28;
}


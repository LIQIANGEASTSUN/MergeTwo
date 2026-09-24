/* Ghidra 12.1.2 native pseudocode; RVA 0x6288768; MergeEngine.ECS.Systems.InventorySystem.GetSlotId; status ok */

undefined8 MergeEngine_ECS_Systems_InventorySystem__GetSlotId(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((param_2 == 0) || (lVar3 = *(long *)(param_2 + 0x20), lVar3 == 0)) goto LAB_063887c0;
  if (*(long *)(lVar3 + 0xa8) != 0) {
    uVar1 = func_0x055f7aac(*(undefined8 *)(*(long *)(lVar3 + 0xa8) + 0x18),0);
    lVar3 = *(long *)(param_2 + 0x20);
    if ((uVar1 & 1) == 0) {
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) goto LAB_063887c0;
      puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xa8) + 0x18);
      goto LAB_063887b4;
    }
    if (lVar3 == 0) {
LAB_063887c0:
      uVar2 = func_0x03280cac();
      return uVar2;
    }
  }
  puVar4 = (undefined8 *)(lVar3 + 0x10);
LAB_063887b4:
  return *puVar4;
}


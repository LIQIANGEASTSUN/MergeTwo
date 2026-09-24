/* Ghidra 12.1.2 native pseudocode; RVA 0x679E3DC; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelProduceStrategyBase.get_InventorySystem; status ok */


long MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelProduceStrategyBase__get_InventorySystem
               (long param_1)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000007e28dce & 1) == 0) {
    func_0x03280a18(PTR_DAT_078067d0);
    bRam0000000007e28dce = 1;
  }
  plVar3 = (long *)(param_1 + 0x38);
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 == (long *)0x0) {
      lVar5 = func_0x03280cac();
      return lVar5;
    }
    lVar5 = *plVar4;
    lVar6 = *(long *)PTR_DAT_078067d0;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar2 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_0689e478;
        }
        uVar1 = uVar1 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar1 != 0);
    }
    lVar5 = func_0x03256b10(plVar4);
LAB_0689e478:
    lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar6);
    lVar5 = (**(code **)(lVar5 + 8))(plVar4,lVar5);
    *plVar3 = lVar5;
    func_0x032809c4(plVar3,lVar5);
  }
  return lVar5;
}


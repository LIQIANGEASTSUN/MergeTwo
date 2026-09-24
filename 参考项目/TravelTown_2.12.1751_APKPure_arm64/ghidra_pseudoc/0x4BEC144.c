/* Ghidra 12.1.2 native pseudocode; RVA 0x4BEC144; MergeEngine.ECS.Components.BaseIdComponent<TCapability>.get_Id; status ok */


/* WARNING: Possible PIC construction at 0x04e5f384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e5f388) */

undefined8 *
MergeEngine_ECS_Components_BaseIdComponent_TCapability___get_Id
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    return *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
  }
  lVar4 = func_0x03280cac();
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
    return *(undefined8 **)(*(long *)(lVar4 + 0x20) + 0x18);
  }
  auVar6 = func_0x03280cac();
  func_0x069f7118(auVar6._0_8_,param_3,0,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  puVar5 = (undefined8 *)(auVar6._0_8_ + 0x20);
  *puVar5 = auVar6._8_8_;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar5;
}


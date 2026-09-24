/* Ghidra 12.1.2 native pseudocode; RVA 0x4BEC164; MergeEngine.ECS.Components.BaseIdComponent<TCapability>.get_UUId; status ok */


/* WARNING: Possible PIC construction at 0x04e5f384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e5f388) */

undefined1  [16]
MergeEngine_ECS_Components_BaseIdComponent_TCapability___get_UUId
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    auVar4._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    auVar4._8_8_ = param_2;
    return auVar4;
  }
  auVar5 = func_0x03280cac();
  func_0x069f7118(auVar5._0_8_,param_3,0,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  auVar5._0_8_ = (undefined8 *)(auVar5._0_8_ + 0x20);
  *auVar5._0_8_ = auVar5._8_8_;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)auVar5._0_8_ >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)auVar5._0_8_ >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return auVar5;
}


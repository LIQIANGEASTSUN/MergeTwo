/* Ghidra 12.1.2 native pseudocode; RVA 0x4BEC184; MergeEngine.ECS.Components.BaseIdComponent<TCapability>..ctor; status ok */


/* WARNING: Possible PIC construction at 0x04e5f384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e5f388) */

void MergeEngine_ECS_Components_BaseIdComponent_TCapability____ctor
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  func_0x069f7118(param_1,param_3,0,
                  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


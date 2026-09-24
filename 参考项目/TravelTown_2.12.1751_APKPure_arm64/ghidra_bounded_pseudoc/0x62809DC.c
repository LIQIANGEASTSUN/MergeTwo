/* Ghidra 12.1.2 bounded pseudocode; RVA 0x62809DC; bound 96 bytes; MergeEngine.ECS.Systems.InteractionSystem.OnItemsConsumed; status ok */


/* WARNING: Possible PIC construction at 0x063809f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x063809f8) */
/* WARNING: Removing unreachable block (ram,0x06380a30) */
/* WARNING: Removing unreachable block (ram,0x06380a00) */

undefined1  [16]
MergeEngine_ECS_Systems_InteractionSystem__OnItemsConsumed(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
    auVar6._0_8_ = (undefined8 *)(param_2 + 0x28);
    *auVar6._0_8_ = 0;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)auVar6._0_8_ >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)auVar6._0_8_ >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auVar6._8_8_ = 0;
    return auVar6;
  }
  auVar7._0_8_ = func_0x03280cac();
  puVar4 = PTR_DAT_077e6f58;
  if ((bRam0000000007e254b8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6f58);
    bRam0000000007e254b8 = 1;
  }
  uVar5 = *(undefined8 *)puVar4;
  auVar7._8_8_ = 0;
  return auVar7;
}


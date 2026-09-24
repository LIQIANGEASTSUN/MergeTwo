/* Ghidra 12.1.2 native pseudocode; RVA 0x690165C; MergeEngine.ECS.Components.InteractionTracking.InteractionTrackingComponent.ResetData; status ok */


/* WARNING: Possible PIC construction at 0x06a01694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a016b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a016e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a016e4) */
/* WARNING: Removing unreachable block (ram,0x06a016ec) */
/* WARNING: Removing unreachable block (ram,0x06a01700) */
/* WARNING: Removing unreachable block (ram,0x06a016bc) */
/* WARNING: Removing unreachable block (ram,0x06a016c4) */
/* WARNING: Removing unreachable block (ram,0x06a016d8) */
/* WARNING: Removing unreachable block (ram,0x06a01698) */
/* WARNING: Removing unreachable block (ram,0x06a016b0) */
/* WARNING: Removing unreachable block (ram,0x06a0170c) */
/* WARNING: Removing unreachable block (ram,0x06a01754) */
/* WARNING: Removing unreachable block (ram,0x06a01774) */
/* WARNING: Removing unreachable block (ram,0x06a01788) */
/* WARNING: Removing unreachable block (ram,0x06a0178c) */
/* WARNING: Removing unreachable block (ram,0x06a01794) */
/* WARNING: Removing unreachable block (ram,0x06a017a4) */
/* WARNING: Removing unreachable block (ram,0x06a017c0) */
/* WARNING: Removing unreachable block (ram,0x06a017c8) */
/* WARNING: Removing unreachable block (ram,0x06a017f0) */
/* WARNING: Removing unreachable block (ram,0x06a017d4) */
/* WARNING: Removing unreachable block (ram,0x06a017e0) */
/* WARNING: Removing unreachable block (ram,0x06a01800) */
/* WARNING: Removing unreachable block (ram,0x06a01888) */
/* WARNING: Removing unreachable block (ram,0x06a018ac) */
/* WARNING: Removing unreachable block (ram,0x06a018d8) */
/* WARNING: Removing unreachable block (ram,0x06a0193c) */
/* WARNING: Removing unreachable block (ram,0x06a0195c) */
/* WARNING: Removing unreachable block (ram,0x06a01970) */
/* WARNING: Removing unreachable block (ram,0x06a01974) */
/* WARNING: Removing unreachable block (ram,0x06a0197c) */
/* WARNING: Removing unreachable block (ram,0x06a01a0c) */
/* WARNING: Removing unreachable block (ram,0x06a01a2c) */
/* WARNING: Removing unreachable block (ram,0x06a01a40) */
/* WARNING: Removing unreachable block (ram,0x06a01990) */
/* WARNING: Removing unreachable block (ram,0x06a019ac) */
/* WARNING: Removing unreachable block (ram,0x06a019b4) */
/* WARNING: Removing unreachable block (ram,0x06a019dc) */
/* WARNING: Removing unreachable block (ram,0x06a019c0) */
/* WARNING: Removing unreachable block (ram,0x06a019cc) */
/* WARNING: Removing unreachable block (ram,0x06a019e8) */
/* WARNING: Removing unreachable block (ram,0x055ea870) */
/* WARNING: Removing unreachable block (ram,0x055f6d18) */
/* WARNING: Removing unreachable block (ram,0x055f6d50) */
/* WARNING: Removing unreachable block (ram,0x055f6d20) */
/* WARNING: Removing unreachable block (ram,0x055f6d28) */
/* WARNING: Removing unreachable block (ram,0x055f6d2c) */
/* WARNING: Removing unreachable block (ram,0x055f6d58) */
/* WARNING: Removing unreachable block (ram,0x055f6d5c) */
/* WARNING: Removing unreachable block (ram,0x055f6d3c) */
/* WARNING: Removing unreachable block (ram,0x057aa5e0) */
/* WARNING: Removing unreachable block (ram,0x057aa5f8) */
/* WARNING: Removing unreachable block (ram,0x057aa698) */
/* WARNING: Removing unreachable block (ram,0x057aa70c) */
/* WARNING: Removing unreachable block (ram,0x057aa6bc) */
/* WARNING: Removing unreachable block (ram,0x057aa6d0) */
/* WARNING: Removing unreachable block (ram,0x057aa708) */
/* WARNING: Removing unreachable block (ram,0x057aa634) */
/* WARNING: Removing unreachable block (ram,0x057aa648) */
/* WARNING: Removing unreachable block (ram,0x057aa728) */
/* WARNING: Removing unreachable block (ram,0x057f2848) */
/* WARNING: Removing unreachable block (ram,0x057aa668) */
/* WARNING: Removing unreachable block (ram,0x057aa748) */
/* WARNING: Removing unreachable block (ram,0x057aa710) */
/* WARNING: Removing unreachable block (ram,0x057aa67c) */
/* WARNING: Removing unreachable block (ram,0x06a018dc) */
/* WARNING: Removing unreachable block (ram,0x06a01814) */
/* WARNING: Removing unreachable block (ram,0x06a01828) */
/* WARNING: Removing unreachable block (ram,0x06a01830) */
/* WARNING: Removing unreachable block (ram,0x06a01858) */
/* WARNING: Removing unreachable block (ram,0x06a0183c) */
/* WARNING: Removing unreachable block (ram,0x06a01848) */
/* WARNING: Removing unreachable block (ram,0x06a01868) */
/* WARNING: Removing unreachable block (ram,0x06a01714) */

void MergeEngine_ECS_Components_InteractionTracking_InteractionTrackingComponent__ResetData
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000007e298ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826860);
    bRam0000000007e298ed = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = 0;
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


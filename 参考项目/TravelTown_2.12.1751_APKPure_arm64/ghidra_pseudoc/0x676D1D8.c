/* Ghidra 12.1.2 native pseudocode; RVA 0x676D1D8; Merger.Game.Signal.VerifyBoardMergeSignal..ctor; status ok */


/* WARNING: Possible PIC construction at 0x0686d228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0686d248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0686d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0686d24c) */
/* WARNING: Removing unreachable block (ram,0x0686d22c) */
/* WARNING: Removing unreachable block (ram,0x0686d26c) */

void Merger_Game_Signal_VerifyBoardMergeSignal___ctor
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  func_0x057da5fc(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
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


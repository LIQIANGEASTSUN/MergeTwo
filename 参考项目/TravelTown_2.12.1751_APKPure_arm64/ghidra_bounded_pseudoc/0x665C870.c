/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665C870; bound 252 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.DeselectItem; status ok */


/* WARNING: Possible PIC construction at 0x0675c8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cb54) */
/* WARNING: Removing unreachable block (ram,0x0675cb60) */
/* WARNING: Removing unreachable block (ram,0x0675c8dc) */
/* WARNING: Removing unreachable block (ram,0x0675c8e4) */
/* WARNING: Removing unreachable block (ram,0x0675c968) */
/* WARNING: Removing unreachable block (ram,0x0675c988) */
/* WARNING: Removing unreachable block (ram,0x0675c99c) */
/* WARNING: Removing unreachable block (ram,0x0675c9dc) */
/* WARNING: Removing unreachable block (ram,0x0675ca04) */
/* WARNING: Removing unreachable block (ram,0x0675ca48) */
/* WARNING: Removing unreachable block (ram,0x0675ca50) */
/* WARNING: Removing unreachable block (ram,0x0675ca60) */
/* WARNING: Removing unreachable block (ram,0x0675cad8) */
/* WARNING: Removing unreachable block (ram,0x0675caf8) */
/* WARNING: Removing unreachable block (ram,0x0675cb14) */
/* WARNING: Removing unreachable block (ram,0x0675cafc) */
/* WARNING: Removing unreachable block (ram,0x0675caec) */
/* WARNING: Removing unreachable block (ram,0x0675cb0c) */
/* WARNING: Removing unreachable block (ram,0x0675caf4) */
/* WARNING: Removing unreachable block (ram,0x0675cb1c) */
/* WARNING: Removing unreachable block (ram,0x0675cb20) */
/* WARNING: Removing unreachable block (ram,0x0675cb68) */
/* WARNING: Removing unreachable block (ram,0x0675cb6c) */
/* WARNING: Removing unreachable block (ram,0x0675cb74) */
/* WARNING: Removing unreachable block (ram,0x0675cb7c) */
/* WARNING: Removing unreachable block (ram,0x0675cb98) */
/* WARNING: Removing unreachable block (ram,0x0675cba0) */
/* WARNING: Removing unreachable block (ram,0x0675cb8c) */
/* WARNING: Removing unreachable block (ram,0x0675cb90) */
/* WARNING: Removing unreachable block (ram,0x0675cb2c) */
/* WARNING: Removing unreachable block (ram,0x0675cb30) */
/* WARNING: Removing unreachable block (ram,0x0675cbb4) */
/* WARNING: Removing unreachable block (ram,0x0675cb3c) */
/* WARNING: Removing unreachable block (ram,0x0675cb40) */
/* WARNING: Removing unreachable block (ram,0x0675cbb8) */
/* WARNING: Removing unreachable block (ram,0x0675cbd0) */
/* WARNING: Removing unreachable block (ram,0x0675cbd8) */
/* WARNING: Removing unreachable block (ram,0x0675cbf0) */
/* WARNING: Removing unreachable block (ram,0x0675c9a0) */
/* WARNING: Removing unreachable block (ram,0x0675c9cc) */
/* WARNING: Removing unreachable block (ram,0x0675c9c0) */
/* WARNING: Removing unreachable block (ram,0x0675c8fc) */
/* WARNING: Removing unreachable block (ram,0x0675c914) */
/* WARNING: Removing unreachable block (ram,0x0675c91c) */
/* WARNING: Removing unreachable block (ram,0x0675c944) */
/* WARNING: Removing unreachable block (ram,0x0675c928) */
/* WARNING: Removing unreachable block (ram,0x0675c934) */
/* WARNING: Removing unreachable block (ram,0x0675c954) */
/* WARNING: Removing unreachable block (ram,0x0675c8b8) */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000007e2807a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_078079b8);
    bRam0000000007e2807a = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x60);
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


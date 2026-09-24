/* Ghidra 12.1.2 native pseudocode; RVA 0x67878C4; MergeEngine.ECS.Systems.Board.UnboxingSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x06887988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068879a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06887a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068879a8) */
/* WARNING: Removing unreachable block (ram,0x068879cc) */
/* WARNING: Removing unreachable block (ram,0x06887a78) */
/* WARNING: Removing unreachable block (ram,0x06887ac0) */
/* WARNING: Removing unreachable block (ram,0x06887b34) */
/* WARNING: Removing unreachable block (ram,0x06887b44) */
/* WARNING: Removing unreachable block (ram,0x06887b58) */
/* WARNING: Removing unreachable block (ram,0x06887b90) */
/* WARNING: Removing unreachable block (ram,0x06887db0) */
/* WARNING: Removing unreachable block (ram,0x06887ba0) */
/* WARNING: Removing unreachable block (ram,0x06887df0) */
/* WARNING: Removing unreachable block (ram,0x06887ba8) */
/* WARNING: Removing unreachable block (ram,0x06887bbc) */
/* WARNING: Removing unreachable block (ram,0x06887df4) */
/* WARNING: Removing unreachable block (ram,0x06887bd4) */
/* WARNING: Removing unreachable block (ram,0x06887be4) */
/* WARNING: Removing unreachable block (ram,0x06887df8) */
/* WARNING: Removing unreachable block (ram,0x06887bec) */
/* WARNING: Removing unreachable block (ram,0x06887bf8) */
/* WARNING: Removing unreachable block (ram,0x06887c00) */
/* WARNING: Removing unreachable block (ram,0x06887c08) */
/* WARNING: Removing unreachable block (ram,0x06887c38) */
/* WARNING: Removing unreachable block (ram,0x06887c58) */
/* WARNING: Removing unreachable block (ram,0x06887c60) */
/* WARNING: Removing unreachable block (ram,0x06887c88) */
/* WARNING: Removing unreachable block (ram,0x06887c6c) */
/* WARNING: Removing unreachable block (ram,0x06887c78) */
/* WARNING: Removing unreachable block (ram,0x06887c94) */
/* WARNING: Removing unreachable block (ram,0x06887ca4) */
/* WARNING: Removing unreachable block (ram,0x06887cc0) */
/* WARNING: Removing unreachable block (ram,0x06887cc8) */
/* WARNING: Removing unreachable block (ram,0x06887cf0) */
/* WARNING: Removing unreachable block (ram,0x06887cd4) */
/* WARNING: Removing unreachable block (ram,0x06887ce0) */
/* WARNING: Removing unreachable block (ram,0x06887cfc) */
/* WARNING: Removing unreachable block (ram,0x06887dfc) */
/* WARNING: Removing unreachable block (ram,0x06887e00) */
/* WARNING: Removing unreachable block (ram,0x06887e04) */
/* WARNING: Removing unreachable block (ram,0x06887e08) */
/* WARNING: Removing unreachable block (ram,0x06887e0c) */
/* WARNING: Removing unreachable block (ram,0x06887e54) */
/* WARNING: Removing unreachable block (ram,0x06887e60) */
/* WARNING: Removing unreachable block (ram,0x06887dc4) */
/* WARNING: Removing unreachable block (ram,0x06887e88) */
/* WARNING: Removing unreachable block (ram,0x06887e90) */
/* WARNING: Removing unreachable block (ram,0x06887e9c) */
/* WARNING: Removing unreachable block (ram,0x06887eb4) */
/* WARNING: Removing unreachable block (ram,0x06887ebc) */
/* WARNING: Removing unreachable block (ram,0x06887d88) */
/* WARNING: Removing unreachable block (ram,0x06887da0) */
/* WARNING: Removing unreachable block (ram,0x06887a10) */
/* WARNING: Removing unreachable block (ram,0x0688798c) */
/* WARNING: Removing unreachable block (ram,0x06887a4c) */

void MergeEngine_ECS_Systems_Board_UnboxingSystem__InitializeSystem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_07807948;
  if ((bRam0000000007e28d21 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1518);
    func_0x03280a18(PTR_DAT_077e6e68);
    func_0x03280a18(PTR_DAT_077f1ac0);
    func_0x03280a18(PTR_DAT_07800b50);
    func_0x03280a18(PTR_DAT_07807940);
    func_0x03280a18(PTR_DAT_07807948);
    func_0x03280a18(PTR_DAT_07810198);
    func_0x03280a18(PTR_DAT_07810190);
    bRam0000000007e28d21 = 1;
  }
  uVar5 = func_0x03eb6c18(param_1,*(undefined8 *)puVar4);
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *puVar6 = uVar5;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


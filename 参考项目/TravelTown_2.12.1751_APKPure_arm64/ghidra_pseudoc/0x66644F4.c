/* Ghidra 12.1.2 native pseudocode; RVA 0x66644F4; MergeEngine.ECS.Systems.Board.BoardQueueSystem.TryDequeueRewardItem; status ok */

/* WARNING: Possible PIC construction at 0x067645d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067645d4) */
/* WARNING: Removing unreachable block (ram,0x067645d8) */
/* WARNING: Removing unreachable block (ram,0x067645f8) */
/* WARNING: Removing unreachable block (ram,0x06764664) */
/* WARNING: Removing unreachable block (ram,0x06764670) */
/* WARNING: Removing unreachable block (ram,0x0676468c) */
/* WARNING: Removing unreachable block (ram,0x06764694) */
/* WARNING: Removing unreachable block (ram,0x067646a0) */
/* WARNING: Removing unreachable block (ram,0x067646e8) */
/* WARNING: Removing unreachable block (ram,0x06764708) */
/* WARNING: Removing unreachable block (ram,0x06764724) */
/* WARNING: Removing unreachable block (ram,0x0676472c) */
/* WARNING: Removing unreachable block (ram,0x06764754) */
/* WARNING: Removing unreachable block (ram,0x06764738) */
/* WARNING: Removing unreachable block (ram,0x06764744) */
/* WARNING: Removing unreachable block (ram,0x06764764) */
/* WARNING: Removing unreachable block (ram,0x06764774) */
/* WARNING: Removing unreachable block (ram,0x0676477c) */
/* WARNING: Removing unreachable block (ram,0x06764784) */
/* WARNING: Removing unreachable block (ram,0x0676478c) */
/* WARNING: Removing unreachable block (ram,0x0676479c) */
/* WARNING: Removing unreachable block (ram,0x067647a4) */
/* WARNING: Removing unreachable block (ram,0x067647cc) */
/* WARNING: Removing unreachable block (ram,0x067647b0) */
/* WARNING: Removing unreachable block (ram,0x067647bc) */
/* WARNING: Removing unreachable block (ram,0x067647dc) */
/* WARNING: Removing unreachable block (ram,0x06764844) */
/* WARNING: Removing unreachable block (ram,0x067647ec) */
/* WARNING: Removing unreachable block (ram,0x067647f0) */
/* WARNING: Removing unreachable block (ram,0x0676484c) */
/* WARNING: Removing unreachable block (ram,0x067647f4) */
/* WARNING: Removing unreachable block (ram,0x06764828) */
/* WARNING: Removing unreachable block (ram,0x06764874) */
/* WARNING: Removing unreachable block (ram,0x06764830) */
/* WARNING: Removing unreachable block (ram,0x06764850) */

void MergeEngine_ECS_Systems_Board_BoardQueueSystem__TryDequeueRewardItem(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07807c48;
  if ((bRam0000000007e280aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807c50);
    func_0x03280a18(PTR_DAT_07807c58);
    func_0x03280a18(PTR_DAT_07807c60);
    func_0x03280a18(PTR_DAT_07807c68);
    func_0x03280a18(PTR_DAT_07807c70);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_07807c78);
    func_0x03280a18(PTR_DAT_07807c80);
    func_0x03280a18(PTR_DAT_07807c48);
    func_0x03280a18(PTR_DAT_07807c88);
    bRam0000000007e280aa = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


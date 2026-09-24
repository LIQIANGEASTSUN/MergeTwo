/* Ghidra 12.1.2 native pseudocode; RVA 0x6660D5C; MergeEngine.ECS.Systems.Board.BoardItemConsumerSystem.ConsumeItem; status ok */

/* WARNING: Possible PIC construction at 0x06760dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067610bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06760dd4) */
/* WARNING: Removing unreachable block (ram,0x06760dd8) */
/* WARNING: Removing unreachable block (ram,0x06760df4) */
/* WARNING: Removing unreachable block (ram,0x06760dfc) */
/* WARNING: Removing unreachable block (ram,0x06760e74) */
/* WARNING: Removing unreachable block (ram,0x06760e14) */
/* WARNING: Removing unreachable block (ram,0x06760e80) */
/* WARNING: Removing unreachable block (ram,0x06760eb8) */
/* WARNING: Removing unreachable block (ram,0x06760ed8) */
/* WARNING: Removing unreachable block (ram,0x06760ee4) */
/* WARNING: Removing unreachable block (ram,0x06760eec) */
/* WARNING: Removing unreachable block (ram,0x06760f04) */
/* WARNING: Removing unreachable block (ram,0x06760f1c) */
/* WARNING: Removing unreachable block (ram,0x06760f4c) */
/* WARNING: Removing unreachable block (ram,0x06760f54) */
/* WARNING: Removing unreachable block (ram,0x06760f7c) */
/* WARNING: Removing unreachable block (ram,0x06760f60) */
/* WARNING: Removing unreachable block (ram,0x06760f6c) */
/* WARNING: Removing unreachable block (ram,0x06760f8c) */
/* WARNING: Removing unreachable block (ram,0x06760ff4) */
/* WARNING: Removing unreachable block (ram,0x06761030) */
/* WARNING: Removing unreachable block (ram,0x067610a4) */
/* WARNING: Removing unreachable block (ram,0x06760fb8) */
/* WARNING: Removing unreachable block (ram,0x067610c0) */
/* WARNING: Removing unreachable block (ram,0x067610c4) */
/* WARNING: Removing unreachable block (ram,0x06761128) */
/* WARNING: Removing unreachable block (ram,0x06761134) */
/* WARNING: Removing unreachable block (ram,0x06761248) */
/* WARNING: Removing unreachable block (ram,0x06761250) */
/* WARNING: Removing unreachable block (ram,0x06761258) */
/* WARNING: Removing unreachable block (ram,0x06761154) */
/* WARNING: Removing unreachable block (ram,0x0676115c) */
/* WARNING: Removing unreachable block (ram,0x067611a0) */
/* WARNING: Removing unreachable block (ram,0x0676121c) */
/* WARNING: Removing unreachable block (ram,0x067611b0) */
/* WARNING: Removing unreachable block (ram,0x067611b8) */
/* WARNING: Removing unreachable block (ram,0x067611e8) */
/* WARNING: Removing unreachable block (ram,0x0676126c) */
/* WARNING: Removing unreachable block (ram,0x06761270) */
/* WARNING: Removing unreachable block (ram,0x06761274) */
/* WARNING: Removing unreachable block (ram,0x06761278) */
/* WARNING: Removing unreachable block (ram,0x06761298) */
/* WARNING: Removing unreachable block (ram,0x067612a4) */
/* WARNING: Removing unreachable block (ram,0x06761228) */
/* WARNING: Removing unreachable block (ram,0x067612c4) */
/* WARNING: Removing unreachable block (ram,0x067612cc) */
/* WARNING: Removing unreachable block (ram,0x067612d8) */
/* WARNING: Removing unreachable block (ram,0x067612e8) */
/* WARNING: Removing unreachable block (ram,0x067612f0) */
/* WARNING: Removing unreachable block (ram,0x06761204) */

void MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__ConsumeItem(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07807ad8;
  if ((bRam0000000007e28093 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0776bc20);
    func_0x03280a18(PTR_DAT_07807ae0);
    func_0x03280a18(PTR_DAT_07807ad8);
    bRam0000000007e28093 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


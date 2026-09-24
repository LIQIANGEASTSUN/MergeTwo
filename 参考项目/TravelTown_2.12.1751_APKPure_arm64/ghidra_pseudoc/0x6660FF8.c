/* Ghidra 12.1.2 native pseudocode; RVA 0x6660FF8; MergeEngine.ECS.Systems.Board.BoardItemConsumerSystem.ConsumeMultipleItems; status ok */

/* WARNING: Possible PIC construction at 0x067610bc: Changing call to branch */
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

void MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__ConsumeMultipleItems(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07807af0;
  if ((bRam0000000007e28094 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077f1be0);
    func_0x03280a18(PTR_DAT_077f1be8);
    func_0x03280a18(PTR_DAT_07807638);
    func_0x03280a18(PTR_DAT_07807640);
    func_0x03280a18(PTR_DAT_07807648);
    func_0x03280a18(PTR_DAT_07807650);
    func_0x03280a18(PTR_DAT_0777e4f0);
    func_0x03280a18(PTR_DAT_07807af0);
    bRam0000000007e28094 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x666D630; MergeEngine.ECS.Systems.Board.ItemCountSystem.GetItemCountById; status ok */


/* WARNING: Possible PIC construction at 0x0676d6b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d6b4) */
/* WARNING: Removing unreachable block (ram,0x0676d728) */
/* WARNING: Removing unreachable block (ram,0x0676d6b8) */

void MergeEngine_ECS_Systems_Board_ItemCountSystem__GetItemCountById(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07808080;
  if ((bRam0000000007e28108 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808088);
    func_0x03280a18(PTR_DAT_07808090);
    func_0x03280a18(PTR_DAT_07808098);
    func_0x03280a18(PTR_DAT_078080a0);
    func_0x03280a18(PTR_DAT_07808080);
    bRam0000000007e28108 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


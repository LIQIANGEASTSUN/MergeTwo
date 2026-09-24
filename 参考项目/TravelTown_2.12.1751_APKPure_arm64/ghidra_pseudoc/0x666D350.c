/* Ghidra 12.1.2 native pseudocode; RVA 0x666D350; MergeEngine.ECS.Systems.Board.ItemCountSystem.OnItemCountChanged; status ok */


/* WARNING: Possible PIC construction at 0x0676d3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d3d0) */
/* WARNING: Removing unreachable block (ram,0x0676d3d4) */
/* WARNING: Removing unreachable block (ram,0x0676d400) */
/* WARNING: Removing unreachable block (ram,0x0676d414) */
/* WARNING: Removing unreachable block (ram,0x0676d4b4) */
/* WARNING: Removing unreachable block (ram,0x0676d430) */
/* WARNING: Removing unreachable block (ram,0x0676d48c) */
/* WARNING: Removing unreachable block (ram,0x0676d490) */
/* WARNING: Removing unreachable block (ram,0x069aa540) */
/* WARNING: Removing unreachable block (ram,0x069aa574) */
/* WARNING: Removing unreachable block (ram,0x069aa5b8) */
/* WARNING: Removing unreachable block (ram,0x069aa5cc) */
/* WARNING: Removing unreachable block (ram,0x069aa5d0) */
/* WARNING: Removing unreachable block (ram,0x069aa644) */
/* WARNING: Removing unreachable block (ram,0x069aa650) */
/* WARNING: Removing unreachable block (ram,0x069aa690) */
/* WARNING: Removing unreachable block (ram,0x069aa65c) */

void MergeEngine_ECS_Systems_Board_ItemCountSystem__OnItemCountChanged(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07808068;
  if ((bRam0000000007e28105 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771708);
    func_0x03280a18(PTR_DAT_0777da58);
    func_0x03280a18(PTR_DAT_077f1c68);
    func_0x03280a18(PTR_DAT_07808070);
    func_0x03280a18(PTR_DAT_07808068);
    bRam0000000007e28105 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


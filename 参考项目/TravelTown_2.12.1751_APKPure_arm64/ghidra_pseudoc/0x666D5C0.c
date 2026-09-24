/* Ghidra 12.1.2 native pseudocode; RVA 0x666D5C0; MergeEngine.ECS.Systems.Board.ItemCountSystem.GetItemCount; status ok */


/* WARNING: Possible PIC construction at 0x0676d6b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d6b4) */
/* WARNING: Removing unreachable block (ram,0x0676d728) */
/* WARNING: Removing unreachable block (ram,0x0676d6b8) */

ulong MergeEngine_ECS_Systems_Board_ItemCountSystem__GetItemCount(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uStack_24;
  
  if ((bRam0000000007e28107 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808078);
    bRam0000000007e28107 = 1;
  }
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x04fb40cc(*(long *)(param_1 + 0x50),param_2,&uStack_24,*(undefined8 *)PTR_DAT_07808078);
    return (ulong)uStack_24;
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07808080;
  if ((bRam0000000007e28108 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808088);
    func_0x03280a18(PTR_DAT_07808090);
    func_0x03280a18(PTR_DAT_07808098);
    func_0x03280a18(PTR_DAT_078080a0);
    func_0x03280a18(PTR_DAT_07808080);
    bRam0000000007e28108 = 1;
  }
  uVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
  return uVar2;
}


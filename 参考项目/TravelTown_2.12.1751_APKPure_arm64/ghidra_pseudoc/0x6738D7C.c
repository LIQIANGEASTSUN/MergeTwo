/* Ghidra 12.1.2 native pseudocode; RVA 0x6738D7C; Merger.Game.Views.BoardItem.ViewBehaviours.LockBehaviour.OnDispose; status ok */


void Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__OnDispose(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e289e9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289e9 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fdd8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fdd8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  if (pcRam0000000007e2fdd0 == (code *)0x0) {
    pcRam0000000007e2fdd0 = (code *)func_0x032809dc(&UNK_017a679f);
  }
                    /* WARNING: Could not recover jumptable at 0x06fe423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000007e2fdd0)(0,uVar2);
  return;
}


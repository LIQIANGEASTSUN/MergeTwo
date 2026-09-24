/* Ghidra 12.1.2 native pseudocode; RVA 0x4C189DC; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>..ctor; status ok */


undefined1  [16]
Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel____ctor
          (ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x68418F4; Merger.Services.User.Data.Profile.Game.StartingBoard.StartingBoard.GetBoardItems; status ok */


long Merger_Services_User_Data_Profile_Game_StartingBoard_StartingBoard__GetBoardItems(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = Merger_Services_User_Data_Profile_Game_StartingBoard_StartingBoard__CreateBoardItems();
    *(long *)(param_1 + 0x20) = lVar1;
    func_0x032809c4((long *)(param_1 + 0x20),lVar1);
  }
  return lVar1;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6841B00; Merger.Services.User.Data.Profile.Game.StartingBoard.StartingBoardCell.ToMergeBoardItem; status ok */


long Merger_Services_User_Data_Profile_Game_StartingBoard_StartingBoardCell__ToMergeBoardItem
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = PTR_DAT_07816e88;
  if ((bRam0000000007e29396 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c8);
    func_0x03280a18(PTR_DAT_07816e88);
    bRam0000000007e29396 = 1;
  }
  lVar8 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06112134(lVar8,0);
  puVar7 = PTR_DAT_0777e5c8;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    func_0x032809c4();
    uVar5 = *(undefined1 *)(param_1 + 0x18);
    uVar6 = *(undefined1 *)(param_1 + 0x19);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar7);
    func_0x061117cc(uVar9,uVar5,uVar6,uVar3,0,uVar1,uVar2,uVar4,0);
    *(undefined8 *)(lVar8 + 0x10) = uVar9;
    func_0x032809c4((undefined8 *)(lVar8 + 0x10),uVar9);
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    func_0x032809c4();
    return lVar8;
  }
  lVar8 = func_0x03280cac();
  return lVar8;
}


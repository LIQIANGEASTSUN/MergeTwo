/* Ghidra 12.1.2 native pseudocode; RVA 0x6841934; Merger.Services.User.Data.Profile.Game.StartingBoard.StartingBoard.CreateBoardItems; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Merger_Services_User_Data_Profile_Game_StartingBoard_StartingBoard__CreateBoardItems
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_07816e78;
  if ((bRam0000000007e29395 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07816e80);
    func_0x03280a18(PTR_DAT_07816e78);
    bRam0000000007e29395 = 1;
  }
  puVar2 = PTR_DAT_07816e80;
  uStack_48 = _UNK_017befb8;
  uStack_50 = _UNK_017befb0;
  lVar3 = func_0x03280b04(*(undefined8 *)puVar1,&uStack_50);
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = lVar3;
  func_0x032809c4(plVar7,lVar3);
  uVar5 = 0;
  do {
    uVar8 = 0;
    do {
      if (((*(long *)(param_1 + 0x10) == 0) ||
          (lVar3 = func_0x0414419c(*(long *)(param_1 + 0x10),uVar8 & 0xffffffff,
                                   *(undefined8 *)puVar2), lVar3 == 0)) ||
         (lVar3 = func_0x06941ac0(), lVar3 == 0)) goto LAB_06941a6c;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto SUB_057da5fc;
      if (*(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20) == 0) {
LAB_06941a6c:
        func_0x03280cac();
SUB_057da5fc:
        lVar3 = func_0x03280cb4();
        return lVar3;
      }
      lVar3 = *plVar7;
      uVar4 = func_0x06941b00();
      if (lVar3 == 0) goto LAB_06941a6c;
      if ((**(uint **)(lVar3 + 0x10) <= uVar8) ||
         (lVar6 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (uint)lVar6 <= uVar5)) goto SUB_057da5fc;
      *(undefined8 *)(lVar3 + ((long)(int)uVar5 + lVar6 * uVar8) * 8 + 0x20) = uVar4;
      func_0x032809c4();
      uVar8 = uVar8 + 1;
    } while (uVar8 != 9);
    uVar5 = uVar5 + 1;
    if (uVar5 == 7) {
      return *plVar7;
    }
  } while( true );
}


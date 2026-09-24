/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3AB08; Merger.MergeBoard.View.MergeBoardView.Merger.MergeBoard.Logic.IBoardControllerPostTickProcessor.Process; status ok */


ulong Merger_MergeBoard_View_MergeBoardView__Merger_MergeBoard_Logic_IBoardControllerPostTickProcessor_Process
                (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar2 = func_0x06fdbed0(param_1,0);
  if (lVar2 == 0) {
    auVar6 = func_0x03280cac();
    puVar1 = PTR_DAT_0782f768;
    if ((bRam0000000007e2a4f8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f768);
      bRam0000000007e2a4f8 = 1;
    }
    uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x057da5fc(uVar3,0);
    *(undefined4 *)(uVar3 + 0x10) = 0;
    *(undefined8 *)(uVar3 + 0x20) = auVar6._0_8_;
    func_0x032809c4((undefined8 *)(uVar3 + 0x20),auVar6._0_8_);
    *(undefined8 *)(uVar3 + 0x28) = auVar6._8_8_;
    func_0x032809c4((undefined8 *)(uVar3 + 0x28),auVar6._8_8_);
    return uVar3;
  }
  uVar3 = func_0x06fdf2ec(lVar2,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = Merger_MergeBoard_View_MergeBoardView__HandleBoardResult(param_1,param_2);
    if (lVar2 == 0) {
      func_0x03280a2c(PTR_DAT_0775baa8,0,0);
      uVar4 = func_0x03280ca0();
      uVar5 = func_0x03280a2c(PTR_DAT_0784dc28);
      func_0x05798c04(uVar4,uVar5,0);
    }
    else {
      if (pcRam0000000007e2fd10 == (code *)0x0) {
        pcRam0000000007e2fd10 = (code *)func_0x032809dc(&UNK_01794efd);
      }
      uVar3 = (*pcRam0000000007e2fd10)(param_1);
      if ((uVar3 & 1) != 0) {
        if (pcRam0000000007e2fd20 == (code *)0x0) {
          pcRam0000000007e2fd20 = (code *)func_0x032809dc(&UNK_017a2983);
        }
                    /* WARNING: Could not recover jumptable at 0x06fe0c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000007e2fd20)(param_1,lVar2);
        return uVar3;
      }
      func_0x03280a2c(PTR_DAT_0774e6e8);
      uVar4 = func_0x03280ca0();
      uVar5 = func_0x03280a2c(PTR_DAT_0784dc18);
      func_0x056ede60(uVar4,uVar5,0);
    }
    uVar5 = func_0x03280a2c(PTR_DAT_0784dc30);
    auVar6 = func_0x03280b7c(uVar4,uVar5);
    if (pcRam0000000007e2fd20 == (code *)0x0) {
      pcRam0000000007e2fd20 = (code *)func_0x032809dc(&UNK_017a2983);
    }
                    /* WARNING: Could not recover jumptable at 0x06fe0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000007e2fd20)(auVar6._0_8_,auVar6._8_8_);
    return uVar3;
  }
  return uVar3;
}


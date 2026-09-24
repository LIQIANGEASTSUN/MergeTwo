/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85074; Merger.MergeBoard.Logic.State.Updaters.BoxComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_BoxComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((param_3 != 0) && (lVar1 = *(long *)(param_3 + 0x60), lVar1 != 0)) {
    *param_2 = *(undefined1 *)(lVar1 + 0x10);
    auVar5 = *(undefined1 (*) [16])(lVar1 + 0x4c);
    auVar6 = NEON_ext(auVar5,auVar5,8,1);
    auVar2._4_12_ = auVar5._4_12_;
    auVar2._0_4_ = auVar5._8_4_;
    auVar4._0_8_ = auVar2._0_8_;
    auVar4._8_4_ = auVar5._12_4_;
    auVar4._12_4_ = auVar5._12_4_;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._4_4_ = auVar6._8_4_;
    auVar3._0_4_ = auVar5._8_4_;
    auVar5._0_12_ = auVar3._0_12_;
    auVar5._12_4_ = auVar6._12_4_;
    auVar5 = NEON_ext(auVar5,auVar5,0xc,1);
    *(long *)(param_2 + 0xc) = auVar5._8_8_;
    *(long *)(param_2 + 4) = auVar5._0_8_;
  }
  return;
}


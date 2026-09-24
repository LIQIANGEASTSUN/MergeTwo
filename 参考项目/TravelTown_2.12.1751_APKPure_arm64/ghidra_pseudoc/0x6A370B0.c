/* Ghidra 12.1.2 native pseudocode; RVA 0x6A370B0; Merger.MergeBoard.View.MergeBoardContentView.Awake; status ok */


/* WARNING: Possible PIC construction at 0x06b37140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b37144) */
/* WARNING: Removing unreachable block (ram,0x06b3714c) */
/* WARNING: Removing unreachable block (ram,0x06b37158) */

undefined8
Merger_MergeBoard_View_MergeBoardContentView__Awake
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  
  if ((*(long *)(param_3 + 0x28) != 0) &&
     (lVar2 = func_0x069aaf28(*(long *)(param_3 + 0x28),0), lVar2 != 0)) {
    uVar4 = func_0x06fe9764(lVar2,0);
    *(undefined4 *)(param_3 + 0x38) = uVar4;
    *(undefined4 *)(param_3 + 0x3c) = param_2;
    if ((*(long *)(param_3 + 0x30) != 0) &&
       (lVar2 = func_0x069aaf28(*(long *)(param_3 + 0x30),0), lVar2 != 0)) {
      uVar3 = func_0x06fe9764(lVar2,0);
      *(undefined4 *)(param_3 + 0x40) = extraout_s0;
      *(undefined4 *)(param_3 + 0x44) = param_2;
      return uVar3;
    }
  }
  lVar2 = func_0x03280cac();
  *(undefined4 *)(lVar2 + 0x48) = extraout_s0_00;
  *(undefined4 *)(lVar2 + 0x4c) = param_2;
  if ((*(long *)(lVar2 + 0x28) != 0) &&
     (lVar2 = func_0x069aaf28(*(long *)(lVar2 + 0x28),0), lVar2 != 0)) {
    if (pcRam0000000007e30288 == (code *)0x0) {
      pcRam0000000007e30288 = (code *)func_0x032809dc(&UNK_0178a23a,0);
    }
    uVar3 = (*pcRam0000000007e30288)(lVar2,&stack0xffffffffffffffb8);
    return uVar3;
  }
  uVar3 = func_0x03280cac();
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return uVar3;
}


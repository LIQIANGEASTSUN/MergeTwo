/* Ghidra 12.1.2 native pseudocode; RVA 0x6A38AB4; Merger.MergeBoard.View.MergeBoardView.ResetBoardPosition; status ok */


/* WARNING: Possible PIC construction at 0x06b37140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b37144) */
/* WARNING: Removing unreachable block (ram,0x06b3714c) */
/* WARNING: Removing unreachable block (ram,0x06b37158) */

long Merger_MergeBoard_View_MergeBoardView__ResetBoardPosition(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    return param_1;
  }
  if (cRam0000000007e136dc == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e136dc = '\x01';
  }
  uVar3 = (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1];
  *(undefined4 *)(lVar2 + 0x48) = **(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8);
  *(undefined4 *)(lVar2 + 0x4c) = uVar3;
  if ((*(long *)(lVar2 + 0x28) != 0) &&
     (lVar2 = func_0x069aaf28(*(long *)(lVar2 + 0x28),0), lVar2 != 0)) {
    if (pcRam0000000007e30288 == (code *)0x0) {
      pcRam0000000007e30288 = (code *)func_0x032809dc(&UNK_0178a23a,0);
    }
    lVar2 = (*pcRam0000000007e30288)(lVar2,&stack0xffffffffffffffc8);
    return lVar2;
  }
  lVar2 = func_0x03280cac();
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return lVar2;
}


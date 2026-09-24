/* Ghidra 12.1.2 native pseudocode; RVA 0x6A408F0; Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout.GetTileBounds; status ok */


long Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__GetTileBounds
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    func_0x06fe9aec(param_2,0);
    lVar3 = func_0x06fe9880(param_2,0);
    return lVar3;
  }
  lVar3 = func_0x03280cac();
  puVar2 = PTR_DAT_0777e238;
  puVar1 = PTR_DAT_0777e230;
  if ((bRam0000000007e2a536 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e230);
    func_0x03280a18(PTR_DAT_0777e238);
    bRam0000000007e2a536 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(uVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  func_0x032809c4((undefined8 *)(lVar3 + 0x38),uVar4);
  *(undefined4 *)(lVar3 + 0x40) = 0x41200000;
  puVar2 = PTR_DAT_077c0880;
  puVar1 = PTR_DAT_077c0878;
  if ((bRam0000000007e2a549 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0880);
    func_0x03280a18(PTR_DAT_077c0878);
    bRam0000000007e2a549 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04f34d5c(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  func_0x032809c4((undefined8 *)(lVar3 + 0x30),uVar4);
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return lVar3;
}


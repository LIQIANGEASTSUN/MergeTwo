/* Ghidra 12.1.2 native pseudocode; RVA 0x6A40278; Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout.GetAdjacentPositions; status ok */


long Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__GetAdjacentPositions
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_0782f9a8;
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  if ((bRam0000000007e2a534 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f9a8);
    bRam0000000007e2a534 = 1;
  }
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = func_0x057de4c8(0);
  *(undefined4 *)(lVar3 + 0x18) = uVar2;
  *(long *)(lVar3 + 0x20) = param_1;
  func_0x032809c4((long *)(lVar3 + 0x20),param_1);
  *(undefined4 *)(lVar3 + 0x2c) = param_2;
  *(undefined4 *)(lVar3 + 0x34) = uVar4;
  return lVar3;
}


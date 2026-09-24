/* Ghidra 12.1.2 native pseudocode; RVA 0x6A40598; Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout.PrepareBoard; status ok */


void Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__PrepareBoard(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  if ((bRam0000000007e2a530 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f9d0);
    func_0x03280a18(PTR_DAT_077c0888);
    func_0x03280a18(PTR_DAT_0782f9d8);
    func_0x03280a18(PTR_DAT_0774e8c0);
    func_0x03280a18(PTR_DAT_0774e918);
    func_0x03280a18(PTR_DAT_0774e910);
    func_0x03280a18(PTR_DAT_07751590);
    func_0x03280a18(PTR_DAT_07751598);
    bRam0000000007e2a530 = 1;
  }
  if ((param_2 == 0) ||
     (lVar5 = func_0x03d5f73c(param_2,*(undefined8 *)PTR_DAT_0782f9d8), lVar5 == 0)) {
    puVar1 = PTR_DAT_0774e918;
    lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e910);
    func_0x053b72c8(lVar5,*(undefined8 *)puVar1);
  }
  puVar4 = PTR_DAT_0782f9d0;
  puVar3 = PTR_DAT_077c0888;
  puVar2 = PTR_DAT_07751598;
  puVar1 = PTR_DAT_0774e8c0;
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    iVar9 = 0;
    while( true ) {
      if (*(int *)(lVar8 + 0x18) <= iVar9) {
        return;
      }
      if (lVar5 == 0) break;
      uVar6 = func_0x053b79bc(lVar5,iVar9,*(undefined8 *)puVar1);
      if (((*(long *)(param_1 + 0x38) == 0) ||
          (lVar8 = func_0x0414419c(*(long *)(param_1 + 0x38),iVar9,*(undefined8 *)puVar2),
          lVar8 == 0)) || (lVar8 = func_0x06fdbed0(lVar8,0), lVar8 == 0)) break;
      if ((uVar6 & 1) == 0) {
        func_0x06fdf26c(lVar8,0,0);
        if (*(long *)(param_1 + 0x30) == 0) break;
        func_0x04f36fe0(*(long *)(param_1 + 0x30),iVar9,*(undefined8 *)puVar4);
      }
      else {
        func_0x06fdf26c(lVar8,1,0);
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar8 = func_0x0414419c(*(long *)(param_1 + 0x38),iVar9,*(undefined8 *)puVar2),
           lVar8 == 0)) break;
        func_0x06fe9910(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),lVar8,0);
        if (*(long *)(param_1 + 0x30) == 0) break;
        uVar7 = func_0x04f35b44(*(long *)(param_1 + 0x30),iVar9,lVar8,*(undefined8 *)puVar3);
        func_0x06b40790(uVar7,lVar8,iVar9,0);
      }
      lVar8 = *(long *)(param_1 + 0x38);
      iVar9 = iVar9 + 1;
      if (lVar8 == 0) break;
    }
  }
  func_0x03280cac();
  return;
}


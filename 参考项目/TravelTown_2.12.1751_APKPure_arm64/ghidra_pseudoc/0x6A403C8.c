/* Ghidra 12.1.2 native pseudocode; RVA 0x6A403C8; Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout.ShowAdjacentPositions; status ok */


void Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__ShowAdjacentPositions
               (long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000007e2a52f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_07759ab8);
    func_0x03280a18(PTR_DAT_0776aff0);
    func_0x03280a18(PTR_DAT_0782f9b8);
    func_0x03280a18(PTR_DAT_0782f9c0);
    func_0x03280a18(PTR_DAT_0774eeb0);
    func_0x03280a18(PTR_DAT_0782f9c8);
    bRam0000000007e2a52f = 1;
  }
  uVar5 = Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__IsValidPosition(param_1,param_2);
  if ((uVar5 & 1) == 0) {
    uStack_24 = param_2;
    uVar6 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_24);
    puVar10 = (undefined8 *)PTR_DAT_0782f9c8;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x278))(param_1,param_2,*(undefined8 *)(*param_1 + 0x280));
    lVar7 = func_0x03d5fde0(uVar6,*(undefined8 *)PTR_DAT_077c1cf8);
    if (lVar7 == 0) {
      auVar13 = func_0x03280cac();
      lVar7 = auVar13._0_8_;
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
      if ((auVar13._8_8_ == 0) ||
         (lVar9 = func_0x03d5f73c(auVar13._8_8_,*(undefined8 *)PTR_DAT_0782f9d8), lVar9 == 0)) {
        puVar1 = PTR_DAT_0774e918;
        lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e910);
        func_0x053b72c8(lVar9,*(undefined8 *)puVar1);
      }
      puVar4 = PTR_DAT_0782f9d0;
      puVar3 = PTR_DAT_077c0888;
      puVar2 = PTR_DAT_07751598;
      puVar1 = PTR_DAT_0774e8c0;
      lVar11 = *(long *)(lVar7 + 0x38);
      if (lVar11 != 0) {
        iVar12 = 0;
        while( true ) {
          if (*(int *)(lVar11 + 0x18) <= iVar12) {
            return;
          }
          if (lVar9 == 0) break;
          uVar5 = func_0x053b79bc(lVar9,iVar12,*(undefined8 *)puVar1);
          if (((*(long *)(lVar7 + 0x38) == 0) ||
              (lVar11 = func_0x0414419c(*(long *)(lVar7 + 0x38),iVar12,*(undefined8 *)puVar2),
              lVar11 == 0)) || (lVar11 = func_0x06fdbed0(lVar11,0), lVar11 == 0)) break;
          if ((uVar5 & 1) == 0) {
            func_0x06fdf26c(lVar11,0,0);
            if (*(long *)(lVar7 + 0x30) == 0) break;
            func_0x04f36fe0(*(long *)(lVar7 + 0x30),iVar12,*(undefined8 *)puVar4);
          }
          else {
            func_0x06fdf26c(lVar11,1,0);
            if ((*(long *)(lVar7 + 0x38) == 0) ||
               (lVar11 = func_0x0414419c(*(long *)(lVar7 + 0x38),iVar12,*(undefined8 *)puVar2),
               lVar11 == 0)) break;
            func_0x06fe9910(*(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x2c),lVar11,0);
            if (*(long *)(lVar7 + 0x30) == 0) break;
            uVar6 = func_0x04f35b44(*(long *)(lVar7 + 0x30),iVar12,lVar11,*(undefined8 *)puVar3);
            Merger_MergeBoard_View_Layout_FreeformMergeBoardLayout__SetIndexText
                      (uVar6,lVar11,iVar12,0);
          }
          lVar11 = *(long *)(lVar7 + 0x38);
          iVar12 = iVar12 + 1;
          if (lVar11 == 0) break;
        }
      }
      func_0x03280cac();
      return;
    }
    if (*(int *)(lVar7 + 0x18) != 0) {
      uVar6 = func_0x03eac59c(*(undefined8 *)PTR_DAT_0774eeb0,lVar7,*(undefined8 *)PTR_DAT_0776aff0)
      ;
      uStack_2c = param_2;
      uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_2c);
      uVar6 = func_0x055f7edc(*(undefined8 *)PTR_DAT_0782f9b8,uVar8,uVar6,0);
      goto LAB_06b40558;
    }
    uStack_28 = param_2;
    uVar6 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_28);
    puVar10 = (undefined8 *)PTR_DAT_0782f9c0;
  }
  uVar6 = func_0x055ee6c0(*puVar10,uVar6,0);
LAB_06b40558:
  if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0774e598);
  }
  func_0x06faa078(uVar6,0);
  return;
}


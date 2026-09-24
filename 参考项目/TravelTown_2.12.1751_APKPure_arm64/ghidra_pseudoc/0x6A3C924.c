/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3C924; Merger.MergeBoard.View.MergeBoardView.ClearBoardLayout; status ok */


/* WARNING: Possible PIC construction at 0x06b3cadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3cae0) */

ulong Merger_MergeBoard_View_MergeBoardView__ClearBoardLayout
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x30;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e2a503 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f7b8);
      bRam0000000007e2a503 = 1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard();
      uVar10 = *(ulong *)(param_1 + 0x80);
      if (uVar10 != 0) {
        unaff_x20 = *(long *)((long)register0x00000008 + -0x10);
        lVar8 = *(long *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)PTR_DAT_0782f7b8;
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
        puVar6 = (undefined1 *)register0x00000008;
SUB_04f35ce0:
        *(undefined8 *)(puVar6 + -0x20) = uVar14;
        *(long *)(puVar6 + -0x10) = unaff_x20;
        *(long *)(puVar6 + -8) = lVar8;
        iVar1 = *(int *)(uVar10 + 0x20);
        uVar9 = uVar10;
        if (0 < iVar1) {
          lVar8 = *(long *)(uVar10 + 0x10);
          if (lVar8 == 0) {
            auVar16 = func_0x03280cac(0,uVar13);
            *(undefined8 *)(puVar6 + -0x30) = 0x4f35d4c;
            uVar7 = func_0x04f36220(auVar16._0_8_,auVar16._8_8_,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
            return (ulong)(~uVar7 >> 0x1f);
          }
          func_0x057b9c7c(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
          *(undefined8 *)(uVar10 + 0x20) = 0xffffffff00000000;
          *(undefined4 *)(uVar10 + 0x28) = 0;
          uVar9 = func_0x057b9c7c(*(undefined8 *)(uVar10 + 0x18),0,iVar1,0);
        }
        *(int *)(uVar10 + 0x2c) = *(int *)(uVar10 + 0x2c) + 1;
        return uVar9;
      }
    }
    lVar8 = func_0x03280cac();
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(code **)((long)register0x00000008 + -0x60) =
         Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0x7e2a000;
    *(long *)((long)register0x00000008 + -0x28) = param_1;
    unaff_x20 = 0x7e2a000;
    if ((bRam0000000007e2a548 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f7c0);
      func_0x03280a18(PTR_DAT_0782f7c8);
      func_0x03280a18(PTR_DAT_0782f7d0);
      func_0x03280a18(PTR_DAT_0782f7d8);
      func_0x03280a18(PTR_DAT_0782f7e0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0782f7e8);
      bRam0000000007e2a548 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    if ((*(long *)(lVar8 + 0x30) != 0) &&
       (lVar11 = func_0x04f35968(*(long *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_0782f7c8),
       puVar5 = PTR_DAT_0782f7d8, puVar4 = PTR_DAT_0782f7d0, puVar3 = PTR_DAT_0782f7c0,
       puVar2 = PTR_DAT_0774e4e0, lVar11 != 0)) {
      func_0x04804ed4((undefined1 *)((long)register0x00000008 + -0x98),lVar11,
                      *(undefined8 *)PTR_DAT_0782f7e8);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      while( true ) {
        do {
          uVar10 = func_0x05148d38((undefined1 *)((long)register0x00000008 + -0x80),
                                   *(undefined8 *)puVar5);
          unaff_x21 = (undefined8 *)puVar3;
          unaff_x22 = (undefined8 *)puVar4;
          unaff_x23 = puVar5;
          unaff_x24 = puVar2;
          if ((uVar10 & 1) == 0) {
            func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x80),*(undefined8 *)puVar4);
            goto LAB_06b3cad0;
          }
          unaff_x20 = *(long *)((long)register0x00000008 + -0x70);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          param_3 = 0;
          uVar10 = func_0x06fdeb74(unaff_x20,0);
        } while ((uVar10 & 1) == 0);
        if (unaff_x20 == 0) break;
        lVar11 = func_0x06fdbed0(unaff_x20,0);
        if (lVar11 == 0) goto LAB_06b3cafc;
        param_3 = 0;
        func_0x06fdf26c(lVar11,0);
      }
      func_0x03280cac();
LAB_06b3cafc:
      func_0x03280cac();
    }
    while (auVar15 = func_0x03280cac(), uVar13 = auVar15._0_8_, auVar15._8_4_ == 1) {
      puVar12 = (undefined8 *)func_0x072ce910();
      *(undefined8 *)((long)register0x00000008 + -0x58) = *puVar12;
      func_0x072ce920();
      func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x80),*unaff_x22);
      if (*(long *)((long)register0x00000008 + -0x58) != 0) {
        uVar13 = func_0x03280ca4();
        break;
      }
LAB_06b3cad0:
      uVar10 = *(ulong *)(lVar8 + 0x30);
      if (uVar10 != 0) {
        uVar13 = *unaff_x21;
        uVar14 = 0x6b3cae0;
        goto SUB_04f35ce0;
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x80),*unaff_x22);
    if (*(long *)((long)register0x00000008 + -0x58) == 0) {
      func_0x03365958(uVar13);
    }
    func_0x03280ca4(*(undefined8 *)((long)register0x00000008 + -0x58));
    param_1 = func_0x02f09514();
    *(code **)((long)register0x00000008 + -0xb0) =
         Merger_MergeBoard_View_MergeBoardView__ClearBoardContent;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar13;
    Merger_MergeBoard_View_MergeBoardView__ClearAllItems();
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  } while( true );
}


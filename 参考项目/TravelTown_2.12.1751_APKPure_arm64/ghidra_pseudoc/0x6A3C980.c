/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3C980; Merger.MergeBoard.View.Layout.MergeBoardLayout.ClearBoard; status ok */


/* WARNING: Possible PIC construction at 0x06b3cadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3cae0) */

ulong Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar13;
  code *unaff_x30;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  
  do {
    *(code **)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    lVar12 = 0x7e2a000;
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
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar8 = func_0x04f35968(*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_0782f7c8),
       puVar5 = PTR_DAT_0782f7d8, puVar4 = PTR_DAT_0782f7d0, puVar3 = PTR_DAT_0782f7c0,
       puVar2 = PTR_DAT_0774e4e0, lVar8 != 0)) {
      func_0x04804ed4((undefined1 *)((long)register0x00000008 + -0x78),lVar8,
                      *(undefined8 *)PTR_DAT_0782f7e8);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x50) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      while( true ) {
        do {
          uVar9 = func_0x05148d38((undefined1 *)((long)register0x00000008 + -0x60),
                                  *(undefined8 *)puVar5);
          unaff_x21 = (undefined8 *)puVar3;
          unaff_x22 = (undefined8 *)puVar4;
          unaff_x23 = puVar5;
          unaff_x24 = puVar2;
          if ((uVar9 & 1) == 0) {
            func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x60),*(undefined8 *)puVar4);
            goto LAB_06b3cad0;
          }
          lVar12 = *(long *)((long)register0x00000008 + -0x50);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          param_3 = 0;
          uVar9 = func_0x06fdeb74(lVar12,0);
        } while ((uVar9 & 1) == 0);
        if (lVar12 == 0) break;
        lVar8 = func_0x06fdbed0(lVar12,0);
        if (lVar8 == 0) goto LAB_06b3cafc;
        param_3 = 0;
        func_0x06fdf26c(lVar8,0);
      }
      func_0x03280cac();
LAB_06b3cafc:
      func_0x03280cac();
    }
    while (auVar14 = func_0x03280cac(), uVar11 = auVar14._0_8_, auVar14._8_4_ == 1) {
      puVar10 = (undefined8 *)func_0x072ce910();
      *(undefined8 *)((long)register0x00000008 + -0x38) = *puVar10;
      func_0x072ce920();
      func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x60),*unaff_x22);
      if (*(long *)((long)register0x00000008 + -0x38) != 0) {
        uVar11 = func_0x03280ca4();
        break;
      }
LAB_06b3cad0:
      uVar9 = *(ulong *)(param_1 + 0x30);
      if (uVar9 != 0) {
        uVar11 = *unaff_x21;
        uVar13 = 0x6b3cae0;
        goto SUB_04f35ce0;
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    func_0x05148d34((undefined1 *)((long)register0x00000008 + -0x60),*unaff_x22);
    if (*(long *)((long)register0x00000008 + -0x38) == 0) {
      func_0x03365958(uVar11);
    }
    func_0x03280ca4(*(undefined8 *)((long)register0x00000008 + -0x38));
    unaff_x19 = func_0x02f09514();
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0x6b3cb80;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar11;
    func_0x06b3c740();
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(long *)((long)register0x00000008 + -0x90) = lVar12;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = 0x7e2a000;
    if ((bRam0000000007e2a503 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f7b8);
      bRam0000000007e2a503 = 1;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard();
      uVar9 = *(ulong *)(unaff_x19 + 0x80);
      if (uVar9 != 0) {
        lVar12 = *(long *)((long)register0x00000008 + -0x90);
        param_1 = *(long *)((long)register0x00000008 + -0x88);
        uVar11 = *(undefined8 *)PTR_DAT_0782f7b8;
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0xa0);
SUB_04f35ce0:
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
        *(long *)((long)register0x00000008 + -0x90) = lVar12;
        *(long *)((long)register0x00000008 + -0x88) = param_1;
        iVar1 = *(int *)(uVar9 + 0x20);
        uVar7 = uVar9;
        if (0 < iVar1) {
          lVar12 = *(long *)(uVar9 + 0x10);
          if (lVar12 == 0) {
            auVar15 = func_0x03280cac(0,uVar11);
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x4f35d4c;
            uVar6 = func_0x04f36220(auVar15._0_8_,auVar15._8_8_,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
            return (ulong)(~uVar6 >> 0x1f);
          }
          func_0x057b9c7c(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
          *(undefined8 *)(uVar9 + 0x20) = 0xffffffff00000000;
          *(undefined4 *)(uVar9 + 0x28) = 0;
          uVar7 = func_0x057b9c7c(*(undefined8 *)(uVar9 + 0x18),0,iVar1,0);
        }
        *(int *)(uVar9 + 0x2c) = *(int *)(uVar9 + 0x2c) + 1;
        return uVar7;
      }
    }
    unaff_x30 = Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard;
    param_1 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  } while( true );
}


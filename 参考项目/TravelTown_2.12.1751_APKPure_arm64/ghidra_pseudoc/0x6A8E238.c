/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E238; Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder.RemoveAction; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__RemoveAction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  code *unaff_x30;
  undefined1 auVar14 [16];
  
  auVar3._8_8_ = unaff_x22;
  auVar3._0_8_ = unaff_x19;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    auVar2 = auVar14;
    uVar8 = param_3;
    puVar4 = PTR_DAT_0776b160;
    lVar7 = auVar2._0_8_;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x20) = auVar3._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = auVar3._0_8_;
    if ((bRam0000000007e2a7ca & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776b160);
      bRam0000000007e2a7ca = 1;
    }
    unaff_x21 = *(undefined8 *)puVar4;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(long *)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    param_3 = unaff_x21;
    if ((bRam0000000007e2a7cd & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1dd0);
      func_0x03280a18(PTR_DAT_077c1de8);
      bRam0000000007e2a7cd = 1;
    }
    unaff_x23 = *(long **)(lVar7 + 0x10);
    if (unaff_x23 != (long *)0x0) {
      lVar9 = *unaff_x23;
      unaff_x24 = *(long *)PTR_DAT_077c1dd0;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)(unaff_x24 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar12 + (uint)*(ushort *)(unaff_x24 + 0x50)) * 0x10 +
                    0x138;
            goto LAB_06b8e174;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      lVar9 = func_0x03256b10(unaff_x23);
LAB_06b8e174:
      lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),unaff_x24);
      param_3 = unaff_x21;
      uVar5 = (**(code **)(lVar9 + 8))(unaff_x23,auVar2._8_8_,unaff_x21,uVar8,lVar9);
      lVar9 = *(long *)(lVar7 + 0x18);
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)PTR_DAT_077c1de8;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = uVar5;
            func_0x032809c4(puVar6,uVar5);
          }
          else {
            func_0x0414446c(lVar9,uVar5,
                            *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined8 *)(lVar7 + 0x20) = uVar5;
          func_0x032809c4((undefined8 *)(lVar7 + 0x20),uVar5);
          return lVar7;
        }
      }
    }
    unaff_x30 = Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__RemoveAction;
    auVar14 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x20 = uVar8;
    auVar3 = auVar2;
  } while( true );
}


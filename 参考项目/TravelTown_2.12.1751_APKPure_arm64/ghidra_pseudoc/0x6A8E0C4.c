/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E0C4; Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder.AddAction; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__AddAction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar13;
  long unaff_x24;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    uVar6 = auVar14._8_8_;
    lVar3 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    uVar7 = param_3;
    if ((bRam0000000007e2a7cd & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1dd0);
      func_0x03280a18(PTR_DAT_077c1de8);
      bRam0000000007e2a7cd = 1;
    }
    plVar13 = *(long **)(lVar3 + 0x10);
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      unaff_x24 = *(long *)PTR_DAT_077c1dd0;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)(unaff_x24 + 0x20)) {
            lVar8 = lVar8 + (long)(int)(*piVar11 + (uint)*(ushort *)(unaff_x24 + 0x50)) * 0x10 +
                    0x138;
            goto LAB_06b8e174;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      lVar8 = func_0x03256b10(plVar13);
LAB_06b8e174:
      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),unaff_x24);
      uVar7 = param_3;
      uVar4 = (**(code **)(lVar8 + 8))(plVar13,uVar6,param_3,param_4,lVar8);
      lVar8 = *(long *)(lVar3 + 0x18);
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)PTR_DAT_077c1de8;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar4;
            func_0x032809c4(puVar5,uVar4);
          }
          else {
            func_0x0414446c(lVar8,uVar4,
                            *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined8 *)(lVar3 + 0x20) = uVar4;
          func_0x032809c4((undefined8 *)(lVar3 + 0x20),uVar4);
          return lVar3;
        }
      }
    }
    auVar14 = func_0x03280cac();
    puVar2 = PTR_DAT_0776b160;
    *(code **)((long)register0x00000008 + -0x70) =
         Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__RemoveAction;
    *(long **)((long)register0x00000008 + -0x68) = plVar13;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = param_4;
    *(long *)((long)register0x00000008 + -0x48) = lVar3;
    if ((bRam0000000007e2a7ca & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776b160);
      bRam0000000007e2a7ca = 1;
    }
    param_3 = *(undefined8 *)puVar2;
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_4 = uVar7;
  } while( true );
}


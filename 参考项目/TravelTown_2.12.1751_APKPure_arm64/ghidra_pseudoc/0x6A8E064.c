/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E064; Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder.SetAction; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__SetAction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar15;
  long unaff_x24;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  
  puVar2 = PTR_DAT_0777e5f8;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  if ((bRam0000000007e2a7c9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5f8);
    bRam0000000007e2a7c9 = 1;
  }
  uVar8 = *(undefined8 *)puVar2;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    uVar7 = auVar16._8_8_;
    lVar4 = auVar16._0_8_;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x30;
    *(long *)(puVar3 + -0x30) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + -8) = unaff_x19;
    uVar9 = uVar8;
    if ((bRam0000000007e2a7cd & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1dd0);
      func_0x03280a18(PTR_DAT_077c1de8);
      bRam0000000007e2a7cd = 1;
    }
    plVar15 = *(long **)(lVar4 + 0x10);
    if (plVar15 != (long *)0x0) {
      lVar10 = *plVar15;
      unaff_x24 = *(long *)PTR_DAT_077c1dd0;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(unaff_x24 + 0x20)) {
            lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(unaff_x24 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_06b8e174;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      lVar10 = func_0x03256b10(plVar15);
LAB_06b8e174:
      lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),unaff_x24);
      uVar9 = uVar8;
      uVar5 = (**(code **)(lVar10 + 8))(plVar15,uVar7,uVar8,param_3,lVar10);
      lVar10 = *(long *)(lVar4 + 0x18);
      if (lVar10 != 0) {
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)PTR_DAT_077c1de8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = uVar5;
            func_0x032809c4(puVar6,uVar5);
          }
          else {
            func_0x0414446c(lVar10,uVar5,
                            *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          func_0x032809c4((undefined8 *)(lVar4 + 0x20),uVar5);
          return lVar4;
        }
      }
    }
    auVar16 = func_0x03280cac();
    puVar2 = PTR_DAT_0776b160;
    *(undefined8 *)(puVar3 + -0x70) = 0x6b8e238;
    *(long **)(puVar3 + -0x68) = plVar15;
    *(undefined8 *)(puVar3 + -0x60) = uVar7;
    *(undefined8 *)(puVar3 + -0x58) = uVar8;
    *(undefined8 *)(puVar3 + -0x50) = param_3;
    *(long *)(puVar3 + -0x48) = lVar4;
    if ((bRam0000000007e2a7ca & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776b160);
      bRam0000000007e2a7ca = 1;
    }
    uVar8 = *(undefined8 *)puVar2;
    unaff_x20 = *(undefined8 *)(puVar3 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar3 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x60);
    unaff_x21 = *(undefined8 *)(puVar3 + -0x58);
    unaff_x30 = *(undefined8 *)(puVar3 + -0x70);
    unaff_x23 = *(undefined8 *)(puVar3 + -0x68);
    puVar3 = puVar3 + -0x40;
    param_3 = uVar9;
  } while( true );
}


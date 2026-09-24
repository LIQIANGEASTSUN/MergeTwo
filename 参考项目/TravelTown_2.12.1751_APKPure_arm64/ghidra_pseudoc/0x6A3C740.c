/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3C740; Merger.MergeBoard.View.MergeBoardView.ClearAllItems; status ok */


/* WARNING: Possible PIC construction at 0x06b3cadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3cae0) */

ulong Merger_MergeBoard_View_MergeBoardView__ClearAllItems
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a502 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f790);
    func_0x03280a18(PTR_DAT_0782f798);
    func_0x03280a18(PTR_DAT_0782f7a0);
    func_0x03280a18(PTR_DAT_0782f7a8);
    func_0x03280a18(PTR_DAT_077c1d90);
    func_0x03280a18(PTR_DAT_0782f7b0);
    bRam0000000007e2a502 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_28 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lStack_68 = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_06b3c8a4;
  lVar10 = func_0x03d5fa00(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48),
                           *(undefined8 *)PTR_DAT_0782f790);
  puVar3 = PTR_DAT_0782f7a0;
  puVar2 = PTR_DAT_0782f798;
  puVar17 = (undefined8 *)PTR_DAT_077c1d90;
  if (lVar10 == 0) goto LAB_06b3c8a4;
  func_0x05518678(&uStack_50,lVar10,*(undefined8 *)PTR_DAT_0782f7b0);
  while (uVar11 = func_0x051022e4(&uStack_50,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    func_0x054de1a0(&uStack_60,&uStack_28,&lStack_68,*puVar17);
    param_3 = lStack_68;
    func_0x06b3a754(param_1,uStack_28);
  }
  func_0x051022e0(&uStack_50,*(undefined8 *)puVar2);
  do {
    unaff_x22 = puVar17;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (Merger_MergeBoard_View_MergeBoardSelectorView__Hide(), *(long *)(param_1 + 0x48) != 0)) {
      Merger_MergeBoard_View_MergeBoardSelectorView__ClearSelection();
      func_0x06b3b63c(param_1);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
      uVar11 = func_0x032809c4((undefined8 *)(param_1 + 0x90),0);
      return uVar11;
    }
LAB_06b3c8a4:
    puVar17 = unaff_x22;
    auVar20 = func_0x03280cac();
    lVar10 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) goto LAB_06b3c8ec;
    plVar12 = (long *)func_0x072ce910(lVar10);
    lVar15 = *plVar12;
    func_0x072ce920();
    func_0x051022e0(&uStack_50,*(undefined8 *)PTR_DAT_0782f798);
  } while (lVar15 == 0);
  func_0x03280ca4(lVar15);
LAB_06b3c8ec:
  puVar16 = (undefined8 *)0x0;
  func_0x051022e0(&uStack_50,*(undefined8 *)PTR_DAT_0782f798);
  func_0x03365958(lVar10);
  func_0x03280ca4(0);
  uVar18 = 0x6b3c924;
  lVar15 = func_0x02f09514();
  puVar7 = auStack_70;
  do {
    *(undefined8 *)(puVar7 + -0x20) = uVar18;
    *(long *)(puVar7 + -0x10) = lVar10;
    *(long *)(puVar7 + -8) = param_1;
    if ((bRam0000000007e2a503 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f7b8);
      bRam0000000007e2a503 = 1;
    }
    if (*(long *)(lVar15 + 0x30) != 0) {
      Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard();
      uVar11 = *(ulong *)(lVar15 + 0x80);
      if (uVar11 != 0) {
        lVar10 = *(long *)(puVar7 + -0x10);
        lVar13 = *(long *)(puVar7 + -8);
        uVar18 = *(undefined8 *)PTR_DAT_0782f7b8;
        uVar19 = *(undefined8 *)(puVar7 + -0x20);
        puVar6 = puVar7;
SUB_04f35ce0:
        *(undefined8 *)(puVar6 + -0x20) = uVar19;
        *(long *)(puVar6 + -0x10) = lVar10;
        *(long *)(puVar6 + -8) = lVar13;
        iVar1 = *(int *)(uVar11 + 0x20);
        uVar9 = uVar11;
        if (0 < iVar1) {
          lVar10 = *(long *)(uVar11 + 0x10);
          if (lVar10 == 0) {
            auVar21 = func_0x03280cac(0,uVar18);
            *(undefined8 *)(puVar6 + -0x30) = 0x4f35d4c;
            uVar8 = func_0x04f36220(auVar21._0_8_,auVar21._8_8_,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
            return (ulong)(~uVar8 >> 0x1f);
          }
          func_0x057b9c7c(lVar10,0,*(undefined4 *)(lVar10 + 0x18),0);
          *(undefined8 *)(uVar11 + 0x20) = 0xffffffff00000000;
          *(undefined4 *)(uVar11 + 0x28) = 0;
          uVar9 = func_0x057b9c7c(*(undefined8 *)(uVar11 + 0x18),0,iVar1,0);
        }
        *(int *)(uVar11 + 0x2c) = *(int *)(uVar11 + 0x2c) + 1;
        return uVar9;
      }
    }
    lVar13 = func_0x03280cac();
    puVar6 = puVar7 + -0xa0;
    *(code **)(puVar7 + -0x60) = Merger_MergeBoard_View_Layout_MergeBoardLayout__ClearBoard;
    *(undefined **)(puVar7 + -0x50) = unaff_x24;
    *(undefined **)(puVar7 + -0x48) = unaff_x23;
    *(undefined8 **)(puVar7 + -0x40) = puVar17;
    *(undefined8 **)(puVar7 + -0x38) = puVar16;
    *(undefined8 *)(puVar7 + -0x30) = 0x7e2a000;
    *(long *)(puVar7 + -0x28) = lVar15;
    lVar10 = 0x7e2a000;
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
    *(undefined8 *)(puVar7 + -0x80) = 0;
    *(undefined8 *)(puVar7 + -0x78) = 0;
    *(undefined8 *)(puVar7 + -0x70) = 0;
    if ((*(long *)(lVar13 + 0x30) != 0) &&
       (lVar15 = func_0x04f35968(*(long *)(lVar13 + 0x30),*(undefined8 *)PTR_DAT_0782f7c8),
       puVar5 = PTR_DAT_0782f7d8, puVar4 = PTR_DAT_0782f7d0, puVar3 = PTR_DAT_0782f7c0,
       puVar2 = PTR_DAT_0774e4e0, lVar15 != 0)) {
      func_0x04804ed4(puVar7 + -0x98,lVar15,*(undefined8 *)PTR_DAT_0782f7e8);
      *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x90);
      *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x98);
      *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x88);
      while( true ) {
        do {
          uVar11 = func_0x05148d38(puVar7 + -0x80,*(undefined8 *)puVar5);
          puVar17 = (undefined8 *)puVar4;
          puVar16 = (undefined8 *)puVar3;
          unaff_x23 = puVar5;
          unaff_x24 = puVar2;
          if ((uVar11 & 1) == 0) {
            func_0x05148d34(puVar7 + -0x80,*(undefined8 *)puVar4);
            goto LAB_06b3cad0;
          }
          lVar10 = *(long *)(puVar7 + -0x70);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          param_3 = 0;
          uVar11 = func_0x06fdeb74(lVar10,0);
        } while ((uVar11 & 1) == 0);
        if (lVar10 == 0) break;
        lVar15 = func_0x06fdbed0(lVar10,0);
        if (lVar15 == 0) goto LAB_06b3cafc;
        param_3 = 0;
        func_0x06fdf26c(lVar15,0);
      }
      func_0x03280cac();
LAB_06b3cafc:
      func_0x03280cac();
    }
    while (auVar20 = func_0x03280cac(), uVar18 = auVar20._0_8_, auVar20._8_4_ == 1) {
      puVar14 = (undefined8 *)func_0x072ce910();
      *(undefined8 *)(puVar7 + -0x58) = *puVar14;
      func_0x072ce920();
      func_0x05148d34(puVar7 + -0x80,*puVar17);
      if (*(long *)(puVar7 + -0x58) != 0) {
        uVar18 = func_0x03280ca4();
        break;
      }
LAB_06b3cad0:
      uVar11 = *(ulong *)(lVar13 + 0x30);
      if (uVar11 != 0) {
        uVar18 = *puVar16;
        uVar19 = 0x6b3cae0;
        goto SUB_04f35ce0;
      }
    }
    *(undefined8 *)(puVar7 + -0x58) = 0;
    func_0x05148d34(puVar7 + -0x80,*puVar17);
    if (*(long *)(puVar7 + -0x58) == 0) {
      func_0x03365958(uVar18);
    }
    func_0x03280ca4(*(undefined8 *)(puVar7 + -0x58));
    lVar15 = func_0x02f09514();
    *(undefined8 *)(puVar7 + -0xb0) = 0x6b3cb80;
    *(undefined8 *)(puVar7 + -0xa8) = uVar18;
    Merger_MergeBoard_View_MergeBoardView__ClearAllItems();
    uVar18 = *(undefined8 *)(puVar7 + -0xb0);
    param_1 = *(long *)(puVar7 + -0xa8);
    puVar7 = puVar7 + -0xa0;
  } while( true );
}


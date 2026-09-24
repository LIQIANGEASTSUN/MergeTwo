/* Ghidra 12.1.2 native pseudocode; RVA 0x6A95B80; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.UpdateLockComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__UpdateLockComponent
                (undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 unaff_x23;
  undefined8 uVar15;
  undefined8 unaff_x24;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  byte abStack_28 [8];
  
  uVar5 = param_3;
  if ((bRam0000000007e2a813 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831248);
    func_0x03280a18(PTR_DAT_0777a528);
    bRam0000000007e2a813 = 1;
  }
  abStack_28[0] = 0;
  if (param_2 != 0) {
    uVar5 = func_0x03d1f470(param_2,abStack_28,*(undefined8 *)PTR_DAT_0777a528);
    if ((uVar5 & 1) != 0) {
      abStack_28[0] = (byte)param_3 & 1;
      uVar5 = func_0x03d1d588(param_2,param_3 & 1,*(undefined8 *)PTR_DAT_07831248);
    }
    return uVar5;
  }
  auVar17 = func_0x03280cac();
  lVar10 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
  pcStack_70 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateEntity;
  uVar14 = 0x7e2a000;
  uVar13 = uVar5 & 0xffffffff;
  if ((bRam0000000007e2a805 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782dd8);
    func_0x03280a18(PTR_DAT_078324d8);
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a805 = 1;
  }
  if (lVar10 != 0) {
    uVar14 = *(ulong *)(lVar10 + 0x88);
    if (uVar14 == 0) {
      plVar6 = *(long **)(lVar8 + 0x28);
      uVar14 = 0;
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar7 = *(undefined8 *)(lVar10 + 0x10);
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_06b95d28;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777a498,9);
LAB_06b95d28:
        uVar7 = (*(code *)*puVar9)(plVar6,uVar7,puVar9[1]);
        goto LAB_06b95d38;
      }
    }
    else {
      unaff_x24 = *(undefined8 *)(lVar10 + 0x10);
      plVar6 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07782dd8);
      uVar5 = uVar14;
      func_0x061046ec(plVar6,unaff_x24,uVar14,0);
      unaff_x23 = 0;
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
LAB_06b95d38:
        puVar1 = PTR_DAT_078324d8;
        uVar15 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_0774f758 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar4 = func_0x03d229e0(uVar15,*(undefined8 *)puVar1);
        uVar5 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateBoardItemEntity
                          (lVar8,uVar7,uVar13,uVar4);
        Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__UpdateComponentsFromState
                  (lVar8,uVar5,lVar10);
        return uVar5;
      }
    }
  }
  auVar18 = func_0x03280cac();
  uVar7 = auVar18._0_8_;
  pcStack_b0 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__UpdateComponentsFromState;
  uStack_a0 = unaff_x24;
  uStack_98 = unaff_x23;
  uStack_90 = uVar14;
  uStack_88 = uVar13;
  auStack_80 = auVar17;
  if ((bRam0000000007e2a812 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078324e0);
    func_0x03280a18(PTR_DAT_078324e8);
    func_0x03280a18(PTR_DAT_078324f0);
    func_0x03280a18(PTR_DAT_078324f8);
    func_0x03280a18(PTR_DAT_07832500);
    bRam0000000007e2a812 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  puVar9 = (undefined8 *)0x7e2a000;
  if (uVar5 != 0) {
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateCyclesDelay
              (uVar7,*(undefined8 *)(uVar5 + 0x70));
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateUnlockTimeLeft
              (uVar7,*(undefined8 *)(uVar5 + 0x78));
    lVar8 = func_0x06b93ec0(uVar7);
    puVar3 = PTR_DAT_078324f8;
    puVar2 = PTR_DAT_078324e8;
    puVar1 = PTR_DAT_078324e0;
    if (lVar8 != 0) {
      func_0x04145068(&uStack_c8,lVar8,*(undefined8 *)PTR_DAT_07832500);
      while( true ) {
        uVar14 = func_0x051159b4(&uStack_c8,*(undefined8 *)puVar2);
        plVar6 = plStack_b8;
        if ((uVar14 & 1) == 0) {
          uVar5 = func_0x051159b0(&uStack_c8,*(undefined8 *)puVar1);
          return uVar5;
        }
        if (plStack_b8 == (long *)0x0) break;
        lVar8 = *plStack_b8;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b95ee0;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plStack_b8,*(long *)puVar3,0);
LAB_06b95ee0:
        (*(code *)*puVar9)(plVar6,auVar18._8_8_,uVar5,puVar9[1]);
      }
      func_0x03280cac();
      puVar9 = (undefined8 *)puVar1;
    }
  }
  auVar16 = func_0x03280cac();
  if (auVar16._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar16._0_8_);
    lVar8 = *plVar6;
    func_0x072ce920();
    uVar5 = func_0x051159b0(&uStack_c8,*puVar9);
    if (lVar8 == 0) {
      return uVar5;
    }
    func_0x03280ca4(lVar8);
  }
  func_0x051159b0(&uStack_c8,*puVar9);
  func_0x03365958(auVar16._0_8_);
  func_0x03280ca4(0);
  uVar5 = func_0x02f09514();
  return uVar5;
}


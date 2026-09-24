/* Ghidra 12.1.2 native pseudocode; RVA 0x6A95C18; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateEntity; status ok */


/* WARNING: Possible PIC construction at 0x06b95d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b95d94) */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateEntity
               (long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  uVar11 = 0x7e2a000;
  uVar10 = param_3 & 0xffffffff;
  if ((bRam0000000007e2a805 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782dd8);
    func_0x03280a18(PTR_DAT_078324d8);
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a805 = 1;
  }
  if (param_2 == 0) {
LAB_06b95dac:
    uVar12 = 0x6b95db0;
    auVar13 = func_0x03280cac();
    uVar6 = auVar13._8_8_;
    lVar7 = auVar13._0_8_;
  }
  else {
    uVar11 = *(ulong *)(param_2 + 0x88);
    if (uVar11 == 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      uVar11 = 0;
      if (plVar5 == (long *)0x0) goto LAB_06b95dac;
      lVar7 = *plVar5;
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_06b95d28;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777a498,9);
LAB_06b95d28:
      uVar11 = (*(code *)*puVar8)(plVar5,uVar12,puVar8[1]);
    }
    else {
      unaff_x24 = *(undefined **)(param_2 + 0x10);
      plVar5 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07782dd8);
      param_3 = uVar11;
      func_0x061046ec(plVar5,unaff_x24,uVar11,0);
      unaff_x23 = 0;
      if (plVar5 == (long *)0x0) goto LAB_06b95dac;
      uVar11 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    }
    unaff_x24 = PTR_DAT_078324d8;
    unaff_x23 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0774f758 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar4 = func_0x03d229e0(unaff_x23,*(undefined8 *)unaff_x24);
    uVar6 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateBoardItemEntity
                      (param_1,uVar11,uVar10,uVar4);
    uVar12 = 0x6b95d94;
    lVar7 = param_1;
    param_3 = param_2;
    uVar10 = uVar6;
  }
  uStack_80 = uVar12;
  puStack_70 = unaff_x24;
  uStack_68 = unaff_x23;
  uStack_60 = uVar11;
  uStack_58 = uVar10;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000007e2a812 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078324e0);
    func_0x03280a18(PTR_DAT_078324e8);
    func_0x03280a18(PTR_DAT_078324f0);
    func_0x03280a18(PTR_DAT_078324f8);
    func_0x03280a18(PTR_DAT_07832500);
    bRam0000000007e2a812 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  puVar8 = (undefined8 *)0x7e2a000;
  if (param_3 != 0) {
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateCyclesDelay
              (lVar7,*(undefined8 *)(param_3 + 0x70));
    Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateUnlockTimeLeft
              (lVar7,*(undefined8 *)(param_3 + 0x78));
    lVar7 = func_0x06b93ec0(lVar7);
    puVar3 = PTR_DAT_078324f8;
    puVar2 = PTR_DAT_078324e8;
    puVar1 = PTR_DAT_078324e0;
    if (lVar7 != 0) {
      func_0x04145068(&uStack_98,lVar7,*(undefined8 *)PTR_DAT_07832500);
      while( true ) {
        uVar11 = func_0x051159b4(&uStack_98,*(undefined8 *)puVar2);
        plVar5 = plStack_88;
        if ((uVar11 & 1) == 0) {
          func_0x051159b0(&uStack_98,*(undefined8 *)puVar1);
          return;
        }
        if (plStack_88 == (long *)0x0) break;
        lVar7 = *plStack_88;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b95ee0;
            }
            uVar11 = uVar11 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plStack_88,*(long *)puVar3,0);
LAB_06b95ee0:
        (*(code *)*puVar8)(plVar5,uVar6,param_3,puVar8[1]);
      }
      func_0x03280cac();
      puVar8 = (undefined8 *)puVar1;
    }
  }
  auVar14 = func_0x03280cac();
  if (auVar14._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(auVar14._0_8_);
    lVar7 = *plVar5;
    func_0x072ce920();
    func_0x051159b0(&uStack_98,*puVar8);
    if (lVar7 == 0) {
      return;
    }
    func_0x03280ca4(lVar7);
  }
  func_0x051159b0(&uStack_98,*puVar8);
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}


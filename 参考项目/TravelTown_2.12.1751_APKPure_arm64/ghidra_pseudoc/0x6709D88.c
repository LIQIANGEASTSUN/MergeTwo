/* Ghidra 12.1.2 native pseudocode; RVA 0x6709D88; Merger.Game.Views.Inventory.InventoryProducerView.OnEnable; status ok */


void Merger_Game_Views_Inventory_InventoryProducerView__OnEnable(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  if ((bRam0000000007e287c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db230);
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0780c6b0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0780c6b8);
    func_0x03280a18(PTR_DAT_0780c6c0);
    func_0x03280a18(PTR_DAT_0780c6c8);
    func_0x03280a18(PTR_DAT_0780c6d0);
    func_0x03280a18(PTR_DAT_0780c6d8);
    func_0x03280a18(PTR_DAT_077e7208);
    func_0x03280a18(PTR_DAT_077e71e0);
    func_0x03280a18(PTR_DAT_0780c660);
    bRam0000000007e287c1 = 1;
  }
  Merger_Game_Views_Inventory_InventoryProducerView__ClearInventory(param_1);
  puVar7 = PTR_DAT_0780c6d8;
  puVar6 = PTR_DAT_0780c6c8;
  puVar5 = PTR_DAT_0780c6b0;
  puVar4 = PTR_DAT_077e7208;
  puVar3 = PTR_DAT_077e71e0;
  puVar2 = PTR_DAT_07779820;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar18 = 0;
    while (lVar9 = func_0x0672bd90(lVar9,0), unaff_x24 = (undefined8 *)puVar5,
          unaff_x25 = (long *)puVar6, lVar9 != 0) {
      iVar8 = func_0x04545968(lVar9,*(undefined8 *)puVar4);
      if (iVar8 <= iVar18) goto LAB_0680a0ec;
      lVar9 = *(long *)(param_1 + 0x28);
      uVar19 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = func_0x069aaf28(param_1,0);
      if ((lVar9 == 0) || (lVar9 = func_0x06a4bc78(lVar9,uVar19,uVar10,0,0), lVar9 == 0)) break;
      plVar11 = (long *)func_0x03dc9518(lVar9,*(undefined8 *)puVar5);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07773028);
      func_0x05420abc(uVar10,param_1,*(undefined8 *)PTR_DAT_0780c6c0,0);
      if (plVar11 == (long *)0x0) break;
      func_0x06808f98(plVar11,uVar10);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db230);
      func_0x054221d4(uVar10,param_1,*(undefined8 *)PTR_DAT_0780c6b8,0);
      func_0x068090f8(plVar11,uVar10);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = func_0x0672bd90(*(long *)(param_1 + 0x28),0), lVar9 == 0)) break;
      uVar10 = func_0x045459f0(lVar9,iVar18,*(undefined8 *)puVar3);
      (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x1b0));
      *(int *)(plVar11 + 0x16) = iVar18;
      if (*(long *)(param_1 + 0x28) == 0) break;
      lVar9 = Merger_Game_ViewModel_InventoryProducerViewModel__GetItem
                        (*(long *)(param_1 + 0x28),iVar18,0);
      func_0x0680945c(plVar11,lVar9 != 0);
      if (*(long *)(param_1 + 0x28) == 0) break;
      lVar9 = func_0x0672be18(*(long *)(param_1 + 0x28),0);
      if (((*(long *)(param_1 + 0x28) == 0) ||
          (lVar12 = func_0x0672bd90(*(long *)(param_1 + 0x28),0), lVar12 == 0)) ||
         (plVar13 = (long *)func_0x045459f0(lVar12,iVar18,*(undefined8 *)puVar3),
         plVar13 == (long *)0x0)) break;
      lVar12 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0680a04c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_0680a04c:
      uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if (lVar9 == 0) break;
      uVar15 = func_0x04545a88(lVar9,uVar10,*(undefined8 *)puVar7);
      if ((uVar15 & 1) != 0) {
        Merger_Game_Views_Inventory_InventoryProducerSlotView__ActivateNewBanner(plVar11);
      }
      lVar9 = *(long *)(param_1 + 0x58);
      if (lVar9 == 0) break;
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)puVar6;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar12 == 0) break;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar13 = (long)plVar11;
        func_0x032809c4(plVar13,plVar11);
      }
      else {
        func_0x0414446c(lVar9,plVar11,
                        *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(param_1 + 0x28);
      iVar18 = iVar18 + 1;
      if (lVar9 == 0) break;
    }
  }
  do {
    func_0x03280cac();
LAB_0680a0ec:
    if (*(int *)(param_1 + 0x50) < 1) {
      return;
    }
    iVar18 = 0;
    while( true ) {
      lVar9 = *(long *)(param_1 + 0x28);
      uVar19 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = func_0x069aaf28(param_1,0);
      if ((lVar9 == 0) || (lVar9 = func_0x06a4bc78(lVar9,uVar19,uVar10,0,0), lVar9 == 0)) break;
      uVar10 = func_0x03dc9518(lVar9,*unaff_x24);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = func_0x0672bbdc(*(long *)(param_1 + 0x28),0), lVar9 == 0)) break;
      if (iVar18 < *(int *)(lVar9 + 0x18)) {
        Merger_Game_Views_Inventory_InventoryProducerView__DecorateSlotWithUnlockText
                  (param_1,uVar10,iVar18);
      }
      lVar9 = *(long *)(param_1 + 0x58);
      if (lVar9 == 0) break;
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar16 = *unaff_x25;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar12 == 0) break;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar14 = uVar10;
        func_0x032809c4(puVar14,uVar10);
      }
      else {
        func_0x0414446c(lVar9,uVar10,
                        *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      iVar18 = iVar18 + 1;
      if (*(int *)(param_1 + 0x50) <= iVar18) {
        return;
      }
    }
  } while( true );
}


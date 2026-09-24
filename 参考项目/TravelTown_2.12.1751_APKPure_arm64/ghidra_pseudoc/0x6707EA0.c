/* Ghidra 12.1.2 native pseudocode; RVA 0x6707EA0; Merger.Game.Views.Inventory.InventoryItemsView.RepopulateInventory; status ok */


void Merger_Game_Views_Inventory_InventoryItemsView__RepopulateInventory(long param_1)

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
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  
  if ((bRam0000000007e287ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0780b500);
    func_0x03280a18(PTR_DAT_0780c5c8);
    func_0x03280a18(PTR_DAT_0780c5d0);
    func_0x03280a18(PTR_DAT_0780c5d8);
    func_0x03280a18(PTR_DAT_0780c5e0);
    func_0x03280a18(PTR_DAT_0780c520);
    bRam0000000007e287ac = 1;
  }
  puVar7 = PTR_DAT_0780c5e0;
  puVar6 = PTR_DAT_0780c5d8;
  puVar5 = PTR_DAT_0780c5d0;
  puVar4 = PTR_DAT_0780c5c8;
  puVar3 = PTR_DAT_0780b500;
  puVar2 = PTR_DAT_07773028;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar15 = 0;
    do {
      iVar8 = func_0x0672ac88(lVar9,0);
      if (iVar8 <= iVar15) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x28);
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = func_0x069aaf28(param_1,0);
      if ((lVar9 == 0) || (lVar9 = func_0x06a4bc78(lVar9,uVar16,uVar10,0,0), lVar9 == 0)) break;
      plVar11 = (long *)func_0x03dc9518(lVar9,*(undefined8 *)puVar4);
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x05420abc(uVar10,param_1,*(undefined8 *)puVar6,0);
      if (plVar11 == (long *)0x0) break;
      func_0x06807170(plVar11,uVar10);
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04058ad0(uVar10,param_1,*(undefined8 *)puVar5,0);
      func_0x068072d0(plVar11,uVar10);
      if (*(long *)(param_1 + 0x28) == 0) break;
      uVar10 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItem
                         (*(long *)(param_1 + 0x28),iVar15,0);
      (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x1b0));
      if (*(long *)(param_1 + 0x28) == 0) break;
      lVar9 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItemUUID
                        (*(long *)(param_1 + 0x28),iVar15,0);
      plVar11[0x10] = lVar9;
      func_0x032809c4();
      if (*(long *)(param_1 + 0x28) == 0) break;
      uVar10 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItemAsset
                         (*(long *)(param_1 + 0x28),iVar15,0,0);
      func_0x068074a4(plVar11,uVar10);
      *(int *)(plVar11 + 0xf) = iVar15;
      lVar9 = *(long *)(param_1 + 0x58);
      if (lVar9 == 0) break;
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar7;
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
                        *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(param_1 + 0x28);
      iVar15 = iVar15 + 1;
    } while (lVar9 != 0);
  }
  func_0x03280cac();
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6707A70; Merger.Game.Views.Inventory.InventoryItemsView.ClearInventory; status ok */


void Merger_Game_Views_Inventory_InventoryItemsView__ClearInventory(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  
  puVar4 = PTR_DAT_0780c5a8;
  puVar3 = PTR_DAT_0780c5a0;
  if ((bRam0000000007e287ad & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780c5a0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780c5b0);
    func_0x03280a18(PTR_DAT_0780c5a8);
    func_0x03280a18(PTR_DAT_0780c5b8);
    func_0x03280a18(PTR_DAT_0780c5c0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0776bf20);
    bRam0000000007e287ad = 1;
  }
  lVar20 = param_1[0xb];
  plVar10 = (long *)func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x054221d4(plVar10,param_1,*(undefined8 *)puVar4,0);
  if (lVar20 != 0) {
    func_0x04144fb0(lVar20,plVar10,*(undefined8 *)PTR_DAT_0780c5c0);
    puVar3 = PTR_DAT_0774e4e0;
    lVar14 = param_1[0xb];
    if (lVar14 != 0) {
      iVar19 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar19) {
        func_0x057b9c7c(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
      }
      lVar20 = param_1[0xd];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar11 = func_0x06fdeb74(lVar20,0,0);
      if ((uVar11 & 1) != 0) {
        lVar20 = param_1[0xd];
        plVar10 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        func_0x056ed730(plVar10,param_1,*(undefined8 *)PTR_DAT_0780c5b0,0);
        if (lVar20 == 0) goto LAB_06807dd4;
        func_0x06808468(lVar20,plVar10);
      }
      lVar14 = func_0x069aaf28(param_1,0);
      plVar16 = (long *)PTR_DAT_0774e8c8;
      if (lVar14 != 0) {
        param_1 = (long *)func_0x06fed990(lVar14,0);
        puVar5 = PTR_DAT_0776bf20;
        puVar4 = PTR_DAT_0774e8e0;
        if (param_1 != (long *)0x0) {
          do {
            lVar15 = *param_1;
            lVar14 = *(long *)puVar4;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar14) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06807c7c;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_1,lVar14,0);
LAB_06807c7c:
            uVar11 = (*(code *)*puVar12)(param_1,puVar12[1]);
            if ((uVar11 & 1) == 0) {
              lVar20 = 0;
              goto LAB_06807d48;
            }
            lVar15 = *param_1;
            lVar14 = *(long *)puVar4;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar14) {
                  puVar12 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_06807cdc;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_1,lVar14,1);
LAB_06807cdc:
            plVar10 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
            if (plVar10 == (long *)0x0) goto LAB_06807dd0;
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
            goto LAB_06807dcc;
            lVar20 = func_0x06fdbed0(plVar10,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x06fe41c8(lVar20,0);
          } while( true );
        }
        goto LAB_06807dd8;
      }
    }
  }
  goto LAB_06807dd4;
LAB_06807dcc:
  func_0x03281048();
LAB_06807dd0:
  func_0x03280cac();
  plVar10 = plVar16;
LAB_06807dd4:
  plVar16 = plVar10;
  func_0x03280cac();
LAB_06807dd8:
  func_0x03280cac();
  while( true ) {
    auVar22 = func_0x03280ca4(lVar20);
    if (auVar22._8_4_ != 1) break;
    plVar10 = (long *)func_0x072ce910();
    lVar20 = *plVar10;
    func_0x072ce920();
LAB_06807d48:
    plVar10 = (long *)func_0x03280b90(param_1,*plVar16);
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar16) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06807da8;
          }
          uVar11 = uVar11 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar10,*plVar16,0);
LAB_06807da8:
      (*(code *)*puVar12)(plVar10,puVar12[1]);
      param_1 = plVar10;
    }
    if (lVar20 == 0) {
      return;
    }
  }
  plVar10 = (long *)func_0x03280b90(param_1,*plVar16);
  if (plVar10 != (long *)0x0) {
    lVar20 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar11 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *plVar16) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06807e7c;
        }
        uVar11 = uVar11 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar10,*plVar16,0);
LAB_06807e7c:
    (*(code *)*puVar12)(plVar10,puVar12[1]);
  }
  func_0x03365958(auVar22._0_8_);
  func_0x03280ca4(0);
  lVar20 = func_0x02f09514();
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
  puVar8 = PTR_DAT_0780c5e0;
  puVar7 = PTR_DAT_0780c5d8;
  puVar6 = PTR_DAT_0780c5d0;
  puVar5 = PTR_DAT_0780c5c8;
  puVar4 = PTR_DAT_0780b500;
  puVar3 = PTR_DAT_07773028;
  lVar14 = *(long *)(lVar20 + 0x28);
  if (lVar14 != 0) {
    iVar19 = 0;
    do {
      iVar9 = func_0x0672ac88(lVar14,0);
      if (iVar9 <= iVar19) {
        return;
      }
      lVar14 = *(long *)(lVar20 + 0x28);
      uVar21 = *(undefined8 *)(lVar20 + 0x48);
      uVar13 = func_0x069aaf28(lVar20,0);
      if ((lVar14 == 0) || (lVar14 = func_0x06a4bc78(lVar14,uVar21,uVar13,0,0), lVar14 == 0)) break;
      plVar10 = (long *)func_0x03dc9518(lVar14,*(undefined8 *)puVar5);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x05420abc(uVar13,lVar20,*(undefined8 *)puVar7,0);
      if (plVar10 == (long *)0x0) break;
      func_0x06807170(plVar10,uVar13);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04058ad0(uVar13,lVar20,*(undefined8 *)puVar6,0);
      func_0x068072d0(plVar10,uVar13);
      if (*(long *)(lVar20 + 0x28) == 0) break;
      uVar13 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItem
                         (*(long *)(lVar20 + 0x28),iVar19,0);
      (**(code **)(*plVar10 + 0x1a8))(plVar10,uVar13,*(undefined8 *)(*plVar10 + 0x1b0));
      if (*(long *)(lVar20 + 0x28) == 0) break;
      lVar14 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItemUUID
                         (*(long *)(lVar20 + 0x28),iVar19,0);
      plVar10[0x10] = lVar14;
      func_0x032809c4();
      if (*(long *)(lVar20 + 0x28) == 0) break;
      uVar13 = Merger_Game_ViewModel_InventoryItemsViewModel__GetItemAsset
                         (*(long *)(lVar20 + 0x28),iVar19,0,0);
      func_0x068074a4(plVar10,uVar13);
      *(int *)(plVar10 + 0xf) = iVar19;
      lVar14 = *(long *)(lVar20 + 0x58);
      if (lVar14 == 0) break;
      lVar15 = *(long *)(lVar14 + 0x10);
      lVar17 = *(long *)puVar8;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar15 == 0) break;
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        plVar16 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        *plVar16 = (long)plVar10;
        func_0x032809c4(plVar16,plVar10);
      }
      else {
        func_0x0414446c(lVar14,plVar10,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)(lVar20 + 0x28);
      iVar19 = iVar19 + 1;
    } while (lVar14 != 0);
  }
  func_0x03280cac();
  return;
}


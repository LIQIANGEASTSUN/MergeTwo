/* Ghidra 12.1.2 native pseudocode; RVA 0x6709970; Merger.Game.Views.Inventory.InventoryProducerView.ClearInventory; status ok */


void Merger_Game_Views_Inventory_InventoryProducerView__ClearInventory(long *param_1)

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
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 *unaff_x24;
  undefined8 *puVar23;
  long *unaff_x25;
  long *plVar24;
  undefined1 auVar25 [12];
  
  puVar3 = PTR_DAT_0780c690;
  plVar12 = (long *)PTR_DAT_0780c688;
  if ((bRam0000000007e287c3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780c688);
    func_0x03280a18(PTR_DAT_0780c698);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780c690);
    func_0x03280a18(PTR_DAT_0780c6a0);
    func_0x03280a18(PTR_DAT_0780c6a8);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0776bf20);
    bRam0000000007e287c3 = 1;
  }
  plVar20 = (long *)param_1[0xb];
  uVar10 = func_0x03280ca0(*plVar12);
  func_0x054221d4(uVar10,param_1,*(undefined8 *)puVar3,0);
  puVar23 = unaff_x24;
  plVar24 = unaff_x25;
  if (plVar20 != (long *)0x0) {
    func_0x04144fb0(plVar20,uVar10,*(undefined8 *)PTR_DAT_0780c6a8);
    lVar14 = param_1[0xb];
    if (lVar14 != 0) {
      iVar19 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar19) {
        func_0x057b9c7c(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
      }
      lVar14 = func_0x069aaf28(param_1,0);
      plVar21 = (long *)PTR_DAT_0774e8c8;
      if (lVar14 != 0) {
        param_1 = (long *)func_0x06fed990(lVar14,0);
        plVar24 = (long *)PTR_DAT_0780c698;
        puVar23 = (undefined8 *)PTR_DAT_0776bf20;
        puVar4 = PTR_DAT_0774e8e0;
        puVar3 = PTR_DAT_0774e4e0;
        if (param_1 != (long *)0x0) {
          do {
            lVar15 = *param_1;
            lVar14 = *(long *)puVar4;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar14) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06809b14;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(param_1,lVar14,0);
LAB_06809b14:
            uVar16 = (*(code *)*puVar11)(param_1,puVar11[1]);
            if ((uVar16 & 1) == 0) {
              plVar20 = (long *)0x0;
              goto LAB_06809c1c;
            }
            lVar15 = *param_1;
            lVar14 = *(long *)puVar4;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar14) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_06809b74;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(param_1,lVar14,1);
LAB_06809b74:
            plVar20 = (long *)(*(code *)*puVar11)(param_1,puVar11[1]);
            if (plVar20 == (long *)0x0) goto LAB_06809cac;
            bVar1 = *(byte *)(*puVar23 + 0x130);
            if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) != *puVar23))
            goto LAB_06809ca4;
            uVar10 = func_0x03cec8b4(plVar20,*plVar24);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar16 = func_0x06fdeb74(uVar10,0,0);
            if ((uVar16 & 1) != 0) {
              uVar10 = func_0x06fdbed0(plVar20,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              func_0x06fe41c8(uVar10,0);
            }
          } while( true );
        }
        goto LAB_06809cb4;
      }
    }
  }
  goto LAB_06809cb0;
LAB_06809ca4:
  func_0x03281048(plVar20);
LAB_06809cac:
  func_0x03280cac();
  plVar12 = plVar21;
LAB_06809cb0:
  plVar21 = plVar12;
  func_0x03280cac();
  unaff_x24 = puVar23;
  unaff_x25 = plVar24;
LAB_06809cb4:
  plVar24 = unaff_x25;
  puVar23 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    auVar25 = func_0x03280ca4(plVar20);
    if (auVar25._8_4_ != 1) break;
    puVar11 = (undefined8 *)func_0x072ce910();
    plVar20 = (long *)*puVar11;
    func_0x072ce920();
LAB_06809c1c:
    plVar12 = (long *)func_0x03280b90(param_1,*plVar21);
    if (plVar12 != (long *)0x0) {
      lVar14 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar21) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06809c7c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar12,*plVar21,0);
LAB_06809c7c:
      (*(code *)*puVar11)(plVar12,puVar11[1]);
      param_1 = plVar12;
    }
    if (plVar20 == (long *)0x0) {
      return;
    }
  }
  plVar12 = (long *)func_0x03280b90(param_1,*plVar21);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *plVar21) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06809d64;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar12,*plVar21,0);
LAB_06809d64:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  func_0x03365958(auVar25._0_8_);
  func_0x03280ca4(0);
  lVar14 = func_0x02f09514();
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
  Merger_Game_Views_Inventory_InventoryProducerView__ClearInventory(lVar14);
  puVar8 = PTR_DAT_0780c6d8;
  puVar7 = PTR_DAT_0780c6c8;
  puVar6 = PTR_DAT_0780c6b0;
  puVar5 = PTR_DAT_077e7208;
  puVar4 = PTR_DAT_077e71e0;
  puVar3 = PTR_DAT_07779820;
  lVar15 = *(long *)(lVar14 + 0x28);
  if (lVar15 != 0) {
    iVar19 = 0;
    while (lVar15 = func_0x0672bd90(lVar15,0), puVar23 = (undefined8 *)puVar6,
          plVar24 = (long *)puVar7, lVar15 != 0) {
      iVar9 = func_0x04545968(lVar15,*(undefined8 *)puVar5);
      if (iVar9 <= iVar19) goto LAB_0680a0ec;
      lVar15 = *(long *)(lVar14 + 0x28);
      uVar22 = *(undefined8 *)(lVar14 + 0x48);
      uVar10 = func_0x069aaf28(lVar14,0);
      if ((lVar15 == 0) || (lVar15 = func_0x06a4bc78(lVar15,uVar22,uVar10,0,0), lVar15 == 0)) break;
      plVar12 = (long *)func_0x03dc9518(lVar15,*(undefined8 *)puVar6);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07773028);
      func_0x05420abc(uVar10,lVar14,*(undefined8 *)PTR_DAT_0780c6c0,0);
      if (plVar12 == (long *)0x0) break;
      func_0x06808f98(plVar12,uVar10);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db230);
      func_0x054221d4(uVar10,lVar14,*(undefined8 *)PTR_DAT_0780c6b8,0);
      func_0x068090f8(plVar12,uVar10);
      if ((*(long *)(lVar14 + 0x28) == 0) ||
         (lVar15 = func_0x0672bd90(*(long *)(lVar14 + 0x28),0), lVar15 == 0)) break;
      uVar10 = func_0x045459f0(lVar15,iVar19,*(undefined8 *)puVar4);
      (**(code **)(*plVar12 + 0x1a8))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x1b0));
      *(int *)(plVar12 + 0x16) = iVar19;
      if (*(long *)(lVar14 + 0x28) == 0) break;
      lVar15 = Merger_Game_ViewModel_InventoryProducerViewModel__GetItem
                         (*(long *)(lVar14 + 0x28),iVar19,0);
      func_0x0680945c(plVar12,lVar15 != 0);
      if (*(long *)(lVar14 + 0x28) == 0) break;
      lVar15 = func_0x0672be18(*(long *)(lVar14 + 0x28),0);
      if (((*(long *)(lVar14 + 0x28) == 0) ||
          (lVar13 = func_0x0672bd90(*(long *)(lVar14 + 0x28),0), lVar13 == 0)) ||
         (plVar20 = (long *)func_0x045459f0(lVar13,iVar19,*(undefined8 *)puVar4),
         plVar20 == (long *)0x0)) break;
      lVar13 = *plVar20;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0680a04c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar3,0);
LAB_0680a04c:
      uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
      if (lVar15 == 0) break;
      uVar16 = func_0x04545a88(lVar15,uVar10,*(undefined8 *)puVar8);
      if ((uVar16 & 1) != 0) {
        Merger_Game_Views_Inventory_InventoryProducerSlotView__ActivateNewBanner(plVar12);
      }
      lVar15 = *(long *)(lVar14 + 0x58);
      if (lVar15 == 0) break;
      lVar13 = *(long *)(lVar15 + 0x10);
      lVar17 = *(long *)puVar7;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar13 == 0) break;
      uVar2 = *(uint *)(lVar15 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
        plVar20 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
        *plVar20 = (long)plVar12;
        func_0x032809c4(plVar20,plVar12);
      }
      else {
        func_0x0414446c(lVar15,plVar12,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar15 = *(long *)(lVar14 + 0x28);
      iVar19 = iVar19 + 1;
      if (lVar15 == 0) break;
    }
  }
  do {
    func_0x03280cac();
LAB_0680a0ec:
    if (*(int *)(lVar14 + 0x50) < 1) {
      return;
    }
    iVar19 = 0;
    while( true ) {
      lVar15 = *(long *)(lVar14 + 0x28);
      uVar22 = *(undefined8 *)(lVar14 + 0x48);
      uVar10 = func_0x069aaf28(lVar14,0);
      if ((lVar15 == 0) || (lVar15 = func_0x06a4bc78(lVar15,uVar22,uVar10,0,0), lVar15 == 0)) break;
      uVar10 = func_0x03dc9518(lVar15,*puVar23);
      if ((*(long *)(lVar14 + 0x28) == 0) ||
         (lVar15 = func_0x0672bbdc(*(long *)(lVar14 + 0x28),0), lVar15 == 0)) break;
      if (iVar19 < *(int *)(lVar15 + 0x18)) {
        func_0x0680a200(lVar14,uVar10,iVar19);
      }
      lVar15 = *(long *)(lVar14 + 0x58);
      if (lVar15 == 0) break;
      lVar13 = *(long *)(lVar15 + 0x10);
      lVar17 = *plVar24;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar13 == 0) break;
      uVar2 = *(uint *)(lVar15 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
        puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
        *puVar11 = uVar10;
        func_0x032809c4(puVar11,uVar10);
      }
      else {
        func_0x0414446c(lVar15,uVar10,
                        *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      iVar19 = iVar19 + 1;
      if (*(int *)(lVar14 + 0x50) <= iVar19) {
        return;
      }
    }
  } while( true );
}


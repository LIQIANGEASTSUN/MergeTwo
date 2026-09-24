/* Ghidra 12.1.2 native pseudocode; RVA 0x67078B8; Merger.Game.Views.Inventory.InventoryItemsView.OnDestroy; status ok */


/* WARNING: Possible PIC construction at 0x072af730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072af87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072afe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072aff40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a4be18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06807f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06808050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068080c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06808054) */
/* WARNING: Removing unreachable block (ram,0x0680805c) */
/* WARNING: Removing unreachable block (ram,0x06808084) */
/* WARNING: Removing unreachable block (ram,0x0680809c) */
/* WARNING: Removing unreachable block (ram,0x068080cc) */
/* WARNING: Removing unreachable block (ram,0x068080ac) */
/* WARNING: Removing unreachable block (ram,0x06807fa0) */
/* WARNING: Removing unreachable block (ram,0x06807fa4) */
/* WARNING: Removing unreachable block (ram,0x06807fd4) */
/* WARNING: Removing unreachable block (ram,0x06808010) */
/* WARNING: Removing unreachable block (ram,0x06808038) */
/* WARNING: Removing unreachable block (ram,0x06a4be1c) */
/* WARNING: Removing unreachable block (ram,0x072aff44) */
/* WARNING: Removing unreachable block (ram,0x072b2338) */
/* WARNING: Removing unreachable block (ram,0x072b2388) */
/* WARNING: Removing unreachable block (ram,0x072b23c0) */
/* WARNING: Removing unreachable block (ram,0x072b23f0) */
/* WARNING: Removing unreachable block (ram,0x072b23f4) */
/* WARNING: Removing unreachable block (ram,0x072b2414) */
/* WARNING: Removing unreachable block (ram,0x072b2428) */
/* WARNING: Removing unreachable block (ram,0x072b242c) */
/* WARNING: Removing unreachable block (ram,0x072b240c) */
/* WARNING: Removing unreachable block (ram,0x072b2438) */
/* WARNING: Removing unreachable block (ram,0x072b2490) */
/* WARNING: Removing unreachable block (ram,0x072b2498) */
/* WARNING: Removing unreachable block (ram,0x072b24cc) */
/* WARNING: Removing unreachable block (ram,0x072b2504) */
/* WARNING: Removing unreachable block (ram,0x072b2518) */
/* WARNING: Removing unreachable block (ram,0x072b2524) */
/* WARNING: Removing unreachable block (ram,0x072b252c) */
/* WARNING: Removing unreachable block (ram,0x072b249c) */
/* WARNING: Removing unreachable block (ram,0x072b24ac) */
/* WARNING: Removing unreachable block (ram,0x072afe54) */
/* WARNING: Removing unreachable block (ram,0x072afdb4) */
/* WARNING: Removing unreachable block (ram,0x072afd4c) */
/* WARNING: Removing unreachable block (ram,0x072afc68) */
/* WARNING: Removing unreachable block (ram,0x072afba4) */
/* WARNING: Removing unreachable block (ram,0x072af880) */
/* WARNING: Removing unreachable block (ram,0x072af818) */
/* WARNING: Removing unreachable block (ram,0x072af690) */
/* WARNING: Removing unreachable block (ram,0x072af698) */
/* WARNING: Removing unreachable block (ram,0x072af6a0) */
/* WARNING: Removing unreachable block (ram,0x072af6c8) */
/* WARNING: Removing unreachable block (ram,0x072af6a4) */
/* WARNING: Removing unreachable block (ram,0x072af6b4) */
/* WARNING: Removing unreachable block (ram,0x072af734) */
/* WARNING: Removing unreachable block (ram,0x072af648) */
/* WARNING: Removing unreachable block (ram,0x068080c8) */
/* WARNING: Removing unreachable block (ram,0x068080e0) */

long * Merger_Game_Views_Inventory_InventoryItemsView__OnDestroy
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 in_x4;
  int *piVar23;
  long lVar24;
  int iVar25;
  code *pcVar26;
  long *plVar27;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 auStack_d0 [2];
  code *pcStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_0780c530;
  puVar5 = PTR_DAT_0780c528;
  if ((bRam0000000007e287aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780c538);
    func_0x03280a18(PTR_DAT_0780c540);
    func_0x03280a18(PTR_DAT_0780c528);
    func_0x03280a18(PTR_DAT_0780c580);
    func_0x03280a18(PTR_DAT_0780c588);
    func_0x03280a18(PTR_DAT_0780c590);
    func_0x03280a18(PTR_DAT_0780c598);
    func_0x03280a18(PTR_DAT_0780c570);
    func_0x03280a18(PTR_DAT_0780c530);
    func_0x03280a18(PTR_DAT_0780c578);
    func_0x03280a18(PTR_DAT_0780c520);
    bRam0000000007e287aa = 1;
  }
  lVar24 = *(long *)(param_8 + 0x28);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x054221d4(uVar12,param_8,*(undefined8 *)puVar6,0);
  puVar6 = PTR_DAT_0780c578;
  puVar5 = PTR_DAT_0780c538;
  if (lVar24 == 0) {
LAB_06807a6c:
    plVar15 = (long *)func_0x03280cac();
    puVar6 = PTR_DAT_0780c5a8;
    puVar5 = PTR_DAT_0780c5a0;
    pcStack_70 = Merger_Game_Views_Inventory_InventoryItemsView__ClearInventory;
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
    lVar24 = plVar15[0xb];
    pcVar13 = (code *)func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x054221d4(pcVar13,plVar15,*(undefined8 *)puVar6,0);
    if (lVar24 == 0) {
LAB_06807dd4:
      pcVar26 = pcVar13;
      func_0x03280cac();
    }
    else {
      func_0x04144fb0(lVar24,pcVar13,*(undefined8 *)PTR_DAT_0780c5c0);
      puVar5 = PTR_DAT_0774e4e0;
      lVar21 = plVar15[0xb];
      if (lVar21 == 0) goto LAB_06807dd4;
      iVar25 = *(int *)(lVar21 + 0x18);
      *(undefined4 *)(lVar21 + 0x18) = 0;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (0 < iVar25) {
        func_0x057b9c7c(*(undefined8 *)(lVar21 + 0x10),0,iVar25,0);
      }
      lVar24 = plVar15[0xd];
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar14 = func_0x06fdeb74(lVar24,0,0);
      if ((uVar14 & 1) != 0) {
        lVar24 = plVar15[0xd];
        pcVar13 = (code *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        func_0x056ed730(pcVar13,plVar15,*(undefined8 *)PTR_DAT_0780c5b0,0);
        if (lVar24 == 0) goto LAB_06807dd4;
        func_0x06808468(lVar24,pcVar13);
      }
      lVar21 = func_0x069aaf28(plVar15,0);
      pcVar26 = (code *)PTR_DAT_0774e8c8;
      if (lVar21 == 0) goto LAB_06807dd4;
      plVar15 = (long *)func_0x06fed990(lVar21,0);
      puVar7 = PTR_DAT_0776bf20;
      puVar6 = PTR_DAT_0774e8e0;
      if (plVar15 != (long *)0x0) {
        do {
          lVar20 = *plVar15;
          lVar21 = *(long *)puVar6;
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar21) {
                puVar17 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_06807c7c;
              }
              uVar14 = uVar14 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar14 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar15,lVar21,0);
LAB_06807c7c:
          uVar14 = (*(code *)*puVar17)(plVar15,puVar17[1]);
          if ((uVar14 & 1) == 0) {
            lVar24 = 0;
            goto LAB_06807d48;
          }
          lVar20 = *plVar15;
          lVar21 = *(long *)puVar6;
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar21) {
                puVar17 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_06807cdc;
              }
              uVar14 = uVar14 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar14 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar15,lVar21,1);
LAB_06807cdc:
          plVar27 = (long *)(*(code *)*puVar17)(plVar15,puVar17[1]);
          if (plVar27 == (long *)0x0) goto LAB_06807dd0;
          bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((*(byte *)(*plVar27 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7))
          goto LAB_06807dcc;
          lVar24 = func_0x06fdbed0(plVar27,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          func_0x06fe41c8(lVar24,0);
        } while( true );
      }
    }
    func_0x03280cac();
    while( true ) {
      auVar30 = func_0x03280ca4(lVar24);
      uStack_68 = auVar30._0_8_;
      if (auVar30._8_4_ != 1) break;
      plVar27 = (long *)func_0x072ce910();
      lVar24 = *plVar27;
      func_0x072ce920();
LAB_06807d48:
      plVar18 = (long *)func_0x03280b90(plVar15,*(long *)pcVar26);
      plVar27 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        lVar21 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)pcVar26) {
              puVar17 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_06807da8;
            }
            uVar14 = uVar14 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar14 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar18,*(long *)pcVar26,0);
LAB_06807da8:
        plVar27 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
        plVar15 = plVar18;
      }
      if (lVar24 == 0) {
        return plVar27;
      }
    }
    plVar15 = (long *)func_0x03280b90(plVar15,*(long *)pcVar26);
    if (plVar15 != (long *)0x0) {
      lVar24 = *plVar15;
      uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar14 != 0) {
        piVar23 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)pcVar26) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_06807e7c;
          }
          uVar14 = uVar14 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar15,*(long *)pcVar26,0);
LAB_06807e7c:
      (*(code *)*puVar17)(plVar15,puVar17[1]);
    }
    func_0x03365958(uStack_68);
    func_0x03280ca4(0);
    lVar24 = func_0x02f09514();
    puVar10 = auStack_d0;
    auStack_d0[0] = 0x6807ea0;
    uStack_80 = 0;
    pcStack_88 = pcVar26;
    plStack_78 = plVar15;
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
    unaff_x25 = PTR_DAT_0780c5d8;
    unaff_x23 = (undefined8 *)PTR_DAT_0780c5c8;
    unaff_x24 = (undefined8 *)PTR_DAT_07773028;
    if (*(long *)(lVar24 + 0x28) == 0) {
LAB_068080ec:
      plVar15 = (long *)func_0x03280cac();
      return plVar15;
    }
    lVar21 = 0;
    plVar15 = (long *)func_0x0672ac88(*(long *)(lVar24 + 0x28),0);
    if ((int)plVar15 < 1) {
      return plVar15;
    }
    lVar11 = *(long *)(lVar24 + 0x28);
    unaff_x22 = *(long *)(lVar24 + 0x48);
    auVar28._8_8_ = unaff_x22;
    auVar28._0_8_ = lVar11;
    lVar20 = func_0x069aaf28(lVar24,0);
    if (lVar11 == 0) goto LAB_068080ec;
    lVar22 = 0;
    in_x4 = 0;
    uVar12 = 0x6807fa0;
  }
  else {
    func_0x03cc74c4(lVar24,uVar12,*(undefined8 *)PTR_DAT_0780c588);
    lVar24 = *(long *)(param_8 + 0x28);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x054221d4(uVar12,param_8,*(undefined8 *)puVar6,0);
    puVar6 = PTR_DAT_0780c570;
    puVar5 = PTR_DAT_0780c540;
    if (lVar24 == 0) goto LAB_06807a6c;
    func_0x03cc74c4(lVar24,uVar12,*(undefined8 *)PTR_DAT_0780c590);
    lVar24 = *(long *)(param_8 + 0x28);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x054221d4(uVar12,param_8,*(undefined8 *)puVar6,0);
    puVar5 = PTR_DAT_0780c598;
    if (lVar24 == 0) goto LAB_06807a6c;
    lVar21 = *(long *)PTR_DAT_0780c580;
    func_0x03cc74c4(lVar24,uVar12);
    Merger_Game_Views_Inventory_InventoryItemsView__ClearInventory(param_8);
    lVar24 = *(long *)puVar5;
    if ((bRam0000000007e1bfd9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f318);
      func_0x03280a18(PTR_DAT_0777d8b0);
      bRam0000000007e1bfd9 = 1;
    }
    puVar5 = PTR_DAT_0776f318;
    if ((param_8 == 0) || (*(long *)(param_8 + 0x28) == 0)) {
LAB_05369d34:
      auVar28 = func_0x03280cac();
      plVar27 = auVar28._0_8_;
      plVar15 = plVar27;
      if ((bRam0000000007e1bfda & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776f318);
        plVar15 = (long *)func_0x03280a18(PTR_DAT_0777d8b0);
        bRam0000000007e1bfda = 1;
      }
      if ((auVar28._8_8_ & 1) == 0) {
        return plVar15;
      }
      if ((plVar27 != (long *)0x0) && (plVar27[5] != 0)) {
        lVar24 = func_0x06725ed4(plVar27[5],0);
        uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
        func_0x0541e11c(uVar12,plVar27,
                        *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x28),0);
        if (lVar24 != 0) {
          func_0x04d0de2c(lVar24,uVar12,*(undefined8 *)PTR_DAT_0777d8b0);
                    /* WARNING: Could not recover jumptable at 0x05369dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar15 = (long *)(**(code **)(*plVar27 + 0x1c8))
                                      (plVar27,*(undefined8 *)(*plVar27 + 0x1d0));
          return plVar15;
        }
      }
      plVar15 = (long *)func_0x03280cac();
      return plVar15;
    }
    lVar11 = func_0x06725ed4(*(long *)(param_8 + 0x28),0);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
    lVar22 = 0;
    lVar21 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x28);
    func_0x0541e11c(uVar12,param_8,lVar21,0);
    if (lVar11 == 0) goto LAB_05369d34;
    lVar20 = *(long *)PTR_DAT_0777d8b0;
    func_0x04d0de2c(lVar11,uVar12);
    if (param_8 == 0) {
      plVar15 = (long *)func_0x03280cac(0,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x30));
      puVar5 = PTR_DAT_0774e4e0;
      if ((bRam0000000007e2fb28 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0,0);
        bRam0000000007e2fb28 = 1;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) != 0) {
        return plVar15;
      }
      func_0x03280b8c();
      return plVar15;
    }
    func_0x06fe0f84(param_8,0);
    if (*(long *)(param_8 + 0x28) == 0) {
      return (long *)0x0;
    }
    func_0x069b2e98(*(long *)(param_8 + 0x28),0);
    lVar24 = *(long *)(param_8 + 0x28);
    if (lVar24 == 0) {
      return (long *)0x0;
    }
    if ((bRam0000000007e29c51 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a68,0);
      func_0x03280a18(PTR_DAT_07828a70);
      func_0x03280a18(PTR_DAT_07828a78);
      func_0x03280a18(PTR_DAT_07828a80);
      func_0x03280a18(PTR_DAT_07828a88);
      func_0x03280a18(PTR_DAT_077dca40);
      func_0x03280a18(PTR_DAT_0774e4e0);
      bRam0000000007e29c51 = 1;
    }
    puVar9 = PTR_DAT_07828a80;
    puVar8 = PTR_DAT_07828a70;
    puVar7 = PTR_DAT_07828a68;
    puVar6 = PTR_DAT_077dca40;
    puVar5 = PTR_DAT_0774e4e0;
    pcStack_70 = (code *)0x0;
    uStack_68 = 0;
    if (*(long *)(lVar24 + 0x60) != 0) {
      func_0x053c09a8(&pcStack_88,*(long *)(lVar24 + 0x60),*(undefined8 *)PTR_DAT_07828a88);
      plVar15 = plStack_78;
      uStack_68 = uStack_80;
      pcStack_70 = pcStack_88;
      while( true ) {
        do {
          uVar14 = func_0x05115444(&pcStack_70,*(undefined8 *)puVar8);
          unaff_x24 = (undefined8 *)puVar7;
          unaff_x23 = (undefined8 *)puVar9;
          unaff_x25 = puVar8;
          if ((uVar14 & 1) == 0) {
            func_0x05115440(&pcStack_70,*(undefined8 *)puVar7);
            goto LAB_06a4bae4;
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar20 = 0;
          uVar14 = func_0x06fdeb74(plVar15,0);
        } while ((uVar14 & 1) == 0);
        plVar27 = *(long **)(lVar24 + 0x40);
        if (plVar27 == (long *)0x0) break;
        unaff_x22 = *(long *)puVar6;
        lVar21 = *plVar27;
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)(unaff_x22 + 0x20)) {
              lVar21 = lVar21 + (long)(int)(*piVar23 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06a4bab0;
            }
            uVar14 = uVar14 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar14 != 0);
        }
        lVar21 = func_0x03256b10(plVar27);
LAB_06a4bab0:
        lVar22 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),unaff_x22);
        lVar20 = 0;
        (**(code **)(lVar22 + 8))(plVar27,plVar15,0,lVar22);
      }
      func_0x03280cac();
    }
    while( true ) {
      auVar30 = func_0x03280cac();
      if (auVar30._8_4_ != 1) break;
      plVar15 = (long *)func_0x072ce910(auVar30._0_8_);
      lVar21 = *plVar15;
      func_0x072ce920();
      func_0x05115440(&pcStack_70,*unaff_x24);
      if (lVar21 != 0) {
        func_0x03280ca4(lVar21);
        break;
      }
LAB_06a4bae4:
      if (*(long *)(lVar24 + 0x60) != 0) {
        plVar15 = (long *)func_0x053c04d4(*(long *)(lVar24 + 0x60),*unaff_x23);
        return plVar15;
      }
    }
    func_0x05115440(&pcStack_70,*unaff_x24);
    func_0x03365958(auVar30._0_8_);
    func_0x03280ca4(0);
    auVar28 = func_0x02f09514();
    lVar24 = auVar28._8_8_;
    lVar21 = auVar28._0_8_;
    puVar10 = (undefined8 *)&stack0xffffffffffffff50;
    lVar11 = 0x7e29000;
    if ((bRam0000000007e29c52 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a90);
      func_0x03280a18(PTR_DAT_077dca40);
      bRam0000000007e29c52 = 1;
    }
    if (*(long *)(lVar21 + 0x60) != 0) {
      lVar20 = *(long *)PTR_DAT_07828a90;
      func_0x053c0700(*(long *)(lVar21 + 0x60),lVar24);
      plVar15 = *(long **)(lVar21 + 0x40);
      lVar21 = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = *plVar15;
        lVar20 = *(long *)PTR_DAT_077dca40;
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)(lVar20 + 0x20)) {
              lVar21 = lVar21 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06a4bc48;
            }
            uVar14 = uVar14 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar14 != 0);
        }
        lVar21 = func_0x03256b10(plVar15);
LAB_06a4bc48:
        lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar20);
                    /* WARNING: Could not recover jumptable at 0x06a4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar15 = (long *)(**(code **)(lVar21 + 8))(plVar15,lVar24,0,lVar21);
        return plVar15;
      }
    }
    uVar12 = 0x6a4bc78;
    auVar28 = func_0x03280cac();
  }
  puVar5 = PTR_DAT_07779af0;
  *(undefined8 *)((long)puVar10 + -0x10) = uVar12;
  lVar16 = *(long *)(auVar28._0_8_ + 0x50);
  if (lVar16 == 0) {
    auVar28 = func_0x03280cac();
    uVar12 = auVar28._8_8_;
    lVar16 = auVar28._0_8_;
    *(undefined8 *)((long)puVar10 + -0x50) = 0x6a4bc94;
    *(undefined **)((long)puVar10 + -0x48) = unaff_x25;
    *(undefined8 **)((long)puVar10 + -0x40) = unaff_x24;
    *(undefined8 **)((long)puVar10 + -0x38) = unaff_x23;
    *(long *)((long)puVar10 + -0x30) = unaff_x22;
    *(long *)((long)puVar10 + -0x28) = lVar11;
    *(long *)((long)puVar10 + -0x20) = lVar21;
    *(long *)((long)puVar10 + -0x18) = lVar24;
    if ((bRam0000000007e29c53 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8c8);
      bRam0000000007e29c53 = 1;
    }
    puVar5 = PTR_DAT_0776f8c8;
    plVar15 = *(long **)(lVar16 + 0x48);
    if (plVar15 != (long *)0x0) {
      lVar24 = *plVar15;
      uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar14 != 0) {
        piVar23 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0776f8c8) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_06a4bd34;
          }
          uVar14 = uVar14 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0776f8c8,0);
LAB_06a4bd34:
      (*(code *)*puVar17)(plVar15,uVar12,lVar20,puVar17[1]);
      func_0x06a4af70(lVar16,lVar22,in_x4);
      plVar15 = *(long **)(lVar16 + 0x48);
      if (plVar15 != (long *)0x0) {
        lVar24 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar14 != 0) {
          piVar23 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
              puVar17 = (undefined8 *)(lVar24 + (long)(*piVar23 + 3) * 0x10 + 0x138);
              goto LAB_06a4bdb0;
            }
            uVar14 = uVar14 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar14 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar5,3);
LAB_06a4bdb0:
                    /* WARNING: Could not recover jumptable at 0x06a4bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar15 = (long *)(*(code *)*puVar17)(plVar15,uVar12,lVar20,puVar17[1]);
        return plVar15;
      }
    }
    func_0x03280cac();
    puVar5 = PTR_DAT_07828a50;
    *(undefined8 *)((long)puVar10 + -0x70) = 0x6a4bdd8;
    *(undefined8 *)((long)puVar10 + -0x60) = uVar12;
    *(long *)((long)puVar10 + -0x58) = lVar20;
    if ((bRam0000000007e29c55 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a50);
      bRam0000000007e29c55 = 1;
    }
    plVar15 = (long *)func_0x03280ca0(*(undefined8 *)puVar5);
    return plVar15;
  }
  lVar22 = 0;
  *(undefined8 *)((long)puVar10 + -0x30) = *(undefined8 *)((long)puVar10 + -0x10);
  *(undefined8 **)((long)puVar10 + -0x28) = unaff_x23;
  *(long *)((long)puVar10 + -0x20) = unaff_x22;
  *(long *)((long)puVar10 + -0x18) = lVar11;
  *(long *)((long)puVar10 + -0x10) = lVar21;
  *(long *)((long)puVar10 + -8) = lVar24;
  lVar24 = lVar20;
  if ((bRam0000000007e34372 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34372 = 1;
  }
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x0728bb8c(lVar21,0);
  if (lVar21 != 0) {
    plVar15 = (long *)(lVar21 + 0x20);
    *plVar15 = lVar20;
    goto SUB_032809c4;
  }
  uVar12 = func_0x03280cac();
  puVar6 = PTR_DAT_07779af0;
  *(undefined8 *)((long)puVar10 + -0xa0) = unaff_d14;
  *(undefined8 *)((long)puVar10 + -0x98) = unaff_d13;
  *(undefined8 *)((long)puVar10 + -0x90) = unaff_d12;
  *(undefined8 *)((long)puVar10 + -0x88) = unaff_d11;
  *(undefined8 *)((long)puVar10 + -0x80) = unaff_d10;
  *(undefined8 *)((long)puVar10 + -0x78) = unaff_d9;
  *(undefined8 *)((long)puVar10 + -0x70) = unaff_d8;
  *(undefined8 *)((long)puVar10 + -0x68) = 0x72af754;
  *(undefined8 **)((long)puVar10 + -0x60) = unaff_x24;
  *(undefined **)((long)puVar10 + -0x58) = puVar5;
  *(undefined8 *)((long)puVar10 + -0x50) = 0;
  *(long *)((long)puVar10 + -0x48) = lVar20;
  *(long *)((long)puVar10 + -0x40) = lVar16;
  *(long *)((long)puVar10 + -0x38) = auVar28._8_8_;
  if ((bRam0000000007e34373 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    func_0x03280a18(PTR_DAT_0776c0d0);
    func_0x03280a18(PTR_DAT_07779af8);
    bRam0000000007e34373 = 1;
  }
  lVar21 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x0728bb8c(lVar21,0);
  if (lVar21 != 0) {
    plVar15 = (long *)(lVar21 + 0x20);
    *plVar15 = lVar24;
    goto SUB_032809c4;
  }
  auVar28 = func_0x03280cac();
  puVar5 = PTR_DAT_0785e990;
  *(undefined8 *)((long)puVar10 + -0x110) = 0x72af8ac;
  *(undefined8 **)((long)puVar10 + -0x100) = unaff_x24;
  *(undefined **)((long)puVar10 + -0xf8) = puVar6;
  *(long *)((long)puVar10 + -0xf0) = lVar24;
  *(undefined8 *)((long)puVar10 + -0xe8) = 0;
  *(undefined8 *)((long)puVar10 + -0xe0) = uVar12;
  *(undefined8 *)((long)puVar10 + -0xd8) = extraout_x1;
  if ((bRam0000000007e3437c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785f5e8);
    func_0x03280a18(PTR_DAT_0785f5f0);
    func_0x03280a18(PTR_DAT_0785f5f8);
    func_0x03280a18(PTR_DAT_0785f600);
    func_0x03280a18(PTR_DAT_0785e990);
    bRam0000000007e3437c = 1;
  }
  puVar6 = PTR_DAT_0785f600;
  func_0x072a73cc(auVar28._0_8_);
  func_0x072cc458(auVar28._8_8_,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar27 = (long *)PTR_DAT_0785f5f8;
  lVar24 = func_0x03f45014(*(undefined8 *)puVar6);
  func_0x072ccc48(auVar28._8_8_,lVar24,0);
  puVar6 = PTR_DAT_0785f5f0;
  if (lVar24 == 0) goto LAB_072af9f4;
  if (0 < *(int *)(lVar24 + 0x18)) {
    iVar25 = 0;
    do {
      uVar12 = func_0x0414419c(lVar24,iVar25,*(undefined8 *)puVar6);
      func_0x0729fe1c(auVar28._0_8_,uVar12);
      iVar25 = iVar25 + 1;
      unaff_x24 = (undefined8 *)puVar6;
    } while (iVar25 < *(int *)(lVar24 + 0x18));
  }
  lVar21 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar15 = (long *)func_0x03f44af8(lVar24,*plVar27);
    if (lVar21 == 0) {
      return plVar15;
    }
    func_0x03280ca4(lVar21);
LAB_072af9f4:
    auVar30 = func_0x03280cac();
    uVar12 = auVar30._0_8_;
    if (auVar30._8_4_ != 1) break;
    plVar15 = (long *)func_0x072ce910(uVar12);
    lVar21 = *plVar15;
    func_0x072ce920();
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03f44af8(lVar24,*plVar27);
  func_0x03365958(uVar12);
  func_0x03280ca4(0);
  auVar28 = func_0x02f09514();
  puVar6 = PTR_DAT_07779af0;
  lVar21 = auVar28._8_8_;
  *(undefined8 *)((long)puVar10 + -0x140) = 0x72afa60;
  *(undefined **)((long)puVar10 + -0x130) = puVar5;
  *(undefined8 *)((long)puVar10 + -0x128) = uVar12;
  *(undefined8 *)((long)puVar10 + -0x120) = 0;
  *(long *)((long)puVar10 + -0x118) = lVar24;
  if ((bRam0000000007e34374 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34374 = 1;
  }
  lVar24 = *(long *)puVar6;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar24 = *(long *)puVar6;
  }
  lVar20 = **(long **)(lVar24 + 0xb8);
  *(undefined8 *)((long)puVar10 + -0x150) = *(undefined8 *)((long)puVar10 + -0x140);
  *(undefined8 **)((long)puVar10 + -0x140) = unaff_x24;
  *(long **)((long)puVar10 + -0x138) = plVar27;
  *(undefined8 *)((long)puVar10 + -0x130) = *(undefined8 *)((long)puVar10 + -0x130);
  *(undefined8 *)((long)puVar10 + -0x128) = *(undefined8 *)((long)puVar10 + -0x128);
  *(undefined8 *)((long)puVar10 + -0x120) = *(undefined8 *)((long)puVar10 + -0x120);
  *(undefined8 *)((long)puVar10 + -0x118) = *(undefined8 *)((long)puVar10 + -0x118);
  lVar24 = lVar20;
  if ((bRam0000000007e34377 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785f5b8);
    bRam0000000007e34377 = 1;
  }
  plVar18 = (long *)func_0x06fd9fc4(lVar21,0);
  if ((plVar18 == (long *)0x0) || (plVar15 = plVar27, *plVar18 == *(long *)PTR_DAT_0774fc08)) {
    plVar15 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if (plVar15 == (long *)0x0) {
      func_0x03280cac();
LAB_072afbe8:
      func_0x03280cb4();
      plVar15 = plVar27;
      goto LAB_072afbec;
    }
    if ((lVar21 == 0) ||
       (lVar11 = func_0x03280b90(lVar21,*(undefined8 *)(*plVar15 + 0x40)), lVar11 != 0)) {
      plVar27 = plVar15;
      if ((int)plVar15[3] != 0) {
        plVar15 = plVar15 + 4;
        *plVar15 = lVar21;
        goto SUB_032809c4;
      }
      goto LAB_072afbe8;
    }
  }
  else {
LAB_072afbec:
    func_0x03281048(plVar18);
  }
  uVar12 = func_0x03280cd0();
  auVar29 = func_0x03280b7c(uVar12,0);
  puVar5 = PTR_DAT_07779af0;
  *(undefined8 *)((long)puVar10 + -0x180) = 0x72afc00;
  *(long **)((long)puVar10 + -0x178) = plVar15;
  *(long **)((long)puVar10 + -0x170) = plVar18;
  *(long *)((long)puVar10 + -0x168) = lVar21;
  *(long *)((long)puVar10 + -0x160) = auVar28._0_8_;
  *(long *)((long)puVar10 + -0x158) = lVar20;
  lVar21 = lVar24;
  if ((bRam0000000007e34375 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34375 = 1;
  }
  lVar20 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x0728bb8c(lVar20,0);
  if (lVar20 == 0) {
    auVar28 = func_0x03280cac();
    puVar6 = PTR_DAT_07779af0;
    *(undefined8 *)((long)puVar10 + -0x1f0) = extraout_d0;
    *(undefined8 *)((long)puVar10 + -0x1e8) = param_2;
    *(undefined8 *)((long)puVar10 + -0x1e0) = param_3;
    *(undefined8 *)((long)puVar10 + -0x1d8) = param_4;
    *(undefined8 *)((long)puVar10 + -0x1d0) = param_5;
    *(undefined8 *)((long)puVar10 + -0x1c8) = param_6;
    *(undefined8 *)((long)puVar10 + -0x1c0) = param_7;
    *(undefined8 *)((long)puVar10 + -0x1b8) = 0x72afc88;
    *(undefined8 **)((long)puVar10 + -0x1b0) = unaff_x24;
    *(undefined **)((long)puVar10 + -0x1a8) = puVar5;
    *(undefined8 *)((long)puVar10 + -0x1a0) = 0;
    *(long *)((long)puVar10 + -0x198) = lVar24;
    *(undefined1 (*) [16])((long)puVar10 + -400) = auVar29;
    lVar24 = lVar21;
    if ((bRam0000000007e34376 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779af0);
      func_0x03280a18(PTR_DAT_0776c0d0);
      func_0x03280a18(PTR_DAT_07779af8);
      bRam0000000007e34376 = 1;
    }
    lVar20 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x0728bb8c(lVar20,0);
    if (lVar20 == 0) {
      auVar29 = func_0x03280cac();
      puVar5 = PTR_DAT_07779af0;
      *(undefined8 *)((long)puVar10 + -0x260) = 0x72afde0;
      *(undefined **)((long)puVar10 + -600) = unaff_x25;
      *(undefined8 **)((long)puVar10 + -0x250) = unaff_x24;
      *(undefined **)((long)puVar10 + -0x248) = puVar6;
      *(long *)((long)puVar10 + -0x240) = lVar21;
      *(undefined8 *)((long)puVar10 + -0x238) = 0;
      *(undefined1 (*) [16])((long)puVar10 + -0x230) = auVar28;
      lVar21 = lVar24;
      lVar20 = lVar22;
      uVar12 = in_x4;
      if ((bRam0000000007e34378 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779af0);
        bRam0000000007e34378 = 1;
      }
      lVar11 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x0728bb8c(lVar11,0);
      if (lVar11 == 0) {
        auVar28 = func_0x03280cac();
        *(undefined8 *)((long)puVar10 + -0x290) = 0x72afe88;
        *(undefined8 *)((long)puVar10 + -0x280) = in_x4;
        *(undefined1 (*) [16])((long)puVar10 + -0x278) = auVar29;
        *(long *)((long)puVar10 + -0x268) = lVar24;
        uVar19 = func_0x0729ea04(lVar20);
        puVar6 = PTR_DAT_0777c9d8;
        *(undefined8 *)((long)puVar10 + -0x2a0) = *(undefined8 *)((long)puVar10 + -0x290);
        *(undefined **)((long)puVar10 + -0x298) = puVar5;
        *(undefined8 *)((long)puVar10 + -0x290) = 0;
        *(long *)((long)puVar10 + -0x288) = lVar22;
        *(undefined8 *)((long)puVar10 + -0x280) = *(undefined8 *)((long)puVar10 + -0x280);
        *(undefined8 *)((long)puVar10 + -0x278) = *(undefined8 *)((long)puVar10 + -0x278);
        *(undefined8 *)((long)puVar10 + -0x270) = *(undefined8 *)((long)puVar10 + -0x270);
        *(undefined8 *)((long)puVar10 + -0x268) = *(undefined8 *)((long)puVar10 + -0x268);
        if ((bRam0000000007e34399 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c9d8,auVar28._8_8_,lVar21,uVar19,uVar12);
          bRam0000000007e34399 = 1;
        }
        lVar24 = func_0x03280ca0(*(undefined8 *)puVar6);
        func_0x0729d178(lVar24,auVar28._0_8_,auVar28._8_8_);
        plVar15 = (long *)(lVar24 + 0x18);
        *plVar15 = 0;
      }
      else {
        plVar15 = (long *)(lVar11 + 0x20);
        *plVar15 = lVar22;
      }
    }
    else {
      plVar15 = (long *)(lVar20 + 0x20);
      *plVar15 = lVar21;
    }
  }
  else {
    plVar15 = (long *)(lVar20 + 0x20);
    *plVar15 = lVar24;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return plVar15;
LAB_06807dcc:
  func_0x03281048();
LAB_06807dd0:
  func_0x03280cac();
  pcVar13 = pcVar26;
  goto LAB_06807dd4;
}


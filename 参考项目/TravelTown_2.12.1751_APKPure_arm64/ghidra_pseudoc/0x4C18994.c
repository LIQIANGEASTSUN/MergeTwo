/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18994; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.OnDestroy; status ok */


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
/* WARNING: Removing unreachable block (ram,0x06a4be1c) */

long * Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___OnDestroy
                 (long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long extraout_x1;
  long lVar15;
  int *piVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_1 == (long *)0x0) {
    plVar18 = (long *)func_0x03280cac();
    return plVar18;
  }
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (param_1 == (long *)0x0) {
    plVar18 = (long *)func_0x03280cac(0,*(undefined8 *)
                                         (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40));
    puVar4 = PTR_DAT_0774e4e0;
    if ((bRam0000000007e2fb28 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0);
      bRam0000000007e2fb28 = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    return plVar18;
  }
  func_0x06fe0f84(param_1,0);
  if (param_1[5] == 0) {
    return (long *)0x0;
  }
  func_0x069b2e98(param_1[5],0);
  lVar9 = param_1[5];
  if (lVar9 == 0) {
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
  puVar8 = PTR_DAT_07828a80;
  puVar7 = PTR_DAT_07828a70;
  puVar6 = PTR_DAT_07828a68;
  puVar5 = PTR_DAT_077dca40;
  puVar4 = PTR_DAT_0774e4e0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    func_0x053c09a8(&uStack_88,*(long *)(lVar9 + 0x60),*(undefined8 *)PTR_DAT_07828a88);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    while( true ) {
      do {
        uVar10 = func_0x05115444(&uStack_70,*(undefined8 *)puVar7);
        uVar12 = uStack_60;
        unaff_x23 = (undefined8 *)puVar8;
        unaff_x24 = (undefined8 *)puVar6;
        if ((uVar10 & 1) == 0) {
          func_0x05115440(&uStack_70,*(undefined8 *)puVar6);
          goto LAB_06a4bae4;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        param_3 = 0;
        uVar10 = func_0x06fdeb74(uVar12,0);
      } while ((uVar10 & 1) == 0);
      plVar18 = *(long **)(lVar9 + 0x40);
      if (plVar18 == (long *)0x0) break;
      lVar19 = *(long *)puVar5;
      lVar15 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_06a4bab0;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      lVar15 = func_0x03256b10(plVar18);
LAB_06a4bab0:
      param_4 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar19);
      param_3 = 0;
      (**(code **)(param_4 + 8))(plVar18,uVar12);
    }
    func_0x03280cac();
  }
  while( true ) {
    auVar21 = func_0x03280cac();
    if (auVar21._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(auVar21._0_8_);
    lVar15 = *plVar18;
    func_0x072ce920();
    func_0x05115440(&uStack_70,*unaff_x24);
    if (lVar15 != 0) {
      func_0x03280ca4(lVar15);
      break;
    }
LAB_06a4bae4:
    if (*(long *)(lVar9 + 0x60) != 0) {
      plVar18 = (long *)func_0x053c04d4(*(long *)(lVar9 + 0x60),*unaff_x23);
      return plVar18;
    }
  }
  func_0x05115440(&uStack_70,*unaff_x24);
  func_0x03365958(auVar21._0_8_);
  func_0x03280ca4(0);
  auVar20 = func_0x02f09514();
  if ((bRam0000000007e29c52 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a90);
    func_0x03280a18(PTR_DAT_077dca40);
    bRam0000000007e29c52 = 1;
  }
  lVar9 = *(long *)(auVar20._0_8_ + 0x60);
  if (lVar9 != 0) {
    param_3 = *(long *)PTR_DAT_07828a90;
    func_0x053c0700(lVar9,auVar20._8_8_);
    plVar18 = *(long **)(auVar20._0_8_ + 0x40);
    if (plVar18 != (long *)0x0) {
      lVar9 = *plVar18;
      lVar15 = *(long *)PTR_DAT_077dca40;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
            goto LAB_06a4bc48;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      lVar9 = func_0x03256b10(plVar18);
LAB_06a4bc48:
      lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar15);
                    /* WARNING: Could not recover jumptable at 0x06a4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(**(code **)(lVar9 + 8))(plVar18,auVar20._8_8_,0,lVar9);
      return plVar18;
    }
  }
  lVar9 = func_0x03280cac();
  puVar4 = PTR_DAT_07779af0;
  if (*(long *)(lVar9 + 0x50) == 0) {
    auVar20 = func_0x03280cac();
    lVar9 = auVar20._0_8_;
    if ((bRam0000000007e29c53 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f8c8);
      bRam0000000007e29c53 = 1;
    }
    puVar4 = PTR_DAT_0776f8c8;
    plVar18 = *(long **)(lVar9 + 0x48);
    if (plVar18 != (long *)0x0) {
      lVar15 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0776f8c8) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06a4bd34;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0776f8c8,0);
LAB_06a4bd34:
      (*(code *)*puVar11)(plVar18,auVar20._8_8_,param_3,puVar11[1]);
      func_0x06a4af70(lVar9,param_4,param_5);
      plVar18 = *(long **)(lVar9 + 0x48);
      if (plVar18 != (long *)0x0) {
        lVar9 = *plVar18;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar9 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_06a4bdb0;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar4,3);
LAB_06a4bdb0:
                    /* WARNING: Could not recover jumptable at 0x06a4bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar18 = (long *)(*(code *)*puVar11)(plVar18,auVar20._8_8_,param_3,puVar11[1]);
        return plVar18;
      }
    }
    func_0x03280cac();
    puVar4 = PTR_DAT_07828a50;
    if ((bRam0000000007e29c55 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a50);
      bRam0000000007e29c55 = 1;
    }
    plVar18 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
    return plVar18;
  }
  lVar15 = 0;
  lVar9 = param_3;
  if ((bRam0000000007e34372 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34372 = 1;
  }
  lVar19 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar19,0);
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 0x20);
    *plVar18 = param_3;
    goto SUB_032809c4;
  }
  func_0x03280cac();
  puVar4 = PTR_DAT_07779af0;
  if ((bRam0000000007e34373 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    func_0x03280a18(PTR_DAT_0776c0d0);
    func_0x03280a18(PTR_DAT_07779af8);
    bRam0000000007e34373 = 1;
  }
  lVar19 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar19,0);
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 0x20);
    *plVar18 = lVar9;
    goto SUB_032809c4;
  }
  auVar20 = func_0x03280cac();
  puVar4 = PTR_DAT_0785e990;
  if ((bRam0000000007e3437c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785f5e8);
    func_0x03280a18(PTR_DAT_0785f5f0);
    func_0x03280a18(PTR_DAT_0785f5f8);
    func_0x03280a18(PTR_DAT_0785f600);
    func_0x03280a18(PTR_DAT_0785e990);
    bRam0000000007e3437c = 1;
  }
  puVar5 = PTR_DAT_0785f600;
  func_0x072a73cc(auVar20._0_8_);
  func_0x072cc458(auVar20._8_8_,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar6 = PTR_DAT_0785f5f8;
  lVar9 = func_0x03f45014(*(undefined8 *)puVar5);
  func_0x072ccc48(auVar20._8_8_,lVar9,0);
  puVar5 = PTR_DAT_0785f5f0;
  if (lVar9 == 0) goto LAB_072af9f4;
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar17 = 0;
    do {
      uVar12 = func_0x0414419c(lVar9,iVar17,*(undefined8 *)puVar5);
      func_0x0729fe1c(auVar20._0_8_,uVar12);
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar9 + 0x18));
  }
  lVar19 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar18 = (long *)func_0x03f44af8(lVar9,*(undefined8 *)puVar6);
    if (lVar19 == 0) {
      return plVar18;
    }
    func_0x03280ca4(lVar19);
LAB_072af9f4:
    auVar21 = func_0x03280cac();
    if (auVar21._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910(auVar21._0_8_);
    lVar19 = *plVar18;
    func_0x072ce920();
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03f44af8(lVar9,*(undefined8 *)puVar6);
  func_0x03365958(auVar21._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  puVar4 = PTR_DAT_07779af0;
  if ((bRam0000000007e34374 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34374 = 1;
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar9 = *(long *)puVar4;
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  if ((bRam0000000007e34377 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785f5b8);
    bRam0000000007e34377 = 1;
  }
  plVar13 = (long *)func_0x06fd9fc4(extraout_x1,0);
  if ((plVar13 == (long *)0x0) || (*plVar13 == *(long *)PTR_DAT_0774fc08)) {
    plVar18 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if (plVar18 == (long *)0x0) {
      func_0x03280cac();
LAB_072afbe8:
      func_0x03280cb4();
      goto LAB_072afbec;
    }
    if ((extraout_x1 == 0) ||
       (lVar19 = func_0x03280b90(extraout_x1,*(undefined8 *)(*plVar18 + 0x40)), lVar19 != 0)) {
      if ((int)plVar18[3] != 0) {
        plVar18 = plVar18 + 4;
        *plVar18 = extraout_x1;
        goto SUB_032809c4;
      }
      goto LAB_072afbe8;
    }
  }
  else {
LAB_072afbec:
    func_0x03281048(plVar13);
  }
  uVar12 = func_0x03280cd0();
  func_0x03280b7c(uVar12,0);
  puVar4 = PTR_DAT_07779af0;
  lVar19 = lVar9;
  if ((bRam0000000007e34375 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779af0);
    bRam0000000007e34375 = 1;
  }
  lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0728bb8c(lVar14,0);
  if (lVar14 == 0) {
    func_0x03280cac();
    puVar4 = PTR_DAT_07779af0;
    lVar9 = lVar19;
    if ((bRam0000000007e34376 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779af0);
      func_0x03280a18(PTR_DAT_0776c0d0);
      func_0x03280a18(PTR_DAT_07779af8);
      bRam0000000007e34376 = 1;
    }
    lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x0728bb8c(lVar14,0);
    if (lVar14 == 0) {
      func_0x03280cac();
      puVar4 = PTR_DAT_07779af0;
      lVar19 = lVar15;
      if ((bRam0000000007e34378 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779af0);
        bRam0000000007e34378 = 1;
      }
      lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x0728bb8c(lVar14,0);
      if (lVar14 == 0) {
        auVar20 = func_0x03280cac();
        uVar12 = func_0x0729ea04(lVar19);
        puVar4 = PTR_DAT_0777c9d8;
        if ((bRam0000000007e34399 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c9d8,auVar20._8_8_,lVar9,uVar12,param_5);
          bRam0000000007e34399 = 1;
        }
        lVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x0729d178(lVar9,auVar20._0_8_,auVar20._8_8_);
        plVar18 = (long *)(lVar9 + 0x18);
        *plVar18 = 0;
      }
      else {
        plVar18 = (long *)(lVar14 + 0x20);
        *plVar18 = lVar15;
      }
    }
    else {
      plVar18 = (long *)(lVar14 + 0x20);
      *plVar18 = lVar19;
    }
  }
  else {
    plVar18 = (long *)(lVar14 + 0x20);
    *plVar18 = lVar9;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar18 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar18;
}


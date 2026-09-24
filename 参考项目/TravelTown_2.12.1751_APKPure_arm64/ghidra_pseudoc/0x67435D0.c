/* Ghidra 12.1.2 native pseudocode; RVA 0x67435D0; Merger.Game.Views.Board.BoardQueueView2.OnDestroy; status ok */


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
/* WARNING: Possible PIC construction at 0x07247724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072478dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072479f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07248060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x07247728) */
/* WARNING: Removing unreachable block (ram,0x07247738) */
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
/* WARNING: Removing unreachable block (ram,0x07248064) */

long * Merger_Game_Views_Board_BoardQueueView2__OnDestroy(long param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  long extraout_x1;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 in_x4;
  long lVar30;
  int *piVar31;
  long lVar32;
  long *plVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 unaff_x22;
  undefined8 uVar36;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined *puVar37;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  puVar37 = PTR_DAT_0780df98;
  plVar23 = (long *)PTR_DAT_0780df90;
  if ((bRam0000000007e28a74 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f318);
    func_0x03280a18(PTR_DAT_0780df90);
    func_0x03280a18(PTR_DAT_077726c8);
    func_0x03280a18(PTR_DAT_07772690);
    func_0x03280a18(PTR_DAT_07808288);
    func_0x03280a18(PTR_DAT_077c0da0);
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0780dfe8);
    func_0x03280a18(PTR_DAT_0780dff0);
    func_0x03280a18(PTR_DAT_0780df40);
    func_0x03280a18(PTR_DAT_0780df48);
    func_0x03280a18(PTR_DAT_07772728);
    func_0x03280a18(PTR_DAT_07773078);
    func_0x03280a18(PTR_DAT_07772718);
    func_0x03280a18(PTR_DAT_077c0dc0);
    func_0x03280a18(PTR_DAT_07772838);
    func_0x03280a18(PTR_DAT_0780dfb0);
    func_0x03280a18(PTR_DAT_0780df98);
    func_0x03280a18(PTR_DAT_0780dfb8);
    func_0x03280a18(PTR_DAT_0780dfc0);
    func_0x03280a18(PTR_DAT_0780dfc8);
    func_0x03280a18(PTR_DAT_0780dfd0);
    func_0x03280a18(PTR_DAT_0780dfd8);
    func_0x03280a18(PTR_DAT_0780dfe0);
    func_0x03280a18(PTR_DAT_0780dff8);
    func_0x03280a18(PTR_DAT_0780df50);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a74 = 1;
  }
  lVar32 = *(long *)(param_1 + 0x28);
  uVar21 = func_0x03280ca0(*plVar23);
  func_0x054221d4(uVar21,param_1,*(undefined8 *)puVar37,0);
  puVar34 = PTR_DAT_0780dfc8;
  puVar37 = PTR_DAT_0774e758;
  puVar24 = unaff_x23;
  if (lVar32 != 0) {
    func_0x03cc74c4(lVar32,uVar21,*(undefined8 *)PTR_DAT_0780dff0);
    lVar32 = *(long *)(param_1 + 0x28);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
    func_0x056ed730(uVar21,param_1,*(undefined8 *)puVar34,0);
    puVar7 = PTR_DAT_0780dfc0;
    plVar23 = (long *)puVar37;
    puVar24 = (undefined8 *)puVar34;
    if (lVar32 != 0) {
      func_0x03cc7514(lVar32,uVar21,*(undefined8 *)PTR_DAT_0780df48);
      lVar32 = *(long *)(param_1 + 0x28);
      uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
      func_0x056ed730(uVar21,param_1,*(undefined8 *)puVar7,0);
      puVar34 = PTR_DAT_0780dfe0;
      puVar37 = PTR_DAT_077726c8;
      puVar24 = (undefined8 *)puVar7;
      if (lVar32 != 0) {
        func_0x03cc7514(lVar32,uVar21,*(undefined8 *)PTR_DAT_0780df40);
        lVar32 = *(long *)(param_1 + 0x28);
        uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
        func_0x054221d4(uVar21,param_1,*(undefined8 *)puVar34,0);
        puVar8 = PTR_DAT_0780dfb0;
        puVar7 = PTR_DAT_07808288;
        plVar23 = (long *)puVar37;
        puVar24 = (undefined8 *)puVar34;
        if (lVar32 != 0) {
          func_0x03cc74c4(lVar32,uVar21,*(undefined8 *)PTR_DAT_07772728);
          lVar32 = *(long *)(param_1 + 0x28);
          uVar21 = func_0x03280ca0(*(undefined8 *)puVar7);
          func_0x054221d4(uVar21,param_1,*(undefined8 *)puVar8,0);
          plVar23 = (long *)puVar7;
          puVar24 = (undefined8 *)puVar8;
          if (lVar32 != 0) {
            func_0x03cc74c4(lVar32,uVar21,*(undefined8 *)PTR_DAT_0780dfe8);
            puVar34 = PTR_DAT_0780dfb8;
            puVar37 = PTR_DAT_07772690;
            if (*(long *)(param_1 + 0x28) != 0) {
              lVar32 = func_0x0674b7d0(*(long *)(param_1 + 0x28),0);
              uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
              func_0x05420c00(uVar21,param_1,*(undefined8 *)puVar34,0);
              if (lVar32 != 0) {
                func_0x04d0ec2c(lVar32,uVar21,*(undefined8 *)PTR_DAT_07772718);
                if (*(long *)(param_1 + 0x28) != 0) {
                  lVar32 = func_0x0674b714(*(long *)(param_1 + 0x28),0);
                  puVar34 = PTR_DAT_0780dff8;
                  puVar37 = PTR_DAT_07772838;
                  if (lVar32 != 0) {
                    uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
                    func_0x0541e11c(uVar21,param_1,*(undefined8 *)puVar34,0);
                    func_0x04d0e0cc(lVar32,uVar21,*(undefined8 *)puVar37);
                    plVar23 = (long *)puVar37;
                  }
                  puVar34 = PTR_DAT_0780dfd8;
                  puVar37 = PTR_DAT_07773028;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    lVar32 = func_0x0674ada4(*(long *)(param_1 + 0x28),0);
                    uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
                    func_0x05420abc(uVar21,param_1,*(undefined8 *)puVar34,0);
                    if (lVar32 != 0) {
                      func_0x04d0e87c(lVar32,uVar21,*(undefined8 *)PTR_DAT_07773078);
                      puVar34 = PTR_DAT_0780dfd0;
                      puVar37 = PTR_DAT_077c0da0;
                      if (*(long *)(param_1 + 0x28) != 0) {
                        lVar32 = func_0x0674ae44(*(long *)(param_1 + 0x28),0);
                        uVar21 = func_0x03280ca0(*(undefined8 *)puVar37);
                        func_0x054221d4(uVar21,param_1,*(undefined8 *)puVar34,0);
                        puVar37 = PTR_DAT_0780df50;
                        if (lVar32 != 0) {
                          lVar28 = *(long *)PTR_DAT_077c0dc0;
                          func_0x04d0f3b8(lVar32,uVar21);
                          lVar32 = *(long *)puVar37;
                          if ((bRam0000000007e1bfd9 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0776f318);
                            func_0x03280a18(PTR_DAT_0777d8b0);
                            bRam0000000007e1bfd9 = 1;
                          }
                          puVar37 = PTR_DAT_0776f318;
                          if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
LAB_05369d34:
                            auVar39 = func_0x03280cac();
                            plVar33 = auVar39._0_8_;
                            plStack_60 = (long *)0x5369d38;
                            plVar23 = plVar33;
                            uStack_50 = unaff_x22;
                            if ((bRam0000000007e1bfda & 1) == 0) {
                              func_0x03280a18(PTR_DAT_0776f318);
                              plVar23 = (long *)func_0x03280a18(PTR_DAT_0777d8b0);
                              bRam0000000007e1bfda = 1;
                            }
                            if ((auVar39._8_8_ & 1) == 0) {
                              return plVar23;
                            }
                            if ((plVar33 != (long *)0x0) && (plVar33[5] != 0)) {
                              lVar32 = func_0x06725ed4(plVar33[5],0);
                              uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
                              func_0x0541e11c(uVar21,plVar33,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x28),0
                                             );
                              if (lVar32 != 0) {
                                func_0x04d0de2c(lVar32,uVar21,*(undefined8 *)PTR_DAT_0777d8b0);
                    /* WARNING: Could not recover jumptable at 0x05369dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                plVar23 = (long *)(**(code **)(*plVar33 + 0x1c8))
                                                            (plVar33,*(undefined8 *)
                                                                      (*plVar33 + 0x1d0));
                                return plVar23;
                              }
                            }
                            plVar23 = (long *)func_0x03280cac();
                            return plVar23;
                          }
                          lVar20 = func_0x06725ed4(*(long *)(param_1 + 0x28),0);
                          unaff_x22 = func_0x03280ca0(*(undefined8 *)puVar37);
                          lVar29 = 0;
                          lVar28 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x28);
                          func_0x0541e11c(unaff_x22,param_1,lVar28,0);
                          if (lVar20 == 0) goto LAB_05369d34;
                          lVar28 = *(long *)PTR_DAT_0777d8b0;
                          func_0x04d0de2c(lVar20,unaff_x22);
                          if (param_1 == 0) {
                            plVar23 = (long *)func_0x03280cac(0,*(undefined8 *)
                                                                 (*(long *)(*(long *)(lVar32 + 0x20)
                                                                           + 0xc0) + 0x30));
                            puVar37 = PTR_DAT_0774e4e0;
                            if ((bRam0000000007e2fb28 & 1) == 0) {
                              func_0x03280a18(PTR_DAT_0774e4e0,0);
                              bRam0000000007e2fb28 = 1;
                            }
                            if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                              func_0x03280b8c();
                            }
                            return plVar23;
                          }
                          func_0x06fe0f84(param_1,0);
                          if (*(long *)(param_1 + 0x28) == 0) {
                            return (long *)0x0;
                          }
                          func_0x069b2e98(*(long *)(param_1 + 0x28),0);
                          lVar32 = *(long *)(param_1 + 0x28);
                          if (lVar32 == 0) {
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
                          puVar34 = PTR_DAT_077dca40;
                          puVar37 = PTR_DAT_0774e4e0;
                          plStack_70 = (long *)0x0;
                          plStack_68 = (long *)0x0;
                          plStack_60 = (long *)0x0;
                          if (*(long *)(lVar32 + 0x60) != 0) {
                            func_0x053c09a8(&plStack_88,*(long *)(lVar32 + 0x60),
                                            *(undefined8 *)PTR_DAT_07828a88);
                            plStack_68 = (long *)uStack_80;
                            plStack_70 = plStack_88;
                            plStack_60 = puStack_78;
                            while( true ) {
                              do {
                                uVar22 = func_0x05115444(&plStack_70,*(undefined8 *)puVar8);
                                plVar23 = plStack_60;
                                unaff_x24 = (long *)puVar7;
                                unaff_x23 = (undefined8 *)puVar9;
                                if ((uVar22 & 1) == 0) {
                                  func_0x05115440(&plStack_70,*(undefined8 *)puVar7);
                                  goto LAB_06a4bae4;
                                }
                                if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                                  func_0x03280b8c();
                                }
                                lVar28 = 0;
                                uVar22 = func_0x06fdeb74(plVar23,0);
                              } while ((uVar22 & 1) == 0);
                              plVar33 = *(long **)(lVar32 + 0x40);
                              if (plVar33 == (long *)0x0) break;
                              lVar20 = *(long *)puVar34;
                              lVar28 = *plVar33;
                              uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
                              if (uVar22 != 0) {
                                piVar31 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)(lVar20 + 0x20)) {
                                    lVar28 = lVar28 + (long)(int)(*piVar31 +
                                                                 (uint)*(ushort *)(lVar20 + 0x50)) *
                                                      0x10 + 0x138;
                                    goto LAB_06a4bab0;
                                  }
                                  uVar22 = uVar22 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar22 != 0);
                              }
                              lVar28 = func_0x03256b10(plVar33);
LAB_06a4bab0:
                              lVar29 = func_0x03280b88(*(undefined8 *)(lVar28 + 8),lVar20);
                              lVar28 = 0;
                              (**(code **)(lVar29 + 8))(plVar33,plVar23);
                            }
                            func_0x03280cac();
                          }
                          while( true ) {
                            auVar40 = func_0x03280cac();
                            if (auVar40._8_4_ != 1) break;
                            plVar23 = (long *)func_0x072ce910(auVar40._0_8_);
                            lVar20 = *plVar23;
                            func_0x072ce920();
                            func_0x05115440(&plStack_70,*unaff_x24);
                            if (lVar20 != 0) {
                              func_0x03280ca4(lVar20);
                              break;
                            }
LAB_06a4bae4:
                            if (*(long *)(lVar32 + 0x60) != 0) {
                              plVar23 = (long *)func_0x053c04d4(*(long *)(lVar32 + 0x60),*unaff_x23)
                              ;
                              return plVar23;
                            }
                          }
                          func_0x05115440(&plStack_70,*unaff_x24);
                          func_0x03365958(auVar40._0_8_);
                          func_0x03280ca4(0);
                          auVar39 = func_0x02f09514();
                          if ((bRam0000000007e29c52 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_07828a90);
                            func_0x03280a18(PTR_DAT_077dca40);
                            bRam0000000007e29c52 = 1;
                          }
                          lVar32 = *(long *)(auVar39._0_8_ + 0x60);
                          if (lVar32 != 0) {
                            lVar28 = *(long *)PTR_DAT_07828a90;
                            func_0x053c0700(lVar32,auVar39._8_8_);
                            plVar23 = *(long **)(auVar39._0_8_ + 0x40);
                            if (plVar23 != (long *)0x0) {
                              lVar32 = *plVar23;
                              lVar28 = *(long *)PTR_DAT_077dca40;
                              uVar22 = (ulong)*(ushort *)(lVar32 + 0x12e);
                              if (uVar22 != 0) {
                                piVar31 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)(lVar28 + 0x20)) {
                                    lVar32 = lVar32 + (long)(int)(*piVar31 +
                                                                 (uint)*(ushort *)(lVar28 + 0x50)) *
                                                      0x10 + 0x138;
                                    goto LAB_06a4bc48;
                                  }
                                  uVar22 = uVar22 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar22 != 0);
                              }
                              lVar32 = func_0x03256b10(plVar23);
LAB_06a4bc48:
                              lVar32 = func_0x03280b88(*(undefined8 *)(lVar32 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x06a4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              plVar23 = (long *)(**(code **)(lVar32 + 8))
                                                          (plVar23,auVar39._8_8_,0,lVar32);
                              return plVar23;
                            }
                          }
                          lVar32 = func_0x03280cac();
                          puVar37 = PTR_DAT_07779af0;
                          if (*(long *)(lVar32 + 0x50) == 0) {
                            auVar39 = func_0x03280cac();
                            lVar32 = auVar39._0_8_;
                            if ((bRam0000000007e29c53 & 1) == 0) {
                              func_0x03280a18(PTR_DAT_0776f8c8);
                              bRam0000000007e29c53 = 1;
                            }
                            puVar37 = PTR_DAT_0776f8c8;
                            plVar23 = *(long **)(lVar32 + 0x48);
                            if (plVar23 != (long *)0x0) {
                              lVar20 = *plVar23;
                              uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
                              if (uVar22 != 0) {
                                piVar31 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0776f8c8) {
                                    puVar24 = (undefined8 *)(lVar20 + (long)*piVar31 * 0x10 + 0x138)
                                    ;
                                    goto LAB_06a4bd34;
                                  }
                                  uVar22 = uVar22 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar22 != 0);
                              }
                              puVar24 = (undefined8 *)
                                        func_0x03256b10(plVar23,*(long *)PTR_DAT_0776f8c8,0);
LAB_06a4bd34:
                              (*(code *)*puVar24)(plVar23,auVar39._8_8_,lVar28,puVar24[1]);
                              func_0x06a4af70(lVar32,lVar29,in_x4);
                              plVar23 = *(long **)(lVar32 + 0x48);
                              if (plVar23 != (long *)0x0) {
                                lVar32 = *plVar23;
                                uVar22 = (ulong)*(ushort *)(lVar32 + 0x12e);
                                if (uVar22 != 0) {
                                  piVar31 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar31 + -2) == *(long *)puVar37) {
                                      puVar24 = (undefined8 *)
                                                (lVar32 + (long)(*piVar31 + 3) * 0x10 + 0x138);
                                      goto LAB_06a4bdb0;
                                    }
                                    uVar22 = uVar22 - 1;
                                    piVar31 = piVar31 + 4;
                                  } while (uVar22 != 0);
                                }
                                puVar24 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar37,3);
LAB_06a4bdb0:
                    /* WARNING: Could not recover jumptable at 0x06a4bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                plVar23 = (long *)(*(code *)*puVar24)(plVar23,auVar39._8_8_,lVar28,
                                                                      puVar24[1]);
                                return plVar23;
                              }
                            }
                            func_0x03280cac();
                            puVar37 = PTR_DAT_07828a50;
                            if ((bRam0000000007e29c55 & 1) == 0) {
                              func_0x03280a18(PTR_DAT_07828a50);
                              bRam0000000007e29c55 = 1;
                            }
                            plVar23 = (long *)func_0x03280ca0(*(undefined8 *)puVar37);
                            return plVar23;
                          }
                          lVar20 = 0;
                          lVar32 = lVar28;
                          if ((bRam0000000007e34372 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_07779af0);
                            bRam0000000007e34372 = 1;
                          }
                          lVar29 = func_0x03280ca0(*(undefined8 *)puVar37);
                          func_0x0728bb8c(lVar29,0);
                          if (lVar29 != 0) {
                            plVar23 = (long *)(lVar29 + 0x20);
                            *plVar23 = lVar28;
                            goto SUB_032809c4;
                          }
                          func_0x03280cac();
                          puVar37 = PTR_DAT_07779af0;
                          if ((bRam0000000007e34373 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_07779af0);
                            func_0x03280a18(PTR_DAT_0776c0d0);
                            func_0x03280a18(PTR_DAT_07779af8);
                            bRam0000000007e34373 = 1;
                          }
                          lVar28 = func_0x03280ca0(*(undefined8 *)puVar37);
                          func_0x0728bb8c(lVar28,0);
                          if (lVar28 != 0) {
                            plVar23 = (long *)(lVar28 + 0x20);
                            *plVar23 = lVar32;
                            goto SUB_032809c4;
                          }
                          auVar39 = func_0x03280cac();
                          puVar37 = PTR_DAT_0785e990;
                          if ((bRam0000000007e3437c & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0785f5e8);
                            func_0x03280a18(PTR_DAT_0785f5f0);
                            func_0x03280a18(PTR_DAT_0785f5f8);
                            func_0x03280a18(PTR_DAT_0785f600);
                            func_0x03280a18(PTR_DAT_0785e990);
                            bRam0000000007e3437c = 1;
                          }
                          puVar34 = PTR_DAT_0785f600;
                          func_0x072a73cc(auVar39._0_8_);
                          func_0x072cc458(auVar39._8_8_,0);
                          if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                            func_0x03280b8c();
                          }
                          puVar7 = PTR_DAT_0785f5f8;
                          lVar32 = func_0x03f45014(*(undefined8 *)puVar34);
                          func_0x072ccc48(auVar39._8_8_,lVar32,0);
                          puVar34 = PTR_DAT_0785f5f0;
                          if (lVar32 == 0) goto LAB_072af9f4;
                          if (0 < *(int *)(lVar32 + 0x18)) {
                            iVar12 = 0;
                            do {
                              uVar21 = func_0x0414419c(lVar32,iVar12,*(undefined8 *)puVar34);
                              func_0x0729fe1c(auVar39._0_8_,uVar21);
                              iVar12 = iVar12 + 1;
                            } while (iVar12 < *(int *)(lVar32 + 0x18));
                          }
                          lVar28 = 0;
                          while( true ) {
                            if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                              func_0x03280b8c();
                            }
                            plVar23 = (long *)func_0x03f44af8(lVar32,*(undefined8 *)puVar7);
                            if (lVar28 == 0) {
                              return plVar23;
                            }
                            func_0x03280ca4(lVar28);
LAB_072af9f4:
                            auVar40 = func_0x03280cac();
                            if (auVar40._8_4_ != 1) break;
                            plVar23 = (long *)func_0x072ce910(auVar40._0_8_);
                            lVar28 = *plVar23;
                            func_0x072ce920();
                          }
                          if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                            func_0x03280b8c();
                          }
                          func_0x03f44af8(lVar32,*(undefined8 *)puVar7);
                          func_0x03365958(auVar40._0_8_);
                          func_0x03280ca4(0);
                          func_0x02f09514();
                          puVar37 = PTR_DAT_07779af0;
                          if ((bRam0000000007e34374 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_07779af0);
                            bRam0000000007e34374 = 1;
                          }
                          lVar32 = *(long *)puVar37;
                          if (*(int *)(lVar32 + 0xe0) == 0) {
                            func_0x03280b8c();
                            lVar32 = *(long *)puVar37;
                          }
                          lVar32 = **(long **)(lVar32 + 0xb8);
                          if ((bRam0000000007e34377 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0774fc08);
                            func_0x03280a18(PTR_DAT_0774e5a0);
                            func_0x03280a18(PTR_DAT_0785f5b8);
                            bRam0000000007e34377 = 1;
                          }
                          plVar33 = (long *)func_0x06fd9fc4(extraout_x1,0);
                          if ((plVar33 == (long *)0x0) || (*plVar33 == *(long *)PTR_DAT_0774fc08)) {
                            plVar23 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
                            if (plVar23 == (long *)0x0) {
                              func_0x03280cac();
LAB_072afbe8:
                              func_0x03280cb4();
                              goto LAB_072afbec;
                            }
                            if ((extraout_x1 == 0) ||
                               (lVar28 = func_0x03280b90(extraout_x1,
                                                         *(undefined8 *)(*plVar23 + 0x40)),
                               lVar28 != 0)) {
                              if ((int)plVar23[3] != 0) {
                                plVar23 = plVar23 + 4;
                                *plVar23 = extraout_x1;
                                goto SUB_032809c4;
                              }
                              goto LAB_072afbe8;
                            }
                          }
                          else {
LAB_072afbec:
                            func_0x03281048(plVar33);
                          }
                          uVar21 = func_0x03280cd0();
                          func_0x03280b7c(uVar21,0);
                          puVar37 = PTR_DAT_07779af0;
                          lVar28 = lVar32;
                          if ((bRam0000000007e34375 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_07779af0);
                            bRam0000000007e34375 = 1;
                          }
                          lVar29 = func_0x03280ca0(*(undefined8 *)puVar37);
                          func_0x0728bb8c(lVar29,0);
                          if (lVar29 == 0) {
                            func_0x03280cac();
                            puVar37 = PTR_DAT_07779af0;
                            lVar32 = lVar28;
                            if ((bRam0000000007e34376 & 1) == 0) {
                              func_0x03280a18(PTR_DAT_07779af0);
                              func_0x03280a18(PTR_DAT_0776c0d0);
                              func_0x03280a18(PTR_DAT_07779af8);
                              bRam0000000007e34376 = 1;
                            }
                            lVar29 = func_0x03280ca0(*(undefined8 *)puVar37);
                            func_0x0728bb8c(lVar29,0);
                            if (lVar29 == 0) {
                              func_0x03280cac();
                              puVar37 = PTR_DAT_07779af0;
                              lVar28 = lVar20;
                              if ((bRam0000000007e34378 & 1) == 0) {
                                func_0x03280a18(PTR_DAT_07779af0);
                                bRam0000000007e34378 = 1;
                              }
                              lVar29 = func_0x03280ca0(*(undefined8 *)puVar37);
                              func_0x0728bb8c(lVar29,0);
                              if (lVar29 == 0) {
                                auVar39 = func_0x03280cac();
                                uVar21 = func_0x0729ea04(lVar28);
                                puVar37 = PTR_DAT_0777c9d8;
                                if ((bRam0000000007e34399 & 1) == 0) {
                                  func_0x03280a18(PTR_DAT_0777c9d8,auVar39._8_8_,lVar32,uVar21,in_x4
                                                 );
                                  bRam0000000007e34399 = 1;
                                }
                                lVar32 = func_0x03280ca0(*(undefined8 *)puVar37);
                                func_0x0729d178(lVar32,auVar39._0_8_,auVar39._8_8_);
                                plVar23 = (long *)(lVar32 + 0x18);
                                *plVar23 = 0;
                              }
                              else {
                                plVar23 = (long *)(lVar29 + 0x20);
                                *plVar23 = lVar20;
                              }
                            }
                            else {
                              plVar23 = (long *)(lVar29 + 0x20);
                              *plVar23 = lVar28;
                            }
                          }
                          else {
                            plVar23 = (long *)(lVar29 + 0x20);
                            *plVar23 = lVar32;
                          }
                          goto SUB_032809c4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar21 = func_0x03280cac();
  puVar37 = PTR_DAT_07772cf0;
  uStack_50 = 0x6843a58;
  if ((bRam0000000007e28a75 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772cf0);
    bRam0000000007e28a75 = 1;
  }
  lVar32 = func_0x06842f08(uVar21);
  if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar37);
  }
  puVar37 = PTR_DAT_07772cf0;
  plVar33 = (long *)0x7e33000;
  if ((bRam0000000007e3393a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772cf0,0);
    func_0x03280a18(PTR_DAT_0785cbd8);
    func_0x03280a18(PTR_DAT_0785cbe0);
    bRam0000000007e3393a = 1;
  }
  lVar28 = *(long *)puVar37;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar28 = *(long *)puVar37;
  }
  if ((**(long **)(lVar28 + 0xb8) == 0) ||
     (plVar25 = (long *)func_0x0442218c(**(long **)(lVar28 + 0xb8),*(undefined8 *)PTR_DAT_0785cbd8),
     plVar25 == (long *)0x0)) {
    uVar21 = 0x7247758;
    auVar40 = func_0x03280cac();
  }
  else {
    func_0x07247284(plVar25,lVar32);
    auVar40._8_4_ = 1;
    auVar40._0_8_ = plVar25;
    uVar21 = 0x7247728;
    plVar33 = plVar25;
  }
  plVar26 = auVar40._0_8_;
  plStack_68 = (long *)puVar37;
  plVar25 = plVar26;
  uStack_80 = uVar21;
  puStack_78 = puVar24;
  plStack_70 = plVar23;
  plStack_60 = plVar33;
  lStack_58 = lVar32;
  if ((bRam0000000007e3393b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785cbe8);
    func_0x03280a18(PTR_DAT_0785cbf0);
    func_0x03280a18(PTR_DAT_0785cbf8);
    func_0x03280a18(PTR_DAT_0785cc00);
    func_0x03280a18(PTR_DAT_0785cb80);
    plVar25 = (long *)func_0x03280a18(PTR_DAT_0785cc08);
    bRam0000000007e3393b = 1;
  }
  puVar37 = PTR_DAT_0785cb80;
  if (auVar40._8_4_ != 1) {
    return plVar25;
  }
  lVar28 = plVar26[2];
  lVar32 = *(long *)PTR_DAT_0785cb80;
  if (*(int *)(lVar32 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar32 = *(long *)puVar37;
  }
  lVar20 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x10);
  if (lVar20 == 0) {
    if (*(int *)(lVar32 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar32 = *(long *)puVar37;
    }
    uVar21 = **(undefined8 **)(lVar32 + 0xb8);
    lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
    func_0x0479b274(lVar32,uVar21,*(undefined8 *)PTR_DAT_0785cbe8,0);
    plVar23 = (long *)(*(long *)(*(long *)puVar37 + 0xb8) + 0x10);
    *plVar23 = lVar32;
  }
  else {
    func_0x07247a24(plVar26,lVar28,lVar20);
    lVar32 = *(long *)puVar37;
    lVar28 = plVar26[2];
    if (*(int *)(lVar32 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar32 = *(long *)puVar37;
    }
    lVar20 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x18);
    if (lVar20 == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar32 = *(long *)puVar37;
      }
      uVar21 = **(undefined8 **)(lVar32 + 0xb8);
      lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
      func_0x0479b274(lVar32,uVar21,*(undefined8 *)PTR_DAT_0785cbf0,0);
      plVar23 = (long *)(*(long *)(*(long *)puVar37 + 0xb8) + 0x18);
      *plVar23 = lVar32;
    }
    else {
      func_0x07247cf4(plVar26,lVar28,lVar20);
      lVar32 = *(long *)puVar37;
      lVar28 = plVar26[2];
      if (*(int *)(lVar32 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar32 = *(long *)puVar37;
      }
      lVar20 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x20);
      if (lVar20 == 0) {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar32 = *(long *)puVar37;
        }
        uVar21 = **(undefined8 **)(lVar32 + 0xb8);
        lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(lVar32,uVar21,*(undefined8 *)PTR_DAT_0785cbf8,0);
        plVar23 = (long *)(*(long *)(*(long *)puVar37 + 0xb8) + 0x20);
        *plVar23 = lVar32;
      }
      else {
        func_0x07247a24(plVar26,lVar28,lVar20);
        lVar32 = *(long *)puVar37;
        plVar23 = (long *)plVar26[2];
        if (*(int *)(lVar32 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar32 = *(long *)puVar37;
        }
        lVar28 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x28);
        if (lVar28 != 0) {
          puVar24 = &uStack_50;
          lVar32 = lStack_58;
          plVar25 = plStack_60;
          plVar16 = plStack_68;
          plVar33 = plStack_70;
          puVar15 = puStack_78;
          uVar21 = uStack_80;
          do {
            plVar17 = plVar23;
            puVar37 = PTR_DAT_0774e4e0;
            *(undefined **)((long)puVar24 + -0x60) = unaff_x29;
            *(undefined8 *)((long)puVar24 + -0x58) = uVar21;
            *(undefined **)((long)puVar24 + -0x50) = unaff_x28;
            *(undefined **)((long)puVar24 + -0x48) = unaff_x27;
            *(undefined **)((long)puVar24 + -0x40) = unaff_x26;
            *(undefined **)((long)puVar24 + -0x38) = unaff_x25;
            *(long **)((long)puVar24 + -0x30) = unaff_x24;
            *(undefined8 **)((long)puVar24 + -0x28) = puVar15;
            *(long **)((long)puVar24 + -0x20) = plVar33;
            *(long **)((long)puVar24 + -0x18) = plVar16;
            *(long **)((long)puVar24 + -0x10) = plVar25;
            *(long *)((long)puVar24 + -8) = lVar32;
            if ((bRam0000000007e3393c & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777a030);
              func_0x03280a18(PTR_DAT_0777a038);
              func_0x03280a18(PTR_DAT_0777a040);
              func_0x03280a18(PTR_DAT_0785cc10);
              func_0x03280a18(PTR_DAT_0785cc18);
              func_0x03280a18(PTR_DAT_07772cf0);
              func_0x03280a18(PTR_DAT_0777a060);
              func_0x03280a18(PTR_DAT_0777a068);
              func_0x03280a18(PTR_DAT_0774e4e0);
              func_0x03280a18(PTR_DAT_077502a0);
              func_0x03280a18(PTR_DAT_0784bb60);
              func_0x03280a18(PTR_DAT_0774e558);
              bRam0000000007e3393c = 1;
            }
            if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            plVar23 = (long *)func_0x06fe04ec(plVar17,0,0);
            unaff_x26 = PTR_DAT_0777a040;
            if (((ulong)plVar23 & 1) != 0) {
              return plVar23;
            }
            if (*(int *)(*(long *)PTR_DAT_0777a040 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            plVar33 = (long *)func_0x04d7c8fc(*(undefined8 *)PTR_DAT_0777a030);
            uVar22 = *(ulong *)PTR_DAT_0785cc10;
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar21 = func_0x057a51c4(uVar22,0);
            if (plVar17 == (long *)0x0) {
LAB_072480b8:
              auVar39 = func_0x03280cac();
              puVar34 = PTR_DAT_0774e4e0;
              lVar20 = auVar39._8_8_;
              lVar32 = auVar39._0_8_;
              *(undefined8 *)((long)puVar24 + -0xa0) = 0x72480bc;
              *(long **)((long)puVar24 + -0x90) = unaff_x24;
              *(ulong *)((long)puVar24 + -0x88) = uVar22;
              *(long **)((long)puVar24 + -0x80) = plVar33;
              *(long **)((long)puVar24 + -0x78) = plVar26;
              *(long **)((long)puVar24 + -0x70) = plVar17;
              *(long *)((long)puVar24 + -0x68) = lVar28;
              uVar21 = 0x7e33000;
              if ((bRam0000000007e3393f & 1) == 0) {
                func_0x03280a18(PTR_DAT_077501b0);
                func_0x03280a18(PTR_DAT_0785cc10);
                func_0x03280a18(PTR_DAT_0777a060);
                func_0x03280a18(PTR_DAT_0777a068);
                func_0x03280a18(PTR_DAT_0774e4e0);
                func_0x03280a18(PTR_DAT_0774e558);
                bRam0000000007e3393f = 1;
              }
              if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar14 = func_0x06fe04ec(lVar32,0,0);
              if ((uVar14 & 1) != 0) {
                return (long *)0x0;
              }
              if (lVar32 != 0) {
                uVar21 = func_0x06fdbed0(lVar32,0);
                if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar34);
                }
                uVar14 = func_0x06fe04ec(uVar21,0,0);
                if ((uVar14 & 1) != 0) {
                  return (long *)0x0;
                }
                uVar21 = *(undefined8 *)PTR_DAT_0785cc10;
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar19 = func_0x057a51c4(uVar21,0);
                func_0x06fdc650(lVar32,uVar19,lVar20,0);
                puVar8 = PTR_DAT_0777a068;
                puVar7 = PTR_DAT_077501b0;
                if (lVar20 != 0) {
                  if (0 < *(int *)(lVar20 + 0x18)) {
                    iVar12 = 0;
                    do {
                      plVar23 = (long *)func_0x0414419c(lVar20,iVar12,*(undefined8 *)puVar8);
                      if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                        func_0x03280b8c(*(long *)puVar34);
                      }
                      uVar22 = func_0x06fdeb74(plVar23,0,0);
                      if (((uVar22 & 1) != 0) && (plVar23 != (long *)0x0)) {
                        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
                        if ((bVar1 <= *(byte *)(*plVar23 + 0x130)) &&
                           ((*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar1 * 8 + -8) ==
                             *(long *)puVar7 &&
                            (uVar22 = func_0x06fdb3e4(plVar23,0), (uVar22 & 1) != 0)))) {
                          return (long *)0x1;
                        }
                      }
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < *(int *)(lVar20 + 0x18));
                  }
                  return (long *)0x0;
                }
              }
              uVar19 = func_0x03280cac();
              puVar7 = PTR_DAT_0774e4e0;
              *(undefined8 *)((long)puVar24 + -0xc0) = 0x72482b0;
              *(undefined8 *)((long)puVar24 + -0xb8) = uVar21;
              *(undefined1 (*) [16])((long)puVar24 + -0xb0) = auVar39;
              if ((bRam0000000007e33940 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0780cee0);
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbd8);
                func_0x03280a18(PTR_DAT_0785cbe0);
                func_0x03280a18(PTR_DAT_0774e4e0);
                bRam0000000007e33940 = 1;
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar23 = (long *)func_0x06fe04ec(uVar19,0,0);
              puVar7 = PTR_DAT_07772cf0;
              if (((ulong)plVar23 & 1) != 0) {
                return plVar23;
              }
              lVar32 = *(long *)PTR_DAT_07772cf0;
              if (*(int *)(lVar32 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar32 = *(long *)puVar7;
              }
              plVar23 = (long *)0x7e33000;
              if ((**(long **)(lVar32 + 0xb8) != 0) &&
                 (plVar33 = (long *)func_0x0442218c(**(long **)(lVar32 + 0xb8),
                                                    *(undefined8 *)PTR_DAT_0785cbd8),
                 plVar33 != (long *)0x0)) {
                func_0x07247284(plVar33,uVar19);
                if (*(int *)(*(long *)PTR_DAT_0780cee0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                plVar23 = (long *)func_0x070d7e10(plVar33,0);
                if (((ulong)plVar23 & 1) != 0) {
                  return plVar23;
                }
                lVar32 = *(long *)puVar7;
                if (*(int *)(lVar32 + 0xe0) == 0) {
                  func_0x03280b8c();
                  lVar32 = *(long *)puVar7;
                }
                lVar32 = **(long **)(lVar32 + 0xb8);
                plVar23 = plVar33;
                if (lVar32 != 0) {
                  uVar21 = *(undefined8 *)((long)puVar24 + -0xb0);
                  uVar35 = *(undefined8 *)((long)puVar24 + -0xa8);
                  lVar28 = *(long *)PTR_DAT_0785cbe0;
                  puVar10 = (undefined1 *)((long)puVar24 + -0xa0);
                  uVar19 = *(undefined8 *)((long)puVar24 + -0xc0);
                  uVar36 = *(undefined8 *)((long)puVar24 + -0xb8);
                  goto LAB_044222c4;
                }
              }
              plVar33 = (long *)func_0x03280cac();
              puVar8 = PTR_DAT_07772cf0;
              *(undefined8 *)((long)puVar24 + -0xe0) = 0x72483f4;
              *(undefined **)((long)puVar24 + -0xd8) = puVar7;
              *(long **)((long)puVar24 + -0xd0) = plVar23;
              *(undefined8 *)((long)puVar24 + -200) = uVar19;
              if ((bRam0000000007e33941 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbe0);
                bRam0000000007e33941 = 1;
              }
              lVar32 = *(long *)puVar8;
              if (*(int *)(lVar32 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar32 = *(long *)puVar8;
              }
              lVar32 = **(long **)(lVar32 + 0xb8);
              if (lVar32 == 0) {
                plVar23 = (long *)func_0x03280cac();
                return plVar23;
              }
              uVar21 = *(undefined8 *)((long)puVar24 + -0xd0);
              uVar35 = *(undefined8 *)((long)puVar24 + -200);
              lVar28 = *(long *)PTR_DAT_0785cbe0;
              puVar10 = (undefined1 *)((long)puVar24 + -0xc0);
              uVar19 = *(undefined8 *)((long)puVar24 + -0xe0);
              uVar36 = *(undefined8 *)((long)puVar24 + -0xd8);
              goto LAB_044222c4;
            }
            func_0x06fdc650(plVar17,uVar21,plVar33,0);
            if (*(int *)(*(long *)PTR_DAT_07772cf0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x07247590(plVar33);
            unaff_x28 = PTR_DAT_0785cc18;
            unaff_x27 = PTR_DAT_0777a068;
            if (plVar33 == (long *)0x0) goto LAB_072480b8;
            if ((int)plVar33[3] < 1) goto LAB_0724807c;
            uVar22 = 0;
            do {
              uVar21 = func_0x0414419c(plVar33,uVar22,*(undefined8 *)unaff_x27);
              lVar32 = func_0x03280b90(uVar21,*(undefined8 *)unaff_x28);
              if (lVar32 != 0) {
                uVar21 = func_0x0414419c(plVar33,uVar22,*(undefined8 *)unaff_x27);
                if (lVar28 == 0) goto LAB_072480b8;
                (**(code **)(lVar28 + 0x18))
                          (*(undefined8 *)(lVar28 + 0x40),uVar21,*(undefined8 *)(lVar28 + 0x28));
              }
              puVar34 = PTR_DAT_0784bb60;
              uVar11 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar11;
            } while ((int)uVar11 < (int)plVar33[3]);
            if (0 < (int)plVar33[3]) {
              uVar22 = 0;
              do {
                uVar21 = func_0x0414419c(plVar33,uVar22,*(undefined8 *)unaff_x27);
                lVar32 = func_0x03280b90(uVar21,*(undefined8 *)unaff_x28);
                if (lVar32 == 0) {
                  unaff_x24 = (long *)func_0x0414419c(plVar33,uVar22,*(undefined8 *)unaff_x27);
                  if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                    func_0x03280b8c(*(long *)puVar37);
                  }
                  uVar14 = func_0x06fe351c(unaff_x24,0);
                  if (((uVar14 & 1) != 0) && (unaff_x24 != (long *)0x0)) {
                    lVar32 = *(long *)puVar34;
                    bVar1 = *(byte *)(lVar32 + 0x130);
                    if ((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
                       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == lVar32)) {
                      unaff_x24 = (long *)unaff_x24[4];
                      if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
                        func_0x03280b8c();
                      }
                      uVar14 = func_0x06fdeb74(unaff_x24,plVar17,0);
                      if ((uVar14 & 1) == 0) goto LAB_07247ffc;
                    }
                  }
                  uVar21 = func_0x0414419c(plVar33,uVar22,*(undefined8 *)unaff_x27);
                  if (lVar28 == 0) goto LAB_072480b8;
                  (**(code **)(lVar28 + 0x18))
                            (*(undefined8 *)(lVar28 + 0x40),uVar21,*(undefined8 *)(lVar28 + 0x28));
                }
LAB_07247ffc:
                uVar11 = (int)uVar22 + 1;
                uVar22 = (ulong)uVar11;
                unaff_x29 = puVar34;
              } while ((int)uVar11 < (int)plVar33[3]);
            }
            iVar12 = func_0x06fed540(plVar17,0);
            unaff_x24 = (long *)PTR_DAT_077502a0;
            if (iVar12 < 1) goto LAB_0724807c;
            puVar15 = (undefined8 *)0x0;
            plVar23 = (long *)func_0x06fedba8(plVar17,0,0);
            if (plVar23 == (long *)0x0) {
              plVar23 = (long *)0x0;
            }
            else if (*plVar23 != *unaff_x24) {
              plVar23 = (long *)0x0;
            }
            uVar21 = 0x7248064;
            puVar24 = (undefined8 *)((long)puVar24 + -0x60);
            lVar32 = lVar28;
            plVar25 = plVar17;
            plVar16 = plVar26;
            unaff_x25 = puVar37;
          } while( true );
        }
        if (*(int *)(lVar32 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar32 = *(long *)puVar37;
        }
        uVar21 = **(undefined8 **)(lVar32 + 0xb8);
        lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(lVar32,uVar21,*(undefined8 *)PTR_DAT_0785cc00,0);
        plVar23 = (long *)(*(long *)(*(long *)puVar37 + 0xb8) + 0x28);
        *plVar23 = lVar32;
      }
    }
  }
  goto SUB_032809c4;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar31 = piVar31 + 4;
    if (uVar22 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar24 = (undefined8 *)(lVar32 + (long)*piVar31 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar23 = (long *)0x0;
  puVar24 = (undefined8 *)func_0x03256b10(plVar25);
LAB_04145ad4:
  (*(code *)*puVar24)(plVar25,puVar24[1]);
LAB_04145ae0:
  func_0x03365958(auVar40._0_8_);
  func_0x03280ca4(0);
  auVar39 = func_0x02f09514();
  lVar32 = auVar39._0_8_;
  *(undefined8 *)(puVar10 + -0xc0) = 0x4145af8;
  *(long *)(puVar10 + -0xb0) = lVar20;
  *(long **)(puVar10 + -0xa8) = plVar33;
  uVar11 = func_0x03f898d4(*(undefined8 *)(lVar32 + 0x10),auVar39._8_8_,0,
                           *(undefined4 *)(lVar32 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar23[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar11) {
    func_0x04145da4(lVar32,uVar11);
  }
  return (long *)(ulong)(~uVar11 >> 0x1f);
LAB_0724807c:
  if (*(int *)(*(long *)unaff_x26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar34 = *(undefined **)((long)puVar24 + -0x20);
  lVar28 = *(long *)PTR_DAT_0777a038;
  unaff_x24 = *(long **)((long)puVar24 + -0x30);
  uVar22 = *(ulong *)((long)puVar24 + -0x28);
  puVar37 = *(undefined **)((long)puVar24 + -0x38);
  *(undefined8 *)((long)puVar24 + -0x20) = *(undefined8 *)((long)puVar24 + -0x58);
  *(undefined8 *)((long)puVar24 + -0x18) = *(undefined8 *)((long)puVar24 + -0x18);
  *(undefined8 *)((long)puVar24 + -0x10) = *(undefined8 *)((long)puVar24 + -0x10);
  *(undefined8 *)((long)puVar24 + -8) = *(undefined8 *)((long)puVar24 + -8);
  lVar32 = *(long *)(lVar28 + 0x20);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c(lVar32);
  }
  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c();
  }
  if (*(int *)(lVar32 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar32 = *(long *)(lVar28 + 0x20);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c();
  }
  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c();
  }
  lVar32 = **(long **)(lVar32 + 0xb8);
  if (lVar32 == 0) {
    lVar32 = func_0x03280cac();
    *(undefined8 *)((long)puVar24 + -0x50) = 0x4d7cae4;
    *(ulong *)((long)puVar24 + -0x48) = uVar22;
    *(undefined **)((long)puVar24 + -0x40) = puVar34;
    *(undefined8 *)((long)puVar24 + -0x38) = 0;
    *(long *)((long)puVar24 + -0x30) = lVar28;
    *(long **)((long)puVar24 + -0x28) = plVar33;
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x50);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    if (*(int *)(lVar28 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x50);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar20 = *(long *)(lVar32 + 0x20);
    uVar21 = **(undefined8 **)(lVar28 + 0xb8);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar19 = func_0x03280ca0();
    lVar20 = *(long *)(lVar32 + 0x20);
    uVar2 = *(ushort *)(lVar20 + 0x135);
    lVar28 = lVar20;
    if ((uVar2 & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
      uVar2 = *(ushort *)(*(long *)(lVar32 + 0x20) + 0x135);
      lVar28 = *(long *)(lVar32 + 0x20);
    }
    uVar35 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    func_0x05347354(uVar19,uVar21,uVar35,*(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x68));
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x50);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar20 = *(long *)(lVar32 + 0x20);
    uVar21 = **(undefined8 **)(lVar28 + 0xb8);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x78) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar35 = func_0x03280ca0();
    lVar20 = *(long *)(lVar32 + 0x20);
    uVar2 = *(ushort *)(lVar20 + 0x135);
    lVar28 = lVar20;
    if ((uVar2 & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
      uVar2 = *(ushort *)(*(long *)(lVar32 + 0x20) + 0x135);
      lVar28 = *(long *)(lVar32 + 0x20);
    }
    uVar36 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x70);
    if ((uVar2 & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    func_0x054221d4(uVar35,uVar21,uVar36,*(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x80));
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar21 = func_0x03280ca0();
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    *(undefined8 *)((long)puVar24 + -0x60) = *(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x88);
    func_0x04421fc4(uVar21,uVar19,0,uVar35,0,1,10,10000);
    lVar28 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x10);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    **(undefined8 **)(lVar28 + 0xb8) = uVar21;
    lVar32 = *(long *)(lVar32 + 0x20);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c();
    }
    plVar23 = *(long **)(lVar32 + 0xb8);
    goto SUB_032809c4;
  }
  lVar28 = *(long *)(lVar28 + 0x20);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    lVar28 = func_0x0325681c();
  }
  uVar21 = *(undefined8 *)((long)puVar24 + -0x10);
  uVar35 = *(undefined8 *)((long)puVar24 + -8);
  lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x40);
  uVar19 = *(undefined8 *)((long)puVar24 + -0x20);
  uVar36 = *(undefined8 *)((long)puVar24 + -0x18);
  puVar10 = (undefined1 *)puVar24;
LAB_044222c4:
  *(undefined8 *)(puVar10 + -0x20) = uVar19;
  *(undefined8 *)(puVar10 + -0x18) = uVar36;
  *(undefined8 *)(puVar10 + -0x10) = uVar21;
  *(undefined8 *)(puVar10 + -8) = uVar35;
  lVar20 = *(long *)(lVar32 + 0x28);
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),plVar33,*(undefined8 *)(lVar20 + 0x28));
  }
  plVar23 = *(long **)(lVar32 + 0x10);
  if (plVar23 == (long *)0x0) {
LAB_044223b4:
    uVar21 = 0x44223b8;
    auVar39 = func_0x03280cac();
    puVar10 = puVar10 + -0x20;
LAB_044223b8:
    lVar20 = auVar39._8_8_;
    plVar25 = auVar39._0_8_;
    *(undefined8 *)(puVar10 + -0x30) = uVar21;
    *(undefined **)(puVar10 + -0x20) = puVar34;
    *(long *)(puVar10 + -0x18) = lVar28;
    *(long *)(puVar10 + -0x10) = lVar32;
    *(long **)(puVar10 + -8) = plVar33;
    *(undefined8 *)(puVar10 + -0x50) = 0;
    *(undefined8 *)(puVar10 + -0x48) = 0;
    *(undefined8 *)(puVar10 + -0x40) = 0;
    plVar23 = plVar25;
    if (plVar25[6] == 0) goto LAB_04422470;
    if (plVar25[2] != 0) {
      func_0x04145068(puVar10 + -0x68,plVar25[2],
                      *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0xa0));
      *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x60);
      *(undefined8 *)(puVar10 + -0x50) = *(undefined8 *)(puVar10 + -0x68);
      *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x58);
      while( true ) {
        uVar22 = func_0x051159b4(puVar10 + -0x50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0xc0))
        ;
        if ((uVar22 & 1) == 0) {
          lVar28 = 0;
          iVar12 = 5;
          goto LAB_0442244c;
        }
        lVar32 = plVar25[6];
        if (lVar32 == 0) break;
        (**(code **)(lVar32 + 0x18))
                  (*(undefined8 *)(lVar32 + 0x40),*(undefined8 *)(puVar10 + -0x40),
                   *(undefined8 *)(lVar32 + 0x28));
      }
      func_0x03280cac();
      lVar32 = lVar20;
    }
    do {
      func_0x03280cac();
      lVar20 = lVar32;
      do {
        auVar40 = func_0x03280ca4(lVar28);
        puVar34 = auVar40._0_8_;
        if (auVar40._8_4_ != 1) {
          lVar28 = 0;
          func_0x051159b0(puVar10 + -0x50,
                          *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
          func_0x03365958(puVar34);
          func_0x03280ca4(0);
          uVar21 = 0x4422528;
          auVar38 = func_0x02f09514();
          auVar39._8_8_ = *(undefined8 *)(*(long *)(*(long *)(auVar38._8_8_ + 0x20) + 0xc0) + 0xd8);
          auVar39._0_8_ = auVar38._0_8_;
          puVar10 = puVar10 + -0x70;
          plVar33 = plVar25;
          lVar32 = lVar20;
          goto LAB_044223b8;
        }
        plVar23 = (long *)func_0x072ce910(puVar34);
        lVar28 = *plVar23;
        func_0x072ce920();
        iVar12 = 0;
LAB_0442244c:
        plVar23 = (long *)func_0x051159b0(puVar10 + -0x50,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
      } while (lVar28 != 0);
      lVar32 = lVar20;
      if ((iVar12 != 5) && (iVar12 != 0)) {
        return plVar23;
      }
LAB_04422470:
      lVar20 = plVar25[2];
      if (lVar20 != 0) {
        iVar12 = *(int *)(lVar20 + 0x18);
        *(undefined4 *)(lVar20 + 0x18) = 0;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (0 < iVar12) {
          plVar23 = (long *)func_0x057b9c7c(*(undefined8 *)(lVar20 + 0x10),0,iVar12,0);
        }
        *(undefined4 *)(plVar25 + 8) = 0;
        return plVar23;
      }
    } while( true );
  }
  uVar11 = *(uint *)(plVar23 + 3);
  if (*(int *)(lVar32 + 0x38) <= (int)uVar11) {
    lVar28 = *(long *)(lVar32 + 0x30);
    *(int *)(lVar32 + 0x40) = *(int *)(lVar32 + 0x40) + -1;
    if (lVar28 == 0) {
      return plVar23;
    }
                    /* WARNING: Could not recover jumptable at 0x04422388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar23 = (long *)(**(code **)(lVar28 + 0x18))
                                (*(undefined8 *)(lVar28 + 0x40),plVar33,
                                 *(undefined8 *)(lVar28 + 0x28));
    return plVar23;
  }
  lVar20 = plVar23[2];
  lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x98);
  *(int *)((long)plVar23 + 0x1c) = *(int *)((long)plVar23 + 0x1c) + 1;
  if (lVar20 == 0) goto LAB_044223b4;
  if (uVar11 < *(uint *)(lVar20 + 0x18)) {
    *(uint *)(plVar23 + 3) = uVar11 + 1;
    plVar23 = (long *)(lVar20 + (long)(int)uVar11 * 8 + 0x20);
    *plVar23 = (long)plVar33;
    goto SUB_032809c4;
  }
  lVar32 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70);
  *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x20);
  *(undefined **)(puVar10 + -0x20) = puVar34;
  *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
  *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
  *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  uVar3 = *(uint *)(plVar23 + 3);
  uVar11 = uVar3 + 1;
  lVar32 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(plVar23,(ulong)uVar11);
  lVar28 = plVar23[2];
  *(uint *)(plVar23 + 3) = uVar11;
  if (lVar28 == 0) {
    func_0x03280cac();
  }
  else if (uVar3 < *(uint *)(lVar28 + 0x18)) {
    plVar23 = (long *)(lVar28 + (long)(int)uVar3 * 8 + 0x20);
    *plVar23 = (long)plVar33;
    goto SUB_032809c4;
  }
  auVar39 = func_0x03280cb4();
  lVar29 = auVar39._8_8_;
  lVar28 = auVar39._0_8_;
  *(undefined8 *)(puVar10 + -0x60) = 0x41444d8;
  *(long *)(puVar10 + -0x50) = (long)(int)uVar3;
  *(ulong *)(puVar10 + -0x48) = (ulong)uVar11;
  *(long **)(puVar10 + -0x40) = plVar23;
  *(long **)(puVar10 + -0x38) = plVar33;
  lVar27 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar29,0x14);
  lVar20 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c(lVar20);
  }
  if (lVar29 == 0) {
LAB_0414454c:
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x03280b90(lVar29,lVar20);
    if (lVar13 == 0) {
      func_0x03281048(lVar29,lVar20);
      goto LAB_0414454c;
    }
  }
  lVar20 = *(long *)(lVar28 + 0x10);
  lVar30 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
  if (lVar20 != 0) {
    uVar11 = *(uint *)(lVar28 + 0x18);
    if (uVar11 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar28 + 0x18) = uVar11 + 1;
      plVar23 = (long *)(lVar20 + (long)(int)uVar11 * 8 + 0x20);
      *plVar23 = lVar13;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar18 = (ulong *)(((ulong)plVar23 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      return plVar23;
    }
    func_0x0414446c(lVar28,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar28 + 0x18) - 1);
  }
  auVar40 = func_0x03280cac();
  uVar21 = auVar40._0_8_;
  if (auVar40._8_4_ == 1) {
    puVar24 = (undefined8 *)func_0x072ce910(uVar21);
    uVar21 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar14 = func_0x032810d8(uVar21,*(undefined8 *)*puVar24);
    if ((uVar14 & 1) != 0) {
      func_0x072ce920();
      uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x68);
      lVar32 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar32 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar21 = func_0x057a51c4(uVar21,0);
      func_0x057b7b18(lVar29,uVar21,0);
      goto LAB_041445ac;
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar24;
    lVar27 = 0;
    uVar21 = func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar21);
  auVar39 = func_0x02f09514();
  plVar26 = auVar39._8_8_;
  plVar33 = auVar39._0_8_;
  uVar11 = *(uint *)(plVar33 + 3);
  lVar20 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x90);
  uVar14 = (ulong)uVar11;
  *(undefined8 *)(puVar10 + -0xa0) = 0x4144678;
  *(undefined **)(puVar10 + -0x98) = puVar37;
  *(long **)(puVar10 + -0x90) = unaff_x24;
  *(ulong *)(puVar10 + -0x88) = uVar22;
  *(undefined8 *)(puVar10 + -0x80) = uVar21;
  *(long *)(puVar10 + -0x78) = lVar32;
  *(long *)(puVar10 + -0x70) = lVar29;
  *(long *)(puVar10 + -0x68) = lVar28;
  plVar25 = (long *)0x7e18000;
  plVar23 = plVar26;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar26 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar33 + 3) < uVar11) {
    func_0x057b8434(0);
  }
  lVar32 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c(lVar32);
  }
  plVar16 = (long *)func_0x03280b90(plVar26,lVar32);
  if (plVar16 == (long *)0x0) {
    if ((int)uVar11 < (int)plVar33[3]) {
      if (plVar26 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar32 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        lVar28 = *plVar26;
        uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar22 != 0) {
          piVar31 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar32) {
              puVar24 = (undefined8 *)(lVar28 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar22 = uVar22 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar22 != 0);
        }
        plVar23 = (long *)0x0;
        puVar24 = (undefined8 *)func_0x03256b10(plVar26);
LAB_04145868:
        plVar25 = (long *)(*(code *)*puVar24)(plVar26,puVar24[1]);
        puVar37 = PTR_DAT_0774e8e0;
        if (plVar25 != (long *)0x0) {
          do {
            lVar32 = *plVar25;
            uVar22 = (ulong)*(ushort *)(lVar32 + 0x12e);
            if (uVar22 != 0) {
              piVar31 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)puVar37) {
                  puVar24 = (undefined8 *)(lVar32 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar22 = uVar22 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar22 != 0);
            }
            plVar23 = (long *)0x0;
            puVar24 = (undefined8 *)func_0x03256b10(plVar25);
LAB_041458d0:
            plVar17 = (long *)(*(code *)*puVar24)(plVar25,puVar24[1]);
            if (((ulong)plVar17 & 1) == 0) {
              uVar14 = 0;
              iVar12 = 5;
              if (plVar25 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar32 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
              lVar32 = func_0x0325681c(lVar32);
            }
            lVar28 = *plVar25;
            uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar22 != 0) {
              piVar31 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == lVar32) {
                  puVar24 = (undefined8 *)(lVar28 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar22 = uVar22 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined8 *)func_0x03256b10(plVar25,lVar32,0);
LAB_04145948:
            plVar23 = (long *)(*(code *)*puVar24)(plVar25,puVar24[1]);
            func_0x04145380(plVar33,uVar14,plVar23,
                            *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x160));
            uVar14 = (ulong)((int)uVar14 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar40 = func_0x03280ca4(uVar14);
        if (auVar40._8_4_ != 1) {
          if (plVar25 == (long *)0x0) goto LAB_04145ae0;
          lVar32 = *plVar25;
          uVar22 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar22 == 0) goto LAB_04145ab8;
          piVar31 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar18 = (ulong *)func_0x072ce910(auVar40._0_8_);
        uVar14 = *puVar18;
        plVar17 = (long *)func_0x072ce920();
        iVar12 = 0;
        if (plVar25 != (long *)0x0) {
LAB_04145988:
          lVar32 = *plVar25;
          uVar22 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar22 != 0) {
            piVar31 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar24 = (undefined8 *)(lVar32 + (long)*piVar31 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar22 = uVar22 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar22 != 0);
          }
          plVar23 = (long *)0x0;
          puVar24 = (undefined8 *)func_0x03256b10(plVar25);
LAB_041459dc:
          plVar17 = (long *)(*(code *)*puVar24)(plVar25,puVar24[1]);
        }
LAB_041459e8:
      } while (uVar14 != 0);
      if (iVar12 == 5) goto LAB_04145a10;
      if (iVar12 != 0) {
        return plVar17;
      }
    }
    plVar17 = (long *)func_0x041462cc(plVar33,plVar26,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar32 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar28 = *plVar16;
    uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar22 != 0) {
      piVar31 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == lVar32) {
          puVar24 = (undefined8 *)(lVar28 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar22 = uVar22 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar22 != 0);
    }
    puVar24 = (undefined8 *)func_0x03256b10(plVar16,lVar32,0);
LAB_04145728:
    plVar17 = (long *)(*(code *)*puVar24)(plVar16,puVar24[1]);
    iVar12 = (int)plVar17;
    if (0 < iVar12) {
      func_0x04144aa0(plVar33,(int)plVar33[3] + iVar12,
                      *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x78));
      iVar6 = (int)plVar33[3] - uVar11;
      if (iVar6 != 0 && (int)uVar11 <= (int)plVar33[3]) {
        func_0x057b9f30(plVar33[2],uVar11,plVar33[2],iVar12 + uVar11,iVar6,0);
      }
      if (plVar33 == plVar16) {
        func_0x057b9f30(plVar33[2],0,plVar33[2],uVar11,uVar11,0);
        plVar17 = (long *)func_0x057b9f30(plVar33[2],iVar12 + uVar11,plVar33[2],uVar11 << 1,
                                          (int)plVar33[3] - uVar11,0);
      }
      else {
        lVar28 = plVar33[2];
        lVar32 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        lVar20 = *plVar16;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar31 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar32) {
              puVar24 = (undefined8 *)(lVar20 + (long)(*piVar31 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar22 = uVar22 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar22 != 0);
        }
        puVar24 = (undefined8 *)func_0x03256b10(plVar16,lVar32,5);
LAB_04145838:
        plVar17 = (long *)(*(code *)*puVar24)(plVar16,lVar28,uVar11,puVar24[1]);
      }
      *(int *)(plVar33 + 3) = (int)plVar33[3] + iVar12;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar33 + 0x1c) = *(int *)((long)plVar33 + 0x1c) + 1;
  return plVar17;
}


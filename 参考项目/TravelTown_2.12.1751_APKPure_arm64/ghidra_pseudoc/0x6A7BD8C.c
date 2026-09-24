/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7BD8C; Merger.MergeBoard.Services.MergeBoardOperationTrackingService.SendOperationData; status ok */


/* WARNING: Possible PIC construction at 0x06b7bf1c: Changing call to branch */

ulong Merger_MergeBoard_Services_MergeBoardOperationTrackingService__SendOperationData
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  code **ppcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  code *apcStack_80 [2];
  undefined *puStack_70;
  long *plStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar17 = PTR_DAT_0777aa58;
  puVar2 = PTR_DAT_0776f430;
  ppcVar3 = (code **)&stack0xffffffffffffffc0;
  uVar15 = 0x7e2a000;
  uVar9 = param_3;
  if ((bRam0000000007e2a72b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f430);
    func_0x03280a18(PTR_DAT_0777aa78);
    func_0x03280a18(PTR_DAT_0777aa58);
    func_0x03280a18(PTR_DAT_078318c0);
    bRam0000000007e2a72b = 1;
  }
  uVar4 = func_0x04d1693c(param_1,*(undefined8 *)puVar17);
  uVar5 = func_0x04d0e0dc(uVar4,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_0777aa78;
    uVar5 = func_0x04d16b98(param_1,1);
    if ((uVar5 & 1) == 0) {
      return uVar5;
    }
  }
  puVar2 = PTR_DAT_078318c0;
  plVar14 = *(long **)(param_1 + 0x40);
  if (plVar14 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *plVar14;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_078318c0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b7be8c;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    uVar9 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b7be8c:
    uVar4 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    plVar16 = *(long **)(param_1 + 0x40);
    uVar15 = 0;
    puVar17 = puVar2;
    if (plVar16 != (long *)0x0) {
      lVar11 = *plVar16;
      lVar10 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06b7bef4;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar16,lVar10,1);
LAB_06b7bef4:
      uVar15 = (*(code *)*puVar6)(plVar16,puVar6[1]);
      uVar15 = Merger_MergeBoard_Services_MergeBoardOperationTrackingService__CreateClientMessageNotification
                         (uVar15,uVar4,uVar15,param_2,param_3);
      uVar18 = 0x6b7bf20;
      param_5 = param_1;
      param_4 = param_3;
      uVar9 = param_2;
      goto SUB_06b7c0e8;
    }
  }
  auVar21 = func_0x03280cac();
  uVar4 = auVar21._0_8_;
  if (auVar21._8_4_ == 1) {
    puVar6 = (undefined8 *)func_0x072ce910(uVar4);
    uVar4 = func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar5 = func_0x032810d8(uVar4,*(undefined8 *)*puVar6);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)func_0x072ce930(8);
      *puVar7 = *puVar6;
      uVar9 = 0;
      func_0x072ce940(puVar7,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    }
    else {
      plVar16 = (long *)*puVar6;
      func_0x072ce920();
      if (plVar16 != (long *)0x0) {
        uVar15 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        uVar9 = func_0x03280a2c(PTR_DAT_078318c8);
        uVar4 = 0;
        uVar15 = func_0x055ea7a0(uVar9,uVar15);
        lVar10 = func_0x03280a2c(PTR_DAT_0774e598);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        puVar2 = PTR_DAT_0774e598;
        uVar9 = 0;
        if ((bRam0000000007e2e76c & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e598,0);
          func_0x03280a18(PTR_DAT_07784ee0);
          bRam0000000007e2e76c = 1;
          uVar9 = extraout_x1_00;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c();
          uVar9 = extraout_x1_01;
        }
        if (cRam0000000007e1c87d == '\0') {
          func_0x03280a18(PTR_DAT_0774e598,uVar9);
          cRam0000000007e1c87d = '\x01';
        }
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar2;
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
        if (plVar14 == (long *)0x0) {
          auVar19 = func_0x03280cac();
          puVar2 = PTR_DAT_0774e598;
          uStack_50 = 0x6faa180;
          if ((bRam0000000007e2e76d & 1) == 0) {
            func_0x03280a18(PTR_DAT_0774e598);
            func_0x03280a18(PTR_DAT_07784ee0);
            bRam0000000007e2e76d = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          if (cRam0000000007e1c87d == '\0') {
            func_0x03280a18(PTR_DAT_0774e598);
            cRam0000000007e1c87d = '\x01';
          }
          lVar10 = *(long *)puVar2;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar10 = *(long *)puVar2;
          }
          plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
          if (plVar14 == (long *)0x0) {
            auVar20 = func_0x03280cac();
            puVar2 = PTR_DAT_0774e598;
            apcStack_80[0] = (code *)0x6faa298;
            puStack_70 = (undefined *)0x7e1c000;
            plStack_68 = plVar14;
            auStack_60 = auVar19;
            if ((bRam0000000007e2e76e & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e598);
              func_0x03280a18(PTR_DAT_07784ee0);
              bRam0000000007e2e76e = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            if (cRam0000000007e1c87d == '\0') {
              func_0x03280a18(PTR_DAT_0774e598);
              cRam0000000007e1c87d = '\x01';
            }
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar10 = *(long *)puVar2;
            }
            plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
            if (plVar14 == (long *)0x0) {
              auVar19 = func_0x03280cac();
              puVar2 = PTR_DAT_0774e598;
              uVar15 = uVar4;
              if ((bRam0000000007e2e76f & 1) == 0) {
                func_0x03280a18(PTR_DAT_0774e598);
                func_0x03280a18(PTR_DAT_07784f08);
                bRam0000000007e2e76f = 1;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              if (cRam0000000007e1c87d == '\0') {
                func_0x03280a18(PTR_DAT_0774e598);
                cRam0000000007e1c87d = '\x01';
              }
              lVar10 = *(long *)puVar2;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar10 = *(long *)puVar2;
              }
              plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
              if (plVar14 == (long *)0x0) {
                auVar19 = func_0x03280cac();
                puVar2 = PTR_DAT_0774e598;
                if ((bRam0000000007e2e771 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0774e598);
                  func_0x03280a18(PTR_DAT_07784f08);
                  bRam0000000007e2e771 = 1;
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                if (cRam0000000007e1c87d == '\0') {
                  func_0x03280a18(PTR_DAT_0774e598);
                  cRam0000000007e1c87d = '\x01';
                }
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  func_0x03280b8c();
                  lVar10 = *(long *)puVar2;
                }
                plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                if (plVar14 == (long *)0x0) {
                  auVar19 = func_0x03280cac();
                  puVar2 = PTR_DAT_0774e598;
                  if ((bRam0000000007e2e773 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0774e598);
                    func_0x03280a18(PTR_DAT_07784ee0);
                    bRam0000000007e2e773 = 1;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    func_0x03280b8c();
                  }
                  if (cRam0000000007e1c87d == '\0') {
                    func_0x03280a18(PTR_DAT_0774e598);
                    cRam0000000007e1c87d = '\x01';
                  }
                  lVar10 = *(long *)puVar2;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    func_0x03280b8c();
                    lVar10 = *(long *)puVar2;
                  }
                  plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                  if (plVar14 == (long *)0x0) {
                    auVar19 = func_0x03280cac();
                    puVar2 = PTR_DAT_0774e598;
                    if ((bRam0000000007e2e774 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0774e598);
                      func_0x03280a18(PTR_DAT_07784ee0);
                      bRam0000000007e2e774 = 1;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      func_0x03280b8c();
                    }
                    if (cRam0000000007e1c87d == '\0') {
                      func_0x03280a18(PTR_DAT_0774e598);
                      cRam0000000007e1c87d = '\x01';
                    }
                    lVar10 = *(long *)puVar2;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      func_0x03280b8c();
                      lVar10 = *(long *)puVar2;
                    }
                    plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                    if (plVar14 == (long *)0x0) {
                      auVar19 = func_0x03280cac();
                      puVar2 = PTR_DAT_0774e598;
                      if ((bRam0000000007e2e775 & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0774e598);
                        func_0x03280a18(PTR_DAT_07784f08);
                        bRam0000000007e2e775 = 1;
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        func_0x03280b8c();
                      }
                      if (cRam0000000007e1c87d == '\0') {
                        func_0x03280a18(PTR_DAT_0774e598);
                        cRam0000000007e1c87d = '\x01';
                      }
                      lVar10 = *(long *)puVar2;
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                        func_0x03280b8c();
                        lVar10 = *(long *)puVar2;
                      }
                      plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                      if (plVar14 == (long *)0x0) {
                        uVar8 = func_0x03280cac();
                        uVar5 = uVar8;
                        if ((bRam0000000007e2e776 & 1) == 0) {
                          func_0x03280a18(PTR_DAT_0774e598);
                          func_0x03280a18(PTR_DAT_07784ee0);
                          uVar5 = func_0x03280a18(PTR_DAT_0784d008);
                          bRam0000000007e2e776 = 1;
                        }
                        puVar2 = PTR_DAT_0774e598;
                        if ((uVar8 & 1) != 0) {
                          return uVar5;
                        }
                        if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        if (cRam0000000007e1c87d == '\0') {
                          func_0x03280a18(PTR_DAT_0774e598);
                          cRam0000000007e1c87d = '\x01';
                        }
                        lVar10 = *(long *)puVar2;
                        if (*(int *)(lVar10 + 0xe0) == 0) {
                          func_0x03280b8c();
                          lVar10 = *(long *)puVar2;
                        }
                        plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                        if (plVar14 == (long *)0x0) {
                          auVar19 = func_0x03280cac();
                          uVar5 = auVar19._0_8_;
                          if ((bRam0000000007e2e777 & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0774e598);
                            uVar5 = func_0x03280a18(PTR_DAT_07784ee0);
                            bRam0000000007e2e777 = 1;
                          }
                          puVar2 = PTR_DAT_0774e598;
                          if ((auVar19._0_8_ & 1) != 0) {
                            return uVar5;
                          }
                          if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
                            func_0x03280b8c();
                          }
                          if (cRam0000000007e1c87d == '\0') {
                            func_0x03280a18(PTR_DAT_0774e598);
                            cRam0000000007e1c87d = '\x01';
                          }
                          lVar10 = *(long *)puVar2;
                          if (*(int *)(lVar10 + 0xe0) == 0) {
                            func_0x03280b8c();
                            lVar10 = *(long *)puVar2;
                          }
                          plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                          if (plVar14 == (long *)0x0) {
                            uVar15 = func_0x03280cac();
                            puVar2 = PTR_DAT_0774e598;
                            if ((bRam0000000007e2e778 & 1) == 0) {
                              func_0x03280a18(PTR_DAT_0774e598);
                              func_0x03280a18(PTR_DAT_07784ee0);
                              bRam0000000007e2e778 = 1;
                            }
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              func_0x03280b8c();
                            }
                            if (cRam0000000007e1c87d == '\0') {
                              func_0x03280a18(PTR_DAT_0774e598);
                              cRam0000000007e1c87d = '\x01';
                            }
                            lVar10 = *(long *)puVar2;
                            if (*(int *)(lVar10 + 0xe0) == 0) {
                              func_0x03280b8c();
                              lVar10 = *(long *)puVar2;
                            }
                            plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                            if (plVar14 == (long *)0x0) {
                              auVar19 = func_0x03280cac();
                              puVar2 = PTR_DAT_0774e598;
                              if ((bRam0000000007e2e779 & 1) == 0) {
                                func_0x03280a18(PTR_DAT_0774e598);
                                func_0x03280a18(PTR_DAT_07784ee0);
                                bRam0000000007e2e779 = 1;
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                func_0x03280b8c();
                              }
                              if (cRam0000000007e1c87d == '\0') {
                                func_0x03280a18(PTR_DAT_0774e598);
                                cRam0000000007e1c87d = '\x01';
                              }
                              lVar10 = *(long *)puVar2;
                              if (*(int *)(lVar10 + 0xe0) == 0) {
                                func_0x03280b8c();
                                lVar10 = *(long *)puVar2;
                              }
                              plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                              if (plVar14 == (long *)0x0) {
                                func_0x03280cac();
                                if (pcRam0000000007e2e780 == (code *)0x0) {
                                  pcRam0000000007e2e780 = (code *)func_0x032809dc(&UNK_017912f9);
                                }
                    /* WARNING: Could not recover jumptable at 0x06faadbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                uVar5 = (*pcRam0000000007e2e780)();
                                return uVar5;
                              }
                              lVar10 = *plVar14;
                              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              if (uVar5 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                                    puVar6 = (undefined8 *)
                                             (lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                                    goto LAB_06faad70;
                                  }
                                  uVar5 = uVar5 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar5 != 0);
                              }
                              puVar6 = (undefined8 *)
                                       func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,0xd);
LAB_06faad70:
                    /* WARNING: Could not recover jumptable at 0x06faad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              uVar5 = (*(code *)*puVar6)(plVar14,1,auVar19._0_8_,auVar19._8_8_,
                                                         puVar6[1]);
                              return uVar5;
                            }
                            lVar10 = *plVar14;
                            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                            if (uVar5 != 0) {
                              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                                  puVar6 = (undefined8 *)
                                           (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                  goto LAB_06faac60;
                                }
                                uVar5 = uVar5 - 1;
                                piVar12 = piVar12 + 4;
                              } while (uVar5 != 0);
                            }
                            puVar6 = (undefined8 *)
                                     func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,5);
LAB_06faac60:
                    /* WARNING: Could not recover jumptable at 0x06faac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar5 = (*(code *)*puVar6)(plVar14,1,uVar15,puVar6[1]);
                            return uVar5;
                          }
                          lVar10 = *plVar14;
                          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                          if (uVar5 != 0) {
                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                                puVar6 = (undefined8 *)
                                         (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                goto LAB_06faab58;
                              }
                              uVar5 = uVar5 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar5 != 0);
                          }
                          puVar6 = (undefined8 *)
                                   func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,5);
LAB_06faab58:
                    /* WARNING: Could not recover jumptable at 0x06faab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar5 = (*(code *)*puVar6)(plVar14,1,auVar19._8_8_,puVar6[1]);
                          return uVar5;
                        }
                        lVar10 = *plVar14;
                        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                        uVar15 = *(undefined8 *)PTR_DAT_0784d008;
                        if (uVar5 != 0) {
                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                              goto LAB_06faaa3c;
                            }
                            uVar5 = uVar5 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar5 != 0);
                        }
                        puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,5);
LAB_06faaa3c:
                    /* WARNING: Could not recover jumptable at 0x06faaa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar5 = (*(code *)*puVar6)(plVar14,1,uVar15,puVar6[1]);
                        return uVar5;
                      }
                      lVar10 = *plVar14;
                      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar5 != 0) {
                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784f08) {
                            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                            goto LAB_06faa900;
                          }
                          uVar5 = uVar5 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar5 != 0);
                      }
                      puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784f08,0);
LAB_06faa900:
                    /* WARNING: Could not recover jumptable at 0x06faa924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar5 = (*(code *)*puVar6)(plVar14,2,auVar19._0_8_,auVar19._8_8_,uVar15,
                                                 puVar6[1]);
                      return uVar5;
                    }
                    lVar10 = *plVar14;
                    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar5 != 0) {
                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                          goto LAB_06faa7e8;
                        }
                        uVar5 = uVar5 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,0xd);
LAB_06faa7e8:
                    /* WARNING: Could not recover jumptable at 0x06faa808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar5 = (*(code *)*puVar6)(plVar14,2,auVar19._0_8_,auVar19._8_8_,puVar6[1]);
                    return uVar5;
                  }
                  lVar10 = *plVar14;
                  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar5 != 0) {
                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                        goto LAB_06faa6d0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,6);
LAB_06faa6d0:
                    /* WARNING: Could not recover jumptable at 0x06faa6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar5 = (*(code *)*puVar6)(plVar14,2,auVar19._0_8_,auVar19._8_8_,puVar6[1]);
                  return uVar5;
                }
                lVar10 = *plVar14;
                uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar5 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784f08) {
                      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto LAB_06faa5bc;
                    }
                    uVar5 = uVar5 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784f08,1);
LAB_06faa5bc:
                    /* WARNING: Could not recover jumptable at 0x06faa5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*(code *)*puVar6)(plVar14,auVar19._0_8_,auVar19._8_8_,puVar6[1]);
                return uVar5;
              }
              lVar10 = *plVar14;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar5 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784f08) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_06faa4a0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784f08,0);
LAB_06faa4a0:
                    /* WARNING: Could not recover jumptable at 0x06faa4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (*(code *)*puVar6)(plVar14,0,auVar19._0_8_,auVar19._8_8_,uVar4,puVar6[1]);
              return uVar5;
            }
            lVar10 = *plVar14;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                  goto LAB_06faa388;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,0xd);
LAB_06faa388:
                    /* WARNING: Could not recover jumptable at 0x06faa3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*(code *)*puVar6)(plVar14,0,auVar20._0_8_,auVar20._8_8_,puVar6[1]);
            return uVar5;
          }
          lVar10 = *plVar14;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                goto LAB_06faa270;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,6);
LAB_06faa270:
                    /* WARNING: Could not recover jumptable at 0x06faa290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)*puVar6)(plVar14,0,auVar19._0_8_,auVar19._8_8_,puVar6[1]);
          return uVar5;
        }
        lVar10 = *plVar14;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07784ee0) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_06faa160;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07784ee0,5);
LAB_06faa160:
                    /* WARNING: Could not recover jumptable at 0x06faa178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar6)(plVar14,0,uVar15,puVar6[1]);
        return uVar5;
      }
    }
    uVar4 = func_0x03280cac();
    func_0x072ce920();
  }
  func_0x03365958(uVar4);
  func_0x02f09514();
  puVar2 = PTR_DAT_077ce588;
  ppcVar3 = apcStack_80;
  apcStack_80[0] =
       Merger_MergeBoard_Services_MergeBoardOperationTrackingService__CreateClientMessageNotification
  ;
  puStack_70 = puVar17;
  plStack_68 = (long *)uVar15;
  auStack_60._0_8_ = plVar14;
  auStack_60._8_8_ = param_2;
  uStack_50 = param_3;
  uStack_48 = uVar4;
  if ((bRam0000000007e2a72c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ce588);
    bRam0000000007e2a72c = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06a30c58(uVar5,0);
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + 0x10) = extraout_x1;
    func_0x032809c4((undefined8 *)(uVar5 + 0x10),extraout_x1);
    *(undefined8 *)(uVar5 + 0x18) = uVar9;
    func_0x032809c4((undefined8 *)(uVar5 + 0x18),uVar9);
    *(undefined8 *)(uVar5 + 0x20) = param_4;
    func_0x032809c4((undefined8 *)(uVar5 + 0x20),param_4);
    *(long *)(uVar5 + 0x28) = param_5;
    func_0x032809c4((long *)(uVar5 + 0x28),param_5);
    return uVar5;
  }
  uVar18 = 0x6b7c0e8;
  auVar19 = func_0x03280cac();
  uVar15 = auVar19._8_8_;
  param_1 = auVar19._0_8_;
  uVar4 = 0;
  plVar16 = extraout_x1;
SUB_06b7c0e8:
  *(undefined8 *)((long)ppcVar3 + -0x20) = uVar18;
  *(undefined8 *)((long)ppcVar3 + -0x18) = uVar9;
  *(undefined8 *)((long)ppcVar3 + -0x10) = param_4;
  *(long *)((long)ppcVar3 + -8) = param_5;
  if ((bRam0000000007e2a72d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077797d8);
    bRam0000000007e2a72d = 1;
  }
  plVar14 = *(long **)(param_1 + 0x30);
  if (plVar14 == (long *)0x0) {
    auVar19 = func_0x03280cac();
    puVar2 = PTR_DAT_078318d0;
    uVar5 = auVar19._8_8_;
    *(code **)((long)ppcVar3 + -0x50) =
         Merger_MergeBoard_Services_MergeBoardOperationTrackingService__ApplyEnhancers;
    *(long **)((long)ppcVar3 + -0x48) = plVar16;
    *(undefined8 *)((long)ppcVar3 + -0x40) = uVar4;
    *(undefined8 *)((long)ppcVar3 + -0x38) = 0x7e2a000;
    *(undefined8 *)((long)ppcVar3 + -0x30) = 0;
    *(undefined8 *)((long)ppcVar3 + -0x28) = uVar15;
    if ((bRam0000000007e2a72e & 1) == 0) {
      func_0x03280a18(PTR_DAT_078318d0);
      func_0x03280a18(PTR_DAT_078318d8);
      bRam0000000007e2a72e = 1;
    }
    uVar8 = func_0x03ce83d8(*(undefined8 *)(auVar19._0_8_ + 0x58),*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_078318d8;
    if ((uVar8 & 1) == 0) {
      lVar10 = *(long *)(auVar19._0_8_ + 0x58);
      if (lVar10 == 0) {
LAB_06b7c2a4:
        uVar5 = func_0x03280cac();
        puVar2 = PTR_DAT_07811860;
        *(undefined8 *)((long)ppcVar3 + -0x70) = 0x6b7c2a8;
        *(long *)((long)ppcVar3 + -0x68) = lVar10;
        *(undefined1 (*) [16])((long)ppcVar3 + -0x60) = auVar19;
        if ((bRam0000000007e2a72f & 1) == 0) {
          func_0x03280a18(PTR_DAT_07811860);
          bRam0000000007e2a72f = 1;
        }
        lVar11 = *(long *)puVar2;
        *(undefined8 *)((long)ppcVar3 + -0x70) = *(undefined8 *)((long)ppcVar3 + -0x70);
        *(undefined8 *)((long)ppcVar3 + -0x60) = *(undefined8 *)((long)ppcVar3 + -0x60);
        *(undefined8 *)((long)ppcVar3 + -0x58) = *(undefined8 *)((long)ppcVar3 + -0x58);
        lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        uVar15 = func_0x03280ca0(lVar10);
        func_0x04d176c4(uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x50));
        *(undefined8 *)(uVar5 + 0x28) = uVar15;
        func_0x032809c4((undefined8 *)(uVar5 + 0x28),uVar15);
        return uVar5;
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar1) {
        uVar13 = 0;
        do {
          uVar15 = auVar19._8_8_;
          if (uVar1 <= uVar13) {
            func_0x03280cb4();
            goto LAB_06b7c2a4;
          }
          plVar14 = *(long **)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
          auVar19._8_8_ = uVar15;
          auVar19._0_8_ = plVar14;
          if (plVar14 == (long *)0x0) goto LAB_06b7c2a4;
          lVar11 = *plVar14;
          uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06b7c268;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar2,0);
LAB_06b7c268:
          uVar5 = (*(code *)*puVar6)(plVar14,uVar15,puVar6[1]);
          auVar19._8_8_ = uVar5;
          uVar1 = *(uint *)(lVar10 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar1);
      }
    }
    return uVar5;
  }
  lVar10 = *plVar14;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077797d8) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06b7c174;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077797d8,0);
LAB_06b7c174:
                    /* WARNING: Could not recover jumptable at 0x06b7c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar6)(plVar14,uVar15,puVar6[1]);
  return uVar5;
}


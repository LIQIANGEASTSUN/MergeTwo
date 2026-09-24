/* Ghidra 12.1.2 native pseudocode; RVA 0x3D402AC; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackExpendOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackExpendOperation_object_
          (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar6 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0777aac0);
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x03256878(param_3);
    }
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) {
    auVar13 = func_0x03280cac();
    lVar12 = lVar6;
    if (*(long *)(lVar6 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_0777aac8);
      if (*(long *)(lVar6 + 0x38) == 0) {
        func_0x03256878(lVar6);
      }
    }
    plVar9 = *(long **)(auVar13._0_8_ + 0x40);
    if (plVar9 == (long *)0x0) {
      auVar13 = func_0x03280cac();
      lVar6 = lVar12;
      if (*(long *)(lVar12 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_0777aad0);
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
      }
      plVar9 = *(long **)(auVar13._0_8_ + 0x40);
      if (plVar9 == (long *)0x0) {
        auVar13 = func_0x03280cac();
        lVar12 = lVar6;
        if (*(long *)(lVar6 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_0777aad8);
          if (*(long *)(lVar6 + 0x38) == 0) {
            func_0x03256878(lVar6);
          }
        }
        plVar9 = *(long **)(auVar13._0_8_ + 0x40);
        if (plVar9 == (long *)0x0) {
          auVar13 = func_0x03280cac();
          lVar6 = lVar12;
          if (*(long *)(lVar12 + 0x38) == 0) {
            func_0x03280a18(PTR_DAT_0777aae0);
            if (*(long *)(lVar12 + 0x38) == 0) {
              func_0x03256878(lVar12);
            }
          }
          plVar9 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar9 == (long *)0x0) {
            auVar13 = func_0x03280cac();
            lVar12 = lVar6;
            if (*(long *)(lVar6 + 0x38) == 0) {
              func_0x03280a18(PTR_DAT_0777aae8);
              if (*(long *)(lVar6 + 0x38) == 0) {
                func_0x03256878(lVar6);
              }
            }
            plVar9 = *(long **)(auVar13._0_8_ + 0x40);
            if (plVar9 == (long *)0x0) {
              auVar13 = func_0x03280cac();
              lVar6 = lVar12;
              if (*(long *)(lVar12 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777aaf0);
                if (*(long *)(lVar12 + 0x38) == 0) {
                  func_0x03256878(lVar12);
                }
              }
              plVar9 = *(long **)(auVar13._0_8_ + 0x40);
              if (plVar9 == (long *)0x0) {
                auVar13 = func_0x03280cac();
                puVar2 = PTR_DAT_0777ab00;
                puVar1 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                uVar10 = func_0x03d2c6a8(auVar13._8_8_,*(undefined8 *)puVar1);
                uVar10 = func_0x03d5ffd0(uVar10,*(undefined8 *)puVar2);
                if (plVar9 == (long *)0x0) {
                  auVar13 = func_0x03280cac();
                  lVar12 = lVar6;
                  if (*(long *)(lVar6 + 0x38) == 0) {
                    func_0x03280a18(PTR_DAT_0777ab18);
                    if (*(long *)(lVar6 + 0x38) == 0) {
                      func_0x03256878(lVar6);
                    }
                  }
                  plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                  if (plVar9 == (long *)0x0) {
                    auVar13 = func_0x03280cac();
                    lVar6 = lVar12;
                    if (*(long *)(lVar12 + 0x38) == 0) {
                      func_0x03280a18(PTR_DAT_0777ab20);
                      if (*(long *)(lVar12 + 0x38) == 0) {
                        func_0x03256878(lVar12);
                      }
                    }
                    plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                    if (plVar9 == (long *)0x0) {
                      auVar13 = func_0x03280cac();
                      lVar12 = lVar6;
                      lVar5 = param_4;
                      if (*(long *)(param_4 + 0x38) == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (*(long *)(param_4 + 0x38) == 0) {
                          func_0x03256878(param_4);
                        }
                      }
                      plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                      lVar3 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar3,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar3 != 0) {
                        lVar5 = *(long *)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar3,*(undefined8 *)PTR_DAT_07779e90);
                        lVar12 = lVar6;
                        if (plVar9 != (long *)0x0) {
                          lVar6 = *plVar9;
                          lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                          uVar10 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                                lVar6 = lVar6 + (long)(int)(*piVar8 +
                                                           (uint)*(ushort *)(lVar12 + 0x50)) * 0x10
                                        + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          lVar6 = func_0x03256b10(plVar9);
LAB_03e40cdc:
                          lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,lVar3,lVar6)
                          ;
                          return uVar10;
                        }
                      }
                      auVar13 = func_0x03280cac();
                      lVar6 = lVar12;
                      if (*(long *)(lVar12 + 0x38) == 0) {
                        func_0x03280a18(PTR_DAT_0777ab30);
                        if (*(long *)(lVar12 + 0x38) == 0) {
                          func_0x03256878(lVar12);
                        }
                      }
                      plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                      if (plVar9 == (long *)0x0) {
                        auVar13 = func_0x03280cac();
                        lVar12 = lVar6;
                        lVar3 = lVar5;
                        if (*(long *)(lVar5 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (*(long *)(lVar5 + 0x38) == 0) {
                            func_0x03256878(lVar5);
                          }
                        }
                        plVar9 = *(long **)(auVar13._0_8_ + 0x40);
                        lVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar4,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar4 != 0) {
                          lVar3 = *(long *)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar4,*(undefined8 *)PTR_DAT_07779e90,lVar6,lVar3);
                          lVar12 = lVar6;
                          if (plVar9 != (long *)0x0) {
                            lVar6 = *plVar9;
                            lVar12 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
                            uVar10 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                                  lVar6 = lVar6 + (long)(int)(*piVar8 +
                                                             (uint)*(ushort *)(lVar12 + 0x50)) *
                                                  0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            lVar6 = func_0x03256b10(plVar9);
LAB_03e40f1c:
                            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar10 = (**(code **)(lVar6 + 8))
                                               (plVar9,uVar10,auVar13._8_8_,lVar4,lVar6);
                            return uVar10;
                          }
                        }
                        auVar13 = func_0x03280cac();
                        if (*(long *)(param_6 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(param_6 + 0x38) == 0) {
                            func_0x03256878(param_6);
                          }
                        }
                        lVar5 = *(long *)PTR_DAT_0777ab40;
                        lVar6 = *(long *)(lVar5 + 0x38);
                        if (lVar6 == 0) {
                          func_0x03256878(lVar5);
                          lVar6 = *(long *)(lVar5 + 0x38);
                        }
                        lVar6 = *(long *)(lVar6 + 0x10);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = func_0x0325681c();
                        }
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = func_0x0325681c();
                        }
                        uVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                                           (auVar13._8_8_,lVar12,**(undefined8 **)(lVar6 + 0xb8));
                        uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(uVar11,auVar13._0_8_,lVar3,param_5 & 0xffffffff,uVar10,0);
                        return uVar11;
                      }
                      lVar6 = *plVar9;
                      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
                      uVar10 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                            lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50))
                                            * 0x10 + 0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      lVar6 = func_0x03256b10(plVar9);
LAB_03e40dbc:
                      lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
                      return uVar10;
                    }
                    lVar6 = *plVar9;
                    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
                    uVar10 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                          lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    lVar6 = func_0x03256b10(plVar9);
LAB_03e40b7c:
                    lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
                    return uVar10;
                  }
                  lVar12 = *plVar9;
                  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
                  uVar10 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
                        lVar12 = lVar12 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  lVar12 = func_0x03256b10(plVar9);
LAB_03e40a9c:
                  lVar6 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
                  return uVar10;
                }
                lVar6 = *plVar9;
                lVar12 = *(long *)PTR_DAT_0777ab08;
                uVar11 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                      lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                lVar6 = func_0x03256b10(plVar9);
LAB_03e409bc:
                lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar11,uVar10,0,lVar6);
                return uVar10;
              }
              lVar6 = *plVar9;
              lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
              uVar10 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_03e40894;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              lVar6 = func_0x03256b10(plVar9);
LAB_03e40894:
              lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
              return uVar10;
            }
            lVar12 = *plVar9;
            lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
            uVar10 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar12 = lVar12 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                           0x138;
                  goto LAB_03e407b4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar12 = func_0x03256b10(plVar9);
LAB_03e407b4:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
            return uVar10;
          }
          lVar6 = *plVar9;
          lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
          uVar10 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
                lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03e406d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          lVar6 = func_0x03256b10(plVar9);
LAB_03e406d4:
          lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
          return uVar10;
        }
        lVar12 = *plVar9;
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
        uVar10 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar12 = lVar12 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        lVar12 = func_0x03256b10(plVar9);
LAB_03e405f4:
        lVar6 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
        return uVar10;
      }
      lVar6 = *plVar9;
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      uVar10 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
            lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40514;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar6 = func_0x03256b10(plVar9);
LAB_03e40514:
      lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
      return uVar10;
    }
    lVar12 = *plVar9;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
    uVar10 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar12 = func_0x03256b10(plVar9);
LAB_03e40434:
    lVar6 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar13._8_8_,0,lVar6);
    return uVar10;
  }
  lVar6 = *plVar9;
  lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar10 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = func_0x03256b10(plVar9);
LAB_03e40354:
  lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,param_2,0,lVar6);
  return uVar10;
}


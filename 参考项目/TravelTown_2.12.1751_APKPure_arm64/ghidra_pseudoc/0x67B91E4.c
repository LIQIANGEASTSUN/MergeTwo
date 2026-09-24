/* Ghidra 12.1.2 native pseudocode; RVA 0x67B91E4; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackSplitOperation; status ok */


void Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackSplitOperation
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000007e28eda & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ab08);
    func_0x03280a18(PTR_DAT_07811868);
    bRam0000000007e28eda = 1;
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 == (long *)0x0) {
    auVar11 = func_0x03280cac();
    if ((bRam0000000007e28edb & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ab08);
      func_0x03280a18(PTR_DAT_07811870);
      bRam0000000007e28edb = 1;
    }
    plVar6 = *(long **)(auVar11._0_8_ + 0x40);
    if (plVar6 == (long *)0x0) {
      auVar11 = func_0x03280cac();
      if ((bRam0000000007e28edc & 1) == 0) {
        func_0x03280a18(PTR_DAT_07802f60);
        func_0x03280a18(PTR_DAT_0777aae0);
        bRam0000000007e28edc = 1;
      }
      plVar6 = *(long **)(auVar11._0_8_ + 0x40);
      if (plVar6 == (long *)0x0) {
        auVar11 = func_0x03280cac();
        uVar7 = param_3;
        if ((bRam0000000007e28edd & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07807698);
          bRam0000000007e28edd = 1;
        }
        plVar6 = *(long **)(auVar11._0_8_ + 0x40);
        if (plVar6 == (long *)0x0) {
          auVar11 = func_0x03280cac();
          uVar9 = uVar7;
          if ((bRam0000000007e28ede & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811878);
            bRam0000000007e28ede = 1;
          }
          plVar6 = *(long **)(auVar11._0_8_ + 0x40);
          if (plVar6 == (long *)0x0) {
            auVar11 = func_0x03280cac();
            uVar7 = uVar9;
            if ((bRam0000000007e28edf & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_0776b160);
              bRam0000000007e28edf = 1;
            }
            plVar6 = *(long **)(auVar11._0_8_ + 0x40);
            if (plVar6 == (long *)0x0) {
              auVar11 = func_0x03280cac();
              if ((bRam0000000007e28ee0 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811880);
                bRam0000000007e28ee0 = 1;
              }
              plVar6 = *(long **)(auVar11._0_8_ + 0x40);
              if (plVar6 == (long *)0x0) {
                auVar11 = func_0x03280cac();
                if ((bRam0000000007e28ee1 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_07802f60);
                  func_0x03280a18(PTR_DAT_07811888);
                  bRam0000000007e28ee1 = 1;
                }
                plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                if (plVar6 == (long *)0x0) {
                  auVar11 = func_0x03280cac();
                  puVar1 = PTR_DAT_0777aa98;
                  uVar9 = uVar7;
                  uVar2 = param_4;
                  if ((bRam0000000007e28ee2 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0777aa98);
                    func_0x03280a18(PTR_DAT_07802f60);
                    func_0x03280a18(PTR_DAT_07811888);
                    bRam0000000007e28ee2 = 1;
                  }
                  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
                  func_0x06a30df4(lVar3,0);
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x30) = uVar7;
                    func_0x032809c4((undefined8 *)(lVar3 + 0x30),uVar7);
                    *(undefined8 *)(lVar3 + 0x38) = param_4;
                    plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                    if (plVar6 != (long *)0x0) {
                      lVar8 = *plVar6;
                      lVar10 = *(long *)PTR_DAT_07802f60;
                      uVar7 = *(undefined8 *)PTR_DAT_07811888;
                      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar4 != 0) {
                        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar5 + -2) == *(long *)(lVar10 + 0x20)) {
                            lVar8 = lVar8 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar10 + 0x50))
                                            * 0x10 + 0x138;
                            goto LAB_068b9a48;
                          }
                          uVar4 = uVar4 - 1;
                          piVar5 = piVar5 + 4;
                        } while (uVar4 != 0);
                      }
                      lVar8 = func_0x03256b10(plVar6);
LAB_068b9a48:
                      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(lVar8 + 8))(plVar6,uVar7,auVar11._8_8_,0,lVar3,lVar8);
                      return;
                    }
                  }
                  auVar11 = func_0x03280cac();
                  puVar1 = PTR_DAT_0777aa98;
                  if ((bRam0000000007e28ee3 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0777aa98);
                    func_0x03280a18(PTR_DAT_07802f60);
                    func_0x03280a18(PTR_DAT_077c1e10);
                    bRam0000000007e28ee3 = 1;
                  }
                  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
                  func_0x06a30df4(lVar3,0);
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x30) = uVar9;
                    func_0x032809c4((undefined8 *)(lVar3 + 0x30),uVar9);
                    *(undefined8 *)(lVar3 + 0x38) = uVar2;
                    plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                    if (plVar6 != (long *)0x0) {
                      lVar8 = *plVar6;
                      lVar10 = *(long *)PTR_DAT_07802f60;
                      uVar7 = *(undefined8 *)PTR_DAT_077c1e10;
                      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar4 != 0) {
                        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar5 + -2) == *(long *)(lVar10 + 0x20)) {
                            lVar8 = lVar8 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar10 + 0x50))
                                            * 0x10 + 0x138;
                            goto LAB_068b9b88;
                          }
                          uVar4 = uVar4 - 1;
                          piVar5 = piVar5 + 4;
                        } while (uVar4 != 0);
                      }
                      lVar8 = func_0x03256b10(plVar6);
LAB_068b9b88:
                      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(lVar8 + 8))(plVar6,uVar7,auVar11._8_8_,0,lVar3,lVar8);
                      return;
                    }
                  }
                  auVar11 = func_0x03280cac();
                  if ((bRam0000000007e28ee4 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_07802f60);
                    func_0x03280a18(PTR_DAT_077d7510);
                    bRam0000000007e28ee4 = 1;
                  }
                  plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                  if (plVar6 == (long *)0x0) {
                    auVar11 = func_0x03280cac();
                    if ((bRam0000000007e28ee5 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_07802f60);
                      func_0x03280a18(PTR_DAT_07811890);
                      bRam0000000007e28ee5 = 1;
                    }
                    plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                    if (plVar6 == (long *)0x0) {
                      auVar11 = func_0x03280cac();
                      if ((bRam0000000007e28ee6 & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0777ab08);
                        func_0x03280a18(PTR_DAT_07811898);
                        bRam0000000007e28ee6 = 1;
                      }
                      plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                      if (plVar6 == (long *)0x0) {
                        auVar11 = func_0x03280cac();
                        if ((bRam0000000007e28ee7 & 1) == 0) {
                          func_0x03280a18(PTR_DAT_07802f60);
                          func_0x03280a18(PTR_DAT_078118a0);
                          bRam0000000007e28ee7 = 1;
                        }
                        plVar6 = *(long **)(auVar11._0_8_ + 0x40);
                        if (plVar6 == (long *)0x0) {
                          func_0x03280cac();
                          return;
                        }
                        lVar3 = *plVar6;
                        lVar8 = *(long *)PTR_DAT_07802f60;
                        uVar7 = *(undefined8 *)PTR_DAT_078118a0;
                        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                        if (uVar4 != 0) {
                          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                              lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50))
                                              * 0x10 + 0x138;
                              goto LAB_068b9f38;
                            }
                            uVar4 = uVar4 - 1;
                            piVar5 = piVar5 + 4;
                          } while (uVar4 != 0);
                        }
                        lVar3 = func_0x03256b10(plVar6);
LAB_068b9f38:
                        lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
                        return;
                      }
                      lVar3 = *plVar6;
                      lVar8 = *(long *)PTR_DAT_0777ab08;
                      uVar7 = *(undefined8 *)PTR_DAT_07811898;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      if (uVar4 != 0) {
                        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                            0x10 + 0x138;
                            goto LAB_068b9e50;
                          }
                          uVar4 = uVar4 - 1;
                          piVar5 = piVar5 + 4;
                        } while (uVar4 != 0);
                      }
                      lVar3 = func_0x03256b10(plVar6);
LAB_068b9e50:
                      lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,lVar3);
                      return;
                    }
                    lVar3 = *plVar6;
                    lVar8 = *(long *)PTR_DAT_07802f60;
                    uVar7 = *(undefined8 *)PTR_DAT_07811890;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_068b9d64;
                        }
                        uVar4 = uVar4 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar4 != 0);
                    }
                    lVar3 = func_0x03256b10(plVar6);
LAB_068b9d64:
                    lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
                    return;
                  }
                  lVar3 = *plVar6;
                  lVar8 = *(long *)PTR_DAT_07802f60;
                  uVar7 = *(undefined8 *)PTR_DAT_077d7510;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_068b9c78;
                      }
                      uVar4 = uVar4 - 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 != 0);
                  }
                  lVar3 = func_0x03256b10(plVar6);
LAB_068b9c78:
                  lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
                  return;
                }
                lVar3 = *plVar6;
                lVar8 = *(long *)PTR_DAT_07802f60;
                uVar7 = *(undefined8 *)PTR_DAT_07811888;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                      lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_068b990c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 != 0);
                }
                lVar3 = func_0x03256b10(plVar6);
LAB_068b990c:
                lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
                return;
              }
              lVar3 = *plVar6;
              lVar8 = *(long *)PTR_DAT_07802f60;
              uVar7 = *(undefined8 *)PTR_DAT_07811880;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                    lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_068b9820;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
              lVar3 = func_0x03256b10(plVar6);
LAB_068b9820:
              lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
              return;
            }
            lVar3 = *plVar6;
            lVar8 = *(long *)PTR_DAT_07802f60;
            uVar7 = *(undefined8 *)PTR_DAT_0776b160;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                  lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9734;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            lVar3 = func_0x03256b10(plVar6);
LAB_068b9734:
            lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,uVar9,lVar3);
            return;
          }
          lVar3 = *plVar6;
          lVar8 = *(long *)PTR_DAT_07802f60;
          uVar9 = *(undefined8 *)PTR_DAT_07811878;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
                lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9644;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          lVar3 = func_0x03256b10(plVar6);
LAB_068b9644:
          lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 8))(plVar6,uVar9,auVar11._8_8_,0,uVar7,lVar3);
          return;
        }
        lVar3 = *plVar6;
        lVar8 = *(long *)PTR_DAT_07802f60;
        uVar7 = *(undefined8 *)PTR_DAT_07807698;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
              lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
              goto LAB_068b9554;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        lVar3 = func_0x03256b10(plVar6);
LAB_068b9554:
        lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,param_3,lVar3);
        return;
      }
      lVar3 = *plVar6;
      lVar8 = *(long *)PTR_DAT_07802f60;
      uVar7 = *(undefined8 *)PTR_DAT_0777aae0;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_068b9464;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = func_0x03256b10(plVar6);
LAB_068b9464:
      lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b9498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,0,lVar3);
      return;
    }
    lVar3 = *plVar6;
    lVar8 = *(long *)PTR_DAT_0777ab08;
    uVar7 = *(undefined8 *)PTR_DAT_07811870;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_068b937c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = func_0x03256b10(plVar6);
LAB_068b937c:
    lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))(plVar6,uVar7,auVar11._8_8_,0,lVar3);
    return;
  }
  lVar3 = *plVar6;
  lVar8 = *(long *)PTR_DAT_0777ab08;
  uVar7 = *(undefined8 *)PTR_DAT_07811868;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_068b9294;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = func_0x03256b10(plVar6);
LAB_068b9294:
  lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x068b92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(plVar6,uVar7,param_2,0,lVar3);
  return;
}


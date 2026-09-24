/* Ghidra 12.1.2 native pseudocode; RVA 0x3D3FD8C; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackDequeueItemOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackDequeueItemOperation_object_
          (long param_1,long param_2,long param_3,long *param_4,ulong param_5,long *param_6,
          long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  ushort auStack_54 [2];
  
  lVar8 = param_3;
  plVar9 = param_4;
  uVar14 = param_5;
  plVar10 = param_6;
  if (*(long *)(param_7 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0776aeb0);
    func_0x03280a18(PTR_DAT_0777aa90);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777aaa0);
    func_0x03280a18(PTR_DAT_0777aaa8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777aab0);
    func_0x03280a18(PTR_DAT_077512a8);
    func_0x03280a18(PTR_DAT_07751420);
    func_0x03280a18(PTR_DAT_0777aab8);
    if (*(long *)(param_7 + 0x38) == 0) {
      func_0x03256878(param_7);
    }
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar5,0);
  if (lVar5 == 0) goto LAB_03e402a8;
  *(long *)(lVar5 + 0x30) = param_3;
  func_0x032809c4((long *)(lVar5 + 0x30),param_3);
  if (param_2 == 0) goto LAB_03e402a8;
  *(long *)(param_2 + 0x20) = lVar5;
  func_0x032809c4((long *)(param_2 + 0x20),lVar5);
  if ((*(byte *)(*(long *)(*(long *)(param_7 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04143c38(lVar5,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10));
  if (lVar5 == 0) goto LAB_03e402a8;
  lVar11 = *(long *)(lVar5 + 0x10);
  lVar13 = *(long *)(*(long *)(param_7 + 0x38) + 0x18);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_03e402a8;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (uVar4 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar4 + 1;
    plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
    *plVar6 = param_2;
    func_0x032809c4(plVar6,param_2);
    if (param_4 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar11 = *(long *)(lVar5 + 0x10);
    lVar13 = *(long *)(*(long *)(param_7 + 0x38) + 0x18);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_03e402a8;
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar4 + 1;
      plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
      *plVar6 = (long)param_4;
      func_0x032809c4(plVar6,param_4);
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar5,param_4);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*param_4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    uVar12 = 0;
    if (param_4[0x1b] != 0) {
      uVar12 = *(ulong *)(param_4[0x1b] + 0x10);
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar5,param_2);
    if (param_4 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    uVar12 = 0;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (uVar12 != 0) {
    param_5 = uVar12;
  }
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    lVar8 = 9;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e40028:
    lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar11 != 0) {
      lVar8 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar8 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) {
        lVar8 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar8 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        uVar18 = **(undefined8 **)(lVar8 + 0xb8);
        lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar9 = (long *)0x0;
        func_0x053569b8(lVar8,uVar18,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
        lVar13 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar8;
        lVar13 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar13 + 0xb8) + 8,lVar8);
      }
      uVar18 = func_0x03d50a94(lVar11,lVar8,*(undefined8 *)PTR_DAT_0777aa90);
      uVar4 = func_0x03d37bc0(uVar18,param_5,*(undefined8 *)PTR_DAT_0776aeb0);
      auStack_54[0] = 0;
      lVar8 = *(long *)PTR_DAT_07751420;
      func_0x04377614(auStack_54,uVar4 & 1);
      if ((param_6 != (long *)0x0) && (0xff < auStack_54[0])) {
        lVar11 = *param_6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03e401dc;
            }
            uVar12 = uVar12 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar12 != 0);
        }
        lVar8 = 0;
        puVar7 = (undefined8 *)func_0x03256b10(param_6);
LAB_03e401dc:
        uVar18 = (*(code *)*puVar7)(param_6,puVar7[1]);
        *(undefined8 *)(param_2 + 0x28) = uVar18;
        func_0x032809c4((undefined8 *)(param_2 + 0x28),uVar18);
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    lVar11 = *(long *)(*(long *)(param_7 + 0x38) + 0x38);
    uVar18 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    lVar8 = func_0x03256b10(plVar6);
LAB_03e40264:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar11);
    uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,lVar5,0,lVar8);
    return uVar18;
  }
LAB_03e402a8:
  auVar19 = func_0x03280cac();
  lVar5 = lVar8;
  if ((*(long *)(lVar8 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aac0), *(long *)(lVar8 + 0x38) == 0)) {
    func_0x03256878(lVar8);
  }
  plVar6 = *(long **)(auVar19._0_8_ + 0x40);
  if (plVar6 == (long *)0x0) {
    auVar19 = func_0x03280cac();
    lVar8 = lVar5;
    if ((*(long *)(lVar5 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_0777aac8), *(long *)(lVar5 + 0x38) == 0)) {
      func_0x03256878(lVar5);
    }
    plVar6 = *(long **)(auVar19._0_8_ + 0x40);
    if (plVar6 == (long *)0x0) {
      auVar19 = func_0x03280cac();
      lVar5 = lVar8;
      if ((*(long *)(lVar8 + 0x38) == 0) &&
         (func_0x03280a18(PTR_DAT_0777aad0), *(long *)(lVar8 + 0x38) == 0)) {
        func_0x03256878(lVar8);
      }
      plVar6 = *(long **)(auVar19._0_8_ + 0x40);
      if (plVar6 == (long *)0x0) {
        auVar19 = func_0x03280cac();
        lVar8 = lVar5;
        if ((*(long *)(lVar5 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0777aad8), *(long *)(lVar5 + 0x38) == 0)) {
          func_0x03256878(lVar5);
        }
        plVar6 = *(long **)(auVar19._0_8_ + 0x40);
        if (plVar6 == (long *)0x0) {
          auVar19 = func_0x03280cac();
          lVar5 = lVar8;
          if ((*(long *)(lVar8 + 0x38) == 0) &&
             (func_0x03280a18(PTR_DAT_0777aae0), *(long *)(lVar8 + 0x38) == 0)) {
            func_0x03256878(lVar8);
          }
          plVar6 = *(long **)(auVar19._0_8_ + 0x40);
          if (plVar6 == (long *)0x0) {
            auVar19 = func_0x03280cac();
            lVar8 = lVar5;
            if ((*(long *)(lVar5 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777aae8), *(long *)(lVar5 + 0x38) == 0)) {
              func_0x03256878(lVar5);
            }
            plVar6 = *(long **)(auVar19._0_8_ + 0x40);
            if (plVar6 == (long *)0x0) {
              auVar19 = func_0x03280cac();
              lVar5 = lVar8;
              if ((*(long *)(lVar8 + 0x38) == 0) &&
                 (func_0x03280a18(PTR_DAT_0777aaf0), *(long *)(lVar8 + 0x38) == 0)) {
                func_0x03256878(lVar8);
              }
              plVar6 = *(long **)(auVar19._0_8_ + 0x40);
              if (plVar6 == (long *)0x0) {
                auVar19 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar6 = *(long **)(auVar19._0_8_ + 0x40);
                uVar18 = func_0x03d2c6a8(auVar19._8_8_,*(undefined8 *)puVar2);
                uVar18 = func_0x03d5ffd0(uVar18,*(undefined8 *)puVar3);
                if (plVar6 == (long *)0x0) {
                  auVar19 = func_0x03280cac();
                  lVar8 = lVar5;
                  if ((*(long *)(lVar5 + 0x38) == 0) &&
                     (func_0x03280a18(PTR_DAT_0777ab18), *(long *)(lVar5 + 0x38) == 0)) {
                    func_0x03256878(lVar5);
                  }
                  plVar6 = *(long **)(auVar19._0_8_ + 0x40);
                  if (plVar6 == (long *)0x0) {
                    auVar19 = func_0x03280cac();
                    lVar5 = lVar8;
                    if ((*(long *)(lVar8 + 0x38) == 0) &&
                       (func_0x03280a18(PTR_DAT_0777ab20), *(long *)(lVar8 + 0x38) == 0)) {
                      func_0x03256878(lVar8);
                    }
                    plVar6 = *(long **)(auVar19._0_8_ + 0x40);
                    if (plVar6 == (long *)0x0) {
                      auVar19 = func_0x03280cac();
                      lVar8 = lVar5;
                      plVar6 = plVar9;
                      if (plVar9[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar9[7] == 0) {
                          func_0x03256878(plVar9);
                        }
                      }
                      plVar16 = *(long **)(auVar19._0_8_ + 0x40);
                      lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar11,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar11 != 0) {
                        plVar6 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar11,*(undefined8 *)PTR_DAT_07779e90);
                        lVar8 = lVar5;
                        if (plVar16 != (long *)0x0) {
                          lVar8 = *plVar16;
                          lVar5 = *(long *)(plVar9[7] + 8);
                          uVar18 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                          if (uVar14 != 0) {
                            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
                                lVar8 = lVar8 + (long)(int)(*piVar15 +
                                                           (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                                        0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar14 = uVar14 - 1;
                              piVar15 = piVar15 + 4;
                            } while (uVar14 != 0);
                          }
                          lVar8 = func_0x03256b10(plVar16);
LAB_03e40cdc:
                          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar18 = (**(code **)(lVar8 + 8))
                                             (plVar16,uVar18,auVar19._8_8_,lVar11,lVar8);
                          return uVar18;
                        }
                      }
                      auVar19 = func_0x03280cac();
                      lVar5 = lVar8;
                      if ((*(long *)(lVar8 + 0x38) == 0) &&
                         (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar8 + 0x38) == 0)) {
                        func_0x03256878(lVar8);
                      }
                      plVar9 = *(long **)(auVar19._0_8_ + 0x40);
                      if (plVar9 == (long *)0x0) {
                        auVar19 = func_0x03280cac();
                        lVar8 = lVar5;
                        plVar9 = plVar6;
                        if (plVar6[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar6[7] == 0) {
                            func_0x03256878(plVar6);
                          }
                        }
                        plVar16 = *(long **)(auVar19._0_8_ + 0x40);
                        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar11,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar11 != 0) {
                          plVar9 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar11,*(undefined8 *)PTR_DAT_07779e90,lVar5,plVar9);
                          lVar8 = lVar5;
                          if (plVar16 != (long *)0x0) {
                            lVar8 = *plVar16;
                            lVar5 = *(long *)(plVar6[7] + 8);
                            uVar18 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                            if (uVar14 != 0) {
                              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
                                  lVar8 = lVar8 + (long)(int)(*piVar15 +
                                                             (uint)*(ushort *)(lVar5 + 0x50)) * 0x10
                                          + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar14 = uVar14 - 1;
                                piVar15 = piVar15 + 4;
                              } while (uVar14 != 0);
                            }
                            lVar8 = func_0x03256b10(plVar16);
LAB_03e40f1c:
                            lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar18 = (**(code **)(lVar8 + 8))
                                               (plVar16,uVar18,auVar19._8_8_,lVar11,lVar8);
                            return uVar18;
                          }
                        }
                        auVar19 = func_0x03280cac();
                        if (plVar10[7] == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (plVar10[7] == 0) {
                            func_0x03256878(plVar10);
                          }
                        }
                        lVar11 = *(long *)PTR_DAT_0777ab40;
                        lVar5 = *(long *)(lVar11 + 0x38);
                        if (lVar5 == 0) {
                          func_0x03256878(lVar11);
                          lVar5 = *(long *)(lVar11 + 0x38);
                        }
                        lVar5 = *(long *)(lVar5 + 0x10);
                        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                          lVar5 = func_0x0325681c();
                        }
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                          lVar5 = func_0x0325681c();
                        }
                        uVar18 = (*(code *)**(undefined8 **)(plVar10[7] + 0x10))
                                           (auVar19._8_8_,lVar8,**(undefined8 **)(lVar5 + 0xb8));
                        uVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(uVar17,auVar19._0_8_,plVar9,uVar14 & 0xffffffff,uVar18,0);
                        return uVar17;
                      }
                      lVar5 = *plVar9;
                      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
                      uVar18 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
                            lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50))
                                            * 0x10 + 0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      lVar5 = func_0x03256b10(plVar9);
LAB_03e40dbc:
                      lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar18 = (**(code **)(lVar8 + 8))(plVar9,uVar18,auVar19._8_8_,0,lVar8);
                      return uVar18;
                    }
                    lVar5 = *plVar6;
                    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
                    uVar18 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
                          lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    lVar5 = func_0x03256b10(plVar6);
LAB_03e40b7c:
                    lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
                    return uVar18;
                  }
                  lVar8 = *plVar6;
                  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
                  uVar18 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
                        lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  lVar8 = func_0x03256b10(plVar6);
LAB_03e40a9c:
                  lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
                  return uVar18;
                }
                lVar8 = *plVar6;
                lVar5 = *(long *)PTR_DAT_0777ab08;
                uVar17 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
                      lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                lVar8 = func_0x03256b10(plVar6);
LAB_03e409bc:
                lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar17,uVar18,0,lVar8);
                return uVar18;
              }
              lVar5 = *plVar6;
              lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
              uVar18 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
                    lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_03e40894;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              lVar5 = func_0x03256b10(plVar6);
LAB_03e40894:
              lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
              return uVar18;
            }
            lVar8 = *plVar6;
            lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
            uVar18 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e407b4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            lVar8 = func_0x03256b10(plVar6);
LAB_03e407b4:
            lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
            return uVar18;
          }
          lVar5 = *plVar6;
          lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
          uVar18 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
                lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03e406d4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar5 = func_0x03256b10(plVar6);
LAB_03e406d4:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
          return uVar18;
        }
        lVar8 = *plVar6;
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
        uVar18 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
              lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_03e405f4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        lVar8 = func_0x03256b10(plVar6);
LAB_03e405f4:
        lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
        return uVar18;
      }
      lVar5 = *plVar6;
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
      uVar18 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40514;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      lVar5 = func_0x03256b10(plVar6);
LAB_03e40514:
      lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
      return uVar18;
    }
    lVar8 = *plVar6;
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
    uVar18 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    lVar8 = func_0x03256b10(plVar6);
LAB_03e40434:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
    return uVar18;
  }
  lVar5 = *plVar6;
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
  uVar18 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  lVar5 = func_0x03256b10(plVar6);
LAB_03e40354:
  lVar8 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar18 = (**(code **)(lVar8 + 8))(plVar6,uVar18,auVar19._8_8_,0,lVar8);
  return uVar18;
}


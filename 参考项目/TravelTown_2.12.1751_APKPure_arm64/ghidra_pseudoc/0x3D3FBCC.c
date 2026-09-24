/* Ghidra 12.1.2 native pseudocode; RVA 0x3D3FBCC; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackCollectToolFragment<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackCollectToolFragment_object_
          (long param_1,undefined8 param_2,long param_3,long *param_4,ulong param_5,long *param_6,
          long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  ushort auStack_b4 [2];
  undefined8 uStack_b0;
  
  lVar9 = param_3;
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aa80), *(long *)(param_3 + 0x38) == 0)) {
    func_0x03256878(param_3);
  }
  plVar14 = *(long **)(param_1 + 0x40);
  if (plVar14 != (long *)0x0) {
    lVar9 = *plVar14;
    lVar19 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    uVar16 = *(undefined8 *)PTR_DAT_0777aa80;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e3fc74;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = func_0x03256b10(plVar14);
LAB_03e3fc74:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e3fca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar16 = (**(code **)(lVar9 + 8))(plVar14,uVar16,param_2,0,lVar9);
    return uVar16;
  }
  auVar20 = func_0x03280cac();
  lVar19 = lVar9;
  if ((*(long *)(lVar9 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aa88), *(long *)(lVar9 + 0x38) == 0)) {
    func_0x03256878(lVar9);
  }
  plVar14 = *(long **)(auVar20._0_8_ + 0x40);
  if (plVar14 != (long *)0x0) {
    lVar19 = *plVar14;
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
    uVar16 = *(undefined8 *)PTR_DAT_0777aa88;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e3fd54;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    lVar19 = func_0x03256b10(plVar14);
LAB_03e3fd54:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e3fd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar16 = (**(code **)(lVar9 + 8))(plVar14,uVar16,auVar20._8_8_,0,lVar9);
    return uVar16;
  }
  auVar20 = func_0x03280cac();
  lVar17 = auVar20._8_8_;
  uStack_b0 = 0x3e3fd8c;
  lVar9 = lVar19;
  plVar14 = param_4;
  uVar11 = param_5;
  plVar8 = param_6;
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
  *(long *)(lVar5 + 0x30) = lVar19;
  func_0x032809c4((long *)(lVar5 + 0x30),lVar19);
  if (lVar17 == 0) goto LAB_03e402a8;
  *(long *)(lVar17 + 0x20) = lVar5;
  func_0x032809c4((long *)(lVar17 + 0x20),lVar5);
  if ((*(byte *)(*(long *)(*(long *)(param_7 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  func_0x04143c38(lVar19,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10));
  if (lVar19 == 0) goto LAB_03e402a8;
  lVar5 = *(long *)(lVar19 + 0x10);
  lVar12 = *(long *)(*(long *)(param_7 + 0x38) + 0x18);
  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_03e402a8;
  uVar4 = *(uint *)(lVar19 + 0x18);
  if (uVar4 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar19 + 0x18) = uVar4 + 1;
    plVar6 = (long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
    *plVar6 = lVar17;
    func_0x032809c4(plVar6,lVar17);
    if (param_4 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar5 = *(long *)(lVar19 + 0x10);
    lVar12 = *(long *)(*(long *)(param_7 + 0x38) + 0x18);
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_03e402a8;
    uVar4 = *(uint *)(lVar19 + 0x18);
    if (uVar4 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar4 + 1;
      plVar6 = (long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      *plVar6 = (long)param_4;
      func_0x032809c4(plVar6,param_4);
    }
    else {
      lVar9 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar19,param_4);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*param_4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    uVar10 = 0;
    if (param_4[0x1b] != 0) {
      uVar10 = *(ulong *)(param_4[0x1b] + 0x10);
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar19,lVar17);
    if (param_4 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    uVar10 = 0;
  }
  plVar6 = *(long **)(auVar20._0_8_ + 0x48);
  if (uVar10 != 0) {
    param_5 = uVar10;
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = 9;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e40028:
    lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar5 != 0) {
      lVar9 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar9 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 == 0) {
        lVar9 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar9 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c();
        }
        uVar16 = **(undefined8 **)(lVar9 + 0xb8);
        lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar14 = (long *)0x0;
        func_0x053569b8(lVar9,uVar16,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
        lVar12 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar9;
        lVar12 = *(long *)(*(long *)(param_7 + 0x38) + 0x28);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar12 + 0xb8) + 8,lVar9);
      }
      uVar16 = func_0x03d50a94(lVar5,lVar9,*(undefined8 *)PTR_DAT_0777aa90);
      uVar4 = func_0x03d37bc0(uVar16,param_5,*(undefined8 *)PTR_DAT_0776aeb0);
      auStack_b4[0] = 0;
      lVar9 = *(long *)PTR_DAT_07751420;
      func_0x04377614(auStack_b4,uVar4 & 1);
      if ((param_6 != (long *)0x0) && (0xff < auStack_b4[0])) {
        lVar5 = *param_6;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03e401dc;
            }
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar10 != 0);
        }
        lVar9 = 0;
        puVar7 = (undefined8 *)func_0x03256b10(param_6);
LAB_03e401dc:
        uVar16 = (*(code *)*puVar7)(param_6,puVar7[1]);
        *(undefined8 *)(lVar17 + 0x28) = uVar16;
        func_0x032809c4((undefined8 *)(lVar17 + 0x28),uVar16);
      }
    }
  }
  plVar6 = *(long **)(auVar20._0_8_ + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    lVar17 = *(long *)(*(long *)(param_7 + 0x38) + 0x38);
    uVar16 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = func_0x03256b10(plVar6);
LAB_03e40264:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar17);
    uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,lVar19,0,lVar9);
    return uVar16;
  }
LAB_03e402a8:
  auVar20 = func_0x03280cac();
  lVar19 = lVar9;
  if ((*(long *)(lVar9 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aac0), *(long *)(lVar9 + 0x38) == 0)) {
    func_0x03256878(lVar9);
  }
  plVar6 = *(long **)(auVar20._0_8_ + 0x40);
  if (plVar6 == (long *)0x0) {
    auVar20 = func_0x03280cac();
    lVar9 = lVar19;
    if ((*(long *)(lVar19 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_0777aac8), *(long *)(lVar19 + 0x38) == 0)) {
      func_0x03256878(lVar19);
    }
    plVar6 = *(long **)(auVar20._0_8_ + 0x40);
    if (plVar6 == (long *)0x0) {
      auVar20 = func_0x03280cac();
      lVar19 = lVar9;
      if ((*(long *)(lVar9 + 0x38) == 0) &&
         (func_0x03280a18(PTR_DAT_0777aad0), *(long *)(lVar9 + 0x38) == 0)) {
        func_0x03256878(lVar9);
      }
      plVar6 = *(long **)(auVar20._0_8_ + 0x40);
      if (plVar6 == (long *)0x0) {
        auVar20 = func_0x03280cac();
        lVar9 = lVar19;
        if ((*(long *)(lVar19 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0777aad8), *(long *)(lVar19 + 0x38) == 0)) {
          func_0x03256878(lVar19);
        }
        plVar6 = *(long **)(auVar20._0_8_ + 0x40);
        if (plVar6 == (long *)0x0) {
          auVar20 = func_0x03280cac();
          lVar19 = lVar9;
          if ((*(long *)(lVar9 + 0x38) == 0) &&
             (func_0x03280a18(PTR_DAT_0777aae0), *(long *)(lVar9 + 0x38) == 0)) {
            func_0x03256878(lVar9);
          }
          plVar6 = *(long **)(auVar20._0_8_ + 0x40);
          if (plVar6 == (long *)0x0) {
            auVar20 = func_0x03280cac();
            lVar9 = lVar19;
            if ((*(long *)(lVar19 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777aae8), *(long *)(lVar19 + 0x38) == 0)) {
              func_0x03256878(lVar19);
            }
            plVar6 = *(long **)(auVar20._0_8_ + 0x40);
            if (plVar6 == (long *)0x0) {
              auVar20 = func_0x03280cac();
              lVar19 = lVar9;
              if ((*(long *)(lVar9 + 0x38) == 0) &&
                 (func_0x03280a18(PTR_DAT_0777aaf0), *(long *)(lVar9 + 0x38) == 0)) {
                func_0x03256878(lVar9);
              }
              plVar6 = *(long **)(auVar20._0_8_ + 0x40);
              if (plVar6 == (long *)0x0) {
                auVar20 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar6 = *(long **)(auVar20._0_8_ + 0x40);
                uVar16 = func_0x03d2c6a8(auVar20._8_8_,*(undefined8 *)puVar2);
                uVar16 = func_0x03d5ffd0(uVar16,*(undefined8 *)puVar3);
                if (plVar6 == (long *)0x0) {
                  auVar20 = func_0x03280cac();
                  lVar9 = lVar19;
                  if ((*(long *)(lVar19 + 0x38) == 0) &&
                     (func_0x03280a18(PTR_DAT_0777ab18), *(long *)(lVar19 + 0x38) == 0)) {
                    func_0x03256878(lVar19);
                  }
                  plVar6 = *(long **)(auVar20._0_8_ + 0x40);
                  if (plVar6 == (long *)0x0) {
                    auVar20 = func_0x03280cac();
                    lVar19 = lVar9;
                    if ((*(long *)(lVar9 + 0x38) == 0) &&
                       (func_0x03280a18(PTR_DAT_0777ab20), *(long *)(lVar9 + 0x38) == 0)) {
                      func_0x03256878(lVar9);
                    }
                    plVar6 = *(long **)(auVar20._0_8_ + 0x40);
                    if (plVar6 == (long *)0x0) {
                      auVar20 = func_0x03280cac();
                      lVar9 = lVar19;
                      plVar6 = plVar14;
                      if (plVar14[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar14[7] == 0) {
                          func_0x03256878(plVar14);
                        }
                      }
                      plVar15 = *(long **)(auVar20._0_8_ + 0x40);
                      lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar17,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar17 != 0) {
                        plVar6 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar17,*(undefined8 *)PTR_DAT_07779e90);
                        lVar9 = lVar19;
                        if (plVar15 != (long *)0x0) {
                          lVar9 = *plVar15;
                          lVar19 = *(long *)(plVar14[7] + 8);
                          uVar16 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                          if (uVar11 != 0) {
                            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
                                lVar9 = lVar9 + (long)(int)(*piVar13 +
                                                           (uint)*(ushort *)(lVar19 + 0x50)) * 0x10
                                        + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar11 = uVar11 - 1;
                              piVar13 = piVar13 + 4;
                            } while (uVar11 != 0);
                          }
                          lVar9 = func_0x03256b10(plVar15);
LAB_03e40cdc:
                          lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar16 = (**(code **)(lVar9 + 8))
                                             (plVar15,uVar16,auVar20._8_8_,lVar17,lVar9);
                          return uVar16;
                        }
                      }
                      auVar20 = func_0x03280cac();
                      lVar19 = lVar9;
                      if ((*(long *)(lVar9 + 0x38) == 0) &&
                         (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar9 + 0x38) == 0)) {
                        func_0x03256878(lVar9);
                      }
                      plVar14 = *(long **)(auVar20._0_8_ + 0x40);
                      if (plVar14 == (long *)0x0) {
                        auVar20 = func_0x03280cac();
                        lVar9 = lVar19;
                        plVar14 = plVar6;
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
                        plVar15 = *(long **)(auVar20._0_8_ + 0x40);
                        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar17,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar17 != 0) {
                          plVar14 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar17,*(undefined8 *)PTR_DAT_07779e90,lVar19,plVar14);
                          lVar9 = lVar19;
                          if (plVar15 != (long *)0x0) {
                            lVar9 = *plVar15;
                            lVar19 = *(long *)(plVar6[7] + 8);
                            uVar16 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar11 != 0) {
                              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
                                  lVar9 = lVar9 + (long)(int)(*piVar13 +
                                                             (uint)*(ushort *)(lVar19 + 0x50)) *
                                                  0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar11 = uVar11 - 1;
                                piVar13 = piVar13 + 4;
                              } while (uVar11 != 0);
                            }
                            lVar9 = func_0x03256b10(plVar15);
LAB_03e40f1c:
                            lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar16 = (**(code **)(lVar9 + 8))
                                               (plVar15,uVar16,auVar20._8_8_,lVar17,lVar9);
                            return uVar16;
                          }
                        }
                        auVar20 = func_0x03280cac();
                        if (plVar8[7] == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (plVar8[7] == 0) {
                            func_0x03256878(plVar8);
                          }
                        }
                        lVar17 = *(long *)PTR_DAT_0777ab40;
                        lVar19 = *(long *)(lVar17 + 0x38);
                        if (lVar19 == 0) {
                          func_0x03256878(lVar17);
                          lVar19 = *(long *)(lVar17 + 0x38);
                        }
                        lVar19 = *(long *)(lVar19 + 0x10);
                        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                          lVar19 = func_0x0325681c();
                        }
                        if (*(int *)(lVar19 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar19 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
                        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                          lVar19 = func_0x0325681c();
                        }
                        uVar16 = (*(code *)**(undefined8 **)(plVar8[7] + 0x10))
                                           (auVar20._8_8_,lVar9,**(undefined8 **)(lVar19 + 0xb8));
                        uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(uVar18,auVar20._0_8_,plVar14,uVar11 & 0xffffffff,uVar16,0);
                        return uVar18;
                      }
                      lVar19 = *plVar14;
                      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
                      uVar16 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                      if (uVar11 != 0) {
                        piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
                            lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)
                                                         ) * 0x10 + 0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar11 = uVar11 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar11 != 0);
                      }
                      lVar19 = func_0x03256b10(plVar14);
LAB_03e40dbc:
                      lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar16 = (**(code **)(lVar9 + 8))(plVar14,uVar16,auVar20._8_8_,0,lVar9);
                      return uVar16;
                    }
                    lVar19 = *plVar6;
                    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
                    uVar16 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar11 != 0) {
                      piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
                          lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar11 = uVar11 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar11 != 0);
                    }
                    lVar19 = func_0x03256b10(plVar6);
LAB_03e40b7c:
                    lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
                    return uVar16;
                  }
                  lVar9 = *plVar6;
                  lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
                  uVar16 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar11 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
                        lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar11 != 0);
                  }
                  lVar9 = func_0x03256b10(plVar6);
LAB_03e40a9c:
                  lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
                  return uVar16;
                }
                lVar9 = *plVar6;
                lVar19 = *(long *)PTR_DAT_0777ab08;
                uVar18 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
                      lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                      0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                lVar9 = func_0x03256b10(plVar6);
LAB_03e409bc:
                lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar18,uVar16,0,lVar9);
                return uVar16;
              }
              lVar19 = *plVar6;
              lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
              uVar16 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
                    lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10
                             + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              lVar19 = func_0x03256b10(plVar6);
LAB_03e40894:
              lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
              return uVar16;
            }
            lVar9 = *plVar6;
            lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
            uVar16 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
                  lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e407b4;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            lVar9 = func_0x03256b10(plVar6);
LAB_03e407b4:
            lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
            return uVar16;
          }
          lVar19 = *plVar6;
          lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
          uVar16 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
                lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          lVar19 = func_0x03256b10(plVar6);
LAB_03e406d4:
          lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
          return uVar16;
        }
        lVar9 = *plVar6;
        lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
        uVar16 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
              lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_03e405f4;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        lVar9 = func_0x03256b10(plVar6);
LAB_03e405f4:
        lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
        return uVar16;
      }
      lVar19 = *plVar6;
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      uVar16 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138
            ;
            goto LAB_03e40514;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      lVar19 = func_0x03256b10(plVar6);
LAB_03e40514:
      lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
      return uVar16;
    }
    lVar9 = *plVar6;
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    uVar16 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar19 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = func_0x03256b10(plVar6);
LAB_03e40434:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
    return uVar16;
  }
  lVar19 = *plVar6;
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
  uVar16 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar19 = lVar19 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  lVar19 = func_0x03256b10(plVar6);
LAB_03e40354:
  lVar9 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar16 = (**(code **)(lVar9 + 8))(plVar6,uVar16,auVar20._8_8_,0,lVar9);
  return uVar16;
}


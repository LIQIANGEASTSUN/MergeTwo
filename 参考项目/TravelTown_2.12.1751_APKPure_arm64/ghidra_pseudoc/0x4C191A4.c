/* Ghidra 12.1.2 native pseudocode; RVA 0x4C191A4; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.UpdateTimeLockCapacityState; status ok */

long MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___UpdateTimeLockCapacityState
               (undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long unaff_x21;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if ((bRam0000000007e1af07 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780428);
    func_0x03280a18(PTR_DAT_0777a960);
    func_0x03280a18(PTR_DAT_07780430);
    func_0x03280a18(PTR_DAT_07780438);
    bRam0000000007e1af07 = 1;
  }
  if (param_2 != 0) {
    lVar10 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_0777a960);
    lVar11 = 0;
    if (((lVar10 != 0) &&
        (lVar11 = func_0x03ced81c(lVar10,*(undefined8 *)PTR_DAT_07780428), lVar11 != 0)) &&
       (0 < *(int *)(lVar11 + 0x74))) {
      *(undefined4 *)(lVar11 + 0x44) = 2;
    }
    return lVar11;
  }
  auVar27 = func_0x03280cac();
  uVar23 = auVar27._8_8_;
  lVar11 = auVar27._0_8_;
  lStack_70 = 0x4d19248;
  puVar24 = (undefined8 *)0x7e1a000;
  if ((bRam0000000007e1af08 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780440);
    func_0x03280a18(PTR_DAT_07780448);
    func_0x03280a18(PTR_DAT_07780450);
    func_0x03280a18(PTR_DAT_07780458);
    func_0x03280a18(PTR_DAT_0777f910);
    func_0x03280a18(PTR_DAT_07780460);
    bRam0000000007e1af08 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar10 = func_0x03280ca0();
  func_0x04c1d590(lVar10,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  puVar4 = PTR_DAT_07780458;
  puVar3 = PTR_DAT_07780440;
  puVar9 = PTR_DAT_0777f910;
  if (lVar10 == 0) {
LAB_04d195d8:
    auVar27 = func_0x03280cac();
    lVar21 = auVar27._8_8_;
    lVar19 = auVar27._0_8_;
    uStack_a0 = 0x4d195dc;
    lStack_98 = lVar10;
    auStack_90._0_8_ = puVar24;
    auStack_90._8_8_ = uVar23;
    lStack_80 = lVar11;
    lStack_78 = param_3;
    if ((bRam0000000007e1af09 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780468);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_07780470);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e1af09 = 1;
    }
    if (lVar21 != 0) {
      lVar11 = func_0x03d20d84(lVar21,*(undefined8 *)PTR_DAT_07780468);
      if ((lVar11 == 0) || (*(char *)(lVar11 + 0x65) == '\0')) {
        return lVar11;
      }
      plVar20 = *(long **)(lVar19 + 0x60);
      if (plVar20 != (long *)0x0) {
        lVar10 = *plVar20;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar24 = (undefined8 *)(lVar10 + (long)(*piVar22 + 0x14) * 0x10 + 0x138);
              goto LAB_04d196d8;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar24 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
        uVar23 = (*(code *)*puVar24)(plVar20,lVar11,puVar24[1]);
        plVar20 = *(long **)(lVar19 + 0x68);
        if (plVar20 != (long *)0x0) {
          lVar11 = *plVar20;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          uVar25 = *(undefined8 *)PTR_DAT_07778fa0;
          if (uVar12 != 0) {
            piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777e4a0) {
                puVar24 = (undefined8 *)(lVar11 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_04d19754;
              }
              uVar12 = uVar12 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar12 != 0);
          }
          puVar24 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
          uVar23 = (*(code *)*puVar24)(plVar20,uVar25,uVar23,lVar21,0,puVar24[1]);
          lVar11 = lStack_98;
          lVar10 = *(long *)(lVar19 + 0x78);
          if (lVar10 != 0) {
            uVar15 = 0;
            uVar25 = 0;
            if ((bRam0000000007e28edd & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07807698);
              bRam0000000007e28edd = 1;
            }
            plVar20 = *(long **)(lVar10 + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar25 = *(undefined8 *)PTR_DAT_07807698;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9554;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9554:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar25,uVar23,0,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            uVar17 = auVar27._8_8_;
            auStack_d0._0_8_ = 0x68b9590;
            auStack_d0._8_8_ = lVar11;
            uStack_c0 = 0x7e28000;
            auStack_b0._8_8_ = 0;
            uVar16 = uVar15;
            plStack_b8 = plVar20;
            auStack_b0._0_8_ = uVar23;
            if ((bRam0000000007e28ede & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811878);
              bRam0000000007e28ede = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_07811878;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9644;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9644:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,uVar17,0,uVar15,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            uVar13 = auVar27._8_8_;
            uStack_100 = 0x68b9680;
            lStack_f8 = lVar11;
            auStack_f0._0_8_ = 0x7e28000;
            uVar23 = uVar16;
            auStack_f0._8_8_ = plVar20;
            uStack_e0 = uVar17;
            uStack_d8 = uVar15;
            if ((bRam0000000007e28edf & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_0776b160);
              bRam0000000007e28edf = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_0776b160;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9734;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9734:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,uVar13,0,uVar16,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            uVar15 = auVar27._8_8_;
            auStack_130._0_8_ = 0x68b9770;
            uStack_120 = 0x7e28000;
            plStack_118 = plVar20;
            auStack_110._0_8_ = uVar13;
            auStack_110._8_8_ = uVar16;
            if ((bRam0000000007e28ee0 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811880);
              bRam0000000007e28ee0 = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_07811880;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9820;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9820:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,uVar15,0,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            uVar16 = auVar27._8_8_;
            uStack_160 = 0x68b985c;
            auStack_158._8_8_ = 0x7e28000;
            lStack_148 = 0x7e28000;
            plStack_140 = plVar20;
            lStack_138 = uVar15;
            if ((bRam0000000007e28ee1 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee1 = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_07811888;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b990c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b990c:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,uVar16,0,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            puVar24 = (undefined8 *)PTR_DAT_0777aa98;
            uStack_1a0 = 0x68b9948;
            lStack_188 = lVar11;
            uStack_180 = 0x7e28000;
            auStack_178._0_8_ = 0x7e28000;
            uVar17 = uVar23;
            uVar15 = uVar25;
            auStack_198._8_8_ = unaff_x24;
            auStack_178._8_8_ = plVar20;
            lStack_168 = uVar16;
            if ((bRam0000000007e28ee2 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee2 = 1;
            }
            lVar11 = func_0x03280ca0(*puVar24);
            func_0x06a30df4(lVar11,0);
            if (lVar11 != 0) {
              puVar24 = (undefined8 *)(lVar11 + 0x30);
              *puVar24 = uVar23;
              func_0x032809c4(puVar24,uVar23);
              *(undefined8 *)(lVar11 + 0x38) = uVar25;
              plVar20 = *(long **)(auVar27._0_8_ + 0x40);
              uVar25 = 0;
              if (plVar20 != (long *)0x0) {
                lVar10 = *plVar20;
                lVar19 = *(long *)PTR_DAT_07802f60;
                uVar23 = *(undefined8 *)PTR_DAT_07811888;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x20)) {
                      lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9a48;
                    }
                    uVar12 = uVar12 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar12 != 0);
                }
                lVar10 = func_0x03256b10(plVar20);
LAB_068b9a48:
                lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar11 = (**(code **)(lVar10 + 8))(plVar20,uVar23,auVar27._8_8_,0,lVar11,lVar10);
                return lVar11;
              }
            }
            auVar26 = func_0x03280cac();
            puVar9 = PTR_DAT_0777aa98;
            lStack_1e0 = 0x68b9a88;
            puStack_1d0 = puVar24;
            uStack_1c8 = uVar23;
            auStack_1b8._0_8_ = uVar25;
            auStack_1b8._8_8_ = lVar11;
            if ((bRam0000000007e28ee3 & 1) == 0) {
              lStack_1c0 = auVar27._0_8_;
              lStack_1a8 = auVar27._8_8_;
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077c1e10);
              auVar27._8_8_ = lStack_1a8;
              auVar27._0_8_ = lStack_1c0;
              bRam0000000007e28ee3 = 1;
            }
            lStack_1a8 = auVar27._8_8_;
            lStack_1c0 = auVar27._0_8_;
            lVar11 = func_0x03280ca0(*(undefined8 *)puVar9);
            func_0x06a30df4(lVar11,0);
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x30) = uVar17;
              func_0x032809c4((undefined8 *)(lVar11 + 0x30),uVar17);
              *(undefined8 *)(lVar11 + 0x38) = uVar15;
              plVar20 = *(long **)(auVar26._0_8_ + 0x40);
              uVar15 = 0;
              if (plVar20 != (long *)0x0) {
                lVar10 = *plVar20;
                lVar19 = *(long *)PTR_DAT_07802f60;
                uVar23 = *(undefined8 *)PTR_DAT_077c1e10;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x20)) {
                      lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9b88;
                    }
                    uVar12 = uVar12 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar12 != 0);
                }
                lVar10 = func_0x03256b10(plVar20);
LAB_068b9b88:
                lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar11 = (**(code **)(lVar10 + 8))(plVar20,uVar23,auVar26._8_8_,0,lVar11,lVar10);
                return lVar11;
              }
            }
            auVar27 = func_0x03280cac();
            uStack_1f8 = uVar15;
            auStack_1f0._0_8_ = lVar11;
            if ((bRam0000000007e28ee4 & 1) == 0) {
              lStack_200 = auVar26._0_8_;
              auStack_1f0._8_8_ = auVar26._8_8_;
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077d7510);
              auVar26._8_8_ = auStack_1f0._8_8_;
              auVar26._0_8_ = lStack_200;
              bRam0000000007e28ee4 = 1;
            }
            auStack_1f0._8_8_ = auVar26._8_8_;
            lStack_200 = auVar26._0_8_;
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_077d7510;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9c78;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
              auVar26._8_8_ = auStack_1f0._8_8_;
              auVar26._0_8_ = lStack_200;
LAB_068b9c78:
              auStack_1f0._8_8_ = auVar26._8_8_;
              lStack_200 = auVar26._0_8_;
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,auVar27._8_8_,0,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            if ((bRam0000000007e28ee5 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811890);
              bRam0000000007e28ee5 = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_07802f60;
              uVar23 = *(undefined8 *)PTR_DAT_07811890;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9d64;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9d64:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,auVar27._8_8_,0,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            if ((bRam0000000007e28ee6 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777ab08);
              func_0x03280a18(PTR_DAT_07811898);
              bRam0000000007e28ee6 = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 != (long *)0x0) {
              lVar11 = *plVar20;
              lVar10 = *(long *)PTR_DAT_0777ab08;
              uVar23 = *(undefined8 *)PTR_DAT_07811898;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                    lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9e50;
                  }
                  uVar12 = uVar12 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x03256b10(plVar20);
LAB_068b9e50:
              lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,auVar27._8_8_,0,lVar11);
              return lVar11;
            }
            auVar27 = func_0x03280cac();
            if ((bRam0000000007e28ee7 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_078118a0);
              bRam0000000007e28ee7 = 1;
            }
            plVar20 = *(long **)(auVar27._0_8_ + 0x40);
            if (plVar20 == (long *)0x0) {
              lVar11 = func_0x03280cac();
              return lVar11;
            }
            lVar11 = *plVar20;
            lVar10 = *(long *)PTR_DAT_07802f60;
            uVar23 = *(undefined8 *)PTR_DAT_078118a0;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                  lVar11 = lVar11 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9f38;
                }
                uVar12 = uVar12 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x03256b10(plVar20);
LAB_068b9f38:
            lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar11 = (**(code **)(lVar11 + 8))(plVar20,uVar23,auVar27._8_8_,0,0,lVar11);
            return lVar11;
          }
        }
      }
    }
    lVar11 = func_0x03280cac();
    return lVar11;
  }
  puVar24 = (undefined8 *)(lVar10 + 0x10);
  *puVar24 = uVar23;
  func_0x032809c4(puVar24,uVar23);
  uVar23 = *puVar24;
  unaff_x24 = func_0x03280ca0(*(undefined8 *)puVar9);
  lVar19 = 0;
  func_0x05355fbc(unaff_x24,lVar10,
                  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
  uVar23 = func_0x03d872a8(uVar23,unaff_x24,*(undefined8 *)puVar4);
  uVar12 = func_0x03d281a8(uVar23,*(undefined8 *)puVar3);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(lVar11 + 0x70) == 0) goto LAB_04d195d8;
    MergeEngine_ECS_Systems_Board_BoardSystem__MoveDuplicatePositionedItemsToItemQueue
              (*(long *)(lVar11 + 0x70),uVar23,0);
  }
  uVar23 = *puVar24;
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    uVar25 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)puVar9);
    lVar19 = 0;
    func_0x05355fbc(lVar11,uVar25,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
    lVar21 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar10 = *(long *)(lVar21 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
      lVar21 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar10 + 0xb8) + 0x10) = lVar11;
    lVar10 = *(long *)(lVar21 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar10 + 0xb8) + 0x10,lVar11);
  }
  uVar23 = func_0x03d872a8(uVar23,lVar11,*(undefined8 *)puVar4);
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c(lVar11);
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  puVar3 = PTR_DAT_07780450;
  puVar9 = PTR_DAT_07780448;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    uVar25 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
    lVar19 = 0;
    func_0x053569b8(lVar11,uVar25,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
    lVar21 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar10 = *(long *)(lVar21 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
      lVar21 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar10 + 0xb8) + 0x18) = lVar11;
    lVar10 = *(long *)(lVar21 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar10 + 0xb8) + 0x18,lVar11);
  }
  lVar21 = *(long *)puVar9;
  lVar11 = func_0x03d50a94(uVar23,lVar11);
  lVar10 = *(long *)puVar3;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (lVar11 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x04143d60(lVar19,lVar11,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar19;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar10);
  lVar10 = auVar27._8_8_;
  lVar11 = auVar27._0_8_;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (lVar11 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x0419ce74(lVar19,lVar11,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar19;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar10);
  lVar10 = auVar27._8_8_;
  lStack_80 = 0x3d600c8;
  lStack_70 = lVar11;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    func_0x041c2810(lVar11,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar26 = func_0x03280b7c(uVar23,lVar10);
  lVar11 = auVar26._8_8_;
  uStack_a0 = 0x3d60144;
  auStack_90 = auVar27;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041ddb58(lVar10,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar10;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar11);
  lVar11 = auVar27._8_8_;
  uStack_c0 = 0x3d601c0;
  auStack_b0 = auVar26;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041e617c(lVar10,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar10;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar26 = func_0x03280b7c(uVar23,lVar11);
  lVar11 = auVar26._8_8_;
  uStack_e0 = 0x3d6023c;
  auStack_d0 = auVar27;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041e8ba0(lVar10,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar10;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar11);
  lVar11 = auVar27._8_8_;
  uStack_100 = 0x3d602b8;
  auStack_f0 = auVar26;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))(lVar10,auVar27._0_8_);
    return lVar10;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar26 = func_0x03280b7c(uVar23,lVar11);
  lVar11 = auVar26._8_8_;
  uStack_120 = 0x3d60338;
  auStack_110 = auVar27;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x0420cec8(lVar10,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar10;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar11);
  plStack_140 = (long *)0x3d603b4;
  lVar11 = lVar21;
  lStack_138 = unaff_x21;
  auStack_130 = auVar26;
  if (*(long *)(lVar21 + 0x38) == 0) {
    func_0x03256878(lVar21);
  }
  puVar9 = PTR_DAT_07779d10;
  if ((auVar27._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
    uVar23 = func_0x03280a2c(puVar9);
    uVar23 = func_0x05ac7464(uVar23,0);
    auVar26 = func_0x03280b7c(uVar23,lVar21);
    uStack_160 = 0x3d60428;
    lVar10 = lVar11;
    lStack_148 = lVar21;
    if (*(long *)(lVar11 + 0x38) == 0) {
      auStack_158 = auVar27;
      func_0x03256878(lVar11);
      auVar27 = auStack_158;
    }
    puVar9 = PTR_DAT_07779d10;
    auStack_158 = auVar27;
    if ((auVar26._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
      lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      lVar19 = 0;
      pplVar6 = &plStack_140;
      lVar11 = lStack_148;
      uVar23 = uStack_160;
      goto LAB_03d60730;
    }
    uVar23 = func_0x03280a2c(puVar9);
    uVar23 = func_0x05ac7464(uVar23,0);
    auVar27 = func_0x03280b7c(uVar23,lVar11);
    uStack_180 = 0x3d6049c;
    lVar21 = lVar10;
    lStack_168 = lVar11;
    auStack_178 = auVar26;
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
      uVar23 = func_0x03280a2c(puVar9);
      uVar23 = func_0x05ac7464(uVar23,0);
      auStack_1b8 = func_0x03280b7c(uVar23,lVar10);
      uStack_1a0 = 0x3d60510;
      lVar8 = lVar21;
      lStack_188 = lVar10;
      auStack_198 = auVar27;
      if (*(long *)(lVar21 + 0x38) == 0) {
        func_0x03256878(lVar21);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auStack_1b8._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auStack_1b8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x38) + 8))
                           (auStack_1b8._0_8_,auStack_1b8._8_8_,0);
        return lVar11;
      }
      uVar23 = func_0x03280a2c(puVar9);
      uVar23 = func_0x05ac7464(uVar23,0);
      auVar27 = func_0x03280b7c(uVar23,lVar21);
      puStack_1d0 = (undefined8 *)0x3d60588;
      lVar10 = lVar8;
      lVar18 = lVar19;
      lStack_1c0 = unaff_x22;
      lStack_1a8 = lVar21;
      if (*(long *)(lVar19 + 0x38) == 0) {
        func_0x03256878(lVar19);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar27._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
        uVar23 = func_0x03280a2c(puVar9);
        uVar23 = func_0x05ac7464(uVar23,0);
        auVar26 = func_0x03280b7c(uVar23,lVar19);
        auVar2._8_8_ = lVar18;
        auVar2._0_8_ = lVar10;
        lStack_138 = auVar26._8_8_;
        unaff_x22 = auVar26._0_8_;
        plVar5 = &lStack_200;
        lStack_200 = 0x3d60608;
        lVar11 = lVar10;
        lVar21 = lVar18;
        lStack_1e0 = lVar8;
        lStack_1d8 = lVar19;
        auStack_1f0 = auVar27;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar9 = PTR_DAT_07779d18, lStack_138 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10))
                             (unaff_x22,lStack_138,lVar10);
          return lVar11;
        }
        uVar23 = func_0x03280a2c(puVar9);
        uVar23 = func_0x05ac7464(uVar23,0);
        plVar20 = (long *)0x3d6068c;
        auVar27 = func_0x03280b7c(uVar23,lVar18);
        goto LAB_03d6068c;
      }
      lVar11 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      puVar7 = &uStack_1a0;
      lVar19 = lStack_1a8;
      unaff_x22 = lStack_1c0;
      puVar24 = puStack_1d0;
      auVar26 = auStack_1b8;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar8 = 0;
      puVar7 = &uStack_160;
      lVar19 = lStack_168;
      puVar24 = (undefined8 *)uStack_180;
      auVar26 = auStack_178;
    }
  }
  else {
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
    lVar11 = 0;
    plVar5 = &uStack_120;
    plVar20 = plStack_140;
    auVar2 = auStack_130;
LAB_03d6068c:
    pplVar6 = (long **)((long)plVar5 + -0x30);
    *(long **)((long)plVar5 + -0x30) = plVar20;
    *(long *)((long)plVar5 + -0x20) = unaff_x22;
    *(long *)((long)plVar5 + -0x18) = lStack_138;
    *(undefined1 (*) [16])((long)plVar5 + -0x10) = auVar2;
    plVar20 = *(long **)(lVar21 + 0x38);
    lVar10 = lVar21;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar21);
      plVar20 = *(long **)(lVar21 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar19 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar27._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar27._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar27._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar27._8_8_);
      *(long *)(lVar8 + 0x28) = lVar11;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar11);
      return lVar8;
    }
    auVar26 = func_0x03280cac();
    unaff_x22 = 0;
    uVar23 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)pplVar6 + -0x30);
    *(undefined8 *)((long)pplVar6 + -0x30) = uVar23;
    *(long *)((long)pplVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)pplVar6 + -0x18) = auVar27;
    *(long *)((long)pplVar6 + -8) = lVar11;
    plVar20 = *(long **)(lVar10 + 0x38);
    lVar11 = lVar10;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar10);
      plVar20 = *(long **)(lVar10 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    func_0x0531e428(lVar21,0xfffffffe);
    if (lVar21 != 0) {
      *(undefined8 *)(lVar21 + 0x38) = auVar26._0_8_;
      func_0x032809c4((undefined8 *)(lVar21 + 0x38),auVar26._0_8_);
      *(undefined8 *)(lVar21 + 0x48) = auVar26._8_8_;
      func_0x032809c4((undefined8 *)(lVar21 + 0x48),auVar26._8_8_);
      *(long *)(lVar21 + 0x28) = lVar19;
      func_0x032809c4((long *)(lVar21 + 0x28),lVar19);
      return lVar21;
    }
    auVar27 = func_0x03280cac();
    unaff_x22 = 0;
    puVar24 = (undefined8 *)0x3d607d4;
  }
  *(undefined8 **)((long)puVar7 + -0x30) = puVar24;
  *(long *)((long)puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar26;
  *(long *)((long)puVar7 + -8) = lVar19;
  plVar20 = *(long **)(lVar11 + 0x38);
  lVar10 = lVar11;
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar11);
    plVar20 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  uVar23 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 8);
  func_0x0531ec78(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    *(undefined8 *)(lVar19 + 0x40) = auVar27._0_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x40),auVar27._0_8_);
    *(undefined8 *)(lVar19 + 0x50) = auVar27._8_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x50),auVar27._8_8_);
    *(long *)(lVar19 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar19 + 0x30),lVar8);
    return lVar19;
  }
  auVar26 = func_0x03280cac();
  lVar11 = auVar26._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar27;
  *(long *)((long)puVar7 + -0x38) = lVar8;
  plVar20 = *(long **)(lVar10 + 0x38);
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar20 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  puVar24 = *(undefined8 **)(*(long *)(lVar10 + 0x38) + 8);
  (*(code *)*puVar24)(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0xc0,lVar11);
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x100,auVar26._8_8_);
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x80,uVar23);
    return lVar19;
  }
  auVar27 = func_0x03280cac();
  lVar19 = auVar27._8_8_;
  plVar20 = auVar27._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar26;
  *(long *)((long)puVar7 + -0x70) = lVar10;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar23;
  puVar14 = puVar24;
  if (puVar24[7] == 0) {
    func_0x03256878(puVar24);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar23 = func_0x03280a2c(puVar9);
    uVar23 = func_0x05ac7464(uVar23,0);
    func_0x03280b7c(uVar23,puVar24);
LAB_03d60c04:
    func_0x03281048(plVar20);
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(puVar24[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar21 = *plVar20;
    bVar1 = *(byte *)(lVar21 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = *(long *)(puVar24[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar21 = *plVar20;
        bVar1 = *(byte *)(lVar21 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar24[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar21 = *plVar20;
          bVar1 = *(byte *)(lVar21 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar21 + 0x228))(plVar20,lVar19,*(undefined8 *)(lVar21 + 0x230));
          return lVar11;
        }
      }
      goto LAB_03d60c04;
    }
    lVar11 = *(long *)(puVar24[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar11 = func_0x03280b90(plVar20,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(puVar24[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar24[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b68fa4(lVar11,plVar20,lVar19,*(undefined8 *)(puVar24[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar24[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar10 = *(long *)(puVar24[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
         )) {
        func_0x04b713b0(lVar11,plVar20,lVar19,*(undefined8 *)(puVar24[7] + 0x48));
        return lVar11;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar24[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar10 = *(long *)(puVar24[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar21 = func_0x03280b90(plVar20,lVar10);
    if (lVar21 != 0) {
      func_0x04b66610(lVar11,lVar21,lVar19,*(undefined8 *)(puVar24[7] + 0x30));
      return lVar11;
    }
  }
  auVar26 = func_0x03281048(plVar20,lVar10);
  lVar19 = auVar26._8_8_;
  plVar20 = auVar26._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar10;
  *(long *)((long)puVar7 + -0xb0) = lVar11;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar24;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar27;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar23 = func_0x03280a2c(puVar9);
    uVar23 = func_0x05ac7464(uVar23,0);
    func_0x03280b7c(uVar23,puVar14);
  }
  else {
    lVar11 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar21 = *plVar20;
    bVar1 = *(byte *)(lVar21 + 0x130);
    if ((bVar1 < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)) {
      lVar11 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar11 = func_0x03280b90(plVar20,lVar11);
      if (lVar11 != 0) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        lVar10 = *(long *)(puVar14[7] + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar21 = func_0x03280b90(plVar20,lVar10);
        if (lVar21 != 0) {
          func_0x04b667e0(lVar11,lVar21,lVar19,*(undefined8 *)(puVar14[7] + 0x30));
          return lVar11;
        }
        goto LAB_03d60ee0;
      }
      lVar11 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b693d0(lVar11,plVar20,lVar19,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar21 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      if ((*(byte *)(lVar21 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
         )) {
        func_0x04b715c8(lVar11,plVar20,lVar19,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar11;
      }
    }
    else {
      lVar11 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
        lVar21 = *plVar20;
        bVar1 = *(byte *)(lVar21 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
          lVar21 = *plVar20;
          bVar1 = *(byte *)(lVar21 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar21 + 0x228))(plVar20,lVar19,*(undefined8 *)(lVar21 + 0x230));
          return lVar11;
        }
      }
    }
  }
  func_0x03281048(plVar20);
LAB_03d60ee0:
  lVar11 = func_0x03281048(plVar20,lVar10);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar26;
  lVar10 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = **(long **)(lVar10 + 0xb8);
  func_0x03280ab0();
  if (lVar10 == 0) {
    lVar10 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar19 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    **(long **)(lVar19 + 0xb8) = lVar10;
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar11 + 0xb8),lVar10);
  }
  return lVar10;
}


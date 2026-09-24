/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18F2C; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.ProcessItem; status ok */

/* WARNING: Possible PIC construction at 0x04d19104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d19108) */
/* WARNING: Removing unreachable block (ram,0x04d1911c) */
/* WARNING: Removing unreachable block (ram,0x04d19130) */
/* WARNING: Removing unreachable block (ram,0x04d19138) */
/* WARNING: Removing unreachable block (ram,0x04d1913c) */
/* WARNING: Removing unreachable block (ram,0x04d19154) */

long MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ProcessItem
               (long *param_1,long *param_2,long *param_3,ulong param_4,long param_5)

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
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long extraout_x1;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  long *plStack_190;
  ulong uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  long *plStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  long *plStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_48;
  
  plVar27 = (long *)0x7e1a000;
  plVar17 = param_3;
  if ((bRam0000000007e1af06 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780420);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_077803d0);
    bRam0000000007e1af06 = 1;
  }
  lStack_48 = 0;
  if (param_3 == (long *)0x0) {
    if (param_1 != (long *)0x0) {
      param_3 = (long *)(**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      uVar10 = func_0x06a13bc8(0,0,0,0,0);
      goto LAB_04d18ff4;
    }
LAB_04d191a0:
    func_0x03280cac();
    lVar13 = extraout_x1;
  }
  else {
    plVar17 = (long *)0x0;
    uVar10 = func_0x06a13bc8(0,0,0,0,0);
    if (param_1 == (long *)0x0) goto LAB_04d191a0;
LAB_04d18ff4:
    puVar9 = PTR_DAT_0777a940;
    plVar17 = param_2;
    uVar14 = func_0x05497634(param_1,param_3,param_2,uVar10,&lStack_48,
                             *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
    param_3 = (long *)(uVar14 & 0xffffffff);
    if (param_2 == (long *)0x0) {
LAB_04d1905c:
      if ((param_1[0xe] == 0) ||
         ((plVar11 = (long *)MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition
                                       (param_1[0xe],0), lStack_48 == 0 ||
          (lVar13 = func_0x03d20d84(lStack_48,*(undefined8 *)puVar9), plVar27 = plVar11, lVar13 == 0
          )))) goto LAB_04d191a0;
      *(long **)(lVar13 + 0x30) = plVar11;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07780420 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07780420)
         ) goto LAB_04d1905c;
      if (lStack_48 == 0) goto LAB_04d191a0;
      uVar10 = func_0x03d20d84(lStack_48,*(undefined8 *)puVar9);
      plVar17 = (long *)param_2[0x15];
      func_0x03bf70e8(param_1,uVar10,plVar17,
                      *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
    }
    lVar13 = lStack_48;
    plVar27 = (long *)param_1[0xb];
    if (plVar27 == (long *)0x0) goto LAB_04d191a0;
    lVar12 = *plVar27;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar25 = (undefined8 *)(lVar12 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_04d190ec;
        }
        uVar14 = uVar14 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar14 != 0);
    }
    puVar25 = (undefined8 *)func_0x03256b10(plVar27,*(long *)PTR_DAT_077803d0,0);
LAB_04d190ec:
    plVar17 = param_2;
    (*(code *)*puVar25)(plVar27,lVar13,param_2,puVar25[1]);
    lVar13 = lStack_48;
  }
  if ((bRam0000000007e1af07 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780428);
    func_0x03280a18(PTR_DAT_0777a960);
    func_0x03280a18(PTR_DAT_07780430);
    func_0x03280a18(PTR_DAT_07780438);
    bRam0000000007e1af07 = 1;
  }
  if (lVar13 != 0) {
    lVar12 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a960);
    lVar13 = 0;
    if (((lVar12 != 0) &&
        (lVar13 = func_0x03ced81c(lVar12,*(undefined8 *)PTR_DAT_07780428), lVar13 != 0)) &&
       (0 < *(int *)(lVar13 + 0x74))) {
      *(undefined4 *)(lVar13 + 0x44) = 2;
    }
    return lVar13;
  }
  auVar29 = func_0x03280cac();
  uVar10 = auVar29._8_8_;
  lVar13 = auVar29._0_8_;
  lStack_c0 = 0x4d19248;
  puVar25 = (undefined8 *)0x7e1a000;
  if ((bRam0000000007e1af08 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780440);
    func_0x03280a18(PTR_DAT_07780448);
    func_0x03280a18(PTR_DAT_07780450);
    func_0x03280a18(PTR_DAT_07780458);
    func_0x03280a18(PTR_DAT_0777f910);
    func_0x03280a18(PTR_DAT_07780460);
    bRam0000000007e1af08 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(plVar17[4] + 0xc0) + 0x70) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar12 = func_0x03280ca0();
  func_0x04c1d590(lVar12,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x78));
  puVar4 = PTR_DAT_07780458;
  puVar3 = PTR_DAT_07780440;
  puVar9 = PTR_DAT_0777f910;
  if (lVar12 == 0) {
LAB_04d195d8:
    auVar29 = func_0x03280cac();
    lVar23 = auVar29._8_8_;
    lVar22 = auVar29._0_8_;
    uStack_f0 = 0x4d195dc;
    lStack_e8 = lVar12;
    auStack_e0._0_8_ = puVar25;
    auStack_e0._8_8_ = uVar10;
    lStack_d0 = lVar13;
    plStack_c8 = plVar17;
    if ((bRam0000000007e1af09 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780468);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_07780470);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e1af09 = 1;
    }
    if (lVar23 != 0) {
      lVar13 = func_0x03d20d84(lVar23,*(undefined8 *)PTR_DAT_07780468);
      if ((lVar13 == 0) || (*(char *)(lVar13 + 0x65) == '\0')) {
        return lVar13;
      }
      plVar17 = *(long **)(lVar22 + 0x60);
      if (plVar17 != (long *)0x0) {
        lVar12 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar25 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
              goto LAB_04d196d8;
            }
            uVar14 = uVar14 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar14 != 0);
        }
        puVar25 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
        uVar10 = (*(code *)*puVar25)(plVar17,lVar13,puVar25[1]);
        plVar17 = *(long **)(lVar22 + 0x68);
        if (plVar17 != (long *)0x0) {
          lVar13 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          uVar26 = *(undefined8 *)PTR_DAT_07778fa0;
          if (uVar14 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e4a0) {
                puVar25 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_04d19754;
              }
              uVar14 = uVar14 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar14 != 0);
          }
          puVar25 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
          uVar10 = (*(code *)*puVar25)(plVar17,uVar26,uVar10,lVar23,0,puVar25[1]);
          lVar13 = lStack_e8;
          lVar12 = *(long *)(lVar22 + 0x78);
          if (lVar12 != 0) {
            uVar18 = 0;
            uVar26 = 0;
            if ((bRam0000000007e28edd & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07807698);
              bRam0000000007e28edd = 1;
            }
            plVar17 = *(long **)(lVar12 + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar26 = *(undefined8 *)PTR_DAT_07807698;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9554;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9554:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar26,uVar10,0,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            uVar20 = auVar29._8_8_;
            auStack_120._0_8_ = 0x68b9590;
            auStack_120._8_8_ = lVar13;
            uStack_110 = 0x7e28000;
            auStack_100._8_8_ = 0;
            uVar19 = uVar18;
            plStack_108 = plVar17;
            auStack_100._0_8_ = uVar10;
            if ((bRam0000000007e28ede & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811878);
              bRam0000000007e28ede = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_07811878;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9644;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9644:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,uVar20,0,uVar18,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            uVar15 = auVar29._8_8_;
            uStack_150 = 0x68b9680;
            lStack_148 = lVar13;
            auStack_140._0_8_ = 0x7e28000;
            uVar10 = uVar19;
            auStack_140._8_8_ = plVar17;
            uStack_130 = uVar20;
            uStack_128 = uVar18;
            if ((bRam0000000007e28edf & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_0776b160);
              bRam0000000007e28edf = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_0776b160;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9734;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9734:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,uVar15,0,uVar19,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            uVar18 = auVar29._8_8_;
            auStack_180._0_8_ = 0x68b9770;
            uStack_170 = 0x7e28000;
            plStack_168 = plVar17;
            auStack_160._0_8_ = uVar15;
            auStack_160._8_8_ = uVar19;
            if ((bRam0000000007e28ee0 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811880);
              bRam0000000007e28ee0 = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_07811880;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9820;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9820:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,uVar18,0,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            uVar19 = auVar29._8_8_;
            uStack_1b0 = 0x68b985c;
            auStack_1a8._8_8_ = 0x7e28000;
            lStack_198 = 0x7e28000;
            plStack_190 = plVar17;
            uStack_188 = uVar18;
            if ((bRam0000000007e28ee1 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee1 = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_07811888;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b990c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b990c:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,uVar19,0,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            puVar25 = (undefined8 *)PTR_DAT_0777aa98;
            uStack_1f0 = 0x68b9948;
            lStack_1d8 = lVar13;
            uStack_1d0 = 0x7e28000;
            auStack_1c8._0_8_ = 0x7e28000;
            uVar20 = uVar10;
            uVar18 = uVar26;
            auStack_1e8._8_8_ = plVar27;
            auStack_1c8._8_8_ = plVar17;
            lStack_1b8 = uVar19;
            if ((bRam0000000007e28ee2 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee2 = 1;
            }
            lVar13 = func_0x03280ca0(*puVar25);
            func_0x06a30df4(lVar13,0);
            if (lVar13 != 0) {
              puVar25 = (undefined8 *)(lVar13 + 0x30);
              *puVar25 = uVar10;
              func_0x032809c4(puVar25,uVar10);
              *(undefined8 *)(lVar13 + 0x38) = uVar26;
              plVar17 = *(long **)(auVar29._0_8_ + 0x40);
              uVar26 = 0;
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar22 = *(long *)PTR_DAT_07802f60;
                uVar10 = *(undefined8 *)PTR_DAT_07811888;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9a48;
                    }
                    uVar14 = uVar14 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar14 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9a48:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar13 = (**(code **)(lVar12 + 8))(plVar17,uVar10,auVar29._8_8_,0,lVar13,lVar12);
                return lVar13;
              }
            }
            auVar28 = func_0x03280cac();
            puVar9 = PTR_DAT_0777aa98;
            lStack_230 = 0x68b9a88;
            puStack_220 = puVar25;
            uStack_218 = uVar10;
            auStack_208._0_8_ = uVar26;
            auStack_208._8_8_ = lVar13;
            if ((bRam0000000007e28ee3 & 1) == 0) {
              plStack_210 = (long *)auVar29._0_8_;
              lStack_1f8 = auVar29._8_8_;
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077c1e10);
              auVar29._8_8_ = lStack_1f8;
              auVar29._0_8_ = plStack_210;
              bRam0000000007e28ee3 = 1;
            }
            lStack_1f8 = auVar29._8_8_;
            plStack_210 = auVar29._0_8_;
            lVar13 = func_0x03280ca0(*(undefined8 *)puVar9);
            func_0x06a30df4(lVar13,0);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x30) = uVar20;
              func_0x032809c4((undefined8 *)(lVar13 + 0x30),uVar20);
              *(undefined8 *)(lVar13 + 0x38) = uVar18;
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              uVar18 = 0;
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar22 = *(long *)PTR_DAT_07802f60;
                uVar10 = *(undefined8 *)PTR_DAT_077c1e10;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9b88;
                    }
                    uVar14 = uVar14 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar14 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9b88:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar13 = (**(code **)(lVar12 + 8))(plVar17,uVar10,auVar28._8_8_,0,lVar13,lVar12);
                return lVar13;
              }
            }
            auVar29 = func_0x03280cac();
            uStack_248 = uVar18;
            auStack_240._0_8_ = lVar13;
            if ((bRam0000000007e28ee4 & 1) == 0) {
              lStack_250 = auVar28._0_8_;
              auStack_240._8_8_ = auVar28._8_8_;
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077d7510);
              auVar28._8_8_ = auStack_240._8_8_;
              auVar28._0_8_ = lStack_250;
              bRam0000000007e28ee4 = 1;
            }
            auStack_240._8_8_ = auVar28._8_8_;
            lStack_250 = auVar28._0_8_;
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_077d7510;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9c78;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
              auVar28._8_8_ = auStack_240._8_8_;
              auVar28._0_8_ = lStack_250;
LAB_068b9c78:
              auStack_240._8_8_ = auVar28._8_8_;
              lStack_250 = auVar28._0_8_;
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,auVar29._8_8_,0,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            if ((bRam0000000007e28ee5 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811890);
              bRam0000000007e28ee5 = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar10 = *(undefined8 *)PTR_DAT_07811890;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9d64;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9d64:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,auVar29._8_8_,0,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            if ((bRam0000000007e28ee6 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777ab08);
              func_0x03280a18(PTR_DAT_07811898);
              bRam0000000007e28ee6 = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 != (long *)0x0) {
              lVar13 = *plVar17;
              lVar12 = *(long *)PTR_DAT_0777ab08;
              uVar10 = *(undefined8 *)PTR_DAT_07811898;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9e50;
                  }
                  uVar14 = uVar14 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x03256b10(plVar17);
LAB_068b9e50:
              lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,auVar29._8_8_,0,lVar13);
              return lVar13;
            }
            auVar29 = func_0x03280cac();
            if ((bRam0000000007e28ee7 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_078118a0);
              bRam0000000007e28ee7 = 1;
            }
            plVar17 = *(long **)(auVar29._0_8_ + 0x40);
            if (plVar17 == (long *)0x0) {
              lVar13 = func_0x03280cac();
              return lVar13;
            }
            lVar13 = *plVar17;
            lVar12 = *(long *)PTR_DAT_07802f60;
            uVar10 = *(undefined8 *)PTR_DAT_078118a0;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar12 + 0x20)) {
                  lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9f38;
                }
                uVar14 = uVar14 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x03256b10(plVar17);
LAB_068b9f38:
            lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar13 = (**(code **)(lVar13 + 8))(plVar17,uVar10,auVar29._8_8_,0,0,lVar13);
            return lVar13;
          }
        }
      }
    }
    lVar13 = func_0x03280cac();
    return lVar13;
  }
  puVar25 = (undefined8 *)(lVar12 + 0x10);
  *puVar25 = uVar10;
  func_0x032809c4(puVar25,uVar10);
  uVar10 = *puVar25;
  plVar27 = (long *)func_0x03280ca0(*(undefined8 *)puVar9);
  lVar22 = 0;
  func_0x05355fbc(plVar27,lVar12,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x80));
  uVar10 = func_0x03d872a8(uVar10,plVar27,*(undefined8 *)puVar4);
  uVar14 = func_0x03d281a8(uVar10,*(undefined8 *)puVar3);
  if ((uVar14 & 1) != 0) {
    if (*(long *)(lVar13 + 0x70) == 0) goto LAB_04d195d8;
    MergeEngine_ECS_Systems_Board_BoardSystem__MoveDuplicatePositionedItemsToItemQueue
              (*(long *)(lVar13 + 0x70),uVar10,0);
  }
  uVar10 = *puVar25;
  lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar13 == 0) {
    lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    uVar26 = **(undefined8 **)(lVar13 + 0xb8);
    lVar13 = func_0x03280ca0(*(undefined8 *)puVar9);
    lVar22 = 0;
    func_0x05355fbc(lVar13,uVar26,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x88));
    lVar23 = *(long *)(plVar17[4] + 0xc0);
    lVar12 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar23 = *(long *)(plVar17[4] + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x10) = lVar13;
    lVar12 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x10,lVar13);
  }
  uVar10 = func_0x03d872a8(uVar10,lVar13,*(undefined8 *)puVar4);
  lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
  }
  lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  puVar3 = PTR_DAT_07780450;
  puVar9 = PTR_DAT_07780448;
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar13 == 0) {
    lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar13 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    uVar26 = **(undefined8 **)(lVar13 + 0xb8);
    lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
    lVar22 = 0;
    func_0x053569b8(lVar13,uVar26,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x90));
    lVar23 = *(long *)(plVar17[4] + 0xc0);
    lVar12 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar23 = *(long *)(plVar17[4] + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 0x18) = lVar13;
    lVar12 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x18,lVar13);
  }
  lVar23 = *(long *)puVar9;
  lVar13 = func_0x03d50a94(uVar10,lVar13);
  lVar12 = *(long *)puVar3;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar13 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    func_0x04143d60(lVar22,lVar13,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar22;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar29 = func_0x03280b7c(uVar10,lVar12);
  lVar12 = auVar29._8_8_;
  lVar13 = auVar29._0_8_;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar13 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    func_0x0419ce74(lVar22,lVar13,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar22;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar29 = func_0x03280b7c(uVar10,lVar12);
  lVar12 = auVar29._8_8_;
  lStack_d0 = 0x3d600c8;
  lStack_c0 = lVar13;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041c2810(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar28 = func_0x03280b7c(uVar10,lVar12);
  lVar13 = auVar28._8_8_;
  uStack_f0 = 0x3d60144;
  auStack_e0 = auVar29;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar12;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar29 = func_0x03280b7c(uVar10,lVar13);
  lVar13 = auVar29._8_8_;
  uStack_110 = 0x3d601c0;
  auStack_100 = auVar28;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar12;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar28 = func_0x03280b7c(uVar10,lVar13);
  lVar13 = auVar28._8_8_;
  uStack_130 = 0x3d6023c;
  auStack_120 = auVar29;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar12;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar29 = func_0x03280b7c(uVar10,lVar13);
  lVar13 = auVar29._8_8_;
  uStack_150 = 0x3d602b8;
  auStack_140 = auVar28;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))(lVar12,auVar29._0_8_);
    return lVar12;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar28 = func_0x03280b7c(uVar10,lVar13);
  lVar13 = auVar28._8_8_;
  uStack_170 = 0x3d60338;
  auStack_160 = auVar29;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar12;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar29 = func_0x03280b7c(uVar10,lVar13);
  plStack_190 = (long *)0x3d603b4;
  lVar13 = lVar23;
  uStack_188 = param_4 & 0xffffffff;
  auStack_180 = auVar28;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  puVar9 = PTR_DAT_07779d10;
  if ((auVar29._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar28 = func_0x03280b7c(uVar10,lVar23);
    uStack_1b0 = 0x3d60428;
    lVar12 = lVar13;
    lStack_198 = lVar23;
    if (*(long *)(lVar13 + 0x38) == 0) {
      auStack_1a8 = auVar29;
      func_0x03256878(lVar13);
      auVar29 = auStack_1a8;
    }
    puVar9 = PTR_DAT_07779d10;
    auStack_1a8 = auVar29;
    if ((auVar28._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
      lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar22 = 0;
      pplVar6 = &plStack_190;
      lVar13 = lStack_198;
      uVar10 = uStack_1b0;
      goto LAB_03d60730;
    }
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar29 = func_0x03280b7c(uVar10,lVar13);
    uStack_1d0 = 0x3d6049c;
    lVar23 = lVar12;
    lStack_1b8 = lVar13;
    auStack_1c8 = auVar28;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar29._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
      uVar10 = func_0x03280a2c(puVar9);
      uVar10 = func_0x05ac7464(uVar10,0);
      auStack_208 = func_0x03280b7c(uVar10,lVar12);
      uStack_1f0 = 0x3d60510;
      lVar8 = lVar23;
      lStack_1d8 = lVar12;
      auStack_1e8 = auVar29;
      if (*(long *)(lVar23 + 0x38) == 0) {
        func_0x03256878(lVar23);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auStack_208._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auStack_208._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))
                           (auStack_208._0_8_,auStack_208._8_8_,0);
        return lVar13;
      }
      uVar10 = func_0x03280a2c(puVar9);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar29 = func_0x03280b7c(uVar10,lVar23);
      puStack_220 = (undefined8 *)0x3d60588;
      lVar12 = lVar8;
      lVar21 = lVar22;
      plStack_210 = param_2;
      lStack_1f8 = lVar23;
      if (*(long *)(lVar22 + 0x38) == 0) {
        func_0x03256878(lVar22);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar29._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
        uVar10 = func_0x03280a2c(puVar9);
        uVar10 = func_0x05ac7464(uVar10,0);
        auVar28 = func_0x03280b7c(uVar10,lVar22);
        auVar2._8_8_ = lVar21;
        auVar2._0_8_ = lVar12;
        uVar14 = auVar28._8_8_;
        param_2 = auVar28._0_8_;
        plVar5 = &lStack_250;
        lStack_250 = 0x3d60608;
        lVar13 = lVar12;
        lVar23 = lVar21;
        lStack_230 = lVar8;
        lStack_228 = lVar22;
        auStack_240 = auVar29;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((param_2 != (long *)0x0) && (puVar9 = PTR_DAT_07779d18, uVar14 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x38) + 0x10))
                             (param_2,uVar14,lVar12);
          return lVar13;
        }
        uVar10 = func_0x03280a2c(puVar9);
        uVar10 = func_0x05ac7464(uVar10,0);
        plVar17 = (long *)0x3d6068c;
        auVar29 = func_0x03280b7c(uVar10,lVar21);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
      puVar7 = &uStack_1f0;
      lVar22 = lStack_1f8;
      param_2 = plStack_210;
      puVar25 = puStack_220;
      auVar28 = auStack_208;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar8 = 0;
      puVar7 = &uStack_1b0;
      lVar22 = lStack_1b8;
      puVar25 = (undefined8 *)uStack_1d0;
      auVar28 = auStack_1c8;
    }
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    lVar13 = 0;
    plVar5 = &uStack_170;
    uVar14 = uStack_188;
    plVar17 = plStack_190;
    auVar2 = auStack_180;
LAB_03d6068c:
    pplVar6 = (long **)((long)plVar5 + -0x30);
    *(long **)((long)plVar5 + -0x30) = plVar17;
    *(long **)((long)plVar5 + -0x20) = param_2;
    *(ulong *)((long)plVar5 + -0x18) = uVar14;
    *(undefined1 (*) [16])((long)plVar5 + -0x10) = auVar2;
    plVar17 = *(long **)(lVar23 + 0x38);
    lVar12 = lVar23;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar23);
      plVar17 = *(long **)(lVar23 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar22 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar29._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar29._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar29._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar29._8_8_);
      *(long *)(lVar8 + 0x28) = lVar13;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar13);
      return lVar8;
    }
    auVar28 = func_0x03280cac();
    param_2 = (long *)0x0;
    uVar10 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)pplVar6 + -0x30);
    *(undefined8 *)((long)pplVar6 + -0x30) = uVar10;
    *(long **)((long)pplVar6 + -0x20) = param_2;
    *(undefined1 (*) [16])((long)pplVar6 + -0x18) = auVar29;
    *(long *)((long)pplVar6 + -8) = lVar13;
    plVar17 = *(long **)(lVar12 + 0x38);
    lVar13 = lVar12;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar17 = *(long **)(lVar12 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar23 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    func_0x0531e428(lVar23,0xfffffffe);
    if (lVar23 != 0) {
      *(undefined8 *)(lVar23 + 0x38) = auVar28._0_8_;
      func_0x032809c4((undefined8 *)(lVar23 + 0x38),auVar28._0_8_);
      *(undefined8 *)(lVar23 + 0x48) = auVar28._8_8_;
      func_0x032809c4((undefined8 *)(lVar23 + 0x48),auVar28._8_8_);
      *(long *)(lVar23 + 0x28) = lVar22;
      func_0x032809c4((long *)(lVar23 + 0x28),lVar22);
      return lVar23;
    }
    auVar29 = func_0x03280cac();
    param_2 = (long *)0x0;
    puVar25 = (undefined8 *)0x3d607d4;
  }
  *(undefined8 **)((long)puVar7 + -0x30) = puVar25;
  *(long **)((long)puVar7 + -0x20) = param_2;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar28;
  *(long *)((long)puVar7 + -8) = lVar22;
  plVar17 = *(long **)(lVar13 + 0x38);
  lVar12 = lVar13;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar17 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar22 = func_0x03280ca0();
  uVar10 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(lVar22,0xfffffffe);
  if (lVar22 != 0) {
    *(undefined8 *)(lVar22 + 0x40) = auVar29._0_8_;
    func_0x032809c4((undefined8 *)(lVar22 + 0x40),auVar29._0_8_);
    *(undefined8 *)(lVar22 + 0x50) = auVar29._8_8_;
    func_0x032809c4((undefined8 *)(lVar22 + 0x50),auVar29._8_8_);
    *(long *)(lVar22 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar22 + 0x30),lVar8);
    return lVar22;
  }
  auVar28 = func_0x03280cac();
  lVar13 = auVar28._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(long **)((long)puVar7 + -0x58) = param_3;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar29;
  *(long *)((long)puVar7 + -0x38) = lVar8;
  plVar17 = *(long **)(lVar12 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar17 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar22 = func_0x03280ca0();
  puVar25 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  (*(code *)*puVar25)(lVar22,0xfffffffe);
  if (lVar22 != 0) {
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,lVar13);
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar28._8_8_);
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar10);
    return lVar22;
  }
  auVar29 = func_0x03280cac();
  lVar22 = auVar29._8_8_;
  plVar17 = auVar29._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar28;
  *(long *)((long)puVar7 + -0x70) = lVar12;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar10;
  puVar16 = puVar25;
  if (puVar25[7] == 0) {
    func_0x03256878(puVar25);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar25);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar25[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar23 = *plVar17;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar25[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar23 = *plVar17;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar25[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar23 = *plVar17;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar23 + 0x228))(plVar17,lVar22,*(undefined8 *)(lVar23 + 0x230));
          return lVar13;
        }
      }
      goto LAB_03d60c04;
    }
    lVar13 = *(long *)(puVar25[7] + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar13 = func_0x03280b90(plVar17,lVar13);
    if (lVar13 == 0) {
      lVar13 = *(long *)(puVar25[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar25[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        func_0x04b68fa4(lVar13,plVar17,lVar22,*(undefined8 *)(puVar25[7] + 0x58));
        return lVar13;
      }
      if ((*(byte *)(*(long *)(puVar25[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar12 = *(long *)(puVar25[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(lVar13,plVar17,lVar22,*(undefined8 *)(puVar25[7] + 0x48));
        return lVar13;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar25[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar12 = *(long *)(puVar25[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar23 = func_0x03280b90(plVar17,lVar12);
    if (lVar23 != 0) {
      func_0x04b66610(lVar13,lVar23,lVar22,*(undefined8 *)(puVar25[7] + 0x30));
      return lVar13;
    }
  }
  auVar28 = func_0x03281048(plVar17,lVar12);
  lVar22 = auVar28._8_8_;
  plVar17 = auVar28._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar12;
  *(long *)((long)puVar7 + -0xb0) = lVar13;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar25;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar29;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar10 = func_0x03280a2c(puVar9);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar16);
  }
  else {
    lVar13 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar23 = *plVar17;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((bVar1 < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
      lVar13 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(plVar17,lVar13);
      if (lVar13 != 0) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        lVar12 = *(long *)(puVar16[7] + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar23 = func_0x03280b90(plVar17,lVar12);
        if (lVar23 != 0) {
          func_0x04b667e0(lVar13,lVar23,lVar22,*(undefined8 *)(puVar16[7] + 0x30));
          return lVar13;
        }
        goto LAB_03d60ee0;
      }
      lVar13 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        func_0x04b693d0(lVar13,plVar17,lVar22,*(undefined8 *)(puVar16[7] + 0x58));
        return lVar13;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar23 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c(lVar23);
      }
      if ((*(byte *)(lVar23 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) == lVar23
         )) {
        func_0x04b715c8(lVar13,plVar17,lVar22,*(undefined8 *)(puVar16[7] + 0x48));
        return lVar13;
      }
    }
    else {
      lVar13 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar23 = *plVar17;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar23 = *plVar17;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar23 + 0x228))(plVar17,lVar22,*(undefined8 *)(lVar23 + 0x230));
          return lVar13;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar13 = func_0x03281048(plVar17,lVar12);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar28;
  lVar12 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  func_0x03280ab0();
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar22 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    **(long **)(lVar22 + 0xb8) = lVar12;
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar13 + 0xb8),lVar12);
  }
  return lVar12;
}


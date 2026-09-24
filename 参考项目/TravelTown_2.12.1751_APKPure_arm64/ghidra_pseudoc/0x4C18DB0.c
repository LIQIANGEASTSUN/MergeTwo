/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18DB0; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.ProcessItems; status ok */

/* WARNING: Possible PIC construction at 0x04d18e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d19104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d18e9c) */
/* WARNING: Removing unreachable block (ram,0x04d19108) */
/* WARNING: Removing unreachable block (ram,0x04d1911c) */
/* WARNING: Removing unreachable block (ram,0x04d19130) */
/* WARNING: Removing unreachable block (ram,0x04d19138) */
/* WARNING: Removing unreachable block (ram,0x04d1913c) */
/* WARNING: Removing unreachable block (ram,0x04d19154) */

long MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ProcessItems
               (long *param_1,undefined8 *param_2,long *param_3,ulong param_4,long param_5)

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
  long *plVar11;
  ulong uVar12;
  long extraout_x1;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  long lStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined1 auStack_258 [16];
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  long lStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  long *plStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  long lStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar15 = param_3;
  uVar21 = param_4;
  if ((bRam0000000007e1af05 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780400);
    func_0x03280a18(PTR_DAT_07780408);
    func_0x03280a18(PTR_DAT_07780410);
    func_0x03280a18(PTR_DAT_07780418);
    bRam0000000007e1af05 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  if ((param_2 == (undefined8 *)0x0) || (param_1 == (long *)0x0)) {
LAB_04d18ec0:
    param_3 = plVar15;
    auVar33 = func_0x03280cac();
    if (auVar33._8_4_ == 1) {
      plVar15 = (long *)func_0x072ce910(auVar33._0_8_);
      lVar25 = *plVar15;
      func_0x072ce920();
      lVar10 = func_0x051159b0(&uStack_48,*param_2);
      if (lVar25 == 0) {
        return lVar10;
      }
      func_0x03280ca4(lVar25);
    }
    func_0x051159b0(&uStack_48,*param_2);
    func_0x03365958(auVar33._0_8_);
    func_0x03280ca4(0);
    uVar29 = 0x4d18f2c;
    auVar32 = func_0x02f09514();
    plVar15 = auVar32._8_8_;
    param_1 = auVar32._0_8_;
  }
  else {
    plVar15 = (long *)param_2[3];
    uVar21 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    func_0x054974a4(param_1,param_3);
    puVar3 = PTR_DAT_07780408;
    puVar9 = PTR_DAT_07780400;
    if (param_2[3] == 0) goto LAB_04d18ec0;
    func_0x04145068(&uStack_48,param_2[3],*(undefined8 *)PTR_DAT_07780418);
    uVar21 = func_0x051159b4(&uStack_48,*(undefined8 *)puVar3);
    if ((uVar21 & 1) == 0) {
      lVar10 = func_0x051159b0(&uStack_48,*(undefined8 *)puVar9);
      return lVar10;
    }
    param_5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
    uVar21 = 0;
    uVar29 = 0x4d18e9c;
    plVar15 = plStack_38;
  }
  plVar28 = (long *)0x7e1a000;
  plVar16 = param_3;
  uStack_90 = uVar29;
  if ((bRam0000000007e1af06 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780420);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_077803d0);
    bRam0000000007e1af06 = 1;
  }
  lStack_98 = 0;
  if (param_3 == (long *)0x0) {
    if (param_1 != (long *)0x0) {
      param_3 = (long *)(**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      uVar29 = func_0x06a13bc8(0,0,0,0,0);
      goto LAB_04d18ff4;
    }
LAB_04d191a0:
    func_0x03280cac();
    lVar10 = extraout_x1;
  }
  else {
    plVar16 = (long *)0x0;
    uVar29 = func_0x06a13bc8(0,0,0,0,0);
    if (param_1 == (long *)0x0) goto LAB_04d191a0;
LAB_04d18ff4:
    puVar9 = PTR_DAT_0777a940;
    plVar16 = plVar15;
    uVar12 = func_0x05497634(param_1,param_3,plVar15,uVar29,&lStack_98,
                             *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
    param_3 = (long *)(uVar12 & 0xffffffff);
    if (plVar15 == (long *)0x0) {
LAB_04d1905c:
      if ((param_1[0xe] == 0) ||
         ((plVar11 = (long *)MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition
                                       (param_1[0xe],0), lStack_98 == 0 ||
          (lVar10 = func_0x03d20d84(lStack_98,*(undefined8 *)puVar9), plVar28 = plVar11, lVar10 == 0
          )))) goto LAB_04d191a0;
      *(long **)(lVar10 + 0x30) = plVar11;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07780420 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07780420)
         ) goto LAB_04d1905c;
      if (lStack_98 == 0) goto LAB_04d191a0;
      uVar29 = func_0x03d20d84(lStack_98,*(undefined8 *)puVar9);
      plVar16 = (long *)plVar15[0x15];
      func_0x03bf70e8(param_1,uVar29,plVar16,
                      *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
    }
    lVar10 = lStack_98;
    plVar28 = (long *)param_1[0xb];
    if (plVar28 == (long *)0x0) goto LAB_04d191a0;
    lVar25 = *plVar28;
    uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar26 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_04d190ec;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar26 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_077803d0,0);
LAB_04d190ec:
    plVar16 = plVar15;
    (*(code *)*puVar26)(plVar28,lVar10,plVar15,puVar26[1]);
    lVar10 = lStack_98;
  }
  if ((bRam0000000007e1af07 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780428);
    func_0x03280a18(PTR_DAT_0777a960);
    func_0x03280a18(PTR_DAT_07780430);
    func_0x03280a18(PTR_DAT_07780438);
    bRam0000000007e1af07 = 1;
  }
  if (lVar10 != 0) {
    lVar25 = func_0x03d20d84(lVar10,*(undefined8 *)PTR_DAT_0777a960);
    lVar10 = 0;
    if (((lVar25 != 0) &&
        (lVar10 = func_0x03ced81c(lVar25,*(undefined8 *)PTR_DAT_07780428), lVar10 != 0)) &&
       (0 < *(int *)(lVar10 + 0x74))) {
      *(undefined4 *)(lVar10 + 0x44) = 2;
    }
    return lVar10;
  }
  auVar32 = func_0x03280cac();
  uVar29 = auVar32._8_8_;
  lVar10 = auVar32._0_8_;
  lStack_110 = 0x4d19248;
  puVar26 = (undefined8 *)0x7e1a000;
  if ((bRam0000000007e1af08 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780440);
    func_0x03280a18(PTR_DAT_07780448);
    func_0x03280a18(PTR_DAT_07780450);
    func_0x03280a18(PTR_DAT_07780458);
    func_0x03280a18(PTR_DAT_0777f910);
    func_0x03280a18(PTR_DAT_07780460);
    bRam0000000007e1af08 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(plVar16[4] + 0xc0) + 0x70) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar25 = func_0x03280ca0();
  func_0x04c1d590(lVar25,*(undefined8 *)(*(long *)(plVar16[4] + 0xc0) + 0x78));
  puVar4 = PTR_DAT_07780458;
  puVar3 = PTR_DAT_07780440;
  puVar9 = PTR_DAT_0777f910;
  if (lVar25 == 0) {
LAB_04d195d8:
    auVar32 = func_0x03280cac();
    lVar23 = auVar32._8_8_;
    lVar22 = auVar32._0_8_;
    uStack_140 = 0x4d195dc;
    lStack_138 = lVar25;
    auStack_130._0_8_ = puVar26;
    auStack_130._8_8_ = uVar29;
    lStack_120 = lVar10;
    plStack_118 = plVar16;
    if ((bRam0000000007e1af09 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780468);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_07780470);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e1af09 = 1;
    }
    if (lVar23 != 0) {
      lVar10 = func_0x03d20d84(lVar23,*(undefined8 *)PTR_DAT_07780468);
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x65) == '\0')) {
        return lVar10;
      }
      plVar15 = *(long **)(lVar22 + 0x60);
      if (plVar15 != (long *)0x0) {
        lVar25 = *plVar15;
        uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar21 != 0) {
          piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar26 = (undefined8 *)(lVar25 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
              goto LAB_04d196d8;
            }
            uVar21 = uVar21 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar21 != 0);
        }
        puVar26 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
        uVar29 = (*(code *)*puVar26)(plVar15,lVar10,puVar26[1]);
        plVar15 = *(long **)(lVar22 + 0x68);
        if (plVar15 != (long *)0x0) {
          lVar10 = *plVar15;
          uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar27 = *(undefined8 *)PTR_DAT_07778fa0;
          if (uVar21 != 0) {
            piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e4a0) {
                puVar26 = (undefined8 *)(lVar10 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_04d19754;
              }
              uVar21 = uVar21 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 != 0);
          }
          puVar26 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
          uVar29 = (*(code *)*puVar26)(plVar15,uVar27,uVar29,lVar23,0,puVar26[1]);
          lVar10 = lStack_138;
          lVar25 = *(long *)(lVar22 + 0x78);
          if (lVar25 != 0) {
            uVar17 = 0;
            uVar27 = 0;
            if ((bRam0000000007e28edd & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07807698);
              bRam0000000007e28edd = 1;
            }
            plVar15 = *(long **)(lVar25 + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar27 = *(undefined8 *)PTR_DAT_07807698;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9554;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9554:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar27,uVar29,0,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            uVar19 = auVar32._8_8_;
            auStack_170._0_8_ = 0x68b9590;
            auStack_170._8_8_ = lVar10;
            uStack_160 = 0x7e28000;
            auStack_150._8_8_ = 0;
            uVar18 = uVar17;
            plStack_158 = plVar15;
            auStack_150._0_8_ = uVar29;
            if ((bRam0000000007e28ede & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811878);
              bRam0000000007e28ede = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_07811878;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9644;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9644:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,uVar19,0,uVar17,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            uVar13 = auVar32._8_8_;
            uStack_1a0 = 0x68b9680;
            lStack_198 = lVar10;
            auStack_190._0_8_ = 0x7e28000;
            uVar29 = uVar18;
            auStack_190._8_8_ = plVar15;
            uStack_180 = uVar19;
            uStack_178 = uVar17;
            if ((bRam0000000007e28edf & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_0776b160);
              bRam0000000007e28edf = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_0776b160;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9734;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9734:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,uVar13,0,uVar18,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            uVar17 = auVar32._8_8_;
            auStack_1d0._0_8_ = 0x68b9770;
            uStack_1c0 = 0x7e28000;
            plStack_1b8 = plVar15;
            auStack_1b0._0_8_ = uVar13;
            auStack_1b0._8_8_ = uVar18;
            if ((bRam0000000007e28ee0 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811880);
              bRam0000000007e28ee0 = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_07811880;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9820;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9820:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,uVar17,0,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            uVar18 = auVar32._8_8_;
            uStack_200 = 0x68b985c;
            auStack_1f8._8_8_ = 0x7e28000;
            lStack_1e8 = 0x7e28000;
            plStack_1e0 = plVar15;
            uStack_1d8 = uVar17;
            if ((bRam0000000007e28ee1 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee1 = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_07811888;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b990c;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b990c:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,uVar18,0,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            puVar26 = (undefined8 *)PTR_DAT_0777aa98;
            uStack_240 = 0x68b9948;
            lStack_228 = lVar10;
            uStack_220 = 0x7e28000;
            auStack_218._0_8_ = 0x7e28000;
            uVar19 = uVar29;
            uVar17 = uVar27;
            auStack_238._8_8_ = plVar28;
            auStack_218._8_8_ = plVar15;
            lStack_208 = uVar18;
            if ((bRam0000000007e28ee2 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811888);
              bRam0000000007e28ee2 = 1;
            }
            lVar10 = func_0x03280ca0(*puVar26);
            func_0x06a30df4(lVar10,0);
            if (lVar10 != 0) {
              puVar26 = (undefined8 *)(lVar10 + 0x30);
              *puVar26 = uVar29;
              func_0x032809c4(puVar26,uVar29);
              *(undefined8 *)(lVar10 + 0x38) = uVar27;
              plVar15 = *(long **)(auVar32._0_8_ + 0x40);
              uVar27 = 0;
              if (plVar15 != (long *)0x0) {
                lVar25 = *plVar15;
                lVar22 = *(long *)PTR_DAT_07802f60;
                uVar29 = *(undefined8 *)PTR_DAT_07811888;
                uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar21 != 0) {
                  piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x20)) {
                      lVar25 = lVar25 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9a48;
                    }
                    uVar21 = uVar21 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 != 0);
                }
                lVar25 = func_0x03256b10(plVar15);
LAB_068b9a48:
                lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar10 = (**(code **)(lVar25 + 8))(plVar15,uVar29,auVar32._8_8_,0,lVar10,lVar25);
                return lVar10;
              }
            }
            auVar30 = func_0x03280cac();
            puVar9 = PTR_DAT_0777aa98;
            lStack_280 = 0x68b9a88;
            puStack_270 = puVar26;
            uStack_268 = uVar29;
            auStack_258._0_8_ = uVar27;
            auStack_258._8_8_ = lVar10;
            if ((bRam0000000007e28ee3 & 1) == 0) {
              plStack_260 = (long *)auVar32._0_8_;
              lStack_248 = auVar32._8_8_;
              func_0x03280a18(PTR_DAT_0777aa98);
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077c1e10);
              auVar32._8_8_ = lStack_248;
              auVar32._0_8_ = plStack_260;
              bRam0000000007e28ee3 = 1;
            }
            lStack_248 = auVar32._8_8_;
            plStack_260 = auVar32._0_8_;
            lVar10 = func_0x03280ca0(*(undefined8 *)puVar9);
            func_0x06a30df4(lVar10,0);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x30) = uVar19;
              func_0x032809c4((undefined8 *)(lVar10 + 0x30),uVar19);
              *(undefined8 *)(lVar10 + 0x38) = uVar17;
              plVar15 = *(long **)(auVar30._0_8_ + 0x40);
              uVar17 = 0;
              if (plVar15 != (long *)0x0) {
                lVar25 = *plVar15;
                lVar22 = *(long *)PTR_DAT_07802f60;
                uVar29 = *(undefined8 *)PTR_DAT_077c1e10;
                uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar21 != 0) {
                  piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x20)) {
                      lVar25 = lVar25 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9b88;
                    }
                    uVar21 = uVar21 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 != 0);
                }
                lVar25 = func_0x03256b10(plVar15);
LAB_068b9b88:
                lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar10 = (**(code **)(lVar25 + 8))(plVar15,uVar29,auVar30._8_8_,0,lVar10,lVar25);
                return lVar10;
              }
            }
            auVar32 = func_0x03280cac();
            uStack_298 = uVar17;
            auStack_290._0_8_ = lVar10;
            if ((bRam0000000007e28ee4 & 1) == 0) {
              lStack_2a0 = auVar30._0_8_;
              auStack_290._8_8_ = auVar30._8_8_;
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_077d7510);
              auVar30._8_8_ = auStack_290._8_8_;
              auVar30._0_8_ = lStack_2a0;
              bRam0000000007e28ee4 = 1;
            }
            auStack_290._8_8_ = auVar30._8_8_;
            lStack_2a0 = auVar30._0_8_;
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_077d7510;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9c78;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
              auVar30._8_8_ = auStack_290._8_8_;
              auVar30._0_8_ = lStack_2a0;
LAB_068b9c78:
              auStack_290._8_8_ = auVar30._8_8_;
              lStack_2a0 = auVar30._0_8_;
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,auVar32._8_8_,0,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            if ((bRam0000000007e28ee5 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_07811890);
              bRam0000000007e28ee5 = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_07802f60;
              uVar29 = *(undefined8 *)PTR_DAT_07811890;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9d64;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9d64:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,auVar32._8_8_,0,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            if ((bRam0000000007e28ee6 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777ab08);
              func_0x03280a18(PTR_DAT_07811898);
              bRam0000000007e28ee6 = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              lVar25 = *(long *)PTR_DAT_0777ab08;
              uVar29 = *(undefined8 *)PTR_DAT_07811898;
              uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9e50;
                  }
                  uVar21 = uVar21 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 != 0);
              }
              lVar10 = func_0x03256b10(plVar15);
LAB_068b9e50:
              lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,auVar32._8_8_,0,lVar10);
              return lVar10;
            }
            auVar32 = func_0x03280cac();
            if ((bRam0000000007e28ee7 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07802f60);
              func_0x03280a18(PTR_DAT_078118a0);
              bRam0000000007e28ee7 = 1;
            }
            plVar15 = *(long **)(auVar32._0_8_ + 0x40);
            if (plVar15 == (long *)0x0) {
              lVar10 = func_0x03280cac();
              return lVar10;
            }
            lVar10 = *plVar15;
            lVar25 = *(long *)PTR_DAT_07802f60;
            uVar29 = *(undefined8 *)PTR_DAT_078118a0;
            uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar21 != 0) {
              piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
                  lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9f38;
                }
                uVar21 = uVar21 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar21 != 0);
            }
            lVar10 = func_0x03256b10(plVar15);
LAB_068b9f38:
            lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar25);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar10 = (**(code **)(lVar10 + 8))(plVar15,uVar29,auVar32._8_8_,0,0,lVar10);
            return lVar10;
          }
        }
      }
    }
    lVar10 = func_0x03280cac();
    return lVar10;
  }
  puVar26 = (undefined8 *)(lVar25 + 0x10);
  *puVar26 = uVar29;
  func_0x032809c4(puVar26,uVar29);
  uVar29 = *puVar26;
  plVar28 = (long *)func_0x03280ca0(*(undefined8 *)puVar9);
  lVar22 = 0;
  func_0x05355fbc(plVar28,lVar25,*(undefined8 *)(*(long *)(plVar16[4] + 0xc0) + 0x80));
  uVar29 = func_0x03d872a8(uVar29,plVar28,*(undefined8 *)puVar4);
  uVar12 = func_0x03d281a8(uVar29,*(undefined8 *)puVar3);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(lVar10 + 0x70) == 0) goto LAB_04d195d8;
    MergeEngine_ECS_Systems_Board_BoardSystem__MoveDuplicatePositionedItemsToItemQueue
              (*(long *)(lVar10 + 0x70),uVar29,0);
  }
  uVar29 = *puVar26;
  lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    uVar27 = **(undefined8 **)(lVar10 + 0xb8);
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar9);
    lVar22 = 0;
    func_0x05355fbc(lVar10,uVar27,*(undefined8 *)(*(long *)(plVar16[4] + 0xc0) + 0x88));
    lVar23 = *(long *)(plVar16[4] + 0xc0);
    lVar25 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
      lVar23 = *(long *)(plVar16[4] + 0xc0);
    }
    *(long *)(*(long *)(lVar25 + 0xb8) + 0x10) = lVar10;
    lVar25 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar25 + 0xb8) + 0x10,lVar10);
  }
  uVar29 = func_0x03d872a8(uVar29,lVar10,*(undefined8 *)puVar4);
  lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c(lVar10);
  }
  lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  puVar3 = PTR_DAT_07780450;
  puVar9 = PTR_DAT_07780448;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
  if (lVar10 == 0) {
    lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar10 = *(long *)(*(long *)(plVar16[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    uVar27 = **(undefined8 **)(lVar10 + 0xb8);
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
    lVar22 = 0;
    func_0x053569b8(lVar10,uVar27,*(undefined8 *)(*(long *)(plVar16[4] + 0xc0) + 0x90));
    lVar23 = *(long *)(plVar16[4] + 0xc0);
    lVar25 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
      lVar23 = *(long *)(plVar16[4] + 0xc0);
    }
    *(long *)(*(long *)(lVar25 + 0xb8) + 0x18) = lVar10;
    lVar25 = *(long *)(lVar23 + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar25 + 0xb8) + 0x18,lVar10);
  }
  lVar23 = *(long *)puVar9;
  lVar10 = func_0x03d50a94(uVar29,lVar10);
  lVar25 = *(long *)puVar3;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    func_0x04143d60(lVar22,lVar10,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar22;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar32 = func_0x03280b7c(uVar29,lVar25);
  lVar25 = auVar32._8_8_;
  lVar10 = auVar32._0_8_;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    func_0x0419ce74(lVar22,lVar10,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar22;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar32 = func_0x03280b7c(uVar29,lVar25);
  lVar25 = auVar32._8_8_;
  lStack_120 = 0x3d600c8;
  lStack_110 = lVar10;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar32._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041c2810(lVar10,auVar32._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar10;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar30 = func_0x03280b7c(uVar29,lVar25);
  lVar10 = auVar30._8_8_;
  uStack_140 = 0x3d60144;
  auStack_130 = auVar32;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x041ddb58(lVar25,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar25;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar32 = func_0x03280b7c(uVar29,lVar10);
  lVar10 = auVar32._8_8_;
  uStack_160 = 0x3d601c0;
  auStack_150 = auVar30;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar32._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x041e617c(lVar25,auVar32._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar25;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar30 = func_0x03280b7c(uVar29,lVar10);
  lVar10 = auVar30._8_8_;
  uStack_180 = 0x3d6023c;
  auStack_170 = auVar32;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x041e8ba0(lVar25,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar25;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar32 = func_0x03280b7c(uVar29,lVar10);
  lVar10 = auVar32._8_8_;
  uStack_1a0 = 0x3d602b8;
  auStack_190 = auVar30;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar32._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))(lVar25,auVar32._0_8_);
    return lVar25;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar30 = func_0x03280b7c(uVar29,lVar10);
  lVar10 = auVar30._8_8_;
  uStack_1c0 = 0x3d60338;
  auStack_1b0 = auVar32;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x0420cec8(lVar25,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar25;
  }
  uVar29 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar29 = func_0x05ac7464(uVar29,0);
  auVar32 = func_0x03280b7c(uVar29,lVar10);
  plStack_1e0 = (long *)0x3d603b4;
  lVar10 = lVar23;
  uStack_1d8 = uVar21 & 0xffffffff;
  auStack_1d0 = auVar30;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03256878(lVar23);
  }
  auVar31._8_8_ = uStack_1d8;
  auVar31._0_8_ = plVar15;
  puVar9 = PTR_DAT_07779d10;
  if ((auVar32._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar32._8_8_ == 0)) {
    uVar29 = func_0x03280a2c(puVar9);
    uVar29 = func_0x05ac7464(uVar29,0);
    auVar30 = func_0x03280b7c(uVar29,lVar23);
    uStack_200 = 0x3d60428;
    lVar25 = lVar10;
    lStack_1e8 = lVar23;
    if (*(long *)(lVar10 + 0x38) == 0) {
      auStack_1f8 = auVar32;
      func_0x03256878(lVar10);
      auVar32 = auStack_1f8;
    }
    puVar9 = PTR_DAT_07779d10;
    auStack_1f8 = auVar32;
    if ((auVar30._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar30._8_8_ != 0)) {
      lVar25 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar22 = 0;
      pplVar6 = &plStack_1e0;
      lVar10 = lStack_1e8;
      uVar29 = uStack_200;
      goto LAB_03d60730;
    }
    uVar29 = func_0x03280a2c(puVar9);
    uVar29 = func_0x05ac7464(uVar29,0);
    auVar32 = func_0x03280b7c(uVar29,lVar10);
    uStack_220 = 0x3d6049c;
    lVar23 = lVar25;
    lStack_208 = lVar10;
    auStack_218 = auVar30;
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar32._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar32._8_8_ == 0)) {
      uVar29 = func_0x03280a2c(puVar9);
      uVar29 = func_0x05ac7464(uVar29,0);
      auStack_258 = func_0x03280b7c(uVar29,lVar25);
      uStack_240 = 0x3d60510;
      lVar8 = lVar23;
      lStack_228 = lVar25;
      auStack_238 = auVar32;
      if (*(long *)(lVar23 + 0x38) == 0) {
        func_0x03256878(lVar23);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auStack_258._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auStack_258._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))
                           (auStack_258._0_8_,auStack_258._8_8_,0);
        return lVar10;
      }
      uVar29 = func_0x03280a2c(puVar9);
      uVar29 = func_0x05ac7464(uVar29,0);
      auVar32 = func_0x03280b7c(uVar29,lVar23);
      puStack_270 = (undefined8 *)0x3d60588;
      lVar25 = lVar8;
      lVar20 = lVar22;
      plStack_260 = plVar15;
      lStack_248 = lVar23;
      if (*(long *)(lVar22 + 0x38) == 0) {
        func_0x03256878(lVar22);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar32._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar32._8_8_ == 0)) {
        uVar29 = func_0x03280a2c(puVar9);
        uVar29 = func_0x05ac7464(uVar29,0);
        auVar31 = func_0x03280b7c(uVar29,lVar22);
        auVar2._8_8_ = lVar20;
        auVar2._0_8_ = lVar25;
        plVar5 = &lStack_2a0;
        lStack_2a0 = 0x3d60608;
        lVar10 = lVar25;
        lVar23 = lVar20;
        lStack_280 = lVar8;
        lStack_278 = lVar22;
        auStack_290 = auVar32;
        if (*(long *)(lVar20 + 0x38) == 0) {
          func_0x03256878(lVar20);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((auVar31._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar31._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 0x10))
                             (auVar31._0_8_,auVar31._8_8_,lVar25);
          return lVar10;
        }
        uVar29 = func_0x03280a2c(puVar9);
        uVar29 = func_0x05ac7464(uVar29,0);
        plVar15 = (long *)0x3d6068c;
        auVar32 = func_0x03280b7c(uVar29,lVar20);
        goto LAB_03d6068c;
      }
      lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
      puVar7 = &uStack_240;
      lVar22 = lStack_248;
      plVar15 = plStack_260;
      puVar26 = puStack_270;
      auVar30 = auStack_258;
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar8 = 0;
      puVar7 = &uStack_200;
      lVar22 = lStack_208;
      puVar26 = (undefined8 *)uStack_220;
      auVar30 = auStack_218;
    }
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    lVar10 = 0;
    plVar5 = &uStack_1c0;
    plVar15 = plStack_1e0;
    auVar2 = auStack_1d0;
LAB_03d6068c:
    pplVar6 = (long **)((long)plVar5 + -0x30);
    *(long **)((long)plVar5 + -0x30) = plVar15;
    *(undefined1 (*) [16])((long)plVar5 + -0x20) = auVar31;
    *(undefined1 (*) [16])((long)plVar5 + -0x10) = auVar2;
    plVar15 = *(long **)(lVar23 + 0x38);
    lVar25 = lVar23;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(lVar23);
      plVar15 = *(long **)(lVar23 + 0x38);
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar22 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar32._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar32._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar32._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar32._8_8_);
      *(long *)(lVar8 + 0x28) = lVar10;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar10);
      return lVar8;
    }
    auVar30 = func_0x03280cac();
    plVar15 = (long *)0x0;
    uVar29 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)pplVar6 + -0x30);
    *(undefined8 *)((long)pplVar6 + -0x30) = uVar29;
    *(long **)((long)pplVar6 + -0x20) = plVar15;
    *(undefined1 (*) [16])((long)pplVar6 + -0x18) = auVar32;
    *(long *)((long)pplVar6 + -8) = lVar10;
    plVar15 = *(long **)(lVar25 + 0x38);
    lVar10 = lVar25;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(lVar25);
      plVar15 = *(long **)(lVar25 + 0x38);
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar23 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    func_0x0531e428(lVar23,0xfffffffe);
    if (lVar23 != 0) {
      *(undefined8 *)(lVar23 + 0x38) = auVar30._0_8_;
      func_0x032809c4((undefined8 *)(lVar23 + 0x38),auVar30._0_8_);
      *(undefined8 *)(lVar23 + 0x48) = auVar30._8_8_;
      func_0x032809c4((undefined8 *)(lVar23 + 0x48),auVar30._8_8_);
      *(long *)(lVar23 + 0x28) = lVar22;
      func_0x032809c4((long *)(lVar23 + 0x28),lVar22);
      return lVar23;
    }
    auVar32 = func_0x03280cac();
    plVar15 = (long *)0x0;
    puVar26 = (undefined8 *)0x3d607d4;
  }
  *(undefined8 **)((long)puVar7 + -0x30) = puVar26;
  *(long **)((long)puVar7 + -0x20) = plVar15;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar30;
  *(long *)((long)puVar7 + -8) = lVar22;
  plVar15 = *(long **)(lVar10 + 0x38);
  lVar25 = lVar10;
  if (plVar15 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar15 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar22 = func_0x03280ca0();
  uVar29 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 8);
  func_0x0531ec78(lVar22,0xfffffffe);
  if (lVar22 != 0) {
    *(undefined8 *)(lVar22 + 0x40) = auVar32._0_8_;
    func_0x032809c4((undefined8 *)(lVar22 + 0x40),auVar32._0_8_);
    *(undefined8 *)(lVar22 + 0x50) = auVar32._8_8_;
    func_0x032809c4((undefined8 *)(lVar22 + 0x50),auVar32._8_8_);
    *(long *)(lVar22 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar22 + 0x30),lVar8);
    return lVar22;
  }
  auVar30 = func_0x03280cac();
  lVar10 = auVar30._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(long **)((long)puVar7 + -0x58) = param_3;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar32;
  *(long *)((long)puVar7 + -0x38) = lVar8;
  plVar15 = *(long **)(lVar25 + 0x38);
  if (plVar15 == (long *)0x0) {
    func_0x03256878(lVar25);
    plVar15 = *(long **)(lVar25 + 0x38);
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar22 = func_0x03280ca0();
  puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x38) + 8);
  (*(code *)*puVar26)(lVar22,0xfffffffe);
  if (lVar22 != 0) {
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0xc0,lVar10);
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0x100,auVar30._8_8_);
    func_0x02f17738(lVar22,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0x80,uVar29);
    return lVar22;
  }
  auVar32 = func_0x03280cac();
  lVar22 = auVar32._8_8_;
  plVar15 = auVar32._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar30;
  *(long *)((long)puVar7 + -0x70) = lVar25;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar29;
  puVar14 = puVar26;
  if (puVar26[7] == 0) {
    func_0x03256878(puVar26);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar29 = func_0x03280a2c(puVar9);
    uVar29 = func_0x05ac7464(uVar29,0);
    func_0x03280b7c(uVar29,puVar26);
LAB_03d60c04:
    func_0x03281048(plVar15);
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(puVar26[7] + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar23 = *plVar15;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25)) {
      lVar25 = *(long *)(puVar26[7] + 0x10);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
        lVar23 = *plVar15;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25))
      {
        lVar25 = *(long *)(puVar26[7] + 0x10);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
          lVar23 = *plVar15;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar23 + 0x228))(plVar15,lVar22,*(undefined8 *)(lVar23 + 0x230));
          return lVar10;
        }
      }
      goto LAB_03d60c04;
    }
    lVar10 = *(long *)(puVar26[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar15,lVar10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(puVar26[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar26[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b68fa4(lVar10,plVar15,lVar22,*(undefined8 *)(puVar26[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar26[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar25 = *(long *)(puVar26[7] + 0x38);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      if ((*(byte *)(lVar25 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25
         )) {
        func_0x04b713b0(lVar10,plVar15,lVar22,*(undefined8 *)(puVar26[7] + 0x48));
        return lVar10;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar26[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar25 = *(long *)(puVar26[7] + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar23 = func_0x03280b90(plVar15,lVar25);
    if (lVar23 != 0) {
      func_0x04b66610(lVar10,lVar23,lVar22,*(undefined8 *)(puVar26[7] + 0x30));
      return lVar10;
    }
  }
  auVar30 = func_0x03281048(plVar15,lVar25);
  lVar22 = auVar30._8_8_;
  plVar15 = auVar30._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar25;
  *(long *)((long)puVar7 + -0xb0) = lVar10;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar26;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar32;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar22 == 0)) {
    uVar29 = func_0x03280a2c(puVar9);
    uVar29 = func_0x05ac7464(uVar29,0);
    func_0x03280b7c(uVar29,puVar14);
  }
  else {
    lVar10 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar23 = *plVar15;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((bVar1 < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)) {
      lVar10 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar10 = func_0x03280b90(plVar15,lVar10);
      if (lVar10 != 0) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        lVar25 = *(long *)(puVar14[7] + 0x20);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar23 = func_0x03280b90(plVar15,lVar25);
        if (lVar23 != 0) {
          func_0x04b667e0(lVar10,lVar23,lVar22,*(undefined8 *)(puVar14[7] + 0x30));
          return lVar10;
        }
        goto LAB_03d60ee0;
      }
      lVar10 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b693d0(lVar10,plVar15,lVar22,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar23 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c(lVar23);
      }
      if ((*(byte *)(lVar23 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) == lVar23
         )) {
        func_0x04b715c8(lVar10,plVar15,lVar22,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar10;
      }
    }
    else {
      lVar10 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar23 = *plVar15;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar23 = *plVar15;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar23 + 0x228))(plVar15,lVar22,*(undefined8 *)(lVar23 + 0x230));
          return lVar10;
        }
      }
    }
  }
  func_0x03281048(plVar15);
LAB_03d60ee0:
  lVar10 = func_0x03281048(plVar15,lVar25);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar30;
  lVar25 = *(long *)(lVar10 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  func_0x03280ab0();
  if (lVar25 == 0) {
    lVar25 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar25 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar22 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    **(long **)(lVar22 + 0xb8) = lVar25;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar10 + 0xb8),lVar25);
  }
  return lVar25;
}


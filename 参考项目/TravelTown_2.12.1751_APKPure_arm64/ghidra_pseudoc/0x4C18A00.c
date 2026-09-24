/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18A00; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.EntitiesRemovalLogic; status ok */

/* WARNING: Possible PIC construction at 0x04d18e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d19104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d18e9c) */
/* WARNING: Removing unreachable block (ram,0x04d19108) */
/* WARNING: Removing unreachable block (ram,0x04d1911c) */
/* WARNING: Removing unreachable block (ram,0x04d19130) */
/* WARNING: Removing unreachable block (ram,0x04d19138) */
/* WARNING: Removing unreachable block (ram,0x04d1913c) */
/* WARNING: Removing unreachable block (ram,0x04d19154) */

long MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___EntitiesRemovalLogic
               (long param_1,long *param_2,long *param_3,ulong param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long extraout_x1;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x22;
  undefined8 uVar24;
  long *unaff_x23;
  long *plVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 auStack_130 [2];
  long *plStack_120;
  long lStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  
  plVar23 = (long *)0x7e1a000;
  if ((bRam0000000007e1af03 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b0);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_077803e0);
    bRam0000000007e1af03 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar17 = *param_2;
    plVar23 = *(long **)(param_1 + 0x70);
    unaff_x22 = *(long **)PTR_DAT_0777e5b0;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    param_3 = (long *)(ulong)*(ushort *)(unaff_x22 + 10);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == unaff_x22[4]) {
          lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(unaff_x22 + 10)) * 0x10 + 0x138
          ;
          goto LAB_04d18abc;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    lVar17 = func_0x03256b10(param_2);
LAB_04d18abc:
    lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),unaff_x22);
    uVar9 = (**(code **)(lVar17 + 8))(param_2,lVar17);
    if (plVar23 != (long *)0x0) {
      param_5 = 1;
      param_3 = *(long **)PTR_DAT_077803e0;
      param_4 = 0;
      (**(code **)(*plVar23 + 0x218))(plVar23,uVar9);
      if (param_1 != 0) {
        lVar17 = *param_2;
        plVar22 = *(long **)(param_1 + 0x10);
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e498) {
              puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_04d18b64;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_04d18b64:
        uVar9 = (*(code *)*puVar10)(param_2,puVar10[1]);
        param_1 = 0;
        if (plVar22 != (long *)0x0) {
          lVar17 = *plVar22;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e5c0) {
                puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 6) * 0x10 + 0x138);
                goto LAB_04d18bd0;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e5c0,6);
LAB_04d18bd0:
                    /* WARNING: Could not recover jumptable at 0x04d18be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (*(code *)*puVar10)(plVar22,uVar9,puVar10[1]);
          return lVar17;
        }
      }
    }
  }
  auVar27 = func_0x03280cac();
  lVar17 = auVar27._8_8_;
  uStack_70 = 0x4d18bf0;
  if ((bRam0000000007e1af04 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077803e8);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_077803f0);
    func_0x03280a18(PTR_DAT_077803f8);
    bRam0000000007e1af04 = 1;
  }
  if (auVar27._0_8_ == 0) {
    auVar27 = func_0x03280cac();
    puVar10 = auVar27._8_8_;
    lVar17 = auVar27._0_8_;
    uStack_a0 = 0x4d18db0;
    plVar23 = param_3;
    uVar20 = param_4;
    if ((bRam0000000007e1af05 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780400);
      func_0x03280a18(PTR_DAT_07780408);
      func_0x03280a18(PTR_DAT_07780410);
      func_0x03280a18(PTR_DAT_07780418);
      bRam0000000007e1af05 = 1;
    }
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if ((puVar10 == (undefined8 *)0x0) || (lVar17 == 0)) {
LAB_04d18ec0:
      param_3 = plVar23;
      auVar28 = func_0x03280cac();
      if (auVar28._8_4_ == 1) {
        plVar23 = (long *)func_0x072ce910(auVar28._0_8_);
        lVar18 = *plVar23;
        func_0x072ce920();
        lVar17 = func_0x051159b0(&uStack_b8,*puVar10);
        if (lVar18 == 0) {
          return lVar17;
        }
        func_0x03280ca4(lVar18);
      }
      func_0x051159b0(&uStack_b8,*puVar10);
      func_0x03365958(auVar28._0_8_);
      func_0x03280ca4(0);
      uVar9 = 0x4d18f2c;
      auVar27 = func_0x02f09514();
    }
    else {
      plVar23 = (long *)puVar10[3];
      uVar20 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      func_0x054974a4(lVar17,param_3);
      puVar2 = PTR_DAT_07780408;
      puVar8 = PTR_DAT_07780400;
      if (puVar10[3] == 0) goto LAB_04d18ec0;
      func_0x04145068(&uStack_b8,puVar10[3],*(undefined8 *)PTR_DAT_07780418);
      uVar20 = func_0x051159b4(&uStack_b8,*(undefined8 *)puVar2);
      auVar27._8_8_ = uStack_a8;
      auVar27._0_8_ = lVar17;
      if ((uVar20 & 1) == 0) {
        lVar17 = func_0x051159b0(&uStack_b8,*(undefined8 *)puVar8);
        return lVar17;
      }
      param_5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
      uVar20 = 0;
      uVar9 = 0x4d18e9c;
    }
    unaff_x22 = auVar27._8_8_;
    plVar12 = auVar27._0_8_;
    plVar23 = (long *)(uVar20 & 0xffffffff);
    plVar22 = param_3;
    uStack_100 = uVar9;
    if ((bRam0000000007e1af06 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780420);
      func_0x03280a18(PTR_DAT_0777a940);
      func_0x03280a18(PTR_DAT_0777e5a0);
      func_0x03280a18(PTR_DAT_077803d0);
      bRam0000000007e1af06 = 1;
    }
    lStack_108 = 0;
    if (param_3 == (long *)0x0) {
      if (plVar12 != (long *)0x0) {
        param_3 = (long *)(**(code **)(*plVar12 + 0x228))(plVar12,*(undefined8 *)(*plVar12 + 0x230))
        ;
        uVar9 = func_0x06a13bc8(0,0,0,0,0);
        goto LAB_04d18ff4;
      }
LAB_04d191a0:
      uVar9 = 0x4d191a4;
      func_0x03280cac();
      lVar17 = extraout_x1;
      unaff_x23 = param_3;
    }
    else {
      plVar22 = (long *)0x0;
      uVar9 = func_0x06a13bc8(0,0,0,0,0);
      if (plVar12 == (long *)0x0) goto LAB_04d191a0;
LAB_04d18ff4:
      puVar8 = PTR_DAT_0777a940;
      plVar22 = unaff_x22;
      uVar20 = func_0x05497634(plVar12,param_3,unaff_x22,uVar9,&lStack_108,
                               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
      param_3 = (long *)(uVar20 & 0xffffffff);
      if (unaff_x22 == (long *)0x0) {
LAB_04d1905c:
        if ((plVar12[0xe] == 0) ||
           ((uVar9 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition
                               (plVar12[0xe],0), lStack_108 == 0 ||
            (lVar17 = func_0x03d20d84(lStack_108,*(undefined8 *)puVar8), lVar17 == 0))))
        goto LAB_04d191a0;
        *(undefined8 *)(lVar17 + 0x30) = uVar9;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07780420 + 0x130);
        if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07780420)) goto LAB_04d1905c;
        if (lStack_108 == 0) goto LAB_04d191a0;
        uVar9 = func_0x03d20d84(lStack_108,*(undefined8 *)puVar8);
        plVar22 = (long *)unaff_x22[0x15];
        func_0x03bf70e8(plVar12,uVar9,plVar22,
                        *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
      }
      lVar17 = lStack_108;
      plVar25 = (long *)plVar12[0xb];
      if (plVar25 == (long *)0x0) goto LAB_04d191a0;
      lVar18 = *plVar25;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077803d0) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_04d190ec;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_077803d0,0);
LAB_04d190ec:
      plVar22 = unaff_x22;
      (*(code *)*puVar10)(plVar25,lVar17,unaff_x22,puVar10[1]);
      uVar9 = 0x4d19108;
      lVar17 = lStack_108;
      unaff_x23 = param_3;
    }
    auStack_130[0] = uVar9;
    plStack_120 = plVar12;
    lStack_118 = param_5;
    if ((bRam0000000007e1af07 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_0777a960);
      func_0x03280a18(PTR_DAT_07780430);
      func_0x03280a18(PTR_DAT_07780438);
      bRam0000000007e1af07 = 1;
    }
    if (lVar17 != 0) {
      lVar18 = func_0x03d20d84(lVar17,*(undefined8 *)PTR_DAT_0777a960);
      lVar17 = 0;
      if (((lVar18 != 0) &&
          (lVar17 = func_0x03ced81c(lVar18,*(undefined8 *)PTR_DAT_07780428), lVar17 != 0)) &&
         (0 < *(int *)(lVar17 + 0x74))) {
        *(undefined4 *)(lVar17 + 0x44) = 2;
      }
      return lVar17;
    }
    auVar27 = func_0x03280cac();
    if ((bRam0000000007e1af08 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780440);
      func_0x03280a18(PTR_DAT_07780448);
      func_0x03280a18(PTR_DAT_07780450);
      func_0x03280a18(PTR_DAT_07780458);
      func_0x03280a18(PTR_DAT_0777f910);
      func_0x03280a18(PTR_DAT_07780460);
      bRam0000000007e1af08 = 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(plVar22[4] + 0xc0) + 0x70) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x04c1d590(lVar17,*(undefined8 *)(*(long *)(plVar22[4] + 0xc0) + 0x78));
    puVar3 = PTR_DAT_07780458;
    puVar2 = PTR_DAT_07780440;
    puVar8 = PTR_DAT_0777f910;
    if (lVar17 == 0) {
LAB_04d195d8:
      auVar27 = func_0x03280cac();
      lVar18 = auVar27._8_8_;
      lVar17 = auVar27._0_8_;
      if ((bRam0000000007e1af09 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780468);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777e4a0);
        func_0x03280a18(PTR_DAT_07780470);
        func_0x03280a18(PTR_DAT_07778fa0);
        bRam0000000007e1af09 = 1;
      }
      if (lVar18 != 0) {
        lVar11 = func_0x03d20d84(lVar18,*(undefined8 *)PTR_DAT_07780468);
        if ((lVar11 == 0) || (*(char *)(lVar11 + 0x65) == '\0')) {
          return lVar11;
        }
        plVar23 = *(long **)(lVar17 + 0x60);
        if (plVar23 != (long *)0x0) {
          lVar19 = *plVar23;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x14) * 0x10 + 0x138);
                goto LAB_04d196d8;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
          uVar9 = (*(code *)*puVar10)(plVar23,lVar11,puVar10[1]);
          plVar23 = *(long **)(lVar17 + 0x68);
          if (plVar23 != (long *)0x0) {
            lVar11 = *plVar23;
            uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
            uVar24 = *(undefined8 *)PTR_DAT_07778fa0;
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4a0) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_04d19754;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
            uVar9 = (*(code *)*puVar10)(plVar23,uVar24,uVar9,lVar18,0,puVar10[1]);
            lVar17 = *(long *)(lVar17 + 0x78);
            if (lVar17 != 0) {
              uVar24 = 0;
              uVar15 = 0;
              if ((bRam0000000007e28edd & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07807698);
                bRam0000000007e28edd = 1;
              }
              plVar23 = *(long **)(lVar17 + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar24 = *(undefined8 *)PTR_DAT_07807698;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9554;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9554:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar24,uVar9,0,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              uVar9 = uVar24;
              if ((bRam0000000007e28ede & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811878);
                bRam0000000007e28ede = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811878;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9644;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9644:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,uVar24,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              uVar24 = uVar9;
              if ((bRam0000000007e28edf & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_0776b160);
                bRam0000000007e28edf = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar24 = *(undefined8 *)PTR_DAT_0776b160;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9734;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9734:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar24,auVar27._8_8_,0,uVar9,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee0 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811880);
                bRam0000000007e28ee0 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811880;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9820;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9820:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee1 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee1 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811888;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b990c;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b990c:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              puVar8 = PTR_DAT_0777aa98;
              uVar9 = uVar24;
              uVar16 = uVar15;
              if ((bRam0000000007e28ee2 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee2 = 1;
              }
              lVar17 = func_0x03280ca0(*(undefined8 *)puVar8);
              func_0x06a30df4(lVar17,0);
              if (lVar17 != 0) {
                *(undefined8 *)(lVar17 + 0x30) = uVar24;
                func_0x032809c4((undefined8 *)(lVar17 + 0x30),uVar24);
                *(undefined8 *)(lVar17 + 0x38) = uVar15;
                plVar23 = *(long **)(auVar27._0_8_ + 0x40);
                if (plVar23 != (long *)0x0) {
                  lVar18 = *plVar23;
                  lVar11 = *(long *)PTR_DAT_07802f60;
                  uVar9 = *(undefined8 *)PTR_DAT_07811888;
                  uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
                        lVar18 = lVar18 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_068b9a48;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  lVar18 = func_0x03256b10(plVar23);
LAB_068b9a48:
                  lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar17 = (**(code **)(lVar18 + 8))(plVar23,uVar9,auVar27._8_8_,0,lVar17,lVar18);
                  return lVar17;
                }
              }
              auVar27 = func_0x03280cac();
              puVar8 = PTR_DAT_0777aa98;
              if ((bRam0000000007e28ee3 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077c1e10);
                bRam0000000007e28ee3 = 1;
              }
              lVar17 = func_0x03280ca0(*(undefined8 *)puVar8);
              func_0x06a30df4(lVar17,0);
              if (lVar17 != 0) {
                *(undefined8 *)(lVar17 + 0x30) = uVar9;
                func_0x032809c4((undefined8 *)(lVar17 + 0x30),uVar9);
                *(undefined8 *)(lVar17 + 0x38) = uVar16;
                plVar23 = *(long **)(auVar27._0_8_ + 0x40);
                if (plVar23 != (long *)0x0) {
                  lVar18 = *plVar23;
                  lVar11 = *(long *)PTR_DAT_07802f60;
                  uVar9 = *(undefined8 *)PTR_DAT_077c1e10;
                  uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar11 + 0x20)) {
                        lVar18 = lVar18 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_068b9b88;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  lVar18 = func_0x03256b10(plVar23);
LAB_068b9b88:
                  lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar17 = (**(code **)(lVar18 + 8))(plVar23,uVar9,auVar27._8_8_,0,lVar17,lVar18);
                  return lVar17;
                }
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee4 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077d7510);
                bRam0000000007e28ee4 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_077d7510;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9c78;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9c78:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee5 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811890);
                bRam0000000007e28ee5 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811890;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9d64;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9d64:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee6 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777ab08);
                func_0x03280a18(PTR_DAT_07811898);
                bRam0000000007e28ee6 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                lVar18 = *(long *)PTR_DAT_0777ab08;
                uVar9 = *(undefined8 *)PTR_DAT_07811898;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9e50;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                lVar17 = func_0x03256b10(plVar23);
LAB_068b9e50:
                lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,lVar17);
                return lVar17;
              }
              auVar27 = func_0x03280cac();
              if ((bRam0000000007e28ee7 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_078118a0);
                bRam0000000007e28ee7 = 1;
              }
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              if (plVar23 == (long *)0x0) {
                lVar17 = func_0x03280cac();
                return lVar17;
              }
              lVar17 = *plVar23;
              lVar18 = *(long *)PTR_DAT_07802f60;
              uVar9 = *(undefined8 *)PTR_DAT_078118a0;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                    lVar17 = lVar17 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9f38;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              lVar17 = func_0x03256b10(plVar23);
LAB_068b9f38:
              lVar17 = func_0x03280b88(*(undefined8 *)(lVar17 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar17 = (**(code **)(lVar17 + 8))(plVar23,uVar9,auVar27._8_8_,0,0,lVar17);
              return lVar17;
            }
          }
        }
      }
      lVar17 = func_0x03280cac();
      return lVar17;
    }
    puVar10 = (undefined8 *)(lVar17 + 0x10);
    *puVar10 = auVar27._8_8_;
    func_0x032809c4(puVar10,auVar27._8_8_);
    uVar24 = *puVar10;
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar8);
    param_4 = 0;
    func_0x05355fbc(uVar9,lVar17,*(undefined8 *)(*(long *)(plVar22[4] + 0xc0) + 0x80));
    uVar9 = func_0x03d872a8(uVar24,uVar9,*(undefined8 *)puVar3);
    uVar20 = func_0x03d281a8(uVar9,*(undefined8 *)puVar2);
    if ((uVar20 & 1) != 0) {
      lVar17 = *(long *)(auVar27._0_8_ + 0x70);
      if (lVar17 == 0) goto LAB_04d195d8;
      MergeEngine_ECS_Systems_Board_BoardSystem__MoveDuplicatePositionedItemsToItemQueue
                (lVar17,uVar9,0);
    }
    uVar9 = *puVar10;
    lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      uVar24 = **(undefined8 **)(lVar17 + 0xb8);
      lVar17 = func_0x03280ca0(*(undefined8 *)puVar8);
      param_4 = 0;
      func_0x05355fbc(lVar17,uVar24,*(undefined8 *)(*(long *)(plVar22[4] + 0xc0) + 0x88));
      lVar11 = *(long *)(plVar22[4] + 0xc0);
      lVar18 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
        lVar11 = *(long *)(plVar22[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar18 + 0xb8) + 0x10) = lVar17;
      lVar18 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar18 + 0xb8) + 0x10,lVar17);
    }
    uVar9 = func_0x03d872a8(uVar9,lVar17,*(undefined8 *)puVar3);
    lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c(lVar17);
    }
    lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_07780450;
    puVar8 = PTR_DAT_07780448;
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
    if (lVar17 == 0) {
      lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar17 = *(long *)(*(long *)(plVar22[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      uVar24 = **(undefined8 **)(lVar17 + 0xb8);
      lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
      param_4 = 0;
      func_0x053569b8(lVar17,uVar24,*(undefined8 *)(*(long *)(plVar22[4] + 0xc0) + 0x90));
      lVar11 = *(long *)(plVar22[4] + 0xc0);
      lVar18 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
        lVar11 = *(long *)(plVar22[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar18 + 0xb8) + 0x18) = lVar17;
      lVar18 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar18 + 0xb8) + 0x18,lVar17);
    }
    lVar11 = *(long *)puVar8;
    lVar17 = func_0x03d50a94(uVar9,lVar17);
    lVar18 = *(long *)puVar2;
    param_1 = 0x7e1a000;
    puVar4 = auStack_130;
    uStack_70 = 0x4d19248;
    param_2 = (long *)0x0;
  }
  else {
    uVar9 = func_0x03eb6ac8(auVar27._0_8_,*(undefined8 *)PTR_DAT_077803f8);
    lVar18 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
    }
    lVar18 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_077803e8;
    puVar8 = PTR_DAT_07780390;
    lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
    if (lVar18 == 0) {
      lVar18 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar18 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      uVar24 = **(undefined8 **)(lVar18 + 0xb8);
      lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803f0);
      param_4 = 0;
      func_0x053569b8(lVar18,uVar24,
                      *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x18));
      lVar19 = *(long *)(*(long *)(lVar17 + 0x20) + 0xc0);
      lVar11 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
        lVar19 = *(long *)(*(long *)(lVar17 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar18;
      lVar17 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar17 + 0xb8) + 8,lVar18);
    }
    lVar11 = *(long *)puVar2;
    lVar17 = func_0x03d50a94(uVar9,lVar18);
    lVar18 = *(long *)puVar8;
    puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)puVar4 + -0x20) = uStack_70;
  *(long *)((long)puVar4 + -0x10) = param_1;
  *(long **)((long)puVar4 + -8) = param_2;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (lVar17 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    func_0x04143d60(lVar11,lVar17,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar11;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar18);
  lVar17 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(long *)((long)puVar4 + -0x28) = lVar18;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x0419ce74(lVar18,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar17);
  lVar18 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(long *)((long)puVar4 + -0x48) = lVar17;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041c2810(lVar17,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar17;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar18);
  lVar17 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)puVar4 + -0x70) = 0;
  *(long *)((long)puVar4 + -0x68) = lVar18;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041ddb58(lVar18,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar17);
  lVar18 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)puVar4 + -0x90) = 0;
  *(long *)((long)puVar4 + -0x88) = lVar17;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041e617c(lVar17,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar17;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar18);
  lVar17 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)puVar4 + -0xb0) = 0;
  *(long *)((long)puVar4 + -0xa8) = lVar18;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041e8ba0(lVar18,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar17);
  lVar18 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)puVar4 + -0xd0) = 0;
  *(long *)((long)puVar4 + -200) = lVar17;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10))(lVar17,auVar27._0_8_);
    return lVar17;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar18);
  lVar17 = auVar27._8_8_;
  *(undefined8 *)((long)puVar4 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)puVar4 + -0xf0) = 0;
  *(long *)((long)puVar4 + -0xe8) = lVar18;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x0420cec8(lVar18,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar27 = func_0x03280b7c(uVar9,lVar17);
  *(undefined8 *)((long)puVar4 + -0x120) = 0x3d603b4;
  *(long **)((long)puVar4 + -0x118) = plVar23;
  *(undefined8 *)((long)puVar4 + -0x110) = 0;
  *(long *)((long)puVar4 + -0x108) = lVar17;
  lVar17 = lVar11;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  puVar8 = PTR_DAT_07779d10;
  if ((auVar27._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar26 = func_0x03280b7c(uVar9,lVar11);
    *(undefined8 *)((long)puVar4 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)puVar4 + -0x138) = auVar27;
    *(long *)((long)puVar4 + -0x128) = lVar11;
    lVar18 = lVar17;
    if (*(long *)(lVar17 + 0x38) == 0) {
      func_0x03256878(lVar17);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar26._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
      lVar18 = *(long *)((long)puVar4 + -0x128);
      uVar20 = *(ulong *)(*(long *)(lVar17 + 0x38) + 8);
      uVar24 = 0;
      puVar6 = (undefined1 *)((long)puVar4 + -0x120);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x140);
      auVar27 = *(undefined1 (*) [16])((long)puVar4 + -0x138);
      goto LAB_03d60730;
    }
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar27 = func_0x03280b7c(uVar9,lVar17);
    *(undefined8 *)((long)puVar4 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)puVar4 + -0x158) = auVar26;
    *(long *)((long)puVar4 + -0x148) = lVar17;
    lVar17 = lVar18;
    if (*(long *)(lVar18 + 0x38) == 0) {
      func_0x03256878(lVar18);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auVar26 = func_0x03280b7c(uVar9,lVar18);
      *(undefined8 *)((long)puVar4 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)puVar4 + -0x178) = auVar27;
      *(long *)((long)puVar4 + -0x168) = lVar18;
      lVar18 = lVar17;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar26._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 8))
                           (auVar26._0_8_,auVar26._8_8_,0);
        return lVar17;
      }
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auVar27 = func_0x03280b7c(uVar9,lVar17);
      *(undefined8 *)((long)puVar4 + -0x1b0) = 0x3d60588;
      *(long **)((long)puVar4 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])((long)puVar4 + -0x198) = auVar26;
      *(long *)((long)puVar4 + -0x188) = lVar17;
      lVar17 = lVar18;
      uVar20 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar27._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
        uVar9 = func_0x03280a2c(puVar8);
        uVar9 = func_0x05ac7464(uVar9,0);
        auVar26 = func_0x03280b7c(uVar9,param_4);
        puVar5 = (undefined1 *)((long)puVar4 + -0x1e0);
        *(undefined8 *)((long)puVar4 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)puVar4 + -0x1d0) = auVar27;
        *(long *)((long)puVar4 + -0x1c0) = lVar18;
        *(ulong *)((long)puVar4 + -0x1b8) = param_4;
        lVar18 = lVar17;
        uVar14 = uVar20;
        if (*(long *)(uVar20 + 0x38) == 0) {
          func_0x03256878(uVar20);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((auVar26._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (*(code *)**(undefined8 **)(*(long *)(uVar20 + 0x38) + 0x10))
                             (auVar26._0_8_,auVar26._8_8_,lVar17);
          return lVar17;
        }
        uVar9 = func_0x03280a2c(puVar8);
        uVar24 = func_0x05ac7464(uVar9,0);
        uVar9 = 0x3d6068c;
        auVar27 = func_0x03280b7c(uVar24,uVar20);
        goto LAB_03d6068c;
      }
      uVar14 = *(ulong *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar24 = *(undefined8 *)((long)puVar4 + -0x188);
      unaff_x22 = *(long **)((long)puVar4 + -0x1a0);
      auVar26 = *(undefined1 (*) [16])((long)puVar4 + -0x198);
      puVar7 = (undefined1 *)((long)puVar4 + -0x180);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x1b0);
    }
    else {
      uVar24 = *(undefined8 *)((long)puVar4 + -0x148);
      uVar14 = *(ulong *)(*(long *)(lVar18 + 0x38) + 8);
      lVar18 = 0;
      puVar7 = (undefined1 *)((long)puVar4 + -0x140);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x160);
      auVar26 = *(undefined1 (*) [16])((long)puVar4 + -0x158);
    }
  }
  else {
    lVar17 = *(long *)((long)puVar4 + -0x110);
    uVar20 = *(ulong *)((long)puVar4 + -0x108);
    uVar14 = *(ulong *)(*(long *)(lVar11 + 0x38) + 8);
    lVar18 = 0;
    puVar5 = (undefined1 *)((long)puVar4 + -0x100);
    uVar9 = *(undefined8 *)((long)puVar4 + -0x120);
    auVar26._8_8_ = *(undefined8 *)((long)puVar4 + -0x118);
    auVar26._0_8_ = unaff_x22;
LAB_03d6068c:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar9;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar26;
    *(long *)(puVar5 + -0x10) = lVar17;
    *(ulong *)(puVar5 + -8) = uVar20;
    plVar23 = *(long **)(uVar14 + 0x38);
    uVar20 = uVar14;
    if (plVar23 == (long *)0x0) {
      func_0x03256878(uVar14);
      plVar23 = *(long **)(uVar14 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    uVar24 = *(undefined8 *)(*(long *)(uVar14 + 0x38) + 8);
    func_0x0531dbd0(lVar17,0xfffffffe);
    if (lVar17 != 0) {
      *(undefined8 *)(lVar17 + 0x38) = auVar27._0_8_;
      func_0x032809c4((undefined8 *)(lVar17 + 0x38),auVar27._0_8_);
      *(undefined8 *)(lVar17 + 0x48) = auVar27._8_8_;
      func_0x032809c4((undefined8 *)(lVar17 + 0x48),auVar27._8_8_);
      *(long *)(lVar17 + 0x28) = lVar18;
      func_0x032809c4((long *)(lVar17 + 0x28),lVar18);
      return lVar17;
    }
    uVar9 = 0x3d60730;
    auVar26 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
LAB_03d60730:
    puVar7 = puVar6 + -0x30;
    *(undefined8 *)(puVar6 + -0x30) = uVar9;
    *(long **)(puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar6 + -0x18) = auVar27;
    *(long *)(puVar6 + -8) = lVar18;
    plVar23 = *(long **)(uVar20 + 0x38);
    uVar14 = uVar20;
    if (plVar23 == (long *)0x0) {
      func_0x03256878(uVar20);
      plVar23 = *(long **)(uVar20 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(uVar20 + 0x38) + 8);
    func_0x0531e428(lVar17,0xfffffffe);
    if (lVar17 != 0) {
      *(undefined8 *)(lVar17 + 0x38) = auVar26._0_8_;
      func_0x032809c4((undefined8 *)(lVar17 + 0x38),auVar26._0_8_);
      *(undefined8 *)(lVar17 + 0x48) = auVar26._8_8_;
      func_0x032809c4((undefined8 *)(lVar17 + 0x48),auVar26._8_8_);
      *(undefined8 *)(lVar17 + 0x28) = uVar24;
      func_0x032809c4((undefined8 *)(lVar17 + 0x28),uVar24);
      return lVar17;
    }
    uVar9 = 0x3d607d4;
    auVar27 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar9;
  *(long **)(puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar26;
  *(undefined8 *)(puVar7 + -8) = uVar24;
  plVar23 = *(long **)(uVar14 + 0x38);
  uVar20 = uVar14;
  if (plVar23 == (long *)0x0) {
    func_0x03256878(uVar14);
    plVar23 = *(long **)(uVar14 + 0x38);
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar17 = func_0x03280ca0();
  uVar9 = *(undefined8 *)(*(long *)(uVar14 + 0x38) + 8);
  func_0x0531ec78(lVar17,0xfffffffe);
  if (lVar17 != 0) {
    *(undefined8 *)(lVar17 + 0x40) = auVar27._0_8_;
    func_0x032809c4((undefined8 *)(lVar17 + 0x40),auVar27._0_8_);
    *(undefined8 *)(lVar17 + 0x50) = auVar27._8_8_;
    func_0x032809c4((undefined8 *)(lVar17 + 0x50),auVar27._8_8_);
    *(long *)(lVar17 + 0x30) = lVar18;
    func_0x032809c4((long *)(lVar17 + 0x30),lVar18);
    return lVar17;
  }
  auVar26 = func_0x03280cac();
  lVar17 = auVar26._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = 0x3d60878;
  *(long **)(puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar27;
  *(long *)(puVar7 + -0x38) = lVar18;
  plVar23 = *(long **)(uVar20 + 0x38);
  if (plVar23 == (long *)0x0) {
    func_0x03256878(uVar20);
    plVar23 = *(long **)(uVar20 + 0x38);
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  puVar10 = *(undefined8 **)(*(long *)(uVar20 + 0x38) + 8);
  (*(code *)*puVar10)(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar20 + 0x38) + 0x80) + 0xc0,lVar17);
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar20 + 0x38) + 0x80) + 0x100,auVar26._8_8_);
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar20 + 0x38) + 0x80) + 0x80,uVar9);
    return lVar18;
  }
  auVar27 = func_0x03280cac();
  lVar18 = auVar27._8_8_;
  plVar23 = auVar27._0_8_;
  *(undefined8 *)(puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x80) = auVar26;
  *(ulong *)(puVar7 + -0x70) = uVar20;
  *(undefined8 *)(puVar7 + -0x68) = uVar9;
  puVar13 = puVar10;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar23 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar10);
LAB_03d60c04:
    func_0x03281048(plVar23);
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar19 = *plVar23;
    bVar1 = *(byte *)(lVar19 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)) {
      lVar11 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
        lVar19 = *plVar23;
        bVar1 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
          lVar19 = *plVar23;
          bVar1 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (**(code **)(lVar19 + 0x228))(plVar23,lVar18,*(undefined8 *)(lVar19 + 0x230));
          return lVar17;
        }
      }
      goto LAB_03d60c04;
    }
    lVar17 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar23,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        func_0x04b68fa4(lVar17,plVar23,lVar18,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar17;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      lVar11 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar23 + 0x130)) &&
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        func_0x04b713b0(lVar17,plVar23,lVar18,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar17;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    lVar11 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar19 = func_0x03280b90(plVar23,lVar11);
    if (lVar19 != 0) {
      func_0x04b66610(lVar17,lVar19,lVar18,*(undefined8 *)(puVar10[7] + 0x30));
      return lVar17;
    }
  }
  auVar26 = func_0x03281048(plVar23,lVar11);
  lVar18 = auVar26._8_8_;
  plVar23 = auVar26._0_8_;
  *(undefined8 *)(puVar7 + -0xc0) = 0x3d60c18;
  *(long *)(puVar7 + -0xb8) = lVar11;
  *(long *)(puVar7 + -0xb0) = lVar17;
  *(undefined8 **)(puVar7 + -0xa8) = puVar10;
  *(undefined1 (*) [16])(puVar7 + -0xa0) = auVar27;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar23 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar13);
  }
  else {
    lVar17 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar19 = *plVar23;
    bVar1 = *(byte *)(lVar19 + 0x130);
    if ((bVar1 < *(byte *)(lVar17 + 0x130)) ||
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17)) {
      lVar17 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      lVar17 = func_0x03280b90(plVar23,lVar17);
      if (lVar17 != 0) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        lVar11 = *(long *)(puVar13[7] + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar19 = func_0x03280b90(plVar23,lVar11);
        if (lVar19 != 0) {
          func_0x04b667e0(lVar17,lVar19,lVar18,*(undefined8 *)(puVar13[7] + 0x30));
          return lVar17;
        }
        goto LAB_03d60ee0;
      }
      lVar17 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        func_0x04b693d0(lVar17,plVar23,lVar18,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar17;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      lVar19 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar23 + 0x130)) &&
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b715c8(lVar17,plVar23,lVar18,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar17;
      }
    }
    else {
      lVar17 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar19 = *plVar23;
        bVar1 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar19 = *plVar23;
          bVar1 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (**(code **)(lVar19 + 0x228))(plVar23,lVar18,*(undefined8 *)(lVar19 + 0x230));
          return lVar17;
        }
      }
    }
  }
  func_0x03281048(plVar23);
LAB_03d60ee0:
  lVar17 = func_0x03281048(plVar23,lVar11);
  *(undefined8 *)(puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar7 + -0xd0) = auVar26;
  lVar18 = *(long *)(lVar17 + 0x20);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = **(long **)(lVar18 + 0xb8);
  func_0x03280ab0();
  if (lVar18 == 0) {
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar11 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    **(long **)(lVar11 + 0xb8) = lVar18;
    lVar17 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar17 + 0xb8),lVar18);
  }
  return lVar18;
}


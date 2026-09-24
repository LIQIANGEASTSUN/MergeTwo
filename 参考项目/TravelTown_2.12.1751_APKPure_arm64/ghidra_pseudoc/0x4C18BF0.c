/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18BF0; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.GetExistingEntityIds; status ok */

/* WARNING: Possible PIC construction at 0x04d18e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d19104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d18e9c) */
/* WARNING: Removing unreachable block (ram,0x04d19108) */
/* WARNING: Removing unreachable block (ram,0x04d1911c) */
/* WARNING: Removing unreachable block (ram,0x04d19130) */
/* WARNING: Removing unreachable block (ram,0x04d19138) */
/* WARNING: Removing unreachable block (ram,0x04d1913c) */
/* WARNING: Removing unreachable block (ram,0x04d19154) */

long MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___GetExistingEntityIds
               (long param_1,long param_2,long *param_3,ulong param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long extraout_x1;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar22;
  long *unaff_x23;
  long *plVar23;
  undefined8 unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 auStack_100 [2];
  long *plStack_f0;
  long lStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e1af04 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077803e8);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_077803f0);
    func_0x03280a18(PTR_DAT_077803f8);
    bRam0000000007e1af04 = 1;
  }
  if (param_1 == 0) {
    auVar24 = func_0x03280cac();
    puVar11 = auVar24._8_8_;
    lVar19 = auVar24._0_8_;
    uStack_70 = 0x4d18db0;
    plVar17 = param_3;
    uVar14 = param_4;
    if ((bRam0000000007e1af05 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780400);
      func_0x03280a18(PTR_DAT_07780408);
      func_0x03280a18(PTR_DAT_07780410);
      func_0x03280a18(PTR_DAT_07780418);
      bRam0000000007e1af05 = 1;
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if ((puVar11 == (undefined8 *)0x0) || (lVar19 == 0)) {
LAB_04d18ec0:
      param_3 = plVar17;
      auVar26 = func_0x03280cac();
      if (auVar26._8_4_ == 1) {
        plVar17 = (long *)func_0x072ce910(auVar26._0_8_);
        lVar9 = *plVar17;
        func_0x072ce920();
        lVar19 = func_0x051159b0(&uStack_88,*puVar11);
        if (lVar9 == 0) {
          return lVar19;
        }
        func_0x03280ca4(lVar9);
      }
      func_0x051159b0(&uStack_88,*puVar11);
      func_0x03365958(auVar26._0_8_);
      func_0x03280ca4(0);
      uVar8 = 0x4d18f2c;
      auVar24 = func_0x02f09514();
    }
    else {
      plVar17 = (long *)puVar11[3];
      uVar14 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      func_0x054974a4(lVar19,param_3);
      puVar2 = PTR_DAT_07780408;
      puVar7 = PTR_DAT_07780400;
      if (puVar11[3] == 0) goto LAB_04d18ec0;
      func_0x04145068(&uStack_88,puVar11[3],*(undefined8 *)PTR_DAT_07780418);
      uVar14 = func_0x051159b4(&uStack_88,*(undefined8 *)puVar2);
      auVar24._8_8_ = uStack_78;
      auVar24._0_8_ = lVar19;
      if ((uVar14 & 1) == 0) {
        lVar19 = func_0x051159b0(&uStack_88,*(undefined8 *)puVar7);
        return lVar19;
      }
      param_5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
      uVar14 = 0;
      uVar8 = 0x4d18e9c;
    }
    unaff_x22 = auVar24._8_8_;
    plVar10 = auVar24._0_8_;
    unaff_x21 = uVar14 & 0xffffffff;
    plVar17 = param_3;
    uStack_d0 = uVar8;
    if ((bRam0000000007e1af06 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780420);
      func_0x03280a18(PTR_DAT_0777a940);
      func_0x03280a18(PTR_DAT_0777e5a0);
      func_0x03280a18(PTR_DAT_077803d0);
      bRam0000000007e1af06 = 1;
    }
    lStack_d8 = 0;
    if (param_3 == (long *)0x0) {
      if (plVar10 != (long *)0x0) {
        param_3 = (long *)(**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230))
        ;
        uVar8 = func_0x06a13bc8(0,0,0,0,0);
        goto LAB_04d18ff4;
      }
LAB_04d191a0:
      uVar8 = 0x4d191a4;
      func_0x03280cac();
      lVar19 = extraout_x1;
      unaff_x23 = param_3;
    }
    else {
      plVar17 = (long *)0x0;
      uVar8 = func_0x06a13bc8(0,0,0,0,0);
      if (plVar10 == (long *)0x0) goto LAB_04d191a0;
LAB_04d18ff4:
      puVar7 = PTR_DAT_0777a940;
      plVar17 = unaff_x22;
      uVar14 = func_0x05497634(plVar10,param_3,unaff_x22,uVar8,&lStack_d8,
                               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
      param_3 = (long *)(uVar14 & 0xffffffff);
      if (unaff_x22 == (long *)0x0) {
LAB_04d1905c:
        if ((plVar10[0xe] == 0) ||
           ((uVar8 = MergeEngine_ECS_Systems_Board_BoardSystem__GetRandomAvailablePosition
                               (plVar10[0xe],0), lStack_d8 == 0 ||
            (lVar19 = func_0x03d20d84(lStack_d8,*(undefined8 *)puVar7), lVar19 == 0))))
        goto LAB_04d191a0;
        *(undefined8 *)(lVar19 + 0x30) = uVar8;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07780420 + 0x130);
        if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07780420)) goto LAB_04d1905c;
        if (lStack_d8 == 0) goto LAB_04d191a0;
        uVar8 = func_0x03d20d84(lStack_d8,*(undefined8 *)puVar7);
        plVar17 = (long *)unaff_x22[0x15];
        func_0x03bf70e8(plVar10,uVar8,plVar17,
                        *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
      }
      lVar19 = lStack_d8;
      plVar23 = (long *)plVar10[0xb];
      if (plVar23 == (long *)0x0) goto LAB_04d191a0;
      lVar9 = *plVar23;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077803d0) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_04d190ec;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_077803d0,0);
LAB_04d190ec:
      plVar17 = unaff_x22;
      (*(code *)*puVar11)(plVar23,lVar19,unaff_x22,puVar11[1]);
      uVar8 = 0x4d19108;
      lVar19 = lStack_d8;
      unaff_x23 = param_3;
    }
    auStack_100[0] = uVar8;
    plStack_f0 = plVar10;
    lStack_e8 = param_5;
    if ((bRam0000000007e1af07 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_0777a960);
      func_0x03280a18(PTR_DAT_07780430);
      func_0x03280a18(PTR_DAT_07780438);
      bRam0000000007e1af07 = 1;
    }
    if (lVar19 != 0) {
      lVar9 = func_0x03d20d84(lVar19,*(undefined8 *)PTR_DAT_0777a960);
      lVar19 = 0;
      if (((lVar9 != 0) &&
          (lVar19 = func_0x03ced81c(lVar9,*(undefined8 *)PTR_DAT_07780428), lVar19 != 0)) &&
         (0 < *(int *)(lVar19 + 0x74))) {
        *(undefined4 *)(lVar19 + 0x44) = 2;
      }
      return lVar19;
    }
    auVar24 = func_0x03280cac();
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
    lVar19 = func_0x03280ca0();
    func_0x04c1d590(lVar19,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x78));
    puVar3 = PTR_DAT_07780458;
    puVar2 = PTR_DAT_07780440;
    puVar7 = PTR_DAT_0777f910;
    if (lVar19 == 0) {
LAB_04d195d8:
      auVar24 = func_0x03280cac();
      lVar9 = auVar24._8_8_;
      lVar19 = auVar24._0_8_;
      if ((bRam0000000007e1af09 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780468);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777e4a0);
        func_0x03280a18(PTR_DAT_07780470);
        func_0x03280a18(PTR_DAT_07778fa0);
        bRam0000000007e1af09 = 1;
      }
      if (lVar9 != 0) {
        lVar20 = func_0x03d20d84(lVar9,*(undefined8 *)PTR_DAT_07780468);
        if ((lVar20 == 0) || (*(char *)(lVar20 + 0x65) == '\0')) {
          return lVar20;
        }
        plVar17 = *(long **)(lVar19 + 0x60);
        if (plVar17 != (long *)0x0) {
          lVar18 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x14) * 0x10 + 0x138);
                goto LAB_04d196d8;
              }
              uVar14 = uVar14 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
          uVar8 = (*(code *)*puVar11)(plVar17,lVar20,puVar11[1]);
          plVar17 = *(long **)(lVar19 + 0x68);
          if (plVar17 != (long *)0x0) {
            lVar20 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
            uVar22 = *(undefined8 *)PTR_DAT_07778fa0;
            if (uVar14 != 0) {
              piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4a0) {
                  puVar11 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_04d19754;
                }
                uVar14 = uVar14 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar14 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
            uVar8 = (*(code *)*puVar11)(plVar17,uVar22,uVar8,lVar9,0,puVar11[1]);
            lVar19 = *(long *)(lVar19 + 0x78);
            if (lVar19 != 0) {
              uVar22 = 0;
              uVar15 = 0;
              if ((bRam0000000007e28edd & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07807698);
                bRam0000000007e28edd = 1;
              }
              plVar17 = *(long **)(lVar19 + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar22 = *(undefined8 *)PTR_DAT_07807698;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9554;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9554:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar22,uVar8,0,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              uVar8 = uVar22;
              if ((bRam0000000007e28ede & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811878);
                bRam0000000007e28ede = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar8 = *(undefined8 *)PTR_DAT_07811878;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9644;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9644:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,uVar22,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              uVar22 = uVar8;
              if ((bRam0000000007e28edf & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_0776b160);
                bRam0000000007e28edf = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar22 = *(undefined8 *)PTR_DAT_0776b160;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9734;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9734:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar22,auVar24._8_8_,0,uVar8,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee0 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811880);
                bRam0000000007e28ee0 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar8 = *(undefined8 *)PTR_DAT_07811880;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9820;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9820:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee1 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee1 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar8 = *(undefined8 *)PTR_DAT_07811888;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b990c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b990c:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              puVar7 = PTR_DAT_0777aa98;
              uVar8 = uVar22;
              uVar16 = uVar15;
              if ((bRam0000000007e28ee2 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee2 = 1;
              }
              lVar19 = func_0x03280ca0(*(undefined8 *)puVar7);
              func_0x06a30df4(lVar19,0);
              if (lVar19 != 0) {
                *(undefined8 *)(lVar19 + 0x30) = uVar22;
                func_0x032809c4((undefined8 *)(lVar19 + 0x30),uVar22);
                *(undefined8 *)(lVar19 + 0x38) = uVar15;
                plVar17 = *(long **)(auVar24._0_8_ + 0x40);
                if (plVar17 != (long *)0x0) {
                  lVar9 = *plVar17;
                  lVar20 = *(long *)PTR_DAT_07802f60;
                  uVar8 = *(undefined8 *)PTR_DAT_07811888;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar20 + 0x20)) {
                        lVar9 = lVar9 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar20 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_068b9a48;
                      }
                      uVar14 = uVar14 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar14 != 0);
                  }
                  lVar9 = func_0x03256b10(plVar17);
LAB_068b9a48:
                  lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar20);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar19 = (**(code **)(lVar9 + 8))(plVar17,uVar8,auVar24._8_8_,0,lVar19,lVar9);
                  return lVar19;
                }
              }
              auVar24 = func_0x03280cac();
              puVar7 = PTR_DAT_0777aa98;
              if ((bRam0000000007e28ee3 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077c1e10);
                bRam0000000007e28ee3 = 1;
              }
              lVar19 = func_0x03280ca0(*(undefined8 *)puVar7);
              func_0x06a30df4(lVar19,0);
              if (lVar19 != 0) {
                *(undefined8 *)(lVar19 + 0x30) = uVar8;
                func_0x032809c4((undefined8 *)(lVar19 + 0x30),uVar8);
                *(undefined8 *)(lVar19 + 0x38) = uVar16;
                plVar17 = *(long **)(auVar24._0_8_ + 0x40);
                if (plVar17 != (long *)0x0) {
                  lVar9 = *plVar17;
                  lVar20 = *(long *)PTR_DAT_07802f60;
                  uVar8 = *(undefined8 *)PTR_DAT_077c1e10;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar20 + 0x20)) {
                        lVar9 = lVar9 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar20 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_068b9b88;
                      }
                      uVar14 = uVar14 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar14 != 0);
                  }
                  lVar9 = func_0x03256b10(plVar17);
LAB_068b9b88:
                  lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar20);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar19 = (**(code **)(lVar9 + 8))(plVar17,uVar8,auVar24._8_8_,0,lVar19,lVar9);
                  return lVar19;
                }
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee4 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077d7510);
                bRam0000000007e28ee4 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar8 = *(undefined8 *)PTR_DAT_077d7510;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9c78;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9c78:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee5 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811890);
                bRam0000000007e28ee5 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_07802f60;
                uVar8 = *(undefined8 *)PTR_DAT_07811890;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9d64;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9d64:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee6 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777ab08);
                func_0x03280a18(PTR_DAT_07811898);
                bRam0000000007e28ee6 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar19 = *plVar17;
                lVar9 = *(long *)PTR_DAT_0777ab08;
                uVar8 = *(undefined8 *)PTR_DAT_07811898;
                uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar14 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9e50;
                    }
                    uVar14 = uVar14 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar14 != 0);
                }
                lVar19 = func_0x03256b10(plVar17);
LAB_068b9e50:
                lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,lVar19);
                return lVar19;
              }
              auVar24 = func_0x03280cac();
              if ((bRam0000000007e28ee7 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_078118a0);
                bRam0000000007e28ee7 = 1;
              }
              plVar17 = *(long **)(auVar24._0_8_ + 0x40);
              if (plVar17 == (long *)0x0) {
                lVar19 = func_0x03280cac();
                return lVar19;
              }
              lVar19 = *plVar17;
              lVar9 = *(long *)PTR_DAT_07802f60;
              uVar8 = *(undefined8 *)PTR_DAT_078118a0;
              uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar14 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)(lVar9 + 0x20)) {
                    lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10
                             + 0x138;
                    goto LAB_068b9f38;
                  }
                  uVar14 = uVar14 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar14 != 0);
              }
              lVar19 = func_0x03256b10(plVar17);
LAB_068b9f38:
              lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar19 = (**(code **)(lVar19 + 8))(plVar17,uVar8,auVar24._8_8_,0,0,lVar19);
              return lVar19;
            }
          }
        }
      }
      lVar19 = func_0x03280cac();
      return lVar19;
    }
    puVar11 = (undefined8 *)(lVar19 + 0x10);
    *puVar11 = auVar24._8_8_;
    func_0x032809c4(puVar11,auVar24._8_8_);
    uVar22 = *puVar11;
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar7);
    param_4 = 0;
    func_0x05355fbc(uVar8,lVar19,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x80));
    uVar8 = func_0x03d872a8(uVar22,uVar8,*(undefined8 *)puVar3);
    uVar14 = func_0x03d281a8(uVar8,*(undefined8 *)puVar2);
    if ((uVar14 & 1) != 0) {
      lVar19 = *(long *)(auVar24._0_8_ + 0x70);
      if (lVar19 == 0) goto LAB_04d195d8;
      MergeEngine_ECS_Systems_Board_BoardSystem__MoveDuplicatePositionedItemsToItemQueue
                (lVar19,uVar8,0);
    }
    uVar8 = *puVar11;
    lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar22 = **(undefined8 **)(lVar19 + 0xb8);
      lVar19 = func_0x03280ca0(*(undefined8 *)puVar7);
      param_4 = 0;
      func_0x05355fbc(lVar19,uVar22,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x88));
      lVar20 = *(long *)(plVar17[4] + 0xc0);
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
        lVar20 = *(long *)(plVar17[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar9 + 0xb8) + 0x10) = lVar19;
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar9 + 0xb8) + 0x10,lVar19);
    }
    uVar8 = func_0x03d872a8(uVar8,lVar19,*(undefined8 *)puVar3);
    lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_07780450;
    puVar7 = PTR_DAT_07780448;
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x18);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar22 = **(undefined8 **)(lVar19 + 0xb8);
      lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
      param_4 = 0;
      func_0x053569b8(lVar19,uVar22,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x90));
      lVar20 = *(long *)(plVar17[4] + 0xc0);
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
        lVar20 = *(long *)(plVar17[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar9 + 0xb8) + 0x18) = lVar19;
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar9 + 0xb8) + 0x18,lVar19);
    }
    lVar20 = *(long *)puVar7;
    lVar19 = func_0x03d50a94(uVar8,lVar19);
    lVar9 = *(long *)puVar2;
    unaff_x20 = 0x7e1a000;
    register0x00000008 = (BADSPACEBASE *)auStack_100;
    unaff_x30 = 0x4d19248;
    unaff_x19 = 0;
  }
  else {
    uVar8 = func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_077803f8);
    lVar19 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_077803e8;
    puVar7 = PTR_DAT_07780390;
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar22 = **(undefined8 **)(lVar19 + 0xb8);
      lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803f0);
      param_4 = 0;
      func_0x053569b8(lVar19,uVar22,
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
      lVar20 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
        lVar20 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar9 + 0xb8) + 8) = lVar19;
      lVar9 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar9 + 0xb8) + 8,lVar19);
    }
    lVar20 = *(long *)puVar2;
    lVar19 = func_0x03d50a94(uVar8,lVar19);
    lVar9 = *(long *)puVar7;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (lVar19 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    func_0x04143d60(lVar20,lVar19,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar20;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar9);
  lVar19 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(long *)((long)register0x00000008 + -0x28) = lVar9;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    func_0x0419ce74(lVar9,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar9;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar19);
  lVar9 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(long *)((long)register0x00000008 + -0x48) = lVar19;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041c2810(lVar19,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar19;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar9);
  lVar19 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(long *)((long)register0x00000008 + -0x68) = lVar9;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    func_0x041ddb58(lVar9,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar9;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar19);
  lVar9 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(long *)((long)register0x00000008 + -0x88) = lVar19;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041e617c(lVar19,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar19;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar9);
  lVar19 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(long *)((long)register0x00000008 + -0xa8) = lVar9;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    func_0x041e8ba0(lVar9,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar9;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar19);
  lVar9 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(long *)((long)register0x00000008 + -200) = lVar19;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))(lVar19,auVar24._0_8_);
    return lVar19;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar9);
  lVar19 = auVar24._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(long *)((long)register0x00000008 + -0xe8) = lVar9;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    func_0x0420cec8(lVar9,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar9;
  }
  uVar8 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar8 = func_0x05ac7464(uVar8,0);
  auVar24 = func_0x03280b7c(uVar8,lVar19);
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d603b4;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(long *)((long)register0x00000008 + -0x108) = lVar19;
  lVar19 = lVar20;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  puVar7 = PTR_DAT_07779d10;
  if ((auVar24._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
    uVar8 = func_0x03280a2c(puVar7);
    uVar8 = func_0x05ac7464(uVar8,0);
    auVar25 = func_0x03280b7c(uVar8,lVar20);
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x138) = auVar24;
    *(long *)((long)register0x00000008 + -0x128) = lVar20;
    lVar9 = lVar19;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar25._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
      lVar9 = *(long *)((long)register0x00000008 + -0x128);
      uVar14 = *(ulong *)(*(long *)(lVar19 + 0x38) + 8);
      uVar22 = 0;
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x120);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x140);
      auVar24 = *(undefined1 (*) [16])((long)register0x00000008 + -0x138);
      goto LAB_03d60730;
    }
    uVar8 = func_0x03280a2c(puVar7);
    uVar8 = func_0x05ac7464(uVar8,0);
    auVar24 = func_0x03280b7c(uVar8,lVar19);
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x158) = auVar25;
    *(long *)((long)register0x00000008 + -0x148) = lVar19;
    lVar19 = lVar9;
    if (*(long *)(lVar9 + 0x38) == 0) {
      func_0x03256878(lVar9);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar24._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
      uVar8 = func_0x03280a2c(puVar7);
      uVar8 = func_0x05ac7464(uVar8,0);
      auVar25 = func_0x03280b7c(uVar8,lVar9);
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x178) = auVar24;
      *(long *)((long)register0x00000008 + -0x168) = lVar9;
      lVar9 = lVar19;
      if (*(long *)(lVar19 + 0x38) == 0) {
        func_0x03256878(lVar19);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auVar25._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))
                           (auVar25._0_8_,auVar25._8_8_,0);
        return lVar19;
      }
      uVar8 = func_0x03280a2c(puVar7);
      uVar8 = func_0x05ac7464(uVar8,0);
      auVar24 = func_0x03280b7c(uVar8,lVar19);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0x3d60588;
      *(long **)((long)register0x00000008 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x198) = auVar25;
      *(long *)((long)register0x00000008 + -0x188) = lVar19;
      lVar19 = lVar9;
      uVar14 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auVar24._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar24._8_8_ == 0)) {
        uVar8 = func_0x03280a2c(puVar7);
        uVar8 = func_0x05ac7464(uVar8,0);
        auVar25 = func_0x03280b7c(uVar8,param_4);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x1d0) = auVar24;
        *(long *)((long)register0x00000008 + -0x1c0) = lVar9;
        *(ulong *)((long)register0x00000008 + -0x1b8) = param_4;
        lVar9 = lVar19;
        uVar13 = uVar14;
        if (*(long *)(uVar14 + 0x38) == 0) {
          func_0x03256878(uVar14);
        }
        puVar7 = PTR_DAT_07779d10;
        if ((auVar25._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (*(code *)**(undefined8 **)(*(long *)(uVar14 + 0x38) + 0x10))
                             (auVar25._0_8_,auVar25._8_8_,lVar19);
          return lVar19;
        }
        uVar8 = func_0x03280a2c(puVar7);
        uVar22 = func_0x05ac7464(uVar8,0);
        uVar8 = 0x3d6068c;
        auVar24 = func_0x03280b7c(uVar22,uVar14);
        goto LAB_03d6068c;
      }
      uVar13 = *(ulong *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x188);
      unaff_x22 = *(long **)((long)register0x00000008 + -0x1a0);
      auVar25 = *(undefined1 (*) [16])((long)register0x00000008 + -0x198);
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x180);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
    }
    else {
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x148);
      uVar13 = *(ulong *)(*(long *)(lVar9 + 0x38) + 8);
      lVar9 = 0;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x140);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x160);
      auVar25 = *(undefined1 (*) [16])((long)register0x00000008 + -0x158);
    }
  }
  else {
    lVar19 = *(long *)((long)register0x00000008 + -0x110);
    uVar14 = *(ulong *)((long)register0x00000008 + -0x108);
    uVar13 = *(ulong *)(*(long *)(lVar20 + 0x38) + 8);
    lVar9 = 0;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x100);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x120);
    auVar25._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x118);
    auVar25._0_8_ = unaff_x22;
LAB_03d6068c:
    puVar5 = puVar4 + -0x30;
    *(undefined8 *)(puVar4 + -0x30) = uVar8;
    *(undefined1 (*) [16])(puVar4 + -0x20) = auVar25;
    *(long *)(puVar4 + -0x10) = lVar19;
    *(ulong *)(puVar4 + -8) = uVar14;
    plVar17 = *(long **)(uVar13 + 0x38);
    uVar14 = uVar13;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(uVar13);
      plVar17 = *(long **)(uVar13 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    uVar22 = *(undefined8 *)(*(long *)(uVar13 + 0x38) + 8);
    func_0x0531dbd0(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x38) = auVar24._0_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x38),auVar24._0_8_);
      *(undefined8 *)(lVar19 + 0x48) = auVar24._8_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x48),auVar24._8_8_);
      *(long *)(lVar19 + 0x28) = lVar9;
      func_0x032809c4((long *)(lVar19 + 0x28),lVar9);
      return lVar19;
    }
    uVar8 = 0x3d60730;
    auVar25 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
LAB_03d60730:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar8;
    *(long **)(puVar5 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar5 + -0x18) = auVar24;
    *(long *)(puVar5 + -8) = lVar9;
    plVar17 = *(long **)(uVar14 + 0x38);
    uVar13 = uVar14;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(uVar14);
      plVar17 = *(long **)(uVar14 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(uVar14 + 0x38) + 8);
    func_0x0531e428(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x38) = auVar25._0_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x38),auVar25._0_8_);
      *(undefined8 *)(lVar19 + 0x48) = auVar25._8_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x48),auVar25._8_8_);
      *(undefined8 *)(lVar19 + 0x28) = uVar22;
      func_0x032809c4((undefined8 *)(lVar19 + 0x28),uVar22);
      return lVar19;
    }
    uVar8 = 0x3d607d4;
    auVar24 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
  }
  *(undefined8 *)(puVar6 + -0x30) = uVar8;
  *(long **)(puVar6 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar6 + -0x18) = auVar25;
  *(undefined8 *)(puVar6 + -8) = uVar22;
  plVar17 = *(long **)(uVar13 + 0x38);
  uVar14 = uVar13;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(uVar13);
    plVar17 = *(long **)(uVar13 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  uVar8 = *(undefined8 *)(*(long *)(uVar13 + 0x38) + 8);
  func_0x0531ec78(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    *(undefined8 *)(lVar19 + 0x40) = auVar24._0_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x40),auVar24._0_8_);
    *(undefined8 *)(lVar19 + 0x50) = auVar24._8_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x50),auVar24._8_8_);
    *(long *)(lVar19 + 0x30) = lVar9;
    func_0x032809c4((long *)(lVar19 + 0x30),lVar9);
    return lVar19;
  }
  auVar25 = func_0x03280cac();
  lVar19 = auVar25._0_8_;
  *(undefined8 *)(puVar6 + -0x60) = 0x3d60878;
  *(long **)(puVar6 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar6 + -0x48) = auVar24;
  *(long *)(puVar6 + -0x38) = lVar9;
  plVar17 = *(long **)(uVar14 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(uVar14);
    plVar17 = *(long **)(uVar14 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar9 = func_0x03280ca0();
  puVar11 = *(undefined8 **)(*(long *)(uVar14 + 0x38) + 8);
  (*(code *)*puVar11)(lVar9,0xfffffffe);
  if (lVar9 != 0) {
    func_0x02f17738(lVar9,*(long *)(**(long **)(uVar14 + 0x38) + 0x80) + 0xc0,lVar19);
    func_0x02f17738(lVar9,*(long *)(**(long **)(uVar14 + 0x38) + 0x80) + 0x100,auVar25._8_8_);
    func_0x02f17738(lVar9,*(long *)(**(long **)(uVar14 + 0x38) + 0x80) + 0x80,uVar8);
    return lVar9;
  }
  auVar24 = func_0x03280cac();
  lVar9 = auVar24._8_8_;
  plVar17 = auVar24._0_8_;
  *(undefined8 *)(puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar6 + -0x80) = auVar25;
  *(ulong *)(puVar6 + -0x70) = uVar14;
  *(undefined8 *)(puVar6 + -0x68) = uVar8;
  puVar12 = puVar11;
  if (puVar11[7] == 0) {
    func_0x03256878(puVar11);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar8 = func_0x03280a2c(puVar7);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,puVar11);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(puVar11[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar18 = *plVar17;
    bVar1 = *(byte *)(lVar18 + 0x130);
    if ((*(byte *)(lVar20 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20)) {
      lVar20 = *(long *)(puVar11[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar18 = *plVar17;
        bVar1 = *(byte *)(lVar18 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar11[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar18 = *plVar17;
          bVar1 = *(byte *)(lVar18 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar18 + 0x228))(plVar17,lVar9,*(undefined8 *)(lVar18 + 0x230));
          return lVar19;
        }
      }
      goto LAB_03d60c04;
    }
    lVar19 = *(long *)(puVar11[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar17,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar11[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b68fa4(lVar19,plVar17,lVar9,*(undefined8 *)(puVar11[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar11[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar20 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b713b0(lVar19,plVar17,lVar9,*(undefined8 *)(puVar11[7] + 0x48));
        return lVar19;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar11[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar20 = *(long *)(puVar11[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar18 = func_0x03280b90(plVar17,lVar20);
    if (lVar18 != 0) {
      func_0x04b66610(lVar19,lVar18,lVar9,*(undefined8 *)(puVar11[7] + 0x30));
      return lVar19;
    }
  }
  auVar25 = func_0x03281048(plVar17,lVar20);
  lVar9 = auVar25._8_8_;
  plVar17 = auVar25._0_8_;
  *(undefined8 *)(puVar6 + -0xc0) = 0x3d60c18;
  *(long *)(puVar6 + -0xb8) = lVar20;
  *(long *)(puVar6 + -0xb0) = lVar19;
  *(undefined8 **)(puVar6 + -0xa8) = puVar11;
  *(undefined1 (*) [16])(puVar6 + -0xa0) = auVar24;
  if (puVar12[7] == 0) {
    func_0x03256878(puVar12);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar9 == 0)) {
    uVar8 = func_0x03280a2c(puVar7);
    uVar8 = func_0x05ac7464(uVar8,0);
    func_0x03280b7c(uVar8,puVar12);
  }
  else {
    lVar19 = *(long *)(puVar12[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar18 = *plVar17;
    bVar1 = *(byte *)(lVar18 + 0x130);
    if ((bVar1 < *(byte *)(lVar19 + 0x130)) ||
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19)) {
      lVar19 = *(long *)(puVar12[7] + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar19 = func_0x03280b90(plVar17,lVar19);
      if (lVar19 != 0) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        lVar20 = *(long *)(puVar12[7] + 0x20);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar18 = func_0x03280b90(plVar17,lVar20);
        if (lVar18 != 0) {
          func_0x04b667e0(lVar19,lVar18,lVar9,*(undefined8 *)(puVar12[7] + 0x30));
          return lVar19;
        }
        goto LAB_03d60ee0;
      }
      lVar19 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b693d0(lVar19,plVar17,lVar9,*(undefined8 *)(puVar12[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar18 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
         )) {
        func_0x04b715c8(lVar19,plVar17,lVar9,*(undefined8 *)(puVar12[7] + 0x48));
        return lVar19;
      }
    }
    else {
      lVar19 = *(long *)(puVar12[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar18 = *plVar17;
        bVar1 = *(byte *)(lVar18 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar12[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar18 = *plVar17;
          bVar1 = *(byte *)(lVar18 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar18 + 0x228))(plVar17,lVar9,*(undefined8 *)(lVar18 + 0x230));
          return lVar19;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar19 = func_0x03281048(plVar17,lVar20);
  *(undefined8 *)(puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar6 + -0xd0) = auVar25;
  lVar9 = *(long *)(lVar19 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c();
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  func_0x03280ab0();
  if (lVar9 == 0) {
    lVar9 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    lVar9 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar20 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    **(long **)(lVar20 + 0xb8) = lVar9;
    lVar19 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar19 + 0xb8),lVar9);
  }
  return lVar9;
}


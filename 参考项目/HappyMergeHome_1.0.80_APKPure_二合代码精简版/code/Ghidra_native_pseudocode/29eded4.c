
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_029fded4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 uVar6;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int extraout_r12;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_029fdfb4 + 0x29fdee8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fdfb8 + 0x29fdefc));
    func_0x01438628(*(undefined4 *)(_UNK_029fdfbc + 0x29fdf08));
    func_0x01438628(*(undefined4 *)(_UNK_029fdfc0 + 0x29fdf14));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2638,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2638,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028bd3c0 + 0x28bd2e0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028bd3c4 + 0x28bd2f4),param_1,0);
      *pcVar9 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&iStack_48,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = iStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&iStack_30,uVar6,0,0);
    piVar1 = (int *)func_0x035daef8(&iStack_30,0,**(undefined4 **)(_UNK_028bd3c8 + 0x28bd3b0));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_029fdfc4 + 0x29fdf6c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_029fdfc8 + 0x29fdf88));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar8 = **(int **)(_UNK_029fdfcc + 0x29fdfa8);
  puVar5 = *(undefined4 **)(iVar8 + 0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam035da2b4 + 0x35da040));
    func_0x024f83cc(*(undefined4 *)(iRam035da2b8 + 0x35da04c));
    func_0x024f83cc(*(undefined4 *)(iRam035da2bc + 0x35da058));
    func_0x024f83cc(*(undefined4 *)(iRam035da2c0 + 0x35da064));
    func_0x024f83cc(*(undefined4 *)(iRam035da2c4 + 0x35da070));
    func_0x024f83cc(*(undefined4 *)(iRam035da2c8 + 0x35da07c));
    func_0x024f83cc(*(undefined4 *)(iRam035da2cc + 0x35da088));
    func_0x024f83cc(*(undefined4 *)(iRam035da2d0 + 0x35da094));
    puVar5 = *(undefined4 **)(iVar8 + 0x1c);
    if (puVar5 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar8);
      puVar5 = *(undefined4 **)(iVar8 + 0x1c);
    }
  }
  uVar10 = *puVar5;
  iVar11 = *(int *)(iVar2 + 0x2c);
  if (*(int *)(**(int **)(iRam035da2d4 + 0x35da0b8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar10 = func_0x05171434(uVar10,0);
  if (iVar11 == 0) {
    func_0x024f83d4();
  }
  iVar11 = func_0x0475399c(iVar11,uVar10,**(undefined4 **)(iRam035da2d8 + 0x35da0fc));
  iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2dc + 0x35da118),0);
  if (iVar3 == 0) {
    iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2e0 + 0x35da144),0);
    if (iVar3 == 0) {
      iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2e4 + 0x35da170),0);
      if (iVar3 == 0) {
        iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2e8 + 0x35da19c),0);
        if (iVar3 == 0) {
          iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2ec + 0x35da1c8),0);
          if (iVar3 == 0) {
            iVar3 = func_0x04f57738(iVar11,**(undefined4 **)(iRam035da2f0 + 0x35da1f8),0);
            uVar13 = iVar3 == 0;
            uVar12 = 1;
            if ((bool)uVar13) {
              func_0x024f83b8(*(undefined4 *)(iRam035da2f4 + 0x35da278));
              uVar10 = func_0x024f83c8();
              uVar6 = func_0x024f83b8(*(undefined4 *)(iRam035da2f8 + 0x35da28c));
              uStack_20 = 0;
              func_0x0509473c(uVar10,uVar6,iVar11,0);
              func_0x024f83c0(uVar10,iVar8);
              uVar14 = func_0x024f83bc();
              iVar3 = (int)((ulonglong)uVar14 >> 0x20);
              iVar2 = (int)uVar14;
              if ((bool)uVar13) {
                unaff_r11 = unaff_r8 - (!(bool)uVar12 + 0xd000000);
                unaff_r8 = unaff_r9 - (!(bool)uVar12 + 0x1d0);
              }
              uStack_24 = 0x35da2b4;
              uStack_2c = 0;
              puVar5 = *(undefined4 **)(iVar3 + 0x1c);
              iStack_38 = iVar8;
              uStack_34 = uVar10;
              iStack_30 = iVar11;
              iStack_28 = unaff_r11;
              if (puVar5 == (undefined4 *)0x0) {
                func_0x024f83cc(*(undefined4 *)(iRam035da598 + 0x35da324));
                func_0x024f83cc(*(undefined4 *)(iRam035da59c + 0x35da330));
                func_0x024f83cc(*(undefined4 *)(iRam035da5a0 + 0x35da33c));
                func_0x024f83cc(*(undefined4 *)(iRam035da5a4 + 0x35da348));
                func_0x024f83cc(*(undefined4 *)(iRam035da5a8 + 0x35da354));
                func_0x024f83cc(*(undefined4 *)(iRam035da5ac + 0x35da360));
                func_0x024f83cc(*(undefined4 *)(iRam035da5b0 + 0x35da36c));
                func_0x024f83cc(*(undefined4 *)(iRam035da5b4 + 0x35da378));
                puVar5 = *(undefined4 **)(iVar3 + 0x1c);
                if (puVar5 == (undefined4 *)0x0) {
                  func_0x024f83f8(iVar3);
                  puVar5 = *(undefined4 **)(iVar3 + 0x1c);
                }
              }
              uVar10 = *puVar5;
              iVar8 = *(int *)(iVar2 + 0x2c);
              if (*(int *)(**(int **)(iRam035da5b8 + 0x35da39c) + 0x74) == 0) {
                func_0x024f83d8();
              }
              uVar10 = func_0x05171434(uVar10,0);
              if (iVar8 == 0) {
                func_0x024f83d4();
              }
              uVar10 = func_0x0475399c(iVar8,uVar10,**(undefined4 **)(iRam035da5bc + 0x35da3e0));
              iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5c0 + 0x35da3fc),0);
              if (iVar8 == 0) {
                iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5c4 + 0x35da428),0);
                if (iVar8 == 0) {
                  iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5c8 + 0x35da454),0);
                  if (iVar8 == 0) {
                    iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5cc + 0x35da480),0);
                    if (iVar8 == 0) {
                      iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5d0 + 0x35da4ac),0);
                      if (iVar8 == 0) {
                        iVar8 = func_0x04f57738(uVar10,**(undefined4 **)(iRam035da5d4 + 0x35da4dc),0
                                               );
                        uVar13 = iVar8 == 0;
                        uVar12 = 1;
                        if ((bool)uVar13) {
                          func_0x024f83b8(*(undefined4 *)(iRam035da5d8 + 0x35da55c));
                          uVar6 = func_0x024f83c8();
                          uVar4 = func_0x024f83b8(*(undefined4 *)(iRam035da5dc + 0x35da570));
                          uStack_40 = 0;
                          func_0x0509473c(uVar6,uVar4,uVar10,0);
                          func_0x024f83c0(uVar6,iVar3);
                          uVar14 = func_0x024f83bc();
                          iVar2 = extraout_r2;
                          if ((bool)uVar13) {
                            unaff_r11 = unaff_r8 - (!(bool)uVar12 + 5);
                            iVar2 = (extraout_r12 - (!(bool)uVar12 + 0x60)) -
                                    (!(bool)uVar12 + 0x2400);
                          }
                          uStack_44 = 0x35da598;
                          iStack_48 = unaff_r11;
                          if (*(int *)(extraout_r3 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),iVar2,0);
                          iVar2 = **(int **)(extraout_r3 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          if (*(int *)(extraout_r3_00 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_00);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_00,0);
                          iVar2 = **(int **)(extraout_r3_00 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          if (*(int *)(extraout_r3_01 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_01);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_01,0);
                          iVar2 = **(int **)(extraout_r3_01 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          if (*(int *)(extraout_r3_02 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_02);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_02,0);
                          iVar2 = **(int **)(extraout_r3_02 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          if (*(int *)(extraout_r3_03 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_03);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_03,0);
                          iVar2 = **(int **)(extraout_r3_03 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          if (*(int *)(extraout_r3_04 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_04);
                          }
                          piVar1 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_04,0);
                          iVar2 = **(int **)(extraout_r3_04 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            puVar5 = (undefined4 *)func_0x024f83d0(piVar1);
                            piVar1 = (int *)puVar5[1];
                            *(undefined4 *)uVar14 = *puVar5;
                            ((undefined4 *)uVar14)[1] = piVar1;
                            return piVar1;
                          }
                          uVar14 = func_0x024f84a0(piVar1,iVar2);
                          piVar1 = (int *)uVar14;
                          if (*(int *)(extraout_r3_05 + 0x1c) == 0) {
                            func_0x024f83f8(extraout_r3_05);
                          }
                          piVar7 = (int *)func_0x04ee934c((int)((ulonglong)uVar14 >> 0x20),
                                                          extraout_r2_05,0);
                          iVar2 = **(int **)(extraout_r3_05 + 0x1c);
                          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                            iVar2 = func_0x024f83fc(iVar2);
                          }
                          if (piVar7 == (int *)0x0) {
                            func_0x024f83d4();
                          }
                          if (*(int *)(*piVar7 + 0x20) == *(int *)(iVar2 + 0x20)) {
                            piVar7 = (int *)func_0x024f83d0(piVar7);
                          }
                          else {
                            func_0x024f84a0(piVar7,iVar2);
                            piVar7 = (int *)0x0;
                          }
                          iVar2 = piVar7[1];
                          iVar8 = piVar7[2];
                          iVar11 = piVar7[3];
                          *piVar1 = *piVar7;
                          piVar1[1] = iVar2;
                          piVar1[2] = iVar8;
                          piVar1[3] = iVar11;
                          return piVar7;
                        }
                        iVar8 = *(int *)(iVar3 + 0x1c);
                        piVar1 = *(int **)(iVar2 + 0x28);
                      }
                      else {
                        iVar8 = *(int *)(iVar3 + 0x1c);
                        piVar1 = *(int **)(iVar2 + 0x24);
                      }
                    }
                    else {
                      iVar8 = *(int *)(iVar3 + 0x1c);
                      piVar1 = *(int **)(iVar2 + 0x20);
                    }
                  }
                  else {
                    iVar8 = *(int *)(iVar3 + 0x1c);
                    piVar1 = *(int **)(iVar2 + 0x1c);
                  }
                }
                else {
                  iVar8 = *(int *)(iVar3 + 0x1c);
                  piVar1 = *(int **)(iVar2 + 0x18);
                }
              }
              else {
                iVar8 = *(int *)(iVar3 + 0x1c);
                piVar1 = *(int **)(iVar2 + 0x14);
              }
              iVar2 = *(int *)(iVar8 + 4);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x024f83fc(iVar2);
              }
              piVar7 = (int *)0x0;
              if (piVar1 != (int *)0x0) {
                if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
                   (piVar7 = piVar1,
                   *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) !=
                   iVar2)) {
                  piVar7 = (int *)0x0;
                }
              }
              return piVar7;
            }
            iVar8 = *(int *)(iVar8 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x24);
          }
        }
        else {
          iVar8 = *(int *)(iVar8 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
        }
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
      }
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x18);
    }
  }
  else {
    iVar8 = *(int *)(iVar8 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x14);
  }
  iVar2 = *(int *)(iVar8 + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x024f83fc(iVar2);
  }
  piVar7 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
       (piVar7 = piVar1,
       *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      piVar7 = (int *)0x0;
    }
  }
  return piVar7;
}


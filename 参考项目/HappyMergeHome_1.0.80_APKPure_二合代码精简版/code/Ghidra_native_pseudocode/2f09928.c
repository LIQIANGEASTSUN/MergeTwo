
/* WARNING: Removing unreachable block (ram,0x036175bc) */
/* WARNING: Removing unreachable block (ram,0x03616d28) */
/* WARNING: Removing unreachable block (ram,0x036166ac) */
/* WARNING: Removing unreachable block (ram,0x036170d4) */
/* WARNING: Removing unreachable block (ram,0x05332a70) */
/* WARNING: Removing unreachable block (ram,0x03616cb8) */
/* WARNING: Removing unreachable block (ram,0x03616cd4) */
/* WARNING: Removing unreachable block (ram,0x03616cdc) */
/* WARNING: Removing unreachable block (ram,0x03616d04) */
/* WARNING: Removing unreachable block (ram,0x03616ce8) */
/* WARNING: Removing unreachable block (ram,0x03616cf4) */
/* WARNING: Removing unreachable block (ram,0x03616d10) */
/* WARNING: Removing unreachable block (ram,0x03616d5c) */
/* WARNING: Removing unreachable block (ram,0x036166c8) */
/* WARNING: Removing unreachable block (ram,0x036175d4) */
/* WARNING: Removing unreachable block (ram,0x036175f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02f19928(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar10;
  uint extraout_r2_01;
  int extraout_r2_02;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int extraout_r3;
  int *piVar14;
  int *unaff_r4;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  int unaff_r7;
  code *pcVar22;
  uint uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  uint *puVar26;
  undefined8 uVar27;
  uint auStack_80 [8];
  int aiStack_60 [4];
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar17 = (char *)(_UNK_02f19acc + 0x2f1993c);
  if (*pcVar17 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f19ad0 + 0x2f19950));
    func_0x01438628(*(undefined4 *)(_UNK_02f19ad4 + 0x2f1995c));
    func_0x01438628(*(undefined4 *)(_UNK_02f19ad8 + 0x2f19968));
    func_0x01438628(*(undefined4 *)(_UNK_02f19adc + 0x2f19974));
    func_0x01438628(*(undefined4 *)(_UNK_02f19ae0 + 0x2f19980));
    *pcVar17 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x42e3,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x42e3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    pcVar17 = (char *)(_UNK_028d7994 + 0x28d78b4);
    if (*pcVar17 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028d7998 + 0x28d78c8),param_1,0);
      *pcVar17 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0);
    iStack_30 = iStack_48;
    uStack_2c = piStack_44;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar16 = *(int *)(iVar3 + 8);
    uVar19 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    uVar11 = 2;
    if (iVar3 == 0) {
      uVar11 = 1;
    }
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)0x0;
    func_0x024f56d0(iVar16,uVar19,&iStack_30,uVar11);
    piVar2 = (int *)func_0x035daef8(&iStack_30,0,**(undefined4 **)(_UNK_028d799c + 0x28d7984));
    return piVar2;
  }
  iVar3 = FUN_02f196e8(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02f19ae4 + 0x2f199f0);
  iVar3 = *(int *)(iVar3 + 0x18);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar20 = *(undefined4 **)(_UNK_02f19ae8 + 0x2f19a10);
  iVar16 = func_0x04e4a028(*puVar20);
  if (iVar16 == 0) {
    func_0x014388e4();
  }
  iVar16 = *(int *)(iVar16 + 0x18);
  if (iVar16 == 0) {
    func_0x014388e4();
  }
  iVar16 = *(int *)(iVar16 + 0xc);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(*puVar20);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar3 < iVar16) {
    iVar16 = *(int *)(iVar4 + 0x18);
    iVar3 = FUN_02f196e8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar15 = *(uint *)(iVar3 + 0x18);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar16 + 0xc) <= uVar15) {
      func_0x05187824(0,uVar15,**(undefined4 **)(_UNK_02f19aec + 0x2f19aa8));
    }
    iVar3 = *(int *)(iVar16 + 8);
    if (iVar3 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar15) {
      func_0x034a8c14();
    }
    return *(int **)(iVar3 + uVar15 * 4 + 0x10);
  }
  iVar3 = **(int **)(_UNK_02f19af0 + 0x2f19ac0);
  piVar2 = *(int **)(iVar4 + 0x18);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(iRam036166c0 + 0x36161b4));
    func_0x024f83cc(*(undefined4 *)(iRam036166c4 + 0x36161c0));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x024f83f8(iVar3);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar19 = func_0x024f83b8(*(undefined4 *)(iRam036166d4 + 0x36165dc));
    uVar19 = func_0x053314dc(uVar19,0);
    func_0x024f83c0(uVar19,iVar3);
    uVar27 = func_0x024f83bc();
    uVar19 = (undefined4)uVar27;
    if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
      if (unaff_r4 != (int *)0x0) {
        iVar16 = *unaff_r4;
        uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
        if (uVar15 != 0) {
          piVar2 = (int *)(*(int *)(iVar16 + 0x58) + 4);
          do {
            unaff_r7 = piVar2[-1];
            if (unaff_r7 == **(int **)(iRam036166d0 + 0x361664c)) {
              puVar20 = (undefined4 *)(iVar16 + *piVar2 * 8 + 0xc0);
              goto LAB_03616694;
            }
            uVar15 = uVar15 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar15 != 0);
        }
        puVar20 = (undefined4 *)func_0x024f8424(unaff_r4,**(int **)(iRam036166d0 + 0x361664c),0);
LAB_03616694:
        (*(code *)*puVar20)(unaff_r4,puVar20[1]);
      }
      uVar25 = 1;
      uVar24 = 1;
      func_0x024f842c(uVar19);
      uVar27 = func_0x024f7a70();
      aiStack_60[3] = (int)((ulonglong)uVar27 >> 0x20);
      piVar2 = (int *)uVar27;
      if ((bool)uVar24) {
                    /* WARNING: Could not recover jumptable at 0x036166c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar2 = (int *)(*(code *)((int)unaff_r4 - (!(bool)uVar25 + 0x1c)))();
        return piVar2;
      }
      uStack_2c = 0;
      piStack_44 = (int *)**(int **)(iRam03616d3c + 0x36166fc);
      iVar16 = *(int *)(extraout_r2 + 0x1c);
      iStack_38 = iVar3;
      uStack_34 = uVar19;
      iStack_30 = unaff_r7;
      if (iVar16 == 0) {
        func_0x024f83cc(*(undefined4 *)(iRam03616d40 + 0x3616718));
        func_0x024f83cc(*(undefined4 *)(iRam03616d44 + 0x3616724));
        iVar16 = *(int *)(extraout_r2 + 0x1c);
        if (iVar16 == 0) {
          func_0x024f83f8(extraout_r2);
          iVar16 = *(int *)(extraout_r2 + 0x1c);
        }
      }
      uVar23 = *(uint *)(*(int *)(iVar16 + 0x14) + 0x84);
      uVar15 = uVar23 + 7 & 0xfffffff8;
      piVar5 = (int *)((int)aiStack_60 - uVar15);
      iVar4 = (int)piVar5 - uVar15;
      func_0x024f8420(iVar4,uVar23);
      iVar3 = iVar4 - uVar15;
      aiStack_60[1] = iVar3;
      func_0x024f8420(iVar3,uVar23);
      iVar3 = iVar3 - uVar15;
      aiStack_60[2] = iVar3;
      func_0x024f8420(iVar3,uVar23);
      if (piVar2 == (int *)0x0) {
        uVar19 = func_0x024f83b8(*(undefined4 *)(iRam03616d60 + 0x3616c5c));
        uVar19 = func_0x053314dc(uVar19,0);
        func_0x024f83c0(uVar19,extraout_r2);
        uVar27 = func_0x024f83bc();
        uVar19 = (undefined4)uVar27;
        if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
          uVar25 = 1;
          uVar24 = 1;
          func_0x024f842c(uVar19);
          uVar27 = func_0x024f7a70();
          iVar16 = (int)((ulonglong)uVar27 >> 0x20);
          piVar2 = (int *)uVar27;
          if ((bool)uVar24) {
                    /* WARNING: Could not recover jumptable at 0x03616d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar2 = (int *)(*(code *)(uVar15 - (!(bool)uVar25 + 0x2e0)))();
            return piVar2;
          }
          *(undefined4 *)(iVar3 + -4) = 0x3616d3c;
          *(undefined1 **)(iVar3 + -8) = &stack0xffffffe0;
          *(uint *)(iVar3 + -0xc) = extraout_r2;
          *(undefined4 *)(iVar3 + -0x10) = 0;
          *(undefined4 *)(iVar3 + -0x14) = 0;
          *(int **)(iVar3 + -0x18) = piVar5;
          *(undefined4 *)(iVar3 + -0x1c) = uVar19;
          puVar26 = (uint *)(iVar3 + -0x20);
          *puVar26 = uVar15;
          if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
            func_0x024f83cc(*(undefined4 *)(iRam036170e8 + 0x3616d8c));
            func_0x024f83cc(*(undefined4 *)(iRam036170ec + 0x3616d98));
            if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
              func_0x024f83f8(extraout_r2_00);
            }
          }
          if (piVar2 == (int *)0x0) {
            uVar19 = *(undefined4 *)(iRam036170f0 + 0x3617000);
          }
          else {
            if (iVar16 != 0) {
              iVar3 = **(int **)(extraout_r2_00 + 0x1c);
              if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = func_0x024f83fc(iVar3);
              }
              iVar4 = *piVar2;
              uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
              if (uVar15 != 0) {
                piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                do {
                  if (piVar5[-1] == iVar3) {
                    puVar20 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
                    goto LAB_03616e28;
                  }
                  uVar15 = uVar15 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar15 != 0);
              }
              puVar20 = (undefined4 *)func_0x024f8424(piVar2,iVar3,0);
LAB_03616e28:
              piVar2 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
              piVar12 = *(int **)(iRam036170f8 + 0x3616e4c);
              piVar5 = (int *)0x0;
LAB_03616e48:
              if (piVar2 == (int *)0x0) {
                func_0x024f83d4();
              }
              iVar3 = *piVar2;
              uVar15 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar15 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == *piVar12) {
                    puVar20 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_03616ea4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar15 != 0);
              }
              puVar20 = (undefined4 *)func_0x024f8424(piVar2,*piVar12,0);
LAB_03616ea4:
              iVar3 = (*(code *)*puVar20)(piVar2,puVar20[1]);
              if (iVar3 != 0) {
                if (piVar2 == (int *)0x0) {
                  func_0x024f83d4();
                }
                iVar3 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 0x10);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x024f83fc(iVar3);
                }
                iVar4 = *piVar2;
                uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar15 != 0) {
                  piVar13 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar13[-1] == iVar3) {
                      puVar20 = (undefined4 *)(iVar4 + *piVar13 * 8 + 0xc0);
                      goto LAB_03616f34;
                    }
                    uVar15 = uVar15 - 1;
                    piVar13 = piVar13 + 2;
                  } while (uVar15 != 0);
                }
                puVar20 = (undefined4 *)func_0x024f8424(piVar2,iVar3,0);
LAB_03616f34:
                piVar13 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
                iVar3 = (**(code **)(iVar16 + 0xc))
                                  (*(undefined4 *)(iVar16 + 0x20),piVar13,
                                   *(undefined4 *)(iVar16 + 0x14));
                if (iVar3 != 0) {
                  piVar5 = piVar13;
                }
                goto LAB_03616e48;
              }
              iVar3 = 0;
              goto LAB_03616f6c;
            }
            uVar19 = *(undefined4 *)(iRam036170f4 + 0x361700c);
          }
          uVar19 = func_0x024f83b8(uVar19);
          uVar19 = func_0x053314dc(uVar19,0);
          func_0x024f83c0(uVar19,extraout_r2_00);
          uVar27 = func_0x024f83bc();
          uVar15 = (uint)uVar27;
          if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
            if (piVar2 != (int *)0x0) {
              iVar3 = *piVar2;
              uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar10 != 0) {
                piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  piVar5 = (int *)piVar12[-1];
                  if (piVar5 == (int *)**(uint **)(iRam03617100 + 0x3617074)) {
                    puVar20 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xc0);
                    goto LAB_036170bc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar12 = piVar12 + 2;
                } while (uVar10 != 0);
              }
              puVar20 = (undefined4 *)
                        func_0x024f8424(piVar2,(int *)**(uint **)(iRam03617100 + 0x3617074),0);
LAB_036170bc:
              (*(code *)*puVar20)(piVar2,puVar20[1]);
            }
            uVar25 = 1;
            uVar24 = 1;
            func_0x024f842c(uVar15);
            uVar10 = 0x36170e8;
            uVar27 = func_0x024f7a70();
            if ((bool)uVar24) {
              uVar10 = (int)piVar2 - (!(bool)uVar25 + 0x40000002);
              puVar26 = (uint *)((int)piVar2 - (!(bool)uVar25 + 0x100));
            }
            puVar26[-1] = uVar10;
            puVar26[-2] = (uint)&stack0xffffffe0;
            puVar26[-3] = uVar23;
            puVar26[-4] = extraout_r2;
            puVar26[-5] = extraout_r2_00;
            puVar26[-6] = uVar15;
            puVar26[-7] = (uint)piVar5;
            puVar26[-8] = 0;
            puVar26[-9] = (uint)piVar2;
            puVar26[-0x11] = extraout_r2_01;
            puVar26[-0xe] = (uint)((ulonglong)uVar27 >> 0x20);
            puVar26[-0x10] = (uint)uVar27;
            puVar26[-0xb] = **(uint **)(iRam036175d0 + 0x361712c);
            pcVar22 = *(code **)(extraout_r3 + 0x1c);
            if (pcVar22 == (code *)0x0) {
              func_0x024f83cc(*(undefined4 *)(iRam036175d4 + 0x3617148));
              func_0x024f83cc(*(undefined4 *)(iRam036175d8 + 0x3617154));
              pcVar22 = *(code **)(extraout_r3 + 0x1c);
              if (pcVar22 == (code *)0x0) {
                func_0x024f83f8(extraout_r3);
                pcVar22 = *(code **)(extraout_r3 + 0x1c);
              }
            }
            iVar3 = *(int *)(*(int *)(pcVar22 + 8) + 0x84);
            uVar23 = iVar3 + 7U & 0xfffffff8;
            uVar10 = (int)puVar26 + (-0x48 - uVar23);
            puVar20 = (undefined4 *)(uVar10 - uVar23);
            uVar15 = (int)puVar20 - uVar23;
            puVar26[-0xf] = uVar15;
            func_0x024f8420(uVar15,iVar3);
            iVar16 = uVar15 - uVar23;
            func_0x024f8420(iVar16,iVar3);
            piVar2 = (int *)puVar26[-0x10];
            if (piVar2 == (int *)0x0) goto LAB_036174dc;
            if (puVar26[-0xe] == 0) {
              uVar19 = *(undefined4 *)(iRam036175e0 + 0x36174f4);
              goto LAB_036174f0;
            }
            func_0x024f8420(puVar26[-0xf],iVar3);
            iVar4 = *(int *)pcVar22;
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x024f83fc(iVar4);
            }
            iVar6 = *piVar2;
            uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
            if (uVar15 != 0) {
              piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
              do {
                if (piVar2[-1] == iVar4) {
                  uVar15 = puVar26[-0x10];
                  puVar7 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
                  goto LAB_03617248;
                }
                uVar15 = uVar15 - 1;
                piVar2 = piVar2 + 2;
              } while (uVar15 != 0);
            }
            uVar15 = puVar26[-0x10];
            puVar7 = (undefined4 *)func_0x024f8424(uVar15,iVar4,0);
LAB_03617248:
            piVar2 = (int *)(*(code *)*puVar7)(uVar15,puVar7[1]);
LAB_0361725c:
            if (piVar2 == (int *)0x0) {
              func_0x024f83d4();
            }
            iVar4 = *piVar2;
            uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar15 != 0) {
              piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                pcVar22 = (code *)piVar5[-1];
                if (pcVar22 == (code *)**(undefined4 **)(iRam036175e4 + 0x3617278)) {
                  puVar7 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
                  goto LAB_036172c0;
                }
                uVar15 = uVar15 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined4 *)
                     func_0x024f8424(piVar2,(code *)**(undefined4 **)(iRam036175e4 + 0x3617278),0);
LAB_036172c0:
            iVar4 = (*(code *)*puVar7)(piVar2,puVar7[1]);
            if (iVar4 != 0) {
              if (piVar2 == (int *)0x0) {
                func_0x024f83d4();
              }
              iVar4 = *(int *)(*(int *)(extraout_r3 + 0x1c) + 0x10);
              if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = func_0x024f83fc(iVar4);
              }
              iVar6 = *piVar2;
              uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
              if (uVar15 != 0) {
                piVar5 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                do {
                  if (piVar5[-1] == iVar4) {
                    iVar4 = iVar6 + *piVar5 * 8 + 0xc0;
                    goto LAB_03617350;
                  }
                  uVar15 = uVar15 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar15 != 0);
              }
              iVar4 = func_0x024f8424(piVar2,iVar4,0);
LAB_03617350:
              iVar4 = *(int *)(iVar4 + 4);
              puVar26[-0xd] = uVar10;
              uVar19 = *(undefined4 *)(iVar4 + 4);
              pcVar22 = *(code **)(iVar4 + 8);
              *(uint *)(iVar16 + -8) = uVar10;
              (*pcVar22)(uVar19,iVar4,piVar2,puVar26 + -0xd);
              func_0x024f870c(iVar16,uVar10,iVar3);
              func_0x024f870c(puVar20,iVar16,iVar3);
              puVar9 = *(undefined4 **)(*(int *)(extraout_r3 + 0x1c) + 0x18);
              puVar7 = puVar20;
              if (-1 < *(int *)(*(int *)(*(int *)(extraout_r3 + 0x1c) + 8) + 0x14)) {
                puVar7 = (undefined4 *)*puVar20;
              }
              uVar19 = *puVar9;
              pcVar22 = (code *)puVar9[2];
              puVar26[-0xd] = (uint)puVar7;
              *(int *)(iVar16 + -8) = (int)puVar26 + -0x2d;
              (*pcVar22)(uVar19,puVar9,puVar26[-0xe],puVar26 + -0xd);
              if (*(char *)((int)puVar26 + -0x2d) != '\0') {
                func_0x024f870c(uVar10,iVar16,iVar3);
                func_0x024f870c(puVar26[-0xf],uVar10,iVar3);
              }
              goto LAB_0361725c;
            }
            iVar4 = 10;
            iVar6 = 0;
            do {
              if (piVar2 != (int *)0x0) {
                iVar8 = *piVar2;
                uVar15 = (uint)*(ushort *)(iVar8 + 0xb6);
                if (uVar15 != 0) {
                  piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                  do {
                    pcVar22 = (code *)piVar5[-1];
                    if (pcVar22 == (code *)**(undefined4 **)(iRam036175e8 + 0x3617428)) {
                      puVar20 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
                      goto LAB_03617470;
                    }
                    uVar15 = uVar15 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar15 != 0);
                }
                puVar20 = (undefined4 *)
                          func_0x024f8424(piVar2,(code *)**(undefined4 **)(iRam036175e8 + 0x3617428)
                                          ,0);
LAB_03617470:
                (*(code *)*puVar20)(piVar2,puVar20[1]);
              }
              if (iVar6 != 0) {
                func_0x024f8428(iVar6);
              }
              if (iVar4 == 10 || iVar4 == 0) {
                func_0x024f870c(uVar10,puVar26[-0xf],iVar3);
                func_0x024f870c(puVar26[-0x11],uVar10,iVar3);
              }
              if ((int *)**(uint **)(iRam036175ec + 0x36174c8) == (int *)puVar26[-0xb]) {
                return (int *)**(uint **)(iRam036175ec + 0x36174c8);
              }
              func_0x024f840c();
LAB_036174dc:
              uVar19 = *(undefined4 *)(iRam036175dc + 0x36174e8);
LAB_036174f0:
              uVar19 = func_0x024f83b8(uVar19);
              uVar19 = func_0x053314dc(uVar19,0);
              func_0x024f83c0(uVar19,extraout_r3);
              uVar27 = func_0x024f83bc();
              uVar19 = (undefined4)uVar27;
              if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_03617544;
              piVar5 = (int *)func_0x024f86ec(uVar19);
              iVar6 = *piVar5;
              iVar4 = 0;
              func_0x024f86fc();
            } while( true );
          }
          piVar12 = (int *)func_0x024f86ec(uVar15);
          iVar3 = *piVar12;
          func_0x024f86fc();
LAB_03616f6c:
          if (piVar2 != (int *)0x0) {
            iVar16 = *piVar2;
            uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
            if (uVar15 != 0) {
              piVar12 = (int *)(*(int *)(iVar16 + 0x58) + 4);
              do {
                if (piVar12[-1] == **(int **)(iRam036170fc + 0x3616f84)) {
                  puVar20 = (undefined4 *)(iVar16 + *piVar12 * 8 + 0xc0);
                  goto LAB_03616fcc;
                }
                uVar15 = uVar15 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar15 != 0);
            }
            puVar20 = (undefined4 *)func_0x024f8424(piVar2,**(int **)(iRam036170fc + 0x3616f84),0);
LAB_03616fcc:
            (*(code *)*puVar20)(piVar2,puVar20[1]);
          }
          if (iVar3 != 0) {
            func_0x024f8428(iVar3);
          }
          return piVar5;
        }
        piVar2 = (int *)func_0x024f86ec(uVar19);
        iVar16 = *piVar2;
        iVar3 = 0;
        func_0x024f86fc();
        piVar2 = (int *)0x0;
LAB_03616b58:
        if (piVar2 != (int *)0x0) {
          iVar4 = *piVar2;
          uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar15 != 0) {
            piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar12[-1] == **(int **)(iRam03616d54 + 0x3616b70)) {
                puVar20 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
                goto LAB_03616bb8;
              }
              uVar15 = uVar15 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar15 != 0);
          }
          puVar20 = (undefined4 *)func_0x024f8424(piVar2,**(int **)(iRam03616d54 + 0x3616b70),0);
LAB_03616bb8:
          (*(code *)*puVar20)(piVar2,puVar20[1]);
        }
        if (iVar16 != 0) {
          func_0x024f8428(iVar16);
        }
        piVar2 = *(int **)(iRam03616d58 + 0x3616be8);
        if (iVar3 != 0) {
          iVar16 = aiStack_60[1];
          if (iVar3 == 9) goto LAB_03616c10;
          if (iVar3 != 6) goto LAB_03616c2c;
        }
      }
      else {
        iVar16 = *(int *)(iVar16 + 4);
        if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
          iVar16 = func_0x024f83fc(iVar16);
        }
        piVar12 = (int *)func_0x024f83e4(piVar2,iVar16);
        if (piVar12 == (int *)0x0) {
          iVar16 = **(int **)(extraout_r2 + 0x1c);
          if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
            iVar16 = func_0x024f83fc(iVar16);
          }
          iVar6 = *piVar2;
          uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar15 != 0) {
            piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar12[-1] == iVar16) {
                puVar20 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
                goto LAB_0361696c;
              }
              uVar15 = uVar15 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar15 != 0);
          }
          puVar20 = (undefined4 *)func_0x024f8424(piVar2,iVar16,0);
LAB_0361696c:
          piVar2 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
          if (piVar2 == (int *)0x0) {
            func_0x024f83d4();
          }
          iVar16 = *piVar2;
          uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
          if (uVar15 != 0) {
            piVar12 = (int *)(*(int *)(iVar16 + 0x58) + 4);
            do {
              if (piVar12[-1] == **(int **)(iRam03616d4c + 0x361699c)) {
                puVar20 = (undefined4 *)(iVar16 + *piVar12 * 8 + 0xc0);
                goto LAB_036169e4;
              }
              uVar15 = uVar15 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar15 != 0);
          }
          puVar20 = (undefined4 *)func_0x024f8424(piVar2,**(int **)(iRam03616d4c + 0x361699c),0);
LAB_036169e4:
          iVar16 = (*(code *)*puVar20)(piVar2,puVar20[1]);
          if (iVar16 == 0) {
            iVar3 = 6;
          }
          else {
            do {
              if (piVar2 == (int *)0x0) {
                func_0x024f83d4();
              }
              iVar16 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 0x1c);
              if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
                iVar16 = func_0x024f83fc(iVar16);
              }
              iVar6 = *piVar2;
              uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
              if (uVar15 != 0) {
                piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                do {
                  if (piVar12[-1] == iVar16) {
                    iVar16 = iVar6 + *piVar12 * 8 + 0xc0;
                    goto LAB_03616a78;
                  }
                  uVar15 = uVar15 - 1;
                  piVar12 = piVar12 + 2;
                } while (uVar15 != 0);
              }
              iVar16 = func_0x024f8424(piVar2,iVar16,0);
LAB_03616a78:
              iVar16 = *(int *)(iVar16 + 4);
              uVar19 = *(undefined4 *)(iVar16 + 4);
              pcVar22 = *(code **)(iVar16 + 8);
              piStack_50 = piVar5;
              *(int **)(iVar3 + -8) = piVar5;
              (*pcVar22)(uVar19,iVar16,piVar2,&piStack_50);
              func_0x024f870c(iVar4,piVar5,uVar23);
              if (piVar2 == (int *)0x0) {
                func_0x024f83d4();
              }
              iVar16 = *piVar2;
              uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
              if (uVar15 != 0) {
                piVar12 = (int *)(*(int *)(iVar16 + 0x58) + 4);
                do {
                  if (piVar12[-1] == **(int **)(iRam03616d50 + 0x3616ac8)) {
                    puVar20 = (undefined4 *)(iVar16 + *piVar12 * 8 + 0xc0);
                    goto LAB_03616b10;
                  }
                  uVar15 = uVar15 - 1;
                  piVar12 = piVar12 + 2;
                } while (uVar15 != 0);
              }
              puVar20 = (undefined4 *)func_0x024f8424(piVar2,**(int **)(iRam03616d50 + 0x3616ac8),0)
              ;
LAB_03616b10:
              iVar16 = (*(code *)*puVar20)(piVar2,puVar20[1]);
            } while (iVar16 != 0);
            func_0x024f870c(piVar5,iVar4,uVar23);
            func_0x024f870c(aiStack_60[1],piVar5,uVar23);
            iVar3 = 9;
          }
          iVar16 = 0;
          goto LAB_03616b58;
        }
        iVar16 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 8);
        if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
          iVar16 = func_0x024f83fc(iVar16);
        }
        piVar2 = *(int **)(iRam03616d48 + 0x36167f4);
        iVar4 = *piVar12;
        uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar13[-1] == iVar16) {
              puVar20 = (undefined4 *)(iVar4 + *piVar13 * 8 + 0xc0);
              goto LAB_0361689c;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar15 != 0);
        }
        puVar20 = (undefined4 *)func_0x024f8424(piVar12,iVar16,0);
LAB_0361689c:
        iVar16 = (*(code *)*puVar20)(piVar12,puVar20[1]);
        if (0 < iVar16) {
          iVar4 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          iVar6 = aiStack_60[3];
          iStack_48 = iVar16 + -1;
          iVar16 = *piVar12;
          uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
          if (uVar15 != 0) {
            piVar13 = (int *)(*(int *)(iVar16 + 0x58) + 4);
            do {
              if (piVar13[-1] == iVar4) {
                iVar16 = iVar16 + *piVar13 * 8 + 0xc0;
                goto LAB_03616930;
              }
              uVar15 = uVar15 - 1;
              piVar13 = piVar13 + 2;
            } while (uVar15 != 0);
          }
          iVar16 = func_0x024f8424(piVar12,iVar4,0);
LAB_03616930:
          piStack_50 = &iStack_48;
          iVar16 = *(int *)(iVar16 + 4);
          uVar19 = *(undefined4 *)(iVar16 + 4);
          pcVar22 = *(code **)(iVar16 + 8);
          piStack_4c = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          (*pcVar22)(uVar19,iVar16,piVar12,&piStack_50);
          goto LAB_03616c1c;
        }
      }
      iVar16 = aiStack_60[2];
      func_0x024f8420(aiStack_60[2],uVar23);
LAB_03616c10:
      while( true ) {
        func_0x024f870c(piVar5,iVar16,uVar23);
        iVar6 = aiStack_60[3];
LAB_03616c1c:
        func_0x024f870c(iVar6,piVar5,uVar23);
LAB_03616c2c:
        if ((int *)*piVar2 == piStack_44) break;
        func_0x024f840c();
        iVar16 = aiStack_60[1];
      }
      return (int *)*piVar2;
    }
    piVar2 = (int *)func_0x024f86ec(uVar19);
    iVar16 = *piVar2;
    iVar3 = 0;
    func_0x024f86fc();
  }
  else {
    iVar16 = *(int *)(*(int *)(iVar3 + 0x1c) + 4);
    if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
      iVar16 = func_0x024f83fc(iVar16);
    }
    piVar5 = (int *)func_0x024f83e4(piVar2,iVar16);
    if (piVar5 != (int *)0x0) {
      iVar16 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
      if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
        iVar16 = func_0x024f83fc(iVar16);
      }
      iVar4 = *piVar5;
      uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar15 != 0) {
        piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar16) {
            puVar20 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
            goto LAB_036162dc;
          }
          uVar15 = uVar15 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined4 *)func_0x024f8424(piVar5,iVar16,0);
LAB_036162dc:
      iVar16 = (*(code *)*puVar20)(piVar5,puVar20[1]);
      if (iVar16 < 1) {
        return (int *)0x0;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x024f83fc(iVar3);
      }
      iVar4 = *piVar5;
      uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar15 != 0) {
        piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar3) {
            puVar20 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
            goto LAB_03616370;
          }
          uVar15 = uVar15 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined4 *)func_0x024f8424(piVar5,iVar3,0);
LAB_03616370:
                    /* WARNING: Could not recover jumptable at 0x03616384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)*puVar20)(piVar5,iVar16 + -1,puVar20[1]);
      return piVar2;
    }
    iVar16 = **(int **)(iVar3 + 0x1c);
    if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
      iVar16 = func_0x024f83fc(iVar16);
    }
    iVar4 = *piVar2;
    uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar15 != 0) {
      piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar16) {
          puVar20 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
          goto LAB_03616394;
        }
        uVar15 = uVar15 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x024f8424(piVar2,iVar16,0);
LAB_03616394:
    unaff_r4 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
    if (unaff_r4 == (int *)0x0) {
      func_0x024f83d4();
    }
    iVar16 = *unaff_r4;
    piVar2 = *(int **)(iRam036166c8 + 0x36163c4);
    uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
    iVar4 = *piVar2;
    if (uVar15 != 0) {
      piVar5 = (int *)(*(int *)(iVar16 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar4) {
          puVar20 = (undefined4 *)(iVar16 + *piVar5 * 8 + 0xc0);
          goto LAB_0361640c;
        }
        uVar15 = uVar15 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x024f8424(unaff_r4,iVar4,0);
LAB_0361640c:
    iVar16 = (*(code *)*puVar20)(unaff_r4,puVar20[1]);
    if (iVar16 != 0) {
      do {
        if (unaff_r4 == (int *)0x0) {
          func_0x024f83d4();
        }
        iVar16 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x1c);
        if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
          iVar16 = func_0x024f83fc(iVar16);
        }
        iVar4 = *unaff_r4;
        uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar15 != 0) {
          piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar5[-1] == iVar16) {
              puVar20 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
              goto LAB_0361649c;
            }
            uVar15 = uVar15 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar15 != 0);
        }
        puVar20 = (undefined4 *)func_0x024f8424(unaff_r4,iVar16,0);
LAB_0361649c:
        piVar5 = (int *)(*(code *)*puVar20)(unaff_r4,puVar20[1]);
        if (unaff_r4 == (int *)0x0) {
          func_0x024f83d4();
        }
        iVar16 = *unaff_r4;
        iVar4 = *piVar2;
        uVar15 = (uint)*(ushort *)(iVar16 + 0xb6);
        if (uVar15 != 0) {
          piVar12 = (int *)(*(int *)(iVar16 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar4) {
              puVar20 = (undefined4 *)(iVar16 + *piVar12 * 8 + 0xc0);
              goto LAB_0361650c;
            }
            uVar15 = uVar15 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar15 != 0);
        }
        puVar20 = (undefined4 *)func_0x024f8424(unaff_r4,iVar4,0);
LAB_0361650c:
        iVar16 = (*(code *)*puVar20)(unaff_r4,puVar20[1]);
      } while (iVar16 != 0);
      iVar3 = 9;
      iVar16 = 0;
      goto LAB_0361653c;
    }
    iVar16 = 0;
    iVar3 = 6;
  }
  piVar5 = (int *)0x0;
LAB_0361653c:
  if (unaff_r4 != (int *)0x0) {
    iVar4 = *unaff_r4;
    uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar15 != 0) {
      piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(iRam036166cc + 0x3616554)) {
          puVar20 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
          goto LAB_0361659c;
        }
        uVar15 = uVar15 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x024f8424(unaff_r4,**(int **)(iRam036166cc + 0x3616554),0);
LAB_0361659c:
    (*(code *)*puVar20)(unaff_r4,puVar20[1]);
  }
  if (iVar16 != 0) {
    func_0x024f8428(iVar16);
  }
  if (iVar3 == 6 || iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  return piVar5;
LAB_03617544:
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    uVar15 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar15 != 0) {
      piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        pcVar22 = (code *)piVar5[-1];
        if (pcVar22 == (code *)**(undefined4 **)(iRam036175f0 + 0x361755c)) {
          puVar20 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
          goto LAB_036175a4;
        }
        uVar15 = uVar15 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)
              func_0x024f8424(piVar2,(code *)**(undefined4 **)(iRam036175f0 + 0x361755c),0);
LAB_036175a4:
    (*(code *)*puVar20)(piVar2,puVar20[1]);
  }
  uVar25 = 1;
  uVar24 = 1;
  func_0x024f842c(uVar19);
  uVar27 = func_0x024f7a70();
                    /* WARNING: Could not recover jumptable at 0x036175d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)uVar24) {
    piVar2 = (int *)(*(code *)((int)piVar2 - (!(bool)uVar25 + 0x74000)))();
    return piVar2;
  }
  *(undefined4 *)(iVar16 + -4) = 0x36175d0;
  *(uint *)(iVar16 + -8) = uVar10;
  *(int *)(iVar16 + -0xc) = iVar3;
  puVar20 = (undefined4 *)(iVar16 + -0x10);
  *puVar20 = piVar2;
  iVar3 = *(int *)(extraout_r2_02 + 0x1c);
  if (iVar3 == 0) {
    func_0x024f83f8(extraout_r2_02);
    iVar3 = *(int *)(extraout_r2_02 + 0x1c);
  }
  piVar2 = (int *)func_0x0361c154((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                                  *(undefined4 *)(iVar3 + 8));
  uVar11 = *puVar20;
  uVar18 = *(undefined4 *)(iVar16 + -0xc);
  uVar21 = *(undefined4 *)(iVar16 + -8);
  *(undefined4 *)(iVar16 + -4) = *(undefined4 *)(iVar16 + -4);
  *(uint **)(iVar16 + -8) = puVar26 + -2;
  *(undefined4 *)(iVar16 + -0xc) = 0;
  *puVar20 = uVar19;
  *(code **)(iVar16 + -0x14) = pcVar22;
  *(undefined4 *)(iVar16 + -0x18) = uVar21;
  *(undefined4 *)(iVar16 + -0x1c) = uVar18;
  *(undefined4 *)(iVar16 + -0x20) = uVar11;
  pcVar17 = (char *)(_UNK_05332b80 + 0x5332830);
  if (*pcVar17 == '\0') {
    func_0x034a8a74(*(undefined4 *)(_UNK_05332b84 + 0x5332844),0);
    func_0x034a8a74(*(undefined4 *)(_UNK_05332b88 + 0x5332850));
    func_0x034a8a74(*(undefined4 *)(_UNK_05332b8c + 0x533285c));
    func_0x034a8a74(*(undefined4 *)(_UNK_05332b90 + 0x5332868));
    *pcVar17 = '\x01';
  }
  if (piVar2 == (int *)0x0) goto LAB_05332aa8;
  iVar3 = *piVar2;
  uVar15 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar15 != 0) {
    piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_05332b98 + 0x5332888)) {
        puVar20 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
        goto LAB_053328d0;
      }
      uVar15 = uVar15 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar15 != 0);
  }
  puVar20 = (undefined4 *)func_0x034a8a54(piVar2,**(int **)(_UNK_05332b98 + 0x5332888),0);
LAB_053328d0:
  piVar5 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
  bVar1 = false;
  piVar2 = (int *)0x0;
  piVar13 = *(int **)(_UNK_05332b9c + 0x53328f8);
  piVar12 = *(int **)(_UNK_05332ba0 + 0x5332900);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x034a8a64();
    }
    iVar3 = *piVar5;
    uVar15 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar14[-1] == *piVar13) {
          puVar20 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
          goto LAB_05332958;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x034a8a54(piVar5,*piVar13,0);
LAB_05332958:
    iVar3 = (*(code *)*puVar20)(piVar5,puVar20[1]);
    if (iVar3 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x034a8a64();
    }
    iVar3 = *piVar5;
    uVar15 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar14[-1] == *piVar12) {
          puVar20 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
          goto LAB_053329cc;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x034a8a54(piVar5,*piVar12,0);
LAB_053329cc:
    piVar14 = (int *)(*(code *)*puVar20)(piVar5,puVar20[1]);
    if ((int)piVar2 < (int)piVar14) {
      piVar2 = piVar14;
    }
    if (!bVar1) {
      piVar2 = piVar14;
    }
    bVar1 = true;
  } while( true );
  uVar19 = 0;
  if (piVar5 != (int *)0x0) {
    iVar3 = *piVar5;
    uVar15 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_05332ba4 + 0x5332a10)) {
          puVar20 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xc0);
          goto LAB_05332a58;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined4 *)func_0x034a8a54(piVar5,**(int **)(_UNK_05332ba4 + 0x5332a10),0);
LAB_05332a58:
    uVar19 = (*(code *)*puVar20)(piVar5,puVar20[1]);
  }
  if (!bVar1) {
    uVar19 = func_0x053316a4(uVar19);
    do {
      uVar11 = func_0x034a8b60(*(undefined4 *)(_UNK_05332ba8 + 0x5332a98));
      func_0x034a8b80(uVar19,uVar11);
      func_0x034a8b90();
LAB_05332aa8:
      func_0x034a8b60(*(undefined4 *)(_UNK_05332b94 + 0x5332ab4));
      uVar19 = func_0x053314dc();
    } while( true );
  }
  return piVar2;
}


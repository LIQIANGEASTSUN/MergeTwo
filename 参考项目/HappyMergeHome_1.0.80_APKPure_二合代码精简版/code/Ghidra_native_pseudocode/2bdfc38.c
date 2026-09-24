
/* WARNING: Possible PIC construction at 0x02c381ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c381f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02befc38(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_r4;
  int iVar6;
  int *unaff_r5;
  int *piVar7;
  int iVar8;
  int unaff_r6;
  char *pcVar9;
  undefined4 unaff_r7;
  int *piVar10;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 uVar11;
  int *unaff_r10;
  undefined *unaff_lr;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = param_5;
  pcVar9 = (char *)(_UNK_02bf065c + 0x2befc58);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf0660 + 0x2befc74));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0664 + 0x2befc80));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0668 + 0x2befc8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf066c + 0x2befc98));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0670 + 0x2befca4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0674 + 0x2befcb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0678 + 0x2befcbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf067c + 0x2befcc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0680 + 0x2befcd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0684 + 0x2befce0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0688 + 0x2befcec));
    func_0x01438628(*(undefined4 *)(_UNK_02bf068c + 0x2befcf8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0690 + 0x2befd04));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0694 + 0x2befd10));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0698 + 0x2befd1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf069c + 0x2befd28));
    func_0x01438628(*(undefined4 *)(_UNK_02bf06a0 + 0x2befd34));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fee,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_4c = iVar2;
    uStack_48 = 0;
    uStack_50 = param_4;
    iVar2 = func_0x028e8b90(iVar1,param_1,param_2,param_3);
    return iVar2;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bf06a4 + 0x2befd98));
  func_0x02c4639c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar10 = (int *)(iVar1 + 0xc);
  *piVar10 = iVar2;
  func_0x014385cc(piVar10,iVar2);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar2 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  piVar7 = (int *)(iVar1 + 8);
  *piVar7 = *(int *)(iVar2 + param_2 * 4 + 0x10);
  func_0x014385cc(piVar7);
  switch(param_4) {
  case 2:
    if (*(int *)(**(int **)(&UNK_02beff88 + _UNK_02bf06a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(&UNK_02beffa4 + _UNK_02bf06ac));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02e7975c(iVar2,0);
    if ((0 < (int)param_3) && (iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar2 + 0xc) <= param_3) {
        func_0x014388e8();
      }
      if (*(int *)(iVar2 + param_3 * 4 + 0x10) != 0) {
        iVar2 = *(int *)(param_1 + 0x44);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar2 + 0xc) <= param_3) {
          func_0x014388e8();
        }
        iVar2 = *(int *)(iVar2 + param_3 * 4 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = *(undefined4 *)(iVar2 + 0xc);
        if (*(int *)(**(int **)(&UNK_02bf0044 + _UNK_02bf06b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x024ef144(uVar3,0,0);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x44);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar2 + 0xc) <= param_3) {
            func_0x014388e8();
          }
          iVar2 = *(int *)(iVar2 + param_3 * 4 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0x1c) != 0) {
            if (*(int *)(**(int **)(&UNK_02bf00cc + _UNK_02bf06b4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(**(undefined4 **)(&UNK_02bf00e8 + _UNK_02bf06b8));
            iVar8 = *(int *)(param_1 + 0x44);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar8 + 0xc) <= param_3) {
              func_0x014388e8();
            }
            iVar8 = *(int *)(iVar8 + param_3 * 4 + 0x10);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar8 + 0xc);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uVar3 = *(undefined4 *)(iVar8 + 0x1c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02c4a818(iVar2,uVar3,0);
            if (iVar2 != 0) {
              iVar2 = *piVar7;
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0xc);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x90);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x014e94d8(iVar2,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar2,1,0);
            }
          }
        }
      }
    }
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,param_3);
    uVar3 = uStack_28;
    uStack_34 = uStack_30;
    uStack_38 = uStack_2c;
    FUN_02bed670(&uStack_30,param_1,param_2);
    uVar4 = func_0x014388d4(**(undefined4 **)(&UNK_02bf020c + _UNK_02bf06bc));
    func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(&UNK_02bf0234 + _UNK_02bf06c0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_50 = uStack_30;
    iStack_4c = uStack_2c;
    uStack_44 = 2;
    uStack_3c = 0;
    uStack_48 = uStack_28;
    iStack_40 = uVar4;
    func_0x02c27bc0(iVar2,uStack_34,uStack_38,uVar3);
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(int *)(**(int **)(&UNK_02bf02a0 + _UNK_02bf06c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x03b2c734(**(undefined4 **)(&UNK_02bf02bc + _UNK_02bf06c8));
    iVar1 = *piVar7;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024eecb8(iVar1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = &UNK_02c37e24 + _UNK_02c38200;
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(&UNK_02c37e38 + _UNK_02c38204),uVar3,0);
      func_0x01438628(*(undefined4 *)(&UNK_02c37e44 + _UNK_02c38208));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e50 + _UNK_02c3820c));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e5c + _UNK_02c38210));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e68 + _UNK_02c38214));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e74 + _UNK_02c38218));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e80 + _UNK_02c3821c));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e8c + _UNK_02c38220));
      func_0x01438628(*(undefined4 *)(&UNK_02c37e98 + _UNK_02c38224));
      *pcVar9 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x4ffc,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x4ffc,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar9 = (char *)(_UNK_028698dc + 0x28697e8);
      if (*pcVar9 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_028698e0 + 0x28697fc),iVar2,uVar3,0);
        *pcVar9 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x024f56c0(&uStack_50,0);
      uStack_38 = uStack_50;
      uStack_34 = iStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = iStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,iVar2,0);
      func_0x01523a6c(&uStack_38,uVar3,0);
      iVar8 = *(int *)(iVar1 + 8);
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar4 = 3;
      if (iVar2 == 0) {
        uVar4 = 2;
      }
      func_0x024f56d0(iVar8,uVar3,&uStack_38,uVar4,0,0);
      iVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028698e4 + 0x28698cc));
      return iVar2;
    }
    unaff_r8 = func_0x014388d4(**(undefined4 **)(&UNK_02c37ef8 + _UNK_02c38228));
    func_0x024eeca8(unaff_r8,0);
    if (*(int *)(**(int **)(&UNK_02c37f14 + _UNK_02c3822c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(&UNK_02c37f30 + _UNK_02c38230));
    piVar10 = *(int **)(&UNK_02c37f44 + _UNK_02c38234);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar10;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02e83850(iVar2,uVar4,0);
    if (unaff_r8 == 0) {
      func_0x014388e4();
    }
    unaff_r5 = (int *)(unaff_r8 + 8);
    *unaff_r5 = iVar2;
    func_0x014385cc(unaff_r5,iVar2);
    iVar2 = *unaff_r5;
    if (*(int *)(**(int **)(&UNK_02c37fac + _UNK_02c38238) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024eec50(iVar2,0,0);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = *unaff_r5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef854(iVar2,uVar3,0);
    iVar2 = *unaff_r5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    pcVar9 = &UNK_02c38044 + _UNK_02c3823c;
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(&UNK_02c38058 + _UNK_02c38240));
      *pcVar9 = '\x01';
    }
    unaff_r10 = *(int **)(&UNK_02c38070 + _UNK_02c38244);
    puVar5 = *(undefined4 **)(*unaff_r10 + 0x5c);
    uVar4 = *puVar5;
    uVar3 = puVar5[1];
    uVar11 = puVar5[2];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x024ef1f8(iVar2,uVar4,uVar3,uVar11);
    iVar2 = *unaff_r5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    pcVar9 = &UNK_02c380cc + _UNK_02c38248;
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(&UNK_02c380e0 + _UNK_02c3824c));
      *pcVar9 = '\x01';
    }
    iVar1 = *(int *)(*unaff_r10 + 0x5c);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    unaff_r9 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x024ef328(iVar2,uVar3,uVar4,unaff_r9);
    iVar2 = *unaff_r5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = *unaff_r5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    iVar2 = **(int **)(**(int **)(&UNK_02c3816c + _UNK_02c38250) + 0x5c);
    unaff_r7 = func_0x014388d4(**(undefined4 **)(&UNK_02c3817c + _UNK_02c38254));
    func_0x0152e3ec(unaff_r7,unaff_r8,**(undefined4 **)(&UNK_02c3819c + _UNK_02c38258),0);
    if (*(int *)(**(int **)(&UNK_02c381b0 + _UNK_02c3825c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02ae4d4c(0x3f800000,unaff_r7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = &UNK_02c381f0;
    unaff_r4 = iVar1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_28;
    goto SUB_02e76744;
  case 3:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,param_3);
    uStack_34 = uStack_30;
    uStack_38 = uStack_2c;
    FUN_02bed670(&uStack_30,param_1,param_2);
    iStack_40 = *piVar10;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_44 = 3;
    uStack_30 = uStack_34;
    uVar3 = uStack_38;
    break;
  case 5:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x1c) == 2) {
      iVar2 = *piVar7;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02c288a0(iVar2,0);
    }
  default:
    iVar2 = *piVar10;
    if (iVar2 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x02bf0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return iVar2;
  case 10:
  case 0xb:
    uVar3 = func_0x014388d4(**(undefined4 **)(&UNK_02befe60 + _UNK_02bf06d0));
    func_0x033341c0(uVar3,iVar1,**(undefined4 **)(&UNK_02befe7c + _UNK_02bf06d4),0);
    if (*(int *)(**(int **)(&UNK_02befe90 + _UNK_02bf06d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x02af1b10(0x3e2e147b,uVar3,1,0);
    iVar8 = *piVar7;
    iVar2 = **(int **)(**(int **)(&UNK_02befec4 + _UNK_02bf06dc) + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02c19590(iVar8,0);
    uVar4 = func_0x014388d4(**(undefined4 **)(&UNK_02beff0c + _UNK_02bf06e0));
    func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(&UNK_02beff28 + _UNK_02bf06e4),0);
    uStack_50 = 1;
    iStack_4c = 0;
    iVar1 = func_0x02aee9b4(uVar3,**(undefined4 **)(&UNK_02beff44 + _UNK_02bf06e8),0,uVar4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
SUB_02e76744:
    *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r6;
    *(int **)((int)register0x00000054 + -0xc) = unaff_r5;
    piVar10 = (int *)((int)register0x00000054 + -0x10);
    *piVar10 = unaff_r4;
    pcVar9 = (char *)(_UNK_02e76828 + 0x2e7675c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar1,0);
      *pcVar9 = '\x01';
    }
    iVar8 = func_0x02953fd4(0x4cc,0);
    if (iVar8 != 0) {
      iVar8 = func_0x029540a4(0x4cc,0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar6 = *piVar10;
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
      uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(int **)((int)register0x00000054 + -8) = unaff_r10;
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
      *piVar10 = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar3;
      *(int *)((int)register0x00000054 + -0x20) = iVar6;
      pcVar9 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
      if (*pcVar9 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar2,iVar1,0);
        *pcVar9 = '\x01';
      }
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0);
      iVar6 = *(int *)(iVar8 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      if (iVar6 != 0) {
        func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
      }
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
      iVar1 = *(int *)(iVar8 + 8);
      uVar3 = *(undefined4 *)(iVar8 + 0xc);
      iVar2 = *(int *)(iVar8 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = 3;
      if (iVar2 == 0) {
        uVar4 = 2;
      }
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      func_0x024f56d0(iVar1,uVar3,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
      iVar2 = func_0x035daef8((undefined1 *)((int)register0x00000054 + -0x38),0,
                              **(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
      return iVar2;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x024ef144(uVar3,0,0);
    if (iVar1 != 0 && iVar8 != 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = (*(code *)&UNK_05d3fe88)(iVar2,iVar1,0);
      return iVar2;
    }
    return 0;
  case 0xc:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02c31e3c(iVar2,**(undefined4 **)(&UNK_02bf0444 + _UNK_02bf06cc),0);
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,param_3);
    uStack_34 = uStack_30;
    uStack_38 = uStack_2c;
    FUN_02bed670(&uStack_30,param_1,param_2);
    iStack_40 = *piVar10;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_44 = 0xc;
    uStack_30 = uStack_34;
    uVar3 = uStack_38;
    break;
  case 0xd:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,param_3);
    uStack_34 = uStack_30;
    uStack_38 = uStack_2c;
    FUN_02bed670(&uStack_30,param_1,param_2);
    iStack_40 = *piVar10;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_44 = 0xd;
    uStack_30 = uStack_34;
    uVar3 = uStack_38;
    break;
  case 0xe:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,param_3);
    uStack_34 = uStack_30;
    uStack_38 = uStack_2c;
    FUN_02bed670(&uStack_30,param_1,param_2);
    iStack_40 = *piVar10;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_44 = 0xe;
    uStack_30 = uStack_34;
    uVar3 = uStack_38;
    break;
  case 0x10:
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_02bed670(&uStack_30,param_1,*(undefined4 *)(param_1 + 0xb0));
    uStack_34 = uStack_2c;
    uStack_38 = uStack_28;
    FUN_02bed670(&uStack_30,param_1,param_2);
    iStack_40 = *piVar10;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_44 = 0x10;
    uVar3 = uStack_34;
    uStack_28 = uStack_38;
  }
  uStack_3c = 0;
  iVar2 = func_0x02c27bc0(iVar2,uStack_30,uVar3,uStack_28);
  return iVar2;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x02bee174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bef84c) */
/* WARNING: Removing unreachable block (ram,0x02bef854) */
/* WARNING: Removing unreachable block (ram,0x02bef860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bed810(int *param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int unaff_r4;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint *unaff_r5;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_r6;
  uint uVar10;
  uint *puVar11;
  int unaff_r7;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_r8;
  int *unaff_r9;
  undefined4 *puVar14;
  int unaff_r10;
  int *unaff_r11;
  int *piVar15;
  undefined4 unaff_lr;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  iVar6 = param_6;
  uVar7 = param_5;
  pcVar4 = (char *)(iRam02bee694 + 0x2bed834);
  uStack_48 = param_8;
  uStack_44 = param_7;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bee698 + 0x2bed860));
    func_0x01438628(*(undefined4 *)(_UNK_02bee69c + 0x2bed86c));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6a0 + 0x2bed878));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6a4 + 0x2bed884));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6a8 + 0x2bed890));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6ac + 0x2bed89c));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6b0 + 0x2bed8a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6b4 + 0x2bed8b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6b8 + 0x2bed8c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6bc + 0x2bed8cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6c0 + 0x2bed8d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6c4 + 0x2bed8e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6c8 + 0x2bed8f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6cc + 0x2bed8fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6d0 + 0x2bed908));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6d4 + 0x2bed914));
    func_0x01438628(*(undefined4 *)(_UNK_02bee6d8 + 0x2bed920));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x4f86,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x4f86,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_6c = uVar7;
    iStack_68 = iVar6;
    uStack_64 = uStack_44;
    uStack_60 = uStack_48;
    uStack_5c = 0;
    iStack_70 = param_4;
    func_0x028e8c94(iVar2,param_1,param_2,param_3);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bee6dc + 0x2bed99c));
  func_0x02c461d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar2 + 0xc) = (int)param_1;
  *(char *)(iVar2 + 8) = (char)uVar7;
  func_0x014385cc((int *)(iVar2 + 0xc),param_1);
  iVar5 = param_1[0x11];
  puStack_4c = (uint *)(iVar2 + 0x14);
  *puStack_4c = (uint)param_2;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iStack_50 = iVar6;
  if (*(uint **)(iVar5 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  piVar15 = (int *)(iVar2 + 0x10);
  *piVar15 = *(int *)(iVar5 + (int)param_2 * 4 + 0x10);
  func_0x014385cc(piVar15);
  iVar6 = *piVar15;
  if (iVar6 == 0) {
    func_0x014388e4();
    iVar6 = *piVar15;
    uRam00000029 = 0;
    if (iVar6 == 0) {
      func_0x014388e4();
      iVar6 = 0;
    }
  }
  else {
    *(undefined1 *)(iVar6 + 0x29) = 0;
  }
  iVar6 = func_0x02c3f4b4(iVar6,0);
  puVar11 = puStack_4c;
  if ((iVar6 != param_3) &&
     (func_0x02bee744(param_1,*puStack_4c,0), param_2 = puVar11, *puVar11 == param_1[0x27])) {
    iStack_70 = 0;
    func_0x02bee8e8(param_1,0xffffffff,0,1);
  }
  if (param_3 < 1) {
LAB_02bedbd4:
    iVar6 = *piVar15;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x02c3f4b4(iVar6,0);
    if (iVar6 != param_3) {
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
      if (*(int *)(**(int **)(_UNK_02bee6ec + 0x2bedc14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(uVar7,0,0);
      if (iVar6 != 0) {
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c196f0(iVar6,0xffffffff,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c23db4(iVar6,0);
        iVar6 = *piVar15;
        iVar5 = **(int **)(**(int **)(_UNK_02bee6f0 + 0x2bedca8) + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x014e94d8(iVar6,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        param_2 = (uint *)0x0;
        func_0x02b599b4(iVar5,uVar7,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        puVar12 = (undefined4 *)(iVar6 + 0xc);
        *puVar12 = 0;
        func_0x014385cc(puVar12,0);
      }
    }
    unaff_r4 = *piVar15;
    if (unaff_r4 == 0) {
      func_0x014388e4();
    }
    func_0x02c3f508(unaff_r4,param_3,0);
    unaff_r7 = *piVar15;
    if (unaff_r7 == 0) {
      func_0x014388e4();
      unaff_r4 = *piVar15;
      unaff_r7 = unaff_r4;
      iRam00000014 = param_4;
      if (unaff_r4 != 0) goto LAB_02bedd6c;
      func_0x014388e4();
      unaff_r7 = *piVar15;
      uRam00000028 = 0;
      if (unaff_r7 == 0) {
        func_0x014388e4();
        unaff_r7 = 0;
      }
    }
    else {
      *(int *)(unaff_r7 + 0x14) = param_4;
LAB_02bedd6c:
      *(undefined1 *)(unaff_r7 + 0x28) = 0;
    }
    iVar6 = func_0x02c3f4b4(unaff_r7,0);
    if (-1 < iVar6) {
      if (*(int *)(**(int **)(_UNK_02bee6f4 + 0x2bedd94) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar12 = *(undefined4 **)(_UNK_02bee6f8 + 0x2beddb0);
      iVar6 = func_0x014e9518(*puVar12);
      iVar5 = param_1[4];
      uVar10 = *puStack_4c;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_02bad204(iVar6,uVar10,iVar5,0);
      if (*(int *)(**(int **)(_UNK_02bee6fc + 0x2beddf4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02bee700 + 0x2bede10));
      iVar5 = *piVar15;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x02c3f4b4(iVar5,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iStack_54 = func_0x029a6fa8(iVar6,uVar3,0);
      iVar6 = func_0x014e9518(*puVar12);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_02bd1524(iVar6,uVar7,0);
      iVar6 = *piVar15;
      if (*(int *)(**(int **)(_UNK_02bee704 + 0x2bede90) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02bee708 + 0x2bedeb0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iStack_58 = iVar2;
      uVar1 = func_0x02c4ab04(iVar5,iStack_54,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = *piVar15;
      *(undefined1 *)(iVar6 + 0x28) = uVar1;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(**(int **)(_UNK_02bee70c + 0x2bedf08) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024eec50(uVar3,0,0);
      puVar11 = puStack_4c;
      if (iVar6 != 0) {
        iVar6 = **(int **)(**(int **)(_UNK_02bee710 + 0x2bedf44) + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02b59470(iVar6,**(undefined4 **)(_UNK_02bee714 + 0x2bedf68),0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x024ef308(iVar6,0);
        iVar6 = func_0x03633ce4(uVar3,0,**(undefined4 **)(_UNK_02bee718 + 0x2bedf98));
        iVar2 = param_1[4];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c0c184(iVar6,iVar2,0);
        uVar3 = func_0x01524ffc(puVar11,0);
        uVar3 = func_0x014e9568(**(undefined4 **)(_UNK_02bee71c + 0x2bedfe4),uVar3,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x024ef2f8(iVar6,uVar3,0);
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar6;
        func_0x014385cc(piVar8,iVar6);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c196f0(iVar6,param_3,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c19638(iVar6,uVar7,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar10 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c19954(iVar6,uVar10,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024eecb8(iVar6,0);
        iVar2 = param_1[5];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x024ef854(iVar6,iVar2,0);
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c23db4(iVar6,0);
        iVar6 = *piVar15;
        iVar2 = param_1[0x12];
        uVar10 = *puVar11;
        if (iVar6 == 0) {
          func_0x014e67d4(uVar10,iVar2);
          func_0x014388e4();
          iVar6 = *piVar15;
          iVar2 = param_1[0x12];
          uVar10 = *puVar11;
          uRam0000001c = extraout_r1_00;
          if (iVar6 != 0) goto LAB_02bee1ec;
          uVar7 = func_0x014e5f78(uVar10,iVar2);
          func_0x014388e4();
          iVar6 = *piVar15;
          uVar10 = *puVar11;
          piVar8 = *(int **)(_UNK_02bee728 + 0x2bee5c4);
          puVar12 = *(undefined4 **)(_UNK_02bee72c + 0x2bee5cc);
          uRam00000020 = uVar7;
          if (iVar6 == 0) goto LAB_02bee690;
        }
        else {
          func_0x014e67d4(uVar10,iVar2);
          *(undefined4 *)(iVar6 + 0x1c) = extraout_r1;
LAB_02bee1ec:
          uVar7 = func_0x014e5f78(uVar10,iVar2);
          *(undefined4 *)(iVar6 + 0x20) = uVar7;
          piVar8 = *(int **)(_UNK_02bee720 + 0x2bee208);
          puVar12 = *(undefined4 **)(_UNK_02bee724 + 0x2bee210);
        }
        puVar11 = puStack_4c;
        *(uint *)(iVar6 + 0x24) = uVar10;
        if (iStack_54 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(*puVar12);
          uVar10 = *puVar11;
          iVar2 = param_1[4];
          iStack_28 = iStack_50;
          uStack_30 = CONCAT44(0xffffffff,**(undefined4 **)(_UNK_02bee730 + 0x2bee52c));
          uVar7 = func_0x014e95a8(&uStack_30,0);
          uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_02bee734 + 0x2bee560),uVar7,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iStack_70 = 1;
          uStack_6c = 0;
          FUN_02bda8ac(iVar6,uVar10,iVar2,uVar7);
          return;
        }
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c1af98(iVar6,1,0);
        if (iStack_50 == 10) {
          iVar6 = *piVar15;
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0xc);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02c1c724(iVar6,uStack_48,0);
        }
      }
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024eecb8(iVar6,0);
      FUN_02bed670(&uStack_30,param_1,*puVar11);
      iVar6 = iStack_28;
      uVar7 = (undefined4)uStack_30;
      uVar3 = uStack_30._4_4_;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_70 = 0;
      func_0x024ef1f8(iVar2,uVar7,uVar3,iVar6);
      iVar2 = *piVar15;
      iVar6 = iVar2;
      if (iVar2 == 0) {
        func_0x014388e4();
        iVar6 = *piVar15;
        if (iVar6 == 0) goto LAB_02bee690;
      }
      iVar5 = iStack_58;
      iVar6 = *(int *)(iVar6 + 0xc);
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x024eecb8(iVar6,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f0474(&uStack_40,iVar6,0);
      iStack_28 = uStack_38;
      uStack_30 = uStack_40;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      *(int *)(iVar2 + 0x130) = iStack_28;
      *(undefined8 *)(iVar2 + 0x128) = uStack_30;
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        func_0x014388e4();
        iVar6 = *piVar15;
        uRam00000029 = 1;
        if (iVar6 == 0) {
LAB_02bee690:
          func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *(undefined1 *)(iVar6 + 0x29) = 1;
      }
      iVar2 = *(int *)(iVar6 + 0xc);
      iVar6 = param_1[0x18];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x014e94d8(iVar2,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04add220(iVar6,uVar7,**(undefined4 **)(_UNK_02bee738 + 0x2bee404));
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = iStack_50;
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x014e94d8(iVar6,0);
      *(undefined4 *)(iVar5 + 0x18) = uVar7;
      func_0x014385cc((undefined4 *)(iVar5 + 0x18),uVar7);
      iVar6 = *(int *)(iVar5 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024eecb8(iVar6,0);
      (**(code **)(*param_1 + 0x110))(param_1,uVar7,*(undefined4 *)(*param_1 + 0x114));
      uVar7 = *(undefined4 *)(iVar5 + 0x14);
      iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02bee73c + 0x2bee4a4));
      func_0x0152e3ec(iVar6,iVar5,**(undefined4 **)(_UNK_02bee740 + 0x2bee4c0),0);
      iStack_70 = iVar6;
      func_0x02befc38(param_1,uVar7,uStack_44,iVar2);
      func_0x02bef1a8(param_1);
      return;
    }
    if (*(char *)(iVar2 + 8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x02bee194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x120))(param_1,1,*(undefined4 *)(*param_1 + 0x124));
      return;
    }
    unaff_lr = 0x2bee178;
    unaff_r5 = param_2;
    unaff_r6 = iVar2;
    unaff_r8 = param_4;
    unaff_r9 = param_1;
    unaff_r10 = param_3;
    unaff_r11 = piVar15;
    register0x00000054 = (BADSPACEBASE *)&iStack_70;
  }
  else {
    iVar6 = *piVar15;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x02c3f4b4(iVar6,0);
    if (iVar6 != param_3) goto LAB_02bedbd4;
    iVar6 = *piVar15;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (*(int *)(**(int **)(_UNK_02bee6e0 + 0x2bedae8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x024ef144(uVar7,0,0);
    if (iVar6 == 0) goto LAB_02bedbd4;
    if (*(int *)(**(int **)(_UNK_02bee6e4 + 0x2bedb24) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_02bee6e8 + 0x2bedb40);
    iVar6 = func_0x014e9518(*puVar12);
    iVar5 = param_1[4];
    uVar10 = *puStack_4c;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = FUN_02bad204(iVar6,uVar10,iVar5,0);
    iVar6 = func_0x014e9518(*puVar12);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = FUN_02bd1524(iVar6,uVar7,0);
    iVar6 = *piVar15;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0x14) != param_4) {
      iVar6 = *piVar15;
      if (iVar6 == 0) {
        func_0x014388e4();
        iVar5 = iRam00000014;
        iVar6 = *piVar15;
        if (iVar6 != 0) goto LAB_02bee5e8;
        func_0x014388e4();
        iVar6 = *piVar15;
        iRam00000014 = param_4;
        if (iVar6 == 0) goto LAB_02bee690;
      }
      else {
        iVar5 = *(int *)(iVar6 + 0x14);
LAB_02bee5e8:
        *(int *)(iVar6 + 0x14) = param_4;
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x02c19638(iVar6,uVar7,0);
      puVar11 = puStack_4c;
      if (iVar5 != -1) {
        iVar6 = *piVar15;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c1af98(iVar6,0,0);
      }
      func_0x02bef1a8(param_1);
      func_0x02bef26c(param_1,*puVar11);
    }
    if (*(char *)(iVar2 + 8) == '\0') {
      return;
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r10;
  *(int **)((int)register0x00000054 + -0x10) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r6;
  *(uint **)((int)register0x00000054 + -0x20) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x24) = unaff_r4;
  pcVar4 = (char *)(_UNK_02befbdc + 0x2bef6d0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02befbe0 + 0x2bef6e4));
    func_0x01438628(*(undefined4 *)(_UNK_02befbe4 + 0x2bef6f0));
    func_0x01438628(*(undefined4 *)(_UNK_02befbe8 + 0x2bef6fc));
    func_0x01438628(*(undefined4 *)(_UNK_02befbec + 0x2bef708));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf0 + 0x2bef714));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf4 + 0x2bef720));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf8 + 0x2bef72c));
    func_0x01438628(*(undefined4 *)(_UNK_02befbfc + 0x2bef738));
    func_0x01438628(*(undefined4 *)(_UNK_02befc00 + 0x2bef744));
    *pcVar4 = '\x01';
  }
  puVar12 = (undefined4 *)((int)register0x00000054 + -0x38);
  *puVar12 = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar6 = func_0x02953fd4(0xec4,0);
  if (iVar6 != 0) {
    iVar6 = func_0x029540a4(0xec4,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar6,param_1,0,0);
    return;
  }
  piVar15 = *(int **)(_UNK_02befc04 + 0x2bef7ac);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(param_1,0,0);
  if (iVar6 != 0) {
    return;
  }
  uVar7 = func_0x014e94d8(param_1,0);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(uVar7,0,0);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = func_0x014e94d8(param_1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x024ef984(iVar6,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = param_1[0x14];
  if ((iVar6 != 0) && (1 < *(int *)(iVar6 + 0xc))) {
    puVar14 = (undefined4 *)((int)register0x00000054 + -0x48);
    func_0x0152da0c(puVar14,iVar6,**(undefined4 **)(_UNK_02befc08 + 0x2bef8dc));
    *puVar12 = *puVar14;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    puVar13 = *(undefined4 **)(_UNK_02befc0c + 0x2bef8f8);
    do {
      iVar6 = func_0x04878f14(puVar12,*puVar13);
      if (iVar6 == 0) {
        func_0x04878f10((undefined1 *)((int)register0x00000054 + -0x38),
                        **(undefined4 **)(_UNK_02befc18 + 0x2bef948));
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
        iVar2 = func_0x02c009b8(param_1,0,1,1);
        iVar6 = 0;
        if (iVar2 != 0) {
          iVar6 = *(int *)(iVar2 + 0xc);
          unaff_r10 = iVar2;
        }
        if (iVar2 == 0 || iVar6 == 0) {
          return;
        }
        puVar9 = *(undefined4 **)(_UNK_02befc1c + 0x2bef994);
        iVar6 = func_0x0152983c(unaff_r10,0,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c3f4b4(iVar6,0);
        iVar2 = param_1[0x14];
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0152983c(iVar2,0,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3f4b4(iVar2,0);
        if (iVar6 == iVar2) {
          return;
        }
        func_0x0152da0c(puVar14,unaff_r10,**(undefined4 **)(_UNK_02befc20 + 0x2befa0c));
        *puVar12 = *puVar14;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        goto LAB_02befa1c;
      }
      iVar6 = *(int *)((int)register0x00000054 + -0x2c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
    } while (*(int *)(iVar6 + 0x14) != 0);
LAB_02bef924:
    func_0x04878f10((undefined1 *)((int)register0x00000054 + -0x38),
                    **(undefined4 **)(_UNK_02befc10 + 0x2bef930));
    return;
  }
  func_0x02bee744(param_1,0xffffffff,1);
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
  func_0x02c009b8(param_1,1,1,1);
LAB_02bef8b0:
  func_0x02bf1628(param_1,0xffffffff,0x40200000);
  return;
  while( true ) {
    iVar6 = *(int *)((int)register0x00000054 + -0x2c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0x14) == 0) break;
LAB_02befa1c:
    iVar6 = func_0x04878f14(puVar12,*puVar13);
    if (iVar6 == 0) goto LAB_02bef924;
  }
  func_0x04878f10((undefined1 *)((int)register0x00000054 + -0x38),
                  **(undefined4 **)(_UNK_02befc30 + 0x2befa58));
  func_0x02bee744(param_1,0xffffffff,1);
  iVar6 = param_1[0x14];
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (0 < iVar2) {
    func_0x01523bec(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
  }
  iVar6 = param_1[0x14];
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x024f0ea8(iVar6,unaff_r10,**(undefined4 **)(_UNK_02befc34 + 0x2befad0));
  goto LAB_02bef8b0;
}


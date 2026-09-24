
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc331c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02bc38d8 + 0x2bc3338);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc38dc + 0x2bc334c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38e0 + 0x2bc3358));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38e4 + 0x2bc3364));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38e8 + 0x2bc3370));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38ec + 0x2bc337c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38f0 + 0x2bc3388));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38f4 + 0x2bc3394));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38f8 + 0x2bc33a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc38fc + 0x2bc33ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3900 + 0x2bc33b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3904 + 0x2bc33c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3908 + 0x2bc33d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc390c + 0x2bc33dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3910 + 0x2bc33e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3914 + 0x2bc33f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2559,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2559,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc3918 + 0x2bc3468));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      return;
    }
  }
  iVar6 = **(int **)(_UNK_02bc391c + 0x2bc34c4);
  iVar1 = *(int *)(iVar6 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar6);
    iVar1 = *(int *)(iVar6 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bc3920 + 0x2bc3524) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc3920 + 0x2bc3524));
  }
  iStack_30 = param_1;
  uStack_2c = param_2;
  func_0x026795f8(**(undefined4 **)(_UNK_02bc3924 + 0x2bc355c),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc3928 + 0x2bc356c));
  FUN_026f689c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,6,0);
    func_0x014388e4();
    FUN_026f5f48(0,0x2c,0);
    func_0x014388e4();
    FUN_026f6014(0,0,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,6,0);
    FUN_026f5f48(iVar1,0x2c,0);
    FUN_026f6014(iVar1,0,0);
  }
  iVar6 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8);
  if (0 < iVar6) {
    iStack_28 = iVar6 + -0x30;
    iVar10 = 0;
    piVar9 = *(int **)(_UNK_02bc392c + 0x2bc3620);
    puVar11 = *(undefined4 **)(_UNK_02bc3930 + 0x2bc3628);
    do {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bc3934 + 0x2bc3644));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar2 + 0x34);
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bc3938 + 0x2bc3664));
      FUN_026f7e40(iVar2,0);
      if (((iVar7 == 0) || (iVar10 < iStack_28)) || (*(int *)(iVar7 + 0xc) <= iVar10)) {
        if (iVar2 == 0) {
          func_0x014388e4();
          FUN_026f6b3c(0,0xffffffff,0);
          func_0x014388e4();
        }
        else {
          FUN_026f6b3c(iVar2,0xffffffff,0);
        }
        FUN_026f6bf8(iVar2,10,0);
      }
      else {
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6b3c(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6bf8(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6cb4(iVar2,uVar8,0);
        iVar3 = func_0x0152983c(iVar7,iVar10,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x18) != 0) {
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar2 + 0x90);
          iVar7 = func_0x0152983c(iVar7,iVar10,*puVar11);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar7 + 0x18);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75c38(iVar3,uVar8,**(undefined4 **)(_UNK_02bc393c + 0x2bc37dc));
        }
      }
      iVar7 = *(int *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar7,iVar2,**(undefined4 **)(_UNK_02bc3940 + 0x2bc3850));
      iVar10 = iVar10 + 1;
    } while (iVar6 - iVar10 != 0);
  }
  iVar6 = iStack_30;
  iVar10 = *(int *)(iStack_30 + 0x14);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_2c;
  func_0x03b72180(iVar10,uStack_2c,iVar1,**(undefined4 **)(_UNK_02bc3944 + 0x2bc3888));
  iVar1 = *(int *)(iVar6 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bc3948 + 0x2bc38b8));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar10 = func_0x02953fd4(0x2537,0);
  if (iVar10 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar10 = 0;
      puVar11 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar10) break;
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar10,*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iStack_28 = 0;
        func_0x02bd0b60(iVar6,*(undefined4 *)(iVar2 + 8),iVar10,uVar8);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar10 = iVar10 + 1;
      }
    }
  }
  else {
    iVar10 = func_0x029540a4(0x2537,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_28 = 0;
    func_0x028924d8(iVar10,iVar6,iVar1,uVar8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb80ac(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bb8668 + 0x2bb80c8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb866c + 0x2bb80dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8670 + 0x2bb80e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8674 + 0x2bb80f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8678 + 0x2bb8100));
    func_0x01438628(*(undefined4 *)(_UNK_02bb867c + 0x2bb810c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8680 + 0x2bb8118));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8684 + 0x2bb8124));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8688 + 0x2bb8130));
    func_0x01438628(*(undefined4 *)(_UNK_02bb868c + 0x2bb813c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8690 + 0x2bb8148));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8694 + 0x2bb8154));
    func_0x01438628(*(undefined4 *)(_UNK_02bb8698 + 0x2bb8160));
    func_0x01438628(*(undefined4 *)(_UNK_02bb869c + 0x2bb816c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb86a0 + 0x2bb8178));
    func_0x01438628(*(undefined4 *)(_UNK_02bb86a4 + 0x2bb8184));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x254c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x254c,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bb86a8 + 0x2bb81f8));
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
  iVar6 = **(int **)(_UNK_02bb86ac + 0x2bb8254);
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
  if (*(int *)(**(int **)(_UNK_02bb86b0 + 0x2bb82b4) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bb86b0 + 0x2bb82b4));
  }
  iStack_30 = param_1;
  uStack_2c = param_2;
  func_0x026795f8(**(undefined4 **)(_UNK_02bb86b4 + 0x2bb82ec),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb86b8 + 0x2bb82fc));
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
    piVar9 = *(int **)(_UNK_02bb86bc + 0x2bb83b0);
    puVar11 = *(undefined4 **)(_UNK_02bb86c0 + 0x2bb83b8);
    do {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bb86c4 + 0x2bb83d4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar2 + 0x34);
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bb86c8 + 0x2bb83f4));
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
          func_0x03b75c38(iVar3,uVar8,**(undefined4 **)(_UNK_02bb86cc + 0x2bb856c));
        }
      }
      iVar7 = *(int *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar7,iVar2,**(undefined4 **)(_UNK_02bb86d0 + 0x2bb85e0));
      iVar10 = iVar10 + 1;
    } while (iVar6 - iVar10 != 0);
  }
  iVar6 = iStack_30;
  iVar10 = *(int *)(iStack_30 + 0x14);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_2c;
  func_0x03b72180(iVar10,uStack_2c,iVar1,**(undefined4 **)(_UNK_02bb86d4 + 0x2bb8618));
  iVar1 = *(int *)(iVar6 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bb86d8 + 0x2bb8648));
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


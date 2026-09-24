
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bbe8fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bbedb0 + 0x2bbe918);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bbedb4 + 0x2bbe92c));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedb8 + 0x2bbe938));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedbc + 0x2bbe944));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedc0 + 0x2bbe950));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedc4 + 0x2bbe95c));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedc8 + 0x2bbe968));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedcc + 0x2bbe974));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedd0 + 0x2bbe980));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedd4 + 0x2bbe98c));
    func_0x01438628(*(undefined4 *)(_UNK_02bbedd8 + 0x2bbe998));
    func_0x01438628(*(undefined4 *)(_UNK_02bbeddc + 0x2bbe9a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bbede0 + 0x2bbe9b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bbede4 + 0x2bbe9bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bbede8 + 0x2bbe9c8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2596,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2596,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bbedec + 0x2bbea3c));
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
  iVar7 = **(int **)(_UNK_02bbedf0 + 0x2bbea98);
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bbedf4 + 0x2bbeaf8) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bbedf4 + 0x2bbeaf8));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bbedf8 + 0x2bbeb28),uVar8,0);
  if (*(int *)(**(int **)(_UNK_02bbedfc + 0x2bbeb38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bbee00 + 0x2bbeb54));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar1 + 0x30);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bbee04 + 0x2bbeb74));
  FUN_026f689c(iVar1,0);
  iStack_2c = param_1;
  uStack_28 = param_2;
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,6,0);
    func_0x014388e4();
    FUN_026f5f48(0,8,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,6,0);
    FUN_026f5f48(iVar1,8,0);
  }
  iVar6 = 0;
  FUN_026f6014(iVar1,0,0);
  puVar11 = *(undefined4 **)(_UNK_02bbee08 + 0x2bbec08);
  puVar9 = *(undefined4 **)(_UNK_02bbee0c + 0x2bbec10);
  puVar10 = *(undefined4 **)(_UNK_02bbee10 + 0x2bbec18);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = iStack_2c;
    if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
    iVar2 = func_0x014388d4(*puVar11);
    FUN_026f7e40(iVar2,0);
    if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc) <= iVar6)) {
      if (iVar2 == 0) {
        func_0x014388e4();
        FUN_026f6b3c(0,0xffffffff,0);
        func_0x014388e4();
      }
      else {
        FUN_026f6b3c(iVar2,0xffffffff,0);
      }
      uVar8 = 1;
    }
    else {
      iVar3 = func_0x0152983c(iVar7,iVar6,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026f6b3c(iVar2,uVar8,0);
      iVar3 = func_0x0152983c(iVar7,iVar6,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
    FUN_026f6bf8(iVar2,uVar8,0);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar3,iVar2,*puVar9);
    iVar6 = iVar6 + 1;
  }
  iVar7 = *(int *)(iStack_2c + 0x14);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  func_0x03b72180(iVar7,uStack_28,iVar1,**(undefined4 **)(_UNK_02bbee14 + 0x2bbed60));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bbee18 + 0x2bbed90));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x2537,0);
  if (iVar7 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar7 = 0;
      puVar9 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar7) break;
        iVar6 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(iVar2,*(undefined4 *)(iVar6 + 8),iVar7,uVar8);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x2537,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar7,iVar2,iVar1,uVar8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc526c(int param_1,undefined4 param_2)

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
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar5 = (char *)(_UNK_02bc5730 + 0x2bc5288);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc5734 + 0x2bc529c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5738 + 0x2bc52a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc573c + 0x2bc52b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5740 + 0x2bc52c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5744 + 0x2bc52cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5748 + 0x2bc52d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc574c + 0x2bc52e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5750 + 0x2bc52f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5754 + 0x2bc52fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5758 + 0x2bc5308));
    func_0x01438628(*(undefined4 *)(_UNK_02bc575c + 0x2bc5314));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5760 + 0x2bc5320));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5764 + 0x2bc532c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5768 + 0x2bc5338));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2599,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2599,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc576c + 0x2bc53ac));
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
  iVar6 = **(int **)(_UNK_02bc5770 + 0x2bc5408);
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
  if (*(int *)(**(int **)(_UNK_02bc5774 + 0x2bc5468) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc5774 + 0x2bc5468));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bc5778 + 0x2bc5498),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc577c + 0x2bc54a8));
  FUN_026f689c(iVar1,0);
  iStack_2c = param_1;
  uStack_28 = param_2;
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,6,0);
    func_0x014388e4();
    FUN_026f5f48(0,0xe,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,6,0);
    FUN_026f5f48(iVar1,0xe,0);
  }
  iVar6 = 0;
  FUN_026f6014(iVar1,0,0);
  piVar10 = *(int **)(_UNK_02bc5780 + 0x2bc5538);
  puVar11 = *(undefined4 **)(_UNK_02bc5784 + 0x2bc5540);
  puVar12 = *(undefined4 **)(_UNK_02bc5788 + 0x2bc5548);
  puVar9 = *(undefined4 **)(_UNK_02bc578c + 0x2bc5550);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = iStack_2c;
    if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(*puVar11);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar2 + 0x24);
    iVar2 = func_0x014388d4(*puVar12);
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
      iVar3 = func_0x0152983c(iVar7,iVar6,**(undefined4 **)(_UNK_02bc5790 + 0x2bc55d0));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026f6b3c(iVar2,uVar8,0);
      iVar7 = func_0x0152983c(iVar7,iVar6,**(undefined4 **)(_UNK_02bc5794 + 0x2bc5618));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar7 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_02bc5798 + 0x2bc564c);
    }
    FUN_026f6bf8(iVar2,uVar8,0);
    iVar7 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar7,iVar2,*puVar9);
    iVar6 = iVar6 + 1;
  }
  iVar6 = *(int *)(iStack_2c + 0x14);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  func_0x03b72180(iVar6,uStack_28,iVar1,**(undefined4 **)(_UNK_02bc579c + 0x2bc56e0));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bc57a0 + 0x2bc5710));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x2537,0);
  if (iVar6 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar6 = 0;
      puVar9 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar6) break;
        iVar7 = *(int *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x03b780b0(iVar7,iVar6,*puVar9);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(iVar2,*(undefined4 *)(iVar7 + 8),iVar6,uVar8);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar6 = iVar6 + 1;
      }
    }
  }
  else {
    iVar6 = func_0x029540a4(0x2537,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar6,iVar2,iVar1,uVar8);
  }
  return;
}


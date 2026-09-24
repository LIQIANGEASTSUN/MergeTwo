
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc83d0(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bc8884 + 0x2bc83ec);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc8888 + 0x2bc8400));
    func_0x01438628(*(undefined4 *)(_UNK_02bc888c + 0x2bc840c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc8890 + 0x2bc8418));
    func_0x01438628(*(undefined4 *)(_UNK_02bc8894 + 0x2bc8424));
    func_0x01438628(*(undefined4 *)(_UNK_02bc8898 + 0x2bc8430));
    func_0x01438628(*(undefined4 *)(_UNK_02bc889c + 0x2bc843c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88a0 + 0x2bc8448));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88a4 + 0x2bc8454));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88a8 + 0x2bc8460));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88ac + 0x2bc846c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88b0 + 0x2bc8478));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88b4 + 0x2bc8484));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88b8 + 0x2bc8490));
    func_0x01438628(*(undefined4 *)(_UNK_02bc88bc + 0x2bc849c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x25d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x25d5,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc88c0 + 0x2bc8510));
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
  iVar7 = **(int **)(_UNK_02bc88c4 + 0x2bc856c);
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
  if (*(int *)(**(int **)(_UNK_02bc88c8 + 0x2bc85cc) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc88c8 + 0x2bc85cc));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bc88cc + 0x2bc85fc),uVar8,0);
  if (*(int *)(**(int **)(_UNK_02bc88d0 + 0x2bc860c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bc88d4 + 0x2bc8628));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar1 + 0x28);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc88d8 + 0x2bc8648));
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
  puVar11 = *(undefined4 **)(_UNK_02bc88dc + 0x2bc86dc);
  puVar9 = *(undefined4 **)(_UNK_02bc88e0 + 0x2bc86e4);
  puVar10 = *(undefined4 **)(_UNK_02bc88e4 + 0x2bc86ec);
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
  func_0x03b72180(iVar7,uStack_28,iVar1,**(undefined4 **)(_UNK_02bc88e8 + 0x2bc8834));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bc88ec + 0x2bc8864));
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


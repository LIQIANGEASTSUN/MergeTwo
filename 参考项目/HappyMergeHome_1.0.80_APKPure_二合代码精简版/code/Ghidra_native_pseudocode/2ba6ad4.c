
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb6ad4(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bb6f98 + 0x2bb6af0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb6f9c + 0x2bb6b04));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fa0 + 0x2bb6b10));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fa4 + 0x2bb6b1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fa8 + 0x2bb6b28));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fac + 0x2bb6b34));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fb0 + 0x2bb6b40));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fb4 + 0x2bb6b4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fb8 + 0x2bb6b58));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fbc + 0x2bb6b64));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fc0 + 0x2bb6b70));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fc4 + 0x2bb6b7c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fc8 + 0x2bb6b88));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fcc + 0x2bb6b94));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6fd0 + 0x2bb6ba0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x253e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x253e,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bb6fd4 + 0x2bb6c14));
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
  iVar6 = **(int **)(_UNK_02bb6fd8 + 0x2bb6c70);
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
  if (*(int *)(**(int **)(_UNK_02bb6fdc + 0x2bb6cd0) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bb6fdc + 0x2bb6cd0));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bb6fe0 + 0x2bb6d00),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb6fe4 + 0x2bb6d10));
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
  piVar10 = *(int **)(_UNK_02bb6fe8 + 0x2bb6da0);
  puVar11 = *(undefined4 **)(_UNK_02bb6fec + 0x2bb6da8);
  puVar12 = *(undefined4 **)(_UNK_02bb6ff0 + 0x2bb6db0);
  puVar9 = *(undefined4 **)(_UNK_02bb6ff4 + 0x2bb6db8);
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
    iVar7 = *(int *)(iVar2 + 0x34);
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
      iVar3 = func_0x0152983c(iVar7,iVar6,**(undefined4 **)(_UNK_02bb6ff8 + 0x2bb6e38));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026f6b3c(iVar2,uVar8,0);
      iVar7 = func_0x0152983c(iVar7,iVar6,**(undefined4 **)(_UNK_02bb6ffc + 0x2bb6e80));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar7 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_02bb7000 + 0x2bb6eb4);
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
  func_0x03b72180(iVar6,uStack_28,iVar1,**(undefined4 **)(_UNK_02bb7004 + 0x2bb6f48));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bb7008 + 0x2bb6f78));
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


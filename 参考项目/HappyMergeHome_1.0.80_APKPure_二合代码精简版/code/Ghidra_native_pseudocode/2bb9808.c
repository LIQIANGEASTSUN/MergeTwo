
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc9808(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bc9c78 + 0x2bc9824);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c7c + 0x2bc9838));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c80 + 0x2bc9844));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c84 + 0x2bc9850));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c88 + 0x2bc985c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c8c + 0x2bc9868));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c90 + 0x2bc9874));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c94 + 0x2bc9880));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c98 + 0x2bc988c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9c9c + 0x2bc9898));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9ca0 + 0x2bc98a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9ca4 + 0x2bc98b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9ca8 + 0x2bc98bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc9cac + 0x2bc98c8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x25e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x25e1,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc9cb0 + 0x2bc993c));
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
  iVar7 = **(int **)(_UNK_02bc9cb4 + 0x2bc9998);
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
  if (*(int *)(**(int **)(_UNK_02bc9cb8 + 0x2bc99f8) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc9cb8 + 0x2bc99f8));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bc9cbc + 0x2bc9a28),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc9cc0 + 0x2bc9a38));
  FUN_026f689c(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02bc9cc4 + 0x2bc9a54) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_2c = param_1;
  uStack_28 = param_2;
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bc9cc8 + 0x2bc9a78));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x28);
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
  FUN_026f6014(iVar1,5,0);
  puVar11 = *(undefined4 **)(_UNK_02bc9ccc + 0x2bc9b08);
  puVar9 = *(undefined4 **)(_UNK_02bc9cd0 + 0x2bc9b10);
  puVar10 = *(undefined4 **)(_UNK_02bc9cd4 + 0x2bc9b18);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = iStack_2c;
    if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
    iVar2 = func_0x014388d4(*puVar11);
    FUN_026f7e40(iVar2,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar7,iVar6,*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f6b3c(iVar2,uVar8,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar7,iVar6,*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f6bf8(iVar2,uVar8,0);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar3,iVar2,*puVar10);
    iVar6 = iVar6 + 1;
  }
  iVar7 = *(int *)(iStack_2c + 0x14);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  func_0x03b72180(iVar7,uStack_28,iVar1,**(undefined4 **)(_UNK_02bc9cd8 + 0x2bc9c28));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bc9cdc + 0x2bc9c58));
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


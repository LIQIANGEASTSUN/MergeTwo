
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4ccd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_02b4ced8 + 0x2b4ccec);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4cedc + 0x2b4cd00));
    func_0x01438628(*(undefined4 *)(_UNK_02b4cee0 + 0x2b4cd0c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4cee4 + 0x2b4cd18));
    func_0x01438628(*(undefined4 *)(_UNK_02b4cee8 + 0x2b4cd24));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ceec + 0x2b4cd30));
    func_0x01438628(*(undefined4 *)(_UNK_02b4cef0 + 0x2b4cd3c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2eed,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02b4cef4 + 0x2b4cd94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4cef8 + 0x2b4cdb0));
    piVar5 = *(int **)(_UNK_02b4cefc + 0x2b4cdc4);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3e4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02b0fc08(iVar1,uVar6,0);
    if (*(int *)(**(int **)(_UNK_02b4cf00 + 0x2b4ce0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar6,0,0);
    if (iVar1 != 0) {
      func_0x02cb2928(0);
    }
    if (*(int *)(**(int **)(_UNK_02b4cf04 + 0x2b4ce48) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x02b42434();
    iVar1 = **(int **)(**(int **)(_UNK_02b4cf08 + 0x2b4ce68) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b2f170(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
    iVar1 = FUN_02b3dda0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b4cf0c(iVar1);
    if (iVar1 == 0) {
      return;
    }
    param_1 = FUN_02b3dda0();
    if (param_1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02b4ca48 + 0x2b4c964);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02b4ca4c + 0x2b4c978));
      func_0x01438628(*(undefined4 *)(_UNK_02b4ca50 + 0x2b4c984));
      func_0x01438628(*(undefined4 *)(_UNK_02b4ca54 + 0x2b4c990));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x2ee8,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02b4ca58 + 0x2b4c9ec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4ca5c + 0x2b4ca08));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_18 = 0;
      func_0x02bd9fb8(iVar1,0x17,0,**(undefined4 **)(_UNK_02b4ca60 + 0x2b4ca30));
      return;
    }
    iVar1 = func_0x029540a4(0x2ee8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2eed,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
  return;
}


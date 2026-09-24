
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03312b6c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_03312ef4 + 0x3312b7c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03312ef8 + 0x3312b90));
    func_0x01438628(*(undefined4 *)(_UNK_03312efc + 0x3312b9c));
    func_0x01438628(*(undefined4 *)(_UNK_03312f00 + 0x3312ba8));
    func_0x01438628(*(undefined4 *)(_UNK_03312f04 + 0x3312bb4));
    func_0x01438628(*(undefined4 *)(_UNK_03312f08 + 0x3312bc0));
    func_0x01438628(*(undefined4 *)(_UNK_03312f0c + 0x3312bcc));
    func_0x01438628(*(undefined4 *)(_UNK_03312f10 + 0x3312bd8));
    func_0x01438628(*(undefined4 *)(_UNK_03312f14 + 0x3312be4));
    func_0x01438628(*(undefined4 *)(_UNK_03312f18 + 0x3312bf0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13d6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar6 = *(int **)(_UNK_03312f1c + 0x3312c44);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0330a560();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_03310620(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0330a560();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0330a8b0(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_03312f20 + 0x3312cc4) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0330a560();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0330edb4(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026f1898(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_03312f24 + 0x3312d4c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03312f28 + 0x3312d68));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03312f2c + 0x3312d88));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          func_0x03b72000(0,0x16,**(undefined4 **)(_UNK_03312f34 + 0x3312de0));
          func_0x014388e4();
        }
        else {
          func_0x03b72000(iVar1,0x16,**(undefined4 **)(_UNK_03312f30 + 0x3312dbc));
        }
        func_0x03b72000(iVar1,0x17,**(undefined4 **)(_UNK_03312f38 + 0x3312dfc));
        if (*(int *)(**(int **)(_UNK_03312f3c + 0x3312e10) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03312f40 + 0x3312e2c));
        piVar6 = (int *)FUN_0330a560();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_03312f44 + 0x3312e6c);
        iVar5 = *(int *)(iVar7 + 0x1c);
        if (iVar5 == 0) {
          func_0x014909d8(iVar7);
          iVar5 = *(int *)(iVar7 + 0x1c);
        }
        iVar5 = *(int *)(iVar5 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar5 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar2,uVar4,0);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


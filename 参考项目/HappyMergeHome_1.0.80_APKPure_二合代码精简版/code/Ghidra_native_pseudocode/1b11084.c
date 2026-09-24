
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21084(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_01b2129c + 0x1b21098);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b212a0 + 0x1b210ac));
    func_0x01438628(*(undefined4 *)(_UNK_01b212a4 + 0x1b210b8));
    func_0x01438628(*(undefined4 *)(_UNK_01b212a8 + 0x1b210c4));
    func_0x01438628(*(undefined4 *)(_UNK_01b212ac + 0x1b210d0));
    func_0x01438628(*(undefined4 *)(_UNK_01b212b0 + 0x1b210dc));
    func_0x01438628(*(undefined4 *)(_UNK_01b212b4 + 0x1b210e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b212b8 + 0x1b210f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x381f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 == 0) {
      FUN_01b1d650(param_1);
    }
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      if (*(int *)(**(int **)(_UNK_01b212bc + 0x1b21184) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01b212c0 + 0x1b211a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x020e9710(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x11c);
      if (iVar1 < 1) {
        iVar1 = 0x65;
      }
      iVar4 = FUN_01b18c14(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x026c6f70(iVar4,iVar1,0);
    }
    if (*(int *)(**(int **)(_UNK_01b212c4 + 0x1b21210) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b212c8 + 0x1b2122c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01b212cc + 0x1b2124c));
    func_0x03a062d0(uVar5,param_1,**(undefined4 **)(_UNK_01b212d0 + 0x1b2126c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_04cfe28c)(iVar1,uVar5,**(undefined4 **)(_UNK_01b212d4 + 0x1b21290));
    return;
  }
  iVar1 = func_0x029540a4(0x381f,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar3 = (char *)(_UNK_028d2988 + 0x28d28a8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028d298c + 0x28d28bc),param_1,0);
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
  func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028d2990 + 0x28d2978));
  return;
}


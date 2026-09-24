
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0307a9c8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
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
  
  pcVar4 = (char *)(_UNK_0307ab84 + 0x307a9dc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307ab88 + 0x307a9f0));
    func_0x01438628(*(undefined4 *)(_UNK_0307ab8c + 0x307a9fc));
    func_0x01438628(*(undefined4 *)(_UNK_0307ab90 + 0x307aa08));
    func_0x01438628(*(undefined4 *)(_UNK_0307ab94 + 0x307aa14));
    func_0x01438628(*(undefined4 *)(_UNK_0307ab98 + 0x307aa20));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x1538,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1538,0);
    if (iVar1 == 0) {
      func_0x014388e4();
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_03078794(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar5 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x0307f35c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_0307ab9c + 0x307aac0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0307aba0 + 0x307aadc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04cfd760(iVar1,0,**(undefined4 **)(_UNK_0307aba4 + 0x307ab10));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_0307aba8 + 0x307ab30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0307abac + 0x307ab4c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026ffbe0(iVar1,0);
      lVar6 = func_0x0308c734(param_1);
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}


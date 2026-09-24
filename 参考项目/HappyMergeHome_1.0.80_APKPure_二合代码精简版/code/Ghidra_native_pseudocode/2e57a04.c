
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02e67a04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02e67bc4 + 0x2e67a1c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e67bc8 + 0x2e67a30));
    func_0x01438628(*(undefined4 *)(_UNK_02e67bcc + 0x2e67a3c));
    func_0x01438628(*(undefined4 *)(_UNK_02e67bd0 + 0x2e67a48));
    func_0x01438628(*(undefined4 *)(_UNK_02e67bd4 + 0x2e67a54));
    func_0x01438628(*(undefined4 *)(_UNK_02e67bd8 + 0x2e67a60));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x484,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x484,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028797c4 + 0x28796d0);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028797c8 + 0x28796e4),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a2c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028797cc + 0x28797b4));
    return uVar4;
  }
  iVar1 = **(int **)(**(int **)(_UNK_02e67bdc + 0x2e67abc) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02e651cc(iVar1,param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x02953fd4(0x485,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x485,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_0287947c + 0x2879388);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02879480 + 0x287939c),param_1,param_2,0);
        *pcVar5 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x024f56c0(&uStack_50,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a2c(&uStack_38,param_1,0);
      func_0x01523a2c(&uStack_38,param_2,0);
      iVar3 = *(int *)(iVar1 + 8);
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 3;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
      uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02879484 + 0x287946c));
      return uVar4;
    }
    func_0x02e67e80(param_1,param_2);
    uVar4 = func_0x02e67f98();
    return uVar4;
  }
  if (*(int *)(**(int **)(_UNK_02e67be0 + 0x2e67b00) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e67be4 + 0x2e67b1c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029a6fa8(iVar1,param_1,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02e67be8 + 0x2e67b58) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02e67bec + 0x2e67b74));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = (*(code *)&UNK_05d518f4)(iVar3,uVar4,0);
    return uVar4;
  }
  return 0;
}


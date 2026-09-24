
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c81f10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01c8205c + 0x1c81f28);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c82060 + 0x1c81f3c));
    func_0x01438628(*(undefined4 *)(_UNK_01c82064 + 0x1c81f48));
    func_0x01438628(*(undefined4 *)(_UNK_01c82068 + 0x1c81f54));
    func_0x01438628(*(undefined4 *)(_UNK_01c8206c + 0x1c81f60));
    func_0x01438628(*(undefined4 *)(_UNK_01c82070 + 0x1c81f6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad27,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad27,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_0293808c + 0x2937f98);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02938090 + 0x2937fac),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02938094 + 0x293807c));
    return uVar5;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c82074 + 0x1c81fc8));
  func_0x01c87ff0(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  FUN_01c803b0(param_1);
  iVar3 = *(int *)(param_1 + 0x40);
  if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0xc))) {
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c82078 + 0x1c82014));
    func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_01c8207c + 0x1c82030),0);
    uVar5 = (*(code *)&SUB_04cfe1c0)(iVar3,uVar5,**(undefined4 **)(_UNK_01c82080 + 0x1c82048));
    return uVar5;
  }
  return 0;
}


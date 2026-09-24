
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be3a48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02be3bbc + 0x2be3a68);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be3bc0 + 0x2be3a7c));
    func_0x01438628(*(undefined4 *)(_UNK_02be3bc4 + 0x2be3a88));
    func_0x01438628(*(undefined4 *)(_UNK_02be3bc8 + 0x2be3a94));
    func_0x01438628(*(undefined4 *)(_UNK_02be3bcc + 0x2be3aa0));
    func_0x01438628(*(undefined4 *)(_UNK_02be3bd0 + 0x2be3aac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d1d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be3bd4 + 0x2be3b10));
    func_0x02c38b84(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar3 = FUN_02bad050(param_1,param_3);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02be3bd8 + 0x2be3b58));
    uVar2 = 0;
    func_0x03a062d0(uVar4,iVar1,**(undefined4 **)(_UNK_02be3bdc + 0x2be3b7c),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0f0c(iVar3,uVar4,**(undefined4 **)(_UNK_02be3be0 + 0x2be3ba0));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d1d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028fa93c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


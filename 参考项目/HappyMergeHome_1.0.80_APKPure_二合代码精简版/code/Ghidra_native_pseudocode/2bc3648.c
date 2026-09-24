
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd3648(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_02bd3834 + 0x2bd3668);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd3838 + 0x2bd3680));
    func_0x01438628(*(undefined4 *)(_UNK_02bd383c + 0x2bd368c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cd6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar4 = *(undefined4 **)(_UNK_02bd3840 + 0x2bd372c);
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f6bf8(iVar1,param_4,0);
    if ((param_5 & 0xfffffffe) == 10) {
      iVar1 = FUN_02bad050(param_1,param_6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b780b0(iVar1,param_2,*puVar4);
      FUN_02bd1794(param_1,uVar2);
    }
    FUN_02bb18c4(param_1,param_2,param_3,param_5,param_6,0xffffffff,1,0xffffffff,
                 **(undefined4 **)(_UNK_02bd3844 + 0x2bd37bc));
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x03b780b0(iVar1,param_2,*puVar4);
    FUN_02bd2afc(param_1,uVar2,param_5,param_6);
  }
  else {
    iVar1 = func_0x029540a4(0x5cd6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9fe8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}


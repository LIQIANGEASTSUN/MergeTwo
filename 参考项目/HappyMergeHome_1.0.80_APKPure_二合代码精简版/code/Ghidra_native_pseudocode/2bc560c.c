
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd560c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02bd5768 + 0x2bd562c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd576c + 0x2bd5644));
    func_0x01438628(*(undefined4 *)(_UNK_02bd5770 + 0x2bd5650));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ce2,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02bd577c(param_1,param_2,param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_02bad050(param_1,param_5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd5774 + 0x2bd5704));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar1,param_3,**(undefined4 **)(_UNK_02bd5778 + 0x2bd573c));
      FUN_02bd3848(param_1,param_2,0xffffffff,param_5,3);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ce2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028930e4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}


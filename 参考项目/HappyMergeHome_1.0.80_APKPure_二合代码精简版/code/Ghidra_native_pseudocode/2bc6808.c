
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd6808(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_02bd6940 + 0x2bd6828);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd6944 + 0x2bd683c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ce9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar4 = *(undefined4 **)(_UNK_02bd6948 + 0x2bd68d4);
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,param_2,*puVar4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x40);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ce9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


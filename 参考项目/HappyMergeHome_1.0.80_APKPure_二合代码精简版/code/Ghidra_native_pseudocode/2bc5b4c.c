
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd5b4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02bd5c58 + 0x2bd5b6c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd5c5c + 0x2bd5b80));
    func_0x01438628(*(undefined4 *)(_UNK_02bd5c60 + 0x2bd5b8c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ce6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd5c64 + 0x2bd5c20));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = 3 - *(int *)(iVar1 + 0xc);
  }
  else {
    iVar1 = func_0x029540a4(0x5ce6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}


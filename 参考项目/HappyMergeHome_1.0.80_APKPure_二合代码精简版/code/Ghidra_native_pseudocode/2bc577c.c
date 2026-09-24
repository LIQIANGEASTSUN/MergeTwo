
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bd577c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_02bd58a4 + 0x2bd579c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd58a8 + 0x2bd57b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd58ac + 0x2bd57c0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ce3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd58b0 + 0x2bd5854));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x02bd5ae4(param_1,param_3);
    uVar2 = (uint)(iVar1 <= iVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x5ce3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028fa200(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd58b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02bd59a0 + 0x2bd58d4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd59a4 + 0x2bd58e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd67,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd59a8 + 0x2bd597c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x38);
  }
  else {
    iVar1 = func_0x029540a4(0xd67,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02892db0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


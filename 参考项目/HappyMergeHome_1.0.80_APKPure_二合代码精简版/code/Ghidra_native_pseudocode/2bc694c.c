
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd694c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02bd6acc + 0x2bd696c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd6ad0 + 0x2bd6984));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6ad4 + 0x2bd6990));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6ad8 + 0x2bd699c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2253,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bd6adc + 0x2bd6a04) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd6ae0 + 0x2bd6a20));
    iVar3 = FUN_02bad050(param_1,param_4);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x03b780b0(iVar3,param_2,**(undefined4 **)(_UNK_02bd6ae4 + 0x2bd6a64));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,uVar2,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x02bd6ae8(param_1,param_2,iVar1,param_3,param_4);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2253,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b7d1c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}


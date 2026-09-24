
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3aa74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02c3ab78 + 0x2c3aa94);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3ab7c + 0x2c3aaac));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ab80 + 0x2c3aab8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d3c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c3ab84 + 0x2c3ab1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3ab88 + 0x2c3ab38));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029a6fa8(iVar1,param_2,0);
    func_0x02c3ab8c(param_1,uVar2,param_3,param_4);
  }
  else {
    iVar1 = func_0x029540a4(0x5d3c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fb314(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}


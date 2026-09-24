
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3c0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02c3c1a4 + 0x2c3c0c0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3c1a8 + 0x2c3c0d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c1ac + 0x2c3c0e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe7f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c3c1b0 + 0x2c3c148) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3c1b4 + 0x2c3c164));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029a6fa8(iVar1,param_2,0);
    func_0x02c3c1b8(param_1,uVar2,param_3,param_4);
  }
  else {
    iVar1 = func_0x029540a4(0xe7f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028956b0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}


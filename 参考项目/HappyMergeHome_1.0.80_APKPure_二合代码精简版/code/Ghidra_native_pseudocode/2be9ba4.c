
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf9ba4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_02bf9d60 + 0x2bf9bc4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf9d64 + 0x2bf9bdc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9d68 + 0x2bf9be8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9d6c + 0x2bf9bf4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9d70 + 0x2bf9c00));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e9f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf9d74 + 0x2bf9c68) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9d78 + 0x2bf9c84));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = func_0x029a6fa8(iVar1,param_3,0);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x100))) {
      if (*(int *)(**(int **)(_UNK_02bf9d7c + 0x2bf9cd0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9d80 + 0x2bf9cec));
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar3 = FUN_02bdd790(iVar3,param_2,uVar5,0,0);
      if (iVar3 != -1) {
        uVar2 = 1;
        FUN_02bf5f2c(param_1,param_2,iVar3,*(undefined4 *)(iVar1 + 0x100),0,0xe,1,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e9f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028fc658(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}


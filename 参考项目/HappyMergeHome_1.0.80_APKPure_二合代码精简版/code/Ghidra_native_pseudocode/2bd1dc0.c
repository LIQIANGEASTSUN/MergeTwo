
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be1dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02be1f18 + 0x2be1de0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be1f1c + 0x2be1df8));
    func_0x01438628(*(undefined4 *)(_UNK_02be1f20 + 0x2be1e04));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d0b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02be1f24 + 0x2be1e6c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be1f28 + 0x2be1e88));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = func_0x029a6fa8(iVar1,param_2,0);
    iVar3 = FUN_02bad204(param_1,param_3,param_4);
    if ((iVar1 != 0) && (iVar4 = FUN_02be1be8(param_1,iVar1), 0 < iVar4)) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x3c);
      iVar1 = FUN_02be1be8(param_1,iVar1);
      uVar2 = 0;
      if (iVar3 < iVar1) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d0b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028fa664(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}


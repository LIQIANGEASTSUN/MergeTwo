
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd3598(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = func_0x02953fd4(0x5cd5,0);
  if (iVar3 == 0) {
    if (param_2 != -1) {
      iVar3 = FUN_02bad204(param_1,param_2,param_4);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar4 = (char *)(_UNK_026f6fb0 + 0x26f6f28);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026f6fb4 + 0x26f6f3c),param_3,0);
        func_0x01438628(*(undefined4 *)(_UNK_026f6fb8 + 0x26f6f48));
        *pcVar4 = '\x01';
      }
      if (*(int *)(iVar3 + 0x28) == param_3) {
        return;
      }
      piVar1 = *(int **)(_UNK_026f6fbc + 0x26f6f68);
      *(int *)(iVar3 + 0x28) = param_3;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f6fc0 + 0x26f6f88));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(uint *)(iVar3 + 0x60);
      *(uint *)(iVar3 + 0x60) = uVar2 + 1;
      *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
      return;
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5cd5,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return;
}


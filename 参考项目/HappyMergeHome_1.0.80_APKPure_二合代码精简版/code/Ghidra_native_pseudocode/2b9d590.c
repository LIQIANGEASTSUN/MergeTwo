
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bad590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  iVar3 = func_0x02953fd4(0x5cc3,0);
  if (iVar3 == 0) {
    iVar3 = FUN_02bad204(param_1,param_3,param_4);
    if (iVar3 != 0) {
      FUN_026f73a8(iVar3,param_2,0);
      iVar4 = func_0x029fa6d0(0);
      uVar6 = *(undefined4 *)(iVar3 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029fb360(iVar4,uVar6,0);
      pcVar5 = (char *)(_UNK_026f7504 + 0x26f747c);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026f7508 + 0x26f7490),iVar4,0);
        func_0x01438628(*(undefined4 *)(_UNK_026f750c + 0x26f749c));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar3 + 0x54) == iVar4) {
        return;
      }
      piVar1 = *(int **)(_UNK_026f7510 + 0x26f74bc);
      *(int *)(iVar3 + 0x54) = iVar4;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f7514 + 0x26f74dc));
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
    iVar3 = func_0x029540a4(0x5cc3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028b55f4(iVar3,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}


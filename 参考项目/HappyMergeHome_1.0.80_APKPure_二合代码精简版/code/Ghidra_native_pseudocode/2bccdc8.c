
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdcdc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02bdcec8 + 0x2bdcde8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdcecc + 0x2bdce00));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x02953fd4(0x21ac,0);
  if (iVar2 == 0) {
    func_0x02bdced4(param_1,param_2,&uStack_24,param_3,param_4);
    piVar4 = *(int **)(_UNK_02bdced0 + 0x2bdce84);
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar4;
    }
    uVar1 = uStack_24;
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b54538(iVar2,uVar1,0);
  }
  else {
    iVar2 = func_0x029540a4(0x21ac,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028956b0(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}


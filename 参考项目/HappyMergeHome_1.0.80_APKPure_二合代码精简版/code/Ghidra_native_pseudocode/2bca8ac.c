
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bda8ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02bda9b0 + 0x2bda8cc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bda9b4 + 0x2bda8e4));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x02953fd4(0x2eea,0);
  if (iVar2 == 0) {
    FUN_02bd9a1c(param_1,param_2,&uStack_24,param_4,param_3,param_5);
    piVar4 = *(int **)(_UNK_02bda9b8 + 0x2bda96c);
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
    iVar2 = func_0x029540a4(0x2eea,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028c9904(iVar2,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be1134(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02be1234 + 0x2be1154);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be1238 + 0x2be1168));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar2 = func_0x02953fd4(0x5d05,0);
  if (iVar2 == 0) {
    FUN_02be0e98(param_1,param_2,&uStack_1c,param_3,1);
    piVar3 = *(int **)(_UNK_02be123c + 0x2be11f0);
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar3;
    }
    uVar1 = uStack_1c;
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b54538(iVar2,uVar1,0);
  }
  else {
    iVar2 = func_0x029540a4(0x5d05,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar2,param_1,param_2,param_3,0);
  }
  return;
}


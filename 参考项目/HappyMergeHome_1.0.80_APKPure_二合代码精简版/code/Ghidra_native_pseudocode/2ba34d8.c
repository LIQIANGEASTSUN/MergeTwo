
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb34d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02bb35d0 + 0x2bb34f8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb35d4 + 0x2bb350c));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar2 = func_0x02953fd4(0x344a,0);
  if (iVar2 == 0) {
    func_0x02bdfc74(param_1,param_2,&uStack_1c,param_3);
    piVar3 = *(int **)(_UNK_02bb35d8 + 0x2bb358c);
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
    iVar2 = func_0x029540a4(0x344a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar2,param_1,param_2,param_3,0);
  }
  return;
}


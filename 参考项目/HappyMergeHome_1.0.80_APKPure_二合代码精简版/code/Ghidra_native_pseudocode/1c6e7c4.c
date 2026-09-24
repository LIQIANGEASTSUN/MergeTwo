
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7e7c4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01c7e8e4 + 0x1c7e7dc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7e8e8 + 0x1c7e7f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadb4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01c7e8ec + 0x1c7e848) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202346c(0);
    iVar2 = FUN_01c733a0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_14 = *(int *)(iVar2 + 0x14) + 1;
    uVar3 = func_0x01524ffc(&iStack_14,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar1,0x310,uVar3,0,0,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0xadb4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}


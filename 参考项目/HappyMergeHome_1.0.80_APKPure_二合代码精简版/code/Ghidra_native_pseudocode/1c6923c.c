
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7923c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01c7939c + 0x1c79254);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c793a0 + 0x1c79268));
    func_0x01438628(*(undefined4 *)(_UNK_01c793a4 + 0x1c79274));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad6f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01c793a8 + 0x1c792cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202346c(0);
    iStack_1c = FUN_01c68288(param_1);
    uVar2 = func_0x01524ffc(&iStack_1c,0);
    uVar2 = func_0x014e9568(**(undefined4 **)(_UNK_01c793ac + 0x1c79314),uVar2,0);
    iVar3 = FUN_01c733a0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_1c = *(int *)(iVar3 + 0x44) + 1;
    uVar4 = func_0x01524ffc(&iStack_1c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar1,0x237,uVar2,uVar4,0,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0xad6f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eb9ffc(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_02eba1e4 + 0x2eba018);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02eba1e8 + 0x2eba02c));
    func_0x01438628(*(undefined4 *)(_UNK_02eba1ec + 0x2eba038));
    func_0x01438628(*(undefined4 *)(_UNK_02eba1f0 + 0x2eba044));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6a09,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02ebc9c0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x04cd2d7c(iVar1,uVar3,**(undefined4 **)(_UNK_02eba1f4 + 0x2eba0dc));
    if (iVar1 == 0) {
      iVar1 = func_0x02ebc9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar1,uVar3,**(undefined4 **)(_UNK_02eba1f8 + 0x2eba128));
    }
    iVar1 = func_0x02ebc9c0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026c2a44(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02eba1fc + 0x2eba164) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202346c(0);
    uStack_1c = *(undefined4 *)(param_2 + 8);
    uVar3 = func_0x01524ffc(&uStack_1c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar1,0x1f5,uVar3,0,0,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x6a09,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


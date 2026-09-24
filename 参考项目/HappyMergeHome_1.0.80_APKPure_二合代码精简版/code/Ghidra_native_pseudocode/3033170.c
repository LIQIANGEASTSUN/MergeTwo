
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03043170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_030432c4 + 0x3043190);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030432c8 + 0x30431a8));
    func_0x01438628(*(undefined4 *)(_UNK_030432cc + 0x30431b4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7404,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_030432d0 + 0x3043228) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03069080(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bed744(&uStack_30,iVar1,param_2,0);
    if (*(int *)(**(int **)(_UNK_030432d4 + 0x304327c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_03042044(iVar1,param_4,param_6,uStack_30,uStack_2c,uStack_28);
  }
  else {
    iVar1 = func_0x029540a4(0x7404,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0174cdec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0174cf40 + 0x174ce0c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174cf44 + 0x174ce24));
    func_0x01438628(*(undefined4 *)(_UNK_0174cf48 + 0x174ce30));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8ced,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_0174cf4c + 0x174cea4) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0178eddc(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bed744(&uStack_30,iVar1,param_2,0);
    if (*(int *)(**(int **)(_UNK_0174cf50 + 0x174cef8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0174c4c8(iVar1,param_4,param_6,uStack_30,uStack_2c,uStack_28);
  }
  else {
    iVar1 = func_0x029540a4(0x8ced,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03041edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_03042030 + 0x3041efc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03042034 + 0x3041f14));
    func_0x01438628(*(undefined4 *)(_UNK_03042038 + 0x3041f20));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x73c2,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_0304203c + 0x3041f94) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03069080(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bed744(&uStack_30,iVar1,param_2,0);
    if (*(int *)(**(int **)(_UNK_03042040 + 0x3041fe8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03042044(iVar1,param_4,param_6,uStack_30,uStack_2c,uStack_28);
  }
  else {
    iVar1 = func_0x029540a4(0x73c2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}


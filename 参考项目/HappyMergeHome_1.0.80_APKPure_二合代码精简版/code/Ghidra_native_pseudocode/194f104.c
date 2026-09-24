
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195f104(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0195f258 + 0x195f124);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0195f25c + 0x195f13c));
    func_0x01438628(*(undefined4 *)(_UNK_0195f260 + 0x195f148));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x990f,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_0195f264 + 0x195f1bc) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x019856c0(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bed744(&uStack_30,iVar1,param_2,0);
    if (*(int *)(**(int **)(_UNK_0195f268 + 0x195f210) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01959198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0195dfd8(iVar1,param_4,param_6,uStack_30,uStack_2c,uStack_28);
  }
  else {
    iVar1 = func_0x029540a4(0x990f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}


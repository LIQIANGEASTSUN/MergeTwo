
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307ebb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0307ed0c + 0x307ebd8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307ed10 + 0x307ebf0));
    func_0x01438628(*(undefined4 *)(_UNK_0307ed14 + 0x307ebfc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7590,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_0307ed18 + 0x307ec70) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x030a4868(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bed744(&uStack_30,iVar1,param_2,0);
    if (*(int *)(**(int **)(_UNK_0307ed1c + 0x307ecc4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0307d284(iVar1,param_4,param_6,uStack_30,uStack_2c,uStack_28);
  }
  else {
    iVar1 = func_0x029540a4(0x7590,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}


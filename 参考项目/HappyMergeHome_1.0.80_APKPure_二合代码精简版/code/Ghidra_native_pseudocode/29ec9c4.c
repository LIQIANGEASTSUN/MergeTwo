
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fc9c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_029fcad4 + 0x29fc9e4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fcad8 + 0x29fc9fc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x24f9,0);
  if (iVar1 == 0) {
    func_0x02bf15ac(param_1,param_2,param_3,param_4,param_5,param_6,0);
    if (*(int *)(**(int **)(_UNK_029fcadc + 0x29fca94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x029fc490();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029fcae0(iVar1,param_2,param_4,param_6);
  }
  else {
    iVar1 = func_0x029540a4(0x24f9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bc180(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}


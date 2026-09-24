
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5743c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01b57610 + 0x1b5745c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b57614 + 0x1b57470));
    func_0x01438628(*(undefined4 *)(_UNK_01b57618 + 0x1b5747c));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xa674,0);
  if (iVar2 == 0) {
    func_0x029f063c(param_1,param_2,param_3);
    if (*(int *)(**(int **)(_UNK_01b5761c + 0x1b57574) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b57620 + 0x1b57590));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020a8114(iVar2,param_12,0);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_01b572ec(param_1);
    if ((iVar2 == 0) && (iVar2 = func_0x01b57624(param_1), iVar2 == 0)) {
      *(undefined1 *)((int)param_1 + 0x39) = 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    *(undefined1 *)((int)param_1 + 0x3a) = uVar1;
  }
  else {
    iVar2 = func_0x029540a4(0xa674,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f122ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_02f12474 + 0x2f122d4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f12478 + 0x2f1230c));
    func_0x01438628(*(undefined4 *)(_UNK_02f1247c + 0x2f12318));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6c9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6c9c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  func_0x029f063c(param_1,param_2,param_3);
  if (*(int *)(**(int **)(_UNK_02f12480 + 0x2f123f4) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar3 = *(undefined4 **)(_UNK_02f12484 + 0x2f12410);
  iVar1 = func_0x04e4a028(*puVar3);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0205b03c(iVar1,param_12,0);
  iVar1 = func_0x04e4a028(*puVar3);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0205b6c8(iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x02f12470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}


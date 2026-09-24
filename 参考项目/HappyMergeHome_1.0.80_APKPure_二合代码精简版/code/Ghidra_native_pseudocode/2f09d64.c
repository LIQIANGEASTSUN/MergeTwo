
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f19d64(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02f19f08 + 0x2f19d8c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f19f0c + 0x2f19dc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f19f10 + 0x2f19dd0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6ccb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6ccb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  func_0x029f063c(param_1,param_2,param_3);
  if (*(int *)(**(int **)(_UNK_02f19f14 + 0x2f19eac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f19f18 + 0x2f19ec8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0205cd98(iVar1,param_12,0);
                    /* WARNING: Could not recover jumptable at 0x02f19f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}


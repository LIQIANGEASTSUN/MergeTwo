
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3aad0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01d3ac7c + 0x1d3aaf8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3ac80 + 0x1d3ab34));
    func_0x01438628(*(undefined4 *)(_UNK_01d3ac84 + 0x1d3ab40));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb385,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb385,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01d3ac88 + 0x1d3abd8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3ac8c + 0x1d3abf4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020c20b8(iVar1,param_12,0);
  func_0x029f063c(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x01d3ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}


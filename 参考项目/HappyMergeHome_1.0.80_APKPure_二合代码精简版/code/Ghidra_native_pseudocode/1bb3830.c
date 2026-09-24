
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc3830(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_01bc39f8 + 0x1bc3858);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc39fc + 0x1bc3890));
    func_0x01438628(*(undefined4 *)(_UNK_01bc3a00 + 0x1bc389c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa8d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa8d3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  func_0x029f063c(param_1,param_2,param_3);
  if (*(int *)(**(int **)(_UNK_01bc3a04 + 0x1bc3978) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar3 = *(undefined4 **)(_UNK_01bc3a08 + 0x1bc3994);
  iVar1 = func_0x014e9518(*puVar3);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020aa924(iVar1,param_12,0);
  iVar1 = func_0x014e9518(*puVar3);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020aae60(iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x01bc39f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}


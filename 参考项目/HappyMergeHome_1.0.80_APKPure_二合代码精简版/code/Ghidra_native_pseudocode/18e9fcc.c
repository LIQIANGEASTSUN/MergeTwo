
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018f9fcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_018fa028 + 0x18f9fe0);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fa02c + 0x18f9ff4));
    *pcVar1 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*(int *)(**(int **)(_UNK_018fa030 + 0x18fa008) + 0x74) == 0) {
    func_0x014387a4();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  pcVar1 = (char *)(_UNK_029f4090 + 0x29f404c);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f4094 + 0x29f4060),0,param_3,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(_UNK_029f4098 + 0x29f4074);
  func_0x014385cc();
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}


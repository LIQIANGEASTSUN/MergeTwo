
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc2c94(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01cc2d40 + 0x1cc2ca8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc2d44 + 0x1cc2cbc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc2d48 + 0x1cc2cc8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc2d4c + 0x1cc2cd4));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01cc2d50 + 0x1cc2ce8));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_01cc2d54 + 0x1cc2cfc));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x3c),uVar1);
  uVar1 = extraout_r2;
  uVar2 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_01cc2d58 + 0x1cc2d20) + 0x74) == 0) {
    func_0x014387a4();
    uVar1 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  pcVar3 = (char *)(_UNK_029f4090 + 0x29f404c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f4094 + 0x29f4060),0,uVar1,uVar2,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(_UNK_029f4098 + 0x29f4074);
  func_0x014385cc();
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}


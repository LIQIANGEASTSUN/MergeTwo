
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccc420(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ccc4f0 + 0x1ccc434);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccc4f4 + 0x1ccc448));
    func_0x01438628(*(undefined4 *)(_UNK_01ccc4f8 + 0x1ccc454));
    func_0x01438628(*(undefined4 *)(_UNK_01ccc4fc + 0x1ccc460));
    func_0x01438628(*(undefined4 *)(_UNK_01ccc500 + 0x1ccc46c));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ccc504 + 0x1ccc480));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_01ccc508 + 0x1ccc494));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x3c),uVar1);
  *(undefined4 *)(param_1 + 0x44) = **(undefined4 **)(_UNK_01ccc50c + 0x1ccc4b8);
  func_0x014385cc();
  uVar1 = extraout_r2;
  uVar2 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_01ccc510 + 0x1ccc4d0) + 0x74) == 0) {
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


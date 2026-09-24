
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03145644(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_031456a8 + 0x3145658);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031456ac + 0x314566c));
    *pcVar3 = '\x01';
    param_4 = extraout_r3;
  }
  piVar1 = *(int **)(_UNK_031456b0 + 0x3145684);
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  iVar2 = *(int *)(*piVar1 + 0x74);
  if (iVar2 == 0) {
    func_0x014387a4();
    iVar2 = extraout_r2;
    param_4 = extraout_r3_00;
  }
  pcVar3 = (char *)(_UNK_029f4090 + 0x29f404c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f4094 + 0x29f4060),0,iVar2,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(_UNK_029f4098 + 0x29f4074);
  func_0x014385cc();
  (*(code *)&SUB_051b0d14)(param_1,0);
  return;
}


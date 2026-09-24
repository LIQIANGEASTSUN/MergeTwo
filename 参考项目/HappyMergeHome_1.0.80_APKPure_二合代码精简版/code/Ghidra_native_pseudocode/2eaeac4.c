
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ebeac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar1 = (char *)(_UNK_02ebeb34 + 0x2ebead8);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebeb38 + 0x2ebeaec));
    func_0x01438628(*(undefined4 *)(_UNK_02ebeb3c + 0x2ebeaf8));
    *pcVar1 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*(int *)(**(int **)(_UNK_02ebeb40 + 0x2ebeb0c) + 0x74) == 0) {
    func_0x014387a4();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  pcVar1 = (char *)(_UNK_05d3a17c + 0x5d3a134);
  if (*pcVar1 == '\0') {
    func_0x0446a650(*(undefined4 *)(_UNK_05d3a180 + 0x5d3a148),0,param_3,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_05d3a184 + 0x5d3a15c) + 0x74) == 0) {
    func_0x0446a5e0();
  }
  return param_1;
}


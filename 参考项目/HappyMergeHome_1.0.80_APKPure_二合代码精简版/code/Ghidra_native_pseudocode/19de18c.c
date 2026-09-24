
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ee18c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_019ee460 + 0x19ee1b4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ee464 + 0x19ee1ec));
    func_0x01438628(*(undefined4 *)(_UNK_019ee468 + 0x19ee1f8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x377e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x377e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  func_0x029f063c(param_1,param_2,param_3);
  if (*(int *)(**(int **)(_UNK_019ee46c + 0x19ee2dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019ee470 + 0x19ee2f8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020a4df0(iVar1,param_12,0);
  iVar1 = func_0x01523adc(param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eef64(*(undefined4 *)(iVar1 + 8),param_2,0);
    if (iVar1 != 0) {
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0268be6c(iVar1,0);
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026c19cc(iVar1,param_2,0);
      uVar5 = FUN_019edb58(param_1);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar1 = param_1[6];
      iVar4 = param_1[7];
      if ((int)uVar5 == 0) {
        func_0x014388e4();
        uVar2 = extraout_r1;
      }
      func_0x026c1aa0((int)uVar5,uVar2,iVar1,iVar4,0);
      uVar5 = FUN_019edb58(param_1);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar1 = param_1[8];
      iVar4 = param_1[9];
      if ((int)uVar5 == 0) {
        func_0x014388e4();
        uVar2 = extraout_r1_00;
      }
      func_0x026c1b70((int)uVar5,uVar2,iVar1,iVar4,0);
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026c1c40(iVar1,1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x019ee45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}


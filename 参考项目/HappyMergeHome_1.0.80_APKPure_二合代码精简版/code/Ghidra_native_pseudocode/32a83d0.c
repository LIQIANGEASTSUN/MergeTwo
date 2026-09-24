
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b83d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r11;
  
  pcVar2 = (char *)(_UNK_032b86bc + 0x32b83e4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b86c0 + 0x32b83f8));
    func_0x01438628(*(undefined4 *)(_UNK_032b86c4 + 0x32b8404));
    func_0x01438628(*(undefined4 *)(_UNK_032b86c8 + 0x32b8410));
    func_0x01438628(*(undefined4 *)(_UNK_032b86cc + 0x32b841c));
    func_0x01438628(*(undefined4 *)(_UNK_032b86d0 + 0x32b8428));
    func_0x01438628(*(undefined4 *)(_UNK_032b86d4 + 0x32b8434));
    *pcVar2 = '\x01';
  }
  iVar3 = param_1[6];
  if (*(int *)(**(int **)(_UNK_032b86d8 + 0x32b8448) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b86dc + 0x32b8468));
  uVar5 = param_1[5];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
  if (iVar1 != 0) {
    uVar5 = param_1[5];
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_032adc60(iVar3,uVar5,0);
    if ((param_1[7] == 10) && (iVar6 = *(int *)(iVar1 + 0x48), 0 < iVar6)) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_032adf14(iVar3,iVar6,0);
      uVar5 = *(undefined4 *)(iVar1 + 0x48);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_032adf14(iVar3,uVar5,0);
    }
    if (*(int *)(**(int **)(_UNK_032b86e0 + 0x32b851c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b86e4 + 0x32b8538));
    piVar4 = *(int **)(_UNK_032b86e8 + 0x32b854c);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar7 = **(int **)(_UNK_032b86ec + 0x32b856c);
    iVar6 = *(int *)(iVar7 + 0x1c);
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x324);
    if (iVar6 == 0) {
      func_0x014909d8(iVar7);
      iVar6 = *(int *)(iVar7 + 0x1c);
    }
    iVar1 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar3,uVar5,uVar8,0);
  }
  piVar4 = param_1 + 1;
  *param_1 = 0xfffffffe;
  iVar3 = func_0x051f89e0(0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x05056608(piVar4);
    if (iVar3 == 0) {
      func_0x034a8a64();
    }
    uVar5 = func_0x051ef178(iVar3,0);
    func_0x051fcde4(0,uVar5,1,0,unaff_r4,unaff_r5,unaff_r11);
  }
  if (*piVar4 != 0) {
    piVar4 = (int *)*piVar4;
    if (piVar4 == (int *)0x0) {
      func_0x034a8a64();
    }
    (**(code **)(*piVar4 + 0xf8))(piVar4,*(undefined4 *)(*piVar4 + 0xfc));
    return;
  }
  return;
}


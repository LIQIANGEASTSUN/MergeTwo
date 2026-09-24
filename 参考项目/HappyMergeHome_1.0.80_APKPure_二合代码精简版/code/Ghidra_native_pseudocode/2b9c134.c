
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bac134(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_02bac2d8 + 0x2bac154);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bac2dc + 0x2bac168));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cbe,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_02bac2e0 + 0x2bac1cc);
    iVar1 = **(int **)(*piVar5 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b6105c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      iVar1 = **(int **)(*piVar5 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b6105c(iVar1,0);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(param_2 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x02c19900(iVar4,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = *piVar5;
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
      iVar1 = **(int **)(iVar4 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b6105c(iVar1,0);
      if (param_3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(param_3 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x02c19900(iVar4,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar1 + 0x24) = uVar2;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cbe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


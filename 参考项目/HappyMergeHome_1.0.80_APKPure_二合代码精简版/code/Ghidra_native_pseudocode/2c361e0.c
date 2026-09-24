
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c461e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar1 = (char *)(_UNK_02c46388 + 0x2c461f4);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4638c + 0x2c46208));
    func_0x01438628(*(undefined4 *)(_UNK_02c46390 + 0x2c46214));
    *pcVar1 = '\x01';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_02bef6b4(iVar2,0,0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(iVar2 + 0x29) = 0;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bef26c(iVar3,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x04adc788(iVar2,uVar5,**(undefined4 **)(_UNK_02c46394 + 0x2c462b8));
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
    if (*(int *)(**(int **)(_UNK_02c46398 + 0x2c462d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(uVar5,0,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      piVar4 = *(int **)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x024eecb8(iVar2,0);
      if (piVar4 == (int *)0x0) {
        func_0x014388e4();
      }
      (**(code **)(*piVar4 + 0x118))(piVar4,uVar5,*(undefined4 *)(*piVar4 + 0x11c));
    }
  }
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    func_0x014388e4();
  }
                    /* WARNING: Could not recover jumptable at 0x02c46384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x120))(piVar4,1,*(undefined4 *)(*piVar4 + 0x124));
  return;
}


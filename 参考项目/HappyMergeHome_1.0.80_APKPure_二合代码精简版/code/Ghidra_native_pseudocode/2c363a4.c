
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c463a4(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)(_UNK_02c464ec + 0x2c463b8);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c464f0 + 0x2c463cc));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x11c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar2 + 0x88);
  iVar2 = func_0x01cca620(0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e9678(iVar3,uVar4,0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_02c32460(iVar2,0);
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x11c);
    uVar4 = **(undefined4 **)(**(int **)(_UNK_02c464f4 + 0x2c464a0) + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f7b38(iVar2,uVar4,0);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02c464e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}


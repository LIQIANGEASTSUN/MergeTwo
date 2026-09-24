
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21938(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_01b219e4 + 0x1b21950);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b219e8 + 0x1b21964));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01b219ec + 0x1b21978) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x01a0177c(iVar1,uVar4,0x3e99999a,uVar3,0);
  }
  return;
}


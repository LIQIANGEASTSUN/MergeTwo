
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4fa8c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_02b4fbb8 + 0x2b4faa4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4fbbc + 0x2b4fab8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4fbc0 + 0x2b4fac4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4fbc4 + 0x2b4fad0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4fbc8 + 0x2b4fadc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4fbcc + 0x2b4fae8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02b4fbd0 + 0x2b4fafc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4fbd4 + 0x2b4fb18));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02b4fbdc + 0x2b4fb44),
                          **(undefined4 **)(_UNK_02b4fbd8 + 0x2b4fb38));
  if (*(int *)(**(int **)(_UNK_02b4fbe0 + 0x2b4fb5c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024ef144(iVar1,0,0);
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b3f138(iVar1,uVar5,0x3e99999a,uVar3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e2b94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_017e2dec + 0x17e2bac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e2df0 + 0x17e2bc0));
    func_0x01438628(*(undefined4 *)(_UNK_017e2df4 + 0x17e2bcc));
    func_0x01438628(*(undefined4 *)(_UNK_017e2df8 + 0x17e2bd8));
    func_0x01438628(*(undefined4 *)(_UNK_017e2dfc + 0x17e2be4));
    func_0x01438628(*(undefined4 *)(_UNK_017e2e00 + 0x17e2bf0));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_017e2e04 + 0x17e2c08);
  iStack_1c = 0;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = FUN_017d3d58();
  if (*(int *)(**(int **)(_UNK_017e2e08 + 0x17e2c30) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar1,0,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_017d3d58();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x017ef92c(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = FUN_017d4624(iVar2,0xc);
    FUN_017dd4cc(param_1,uVar1);
    iVar2 = FUN_017d48ec(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x026eda08(iVar2,*(int *)(iVar2 + 0x80) + 2,0);
    if (*(int *)(**(int **)(_UNK_017e2e0c + 0x17e2cf8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar3 = FUN_017d48ec(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_1c = *(int *)(iVar3 + 0x80) * 100 + 800;
    uVar1 = func_0x01524ffc(&iStack_1c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x252,uVar1,0,0,0,0);
    iVar2 = FUN_017d3d58();
    if (iVar2 != 0) {
      uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017e2e10 + 0x17e2db0));
      func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_017e2e14 + 0x17e2dcc),0);
      func_0x017f58c4(iVar2,uVar1,0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  return;
}


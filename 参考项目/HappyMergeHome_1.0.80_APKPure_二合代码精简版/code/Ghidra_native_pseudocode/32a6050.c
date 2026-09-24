
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b6050(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_032b62a8 + 0x32b6068);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b62ac + 0x32b607c));
    func_0x01438628(*(undefined4 *)(_UNK_032b62b0 + 0x32b6088));
    func_0x01438628(*(undefined4 *)(_UNK_032b62b4 + 0x32b6094));
    func_0x01438628(*(undefined4 *)(_UNK_032b62b8 + 0x32b60a0));
    func_0x01438628(*(undefined4 *)(_UNK_032b62bc + 0x32b60ac));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_032b62c0 + 0x32b60c4);
  iStack_1c = 0;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = FUN_032a7050();
  if (*(int *)(**(int **)(_UNK_032b62c4 + 0x32b60ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar1,0,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_032a7050();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x032b7874(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = FUN_032a7920(iVar2,0xc);
    FUN_032b0a24(param_1,uVar1);
    iVar2 = FUN_032a7be8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x026eee4c(iVar2,*(int *)(iVar2 + 0x80) + 2,0);
    if (*(int *)(**(int **)(_UNK_032b62c8 + 0x32b61b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar3 = FUN_032a7be8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_1c = *(int *)(iVar3 + 0x80) * 100 + 800;
    uVar1 = func_0x0515c4b0(&iStack_1c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x26c,uVar1,0,0,0,0);
    iVar2 = FUN_032a7050();
    if (iVar2 != 0) {
      uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032b62cc + 0x32b626c));
      func_0x05096384(uVar1,param_1,**(undefined4 **)(_UNK_032b62d0 + 0x32b6288),0);
      func_0x032b78c8(iVar2,uVar1,0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  return;
}


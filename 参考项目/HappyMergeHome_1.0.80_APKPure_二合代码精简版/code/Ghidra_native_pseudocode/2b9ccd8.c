
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02baccd8(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02bace9c + 0x2baccf0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bacea0 + 0x2bacd04));
    func_0x01438628(*(undefined4 *)(_UNK_02bacea4 + 0x2bacd10));
    func_0x01438628(*(undefined4 *)(_UNK_02bacea8 + 0x2bacd1c));
    func_0x01438628(*(undefined4 *)(_UNK_02baceac + 0x2bacd28));
    func_0x01438628(*(undefined4 *)(_UNK_02baceb0 + 0x2bacd34));
    *pcVar2 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x014385cc((undefined4 *)(param_1 + 0x18),0);
  iVar1 = **(int **)(**(int **)(_UNK_02baceb4 + 0x2bacd5c) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 2) {
    iVar1 = **(int **)(**(int **)(_UNK_02bacec0 + 0x2bacdb4) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b2f170(iVar1,0);
    if (iVar1 == 3) {
      if (*(int *)(**(int **)(_UNK_02bacec4 + 0x2bacde8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bacec8 + 0x2bace04));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02c3c0a0(iVar1,0x186a4,0,1,0);
    }
  }
  else {
    if (*(int *)(**(int **)(_UNK_02baceb8 + 0x2bace48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bacebc + 0x2bace64));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02c3e4a4(iVar1,0,0,1,0);
  }
  return;
}


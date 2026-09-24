
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78500(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_02c78644 + 0x2c78518);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c78648 + 0x2c7852c));
    func_0x01438628(*(undefined4 *)(_UNK_02c7864c + 0x2c78538));
    func_0x01438628(*(undefined4 *)(_UNK_02c78650 + 0x2c78544));
    func_0x01438628(*(undefined4 *)(_UNK_02c78654 + 0x2c78550));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c78658 + 0x2c78564) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c7865c + 0x2c78580));
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02be5cb0(iVar1,uVar4,0);
  if (iVar1 != 0) {
    bVar5 = *(int *)(param_1 + 0x8c) != 0;
    iVar2 = 0;
    if (bVar5) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    if (bVar5 && iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02c78660 + 0x2c785d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02c78664 + 0x2c785f0));
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x014388e8();
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02c7f4bc(iVar2,uVar4,0,1,1,0);
    }
  }
  return;
}


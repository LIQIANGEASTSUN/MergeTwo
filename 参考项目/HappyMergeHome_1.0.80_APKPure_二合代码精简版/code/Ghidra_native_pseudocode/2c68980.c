
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78980(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024eecb8(iVar2,0);
  pcVar3 = (char *)(_UNK_02c78a18 + 0x2c789b4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c78a1c + 0x2c789c8));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_02c78a20 + 0x2c789e0) + 0x5c);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = *(undefined4 *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x024ef328(iVar2,uVar4,uVar5,uVar6,0);
  return;
}


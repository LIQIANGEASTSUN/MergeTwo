
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78668(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_02c787b0 + 0x2c78680);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c787b4 + 0x2c78694));
    func_0x01438628(*(undefined4 *)(_UNK_02c787b8 + 0x2c786a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c787bc + 0x2c786ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c787c0 + 0x2c786b8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c787c4 + 0x2c786cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c787c8 + 0x2c786e8));
  uVar5 = *(undefined4 *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar2 = FUN_02be5cb0(iVar1,uVar5,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
    iVar1 = iVar2;
  }
  if ((iVar2 != 0 && iVar3 != 0) && (1 < *(int *)(iVar1 + 0xc))) {
    if (*(int *)(**(int **)(_UNK_02c787cc + 0x2c78744) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c787d0 + 0x2c78760));
    if (*(uint *)(iVar1 + 0xc) < 2) {
      func_0x014388e8();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02c7f4bc(iVar3,uVar5,0,1,1,0);
  }
  return;
}


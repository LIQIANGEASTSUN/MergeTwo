
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c52ab4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02c52c70 + 0x2c52acc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c52c74 + 0x2c52ae0));
    func_0x01438628(*(undefined4 *)(_UNK_02c52c78 + 0x2c52aec));
    func_0x01438628(*(undefined4 *)(_UNK_02c52c7c + 0x2c52af8));
    func_0x01438628(*(undefined4 *)(_UNK_02c52c80 + 0x2c52b04));
    func_0x01438628(*(undefined4 *)(_UNK_02c52c84 + 0x2c52b10));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1039,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_02c52c88 + 0x2c52b68) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_14 = func_0x02c9bf50(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02c52c8c + 0x2c52b98) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c52c90 + 0x2c52bb8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029ca78c(iVar1,0);
    iVar5 = *(int *)(param_1 + 0x4c);
    if (iVar1 < 2) {
      iStack_14 = 0;
    }
    if (iVar5 != 0) {
      uVar2 = func_0x01524ffc(&iStack_14,0);
      func_0x02032130(iVar5,uVar2,1,0);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      func_0x014e94e8(*(int *)(param_1 + 0x50),0 < iStack_14,0);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      puVar3 = *(undefined4 **)(_UNK_02c52c98 + 0x2c52c5c);
      if (iStack_14 < 1) {
        puVar3 = *(undefined4 **)(_UNK_02c52c94 + 0x2c52c54);
      }
      func_0x024f1048(*(int *)(param_1 + 0x54),*puVar3,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1039,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}


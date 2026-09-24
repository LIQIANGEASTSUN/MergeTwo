
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02e61c0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02e61d0c + 0x2e61c20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e61d10 + 0x2e61c34));
    func_0x01438628(*(undefined4 *)(_UNK_02e61d14 + 0x2e61c40));
    func_0x01438628(*(undefined4 *)(_UNK_02e61d18 + 0x2e61c4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3fd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0286d6a4 + 0x286d5c4);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286d6a8 + 0x286d5d8),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0286d6ac + 0x286d694));
    return iVar1;
  }
  piVar3 = (int *)(param_1 + 0xc);
  if (*piVar3 != 0) {
    return *piVar3;
  }
  if (*(int *)(**(int **)(_UNK_02e61d1c + 0x2e61cb0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e61d20 + 0x2e61ccc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02e61d24 + 0x2e61cec));
  *piVar3 = iVar1;
  func_0x014385cc(piVar3,iVar1);
  return *piVar3;
}


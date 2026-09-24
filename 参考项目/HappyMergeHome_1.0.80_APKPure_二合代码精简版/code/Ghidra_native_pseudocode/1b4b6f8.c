
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b5b6f8(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01b5b7f4 + 0x1b5b708);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5b7f8 + 0x1b5b71c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b7fc + 0x1b5b728));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b800 + 0x1b5b734));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5a8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5a8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_028f6a28 + 0x28f6958);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028f6a2c + 0x28f696c),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
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
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar3,&uStack_30,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028f6a30 + 0x28f6a18));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_01b5b804 + 0x1b5b788) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5b808 + 0x1b5b7a4));
  iVar5 = FUN_01b56e3c();
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x01b5b810(iVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = **(int **)(_UNK_01b5b80c + 0x1b5b7e8);
  if (*(int *)(iVar5 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_0374c4c0 + 0x374c3b0));
    func_0x024f83cc(*(undefined4 *)(_UNK_0374c4c4 + 0x374c3bc));
    if (*(int *)(iVar5 + 0x1c) == 0) {
      func_0x024f83f8(iVar5);
    }
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x024f83d4();
  }
  iVar6 = func_0x04753c80(iVar6,uVar4,**(undefined4 **)(_UNK_0374c4c8 + 0x374c3f0));
  if (iVar6 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar1 = func_0x0475399c(iVar1,uVar4,**(undefined4 **)(_UNK_0374c4cc + 0x374c420));
  iVar5 = **(int **)(iVar5 + 0x1c);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x024f83fc(iVar5);
  }
  if (iVar1 != 0) {
    iVar6 = func_0x024f83e4(iVar1,iVar5);
    if (iVar6 != 0) goto LAB_0374c48c;
    func_0x024f84a0(iVar1,iVar5);
  }
  func_0x024f83d4();
  iVar6 = 0;
LAB_0374c48c:
  iVar1 = func_0x024f8bf0(iVar6,0);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar5 = func_0x024ef984(iVar1,0);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = iVar6;
  }
  return iVar1;
}


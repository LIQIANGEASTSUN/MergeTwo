
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02a00b80(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
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
  
  pcVar4 = (char *)(_UNK_02a00cb0 + 0x2a00b90);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a00cb4 + 0x2a00ba4));
    func_0x01438628(*(undefined4 *)(_UNK_02a00cb8 + 0x2a00bb0));
    func_0x01438628(*(undefined4 *)(_UNK_02a00cbc + 0x2a00bbc));
    func_0x01438628(*(undefined4 *)(_UNK_02a00cc0 + 0x2a00bc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x24fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x24fe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028bc484 + 0x28bc3b4);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028bc488 + 0x28bc3c8),0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar3,&uStack_30,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028bc48c + 0x28bc474));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_02a00cc4 + 0x2a00c1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a00cc8 + 0x2a00c38));
  if (*(int *)(**(int **)(_UNK_02a00ccc + 0x2a00c4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar2 = (int *)FUN_029fc490();
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  uVar5 = (**(code **)(*piVar2 + 400))(piVar2,*(undefined4 *)(*piVar2 + 0x194));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_02a00cd0 + 0x2a00ca4);
  if (*(int *)(iVar6 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_0374c4c0 + 0x374c3b0));
    func_0x024f83cc(*(undefined4 *)(_UNK_0374c4c4 + 0x374c3bc));
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x024f83f8(iVar6);
    }
  }
  iVar7 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x024f83d4();
  }
  iVar7 = func_0x04753c80(iVar7,uVar5,**(undefined4 **)(_UNK_0374c4c8 + 0x374c3f0));
  if (iVar7 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar1 = func_0x0475399c(iVar1,uVar5,**(undefined4 **)(_UNK_0374c4cc + 0x374c420));
  iVar6 = **(int **)(iVar6 + 0x1c);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x024f83fc(iVar6);
  }
  if (iVar1 != 0) {
    iVar7 = func_0x024f83e4(iVar1,iVar6);
    if (iVar7 != 0) goto LAB_0374c48c;
    func_0x024f84a0(iVar1,iVar6);
  }
  func_0x024f83d4();
  iVar7 = 0;
LAB_0374c48c:
  iVar1 = func_0x024f8bf0(iVar7,0);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar6 = func_0x024ef984(iVar1,0);
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = iVar7;
  }
  return iVar1;
}


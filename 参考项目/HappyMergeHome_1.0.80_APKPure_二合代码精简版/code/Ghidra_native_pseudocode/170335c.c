
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0171335c(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
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
  
  pcVar3 = (char *)(_UNK_0171348c + 0x171336c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01713490 + 0x1713380));
    func_0x01438628(*(undefined4 *)(_UNK_01713494 + 0x171338c));
    func_0x01438628(*(undefined4 *)(_UNK_01713498 + 0x1713398));
    func_0x01438628(*(undefined4 *)(_UNK_0171349c + 0x17133a4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2c84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2c84,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028c64d8 + 0x28c6408);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028c64dc + 0x28c641c),0);
      *pcVar3 = '\x01';
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028c64e0 + 0x28c64c8));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_017134a0 + 0x17133f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017134a4 + 0x1713414));
  if (*(int *)(**(int **)(_UNK_017134a8 + 0x1713428) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar2 = (int *)FUN_0170e674();
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  uVar5 = (**(code **)(*piVar2 + 400))(piVar2,*(undefined4 *)(*piVar2 + 0x194));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_017134ac + 0x1713480);
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


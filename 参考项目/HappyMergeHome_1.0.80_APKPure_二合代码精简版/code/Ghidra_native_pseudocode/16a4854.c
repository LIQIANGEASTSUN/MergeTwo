
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b4854(void)

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
  
  pcVar3 = (char *)(_UNK_016b4984 + 0x16b4864);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b4988 + 0x16b4878));
    func_0x01438628(*(undefined4 *)(_UNK_016b498c + 0x16b4884));
    func_0x01438628(*(undefined4 *)(_UNK_016b4990 + 0x16b4890));
    func_0x01438628(*(undefined4 *)(_UNK_016b4994 + 0x16b489c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2ad8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2ad8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028c4fd8 + 0x28c4f08);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028c4fdc + 0x28c4f1c),0);
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
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028c4fe0 + 0x28c4fc8));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_016b4998 + 0x16b48f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b499c + 0x16b490c));
  if (*(int *)(**(int **)(_UNK_016b49a0 + 0x16b4920) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar2 = (int *)FUN_016af738();
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  uVar5 = (**(code **)(*piVar2 + 400))(piVar2,*(undefined4 *)(*piVar2 + 0x194));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_016b49a4 + 0x16b4978);
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


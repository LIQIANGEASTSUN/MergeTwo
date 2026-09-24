
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029b156c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_029b17a8 + 0x29b1580);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b17ac + 0x29b1594));
    func_0x01438628(*(undefined4 *)(_UNK_029b17b0 + 0x29b15a0));
    func_0x01438628(*(undefined4 *)(_UNK_029b17b4 + 0x29b15ac));
    func_0x01438628(*(undefined4 *)(_UNK_029b17b8 + 0x29b15b8));
    func_0x01438628(*(undefined4 *)(_UNK_029b17bc + 0x29b15c4));
    func_0x01438628(*(undefined4 *)(_UNK_029b17c0 + 0x29b15d0));
    func_0x01438628(*(undefined4 *)(_UNK_029b17c4 + 0x29b15dc));
    func_0x01438628(*(undefined4 *)(_UNK_029b17c8 + 0x29b15e8));
    func_0x01438628(*(undefined4 *)(_UNK_029b17cc + 0x29b15f4));
    func_0x01438628(*(undefined4 *)(_UNK_029b17d0 + 0x29b1600));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4ab4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4ab4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028e1f60 + 0x28e1e80);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028e1f64 + 0x28e1e94),param_1,0);
      *pcVar3 = '\x01';
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028e1f68 + 0x28e1f50));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029b17d4 + 0x29b1658));
  func_0x024eeca8(iVar1,0);
  if (*(int *)(**(int **)(_UNK_029b17d8 + 0x29b1674) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_029b17dc + 0x29b1690));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x020e9710(iVar4,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar6 = (int *)(iVar1 + 8);
  *piVar6 = iVar4;
  func_0x014385cc(piVar6,iVar4);
  iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_029b17e0 + 0x29b16e0));
  func_0x024eed9c(iVar4,**(undefined4 **)(_UNK_029b17e4 + 0x29b16f4));
  if (*piVar6 != 0) {
    iVar7 = *(int *)(param_1 + 0x34);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_029b17e8 + 0x29b1714));
    func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_029b17ec + 0x29b1734),0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x024f0f0c(iVar7,uVar5,**(undefined4 **)(_UNK_029b17f0 + 0x29b1758));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024f0ea8(iVar4,uVar5,**(undefined4 **)(_UNK_029b17f4 + 0x29b1780));
  }
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar4 + 0xc) < 1) {
    iVar4 = *(int *)(param_1 + 0x34);
  }
  return iVar4;
}


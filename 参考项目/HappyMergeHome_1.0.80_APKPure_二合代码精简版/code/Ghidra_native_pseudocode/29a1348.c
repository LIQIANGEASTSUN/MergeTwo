
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b1348(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar4 = (char *)(_UNK_029b1528 + 0x29b135c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b152c + 0x29b1370));
    func_0x01438628(*(undefined4 *)(_UNK_029b1530 + 0x29b137c));
    func_0x01438628(*(undefined4 *)(_UNK_029b1534 + 0x29b1388));
    func_0x01438628(*(undefined4 *)(_UNK_029b1538 + 0x29b1394));
    func_0x01438628(*(undefined4 *)(_UNK_029b153c + 0x29b13a0));
    func_0x01438628(*(undefined4 *)(_UNK_029b1540 + 0x29b13ac));
    func_0x01438628(*(undefined4 *)(_UNK_029b1544 + 0x29b13b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4ab0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4ab0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028e1d8c + 0x28e1cac);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028e1d90 + 0x28e1cc0),param_1,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028e1d94 + 0x28e1d7c));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029b1548 + 0x29b1410));
  func_0x024eeca8(iVar1,0);
  if (*(int *)(**(int **)(_UNK_029b154c + 0x29b142c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_029b1550 + 0x29b1448));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x020e9710(iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar6 = (int *)(iVar1 + 8);
  *piVar6 = iVar3;
  func_0x014385cc(piVar6,iVar3);
  if (*piVar6 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_029b1554 + 0x29b14a4));
    func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_029b1558 + 0x29b14c4),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_029b155c + 0x29b14e8));
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_029b1560 + 0x29b151c));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02e674a4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02e67628 + 0x2e674bc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e6762c + 0x2e674d0));
    func_0x01438628(*(undefined4 *)(_UNK_02e67630 + 0x2e674dc));
    func_0x01438628(*(undefined4 *)(_UNK_02e67634 + 0x2e674e8));
    func_0x01438628(*(undefined4 *)(_UNK_02e67638 + 0x2e674f4));
    func_0x01438628(*(undefined4 *)(_UNK_02e6763c + 0x2e67500));
    func_0x01438628(*(undefined4 *)(_UNK_02e67640 + 0x2e6750c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6712,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6712,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02e67644 + 0x2e67568));
  func_0x024eeca8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  piVar3 = *(int **)(_UNK_02e67648 + 0x2e67590);
  *(undefined4 *)(iVar2 + 8) = param_2;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6764c + 0x2e675b0));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x38);
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02e67650 + 0x2e675d0));
  func_0x03a062d0(uVar6,iVar2,**(undefined4 **)(_UNK_02e67654 + 0x2e675f0),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x04cfe1c0(iVar5,uVar6,**(undefined4 **)(_UNK_02e67658 + 0x2e67614));
  return (uint)(iVar2 != 0);
}


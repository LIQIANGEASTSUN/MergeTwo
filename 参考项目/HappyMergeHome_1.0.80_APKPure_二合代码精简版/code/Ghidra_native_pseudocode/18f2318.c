
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01902318(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
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
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01902548 + 0x1902330);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0190254c + 0x1902344));
    func_0x01438628(*(undefined4 *)(_UNK_01902550 + 0x1902350));
    func_0x01438628(*(undefined4 *)(_UNK_01902554 + 0x190235c));
    func_0x01438628(*(undefined4 *)(_UNK_01902558 + 0x1902368));
    func_0x01438628(*(undefined4 *)(_UNK_0190255c + 0x1902374));
    func_0x01438628(*(undefined4 *)(_UNK_01902560 + 0x1902380));
    func_0x01438628(*(undefined4 *)(_UNK_01902564 + 0x190238c));
    func_0x01438628(*(undefined4 *)(_UNK_01902568 + 0x1902398));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1d74,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1d74,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0190256c + 0x19023f4));
  func_0x024eeca8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar2 + 8) = param_1;
  func_0x014385cc((int *)(iVar2 + 8),param_1);
  cVar1 = *(char *)(param_1 + 0x4a);
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  if (cVar1 != '\0') {
    return;
  }
  piVar3 = *(int **)(_UNK_01902570 + 0x1902444);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01902574 + 0x1902464));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  func_0x0202998c(iVar7,0x755,0,0);
  if (*(int *)(**(int **)(_UNK_01902578 + 0x1902498) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar3 = (int *)func_0x014e9518(**(undefined4 **)(_UNK_0190257c + 0x19024b4));
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  if (piVar3 == (int *)0x0) {
    func_0x014388e4();
  }
  (**(code **)(*piVar3 + 0x240))(piVar3,uVar8,*(undefined4 *)(*piVar3 + 0x244));
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01902580 + 0x19024f0));
  func_0x033341c0(uVar8,iVar2,**(undefined4 **)(_UNK_01902584 + 0x190250c),0);
  if (*(int *)(**(int **)(_UNK_01902588 + 0x1902520) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_02af1c3c + 0x2af1b30);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02af1c40 + 0x2af1b44),uVar8,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02af1c44 + 0x2af1b50));
    func_0x01438628(*(undefined4 *)(_UNK_02af1c48 + 0x2af1b5c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x9f1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x9f1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x02889978(iVar2,0x3f000000,uVar8,1);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c4c + 0x2af1bc4));
  func_0x024eeca8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar2 + 8) = uVar8;
  func_0x014385cc((undefined4 *)(iVar2 + 8),uVar8);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c50 + 0x2af1bfc));
  func_0x033341c0(uVar8,iVar2,**(undefined4 **)(_UNK_02af1c54 + 0x2af1c18),0);
  pcVar6 = (char *)(_UNK_033397d0 + 0x33396f8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033397d4 + 0x333970c),uVar8,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_033397d8 + 0x3339718));
    func_0x01438628(*(undefined4 *)(_UNK_033397dc + 0x3339724));
    func_0x01438628(*(undefined4 *)(_UNK_033397e0 + 0x3339730));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_033397e4 + 0x3339744) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar9 = func_0x0333764c();
  uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0x90);
  }
  if ((iVar2 != 0 && uVar4 != 0) && (*(char *)(iVar2 + 0xa0) == '\0')) {
    *(float *)(iVar2 + 200) = *(float *)(iVar2 + 0x60);
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) + 0.5;
  }
  uVar8 = func_0x03734fd0(iVar2,uVar8,**(undefined4 **)(_UNK_033397e8 + 0x3339774));
  iVar2 = func_0x03735e5c(uVar8,0,1,**(undefined4 **)(_UNK_033397ec + 0x333978c));
  uVar4 = **(uint **)(_UNK_033397f0 + 0x33397a0);
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0x90);
  }
  if (iVar2 != 0 && uVar4 != 0) {
    if (*(char *)(iVar2 + 0xa0) == '\0') {
      *(undefined1 *)(iVar2 + 0x5c) = 1;
    }
    return;
  }
  return;
}


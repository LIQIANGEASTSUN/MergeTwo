
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4a404(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02c4a580 + 0x2c4a41c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4a584 + 0x2c4a430));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a588 + 0x2c4a43c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a58c + 0x2c4a448));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a590 + 0x2c4a454));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a594 + 0x2c4a460));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a598 + 0x2c4a46c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2282,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2282,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0289b0e4 + 0x289aff0);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0289b0e8 + 0x289b004),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0289b0ec + 0x289b0d4));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4a59c + 0x2c4a4c8));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02c4a5a0 + 0x2c4a4f0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c4a5a4 + 0x2c4a510));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c4a5a8 + 0x2c4a530));
  func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02c4a5ac + 0x2c4a550),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar4,uVar5,**(undefined4 **)(_UNK_02c4a5b0 + 0x2c4a574));
  return;
}


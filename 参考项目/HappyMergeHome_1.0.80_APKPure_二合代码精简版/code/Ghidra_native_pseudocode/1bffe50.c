
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c0fe50(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01c0ffd0 + 0x1c0fe64);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffd4 + 0x1c0fe78));
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffd8 + 0x1c0fe84));
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffdc + 0x1c0fe90));
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffe0 + 0x1c0fe9c));
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffe4 + 0x1c0fea8));
    func_0x01438628(*(undefined4 *)(_UNK_01c0ffe8 + 0x1c0feb4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x349a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x349a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028cfa9c + 0x28cf9bc);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028cfaa0 + 0x28cf9d0),param_1,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028cfaa4 + 0x28cfa8c));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c0ffec + 0x1c0ff0c));
  func_0x024eeca8(iVar1,0);
  uVar6 = FUN_01c0f9c8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_01c0fff0 + 0x1c0ff40);
  *(undefined4 *)(iVar1 + 8) = uVar6;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01c0fff4 + 0x1c0ff60));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c0fff8 + 0x1c0ff80));
  func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_01c0fffc + 0x1c0ffa0),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar5,uVar6,**(undefined4 **)(_UNK_01c10000 + 0x1c0ffc4));
  return;
}


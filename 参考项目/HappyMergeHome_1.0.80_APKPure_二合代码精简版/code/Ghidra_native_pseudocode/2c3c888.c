
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4c888(undefined4 param_1,undefined4 param_2)

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
  
  pcVar6 = (char *)(_UNK_02c4ca04 + 0x2c4c8a0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca08 + 0x2c4c8b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca0c + 0x2c4c8c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca10 + 0x2c4c8cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca14 + 0x2c4c8d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca18 + 0x2c4c8e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4ca1c + 0x2c4c8f0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f0e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f0e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0287959c + 0x28794a8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028795a0 + 0x28794bc),param_1,param_2,0);
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
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028795a4 + 0x287958c));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4ca20 + 0x2c4c94c));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02c4ca24 + 0x2c4c974);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c4ca28 + 0x2c4c994));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x10);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c4ca2c + 0x2c4c9b4));
  func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02c4ca30 + 0x2c4c9d4),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar4,uVar5,**(undefined4 **)(_UNK_02c4ca34 + 0x2c4c9f8));
  return;
}


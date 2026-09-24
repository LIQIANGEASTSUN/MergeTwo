
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb3268(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01bb343c + 0x1bb327c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb3440 + 0x1bb3290));
    func_0x01438628(*(undefined4 *)(_UNK_01bb3444 + 0x1bb329c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb3448 + 0x1bb32a8));
    func_0x01438628(*(undefined4 *)(_UNK_01bb344c + 0x1bb32b4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb3450 + 0x1bb32c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xc91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xc91,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01bb3454 + 0x1bb3318) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bb3458 + 0x1bb3334));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01bb345c + 0x1bb3354));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x374);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0268be6c(iVar1,0);
  iVar1 = FUN_01ba9704(param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026be500(iVar1,uVar7,0);
  if (*(int *)(**(int **)(_UNK_01bb3460 + 0x1bb33c0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01bb3464 + 0x1bb33dc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x020e9710(iVar1,0);
  if (iVar1 != 0) {
    iVar6 = FUN_01ba9704(param_1);
    iVar1 = *(int *)(iVar1 + 0x1a8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_026be674 + 0x26be5ec);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026be678 + 0x26be600),iVar1,0);
      func_0x01438628(*(undefined4 *)(_UNK_026be67c + 0x26be60c));
      *pcVar5 = '\x01';
    }
    if (*(int *)(iVar6 + 0xc) == iVar1) {
      return;
    }
    piVar2 = *(int **)(_UNK_026be680 + 0x26be62c);
    *(int *)(iVar6 + 0xc) = iVar1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026be684 + 0x26be64c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar1 + 0x60);
    *(uint *)(iVar1 + 0x60) = uVar3 + 1;
    *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar3);
    return;
  }
  return;
}


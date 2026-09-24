
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c757a4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02c75b98 + 0x2c757bc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c75b9c + 0x2c757d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c75ba0 + 0x2c757dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c75ba4 + 0x2c757e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c75ba8 + 0x2c757f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bac + 0x2c75800));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bb0 + 0x2c7580c));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bb4 + 0x2c75818));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bb8 + 0x2c75824));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bbc + 0x2c75830));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bc0 + 0x2c7583c));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bc4 + 0x2c75848));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bc8 + 0x2c75854));
    func_0x01438628(*(undefined4 *)(_UNK_02c75bcc + 0x2c75860));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ffd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ffd,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  func_0x02c75c04(param_1,*(undefined4 *)(param_1 + 0x78));
  func_0x02c75e5c(param_1);
  uVar7 = func_0x024ef5b8(0);
  piVar2 = *(int **)(_UNK_02c75bd0 + 0x2c758dc);
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c75bd4 + 0x2c758fc));
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(_UNK_02c75bd8 + 0x2c75940) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c75bdc + 0x2c75960));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = 0x13;
  if (iVar1 < 1) {
    uVar7 = 0x21;
  }
  func_0x0202998c(iVar5,uVar7,0,0);
  func_0x02c762ec(param_1,*(undefined4 *)(param_1 + 0x7c));
  if (*(int *)(**(int **)(_UNK_02c75be0 + 0x2c759a8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c75be4 + 0x2c759c4));
  piVar2 = *(int **)(_UNK_02c75be8 + 0x2c759d8);
  iVar5 = *piVar2;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar2;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x1c);
  piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c75bec + 0x2c759fc),2);
  uStack_1c = FUN_02c6b6f0(param_1);
  iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02c75bf0 + 0x2c75a20),&uStack_1c);
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar5 != 0) && (iVar3 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar2[3] == 0) {
    func_0x014388e8();
  }
  piVar2[4] = iVar5;
  func_0x014385cc(piVar2 + 4,iVar5);
  uStack_20 = *(undefined4 *)(param_1 + 0x78);
  iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02c75bf4 + 0x2c75a9c),&uStack_20);
  if ((iVar5 != 0) && (iVar3 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x014388e8();
  }
  piVar2[5] = iVar5;
  func_0x014385cc(piVar2 + 5,iVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar1,uVar7,piVar2,0);
  if (*(int *)(**(int **)(_UNK_02c75bf8 + 0x2c75b24) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c75bfc + 0x2c75b40));
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  uVar7 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_28 = 1;
  uStack_24 = 0;
  FUN_02bda8ac(iVar1,uVar4,uVar7,**(undefined4 **)(_UNK_02c75c00 + 0x2c75b78));
  return;
}


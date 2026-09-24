
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016883f8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_01688590 + 0x1688410);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01688594 + 0x1688424));
    func_0x01438628(*(undefined4 *)(_UNK_01688598 + 0x1688430));
    func_0x01438628(*(undefined4 *)(_UNK_0168859c + 0x168843c));
    func_0x01438628(*(undefined4 *)(_UNK_016885a0 + 0x1688448));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x87b3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_0292292c + 0x2922838);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02922930 + 0x292284c),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02922934 + 0x292291c));
    return uVar6;
  }
  piVar5 = *(int **)(_UNK_016885a4 + 0x16884a4);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_016885a8 + 0x16884c0);
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if ((-1 < param_2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (param_2 < *(int *)(iVar1 + 0xc)) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = (*(code *)&SUB_04cfd760)(iVar1,param_2,**(undefined4 **)(_UNK_016885ac + 0x168857c));
      return uVar6;
    }
  }
  return 0;
}


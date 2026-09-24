
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c2b1c(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016c2cb4 + 0x16c2b34);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c2cb8 + 0x16c2b48));
    func_0x01438628(*(undefined4 *)(_UNK_016c2cbc + 0x16c2b54));
    func_0x01438628(*(undefined4 *)(_UNK_016c2cc0 + 0x16c2b60));
    func_0x01438628(*(undefined4 *)(_UNK_016c2cc4 + 0x16c2b6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8940,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8940,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_029235d4 + 0x29234e0);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029235d8 + 0x29234f4),param_1,param_2,0);
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
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_029235dc + 0x29235c4));
    return uVar6;
  }
  piVar5 = *(int **)(_UNK_016c2cc8 + 0x16c2bc8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_016c2ccc + 0x16c2be4);
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if ((-1 < param_2) && (*(int *)(iVar1 + 0x38) != 0)) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
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
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = (*(code *)&UNK_04cfd760)(iVar1,param_2,**(undefined4 **)(_UNK_016c2cd0 + 0x16c2ca0));
      return uVar6;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ebc9c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02ebcc30 + 0x2ebc9d4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc34 + 0x2ebc9e8));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc38 + 0x2ebc9f4));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc3c + 0x2ebca00));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc40 + 0x2ebca0c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc44 + 0x2ebca18));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc48 + 0x2ebca24));
    func_0x01438628(*(undefined4 *)(_UNK_02ebcc4c + 0x2ebca30));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x433,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x433,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02877900 + 0x2877820);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02877904 + 0x2877834),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02877908 + 0x28778f0));
    return uVar7;
  }
  piVar8 = *(int **)(_UNK_02ebcc50 + 0x2ebca88);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02ebcc54 + 0x2ebcaa4);
  iVar1 = func_0x04e4a028(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02ebcc58 + 0x2ebcac8);
  iVar1 = func_0x036c7bec(iVar1,*puVar10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x188);
  iVar1 = FUN_02eb5b50(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar1 + 8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046ccb14(iVar5,uVar7,**(undefined4 **)(_UNK_02ebcc5c + 0x2ebcb18));
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02ebcc60 + 0x2ebcb34));
    FUN_026c2d2c(iVar2,0);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
      FUN_026c2714(0,uVar7,0);
      func_0x014388e4();
    }
    else {
      FUN_026c2714(iVar2,uVar7,0);
    }
    FUN_026c2980(iVar2,1,0);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x03b71e6c(iVar5,uVar7,iVar2,**(undefined4 **)(_UNK_02ebcc64 + 0x2ebcbb0));
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(*puVar9);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x036c7bec(iVar5,*puVar10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x188);
  uVar7 = *(undefined4 *)(iVar1 + 8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar1 = **(int **)(_UNK_02ebcc68 + 0x2ebcc24);
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x34);
  uVar3 = func_0x046cd0dc(iVar5,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x84));
  if ((int)uVar3 < 0) {
    uVar7 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38),
                            &stack0xffffffe4);
    uVar4 = 0;
    func_0x05187a50(uVar7,0);
  }
  else {
    iVar1 = *(int *)(iVar5 + 0xc);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      func_0x034a8c14();
    }
    uVar4 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
  }
  return uVar4;
}


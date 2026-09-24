
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019049b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01904bd8 + 0x19049c8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01904bdc + 0x19049dc));
    func_0x01438628(*(undefined4 *)(_UNK_01904be0 + 0x19049e8));
    func_0x01438628(*(undefined4 *)(_UNK_01904be4 + 0x19049f4));
    func_0x01438628(*(undefined4 *)(_UNK_01904be8 + 0x1904a00));
    func_0x01438628(*(undefined4 *)(_UNK_01904bec + 0x1904a0c));
    func_0x01438628(*(undefined4 *)(_UNK_01904bf0 + 0x1904a18));
    func_0x01438628(*(undefined4 *)(_UNK_01904bf4 + 0x1904a24));
    func_0x01438628(*(undefined4 *)(_UNK_01904bf8 + 0x1904a30));
    *pcVar3 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x2989,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2989,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01904bfc + 0x1904a90));
  func_0x024eeca8(iVar1,0);
  iVar4 = FUN_018f5e54(param_1);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_01904c00 + 0x1904abc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01904c04 + 0x1904ad8));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar4 = func_0x029a6fa8(iVar4,param_2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar5 = (int *)(iVar1 + 8);
    *piVar5 = iVar4;
    func_0x014385cc(piVar5,iVar4);
    if (*piVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_01904c08 + 0x1904b3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01904c0c + 0x1904b58));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x24);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01904c10 + 0x1904b78));
      func_0x024f0614(uVar6,iVar1,**(undefined4 **)(_UNK_01904c14 + 0x1904b98),0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar4,uVar6,**(undefined4 **)(_UNK_01904c18 + 0x1904bbc));
      uVar6 = 0;
      if (iVar1 != 0) {
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}


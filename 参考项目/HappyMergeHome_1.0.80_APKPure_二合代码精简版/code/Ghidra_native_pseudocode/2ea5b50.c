
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02eb5b50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar4 = (char *)(_UNK_02eb5d48 + 0x2eb5b64);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d4c + 0x2eb5b78));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d50 + 0x2eb5b84));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d54 + 0x2eb5b90));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d58 + 0x2eb5b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d5c + 0x2eb5ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d60 + 0x2eb5bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d64 + 0x2eb5bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d68 + 0x2eb5bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02eb5d6c + 0x2eb5bd8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x434,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x434,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028777f8 + 0x2877718);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028777fc + 0x287772c),param_1,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02877800 + 0x28777e8));
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02eb5d70 + 0x2eb5c30));
  func_0x024eeca8(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02eb5d74 + 0x2eb5c4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02eb5d78 + 0x2eb5c68));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02eb5d7c + 0x2eb5c88));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = uVar6;
  func_0x014385cc((undefined4 *)(iVar1 + 8),uVar6);
  if (*(int *)(**(int **)(_UNK_02eb5d80 + 0x2eb5cbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02eb5d84 + 0x2eb5cd8));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar3 + 0x14);
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02eb5d88 + 0x2eb5cf8));
  func_0x03a062d0(iVar3,iVar1,**(undefined4 **)(_UNK_02eb5d8c + 0x2eb5d18),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (iVar3 == 0) {
    func_0x05174af8(8,0,**(undefined4 **)(_UNK_02eb5d90 + 0x2eb5d3c));
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = 4;
    do {
      iVar7 = *(int *)(iVar5 + 8);
      if (iVar7 == 0) {
        func_0x034a8a64();
      }
      if (*(uint *)(iVar7 + 0xc) <= iVar1 - 4U) {
        func_0x034a8c14();
      }
      uVar6 = *(undefined4 *)(iVar7 + iVar1 * 4);
      if (iVar3 == 0) {
        func_0x034a8a64();
      }
      iVar7 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar6,*(undefined4 *)(iVar3 + 0x14));
      if (iVar7 != 0) {
        iVar3 = *(int *)(iVar5 + 8);
        if (iVar3 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar3 + 0xc) <= iVar1 - 4U) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar3 + iVar1 * 4);
      }
      iVar7 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar7 < *(int *)(iVar5 + 0xc));
  }
  return 0;
}


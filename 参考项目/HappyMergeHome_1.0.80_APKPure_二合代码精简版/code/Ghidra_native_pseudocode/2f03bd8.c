
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f13bd8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_02f13d64 + 0x2f13bf0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f13d68 + 0x2f13c04));
    func_0x01438628(*(undefined4 *)(_UNK_02f13d6c + 0x2f13c10));
    func_0x01438628(*(undefined4 *)(_UNK_02f13d70 + 0x2f13c1c));
    func_0x01438628(*(undefined4 *)(_UNK_02f13d74 + 0x2f13c28));
    func_0x01438628(*(undefined4 *)(_UNK_02f13d78 + 0x2f13c34));
    func_0x01438628(*(undefined4 *)(_UNK_02f13d7c + 0x2f13c40));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6c05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6c05,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02913184 + 0x2913090);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02913188 + 0x29130a4),param_1,param_2,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0291318c + 0x2913174));
    return uVar5;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f13d80 + 0x2f13c9c));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_1);
  if (*(int *)(**(int **)(_UNK_02f13d84 + 0x2f13cd8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f13d88 + 0x2f13cf4));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar4 + 0x1c);
  iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f13d8c + 0x2f13d14));
  func_0x03a062d0(iVar4,iVar1,**(undefined4 **)(_UNK_02f13d90 + 0x2f13d34),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (iVar4 == 0) {
    func_0x05174af8(8,0,**(undefined4 **)(_UNK_02f13d94 + 0x2f13d58));
  }
  if (0 < *(int *)(iVar3 + 0xc)) {
    iVar1 = 4;
    do {
      iVar7 = *(int *)(iVar3 + 8);
      if (iVar7 == 0) {
        func_0x034a8a64();
      }
      if (*(uint *)(iVar7 + 0xc) <= iVar1 - 4U) {
        func_0x034a8c14();
      }
      uVar5 = *(undefined4 *)(iVar7 + iVar1 * 4);
      if (iVar4 == 0) {
        func_0x034a8a64();
      }
      iVar7 = (**(code **)(iVar4 + 0xc))
                        (*(undefined4 *)(iVar4 + 0x20),uVar5,*(undefined4 *)(iVar4 + 0x14));
      if (iVar7 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
        if (iVar4 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar4 + 0xc) <= iVar1 - 4U) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar4 + iVar1 * 4);
      }
      iVar7 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar7 < *(int *)(iVar3 + 0xc));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f1382c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  pcVar6 = (char *)(_UNK_02f139c0 + 0x2f13840);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f139c4 + 0x2f13854));
    func_0x01438628(*(undefined4 *)(_UNK_02f139c8 + 0x2f13860));
    func_0x01438628(*(undefined4 *)(_UNK_02f139cc + 0x2f1386c));
    func_0x01438628(*(undefined4 *)(_UNK_02f139d0 + 0x2f13878));
    func_0x01438628(*(undefined4 *)(_UNK_02f139d4 + 0x2f13884));
    func_0x01438628(*(undefined4 *)(_UNK_02f139d8 + 0x2f13890));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6c28,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6c28,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_029133fc + 0x291331c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02913400 + 0x2913330),param_1,0);
      *pcVar6 = '\x01';
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02913404 + 0x29133ec));
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f139dc + 0x2f138e8));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_1);
  uVar7 = FUN_02f12f44(param_1);
  piVar2 = *(int **)(_UNK_02f139e0 + 0x2f13930);
  *(undefined4 *)(iVar1 + 8) = uVar7;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f139e4 + 0x2f13950));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar5 + 0x1c);
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f139e8 + 0x2f13970));
  func_0x03a062d0(iVar5,iVar1,**(undefined4 **)(_UNK_02f139ec + 0x2f13990),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar5 == 0) {
    func_0x05174af8(8,0,**(undefined4 **)(_UNK_02f139f0 + 0x2f139b4));
  }
  if (0 < *(int *)(iVar4 + 0xc)) {
    iVar1 = 4;
    do {
      iVar8 = *(int *)(iVar4 + 8);
      if (iVar8 == 0) {
        func_0x034a8a64();
      }
      if (*(uint *)(iVar8 + 0xc) <= iVar1 - 4U) {
        func_0x034a8c14();
      }
      uVar7 = *(undefined4 *)(iVar8 + iVar1 * 4);
      if (iVar5 == 0) {
        func_0x034a8a64();
      }
      iVar8 = (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)(iVar5 + 0x20),uVar7,*(undefined4 *)(iVar5 + 0x14));
      if (iVar8 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
        if (iVar5 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar5 + 0xc) <= iVar1 - 4U) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar5 + iVar1 * 4);
      }
      iVar8 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar8 < *(int *)(iVar4 + 0xc));
  }
  return 0;
}


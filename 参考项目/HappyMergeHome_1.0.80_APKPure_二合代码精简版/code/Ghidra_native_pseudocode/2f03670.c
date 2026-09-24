
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f13670(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_02f137f0 + 0x2f13684);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f137f4 + 0x2f13698));
    func_0x01438628(*(undefined4 *)(_UNK_02f137f8 + 0x2f136a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f137fc + 0x2f136b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f13800 + 0x2f136bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f13804 + 0x2f136c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f13808 + 0x2f136d4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6bf8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6bf8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02912d44 + 0x2912c64);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02912d48 + 0x2912c78),param_1,0);
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
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02912d4c + 0x2912d34));
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f1380c + 0x2f1372c));
  func_0x024eeca8(iVar1,0);
  uVar7 = FUN_02f12f44(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02f13810 + 0x2f13760);
  *(undefined4 *)(iVar1 + 8) = uVar7;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f13814 + 0x2f13780));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar5 + 0x18);
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f13818 + 0x2f137a0));
  func_0x03a062d0(iVar5,iVar1,**(undefined4 **)(_UNK_02f1381c + 0x2f137c0),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar5 == 0) {
    func_0x05174af8(8,0,**(undefined4 **)(_UNK_02f13820 + 0x2f137e4));
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


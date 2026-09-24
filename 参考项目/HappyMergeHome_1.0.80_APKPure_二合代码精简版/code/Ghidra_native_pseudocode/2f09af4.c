
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f19af4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
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
  
  pcVar7 = (char *)(_UNK_02f19c70 + 0x2f19b0c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f19c74 + 0x2f19b20));
    func_0x01438628(*(undefined4 *)(_UNK_02f19c78 + 0x2f19b2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f19c7c + 0x2f19b38));
    func_0x01438628(*(undefined4 *)(_UNK_02f19c80 + 0x2f19b44));
    func_0x01438628(*(undefined4 *)(_UNK_02f19c84 + 0x2f19b50));
    func_0x01438628(*(undefined4 *)(_UNK_02f19c88 + 0x2f19b5c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2888,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2888,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028c29f4 + 0x28c2900);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028c29f8 + 0x28c2914),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028c29fc + 0x28c29e4));
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f19c8c + 0x2f19bb8));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02f19c90 + 0x2f19be0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f19c94 + 0x2f19c00));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar5 + 0x1c);
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f19c98 + 0x2f19c20));
  func_0x03a062d0(iVar5,iVar1,**(undefined4 **)(_UNK_02f19c9c + 0x2f19c40),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar5 == 0) {
    func_0x05174af8(8,0,**(undefined4 **)(_UNK_02f19ca0 + 0x2f19c64));
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
      uVar6 = *(undefined4 *)(iVar8 + iVar1 * 4);
      if (iVar5 == 0) {
        func_0x034a8a64();
      }
      iVar8 = (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)(iVar5 + 0x20),uVar6,*(undefined4 *)(iVar5 + 0x14));
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


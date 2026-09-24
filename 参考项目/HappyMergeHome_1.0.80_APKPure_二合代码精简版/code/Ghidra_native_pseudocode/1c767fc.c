
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c867fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar4 = (char *)(_UNK_01c86a78 + 0x1c86810);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c86a7c + 0x1c86824));
    func_0x01438628(*(undefined4 *)(_UNK_01c86a80 + 0x1c86830));
    func_0x01438628(*(undefined4 *)(_UNK_01c86a84 + 0x1c8683c));
    func_0x01438628(*(undefined4 *)(_UNK_01c86a88 + 0x1c86848));
    func_0x01438628(*(undefined4 *)(_UNK_01c86a8c + 0x1c86854));
    func_0x01438628(*(undefined4 *)(_UNK_01c86a90 + 0x1c86860));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1ab6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1ab6,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar3,0,0);
    uVar8 = func_0x024f56e0(&uStack_30,0,0);
    return uVar8;
  }
  iVar1 = FUN_01c81224(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x18) < 1) {
      return 0;
    }
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x21) == '\0') {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_01c86a94 + 0x1c86938) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01c86a98 + 0x1c86954));
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01c86a9c + 0x1c86998) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c86aa0 + 0x1c869b4));
    piVar5 = *(int **)(_UNK_01c86aa4 + 0x1c869c8);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar5;
    }
    iVar7 = **(int **)(_UNK_01c86aa8 + 0x1c869e8);
    iVar2 = *(int *)(iVar7 + 0x1c);
    uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xc0c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar7);
      iVar2 = *(int *)(iVar7 + 0x1c);
    }
    iVar6 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x0149097c();
    }
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x0149097c();
    }
    uVar3 = **(undefined4 **)(iVar6 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b0c90c(iVar1,uVar8,uVar3,0);
    uVar3 = 1;
  }
  return uVar3;
}


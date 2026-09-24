
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c4c030(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02c4c1bc + 0x2c4c048);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1c0 + 0x2c4c05c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1c4 + 0x2c4c068));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1c8 + 0x2c4c074));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1cc + 0x2c4c080));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1d0 + 0x2c4c08c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c1d4 + 0x2c4c098));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cd9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cd9,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x024f56f0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4c1d8 + 0x2c4c0f4));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_02c4c1dc + 0x2c4c11c);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c4c1e0 + 0x2c4c13c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c4c1e4 + 0x2c4c15c));
  uVar3 = 0;
  func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02c4c1e8 + 0x2c4c180),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar4,uVar5,**(undefined4 **)(_UNK_02c4c1ec + 0x2c4c1a4));
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar3;
}


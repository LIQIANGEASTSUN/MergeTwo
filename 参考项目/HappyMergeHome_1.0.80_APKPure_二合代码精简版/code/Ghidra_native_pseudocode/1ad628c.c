
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ae628c(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_01ae63b4 + 0x1ae629c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae63b8 + 0x1ae62b0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae63bc + 0x1ae62bc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1892,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1892,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar6,&uStack_30,uVar5,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = **(int **)(**(int **)(_UNK_01ae63c0 + 0x1ae6310) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = func_0x02b2f170(iVar1,0);
  if (iVar1 == 0xb) {
    piVar4 = *(int **)(_UNK_01ae63c4 + 0x1ae6348);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar3 = (char *)(_UNK_01ae63c8 + 0x1ae6364);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01ae63cc + 0x1ae6378));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    uVar2 = (uint)(**(int **)(iVar1 + 0x5c) == 2);
  }
  return uVar2;
}


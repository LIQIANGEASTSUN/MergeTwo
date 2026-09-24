
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bfb1f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02bfb2f8 + 0x2bfb204);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfb2fc + 0x2bfb218));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb300 + 0x2bfb224));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2194,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2194,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02bfb304 + 0x2bfb27c) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02bfb308 + 0x2bfb298);
  iVar3 = func_0x014e9518(*puVar8);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02bad204(iVar3,uVar7,uVar4,0);
  iVar5 = func_0x014e9518(*puVar8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02953fd4(0x2195,0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2195,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar5,0);
    func_0x01523a6c(&uStack_38,iVar3,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  return (uint)(*(int *)(iVar3 + 0xc) == -1 || *(int *)(iVar3 + 0xc) == 10);
}


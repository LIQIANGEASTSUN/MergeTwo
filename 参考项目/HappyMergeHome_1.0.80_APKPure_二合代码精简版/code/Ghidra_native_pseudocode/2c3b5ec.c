
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4b5ec(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_02c4b700 + 0x2c4b604);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4b704 + 0x2c4b618));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b708 + 0x2c4b624));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d51,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02c4b70c + 0x2c4b680) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4b710 + 0x2c4b69c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x029a6fa8(iVar2,param_2,0);
    uVar1 = 1;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x4c) != -1) {
        return 1;
      }
      uVar3 = *(int *)(iVar2 + 0x1c) - 0x12;
      uVar1 = 0;
      if (uVar3 < 0x10) {
        uVar1 = 0x8003U >> (uVar3 & 0xff) & 1;
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x5d51,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
  uVar1 = func_0x024f56e0(&uStack_38,0,0);
  return uVar1;
}


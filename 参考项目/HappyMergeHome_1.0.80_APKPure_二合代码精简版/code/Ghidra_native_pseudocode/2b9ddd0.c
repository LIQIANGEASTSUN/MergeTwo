
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02baddd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02bade60 + 0x2badde4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bade64 + 0x2baddf8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7a6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02883d7c + 0x2883c9c);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02883d80 + 0x2883cb0),param_1,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02883d84 + 0x2883d6c));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = **(int **)(_UNK_02bade68 + 0x2bade50);
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x024f83f8(iVar3);
  }
  uStack_14 = 0;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046ce3e4(iVar1,uVar5,&uStack_14,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc));
  return uStack_14;
}


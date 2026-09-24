
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfa29c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bfa3d4 + 0x2bfa2b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfa3d8 + 0x2bfa2c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa3dc + 0x2bfa2d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ee3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ee3,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    func_0x024f0fd8(param_1,iVar1,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  func_0x014385cc((int *)(param_1 + 0x58),0);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    func_0x024f0fd8(param_1,iVar1,0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  func_0x014385cc((int *)(param_1 + 0x5c),0);
  (*(code *)&UNK_05d3fb3c)(param_1,**(undefined4 **)(_UNK_02bfa3e0 + 0x2bfa3c8),0);
  return;
}


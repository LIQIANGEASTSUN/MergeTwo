
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7b864(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01c7b99c + 0x1c7b878);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7b9a0 + 0x1c7b88c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad90,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad90,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((*(char *)(iVar1 + 0x20) == '\0') && (uVar2 = 1, *(char *)(param_1 + 0x50) == '\0')) {
      iVar1 = FUN_01c733a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x54);
      iVar1 = FUN_01c733a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024f0f34(iVar5,uVar6,**(undefined4 **)(_UNK_01c7b9a4 + 0x1c7b988));
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}


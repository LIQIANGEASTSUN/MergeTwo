
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_030e0260(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
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
  
  pcVar5 = (char *)(_UNK_030e038c + 0x30e0278);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e0390 + 0x30e028c));
    func_0x01438628(*(undefined4 *)(_UNK_030e0394 + 0x30e0298));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x2bb7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2bb7,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = FUN_030ccf14(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_030e0398 + 0x30e0308) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030e039c + 0x30e0324));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar1 = FUN_029a6fa8(iVar1,param_2,0);
    if (iVar1 != 0) {
      iVar3 = FUN_030d34b8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = (uint)(*(int *)(iVar3 + 0xc) == *(int *)(iVar1 + 0x30));
    }
  }
  return uVar6;
}


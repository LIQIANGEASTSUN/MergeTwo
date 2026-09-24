
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7d1c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01c7d2ec + 0x1c7d1d8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7d2f0 + 0x1c7d1ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c7d2f4 + 0x1c7d1f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c7d2f8 + 0x1c7d204));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xadbb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_30._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30._0_4_ = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30._0_4_ = uStack_48;
    uStack_30._4_4_ = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01c7d2fc + 0x1c7d260) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01c7d300 + 0x1c7d27c));
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(**(int **)(_UNK_01c7d304 + 0x1c7d290) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = func_0x02aed6d8(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x02b768cc(iVar1,0,uVar5);
  return;
}


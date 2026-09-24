
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c16e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_016c17f8 + 0x16c16f8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c17fc + 0x16c170c));
    func_0x01438628(*(undefined4 *)(_UNK_016c1800 + 0x16c1718));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1eca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1eca,0);
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
    return;
  }
  iVar1 = func_0x016b6be8(param_1);
  if (*(int *)(**(int **)(_UNK_016c1804 + 0x16c1780) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016c1808 + 0x16c179c));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x026ffbe0(iVar5,0);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  iVar5 = iVar2;
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar5 = extraout_r1;
  }
  uStack_20 = 0;
  func_0x026cf1e0(iVar1,iVar5,(undefined *)uVar7 + -86400000,
                  iVar2 - (uint)((undefined *)uVar7 < &UNK_05265c00));
  return;
}


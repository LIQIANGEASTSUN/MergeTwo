
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016870f0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
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
  
  pcVar3 = (char *)(_UNK_01687204 + 0x1687108);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01687208 + 0x168711c));
    func_0x01438628(*(undefined4 *)(_UNK_0168720c + 0x1687128));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x20e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x20e3,0);
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
  iVar1 = FUN_0167c750(param_1);
  if (*(int *)(**(int **)(_UNK_01687210 + 0x1687190) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01687214 + 0x16871ac));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  lVar6 = func_0x026ffbe0(iVar4,0);
  uVar5 = (undefined4)((ulonglong)lVar6 >> 0x20);
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar5 = extraout_r1;
  }
  uStack_20 = 0;
  func_0x026efdf4(iVar1,uVar5,(int)(lVar6 + 10000),(int)((ulonglong)(lVar6 + 10000) >> 0x20));
  return;
}


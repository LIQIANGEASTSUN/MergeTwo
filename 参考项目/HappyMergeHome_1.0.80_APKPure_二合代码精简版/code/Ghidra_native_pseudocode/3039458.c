
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03049458(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_03049550 + 0x304946c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03049554 + 0x3049480));
    func_0x01438628(*(undefined4 *)(_UNK_03049558 + 0x304948c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x147b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x147b,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_0304955c + 0x30494e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03049560 + 0x3049500));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar2,0);
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  if (param_1 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  bVar7 = (uint)uVar8 < *(uint *)(param_1 + 0x28);
  return (uint)((int)(iVar2 - (iVar4 + (uint)bVar7)) < 0 ==
               (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar7)));
}


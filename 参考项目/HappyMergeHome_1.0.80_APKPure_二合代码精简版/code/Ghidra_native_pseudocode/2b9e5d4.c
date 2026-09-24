
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bae5d4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02bae788 + 0x2bae5e8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bae78c + 0x2bae5fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bae790 + 0x2bae608));
    func_0x01438628(*(undefined4 *)(_UNK_02bae794 + 0x2bae614));
    func_0x01438628(*(undefined4 *)(_UNK_02bae798 + 0x2bae620));
    func_0x01438628(*(undefined4 *)(_UNK_02bae79c + 0x2bae62c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ccb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ccb,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02bae7a0 + 0x2bae684) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bae7a4 + 0x2bae6a0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = 0;
  uVar7 = func_0x026ffbe0(iVar1,0);
  uVar7 = func_0x014e6e04((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar1 = FUN_02baddd0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0x44) < uVar2 ||
      uVar2 - *(uint *)(iVar1 + 0x44) < (uint)(*(uint *)(iVar1 + 0x40) <= (uint)uVar7)) {
    iVar1 = FUN_02baddd0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (*(int *)(**(int **)(_UNK_02bae7a8 + 0x2bae724) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02bae7ac + 0x2bae744));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar4 = func_0x029b3f20(iVar4,**(undefined4 **)(_UNK_02bae7b0 + 0x2bae76c),0);
    if ((int)((uint)uVar7 - iVar1) < iVar4) {
      uVar6 = 1;
    }
  }
  return uVar6;
}


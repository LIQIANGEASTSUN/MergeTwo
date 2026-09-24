
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be8708(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02be88b8 + 0x2be871c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be88bc + 0x2be8730));
    func_0x01438628(*(undefined4 *)(_UNK_02be88c0 + 0x2be873c));
    func_0x01438628(*(undefined4 *)(_UNK_02be88c4 + 0x2be8748));
    func_0x01438628(*(undefined4 *)(_UNK_02be88c8 + 0x2be8754));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d33,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02be88cc + 0x2be87ac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be88d0 + 0x2be87c8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1348(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02be88d4 + 0x2be87f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02be88d8 + 0x2be8814));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = 0;
  uVar7 = func_0x026ffbe0(iVar5,0);
  uVar7 = func_0x014e6e04((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar5 = FUN_02baddd0(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0x74) < uVar2 ||
      uVar2 - *(uint *)(iVar5 + 0x74) < (uint)(*(uint *)(iVar5 + 0x70) <= (uint)uVar7)) {
    iVar5 = FUN_02baddd0(param_1);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0x70);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    if ((int)((uint)uVar7 - iVar5) < *(int *)(iVar1 + 0x10)) {
      uVar6 = 1;
    }
  }
  return uVar6;
}


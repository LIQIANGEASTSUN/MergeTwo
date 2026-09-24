
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0192b49c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_0192b594 + 0x192b4b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192b598 + 0x192b4c4));
    func_0x01438628(*(undefined4 *)(_UNK_0192b59c + 0x192b4d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16a6,0);
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
  if (*(int *)(**(int **)(_UNK_0192b5a0 + 0x192b528) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192b5a4 + 0x192b544));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar1,0);
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  if (param_1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  bVar7 = (uint)uVar8 < *(uint *)(param_1 + 0x28);
  return (uint)((int)(iVar1 - (iVar5 + (uint)bVar7)) < 0 ==
               (SBORROW4(iVar1,iVar5) != SBORROW4(iVar1 - iVar5,(uint)bVar7)));
}


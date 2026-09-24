
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b58f74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
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
  
  pcVar3 = (char *)(_UNK_01b59064 + 0x1b58f88);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b59068 + 0x1b58f9c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5906c + 0x1b58fa8));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1899,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1899,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 != 0) {
    if (*(int *)(**(int **)(_UNK_01b59070 + 0x1b5900c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b59074 + 0x1b59028));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
    uVar7 = func_0x026ffbe0(iVar1,0);
    iVar1 = (int)((ulonglong)uVar7 >> 0x20);
    iVar5 = *(int *)(param_1 + 0x14);
    bVar6 = (uint)uVar7 < *(uint *)(param_1 + 0x10);
    if ((int)(iVar1 - (iVar5 + (uint)bVar6)) < 0 ==
        (SBORROW4(iVar1,iVar5) != SBORROW4(iVar1 - iVar5,(uint)bVar6))) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


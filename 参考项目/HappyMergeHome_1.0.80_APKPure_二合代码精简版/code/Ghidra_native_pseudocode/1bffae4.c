
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c0fae4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
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
  
  pcVar5 = (char *)(_UNK_01c0fbe8 + 0x1c0faf8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0fbec + 0x1c0fb0c));
    func_0x01438628(*(undefined4 *)(_UNK_01c0fbf0 + 0x1c0fb18));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaaf7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaaf7,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01c0fbf4 + 0x1c0fb70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c0fbf8 + 0x1c0fb8c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  iVar6 = (int)((ulonglong)uVar9 >> 0x20);
  iVar1 = FUN_01c0e5e0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0x1c);
  bVar8 = *(uint *)(iVar1 + 0x18) < (uint)uVar9;
  return (uint)((int)(iVar3 - (iVar6 + (uint)bVar8)) < 0 !=
               (SBORROW4(iVar3,iVar6) != SBORROW4(iVar3 - iVar6,(uint)bVar8)));
}


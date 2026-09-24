
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aee770(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_01aee8e8 + 0x1aee788);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aee8ec + 0x1aee79c));
    func_0x01438628(*(undefined4 *)(_UNK_01aee8f0 + 0x1aee7a8));
    func_0x01438628(*(undefined4 *)(_UNK_01aee8f4 + 0x1aee7b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4c3,0);
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
    iVar1 = func_0x024f5770(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_01ae4df4(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01aee8f8 + 0x1aee820) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aee8fc + 0x1aee83c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x026ffbe0(iVar1,0);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    iVar1 = FUN_01ae46e8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01aee900 + 0x1aee888) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_20 = 0;
    uVar9 = func_0x024f139c(0,0,uVar7,uVar4);
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    iVar1 = (uint)uVar9 - (uint)uVar8;
    if (uVar3 <= uVar2 && (uint)((uint)uVar8 <= (uint)uVar9) <= uVar3 - uVar2) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


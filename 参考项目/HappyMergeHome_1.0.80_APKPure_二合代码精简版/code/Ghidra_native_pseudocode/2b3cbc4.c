
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4cbc4(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar3 = func_0x02953fd4(0x6b8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x6b8,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = FUN_02b3ebc0(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_026a17e8 + 0x26a1760);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026a17ec + 0x26a1774),1,0);
    func_0x01438628(*(undefined4 *)(_UNK_026a17f0 + 0x26a1780));
    *pcVar6 = '\x01';
  }
  if (*(char *)(iVar3 + 0x16) == '\x01') {
    return;
  }
  piVar1 = *(int **)(_UNK_026a17f4 + 0x26a17a0);
  *(undefined1 *)(iVar3 + 0x16) = 1;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026a17f8 + 0x26a17c0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}


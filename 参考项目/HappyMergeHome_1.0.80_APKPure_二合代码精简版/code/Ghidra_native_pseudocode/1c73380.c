
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c83380(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar1 = func_0x02953fd4(0xad3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad3f,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (0 < *(int *)(iVar1 + 0x40)) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x40);
    pcVar7 = (char *)(_UNK_01c834a0 + 0x1c83420);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01c834a4 + 0x1c83434));
      *pcVar7 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_01c834a8 + 0x1c8344c) + 0x5c);
    uStack_20 = puVar2[2];
    uStack_1c = 0;
    func_0x01c85744(param_1,uVar8,*puVar2,puVar2[1]);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_026aec00 + 0x26aeb78);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026aec04 + 0x26aeb8c),0,0);
      func_0x01438628(*(undefined4 *)(_UNK_026aec08 + 0x26aeb98));
      *pcVar7 = '\x01';
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      return;
    }
    piVar3 = *(int **)(_UNK_026aec0c + 0x26aebb8);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026aec10 + 0x26aebd8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(uint *)(iVar1 + 0x60);
    *(uint *)(iVar1 + 0x60) = uVar4 + 1;
    *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar4);
    return;
  }
  return;
}


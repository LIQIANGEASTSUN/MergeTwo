
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030dfa44(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x02953fd4(0x2bcc,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2bcc,0);
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
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar8,&uStack_30,uVar4);
    return;
  }
  iVar3 = FUN_030df9d8(param_1);
  iVar3 = iVar3 + 1;
  iVar5 = func_0x02953fd4(0x2bce,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x2bce,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,iVar3,0);
    iVar6 = *(int *)(iVar5 + 8);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    iVar3 = *(int *)(iVar5 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar5 = FUN_030d2ca4(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_026efb8c + 0x26efb04);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026efb90 + 0x26efb18),iVar3,0);
    func_0x01438628(*(undefined4 *)(_UNK_026efb94 + 0x26efb24));
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar5 + 0x5c) == iVar3) {
    return;
  }
  piVar1 = *(int **)(_UNK_026efb98 + 0x26efb44);
  *(int *)(iVar5 + 0x5c) = iVar3;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026efb9c + 0x26efb64));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}


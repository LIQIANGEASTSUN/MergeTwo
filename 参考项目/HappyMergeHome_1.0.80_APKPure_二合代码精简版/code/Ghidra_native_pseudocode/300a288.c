
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301a288(undefined4 param_1)

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
  
  iVar3 = func_0x02953fd4(0x72af,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x72af,0);
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
  iVar3 = FUN_03009c84(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x74);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_026ee1f4 + 0x26ee16c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ee1f8 + 0x26ee180),0,0);
    func_0x01438628(*(undefined4 *)(_UNK_026ee1fc + 0x26ee18c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    return;
  }
  piVar1 = *(int **)(_UNK_026ee200 + 0x26ee1ac);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026ee204 + 0x26ee1cc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}


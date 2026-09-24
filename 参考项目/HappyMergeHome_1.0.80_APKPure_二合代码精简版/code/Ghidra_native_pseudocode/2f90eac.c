
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa0eac(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
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
  
  pcVar7 = (char *)(_UNK_02fa100c + 0x2fa0ec0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa1010 + 0x2fa0ed4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa1014 + 0x2fa0ee0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa1018 + 0x2fa0eec));
    func_0x01438628(*(undefined4 *)(_UNK_02fa101c + 0x2fa0ef8));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x2141,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x2141,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02fa1020 + 0x2fa0f50) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa1024 + 0x2fa0f6c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
    iVar6 = FUN_02f95f8c(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x6c);
    iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_02fa1028 + 0x2fa0fc0));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    bVar1 = iVar4 == 1;
    pcVar7 = (char *)(_UNK_026f0324 + 0x26f029c);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026f0328 + 0x26f02b0),bVar1,0);
      func_0x01438628(*(undefined4 *)(_UNK_026f032c + 0x26f02bc));
      *pcVar7 = '\x01';
    }
    if ((bool)*(char *)(iVar6 + 8) == bVar1) {
      return;
    }
    piVar2 = *(int **)(_UNK_026f0330 + 0x26f02dc);
    *(bool *)(iVar6 + 8) = bVar1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_026f0334 + 0x26f02fc));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar4 + 0x60);
    *(uint *)(iVar4 + 0x60) = uVar3 + 1;
    *(uint *)(iVar4 + 100) = *(int *)(iVar4 + 100) + (uint)(0xfffffffe < uVar3);
    return;
  }
  return;
}


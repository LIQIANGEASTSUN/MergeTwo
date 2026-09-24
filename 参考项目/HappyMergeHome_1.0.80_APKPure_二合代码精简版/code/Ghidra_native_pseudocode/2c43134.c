
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c53134(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
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
  
  pcVar4 = (char *)(_UNK_02c5331c + 0x2c53148);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c53320 + 0x2c5315c));
    func_0x01438628(*(undefined4 *)(_UNK_02c53324 + 0x2c53168));
    func_0x01438628(*(undefined4 *)(_UNK_02c53328 + 0x2c53174));
    func_0x01438628(*(undefined4 *)(_UNK_02c5332c + 0x2c53180));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f5d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f5d,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  piVar7 = *(int **)(_UNK_02c53330 + 0x2c531d8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar6 = *(undefined4 **)(_UNK_02c53334 + 0x2c531f4);
  iVar1 = func_0x014e9518(*puVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_02c53338 + 0x2c53214);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar5,0,0);
  iVar3 = 100;
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024efb0c(iVar1,0);
    iVar3 = iVar3 + 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar5,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03639de0(iVar1,**(undefined4 **)(_UNK_02c5333c + 0x2c532ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_06012ce4)(iVar1,iVar3,0);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03083288(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_03083474 + 0x30832a0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03083478 + 0x30832b4));
    func_0x01438628(*(undefined4 *)(_UNK_0308347c + 0x30832c0));
    func_0x01438628(*(undefined4 *)(_UNK_03083480 + 0x30832cc));
    func_0x01438628(*(undefined4 *)(_UNK_03083484 + 0x30832d8));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x75a4,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x75a4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
  func_0x029f225c(param_1,0);
  uVar10 = FUN_0307f35c(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1;
  }
  uStack_28 = 0;
  FUN_026ced30((int)uVar10,uVar8,uVar5,uVar9);
  uVar10 = FUN_0307f35c(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1_00;
  }
  uStack_28 = 0;
  FUN_026cee00((int)uVar10,uVar8,uVar5,uVar9);
  if (*(int *)(**(int **)(_UNK_03083488 + 0x30833b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0308348c + 0x30833cc));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
    iVar6 = FUN_0307f35c(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x6c);
    iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_03083490 + 0x3083420));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x20);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    bVar1 = iVar4 == 1;
    pcVar7 = (char *)(_UNK_026ec638 + 0x26ec5b0);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026ec63c + 0x26ec5c4),bVar1,0);
      func_0x01438628(*(undefined4 *)(_UNK_026ec640 + 0x26ec5d0));
      *pcVar7 = '\x01';
    }
    if ((bool)*(char *)(iVar6 + 8) == bVar1) {
      return;
    }
    piVar2 = *(int **)(_UNK_026ec644 + 0x26ec5f0);
    *(bool *)(iVar6 + 8) = bVar1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_026ec648 + 0x26ec610));
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


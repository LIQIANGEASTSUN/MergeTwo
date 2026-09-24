
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f99e40(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02f9a02c + 0x2f99e58);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9a030 + 0x2f99e6c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9a034 + 0x2f99e78));
    func_0x01438628(*(undefined4 *)(_UNK_02f9a038 + 0x2f99e84));
    func_0x01438628(*(undefined4 *)(_UNK_02f9a03c + 0x2f99e90));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x6f87,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x6f87,0);
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
  uVar10 = FUN_02f95f8c(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1;
  }
  uStack_28 = 0;
  FUN_026ef4b0((int)uVar10,uVar8,uVar5,uVar9);
  uVar10 = FUN_02f95f8c(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1_00;
  }
  uStack_28 = 0;
  FUN_026ef580((int)uVar10,uVar8,uVar5,uVar9);
  if (*(int *)(**(int **)(_UNK_02f9a040 + 0x2f99f68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9a044 + 0x2f99f84));
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
    iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_02f9a048 + 0x2f99fd8));
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


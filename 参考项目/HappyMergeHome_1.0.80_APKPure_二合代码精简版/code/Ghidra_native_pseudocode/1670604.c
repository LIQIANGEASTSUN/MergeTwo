
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01680604(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_016807f0 + 0x168061c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016807f4 + 0x1680630));
    func_0x01438628(*(undefined4 *)(_UNK_016807f8 + 0x168063c));
    func_0x01438628(*(undefined4 *)(_UNK_016807fc + 0x1680648));
    func_0x01438628(*(undefined4 *)(_UNK_01680800 + 0x1680654));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x879e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x879e,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  func_0x029f225c(param_1,0);
  uVar10 = FUN_0167c750(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1;
  }
  uStack_28 = 0;
  func_0x026ef4b0((int)uVar10,uVar8,uVar5,uVar9);
  uVar10 = FUN_0167c750(param_1);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  if ((int)uVar10 == 0) {
    func_0x014388e4();
    uVar8 = extraout_r1_00;
  }
  uStack_28 = 0;
  func_0x026ef580((int)uVar10,uVar8,uVar5,uVar9);
  if (*(int *)(**(int **)(_UNK_01680804 + 0x168072c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01680808 + 0x1680748));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
    iVar7 = FUN_0167c750(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x6c);
    iVar2 = func_0x0152983c(iVar2,0,**(undefined4 **)(_UNK_0168080c + 0x168079c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    bVar1 = iVar2 == 1;
    pcVar6 = (char *)(_UNK_026f0324 + 0x26f029c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026f0328 + 0x26f02b0),bVar1,0);
      func_0x01438628(*(undefined4 *)(_UNK_026f032c + 0x26f02bc));
      *pcVar6 = '\x01';
    }
    if ((bool)*(char *)(iVar7 + 8) == bVar1) {
      return;
    }
    piVar3 = *(int **)(_UNK_026f0330 + 0x26f02dc);
    *(bool *)(iVar7 + 8) = bVar1;
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f0334 + 0x26f02fc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar4 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
    return;
  }
  return;
}


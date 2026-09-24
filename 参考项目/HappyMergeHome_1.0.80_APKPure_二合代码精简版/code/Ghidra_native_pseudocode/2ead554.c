
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02ebd554(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02ebd7c8 + 0x2ebd56c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebd7cc + 0x2ebd580));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd7d0 + 0x2ebd58c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xff2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xff2,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x024f5730(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_02ebc9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x10) != 0 || *(int *)(iVar1 + 0x14) != 0) {
    iVar1 = FUN_02ebc9c0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0) goto LAB_02ebd734;
  }
  iVar1 = FUN_02ebc9c0(param_1);
  piVar8 = *(int **)(_UNK_02ebd7d4 + 0x2ebd63c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02ebd7d8 + 0x2ebd658);
  iVar4 = func_0x04e4a028(*puVar9);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar10 = func_0x026ffbe0(iVar4,0);
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar6 = uVar3;
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1;
  }
  uStack_28 = 0;
  FUN_026c27d8(iVar1,uVar6,(int)uVar10,uVar3);
  iVar1 = FUN_02eb5b50(param_1);
  if (iVar1 == 0) {
    iVar1 = 0x48;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  iVar4 = FUN_02ebc9c0(param_1);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  lVar11 = func_0x026ffbe0(iVar2,0);
  uVar6 = (undefined4)((ulonglong)lVar11 >> 0x20);
  if (iVar4 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1_00;
  }
  uStack_28 = 0;
  lVar11 = (longlong)iVar1 * 3600000 + lVar11;
  FUN_026c28a8(iVar4,uVar6,(int)lVar11,(int)((ulonglong)lVar11 >> 0x20));
LAB_02ebd734:
  iVar1 = FUN_02ebc9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(uint *)(iVar1 + 0x18);
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02ebd7dc + 0x2ebd758) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebd7e0 + 0x2ebd778));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar10 = func_0x026ffbe0(iVar4,0);
  iVar4 = uVar7 - (uint)uVar10;
  iVar1 = iVar1 - ((int)((ulonglong)uVar10 >> 0x20) + (uint)(uVar7 < (uint)uVar10));
  if ((int)-(iVar1 + (uint)(iVar4 != 0)) < 0 ==
      (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(iVar4 != 0)))) {
    iVar4 = 0;
  }
  return iVar4;
}


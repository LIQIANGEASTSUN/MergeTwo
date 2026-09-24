
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd114c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01cd1350 + 0x1cd1164);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd1354 + 0x1cd1178));
    func_0x01438628(*(undefined4 *)(_UNK_01cd1358 + 0x1cd1184));
    func_0x01438628(*(undefined4 *)(_UNK_01cd135c + 0x1cd1190));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaff7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaff7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar4,0,0);
    iVar1 = func_0x024f56f0(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_01ccc5a4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar11 = *(int *)(iVar1 + 0x34);
  iVar1 = FUN_01cd0330(param_1);
  iVar7 = 0;
  iVar9 = 0;
  puVar10 = *(undefined4 **)(_UNK_01cd1360 + 0x1cd121c);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar7) break;
    iVar2 = func_0x0152983c(iVar1,iVar7,*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x14) <= iVar11) {
      iVar2 = FUN_01ccc5a4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar2 + 0x54);
      iVar2 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar2 + 8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f0f34(iVar6,uVar8,**(undefined4 **)(_UNK_01cd1364 + 0x1cd12b8));
      iVar9 = iVar9 + (uVar3 ^ 1);
    }
    iVar7 = iVar7 + 1;
  }
  iVar1 = FUN_01cd0550(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) <= iVar11)) {
    iVar7 = FUN_01ccc5a4(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x54);
    uVar8 = *(undefined4 *)(iVar1 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024f0f34(iVar7,uVar8,**(undefined4 **)(_UNK_01cd1368 + 0x1cd132c));
    iVar9 = iVar9 + (uVar3 ^ 1);
  }
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  return iVar9;
}


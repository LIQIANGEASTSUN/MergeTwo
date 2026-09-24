
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd0ec4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01cd10c8 + 0x1cd0edc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd10cc + 0x1cd0ef0));
    func_0x01438628(*(undefined4 *)(_UNK_01cd10d0 + 0x1cd0efc));
    func_0x01438628(*(undefined4 *)(_UNK_01cd10d4 + 0x1cd0f08));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaff5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaff5,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_01ccc5a4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar1 + 0x34);
  iVar1 = FUN_01cd0330(param_1);
  iVar5 = 0;
  puVar10 = *(undefined4 **)(_UNK_01cd10d8 + 0x1cd0f90);
  puVar8 = *(undefined4 **)(_UNK_01cd10dc + 0x1cd0f98);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar5) break;
    iVar2 = func_0x0152983c(iVar1,iVar5,*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x14) <= iVar9) {
      iVar2 = FUN_01ccc5a4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar2 + 0x54);
      iVar2 = func_0x0152983c(iVar1,iVar5,*puVar10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar2 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f0f34(iVar7,uVar6,*puVar8);
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
  }
  iVar1 = FUN_01cd0550(param_1);
  if ((iVar1 == 0) || (iVar9 < *(int *)(iVar1 + 0x14))) {
    return 0;
  }
  iVar5 = FUN_01ccc5a4(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  iVar1 = *(int *)(iVar5 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0f34(iVar1,uVar6,*puVar8);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


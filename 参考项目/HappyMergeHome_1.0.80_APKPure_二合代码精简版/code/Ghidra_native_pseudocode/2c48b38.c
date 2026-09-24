
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c58b38(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02c58de8 + 0x2c58b50);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c58dec + 0x2c58b64));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f65,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f65,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_02c58df0 + 0x2c58bc4);
  puVar8 = (undefined4 *)(param_1 + 0x28);
  uVar6 = *puVar8;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024ef144(uVar6,param_2,0);
  if (iVar3 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024efb9c(uVar6,0);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x014e94d8(iVar3,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef184(uVar6,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024efb9c(uVar6,0);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x014e94d8(iVar3,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef184(uVar6,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024efb9c(uVar6,0);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x014e94d8(iVar3,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef184(uVar6,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024efb9c(uVar6,0);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x014e94d8(iVar3,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef184(uVar6,0);
  }
  *puVar8 = param_2;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar8 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


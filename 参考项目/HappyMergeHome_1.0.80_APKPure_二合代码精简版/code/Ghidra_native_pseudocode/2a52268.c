
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a62268(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02a623a8 + 0x2a62280);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a623ac + 0x2a62294));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x527c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x527c,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  piVar7 = *(int **)(_UNK_02a623b0 + 0x2a622f4);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024efb9c(uVar5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x014e94d8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024ef308(iVar1,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024efb9c(iVar1,0);
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      uVar5 = func_0x02a623b4(param_1);
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar5,*(undefined4 *)(iVar1 + 0x14));
    }
  }
  iVar1 = func_0x02953fd4(0x527e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014e94d8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024ef308(iVar1,0);
    pcVar6 = (char *)(_UNK_02a62614 + 0x2a625b4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02a62618 + 0x2a625c8));
      *pcVar6 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_02a6261c + 0x2a625e0) + 0x5c);
    uVar5 = *puVar2;
    uVar3 = puVar2[1];
    uVar8 = puVar2[2];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x024ef1f8(iVar1,uVar5,uVar3,uVar8);
    return;
  }
  iVar1 = func_0x029540a4(0x527e,0);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar3);
  return;
}


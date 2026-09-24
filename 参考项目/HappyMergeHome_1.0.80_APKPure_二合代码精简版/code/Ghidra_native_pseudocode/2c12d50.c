
/* WARNING: Possible PIC construction at 0x02c22e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c23054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c22e40) */
/* WARNING: Removing unreachable block (ram,0x02c22fec) */
/* WARNING: Removing unreachable block (ram,0x02c23000) */
/* WARNING: Removing unreachable block (ram,0x02c23004) */
/* WARNING: Removing unreachable block (ram,0x02c23058) */
/* WARNING: Removing unreachable block (ram,0x02c2306c) */
/* WARNING: Removing unreachable block (ram,0x02c23070) */
/* WARNING: Removing unreachable block (ram,0x02c23088) */
/* WARNING: Removing unreachable block (ram,0x02c23094) */
/* WARNING: Removing unreachable block (ram,0x02c23098) */
/* WARNING: Removing unreachable block (ram,0x02c230b0) */
/* WARNING: Removing unreachable block (ram,0x02c230b4) */
/* WARNING: Removing unreachable block (ram,0x02c2301c) */
/* WARNING: Removing unreachable block (ram,0x02c23028) */
/* WARNING: Removing unreachable block (ram,0x02c2302c) */
/* WARNING: Removing unreachable block (ram,0x02c23044) */
/* WARNING: Removing unreachable block (ram,0x02c23048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c22d50(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_02c230cc + 0x2c22d64);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c230d0 + 0x2c22d78));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fba,0);
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
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    uVar6 = *(undefined4 *)(param_1 + 400);
    if (*(int *)(**(int **)(_UNK_02c230d8 + 0x2c22f4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar6,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 400);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eecb8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    bVar2 = false;
  }
  else if (*(int *)(param_1 + 400) == 0) {
    piVar7 = *(int **)(_UNK_02c230d4 + 0x2c22e50);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(0,0,0);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x194);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x194);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      iVar4 = FUN_02c195e4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      bVar2 = iVar4 == 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 400);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      iVar4 = FUN_02c195e4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      bVar2 = iVar4 == -1;
    }
  }
  else {
    iVar1 = func_0x024eecb8(*(int *)(param_1 + 400),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    bVar2 = true;
  }
  (*(code *)&UNK_05d3ec04)(iVar1,bVar2,0);
  return;
}


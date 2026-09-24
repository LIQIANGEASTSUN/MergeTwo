
/* WARNING: Possible PIC construction at 0x02c22ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c22ab4) */
/* WARNING: Removing unreachable block (ram,0x02c22c60) */
/* WARNING: Removing unreachable block (ram,0x02c22c74) */
/* WARNING: Removing unreachable block (ram,0x02c22c78) */
/* WARNING: Removing unreachable block (ram,0x02c22ccc) */
/* WARNING: Removing unreachable block (ram,0x02c22ce0) */
/* WARNING: Removing unreachable block (ram,0x02c22ce4) */
/* WARNING: Removing unreachable block (ram,0x02c22cfc) */
/* WARNING: Removing unreachable block (ram,0x02c22d08) */
/* WARNING: Removing unreachable block (ram,0x02c22d0c) */
/* WARNING: Removing unreachable block (ram,0x02c22d24) */
/* WARNING: Removing unreachable block (ram,0x02c22d28) */
/* WARNING: Removing unreachable block (ram,0x02c22c90) */
/* WARNING: Removing unreachable block (ram,0x02c22c9c) */
/* WARNING: Removing unreachable block (ram,0x02c22ca0) */
/* WARNING: Removing unreachable block (ram,0x02c22cb8) */
/* WARNING: Removing unreachable block (ram,0x02c22cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c229c4(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02c22d40 + 0x2c229d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c22d44 + 0x2c229ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fb9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fb9,0);
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
  if (*(char *)(param_1 + 0x188) == '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x178);
    if (*(int *)(**(int **)(_UNK_02c22d4c + 0x2c22bc0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar6,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x178);
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
  else if (*(int *)(param_1 + 0x178) == 0) {
    piVar7 = *(int **)(_UNK_02c22d48 + 0x2c22ac4);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(0,0,0);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x17c);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x17c);
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
      iVar1 = *(int *)(param_1 + 0x178);
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
    iVar1 = func_0x024eecb8(*(int *)(param_1 + 0x178),0);
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


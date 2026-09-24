
/* WARNING: Possible PIC construction at 0x02c20c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c20cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c20db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c20df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c20dbc) */
/* WARNING: Removing unreachable block (ram,0x02c20dc8) */
/* WARNING: Removing unreachable block (ram,0x02c20dcc) */
/* WARNING: Removing unreachable block (ram,0x02c20de4) */
/* WARNING: Removing unreachable block (ram,0x02c20de8) */
/* WARNING: Removing unreachable block (ram,0x02c20cc8) */
/* WARNING: Removing unreachable block (ram,0x02c20cd4) */
/* WARNING: Removing unreachable block (ram,0x02c20cd8) */
/* WARNING: Removing unreachable block (ram,0x02c20cfc) */
/* WARNING: Removing unreachable block (ram,0x02c20d00) */
/* WARNING: Removing unreachable block (ram,0x02c20c78) */
/* WARNING: Removing unreachable block (ram,0x02c20c84) */
/* WARNING: Removing unreachable block (ram,0x02c20c88) */
/* WARNING: Removing unreachable block (ram,0x02c20cac) */
/* WARNING: Removing unreachable block (ram,0x02c20cb0) */
/* WARNING: Removing unreachable block (ram,0x02c20df8) */
/* WARNING: Removing unreachable block (ram,0x02c20e04) */
/* WARNING: Removing unreachable block (ram,0x02c20e08) */
/* WARNING: Removing unreachable block (ram,0x02c20e20) */
/* WARNING: Removing unreachable block (ram,0x02c20e24) */
/* WARNING: Removing unreachable block (ram,0x02c20e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c20b84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c20e38 + 0x2c20b98);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c20e3c + 0x2c20bac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fae,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 800) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x310);
    if (*(int *)(**(int **)(_UNK_02c20e40 + 0x2c20d1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x310);
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
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x310);
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
    uVar5 = 1;
  }
  (*(code *)&UNK_05d3ec04)(iVar1,uVar5,0);
  return;
}


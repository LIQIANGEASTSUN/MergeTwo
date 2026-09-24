
/* WARNING: Possible PIC construction at 0x02c1d200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1d348) */
/* WARNING: Removing unreachable block (ram,0x02c1d354) */
/* WARNING: Removing unreachable block (ram,0x02c1d358) */
/* WARNING: Removing unreachable block (ram,0x02c1d370) */
/* WARNING: Removing unreachable block (ram,0x02c1d374) */
/* WARNING: Removing unreachable block (ram,0x02c1d254) */
/* WARNING: Removing unreachable block (ram,0x02c1d260) */
/* WARNING: Removing unreachable block (ram,0x02c1d264) */
/* WARNING: Removing unreachable block (ram,0x02c1d288) */
/* WARNING: Removing unreachable block (ram,0x02c1d28c) */
/* WARNING: Removing unreachable block (ram,0x02c1d204) */
/* WARNING: Removing unreachable block (ram,0x02c1d210) */
/* WARNING: Removing unreachable block (ram,0x02c1d214) */
/* WARNING: Removing unreachable block (ram,0x02c1d238) */
/* WARNING: Removing unreachable block (ram,0x02c1d23c) */
/* WARNING: Removing unreachable block (ram,0x02c1d384) */
/* WARNING: Removing unreachable block (ram,0x02c1d390) */
/* WARNING: Removing unreachable block (ram,0x02c1d394) */
/* WARNING: Removing unreachable block (ram,0x02c1d3ac) */
/* WARNING: Removing unreachable block (ram,0x02c1d3b0) */
/* WARNING: Removing unreachable block (ram,0x02c1d3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1d110(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c1d3c4 + 0x2c1d124);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1d3c8 + 0x2c1d138));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f93,0);
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
  if (*(char *)(param_1 + 0x3b0) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x3a0);
    if (*(int *)(**(int **)(_UNK_02c1d3cc + 0x2c1d2a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x3a0);
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
    iVar1 = *(int *)(param_1 + 0x3a0);
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



/* WARNING: Possible PIC construction at 0x02c22274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c222c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c223b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c223f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c223bc) */
/* WARNING: Removing unreachable block (ram,0x02c223c8) */
/* WARNING: Removing unreachable block (ram,0x02c223cc) */
/* WARNING: Removing unreachable block (ram,0x02c223e4) */
/* WARNING: Removing unreachable block (ram,0x02c223e8) */
/* WARNING: Removing unreachable block (ram,0x02c222c8) */
/* WARNING: Removing unreachable block (ram,0x02c222d4) */
/* WARNING: Removing unreachable block (ram,0x02c222d8) */
/* WARNING: Removing unreachable block (ram,0x02c222fc) */
/* WARNING: Removing unreachable block (ram,0x02c22300) */
/* WARNING: Removing unreachable block (ram,0x02c22278) */
/* WARNING: Removing unreachable block (ram,0x02c22284) */
/* WARNING: Removing unreachable block (ram,0x02c22288) */
/* WARNING: Removing unreachable block (ram,0x02c222ac) */
/* WARNING: Removing unreachable block (ram,0x02c222b0) */
/* WARNING: Removing unreachable block (ram,0x02c223f8) */
/* WARNING: Removing unreachable block (ram,0x02c22404) */
/* WARNING: Removing unreachable block (ram,0x02c22408) */
/* WARNING: Removing unreachable block (ram,0x02c22420) */
/* WARNING: Removing unreachable block (ram,0x02c22424) */
/* WARNING: Removing unreachable block (ram,0x02c2242c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c22184(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c22438 + 0x2c22198);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2243c + 0x2c221ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fb6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fb6,0);
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
  if (*(char *)(param_1 + 0x3f8) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 1000);
    if (*(int *)(**(int **)(_UNK_02c22440 + 0x2c2231c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 1000);
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
    iVar1 = *(int *)(param_1 + 1000);
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


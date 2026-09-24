
/* WARNING: Possible PIC construction at 0x02c20174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c201c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c202b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c202f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c202bc) */
/* WARNING: Removing unreachable block (ram,0x02c202c8) */
/* WARNING: Removing unreachable block (ram,0x02c202cc) */
/* WARNING: Removing unreachable block (ram,0x02c202e4) */
/* WARNING: Removing unreachable block (ram,0x02c202e8) */
/* WARNING: Removing unreachable block (ram,0x02c201c8) */
/* WARNING: Removing unreachable block (ram,0x02c201d4) */
/* WARNING: Removing unreachable block (ram,0x02c201d8) */
/* WARNING: Removing unreachable block (ram,0x02c201fc) */
/* WARNING: Removing unreachable block (ram,0x02c20200) */
/* WARNING: Removing unreachable block (ram,0x02c20178) */
/* WARNING: Removing unreachable block (ram,0x02c20184) */
/* WARNING: Removing unreachable block (ram,0x02c20188) */
/* WARNING: Removing unreachable block (ram,0x02c201ac) */
/* WARNING: Removing unreachable block (ram,0x02c201b0) */
/* WARNING: Removing unreachable block (ram,0x02c202f8) */
/* WARNING: Removing unreachable block (ram,0x02c20304) */
/* WARNING: Removing unreachable block (ram,0x02c20308) */
/* WARNING: Removing unreachable block (ram,0x02c20320) */
/* WARNING: Removing unreachable block (ram,0x02c20324) */
/* WARNING: Removing unreachable block (ram,0x02c2032c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c20084(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c20338 + 0x2c20098);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2033c + 0x2c200ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4faa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4faa,0);
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
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x2b0);
    if (*(int *)(**(int **)(_UNK_02c20340 + 0x2c2021c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x2b0);
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
    iVar1 = *(int *)(param_1 + 0x2b0);
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


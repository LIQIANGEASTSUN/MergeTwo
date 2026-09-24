
/* WARNING: Possible PIC construction at 0x02c20434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c20484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c20578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c205b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c2057c) */
/* WARNING: Removing unreachable block (ram,0x02c20588) */
/* WARNING: Removing unreachable block (ram,0x02c2058c) */
/* WARNING: Removing unreachable block (ram,0x02c205a4) */
/* WARNING: Removing unreachable block (ram,0x02c205a8) */
/* WARNING: Removing unreachable block (ram,0x02c20488) */
/* WARNING: Removing unreachable block (ram,0x02c20494) */
/* WARNING: Removing unreachable block (ram,0x02c20498) */
/* WARNING: Removing unreachable block (ram,0x02c204bc) */
/* WARNING: Removing unreachable block (ram,0x02c204c0) */
/* WARNING: Removing unreachable block (ram,0x02c20438) */
/* WARNING: Removing unreachable block (ram,0x02c20444) */
/* WARNING: Removing unreachable block (ram,0x02c20448) */
/* WARNING: Removing unreachable block (ram,0x02c2046c) */
/* WARNING: Removing unreachable block (ram,0x02c20470) */
/* WARNING: Removing unreachable block (ram,0x02c205b8) */
/* WARNING: Removing unreachable block (ram,0x02c205c4) */
/* WARNING: Removing unreachable block (ram,0x02c205c8) */
/* WARNING: Removing unreachable block (ram,0x02c205e0) */
/* WARNING: Removing unreachable block (ram,0x02c205e4) */
/* WARNING: Removing unreachable block (ram,0x02c205ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c20344(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c205f8 + 0x2c20358);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c205fc + 0x2c2036c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fab,0);
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
  if (*(char *)(param_1 + 0x2d8) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x2c8);
    if (*(int *)(**(int **)(_UNK_02c20600 + 0x2c204dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x2c8);
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
    iVar1 = *(int *)(param_1 + 0x2c8);
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



/* WARNING: Possible PIC construction at 0x02c227f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c22974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c2293c) */
/* WARNING: Removing unreachable block (ram,0x02c22948) */
/* WARNING: Removing unreachable block (ram,0x02c2294c) */
/* WARNING: Removing unreachable block (ram,0x02c22964) */
/* WARNING: Removing unreachable block (ram,0x02c22968) */
/* WARNING: Removing unreachable block (ram,0x02c22848) */
/* WARNING: Removing unreachable block (ram,0x02c22854) */
/* WARNING: Removing unreachable block (ram,0x02c22858) */
/* WARNING: Removing unreachable block (ram,0x02c2287c) */
/* WARNING: Removing unreachable block (ram,0x02c22880) */
/* WARNING: Removing unreachable block (ram,0x02c227f8) */
/* WARNING: Removing unreachable block (ram,0x02c22804) */
/* WARNING: Removing unreachable block (ram,0x02c22808) */
/* WARNING: Removing unreachable block (ram,0x02c2282c) */
/* WARNING: Removing unreachable block (ram,0x02c22830) */
/* WARNING: Removing unreachable block (ram,0x02c22978) */
/* WARNING: Removing unreachable block (ram,0x02c22984) */
/* WARNING: Removing unreachable block (ram,0x02c22988) */
/* WARNING: Removing unreachable block (ram,0x02c229a0) */
/* WARNING: Removing unreachable block (ram,0x02c229a4) */
/* WARNING: Removing unreachable block (ram,0x02c229ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c22704(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c229b8 + 0x2c22718);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c229bc + 0x2c2272c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fb8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fb8,0);
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
  if (*(char *)(param_1 + 0x428) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x418);
    if (*(int *)(**(int **)(_UNK_02c229c0 + 0x2c2289c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x418);
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
    iVar1 = *(int *)(param_1 + 0x418);
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


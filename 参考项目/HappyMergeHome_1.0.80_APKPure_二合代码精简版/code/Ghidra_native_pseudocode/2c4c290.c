
/* WARNING: Possible PIC construction at 0x02c5c3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5c3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c5c3bc) */
/* WARNING: Removing unreachable block (ram,0x02c5c3c8) */
/* WARNING: Removing unreachable block (ram,0x02c5c3cc) */
/* WARNING: Removing unreachable block (ram,0x02c5c3e4) */
/* WARNING: Removing unreachable block (ram,0x02c5c3e8) */
/* WARNING: Removing unreachable block (ram,0x02c5c3f8) */
/* WARNING: Removing unreachable block (ram,0x02c5c404) */
/* WARNING: Removing unreachable block (ram,0x02c5c408) */
/* WARNING: Removing unreachable block (ram,0x02c5c428) */
/* WARNING: Removing unreachable block (ram,0x02c5c42c) */
/* WARNING: Removing unreachable block (ram,0x02c5c478) */
/* WARNING: Removing unreachable block (ram,0x02c5c44c) */
/* WARNING: Removing unreachable block (ram,0x02c5c460) */
/* WARNING: Removing unreachable block (ram,0x02c5c464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5c290(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x02953fd4(0x5f7e,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x18);
    if (param_1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02c5c47c + 0x2c5c31c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c5c480 + 0x2c5c330));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x5f7f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      (*(code *)&UNK_05d3ec04)(iVar1,1,0);
      return;
    }
    iVar1 = func_0x029540a4(0x5f7f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f7e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


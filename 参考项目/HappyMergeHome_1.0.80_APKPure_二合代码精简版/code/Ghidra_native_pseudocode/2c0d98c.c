
/* WARNING: Possible PIC construction at 0x02c1da7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1dad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1db38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c33364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1dbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1dc38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1dc00) */
/* WARNING: Removing unreachable block (ram,0x02c1dc0c) */
/* WARNING: Removing unreachable block (ram,0x02c1dc10) */
/* WARNING: Removing unreachable block (ram,0x02c1dc28) */
/* WARNING: Removing unreachable block (ram,0x02c1dc2c) */
/* WARNING: Removing unreachable block (ram,0x02c33368) */
/* WARNING: Removing unreachable block (ram,0x02c3336c) */
/* WARNING: Removing unreachable block (ram,0x02c33370) */
/* WARNING: Removing unreachable block (ram,0x02c33374) */
/* WARNING: Removing unreachable block (ram,0x02c3337c) */
/* WARNING: Removing unreachable block (ram,0x02c33388) */
/* WARNING: Removing unreachable block (ram,0x02c33394) */
/* WARNING: Removing unreachable block (ram,0x02c333a4) */
/* WARNING: Removing unreachable block (ram,0x02c333b0) */
/* WARNING: Removing unreachable block (ram,0x02c333b4) */
/* WARNING: Removing unreachable block (ram,0x02c333cc) */
/* WARNING: Removing unreachable block (ram,0x02c333d0) */
/* WARNING: Removing unreachable block (ram,0x02c333a0) */
/* WARNING: Removing unreachable block (ram,0x02c33378) */
/* WARNING: Removing unreachable block (ram,0x02c1db3c) */
/* WARNING: Removing unreachable block (ram,0x02c332d8) */
/* WARNING: Removing unreachable block (ram,0x02c3332c) */
/* WARNING: Removing unreachable block (ram,0x02c33338) */
/* WARNING: Removing unreachable block (ram,0x02c3333c) */
/* WARNING: Removing unreachable block (ram,0x02c33354) */
/* WARNING: Removing unreachable block (ram,0x02c33358) */
/* WARNING: Removing unreachable block (ram,0x02c332f8) */
/* WARNING: Removing unreachable block (ram,0x02c33310) */
/* WARNING: Removing unreachable block (ram,0x02c33314) */
/* WARNING: Removing unreachable block (ram,0x0286c1e8) */
/* WARNING: Removing unreachable block (ram,0x0286c240) */
/* WARNING: Removing unreachable block (ram,0x0286c24c) */
/* WARNING: Removing unreachable block (ram,0x0286c288) */
/* WARNING: Removing unreachable block (ram,0x0286c28c) */
/* WARNING: Removing unreachable block (ram,0x0286c298) */
/* WARNING: Removing unreachable block (ram,0x0286c29c) */
/* WARNING: Removing unreachable block (ram,0x02c1dad4) */
/* WARNING: Removing unreachable block (ram,0x02c1dae0) */
/* WARNING: Removing unreachable block (ram,0x02c1dae4) */
/* WARNING: Removing unreachable block (ram,0x02c1db04) */
/* WARNING: Removing unreachable block (ram,0x02c1db10) */
/* WARNING: Removing unreachable block (ram,0x02c1db14) */
/* WARNING: Removing unreachable block (ram,0x02c1db1c) */
/* WARNING: Removing unreachable block (ram,0x02c1db20) */
/* WARNING: Removing unreachable block (ram,0x02c1db28) */
/* WARNING: Removing unreachable block (ram,0x02c1db2c) */
/* WARNING: Removing unreachable block (ram,0x02c1da80) */
/* WARNING: Removing unreachable block (ram,0x02c1da8c) */
/* WARNING: Removing unreachable block (ram,0x02c1da90) */
/* WARNING: Removing unreachable block (ram,0x02c1dab4) */
/* WARNING: Removing unreachable block (ram,0x02c1dab8) */
/* WARNING: Removing unreachable block (ram,0x02c1dc3c) */
/* WARNING: Removing unreachable block (ram,0x02c1dc48) */
/* WARNING: Removing unreachable block (ram,0x02c1dc4c) */
/* WARNING: Removing unreachable block (ram,0x02c1dc64) */
/* WARNING: Removing unreachable block (ram,0x02c1dc68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1d98c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c1dc7c + 0x2c1d9a0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1dc80 + 0x2c1d9b4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f98,0);
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
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x484);
    if (*(int *)(**(int **)(_UNK_02c1dc84 + 0x2c1db60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x484);
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
    iVar1 = *(int *)(param_1 + 0x484);
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


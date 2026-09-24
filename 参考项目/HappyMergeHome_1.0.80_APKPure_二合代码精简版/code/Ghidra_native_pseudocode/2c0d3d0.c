
/* WARNING: Possible PIC construction at 0x02c1d4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c32bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1d67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1d644) */
/* WARNING: Removing unreachable block (ram,0x02c1d650) */
/* WARNING: Removing unreachable block (ram,0x02c1d654) */
/* WARNING: Removing unreachable block (ram,0x02c1d66c) */
/* WARNING: Removing unreachable block (ram,0x02c1d670) */
/* WARNING: Removing unreachable block (ram,0x02c32bc0) */
/* WARNING: Removing unreachable block (ram,0x02c32bc4) */
/* WARNING: Removing unreachable block (ram,0x02c32bc8) */
/* WARNING: Removing unreachable block (ram,0x02c32bcc) */
/* WARNING: Removing unreachable block (ram,0x02c32bd4) */
/* WARNING: Removing unreachable block (ram,0x02c32be0) */
/* WARNING: Removing unreachable block (ram,0x02c32bec) */
/* WARNING: Removing unreachable block (ram,0x02c32bfc) */
/* WARNING: Removing unreachable block (ram,0x02c32c08) */
/* WARNING: Removing unreachable block (ram,0x02c32c0c) */
/* WARNING: Removing unreachable block (ram,0x02c32c24) */
/* WARNING: Removing unreachable block (ram,0x02c32c28) */
/* WARNING: Removing unreachable block (ram,0x02c32bf8) */
/* WARNING: Removing unreachable block (ram,0x02c32bd0) */
/* WARNING: Removing unreachable block (ram,0x02c1d580) */
/* WARNING: Removing unreachable block (ram,0x02c32b30) */
/* WARNING: Removing unreachable block (ram,0x02c32b84) */
/* WARNING: Removing unreachable block (ram,0x02c32b90) */
/* WARNING: Removing unreachable block (ram,0x02c32b94) */
/* WARNING: Removing unreachable block (ram,0x02c32bac) */
/* WARNING: Removing unreachable block (ram,0x02c32bb0) */
/* WARNING: Removing unreachable block (ram,0x02c32b50) */
/* WARNING: Removing unreachable block (ram,0x02c32b68) */
/* WARNING: Removing unreachable block (ram,0x02c32b6c) */
/* WARNING: Removing unreachable block (ram,0x0286c1e8) */
/* WARNING: Removing unreachable block (ram,0x0286c240) */
/* WARNING: Removing unreachable block (ram,0x0286c24c) */
/* WARNING: Removing unreachable block (ram,0x0286c288) */
/* WARNING: Removing unreachable block (ram,0x0286c28c) */
/* WARNING: Removing unreachable block (ram,0x0286c298) */
/* WARNING: Removing unreachable block (ram,0x0286c29c) */
/* WARNING: Removing unreachable block (ram,0x02c1d518) */
/* WARNING: Removing unreachable block (ram,0x02c1d524) */
/* WARNING: Removing unreachable block (ram,0x02c1d528) */
/* WARNING: Removing unreachable block (ram,0x02c1d548) */
/* WARNING: Removing unreachable block (ram,0x02c1d554) */
/* WARNING: Removing unreachable block (ram,0x02c1d558) */
/* WARNING: Removing unreachable block (ram,0x02c1d560) */
/* WARNING: Removing unreachable block (ram,0x02c1d564) */
/* WARNING: Removing unreachable block (ram,0x02c1d56c) */
/* WARNING: Removing unreachable block (ram,0x02c1d570) */
/* WARNING: Removing unreachable block (ram,0x02c1d4c4) */
/* WARNING: Removing unreachable block (ram,0x02c1d4d0) */
/* WARNING: Removing unreachable block (ram,0x02c1d4d4) */
/* WARNING: Removing unreachable block (ram,0x02c1d4f8) */
/* WARNING: Removing unreachable block (ram,0x02c1d4fc) */
/* WARNING: Removing unreachable block (ram,0x02c1d680) */
/* WARNING: Removing unreachable block (ram,0x02c1d68c) */
/* WARNING: Removing unreachable block (ram,0x02c1d690) */
/* WARNING: Removing unreachable block (ram,0x02c1d6a8) */
/* WARNING: Removing unreachable block (ram,0x02c1d6ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1d3d0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c1d6c0 + 0x2c1d3e4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1d6c4 + 0x2c1d3f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f94,0);
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
  if (*(char *)(param_1 + 0x464) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x430);
    if (*(int *)(**(int **)(_UNK_02c1d6c8 + 0x2c1d5a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x430);
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
    iVar1 = *(int *)(param_1 + 0x430);
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


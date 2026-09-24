
/* WARNING: Possible PIC construction at 0x01b5d090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b5d094) */
/* WARNING: Removing unreachable block (ram,0x01b5d0a8) */
/* WARNING: Removing unreachable block (ram,0x01b5d0bc) */
/* WARNING: Removing unreachable block (ram,0x01b5d0c0) */
/* WARNING: Removing unreachable block (ram,0x01b5d0e0) */
/* WARNING: Removing unreachable block (ram,0x01b5d0e4) */
/* WARNING: Removing unreachable block (ram,0x01b5d114) */
/* WARNING: Removing unreachable block (ram,0x01b5d120) */
/* WARNING: Removing unreachable block (ram,0x01b5d130) */
/* WARNING: Removing unreachable block (ram,0x01b5d134) */
/* WARNING: Removing unreachable block (ram,0x01b5d140) */
/* WARNING: Removing unreachable block (ram,0x01b5d144) */
/* WARNING: Removing unreachable block (ram,0x01b5d158) */
/* WARNING: Removing unreachable block (ram,0x01b5d15c) */
/* WARNING: Removing unreachable block (ram,0x01b5d16c) */
/* WARNING: Removing unreachable block (ram,0x01b5d170) */
/* WARNING: Removing unreachable block (ram,0x01b5d198) */
/* WARNING: Removing unreachable block (ram,0x01b5d19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5ced4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01b5d1b0 + 0x1b5cee8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5d1b4 + 0x1b5cefc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d1b8 + 0x1b5cf08));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d1bc + 0x1b5cf14));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d1c0 + 0x1b5cf20));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d1c4 + 0x1b5cf2c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_01b58804();
  if ((iVar1 != 0) && (iVar1 = FUN_01b5797c(param_1), iVar1 != 0)) {
    iVar1 = **(int **)(**(int **)(_UNK_01b5d1c8 + 0x1b5cfa4) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67784(iVar1,0);
    if ((iVar1 == 0) && (iVar1 = FUN_01b5ba7c(param_1), iVar1 != 0)) {
      iVar1 = FUN_01b5ba7c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x1c) != 1) {
        func_0x01b5d1dc(param_1);
        if (*(int *)(**(int **)(_UNK_01b5d1cc + 0x1b5d018) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5d1d0 + 0x1b5d034));
        uVar5 = FUN_01b5b8bc(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x02b0fd48(iVar1,uVar5,0);
        if (*(int *)(**(int **)(_UNK_01b5d1d4 + 0x1b5d074) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar5 = (*(code *)&UNK_05d3e9a4)(uVar5,0,0);
        return uVar5;
      }
    }
  }
  return 0;
}



/* WARNING: Possible PIC construction at 0x01b5d588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b5d690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b5d58c) */
/* WARNING: Removing unreachable block (ram,0x01b5d5a4) */
/* WARNING: Removing unreachable block (ram,0x01b5d5b4) */
/* WARNING: Removing unreachable block (ram,0x01b5d5b8) */
/* WARNING: Removing unreachable block (ram,0x01b5d5d4) */
/* WARNING: Removing unreachable block (ram,0x01b5d5dc) */
/* WARNING: Removing unreachable block (ram,0x01b5d5fc) */
/* WARNING: Removing unreachable block (ram,0x01b5d608) */
/* WARNING: Removing unreachable block (ram,0x01b5d618) */
/* WARNING: Removing unreachable block (ram,0x01b5d61c) */
/* WARNING: Removing unreachable block (ram,0x01b5d628) */
/* WARNING: Removing unreachable block (ram,0x01b5d62c) */
/* WARNING: Removing unreachable block (ram,0x01b5d640) */
/* WARNING: Removing unreachable block (ram,0x01b5d644) */
/* WARNING: Removing unreachable block (ram,0x01b5d654) */
/* WARNING: Removing unreachable block (ram,0x01b5d658) */
/* WARNING: Removing unreachable block (ram,0x01b5d680) */
/* WARNING: Removing unreachable block (ram,0x01b5d684) */
/* WARNING: Removing unreachable block (ram,0x01b5d694) */
/* WARNING: Removing unreachable block (ram,0x01b5d69c) */
/* WARNING: Removing unreachable block (ram,0x01b5d6ac) */
/* WARNING: Removing unreachable block (ram,0x01b5d6b0) */
/* WARNING: Removing unreachable block (ram,0x01b5d6d4) */
/* WARNING: Removing unreachable block (ram,0x01b5d6d8) */
/* WARNING: Removing unreachable block (ram,0x01b5d6f4) */
/* WARNING: Removing unreachable block (ram,0x01b5d6f8) */
/* WARNING: Removing unreachable block (ram,0x01b5d71c) */
/* WARNING: Removing unreachable block (ram,0x01b5d72c) */
/* WARNING: Removing unreachable block (ram,0x01b5d730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5d370(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b5d748 + 0x1b5d388);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5d74c + 0x1b5d39c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d750 + 0x1b5d3a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d754 + 0x1b5d3b4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d758 + 0x1b5d3c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d75c + 0x1b5d3cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d760 + 0x1b5d3d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d764 + 0x1b5d3e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d768 + 0x1b5d3f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d76c + 0x1b5d3fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bb3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bb3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_01b58804();
  if (((iVar1 != 0) && (iVar1 = FUN_01b5797c(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x01b823e8(0), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01b5d770 + 0x1b5d48c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01b5d774 + 0x1b5d4a8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b76b98(iVar1,0,**(undefined4 **)(_UNK_01b5d778 + 0x1b5d4d4),0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01b5d77c + 0x1b5d4f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5d780 + 0x1b5d50c));
      piVar5 = *(int **)(_UNK_01b5d784 + 0x1b5d520);
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 300);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02b0fd48(iVar1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01b5d788 + 0x1b5d568) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = (*(code *)&UNK_05d3e9a4)(uVar6,0,0);
      return uVar6;
    }
  }
  return 0;
}


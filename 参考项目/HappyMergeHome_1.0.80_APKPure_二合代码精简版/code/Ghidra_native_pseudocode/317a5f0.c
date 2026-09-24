
/* WARNING: Possible PIC construction at 0x0318a724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0318a728) */
/* WARNING: Removing unreachable block (ram,0x0318a734) */
/* WARNING: Removing unreachable block (ram,0x0318a738) */
/* WARNING: Removing unreachable block (ram,0x0318a760) */
/* WARNING: Removing unreachable block (ram,0x0318a744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0318a5f0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0318a778 + 0x318a610);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318a77c + 0x318a624));
    func_0x01438628(*(undefined4 *)(_UNK_0318a780 + 0x318a630));
    func_0x01438628(*(undefined4 *)(_UNK_0318a784 + 0x318a63c));
    func_0x01438628(*(undefined4 *)(_UNK_0318a788 + 0x318a648));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7bbe,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0318a78c + 0x318a6ac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0318a790 + 0x318a6c8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x30);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_0318a794 + 0x318a71c));
        }
        iVar1 = *(int *)(iVar4 + 8);
        if (iVar1 == 0) {
          func_0x034a8a64();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar1 + 0x10);
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x7bbe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291c39c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


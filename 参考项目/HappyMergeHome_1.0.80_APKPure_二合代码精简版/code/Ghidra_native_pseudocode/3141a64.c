
/* WARNING: Possible PIC construction at 0x03151b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03151b9c) */
/* WARNING: Removing unreachable block (ram,0x03151ba8) */
/* WARNING: Removing unreachable block (ram,0x03151bac) */
/* WARNING: Removing unreachable block (ram,0x03151bd4) */
/* WARNING: Removing unreachable block (ram,0x03151bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03151a64(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_03151bec + 0x3151a84);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03151bf0 + 0x3151a98));
    func_0x01438628(*(undefined4 *)(_UNK_03151bf4 + 0x3151aa4));
    func_0x01438628(*(undefined4 *)(_UNK_03151bf8 + 0x3151ab0));
    func_0x01438628(*(undefined4 *)(_UNK_03151bfc + 0x3151abc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a3d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03151c00 + 0x3151b20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03151c04 + 0x3151b3c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x38);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_03151c08 + 0x3151b90));
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
    iVar1 = func_0x029540a4(0x7a3d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291b5ec(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


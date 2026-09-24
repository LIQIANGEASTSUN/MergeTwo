
/* WARNING: Possible PIC construction at 0x03016084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03016088) */
/* WARNING: Removing unreachable block (ram,0x03016094) */
/* WARNING: Removing unreachable block (ram,0x03016098) */
/* WARNING: Removing unreachable block (ram,0x030160c0) */
/* WARNING: Removing unreachable block (ram,0x030160a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03015f50(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_030160d8 + 0x3015f70);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030160dc + 0x3015f84));
    func_0x01438628(*(undefined4 *)(_UNK_030160e0 + 0x3015f90));
    func_0x01438628(*(undefined4 *)(_UNK_030160e4 + 0x3015f9c));
    func_0x01438628(*(undefined4 *)(_UNK_030160e8 + 0x3015fa8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x72a3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030160ec + 0x301600c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030160f0 + 0x3016028));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_030160f4 + 0x301607c));
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
    iVar1 = func_0x029540a4(0x72a3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02917378(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


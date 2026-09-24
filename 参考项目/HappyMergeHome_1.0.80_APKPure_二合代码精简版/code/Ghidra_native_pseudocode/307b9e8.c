
/* WARNING: Possible PIC construction at 0x0308bb1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0308bb20) */
/* WARNING: Removing unreachable block (ram,0x0308bb2c) */
/* WARNING: Removing unreachable block (ram,0x0308bb30) */
/* WARNING: Removing unreachable block (ram,0x0308bb58) */
/* WARNING: Removing unreachable block (ram,0x0308bb3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0308b9e8(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0308bb70 + 0x308ba08);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308bb74 + 0x308ba1c));
    func_0x01438628(*(undefined4 *)(_UNK_0308bb78 + 0x308ba28));
    func_0x01438628(*(undefined4 *)(_UNK_0308bb7c + 0x308ba34));
    func_0x01438628(*(undefined4 *)(_UNK_0308bb80 + 0x308ba40));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75c4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0308bb84 + 0x308baa4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0308bb88 + 0x308bac0));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_0308bb8c + 0x308bb14));
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
    iVar1 = func_0x029540a4(0x75c4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02918eec(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


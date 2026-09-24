
/* WARNING: Possible PIC construction at 0x031c3f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031c3f34) */
/* WARNING: Removing unreachable block (ram,0x031c3f40) */
/* WARNING: Removing unreachable block (ram,0x031c3f44) */
/* WARNING: Removing unreachable block (ram,0x031c3f6c) */
/* WARNING: Removing unreachable block (ram,0x031c3f50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031c3dfc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_031c3f84 + 0x31c3e1c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c3f88 + 0x31c3e30));
    func_0x01438628(*(undefined4 *)(_UNK_031c3f8c + 0x31c3e3c));
    func_0x01438628(*(undefined4 *)(_UNK_031c3f90 + 0x31c3e48));
    func_0x01438628(*(undefined4 *)(_UNK_031c3f94 + 0x31c3e54));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7d39,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031c3f98 + 0x31c3eb8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c3f9c + 0x31c3ed4));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_031c3fa0 + 0x31c3f28));
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
    iVar1 = func_0x029540a4(0x7d39,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291d044(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


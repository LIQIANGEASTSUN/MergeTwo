
/* WARNING: Possible PIC construction at 0x02fdc3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fdc3f8) */
/* WARNING: Removing unreachable block (ram,0x02fdc404) */
/* WARNING: Removing unreachable block (ram,0x02fdc408) */
/* WARNING: Removing unreachable block (ram,0x02fdc430) */
/* WARNING: Removing unreachable block (ram,0x02fdc414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fdc2c0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_02fdc448 + 0x2fdc2e0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fdc44c + 0x2fdc2f4));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc450 + 0x2fdc300));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc454 + 0x2fdc30c));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc458 + 0x2fdc318));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x712c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fdc45c + 0x2fdc37c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fdc460 + 0x2fdc398));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_02fdc464 + 0x2fdc3ec));
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
    iVar1 = func_0x029540a4(0x712c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029165c8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


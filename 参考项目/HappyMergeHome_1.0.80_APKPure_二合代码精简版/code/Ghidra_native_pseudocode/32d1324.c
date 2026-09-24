
/* WARNING: Possible PIC construction at 0x032e1458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032e145c) */
/* WARNING: Removing unreachable block (ram,0x032e1468) */
/* WARNING: Removing unreachable block (ram,0x032e146c) */
/* WARNING: Removing unreachable block (ram,0x032e1494) */
/* WARNING: Removing unreachable block (ram,0x032e1478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032e1324(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_032e14ac + 0x32e1344);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e14b0 + 0x32e1358));
    func_0x01438628(*(undefined4 *)(_UNK_032e14b4 + 0x32e1364));
    func_0x01438628(*(undefined4 *)(_UNK_032e14b8 + 0x32e1370));
    func_0x01438628(*(undefined4 *)(_UNK_032e14bc + 0x32e137c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x83de,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032e14c0 + 0x32e13e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e14c4 + 0x32e13fc));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_032e14c8 + 0x32e1450));
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
    iVar1 = func_0x029540a4(0x83de,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029207e4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


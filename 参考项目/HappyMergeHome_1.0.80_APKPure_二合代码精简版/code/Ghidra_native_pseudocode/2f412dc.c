
/* WARNING: Possible PIC construction at 0x02f51410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f51414) */
/* WARNING: Removing unreachable block (ram,0x02f51420) */
/* WARNING: Removing unreachable block (ram,0x02f51424) */
/* WARNING: Removing unreachable block (ram,0x02f5144c) */
/* WARNING: Removing unreachable block (ram,0x02f51430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f512dc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_02f51464 + 0x2f512fc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f51468 + 0x2f51310));
    func_0x01438628(*(undefined4 *)(_UNK_02f5146c + 0x2f5131c));
    func_0x01438628(*(undefined4 *)(_UNK_02f51470 + 0x2f51328));
    func_0x01438628(*(undefined4 *)(_UNK_02f51474 + 0x2f51334));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e2a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f51478 + 0x2f51398) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f5147c + 0x2f513b4));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_02f51480 + 0x2f51408));
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
    iVar1 = func_0x029540a4(0x6e2a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291491c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


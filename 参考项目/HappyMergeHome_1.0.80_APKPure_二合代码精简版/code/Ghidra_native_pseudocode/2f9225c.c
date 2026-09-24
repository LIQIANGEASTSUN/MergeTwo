
/* WARNING: Possible PIC construction at 0x02fa2390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fa2394) */
/* WARNING: Removing unreachable block (ram,0x02fa23a0) */
/* WARNING: Removing unreachable block (ram,0x02fa23a4) */
/* WARNING: Removing unreachable block (ram,0x02fa23cc) */
/* WARNING: Removing unreachable block (ram,0x02fa23b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fa225c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_02fa23e4 + 0x2fa227c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa23e8 + 0x2fa2290));
    func_0x01438628(*(undefined4 *)(_UNK_02fa23ec + 0x2fa229c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa23f0 + 0x2fa22a8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa23f4 + 0x2fa22b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6fa2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fa23f8 + 0x2fa2318) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa23fc + 0x2fa2334));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_02fa2400 + 0x2fa2388));
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
    iVar1 = func_0x029540a4(0x6fa2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02915920(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


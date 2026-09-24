
/* WARNING: Possible PIC construction at 0x030507a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x030507ac) */
/* WARNING: Removing unreachable block (ram,0x030507b8) */
/* WARNING: Removing unreachable block (ram,0x030507bc) */
/* WARNING: Removing unreachable block (ram,0x030507e4) */
/* WARNING: Removing unreachable block (ram,0x030507c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03050674(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_030507fc + 0x3050694);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03050800 + 0x30506a8));
    func_0x01438628(*(undefined4 *)(_UNK_03050804 + 0x30506b4));
    func_0x01438628(*(undefined4 *)(_UNK_03050808 + 0x30506c0));
    func_0x01438628(*(undefined4 *)(_UNK_0305080c + 0x30506cc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x743c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03050810 + 0x3050730) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03050814 + 0x305074c));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_03050818 + 0x30507a0));
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
    iVar1 = func_0x029540a4(0x743c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291813c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


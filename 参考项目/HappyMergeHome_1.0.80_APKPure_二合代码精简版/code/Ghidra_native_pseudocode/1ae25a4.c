
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af25a4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_01af275c + 0x1af25c4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af2760 + 0x1af25d8));
    func_0x01438628(*(undefined4 *)(_UNK_01af2764 + 0x1af25e4));
    func_0x01438628(*(undefined4 *)(_UNK_01af2768 + 0x1af25f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4f3,0);
  if (iVar1 == 0) {
    if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0xc))) &&
        (iVar1 = FUN_01ae99ac(param_1), iVar1 != 0)) && (0 < *(int *)(param_2 + 0xc))) {
      iVar1 = 0;
      puVar6 = *(undefined4 **)(_UNK_01af276c + 0x1af2688);
      do {
        iVar2 = func_0x024f0530(param_2,iVar1,**(undefined4 **)(_UNK_01af2770 + 0x1af2694));
        if (((0 < iVar2) && (iVar3 = func_0x01af2778(param_1,iVar2), param_3 != 0 && iVar3 != 0)) &&
           ((iVar1 < *(int *)(param_3 + 0xc) &&
            (iVar3 = func_0x024f0530(param_3,iVar1,**(undefined4 **)(_UNK_01af2774 + 0x1af26f0)),
            0 < iVar3)))) {
          do {
            iVar4 = FUN_01ae99ac(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar4,iVar2,*puVar6);
            iVar3 = iVar3 + -1;
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          } while (iVar3 != 0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0xc));
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa4f3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


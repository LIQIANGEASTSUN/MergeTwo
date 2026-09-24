
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b62268(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_01b62420 + 0x1b62288);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b62424 + 0x1b6229c));
    func_0x01438628(*(undefined4 *)(_UNK_01b62428 + 0x1b622a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b6242c + 0x1b622b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa6c8,0);
  if (iVar1 == 0) {
    if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0xc))) &&
        (iVar1 = FUN_01b5ba7c(param_1), iVar1 != 0)) && (0 < *(int *)(param_2 + 0xc))) {
      iVar1 = 0;
      puVar6 = *(undefined4 **)(_UNK_01b62430 + 0x1b6234c);
      do {
        iVar2 = func_0x024f0530(param_2,iVar1,**(undefined4 **)(_UNK_01b62434 + 0x1b62358));
        if (((0 < iVar2) && (iVar3 = func_0x01b6243c(param_1,iVar2), param_3 != 0 && iVar3 != 0)) &&
           ((iVar1 < *(int *)(param_3 + 0xc) &&
            (iVar3 = func_0x024f0530(param_3,iVar1,**(undefined4 **)(_UNK_01b62438 + 0x1b623b4)),
            0 < iVar3)))) {
          do {
            iVar4 = FUN_01b5ba7c(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar4,iVar2,*puVar6);
            iVar3 = iVar3 + -1;
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          } while (iVar3 != 0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0xc));
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa6c8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


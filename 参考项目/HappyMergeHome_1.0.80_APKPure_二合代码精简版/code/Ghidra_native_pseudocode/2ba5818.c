
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb5818(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2537,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      pcVar2 = *(char **)(param_2 + 0x10);
    }
    if ((param_2 != 0 && pcVar2 != (char *)0x0) && (-1 < *(int *)(pcVar2 + 0xc))) {
      iVar1 = 0;
      puVar4 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar2 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar2 + 0xc) <= iVar1) break;
        iVar3 = *(int *)(param_2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar4);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bd0b60(param_1,*(undefined4 *)(iVar3 + 8),iVar1,param_3,0);
        pcVar2 = *(char **)(param_2 + 0x10);
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2537,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028924d8(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


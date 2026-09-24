
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bdd468(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_02bdd5b4 + 0x2bdd488);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdd5b8 + 0x2bdd49c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd5bc + 0x2bdd4a8));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x02953fd4(0x5cfd,0);
  if (iVar1 == 0) {
    if (-1 < param_2) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (param_2 < *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bdd5c0 + 0x2bdd580));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          uVar3 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cfd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02898004(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd72b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_02bd74ec + 0x2bd72d0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd74f0 + 0x2bd72e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd74f4 + 0x2bd72f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd74f8 + 0x2bd7300));
    func_0x01438628(*(undefined4 *)(_UNK_02bd74fc + 0x2bd730c));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  iVar1 = func_0x02953fd4(0xd68,0);
  if (iVar1 == 0) {
    if ((param_3 != 0) && (iVar1 = FUN_02bad050(param_1,param_4), iVar1 != 0)) {
      func_0x02bd7514(param_1,param_2,param_3,param_4);
      if (*(int *)(**(int **)(_UNK_02bd7500 + 0x2bd73a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7504 + 0x2bd73c0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c4baac(iVar1,param_3,0);
      if (iVar1 == 0) {
        iVar3 = func_0x02bd7af0(param_1,param_3);
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd7508 + 0x2bd7494));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x28);
        if (*(int *)(**(int **)(_UNK_02bd750c + 0x2bd74b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0152ae0c(0,uVar4,0);
        iVar3 = iVar3 - iVar1;
      }
      else {
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd7510 + 0x2bd7428));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar1 + 0x3c);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd68,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x028932dc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar3;
}


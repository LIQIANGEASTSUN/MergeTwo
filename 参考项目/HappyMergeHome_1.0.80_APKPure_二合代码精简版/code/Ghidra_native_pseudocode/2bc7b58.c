
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd7b58(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_02bd7e10 + 0x2bd7b78);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e14 + 0x2bd7b8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e18 + 0x2bd7b98));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e1c + 0x2bd7ba4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e20 + 0x2bd7bb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e24 + 0x2bd7bbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7e28 + 0x2bd7bc8));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x5ceb,0);
  if (iVar1 == 0) {
    if (((-1 < param_2) && (iVar1 = func_0x02bd7e48(param_1,param_3), param_2 < iVar1)) &&
       (iVar1 = func_0x02bd7f00(param_1,param_2,param_3), iVar1 != 0)) {
      if (*(int *)(**(int **)(_UNK_02bd7e2c + 0x2bd7c68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7e30 + 0x2bd7c84));
      uVar5 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar4 = 0;
      iVar1 = func_0x029a6fa8(iVar2,uVar5,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02bd7e34 + 0x2bd7cc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7e38 + 0x2bd7ce4));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c4baac(iVar4,iVar1,0);
        if (iVar4 == 0) {
          iVar4 = FUN_02bd7af0(param_1,iVar1);
          iVar1 = FUN_02bad050(param_1,param_3);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd7e3c + 0x2bd7db8));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x28);
          if (*(int *)(**(int **)(_UNK_02bd7e40 + 0x2bd7ddc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0152ae0c(0,uVar5,0);
          iVar4 = iVar4 - iVar1;
        }
        else {
          iVar1 = FUN_02bad050(param_1,param_3);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd7e44 + 0x2bd7d4c));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar1 + 0x3c);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ceb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return iVar4;
}


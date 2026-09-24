
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd9790(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)(_UNK_02bd9898 + 0x2bd97b0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd989c + 0x2bd97c4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cf0,0);
  if (iVar1 == 0) {
    if (param_2 != -1) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd98a0 + 0x2bd9860));
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) {
        func_0x014388e4();
        uVar2 = extraout_r1;
      }
      FUN_026f7520((int)uVar4,uVar2,0,0,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cf0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be206c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_02be21ac + 0x2be208c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be21b0 + 0x2be20a0));
    func_0x01438628(*(undefined4 *)(_UNK_02be21b4 + 0x2be20ac));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x5d0d,0);
  if (iVar1 == 0) {
    puVar5 = *(undefined4 **)(_UNK_02be21b8 + 0x2be2120);
    while( true ) {
      iVar1 = FUN_02bad050(param_1,param_5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar4) break;
      iVar1 = FUN_02bad050(param_1,param_5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b780b0(iVar1,iVar4,*puVar5);
      FUN_02be1f2c(param_1,uVar2,param_3,param_4);
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d0d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fa854(iVar1,param_1,param_3,param_4,param_5,0);
  }
  return;
}


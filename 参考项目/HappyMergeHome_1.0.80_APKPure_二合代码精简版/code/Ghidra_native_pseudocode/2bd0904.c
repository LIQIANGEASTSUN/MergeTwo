
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be0904(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_02be0a4c + 0x2be0924);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be0a50 + 0x2be093c));
    *pcVar2 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x02953fd4(0x5c6d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((-1 < param_3) && (0 < *(int *)(iVar1 + 0xc))) {
      FUN_02bdfc74(param_1,param_2,&iStack_24,param_4);
      FUN_02bd1a34(param_1,param_3,iStack_24,6,param_4,0,0xffffffff);
      FUN_02bdfffc(param_1,param_3,param_4);
      iVar1 = iStack_24;
      if (iStack_24 == 0) {
        func_0x014388e4();
      }
      FUN_02be078c(param_1,*(undefined4 *)(iVar1 + 8));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5c6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}


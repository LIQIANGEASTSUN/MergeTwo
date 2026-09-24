
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c23358(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c23448 + 0x2c23378);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2344c + 0x2c2338c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xea7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c23450 + 0x2c233f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(param_2,0,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      func_0x024f1368(param_2,param_3,0,0,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xea7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


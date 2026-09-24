
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c3ea18(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_02c3ebbc + 0x2c3ea38);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3ebc0 + 0x2c3ea50));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ebc4 + 0x2c3ea5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ebc8 + 0x2c3ea68));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ebcc + 0x2c3ea74));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x11e1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02c3e0bc(param_1,param_2,param_3);
    if (-1 < iVar1) {
      if (param_4 == 0) {
        uVar4 = 1;
      }
      else {
        if (*(int *)(**(int **)(_UNK_02c3ebd0 + 0x2c3eb00) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c3ebd4 + 0x2c3eb1c));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar4 = 0;
        iVar1 = func_0x029a6fa8(iVar2,iVar1,0);
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02c3ebd8 + 0x2c3eb5c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c3ebdc + 0x2c3eb78));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02bd149c(iVar2,iVar1,0);
          uVar4 = (uint)(iVar1 == 0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x11e1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x0289d560(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}


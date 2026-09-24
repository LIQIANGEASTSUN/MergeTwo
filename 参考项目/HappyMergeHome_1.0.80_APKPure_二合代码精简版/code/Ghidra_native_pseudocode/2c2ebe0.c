
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c3ebe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_02c3ed84 + 0x2c3ec00);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3ed88 + 0x2c3ec18));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ed8c + 0x2c3ec24));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ed90 + 0x2c3ec30));
    func_0x01438628(*(undefined4 *)(_UNK_02c3ed94 + 0x2c3ec3c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x5d3d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02c3eda8(param_1,param_2,param_3);
    if (-1 < iVar1) {
      if (param_4 == 0) {
        uVar4 = 1;
      }
      else {
        if (*(int *)(**(int **)(_UNK_02c3ed98 + 0x2c3ecc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c3ed9c + 0x2c3ece4));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar4 = 0;
        iVar1 = func_0x029a6fa8(iVar2,iVar1,0);
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02c3eda0 + 0x2c3ed24) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c3eda4 + 0x2c3ed40));
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
    iVar1 = func_0x029540a4(0x5d3d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x0289d560(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}


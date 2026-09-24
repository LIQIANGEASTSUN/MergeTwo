
/* WARNING: Possible PIC construction at 0x03215e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03215e1c) */
/* WARNING: Removing unreachable block (ram,0x03215e28) */
/* WARNING: Removing unreachable block (ram,0x03215e2c) */
/* WARNING: Removing unreachable block (ram,0x03215e54) */
/* WARNING: Removing unreachable block (ram,0x03215e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03215ce4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_03215e6c + 0x3215d04);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03215e70 + 0x3215d18));
    func_0x01438628(*(undefined4 *)(_UNK_03215e74 + 0x3215d24));
    func_0x01438628(*(undefined4 *)(_UNK_03215e78 + 0x3215d30));
    func_0x01438628(*(undefined4 *)(_UNK_03215e7c + 0x3215d3c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7ea8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03215e80 + 0x3215da0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03215e84 + 0x3215dbc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x3c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_03215e88 + 0x3215e10));
        }
        iVar1 = *(int *)(iVar4 + 8);
        if (iVar1 == 0) {
          func_0x034a8a64();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar1 + 0x10);
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x7ea8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291ddf4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


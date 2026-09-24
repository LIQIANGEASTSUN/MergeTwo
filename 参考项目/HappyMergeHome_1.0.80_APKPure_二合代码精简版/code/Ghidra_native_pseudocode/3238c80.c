
/* WARNING: Possible PIC construction at 0x03248db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03248db8) */
/* WARNING: Removing unreachable block (ram,0x03248dc4) */
/* WARNING: Removing unreachable block (ram,0x03248dc8) */
/* WARNING: Removing unreachable block (ram,0x03248df0) */
/* WARNING: Removing unreachable block (ram,0x03248dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03248c80(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_03248e08 + 0x3248ca0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03248e0c + 0x3248cb4));
    func_0x01438628(*(undefined4 *)(_UNK_03248e10 + 0x3248cc0));
    func_0x01438628(*(undefined4 *)(_UNK_03248e14 + 0x3248ccc));
    func_0x01438628(*(undefined4 *)(_UNK_03248e18 + 0x3248cd8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8004,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03248e1c + 0x3248d3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03248e20 + 0x3248d58));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x38);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_03248e24 + 0x3248dac));
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
    iVar1 = func_0x029540a4(0x8004,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291e994(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


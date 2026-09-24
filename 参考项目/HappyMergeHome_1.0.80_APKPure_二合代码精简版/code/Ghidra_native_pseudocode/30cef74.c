
/* WARNING: Possible PIC construction at 0x030df0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x030df0ac) */
/* WARNING: Removing unreachable block (ram,0x030df0b8) */
/* WARNING: Removing unreachable block (ram,0x030df0bc) */
/* WARNING: Removing unreachable block (ram,0x030df0e4) */
/* WARNING: Removing unreachable block (ram,0x030df0c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030def74(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_030df0fc + 0x30def94);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030df100 + 0x30defa8));
    func_0x01438628(*(undefined4 *)(_UNK_030df104 + 0x30defb4));
    func_0x01438628(*(undefined4 *)(_UNK_030df108 + 0x30defc0));
    func_0x01438628(*(undefined4 *)(_UNK_030df10c + 0x30defcc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x773c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030df110 + 0x30df030) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030df114 + 0x30df04c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_030df118 + 0x30df0a0));
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
    iVar1 = func_0x029540a4(0x773c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02919c9c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


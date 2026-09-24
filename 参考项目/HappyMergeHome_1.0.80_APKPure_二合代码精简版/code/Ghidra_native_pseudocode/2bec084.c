
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bfc084(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02bfc16c + 0x2bfc0a4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfc170 + 0x2bfc0b8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e74,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bfc174 + 0x2bfc11c));
    func_0x02c46d60(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_2);
    *(undefined4 *)(iVar1 + 0x18) = param_3;
  }
  else {
    iVar1 = func_0x029540a4(0x5e74,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028b2434(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}


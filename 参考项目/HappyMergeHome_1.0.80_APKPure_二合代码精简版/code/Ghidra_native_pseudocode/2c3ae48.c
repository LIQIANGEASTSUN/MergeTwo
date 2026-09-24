
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4ae48(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uStack_28;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_02c4af74 + 0x2c4ae68);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4af78 + 0x2c4ae80));
    func_0x01438628(*(undefined4 *)(_UNK_02c4af7c + 0x2c4ae8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4af80 + 0x2c4ae98));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x02953fd4(0xd6c,0);
  if (iVar1 == 0) {
    if ((param_2 != 0 && param_3 != 0) &&
       (((param_4 == 0 || (*(int *)(param_2 + 0xb8) != 0)) && (0 < *(int *)(param_2 + 0xb4))))) {
      iVar1 = *(int *)(param_3 + 0x70);
      iStack_24 = 0;
      uStack_28 = 0;
      func_0x0396a5b4(&uStack_28,*(undefined4 *)(param_2 + 0xb4),
                      **(undefined4 **)(_UNK_02c4af84 + 0x2c4af38));
      uVar3 = (uint)((uStack_28 & 0xff) != 0 && iStack_24 <= iVar1);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd6c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02892ee4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}


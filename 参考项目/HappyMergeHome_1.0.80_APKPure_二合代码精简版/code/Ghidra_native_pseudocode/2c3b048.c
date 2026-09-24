
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4b048(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_02c4b164 + 0x2c4b068);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4b168 + 0x2c4b07c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b16c + 0x2c4b088));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b170 + 0x2c4b094));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x02953fd4(0xd6d,0);
  if (iVar1 == 0) {
    if (((param_2 != 0 && param_3 != 0) && (*(int *)(param_2 + 0x1c) == 2)) &&
       (0 < *(int *)(param_2 + 0xb4))) {
      iVar1 = *(int *)(param_3 + 0x70);
      iStack_1c = 0;
      uStack_20 = 0;
      func_0x0396a5b4(&uStack_20,*(int *)(param_2 + 0xb4),
                      **(undefined4 **)(_UNK_02c4b174 + 0x2c4b130));
      uVar3 = (uint)((uStack_20 & 0xff) != 0 && iStack_1c <= iVar1);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02871898(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4b714(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02c4b814 + 0x2c4b734);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4b818 + 0x2c4b748));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b81c + 0x2c4b754));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5c64,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5c64,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar3 = func_0x028985fc(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_02c4b820 + 0x2c4b7bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4b824 + 0x2c4b7d8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029a6fa8(iVar2,param_2,0);
  pcVar4 = (char *)(_UNK_02c4b164 + 0x2c4b068);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4b168 + 0x2c4b07c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b16c + 0x2c4b088));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b170 + 0x2c4b094));
    *pcVar4 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x02953fd4(0xd6d,0);
  if (iVar1 == 0) {
    if (((iVar2 != 0 && param_3 != 0) && (*(int *)(iVar2 + 0x1c) == 2)) &&
       (0 < *(int *)(iVar2 + 0xb4))) {
      iVar1 = *(int *)(param_3 + 0x70);
      iStack_1c = 0;
      uStack_20 = 0;
      func_0x0396a5b4(&uStack_20,*(int *)(iVar2 + 0xb4),**(undefined4 **)(_UNK_02c4b174 + 0x2c4b130)
                     );
      uVar3 = (uint)((uStack_20 & 0xff) != 0 && iStack_1c <= iVar1);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02871898(iVar1,param_1,iVar2,param_3,0);
  }
  return uVar3;
}


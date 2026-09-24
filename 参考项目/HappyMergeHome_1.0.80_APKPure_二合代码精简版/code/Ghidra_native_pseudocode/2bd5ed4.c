
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02be5ed4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  
  pcVar5 = (char *)(_UNK_02be602c + 0x2be5ef4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be6030 + 0x2be5f08));
    func_0x01438628(*(undefined4 *)(_UNK_02be6034 + 0x2be5f14));
    func_0x01438628(*(undefined4 *)(_UNK_02be6038 + 0x2be5f20));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd73,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02be603c + 0x2be5f84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be6040 + 0x2be5fa0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02be5cb0(iVar1,param_3);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      param_3 = iVar3;
    }
    fVar2 = _UNK_02be6028;
    if (iVar3 != 0 && iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(param_2 + 0x84);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x046c2130(iVar1,**(undefined4 **)(_UNK_02be6044 + 0x2be6000));
      fVar2 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x16) & 3
                                        );
      fVar2 = fVar2 / fVar6;
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd73,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)func_0x028934b0(iVar1,param_1,param_2,param_3,0);
  }
  return fVar2;
}


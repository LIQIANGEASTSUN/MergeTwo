
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3cddc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02c3cf50 + 0x2c3cdfc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3cf54 + 0x2c3ce10));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cf58 + 0x2c3ce1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cf5c + 0x2c3ce28));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0xe8f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02c3e0bc(param_1,param_2,param_3);
    *(int *)(param_1 + 0x14) = iVar1;
    if (0 < iVar1) {
      FUN_02c3aa18(param_1,3);
      if (*(int *)(**(int **)(_UNK_02c3cf60 + 0x2c3ceb8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3cf64 + 0x2c3ced4));
      iVar2 = **(int **)(**(int **)(_UNK_02c3cf68 + 0x2c3cee8) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02c3e3f8(&uStack_24,iVar2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_02c38c68(iVar1,uStack_24,uStack_20,uStack_1c,0x3f800000,0);
      uVar4 = 1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe8f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x028952ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bec228(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_02bec448 + 0x2bec248);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bec44c + 0x2bec25c));
    func_0x01438628(*(undefined4 *)(_UNK_02bec450 + 0x2bec268));
    *pcVar3 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x02953fd4(0x5ede,0);
  if (iVar1 == 0) {
    iVar1 = 4;
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x44);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar2 = iVar1 - 4;
      if (*(int *)(iVar5 + 0xc) <= (int)uVar2) break;
      iVar5 = *(int *)(param_1 + 0x44);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar2) {
        func_0x014388e8();
      }
      if (*(int *)(iVar5 + iVar1 * 4) != 0) {
        iVar5 = *(int *)(param_1 + 0x44);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar2) {
          func_0x014388e8();
        }
        iVar5 = *(int *)(iVar5 + iVar1 * 4);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3f4b4(iVar5,0);
        if (iVar5 == param_2) {
          iVar6 = *(int *)(param_1 + 0x44);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar2) {
            func_0x014388e8();
          }
          iVar6 = *(int *)(iVar6 + iVar1 * 4);
        }
      }
      iVar1 = iVar1 + 1;
    }
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(iVar6 + 0xc);
      if (*(int *)(**(int **)(_UNK_02bec454 + 0x2bec398) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar4,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar6 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x11c) != 0) {
          iVar1 = *(int *)(iVar6 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x11c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x84);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x046c26fc(iVar1,param_3,**(undefined4 **)(_UNK_02bec458 + 0x2bec420));
          return (uint)(iVar1 == 0);
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5ede,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d207c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}


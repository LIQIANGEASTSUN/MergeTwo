
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba1d20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02ba1f10 + 0x2ba1d38);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba1f14 + 0x2ba1d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1f18 + 0x2ba1d58));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1f1c + 0x2ba1d64));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1f20 + 0x2ba1d70));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1f24 + 0x2ba1d7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfc2,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02ba1f28 + 0x2ba1dd4);
    iVar1 = **(int **)(*piVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,10,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02ba1f2c + 0x2ba1e10) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba1f30 + 0x2ba1e2c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029ca78c(iVar1,0);
      if (iVar1 < 3) {
        piVar6 = *(int **)(_UNK_02ba1f34 + 0x2ba1e60);
        uVar2 = **(undefined4 **)(*piVar6 + 0x5c);
        if (*(int *)(**(int **)(_UNK_02ba1f38 + 0x2ba1e6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024eec50(uVar2,0,0);
        if (iVar1 == 0) {
          iVar5 = **(int **)(*piVar6 + 0x5c);
          iVar1 = **(int **)(*piVar4 + 0x5c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_14 = func_0x02d06994(iVar5,0);
          uVar2 = func_0x01524ffc(&uStack_14,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b6127c(iVar1,10,uVar2,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfc2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}


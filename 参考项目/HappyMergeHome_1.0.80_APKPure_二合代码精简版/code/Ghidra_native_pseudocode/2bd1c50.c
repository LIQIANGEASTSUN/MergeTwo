
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be1c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (char *)(_UNK_02be1dac + 0x2be1c70);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be1db0 + 0x2be1c88));
    func_0x01438628(*(undefined4 *)(_UNK_02be1db4 + 0x2be1c94));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d0a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02be1dc0(param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_02bad204(param_1,param_3,param_4);
      if (*(int *)(**(int **)(_UNK_02be1db8 + 0x2be1d28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be1dbc + 0x2be1d44));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x026ffbe0(iVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x014e6e04((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_026f72d8(iVar1,uVar3,(int)uVar5,uVar3,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d0a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}


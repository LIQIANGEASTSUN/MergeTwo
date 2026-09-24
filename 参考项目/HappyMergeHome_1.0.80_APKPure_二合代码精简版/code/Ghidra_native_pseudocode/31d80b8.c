
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e80b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar2 = (char *)(_UNK_031e82ac + 0x31e80d8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e82b0 + 0x31e80f0));
    func_0x01438628(*(undefined4 *)(_UNK_031e82b4 + 0x31e80fc));
    func_0x01438628(*(undefined4 *)(_UNK_031e82b8 + 0x31e8108));
    func_0x01438628(*(undefined4 *)(_UNK_031e82bc + 0x31e8114));
    func_0x01438628(*(undefined4 *)(_UNK_031e82c0 + 0x31e8120));
    func_0x01438628(*(undefined4 *)(_UNK_031e82c4 + 0x31e812c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x330b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031e82c8 + 0x31e8198) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031e82cc + 0x31e81b4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0299ab14(iVar1,0);
    func_0x031e82e0(param_1,param_2,**(undefined4 **)(_UNK_031e82d0 + 0x31e81e4));
    piVar5 = *(int **)(_UNK_031e82d4 + 0x31e81f8);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar3 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      uVar4 = **(undefined4 **)(iVar1 + 0x5c);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031e82d8 + 0x31e8240));
      func_0x05096384(iVar3,uVar4,**(undefined4 **)(_UNK_031e82dc + 0x31e8260),0);
      piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
      *piVar5 = iVar3;
      func_0x014385cc(piVar5,iVar3);
    }
    if (param_1 == 0) {
      func_0x014388e4();
    }
    func_0x031e8594(param_1,param_2,param_3,param_4,param_5,iVar3);
  }
  else {
    iVar1 = func_0x029540a4(0x330b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871c20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}


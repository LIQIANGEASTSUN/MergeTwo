
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f96e00(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02f970b8 + 0x2f96e18);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f970bc + 0x2f96e2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f970c0 + 0x2f96e38));
    func_0x01438628(*(undefined4 *)(_UNK_02f970c4 + 0x2f96e44));
    func_0x01438628(*(undefined4 *)(_UNK_02f970c8 + 0x2f96e50));
    func_0x01438628(*(undefined4 *)(_UNK_02f970cc + 0x2f96e5c));
    func_0x01438628(*(undefined4 *)(_UNK_02f970d0 + 0x2f96e68));
    func_0x01438628(*(undefined4 *)(_UNK_02f970d4 + 0x2f96e74));
    func_0x01438628(*(undefined4 *)(_UNK_02f970d8 + 0x2f96e80));
    func_0x01438628(*(undefined4 *)(_UNK_02f970dc + 0x2f96e8c));
    func_0x01438628(*(undefined4 *)(_UNK_02f970e0 + 0x2f96e98));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6f7b,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f970e4 + 0x2f96f08));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f970e8 + 0x2f96f1c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f970ec + 0x2f96f40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f970f0 + 0x2f96f5c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370eb30(iVar1,**(undefined4 **)(_UNK_02f970f4 + 0x2f96f7c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f970f8 + 0x2f96fa8));
      puVar5 = *(undefined4 **)(_UNK_02f970fc + 0x2f96fbc);
      puVar7 = *(undefined4 **)(_UNK_02f97100 + 0x2f96fc4);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f97104 + 0x2f9701c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6f7b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029155d8(iVar1,param_1,0);
  }
  return iVar1;
}


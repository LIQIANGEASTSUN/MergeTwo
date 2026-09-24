
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0327746c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0327772c + 0x3277484);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03277730 + 0x3277498));
    func_0x01438628(*(undefined4 *)(_UNK_03277734 + 0x32774a4));
    func_0x01438628(*(undefined4 *)(_UNK_03277738 + 0x32774b0));
    func_0x01438628(*(undefined4 *)(_UNK_0327773c + 0x32774bc));
    func_0x01438628(*(undefined4 *)(_UNK_03277740 + 0x32774c8));
    func_0x01438628(*(undefined4 *)(_UNK_03277744 + 0x32774d4));
    func_0x01438628(*(undefined4 *)(_UNK_03277748 + 0x32774e0));
    func_0x01438628(*(undefined4 *)(_UNK_0327774c + 0x32774ec));
    func_0x01438628(*(undefined4 *)(_UNK_03277750 + 0x32774f8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xeec,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03277754 + 0x327756c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03277758 + 0x3277580));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0327775c + 0x32775a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03277760 + 0x32775c0));
      iVar2 = FUN_032763dc(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03277764 + 0x327761c));
        puVar6 = *(undefined4 **)(_UNK_03277768 + 0x3277630);
        puVar7 = *(undefined4 **)(_UNK_0327776c + 0x3277638);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03277770 + 0x3277690));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xeec,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


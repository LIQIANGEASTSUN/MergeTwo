
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032d5508(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032d57c0 + 0x32d5520);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d57c4 + 0x32d5534));
    func_0x01438628(*(undefined4 *)(_UNK_032d57c8 + 0x32d5540));
    func_0x01438628(*(undefined4 *)(_UNK_032d57cc + 0x32d554c));
    func_0x01438628(*(undefined4 *)(_UNK_032d57d0 + 0x32d5558));
    func_0x01438628(*(undefined4 *)(_UNK_032d57d4 + 0x32d5564));
    func_0x01438628(*(undefined4 *)(_UNK_032d57d8 + 0x32d5570));
    func_0x01438628(*(undefined4 *)(_UNK_032d57dc + 0x32d557c));
    func_0x01438628(*(undefined4 *)(_UNK_032d57e0 + 0x32d5588));
    func_0x01438628(*(undefined4 *)(_UNK_032d57e4 + 0x32d5594));
    func_0x01438628(*(undefined4 *)(_UNK_032d57e8 + 0x32d55a0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x83b2,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d57ec + 0x32d5610));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032d57f0 + 0x32d5624));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_032d57f4 + 0x32d5648) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d57f8 + 0x32d5664));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e1598(iVar1,**(undefined4 **)(_UNK_032d57fc + 0x32d5684));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032d5800 + 0x32d56b0));
      puVar5 = *(undefined4 **)(_UNK_032d5804 + 0x32d56c4);
      puVar7 = *(undefined4 **)(_UNK_032d5808 + 0x32d56cc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032d580c + 0x32d5724));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x83b2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029205bc(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0310d5f8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0310d8b0 + 0x310d610);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310d8b4 + 0x310d624));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8b8 + 0x310d630));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8bc + 0x310d63c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8c0 + 0x310d648));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8c4 + 0x310d654));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8c8 + 0x310d660));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8cc + 0x310d66c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8d0 + 0x310d678));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8d4 + 0x310d684));
    func_0x01438628(*(undefined4 *)(_UNK_0310d8d8 + 0x310d690));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7857,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310d8dc + 0x310d700));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0310d8e0 + 0x310d714));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0310d8e4 + 0x310d738) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310d8e8 + 0x310d754));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7038(iVar1,**(undefined4 **)(_UNK_0310d8ec + 0x310d774));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0310d8f0 + 0x310d7a0));
      puVar5 = *(undefined4 **)(_UNK_0310d8f4 + 0x310d7b4);
      puVar7 = *(undefined4 **)(_UNK_0310d8f8 + 0x310d7bc);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0310d8fc + 0x310d814));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7857,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291a404(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02ebd1a0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02ebd448 + 0x2ebd1b8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebd44c + 0x2ebd1cc));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd450 + 0x2ebd1d8));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd454 + 0x2ebd1e4));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd458 + 0x2ebd1f0));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd45c + 0x2ebd1fc));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd460 + 0x2ebd208));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd464 + 0x2ebd214));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd468 + 0x2ebd220));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd46c + 0x2ebd22c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xd90,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x10);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ebd470 + 0x2ebd29c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02ebd474 + 0x2ebd2b0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02ebd478 + 0x2ebd2d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebd47c + 0x2ebd2f0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,0x56be,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02ebd480 + 0x2ebd338));
      puVar5 = *(undefined4 **)(_UNK_02ebd484 + 0x2ebd34c);
      puVar7 = *(undefined4 **)(_UNK_02ebd488 + 0x2ebd354);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x2c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02ebd48c + 0x2ebd3ac));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0xd90,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


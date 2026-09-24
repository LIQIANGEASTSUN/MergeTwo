
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032d5b28(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032d5de0 + 0x32d5b40);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d5de4 + 0x32d5b54));
    func_0x01438628(*(undefined4 *)(_UNK_032d5de8 + 0x32d5b60));
    func_0x01438628(*(undefined4 *)(_UNK_032d5dec + 0x32d5b6c));
    func_0x01438628(*(undefined4 *)(_UNK_032d5df0 + 0x32d5b78));
    func_0x01438628(*(undefined4 *)(_UNK_032d5df4 + 0x32d5b84));
    func_0x01438628(*(undefined4 *)(_UNK_032d5df8 + 0x32d5b90));
    func_0x01438628(*(undefined4 *)(_UNK_032d5dfc + 0x32d5b9c));
    func_0x01438628(*(undefined4 *)(_UNK_032d5e00 + 0x32d5ba8));
    func_0x01438628(*(undefined4 *)(_UNK_032d5e04 + 0x32d5bb4));
    func_0x01438628(*(undefined4 *)(_UNK_032d5e08 + 0x32d5bc0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8361,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d5e0c + 0x32d5c30));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032d5e10 + 0x32d5c44));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_032d5e14 + 0x32d5c68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d5e18 + 0x32d5c84));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e1598(iVar1,**(undefined4 **)(_UNK_032d5e1c + 0x32d5ca4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032d5e20 + 0x32d5cd0));
      puVar5 = *(undefined4 **)(_UNK_032d5e24 + 0x32d5ce4);
      puVar7 = *(undefined4 **)(_UNK_032d5e28 + 0x32d5cec);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032d5e2c + 0x32d5d44));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8361,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029202a4(iVar1,param_1,0);
  }
  return iVar1;
}


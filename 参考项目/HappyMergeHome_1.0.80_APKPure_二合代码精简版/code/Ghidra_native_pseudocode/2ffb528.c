
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0300b528(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0300b7e8 + 0x300b540);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300b7ec + 0x300b554));
    func_0x01438628(*(undefined4 *)(_UNK_0300b7f0 + 0x300b560));
    func_0x01438628(*(undefined4 *)(_UNK_0300b7f4 + 0x300b56c));
    func_0x01438628(*(undefined4 *)(_UNK_0300b7f8 + 0x300b578));
    func_0x01438628(*(undefined4 *)(_UNK_0300b7fc + 0x300b584));
    func_0x01438628(*(undefined4 *)(_UNK_0300b800 + 0x300b590));
    func_0x01438628(*(undefined4 *)(_UNK_0300b804 + 0x300b59c));
    func_0x01438628(*(undefined4 *)(_UNK_0300b808 + 0x300b5a8));
    func_0x01438628(*(undefined4 *)(_UNK_0300b80c + 0x300b5b4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf5f,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300b810 + 0x300b628));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0300b814 + 0x300b63c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0300b818 + 0x300b660) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300b81c + 0x300b67c));
      iVar2 = FUN_0300a498(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0300b820 + 0x300b6d8));
        puVar6 = *(undefined4 **)(_UNK_0300b824 + 0x300b6ec);
        puVar7 = *(undefined4 **)(_UNK_0300b828 + 0x300b6f4);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0300b82c + 0x300b74c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf5f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


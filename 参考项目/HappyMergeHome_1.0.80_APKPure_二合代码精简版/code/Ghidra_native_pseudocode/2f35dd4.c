
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f45dd4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f4608c + 0x2f45dec);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f46090 + 0x2f45e00));
    func_0x01438628(*(undefined4 *)(_UNK_02f46094 + 0x2f45e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02f46098 + 0x2f45e18));
    func_0x01438628(*(undefined4 *)(_UNK_02f4609c + 0x2f45e24));
    func_0x01438628(*(undefined4 *)(_UNK_02f460a0 + 0x2f45e30));
    func_0x01438628(*(undefined4 *)(_UNK_02f460a4 + 0x2f45e3c));
    func_0x01438628(*(undefined4 *)(_UNK_02f460a8 + 0x2f45e48));
    func_0x01438628(*(undefined4 *)(_UNK_02f460ac + 0x2f45e54));
    func_0x01438628(*(undefined4 *)(_UNK_02f460b0 + 0x2f45e60));
    func_0x01438628(*(undefined4 *)(_UNK_02f460b4 + 0x2f45e6c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6dc5,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f460b8 + 0x2f45edc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f460bc + 0x2f45ef0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f460c0 + 0x2f45f14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f460c4 + 0x2f45f30));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370f5b8(iVar1,**(undefined4 **)(_UNK_02f460c8 + 0x2f45f50));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f460cc + 0x2f45f7c));
      puVar5 = *(undefined4 **)(_UNK_02f460d0 + 0x2f45f90);
      puVar7 = *(undefined4 **)(_UNK_02f460d4 + 0x2f45f98);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f460d8 + 0x2f45ff0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6dc5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291401c(iVar1,param_1,0);
  }
  return iVar1;
}


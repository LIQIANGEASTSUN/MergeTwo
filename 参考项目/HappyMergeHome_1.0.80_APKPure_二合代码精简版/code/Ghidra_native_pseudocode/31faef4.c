
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0320aef4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0320b1ac + 0x320af0c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320b1b0 + 0x320af20));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1b4 + 0x320af2c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1b8 + 0x320af38));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1bc + 0x320af44));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1c0 + 0x320af50));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1c4 + 0x320af5c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1c8 + 0x320af68));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1cc + 0x320af74));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1d0 + 0x320af80));
    func_0x01438628(*(undefined4 *)(_UNK_0320b1d4 + 0x320af8c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7e57,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320b1d8 + 0x320affc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0320b1dc + 0x320b010));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0320b1e0 + 0x320b034) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320b1e4 + 0x320b050));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e41f0(iVar1,**(undefined4 **)(_UNK_0320b1e8 + 0x320b070));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0320b1ec + 0x320b09c));
      puVar5 = *(undefined4 **)(_UNK_0320b1f0 + 0x320b0b0);
      puVar7 = *(undefined4 **)(_UNK_0320b1f4 + 0x320b0b8);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0320b1f8 + 0x320b110));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7e57,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291d9bc(iVar1,param_1,0);
  }
  return iVar1;
}


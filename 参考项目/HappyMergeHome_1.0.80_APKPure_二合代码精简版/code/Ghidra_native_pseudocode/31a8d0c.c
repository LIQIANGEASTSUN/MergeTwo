
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031b8d0c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_031b8fc4 + 0x31b8d24);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b8fc8 + 0x31b8d38));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fcc + 0x31b8d44));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fd0 + 0x31b8d50));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fd4 + 0x31b8d5c));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fd8 + 0x31b8d68));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fdc + 0x31b8d74));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fe0 + 0x31b8d80));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fe4 + 0x31b8d8c));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fe8 + 0x31b8d98));
    func_0x01438628(*(undefined4 *)(_UNK_031b8fec + 0x31b8da4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7cd8,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031b8ff0 + 0x31b8e14));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_031b8ff4 + 0x31b8e28));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_031b8ff8 + 0x31b8e4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b8ffc + 0x31b8e68));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e4bd0(iVar1,**(undefined4 **)(_UNK_031b9000 + 0x31b8e88));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_031b9004 + 0x31b8eb4));
      puVar5 = *(undefined4 **)(_UNK_031b9008 + 0x31b8ec8);
      puVar7 = *(undefined4 **)(_UNK_031b900c + 0x31b8ed0);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031b9010 + 0x31b8f28));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7cd8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291cc0c(iVar1,param_1,0);
  }
  return iVar1;
}


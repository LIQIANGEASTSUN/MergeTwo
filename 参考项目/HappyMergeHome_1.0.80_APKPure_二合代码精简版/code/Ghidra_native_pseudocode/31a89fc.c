
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031b89fc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_031b8cb4 + 0x31b8a14);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b8cb8 + 0x31b8a28));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cbc + 0x31b8a34));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cc0 + 0x31b8a40));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cc4 + 0x31b8a4c));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cc8 + 0x31b8a58));
    func_0x01438628(*(undefined4 *)(_UNK_031b8ccc + 0x31b8a64));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cd0 + 0x31b8a70));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cd4 + 0x31b8a7c));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cd8 + 0x31b8a88));
    func_0x01438628(*(undefined4 *)(_UNK_031b8cdc + 0x31b8a94));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7d11,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031b8ce0 + 0x31b8b04));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_031b8ce4 + 0x31b8b18));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_031b8ce8 + 0x31b8b3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b8cec + 0x31b8b58));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e4bd0(iVar1,**(undefined4 **)(_UNK_031b8cf0 + 0x31b8b78));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_031b8cf4 + 0x31b8ba4));
      puVar5 = *(undefined4 **)(_UNK_031b8cf8 + 0x31b8bb8);
      puVar7 = *(undefined4 **)(_UNK_031b8cfc + 0x31b8bc0);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031b8d00 + 0x31b8c18));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7d11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291ce1c(iVar1,param_1,0);
  }
  return iVar1;
}


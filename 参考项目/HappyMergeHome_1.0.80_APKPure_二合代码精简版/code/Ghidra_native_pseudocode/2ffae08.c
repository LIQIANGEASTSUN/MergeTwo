
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0300ae08(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0300b0c0 + 0x300ae20);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300b0c4 + 0x300ae34));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0c8 + 0x300ae40));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0cc + 0x300ae4c));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0d0 + 0x300ae58));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0d4 + 0x300ae64));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0d8 + 0x300ae70));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0dc + 0x300ae7c));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0e0 + 0x300ae88));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0e4 + 0x300ae94));
    func_0x01438628(*(undefined4 *)(_UNK_0300b0e8 + 0x300aea0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7252,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300b0ec + 0x300af10));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0300b0f0 + 0x300af24));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0300b0f4 + 0x300af48) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300b0f8 + 0x300af64));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370d420(iVar1,**(undefined4 **)(_UNK_0300b0fc + 0x300af84));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0300b100 + 0x300afb0));
      puVar5 = *(undefined4 **)(_UNK_0300b104 + 0x300afc4);
      puVar7 = *(undefined4 **)(_UNK_0300b108 + 0x300afcc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0300b10c + 0x300b024));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7252,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02916f40(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0183b9d4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0183bc8c + 0x183b9ec);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183bc90 + 0x183ba00));
    func_0x01438628(*(undefined4 *)(_UNK_0183bc94 + 0x183ba0c));
    func_0x01438628(*(undefined4 *)(_UNK_0183bc98 + 0x183ba18));
    func_0x01438628(*(undefined4 *)(_UNK_0183bc9c + 0x183ba24));
    func_0x01438628(*(undefined4 *)(_UNK_0183bca0 + 0x183ba30));
    func_0x01438628(*(undefined4 *)(_UNK_0183bca4 + 0x183ba3c));
    func_0x01438628(*(undefined4 *)(_UNK_0183bca8 + 0x183ba48));
    func_0x01438628(*(undefined4 *)(_UNK_0183bcac + 0x183ba54));
    func_0x01438628(*(undefined4 *)(_UNK_0183bcb0 + 0x183ba60));
    func_0x01438628(*(undefined4 *)(_UNK_0183bcb4 + 0x183ba6c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9207,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0183bcb8 + 0x183badc));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0183bcbc + 0x183baf0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0183bcc0 + 0x183bb14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183bcc4 + 0x183bb30));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9188(iVar1,**(undefined4 **)(_UNK_0183bcc8 + 0x183bb50));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0183bccc + 0x183bb7c));
      puVar5 = *(undefined4 **)(_UNK_0183bcd0 + 0x183bb90);
      puVar7 = *(undefined4 **)(_UNK_0183bcd4 + 0x183bb98);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0183bcd8 + 0x183bbf0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9207,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02927cd8(iVar1,param_1,0);
  }
  return iVar1;
}


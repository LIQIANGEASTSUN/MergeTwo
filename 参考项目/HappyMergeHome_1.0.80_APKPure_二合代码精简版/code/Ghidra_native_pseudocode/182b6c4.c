
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0183b6c4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0183b97c + 0x183b6dc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183b980 + 0x183b6f0));
    func_0x01438628(*(undefined4 *)(_UNK_0183b984 + 0x183b6fc));
    func_0x01438628(*(undefined4 *)(_UNK_0183b988 + 0x183b708));
    func_0x01438628(*(undefined4 *)(_UNK_0183b98c + 0x183b714));
    func_0x01438628(*(undefined4 *)(_UNK_0183b990 + 0x183b720));
    func_0x01438628(*(undefined4 *)(_UNK_0183b994 + 0x183b72c));
    func_0x01438628(*(undefined4 *)(_UNK_0183b998 + 0x183b738));
    func_0x01438628(*(undefined4 *)(_UNK_0183b99c + 0x183b744));
    func_0x01438628(*(undefined4 *)(_UNK_0183b9a0 + 0x183b750));
    func_0x01438628(*(undefined4 *)(_UNK_0183b9a4 + 0x183b75c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9240,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0183b9a8 + 0x183b7cc));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0183b9ac + 0x183b7e0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0183b9b0 + 0x183b804) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183b9b4 + 0x183b820));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9188(iVar1,**(undefined4 **)(_UNK_0183b9b8 + 0x183b840));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0183b9bc + 0x183b86c));
      puVar5 = *(undefined4 **)(_UNK_0183b9c0 + 0x183b880);
      puVar7 = *(undefined4 **)(_UNK_0183b9c4 + 0x183b888);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0183b9c8 + 0x183b8e0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9240,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02927ee8(iVar1,param_1,0);
  }
  return iVar1;
}


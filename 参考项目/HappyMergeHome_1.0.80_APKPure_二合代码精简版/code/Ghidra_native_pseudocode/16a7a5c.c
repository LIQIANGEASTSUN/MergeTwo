
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b7a5c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016b7d14 + 0x16b7a74);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b7d18 + 0x16b7a88));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d1c + 0x16b7a94));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d20 + 0x16b7aa0));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d24 + 0x16b7aac));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d28 + 0x16b7ab8));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d2c + 0x16b7ac4));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d30 + 0x16b7ad0));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d34 + 0x16b7adc));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d38 + 0x16b7ae8));
    func_0x01438628(*(undefined4 *)(_UNK_016b7d3c + 0x16b7af4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x891a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016b7d40 + 0x16b7b64));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016b7d44 + 0x16b7b78));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016b7d48 + 0x16b7b9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b7d4c + 0x16b7bb8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f130c(iVar1,**(undefined4 **)(_UNK_016b7d50 + 0x16b7bd8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016b7d54 + 0x16b7c04));
      puVar5 = *(undefined4 **)(_UNK_016b7d58 + 0x16b7c18);
      puVar7 = *(undefined4 **)(_UNK_016b7d5c + 0x16b7c20);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016b7d60 + 0x16b7c78));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x891a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029233b8(iVar1,param_1,0);
  }
  return iVar1;
}


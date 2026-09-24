
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf06ec(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02bf08bc + 0x2bf0704);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf08c0 + 0x2bf0718));
    func_0x01438628(*(undefined4 *)(_UNK_02bf08c4 + 0x2bf0724));
    func_0x01438628(*(undefined4 *)(_UNK_02bf08c8 + 0x2bf0730));
    func_0x01438628(*(undefined4 *)(_UNK_02bf08cc + 0x2bf073c));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x02953fd4(0x5d58,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04adcaf8(&uStack_20,iVar1,**(undefined4 **)(_UNK_02bf08d0 + 0x2bf07b8));
    puVar4 = *(undefined4 **)(_UNK_02bf08d4 + 0x2bf07cc);
    while (iVar2 = func_0x048788d0(&uStack_20,*puVar4), iVar1 = iStack_14, iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024ef308(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f1154(iVar1,0);
    }
    func_0x048788cc(&uStack_20,**(undefined4 **)(_UNK_02bf08d8 + 0x2bf0824));
  }
  else {
    iVar1 = func_0x029540a4(0x5d58,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}


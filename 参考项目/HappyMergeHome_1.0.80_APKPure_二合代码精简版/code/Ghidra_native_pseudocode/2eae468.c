
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ebe468(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_02ebe63c + 0x2ebe488);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebe640 + 0x2ebe4a0));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe644 + 0x2ebe4ac));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe648 + 0x2ebe4b8));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe64c + 0x2ebe4c4));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe650 + 0x2ebe4d0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x47d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02ebe654 + 0x2ebe53c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebe658 + 0x2ebe558));
    piVar6 = *(int **)(_UNK_02ebe65c + 0x2ebe56c);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar6;
    }
    iVar4 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar4 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar6;
      }
      uVar5 = **(undefined4 **)(iVar2 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02ebe660 + 0x2ebe5b4));
      func_0x0152e3ec(iVar4,uVar5,**(undefined4 **)(_UNK_02ebe664 + 0x2ebe5d4),0);
      piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
      *piVar6 = iVar4;
      func_0x014385cc(piVar6,iVar4);
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b79ad8(iVar1,0x2be,param_2,param_3,param_4,0x3f800000,0,0x3e99999a,iVar4,0);
  }
  else {
    iVar1 = func_0x029540a4(0x47d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871c20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}


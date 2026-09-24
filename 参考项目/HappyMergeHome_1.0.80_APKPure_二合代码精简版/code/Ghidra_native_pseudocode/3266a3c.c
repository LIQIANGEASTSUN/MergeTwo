
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03276a3c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03276cf4 + 0x3276a54);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03276cf8 + 0x3276a68));
    func_0x01438628(*(undefined4 *)(_UNK_03276cfc + 0x3276a74));
    func_0x01438628(*(undefined4 *)(_UNK_03276d00 + 0x3276a80));
    func_0x01438628(*(undefined4 *)(_UNK_03276d04 + 0x3276a8c));
    func_0x01438628(*(undefined4 *)(_UNK_03276d08 + 0x3276a98));
    func_0x01438628(*(undefined4 *)(_UNK_03276d0c + 0x3276aa4));
    func_0x01438628(*(undefined4 *)(_UNK_03276d10 + 0x3276ab0));
    func_0x01438628(*(undefined4 *)(_UNK_03276d14 + 0x3276abc));
    func_0x01438628(*(undefined4 *)(_UNK_03276d18 + 0x3276ac8));
    func_0x01438628(*(undefined4 *)(_UNK_03276d1c + 0x3276ad4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8150,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03276d20 + 0x3276b44));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03276d24 + 0x3276b58));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03276d28 + 0x3276b7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03276d2c + 0x3276b98));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e2b78(iVar1,**(undefined4 **)(_UNK_03276d30 + 0x3276bb8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03276d34 + 0x3276be4));
      puVar5 = *(undefined4 **)(_UNK_03276d38 + 0x3276bf8);
      puVar7 = *(undefined4 **)(_UNK_03276d3c + 0x3276c00);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03276d40 + 0x3276c58));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8150,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291f51c(iVar1,param_1,0);
  }
  return iVar1;
}


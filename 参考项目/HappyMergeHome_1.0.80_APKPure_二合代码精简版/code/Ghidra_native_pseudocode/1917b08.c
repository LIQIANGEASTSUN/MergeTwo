
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01927b08(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01927dc8 + 0x1927b20);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01927dcc + 0x1927b34));
    func_0x01438628(*(undefined4 *)(_UNK_01927dd0 + 0x1927b40));
    func_0x01438628(*(undefined4 *)(_UNK_01927dd4 + 0x1927b4c));
    func_0x01438628(*(undefined4 *)(_UNK_01927dd8 + 0x1927b58));
    func_0x01438628(*(undefined4 *)(_UNK_01927ddc + 0x1927b64));
    func_0x01438628(*(undefined4 *)(_UNK_01927de0 + 0x1927b70));
    func_0x01438628(*(undefined4 *)(_UNK_01927de4 + 0x1927b7c));
    func_0x01438628(*(undefined4 *)(_UNK_01927de8 + 0x1927b88));
    func_0x01438628(*(undefined4 *)(_UNK_01927dec + 0x1927b94));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xfa4,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01927df0 + 0x1927c08));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01927df4 + 0x1927c1c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01927df8 + 0x1927c40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01927dfc + 0x1927c5c));
      iVar2 = FUN_01926a78(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01927e00 + 0x1927cb8));
        puVar6 = *(undefined4 **)(_UNK_01927e04 + 0x1927ccc);
        puVar7 = *(undefined4 **)(_UNK_01927e08 + 0x1927cd4);
        while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f1078(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01927e0c + 0x1927d2c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xfa4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


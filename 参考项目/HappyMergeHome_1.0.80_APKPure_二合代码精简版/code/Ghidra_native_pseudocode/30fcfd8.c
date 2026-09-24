
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0310cfd8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0310d290 + 0x310cff0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310d294 + 0x310d004));
    func_0x01438628(*(undefined4 *)(_UNK_0310d298 + 0x310d010));
    func_0x01438628(*(undefined4 *)(_UNK_0310d29c + 0x310d01c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2a0 + 0x310d028));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2a4 + 0x310d034));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2a8 + 0x310d040));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2ac + 0x310d04c));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2b0 + 0x310d058));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2b4 + 0x310d064));
    func_0x01438628(*(undefined4 *)(_UNK_0310d2b8 + 0x310d070));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x788d,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310d2bc + 0x310d0e0));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0310d2c0 + 0x310d0f4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0310d2c4 + 0x310d118) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310d2c8 + 0x310d134));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7038(iVar1,**(undefined4 **)(_UNK_0310d2cc + 0x310d154));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0310d2d0 + 0x310d180));
      puVar5 = *(undefined4 **)(_UNK_0310d2d4 + 0x310d194);
      puVar7 = *(undefined4 **)(_UNK_0310d2d8 + 0x310d19c);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0310d2dc + 0x310d1f4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x788d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291a71c(iVar1,param_1,0);
  }
  return iVar1;
}


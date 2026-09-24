
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0167dff4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0167e2b4 + 0x167e00c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167e2b8 + 0x167e020));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2bc + 0x167e02c));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2c0 + 0x167e038));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2c4 + 0x167e044));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2c8 + 0x167e050));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2cc + 0x167e05c));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2d0 + 0x167e068));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2d4 + 0x167e074));
    func_0x01438628(*(undefined4 *)(_UNK_0167e2d8 + 0x167e080));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf76,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0167e2dc + 0x167e0f4));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0167e2e0 + 0x167e108));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0167e2e4 + 0x167e12c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167e2e8 + 0x167e148));
      iVar2 = FUN_0167cf64(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0167e2ec + 0x167e1a4));
        puVar6 = *(undefined4 **)(_UNK_0167e2f0 + 0x167e1b8);
        puVar7 = *(undefined4 **)(_UNK_0167e2f4 + 0x167e1c0);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0167e2f8 + 0x167e218));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf76,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0183c0f4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0183c3b4 + 0x183c10c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183c3b8 + 0x183c120));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3bc + 0x183c12c));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3c0 + 0x183c138));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3c4 + 0x183c144));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3c8 + 0x183c150));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3cc + 0x183c15c));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3d0 + 0x183c168));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3d4 + 0x183c174));
    func_0x01438628(*(undefined4 *)(_UNK_0183c3d8 + 0x183c180));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x17d7,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0183c3dc + 0x183c1f4));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0183c3e0 + 0x183c208));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_0183c3e4 + 0x183c22c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183c3e8 + 0x183c248));
      iVar2 = FUN_0183b064(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0183c3ec + 0x183c2a4));
        puVar6 = *(undefined4 **)(_UNK_0183c3f0 + 0x183c2b8);
        puVar7 = *(undefined4 **)(_UNK_0183c3f4 + 0x183c2c0);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0183c3f8 + 0x183c318));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x17d7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


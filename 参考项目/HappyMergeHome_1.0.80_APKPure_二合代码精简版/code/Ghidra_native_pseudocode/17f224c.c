
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0180224c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01802504 + 0x1802264);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01802508 + 0x1802278));
    func_0x01438628(*(undefined4 *)(_UNK_0180250c + 0x1802284));
    func_0x01438628(*(undefined4 *)(_UNK_01802510 + 0x1802290));
    func_0x01438628(*(undefined4 *)(_UNK_01802514 + 0x180229c));
    func_0x01438628(*(undefined4 *)(_UNK_01802518 + 0x18022a8));
    func_0x01438628(*(undefined4 *)(_UNK_0180251c + 0x18022b4));
    func_0x01438628(*(undefined4 *)(_UNK_01802520 + 0x18022c0));
    func_0x01438628(*(undefined4 *)(_UNK_01802524 + 0x18022cc));
    func_0x01438628(*(undefined4 *)(_UNK_01802528 + 0x18022d8));
    func_0x01438628(*(undefined4 *)(_UNK_0180252c + 0x18022e4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x90c1,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01802530 + 0x1802354));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01802534 + 0x1802368));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01802538 + 0x180238c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0180253c + 0x18023a8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9e20(iVar1,**(undefined4 **)(_UNK_01802540 + 0x18023c8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01802544 + 0x18023f4));
      puVar5 = *(undefined4 **)(_UNK_01802548 + 0x1802408);
      puVar7 = *(undefined4 **)(_UNK_0180254c + 0x1802410);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01802550 + 0x1802468));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x90c1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02927138(iVar1,param_1,0);
  }
  return iVar1;
}


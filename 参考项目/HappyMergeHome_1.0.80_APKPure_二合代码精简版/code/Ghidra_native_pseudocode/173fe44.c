
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0174fe44(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01750104 + 0x174fe5c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01750108 + 0x174fe70));
    func_0x01438628(*(undefined4 *)(_UNK_0175010c + 0x174fe7c));
    func_0x01438628(*(undefined4 *)(_UNK_01750110 + 0x174fe88));
    func_0x01438628(*(undefined4 *)(_UNK_01750114 + 0x174fe94));
    func_0x01438628(*(undefined4 *)(_UNK_01750118 + 0x174fea0));
    func_0x01438628(*(undefined4 *)(_UNK_0175011c + 0x174feac));
    func_0x01438628(*(undefined4 *)(_UNK_01750120 + 0x174feb8));
    func_0x01438628(*(undefined4 *)(_UNK_01750124 + 0x174fec4));
    func_0x01438628(*(undefined4 *)(_UNK_01750128 + 0x174fed0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x15ca,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0175012c + 0x174ff44));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01750130 + 0x174ff58));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01750134 + 0x174ff7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01750138 + 0x174ff98));
      iVar2 = FUN_0174edb4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0175013c + 0x174fff4));
        puVar6 = *(undefined4 **)(_UNK_01750140 + 0x1750008);
        puVar7 = *(undefined4 **)(_UNK_01750144 + 0x1750010);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01750148 + 0x1750068));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x15ca,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


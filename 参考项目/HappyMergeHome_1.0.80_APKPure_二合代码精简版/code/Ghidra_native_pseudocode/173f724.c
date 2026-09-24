
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0174f724(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0174f9dc + 0x174f73c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174f9e0 + 0x174f750));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9e4 + 0x174f75c));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9e8 + 0x174f768));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9ec + 0x174f774));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9f0 + 0x174f780));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9f4 + 0x174f78c));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9f8 + 0x174f798));
    func_0x01438628(*(undefined4 *)(_UNK_0174f9fc + 0x174f7a4));
    func_0x01438628(*(undefined4 *)(_UNK_0174fa00 + 0x174f7b0));
    func_0x01438628(*(undefined4 *)(_UNK_0174fa04 + 0x174f7bc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8cc4,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0174fa08 + 0x174f82c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0174fa0c + 0x174f840));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0174fa10 + 0x174f864) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0174fa14 + 0x174f880));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dc6f8(iVar1,**(undefined4 **)(_UNK_0174fa18 + 0x174f8a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0174fa1c + 0x174f8cc));
      puVar5 = *(undefined4 **)(_UNK_0174fa20 + 0x174f8e0);
      puVar7 = *(undefined4 **)(_UNK_0174fa24 + 0x174f8e8);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0174fa28 + 0x174f940));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8cc4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029251f4(iVar1,param_1,0);
  }
  return iVar1;
}


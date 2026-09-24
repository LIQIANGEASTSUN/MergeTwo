
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017158d8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01715b90 + 0x17158f0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01715b94 + 0x1715904));
    func_0x01438628(*(undefined4 *)(_UNK_01715b98 + 0x1715910));
    func_0x01438628(*(undefined4 *)(_UNK_01715b9c + 0x171591c));
    func_0x01438628(*(undefined4 *)(_UNK_01715ba0 + 0x1715928));
    func_0x01438628(*(undefined4 *)(_UNK_01715ba4 + 0x1715934));
    func_0x01438628(*(undefined4 *)(_UNK_01715ba8 + 0x1715940));
    func_0x01438628(*(undefined4 *)(_UNK_01715bac + 0x171594c));
    func_0x01438628(*(undefined4 *)(_UNK_01715bb0 + 0x1715958));
    func_0x01438628(*(undefined4 *)(_UNK_01715bb4 + 0x1715964));
    func_0x01438628(*(undefined4 *)(_UNK_01715bb8 + 0x1715970));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8b4d,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01715bbc + 0x17159e0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01715bc0 + 0x17159f4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01715bc4 + 0x1715a18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01715bc8 + 0x1715a34));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dd390(iVar1,**(undefined4 **)(_UNK_01715bcc + 0x1715a54));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01715bd0 + 0x1715a80));
      puVar5 = *(undefined4 **)(_UNK_01715bd4 + 0x1715a94);
      puVar7 = *(undefined4 **)(_UNK_01715bd8 + 0x1715a9c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01715bdc + 0x1715af4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8b4d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292454c(iVar1,param_1,0);
  }
  return iVar1;
}


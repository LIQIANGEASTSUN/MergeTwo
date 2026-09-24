
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018746d8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01874990 + 0x18746f0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01874994 + 0x1874704));
    func_0x01438628(*(undefined4 *)(_UNK_01874998 + 0x1874710));
    func_0x01438628(*(undefined4 *)(_UNK_0187499c + 0x187471c));
    func_0x01438628(*(undefined4 *)(_UNK_018749a0 + 0x1874728));
    func_0x01438628(*(undefined4 *)(_UNK_018749a4 + 0x1874734));
    func_0x01438628(*(undefined4 *)(_UNK_018749a8 + 0x1874740));
    func_0x01438628(*(undefined4 *)(_UNK_018749ac + 0x187474c));
    func_0x01438628(*(undefined4 *)(_UNK_018749b0 + 0x1874758));
    func_0x01438628(*(undefined4 *)(_UNK_018749b4 + 0x1874764));
    func_0x01438628(*(undefined4 *)(_UNK_018749b8 + 0x1874770));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x93ba,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018749bc + 0x18747e0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018749c0 + 0x18747f4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018749c4 + 0x1874818) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018749c8 + 0x1874834));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d8650(iVar1,**(undefined4 **)(_UNK_018749cc + 0x1874854));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018749d0 + 0x1874880));
      puVar5 = *(undefined4 **)(_UNK_018749d4 + 0x1874894);
      puVar7 = *(undefined4 **)(_UNK_018749d8 + 0x187489c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018749dc + 0x18748f4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x93ba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02928c98(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1eab4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01b1ed14 + 0x1b1eacc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed18 + 0x1b1eae0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed1c + 0x1b1eaec));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed20 + 0x1b1eaf8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed24 + 0x1b1eb04));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed28 + 0x1b1eb10));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed2c + 0x1b1eb1c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ed30 + 0x1b1eb28));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x3830,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x58);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1ed34 + 0x1b1eb98));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01b1ed38 + 0x1b1ebac));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      iVar1 = FUN_01b188f4();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x01b1ed54(iVar1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01b1ed3c + 0x1b1ec04));
      puVar5 = *(undefined4 **)(_UNK_01b1ed40 + 0x1b1ec18);
      puVar7 = *(undefined4 **)(_UNK_01b1ed44 + 0x1b1ec20);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01b1ed48 + 0x1b1ec78));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x3830,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028d2a9c(iVar1,param_1,0);
  }
  return iVar1;
}


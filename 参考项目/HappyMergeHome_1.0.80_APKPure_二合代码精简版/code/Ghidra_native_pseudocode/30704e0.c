
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030804e0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03080798 + 0x30804f8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308079c + 0x308050c));
    func_0x01438628(*(undefined4 *)(_UNK_030807a0 + 0x3080518));
    func_0x01438628(*(undefined4 *)(_UNK_030807a4 + 0x3080524));
    func_0x01438628(*(undefined4 *)(_UNK_030807a8 + 0x3080530));
    func_0x01438628(*(undefined4 *)(_UNK_030807ac + 0x308053c));
    func_0x01438628(*(undefined4 *)(_UNK_030807b0 + 0x3080548));
    func_0x01438628(*(undefined4 *)(_UNK_030807b4 + 0x3080554));
    func_0x01438628(*(undefined4 *)(_UNK_030807b8 + 0x3080560));
    func_0x01438628(*(undefined4 *)(_UNK_030807bc + 0x308056c));
    func_0x01438628(*(undefined4 *)(_UNK_030807c0 + 0x3080578));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x755f,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030807c4 + 0x30805e8));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030807c8 + 0x30805fc));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_030807cc + 0x3080620) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030807d0 + 0x308063c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370baf0(iVar1,**(undefined4 **)(_UNK_030807d4 + 0x308065c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030807d8 + 0x3080688));
      puVar5 = *(undefined4 **)(_UNK_030807dc + 0x308069c);
      puVar7 = *(undefined4 **)(_UNK_030807e0 + 0x30806a4);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030807e4 + 0x30806fc));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x755f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02918ab4(iVar1,param_1,0);
  }
  return iVar1;
}


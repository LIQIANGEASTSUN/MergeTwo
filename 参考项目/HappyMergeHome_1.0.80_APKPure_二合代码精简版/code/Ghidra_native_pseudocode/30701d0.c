
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030801d0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03080488 + 0x30801e8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308048c + 0x30801fc));
    func_0x01438628(*(undefined4 *)(_UNK_03080490 + 0x3080208));
    func_0x01438628(*(undefined4 *)(_UNK_03080494 + 0x3080214));
    func_0x01438628(*(undefined4 *)(_UNK_03080498 + 0x3080220));
    func_0x01438628(*(undefined4 *)(_UNK_0308049c + 0x308022c));
    func_0x01438628(*(undefined4 *)(_UNK_030804a0 + 0x3080238));
    func_0x01438628(*(undefined4 *)(_UNK_030804a4 + 0x3080244));
    func_0x01438628(*(undefined4 *)(_UNK_030804a8 + 0x3080250));
    func_0x01438628(*(undefined4 *)(_UNK_030804ac + 0x308025c));
    func_0x01438628(*(undefined4 *)(_UNK_030804b0 + 0x3080268));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7598,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030804b4 + 0x30802d8));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030804b8 + 0x30802ec));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_030804bc + 0x3080310) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030804c0 + 0x308032c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370baf0(iVar1,**(undefined4 **)(_UNK_030804c4 + 0x308034c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030804c8 + 0x3080378));
      puVar5 = *(undefined4 **)(_UNK_030804cc + 0x308038c);
      puVar7 = *(undefined4 **)(_UNK_030804d0 + 0x3080394);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030804d4 + 0x30803ec));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7598,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02918cc4(iVar1,param_1,0);
  }
  return iVar1;
}


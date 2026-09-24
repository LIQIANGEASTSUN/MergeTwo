
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f97110(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f973c8 + 0x2f97128);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f973cc + 0x2f9713c));
    func_0x01438628(*(undefined4 *)(_UNK_02f973d0 + 0x2f97148));
    func_0x01438628(*(undefined4 *)(_UNK_02f973d4 + 0x2f97154));
    func_0x01438628(*(undefined4 *)(_UNK_02f973d8 + 0x2f97160));
    func_0x01438628(*(undefined4 *)(_UNK_02f973dc + 0x2f9716c));
    func_0x01438628(*(undefined4 *)(_UNK_02f973e0 + 0x2f97178));
    func_0x01438628(*(undefined4 *)(_UNK_02f973e4 + 0x2f97184));
    func_0x01438628(*(undefined4 *)(_UNK_02f973e8 + 0x2f97190));
    func_0x01438628(*(undefined4 *)(_UNK_02f973ec + 0x2f9719c));
    func_0x01438628(*(undefined4 *)(_UNK_02f973f0 + 0x2f971a8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6f51,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f973f4 + 0x2f97218));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f973f8 + 0x2f9722c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f973fc + 0x2f97250) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f97400 + 0x2f9726c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370eb30(iVar1,**(undefined4 **)(_UNK_02f97404 + 0x2f9728c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f97408 + 0x2f972b8));
      puVar5 = *(undefined4 **)(_UNK_02f9740c + 0x2f972cc);
      puVar7 = *(undefined4 **)(_UNK_02f97410 + 0x2f972d4);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f97414 + 0x2f9732c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6f51,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029153c8(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0330f808(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0330fac0 + 0x330f820);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330fac4 + 0x330f834));
    func_0x01438628(*(undefined4 *)(_UNK_0330fac8 + 0x330f840));
    func_0x01438628(*(undefined4 *)(_UNK_0330facc + 0x330f84c));
    func_0x01438628(*(undefined4 *)(_UNK_0330fad0 + 0x330f858));
    func_0x01438628(*(undefined4 *)(_UNK_0330fad4 + 0x330f864));
    func_0x01438628(*(undefined4 *)(_UNK_0330fad8 + 0x330f870));
    func_0x01438628(*(undefined4 *)(_UNK_0330fadc + 0x330f87c));
    func_0x01438628(*(undefined4 *)(_UNK_0330fae0 + 0x330f888));
    func_0x01438628(*(undefined4 *)(_UNK_0330fae4 + 0x330f894));
    func_0x01438628(*(undefined4 *)(_UNK_0330fae8 + 0x330f8a0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x852a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0330faec + 0x330f910));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0330faf0 + 0x330f924));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0330faf4 + 0x330f948) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0330faf8 + 0x330f964));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e0bb0(iVar1,**(undefined4 **)(_UNK_0330fafc + 0x330f984));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0330fb00 + 0x330f9b0));
      puVar5 = *(undefined4 **)(_UNK_0330fb04 + 0x330f9c4);
      puVar7 = *(undefined4 **)(_UNK_0330fb08 + 0x330f9cc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0330fb0c + 0x330fa24));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x852a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292136c(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0300aaf8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0300adb0 + 0x300ab10);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300adb4 + 0x300ab24));
    func_0x01438628(*(undefined4 *)(_UNK_0300adb8 + 0x300ab30));
    func_0x01438628(*(undefined4 *)(_UNK_0300adbc + 0x300ab3c));
    func_0x01438628(*(undefined4 *)(_UNK_0300adc0 + 0x300ab48));
    func_0x01438628(*(undefined4 *)(_UNK_0300adc4 + 0x300ab54));
    func_0x01438628(*(undefined4 *)(_UNK_0300adc8 + 0x300ab60));
    func_0x01438628(*(undefined4 *)(_UNK_0300adcc + 0x300ab6c));
    func_0x01438628(*(undefined4 *)(_UNK_0300add0 + 0x300ab78));
    func_0x01438628(*(undefined4 *)(_UNK_0300add4 + 0x300ab84));
    func_0x01438628(*(undefined4 *)(_UNK_0300add8 + 0x300ab90));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x727c,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300addc + 0x300ac00));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0300ade0 + 0x300ac14));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0300ade4 + 0x300ac38) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300ade8 + 0x300ac54));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370d420(iVar1,**(undefined4 **)(_UNK_0300adec + 0x300ac74));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0300adf0 + 0x300aca0));
      puVar5 = *(undefined4 **)(_UNK_0300adf4 + 0x300acb4);
      puVar7 = *(undefined4 **)(_UNK_0300adf8 + 0x300acbc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0300adfc + 0x300ad14));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x727c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02917150(iVar1,param_1,0);
  }
  return iVar1;
}


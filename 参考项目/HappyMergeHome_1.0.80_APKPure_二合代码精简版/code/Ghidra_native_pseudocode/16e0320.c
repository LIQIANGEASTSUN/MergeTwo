
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016f0320(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016f05d8 + 0x16f0338);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f05dc + 0x16f034c));
    func_0x01438628(*(undefined4 *)(_UNK_016f05e0 + 0x16f0358));
    func_0x01438628(*(undefined4 *)(_UNK_016f05e4 + 0x16f0364));
    func_0x01438628(*(undefined4 *)(_UNK_016f05e8 + 0x16f0370));
    func_0x01438628(*(undefined4 *)(_UNK_016f05ec + 0x16f037c));
    func_0x01438628(*(undefined4 *)(_UNK_016f05f0 + 0x16f0388));
    func_0x01438628(*(undefined4 *)(_UNK_016f05f4 + 0x16f0394));
    func_0x01438628(*(undefined4 *)(_UNK_016f05f8 + 0x16f03a0));
    func_0x01438628(*(undefined4 *)(_UNK_016f05fc + 0x16f03ac));
    func_0x01438628(*(undefined4 *)(_UNK_016f0600 + 0x16f03b8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8a59,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f0604 + 0x16f0428));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016f0608 + 0x16f043c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016f060c + 0x16f0460) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f0610 + 0x16f047c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dde10(iVar1,**(undefined4 **)(_UNK_016f0614 + 0x16f049c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016f0618 + 0x16f04c8));
      puVar5 = *(undefined4 **)(_UNK_016f061c + 0x16f04dc);
      puVar7 = *(undefined4 **)(_UNK_016f0620 + 0x16f04e4);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016f0624 + 0x16f053c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8a59,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02923e50(iVar1,param_1,0);
  }
  return iVar1;
}


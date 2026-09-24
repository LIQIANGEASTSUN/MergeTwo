
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0183bce4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0183bf9c + 0x183bcfc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183bfa0 + 0x183bd10));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfa4 + 0x183bd1c));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfa8 + 0x183bd28));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfac + 0x183bd34));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfb0 + 0x183bd40));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfb4 + 0x183bd4c));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfb8 + 0x183bd58));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfbc + 0x183bd64));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfc0 + 0x183bd70));
    func_0x01438628(*(undefined4 *)(_UNK_0183bfc4 + 0x183bd7c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x91fb,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0183bfc8 + 0x183bdec));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0183bfcc + 0x183be00));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0183bfd0 + 0x183be24) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183bfd4 + 0x183be40));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9188(iVar1,**(undefined4 **)(_UNK_0183bfd8 + 0x183be60));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0183bfdc + 0x183be8c));
      puVar5 = *(undefined4 **)(_UNK_0183bfe0 + 0x183bea0);
      puVar7 = *(undefined4 **)(_UNK_0183bfe4 + 0x183bea8);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0183bfe8 + 0x183bf00));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x91fb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02927bd0(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0180286c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01802b24 + 0x1802884);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01802b28 + 0x1802898));
    func_0x01438628(*(undefined4 *)(_UNK_01802b2c + 0x18028a4));
    func_0x01438628(*(undefined4 *)(_UNK_01802b30 + 0x18028b0));
    func_0x01438628(*(undefined4 *)(_UNK_01802b34 + 0x18028bc));
    func_0x01438628(*(undefined4 *)(_UNK_01802b38 + 0x18028c8));
    func_0x01438628(*(undefined4 *)(_UNK_01802b3c + 0x18028d4));
    func_0x01438628(*(undefined4 *)(_UNK_01802b40 + 0x18028e0));
    func_0x01438628(*(undefined4 *)(_UNK_01802b44 + 0x18028ec));
    func_0x01438628(*(undefined4 *)(_UNK_01802b48 + 0x18028f8));
    func_0x01438628(*(undefined4 *)(_UNK_01802b4c + 0x1802904));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9083,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01802b50 + 0x1802974));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01802b54 + 0x1802988));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01802b58 + 0x18029ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01802b5c + 0x18029c8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9e20(iVar1,**(undefined4 **)(_UNK_01802b60 + 0x18029e8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01802b64 + 0x1802a14));
      puVar5 = *(undefined4 **)(_UNK_01802b68 + 0x1802a28);
      puVar7 = *(undefined4 **)(_UNK_01802b6c + 0x1802a30);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01802b70 + 0x1802a88));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9083,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02926e20(iVar1,param_1,0);
  }
  return iVar1;
}


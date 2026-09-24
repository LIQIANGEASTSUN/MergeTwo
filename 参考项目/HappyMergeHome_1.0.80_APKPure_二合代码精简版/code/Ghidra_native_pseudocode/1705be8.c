
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01715be8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01715ea0 + 0x1715c00);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01715ea4 + 0x1715c14));
    func_0x01438628(*(undefined4 *)(_UNK_01715ea8 + 0x1715c20));
    func_0x01438628(*(undefined4 *)(_UNK_01715eac + 0x1715c2c));
    func_0x01438628(*(undefined4 *)(_UNK_01715eb0 + 0x1715c38));
    func_0x01438628(*(undefined4 *)(_UNK_01715eb4 + 0x1715c44));
    func_0x01438628(*(undefined4 *)(_UNK_01715eb8 + 0x1715c50));
    func_0x01438628(*(undefined4 *)(_UNK_01715ebc + 0x1715c5c));
    func_0x01438628(*(undefined4 *)(_UNK_01715ec0 + 0x1715c68));
    func_0x01438628(*(undefined4 *)(_UNK_01715ec4 + 0x1715c74));
    func_0x01438628(*(undefined4 *)(_UNK_01715ec8 + 0x1715c80));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8b41,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01715ecc + 0x1715cf0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01715ed0 + 0x1715d04));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01715ed4 + 0x1715d28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01715ed8 + 0x1715d44));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dd390(iVar1,**(undefined4 **)(_UNK_01715edc + 0x1715d64));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01715ee0 + 0x1715d90));
      puVar5 = *(undefined4 **)(_UNK_01715ee4 + 0x1715da4);
      puVar7 = *(undefined4 **)(_UNK_01715ee8 + 0x1715dac);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01715eec + 0x1715e04));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8b41,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02924444(iVar1,param_1,0);
  }
  return iVar1;
}


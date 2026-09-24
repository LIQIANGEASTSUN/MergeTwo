
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018749e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01874ca0 + 0x1874a00);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01874ca4 + 0x1874a14));
    func_0x01438628(*(undefined4 *)(_UNK_01874ca8 + 0x1874a20));
    func_0x01438628(*(undefined4 *)(_UNK_01874cac + 0x1874a2c));
    func_0x01438628(*(undefined4 *)(_UNK_01874cb0 + 0x1874a38));
    func_0x01438628(*(undefined4 *)(_UNK_01874cb4 + 0x1874a44));
    func_0x01438628(*(undefined4 *)(_UNK_01874cb8 + 0x1874a50));
    func_0x01438628(*(undefined4 *)(_UNK_01874cbc + 0x1874a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01874cc0 + 0x1874a68));
    func_0x01438628(*(undefined4 *)(_UNK_01874cc4 + 0x1874a74));
    func_0x01438628(*(undefined4 *)(_UNK_01874cc8 + 0x1874a80));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x938c,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01874ccc + 0x1874af0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01874cd0 + 0x1874b04));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01874cd4 + 0x1874b28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01874cd8 + 0x1874b44));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d8650(iVar1,**(undefined4 **)(_UNK_01874cdc + 0x1874b64));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01874ce0 + 0x1874b90));
      puVar5 = *(undefined4 **)(_UNK_01874ce4 + 0x1874ba4);
      puVar7 = *(undefined4 **)(_UNK_01874ce8 + 0x1874bac);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01874cec + 0x1874c04));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x938c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02928a88(iVar1,param_1,0);
  }
  return iVar1;
}


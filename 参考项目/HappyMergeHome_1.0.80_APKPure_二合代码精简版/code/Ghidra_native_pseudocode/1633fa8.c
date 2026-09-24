
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01643fa8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01644268 + 0x1643fc0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164426c + 0x1643fd4));
    func_0x01438628(*(undefined4 *)(_UNK_01644270 + 0x1643fe0));
    func_0x01438628(*(undefined4 *)(_UNK_01644274 + 0x1643fec));
    func_0x01438628(*(undefined4 *)(_UNK_01644278 + 0x1643ff8));
    func_0x01438628(*(undefined4 *)(_UNK_0164427c + 0x1644004));
    func_0x01438628(*(undefined4 *)(_UNK_01644280 + 0x1644010));
    func_0x01438628(*(undefined4 *)(_UNK_01644284 + 0x164401c));
    func_0x01438628(*(undefined4 *)(_UNK_01644288 + 0x1644028));
    func_0x01438628(*(undefined4 *)(_UNK_0164428c + 0x1644034));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x167e,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01644290 + 0x16440a8));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01644294 + 0x16440bc));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01644298 + 0x16440e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164429c + 0x16440fc));
      iVar2 = FUN_01642f18(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016442a0 + 0x1644158));
        puVar6 = *(undefined4 **)(_UNK_016442a4 + 0x164416c);
        puVar7 = *(undefined4 **)(_UNK_016442a8 + 0x1644174);
        while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f1078(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016442ac + 0x16441cc));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x167e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


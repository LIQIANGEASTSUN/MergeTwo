
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018c4fa8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018c5268 + 0x18c4fc0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c526c + 0x18c4fd4));
    func_0x01438628(*(undefined4 *)(_UNK_018c5270 + 0x18c4fe0));
    func_0x01438628(*(undefined4 *)(_UNK_018c5274 + 0x18c4fec));
    func_0x01438628(*(undefined4 *)(_UNK_018c5278 + 0x18c4ff8));
    func_0x01438628(*(undefined4 *)(_UNK_018c527c + 0x18c5004));
    func_0x01438628(*(undefined4 *)(_UNK_018c5280 + 0x18c5010));
    func_0x01438628(*(undefined4 *)(_UNK_018c5284 + 0x18c501c));
    func_0x01438628(*(undefined4 *)(_UNK_018c5288 + 0x18c5028));
    func_0x01438628(*(undefined4 *)(_UNK_018c528c + 0x18c5034));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf03,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c5290 + 0x18c50a8));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018c5294 + 0x18c50bc));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_018c5298 + 0x18c50e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c529c + 0x18c50fc));
      iVar2 = FUN_018c3f18(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018c52a0 + 0x18c5158));
        puVar6 = *(undefined4 **)(_UNK_018c52a4 + 0x18c516c);
        puVar7 = *(undefined4 **)(_UNK_018c52a8 + 0x18c5174);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018c52ac + 0x18c51cc));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf03,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


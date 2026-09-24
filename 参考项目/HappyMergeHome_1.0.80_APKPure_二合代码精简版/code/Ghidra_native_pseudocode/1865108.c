
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01875108(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018753c8 + 0x1875120);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018753cc + 0x1875134));
    func_0x01438628(*(undefined4 *)(_UNK_018753d0 + 0x1875140));
    func_0x01438628(*(undefined4 *)(_UNK_018753d4 + 0x187514c));
    func_0x01438628(*(undefined4 *)(_UNK_018753d8 + 0x1875158));
    func_0x01438628(*(undefined4 *)(_UNK_018753dc + 0x1875164));
    func_0x01438628(*(undefined4 *)(_UNK_018753e0 + 0x1875170));
    func_0x01438628(*(undefined4 *)(_UNK_018753e4 + 0x187517c));
    func_0x01438628(*(undefined4 *)(_UNK_018753e8 + 0x1875188));
    func_0x01438628(*(undefined4 *)(_UNK_018753ec + 0x1875194));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x170f,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018753f0 + 0x1875208));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018753f4 + 0x187521c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_018753f8 + 0x1875240) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018753fc + 0x187525c));
      iVar2 = FUN_01874078(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01875400 + 0x18752b8));
        puVar6 = *(undefined4 **)(_UNK_01875404 + 0x18752cc);
        puVar7 = *(undefined4 **)(_UNK_01875408 + 0x18752d4);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0187540c + 0x187532c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x170f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


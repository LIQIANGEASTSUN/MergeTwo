
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f460e4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f4639c + 0x2f460fc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f463a0 + 0x2f46110));
    func_0x01438628(*(undefined4 *)(_UNK_02f463a4 + 0x2f4611c));
    func_0x01438628(*(undefined4 *)(_UNK_02f463a8 + 0x2f46128));
    func_0x01438628(*(undefined4 *)(_UNK_02f463ac + 0x2f46134));
    func_0x01438628(*(undefined4 *)(_UNK_02f463b0 + 0x2f46140));
    func_0x01438628(*(undefined4 *)(_UNK_02f463b4 + 0x2f4614c));
    func_0x01438628(*(undefined4 *)(_UNK_02f463b8 + 0x2f46158));
    func_0x01438628(*(undefined4 *)(_UNK_02f463bc + 0x2f46164));
    func_0x01438628(*(undefined4 *)(_UNK_02f463c0 + 0x2f46170));
    func_0x01438628(*(undefined4 *)(_UNK_02f463c4 + 0x2f4617c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6db9,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f463c8 + 0x2f461ec));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f463cc + 0x2f46200));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f463d0 + 0x2f46224) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f463d4 + 0x2f46240));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370f5b8(iVar1,**(undefined4 **)(_UNK_02f463d8 + 0x2f46260));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f463dc + 0x2f4628c));
      puVar5 = *(undefined4 **)(_UNK_02f463e0 + 0x2f462a0);
      puVar7 = *(undefined4 **)(_UNK_02f463e4 + 0x2f462a8);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f463e8 + 0x2f46300));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6db9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02913f14(iVar1,param_1,0);
  }
  return iVar1;
}


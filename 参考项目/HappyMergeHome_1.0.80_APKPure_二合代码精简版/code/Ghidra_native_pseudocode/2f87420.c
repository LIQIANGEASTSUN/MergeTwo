
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f97420(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f976d8 + 0x2f97438);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f976dc + 0x2f9744c));
    func_0x01438628(*(undefined4 *)(_UNK_02f976e0 + 0x2f97458));
    func_0x01438628(*(undefined4 *)(_UNK_02f976e4 + 0x2f97464));
    func_0x01438628(*(undefined4 *)(_UNK_02f976e8 + 0x2f97470));
    func_0x01438628(*(undefined4 *)(_UNK_02f976ec + 0x2f9747c));
    func_0x01438628(*(undefined4 *)(_UNK_02f976f0 + 0x2f97488));
    func_0x01438628(*(undefined4 *)(_UNK_02f976f4 + 0x2f97494));
    func_0x01438628(*(undefined4 *)(_UNK_02f976f8 + 0x2f974a0));
    func_0x01438628(*(undefined4 *)(_UNK_02f976fc + 0x2f974ac));
    func_0x01438628(*(undefined4 *)(_UNK_02f97700 + 0x2f974b8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6f45,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f97704 + 0x2f97528));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f97708 + 0x2f9753c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f9770c + 0x2f97560) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f97710 + 0x2f9757c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370eb30(iVar1,**(undefined4 **)(_UNK_02f97714 + 0x2f9759c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f97718 + 0x2f975c8));
      puVar5 = *(undefined4 **)(_UNK_02f9771c + 0x2f975dc);
      puVar7 = *(undefined4 **)(_UNK_02f97720 + 0x2f975e4);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f97724 + 0x2f9763c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6f45,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029152c0(iVar1,param_1,0);
  }
  return iVar1;
}


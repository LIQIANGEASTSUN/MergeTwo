
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f97830(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f97af0 + 0x2f97848);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f97af4 + 0x2f9785c));
    func_0x01438628(*(undefined4 *)(_UNK_02f97af8 + 0x2f97868));
    func_0x01438628(*(undefined4 *)(_UNK_02f97afc + 0x2f97874));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b00 + 0x2f97880));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b04 + 0x2f9788c));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b08 + 0x2f97898));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b0c + 0x2f978a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b10 + 0x2f978b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f97b14 + 0x2f978bc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf31,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f97b18 + 0x2f97930));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f97b1c + 0x2f97944));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_02f97b20 + 0x2f97968) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f97b24 + 0x2f97984));
      iVar2 = FUN_02f967a0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f97b28 + 0x2f979e0));
        puVar6 = *(undefined4 **)(_UNK_02f97b2c + 0x2f979f4);
        puVar7 = *(undefined4 **)(_UNK_02f97b30 + 0x2f979fc);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f97b34 + 0x2f97a54));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf31,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


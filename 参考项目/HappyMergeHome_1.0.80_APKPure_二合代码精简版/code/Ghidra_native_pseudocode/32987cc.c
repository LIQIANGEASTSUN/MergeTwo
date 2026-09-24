
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a87cc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032a8a84 + 0x32a87e4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a8a88 + 0x32a87f8));
    func_0x01438628(*(undefined4 *)(_UNK_032a8a8c + 0x32a8804));
    func_0x01438628(*(undefined4 *)(_UNK_032a8a90 + 0x32a8810));
    func_0x01438628(*(undefined4 *)(_UNK_032a8a94 + 0x32a881c));
    func_0x01438628(*(undefined4 *)(_UNK_032a8a98 + 0x32a8828));
    func_0x01438628(*(undefined4 *)(_UNK_032a8a9c + 0x32a8834));
    func_0x01438628(*(undefined4 *)(_UNK_032a8aa0 + 0x32a8840));
    func_0x01438628(*(undefined4 *)(_UNK_032a8aa4 + 0x32a884c));
    func_0x01438628(*(undefined4 *)(_UNK_032a8aa8 + 0x32a8858));
    func_0x01438628(*(undefined4 *)(_UNK_032a8aac + 0x32a8864));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x827a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032a8ab0 + 0x32a88d4));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032a8ab4 + 0x32a88e8));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_032a8ab8 + 0x32a890c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a8abc + 0x32a8928));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e2230(iVar1,**(undefined4 **)(_UNK_032a8ac0 + 0x32a8948));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032a8ac4 + 0x32a8974));
      puVar5 = *(undefined4 **)(_UNK_032a8ac8 + 0x32a8988);
      puVar7 = *(undefined4 **)(_UNK_032a8acc + 0x32a8990);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032a8ad0 + 0x32a89e8));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x827a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291feac(iVar1,param_1,0);
  }
  return iVar1;
}


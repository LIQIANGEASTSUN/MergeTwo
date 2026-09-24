
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032d5818(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032d5ad0 + 0x32d5830);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d5ad4 + 0x32d5844));
    func_0x01438628(*(undefined4 *)(_UNK_032d5ad8 + 0x32d5850));
    func_0x01438628(*(undefined4 *)(_UNK_032d5adc + 0x32d585c));
    func_0x01438628(*(undefined4 *)(_UNK_032d5ae0 + 0x32d5868));
    func_0x01438628(*(undefined4 *)(_UNK_032d5ae4 + 0x32d5874));
    func_0x01438628(*(undefined4 *)(_UNK_032d5ae8 + 0x32d5880));
    func_0x01438628(*(undefined4 *)(_UNK_032d5aec + 0x32d588c));
    func_0x01438628(*(undefined4 *)(_UNK_032d5af0 + 0x32d5898));
    func_0x01438628(*(undefined4 *)(_UNK_032d5af4 + 0x32d58a4));
    func_0x01438628(*(undefined4 *)(_UNK_032d5af8 + 0x32d58b0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x836d,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d5afc + 0x32d5920));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032d5b00 + 0x32d5934));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_032d5b04 + 0x32d5958) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d5b08 + 0x32d5974));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e1598(iVar1,**(undefined4 **)(_UNK_032d5b0c + 0x32d5994));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032d5b10 + 0x32d59c0));
      puVar5 = *(undefined4 **)(_UNK_032d5b14 + 0x32d59d4);
      puVar7 = *(undefined4 **)(_UNK_032d5b18 + 0x32d59dc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032d5b1c + 0x32d5a34));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x836d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029203ac(iVar1,param_1,0);
  }
  return iVar1;
}


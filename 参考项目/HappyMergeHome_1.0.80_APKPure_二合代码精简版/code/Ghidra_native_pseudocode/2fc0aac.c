
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd0aac(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02fd0d64 + 0x2fd0ac4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d68 + 0x2fd0ad8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d6c + 0x2fd0ae4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d70 + 0x2fd0af0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d74 + 0x2fd0afc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d78 + 0x2fd0b08));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d7c + 0x2fd0b14));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d80 + 0x2fd0b20));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d84 + 0x2fd0b2c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d88 + 0x2fd0b38));
    func_0x01438628(*(undefined4 *)(_UNK_02fd0d8c + 0x2fd0b44));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7100,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd0d90 + 0x2fd0bb4));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02fd0d94 + 0x2fd0bc8));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02fd0d98 + 0x2fd0bec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd0d9c + 0x2fd0c08));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370dea0(iVar1,**(undefined4 **)(_UNK_02fd0da0 + 0x2fd0c28));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02fd0da4 + 0x2fd0c54));
      puVar5 = *(undefined4 **)(_UNK_02fd0da8 + 0x2fd0c68);
      puVar7 = *(undefined4 **)(_UNK_02fd0dac + 0x2fd0c70);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02fd0db0 + 0x2fd0cc8));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7100,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029163a0(iVar1,param_1,0);
  }
  return iVar1;
}


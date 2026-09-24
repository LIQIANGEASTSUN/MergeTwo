
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f45ac4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f45d7c + 0x2f45adc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f45d80 + 0x2f45af0));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d84 + 0x2f45afc));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d88 + 0x2f45b08));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d8c + 0x2f45b14));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d90 + 0x2f45b20));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d94 + 0x2f45b2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d98 + 0x2f45b38));
    func_0x01438628(*(undefined4 *)(_UNK_02f45d9c + 0x2f45b44));
    func_0x01438628(*(undefined4 *)(_UNK_02f45da0 + 0x2f45b50));
    func_0x01438628(*(undefined4 *)(_UNK_02f45da4 + 0x2f45b5c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6dfe,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f45da8 + 0x2f45bcc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f45dac + 0x2f45be0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f45db0 + 0x2f45c04) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f45db4 + 0x2f45c20));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370f5b8(iVar1,**(undefined4 **)(_UNK_02f45db8 + 0x2f45c40));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f45dbc + 0x2f45c6c));
      puVar5 = *(undefined4 **)(_UNK_02f45dc0 + 0x2f45c80);
      puVar7 = *(undefined4 **)(_UNK_02f45dc4 + 0x2f45c88);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f45dc8 + 0x2f45ce0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6dfe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029145d4(iVar1,param_1,0);
  }
  return iVar1;
}


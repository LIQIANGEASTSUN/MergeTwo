
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a8adc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032a8d94 + 0x32a8af4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a8d98 + 0x32a8b08));
    func_0x01438628(*(undefined4 *)(_UNK_032a8d9c + 0x32a8b14));
    func_0x01438628(*(undefined4 *)(_UNK_032a8da0 + 0x32a8b20));
    func_0x01438628(*(undefined4 *)(_UNK_032a8da4 + 0x32a8b2c));
    func_0x01438628(*(undefined4 *)(_UNK_032a8da8 + 0x32a8b38));
    func_0x01438628(*(undefined4 *)(_UNK_032a8dac + 0x32a8b44));
    func_0x01438628(*(undefined4 *)(_UNK_032a8db0 + 0x32a8b50));
    func_0x01438628(*(undefined4 *)(_UNK_032a8db4 + 0x32a8b5c));
    func_0x01438628(*(undefined4 *)(_UNK_032a8db8 + 0x32a8b68));
    func_0x01438628(*(undefined4 *)(_UNK_032a8dbc + 0x32a8b74));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8268,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032a8dc0 + 0x32a8be4));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032a8dc4 + 0x32a8bf8));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_032a8dc8 + 0x32a8c1c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a8dcc + 0x32a8c38));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e2230(iVar1,**(undefined4 **)(_UNK_032a8dd0 + 0x32a8c58));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032a8dd4 + 0x32a8c84));
      puVar5 = *(undefined4 **)(_UNK_032a8dd8 + 0x32a8c98);
      puVar7 = *(undefined4 **)(_UNK_032a8ddc + 0x32a8ca0);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032a8de0 + 0x32a8cf8));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8268,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291fda4(iVar1,param_1,0);
  }
  return iVar1;
}


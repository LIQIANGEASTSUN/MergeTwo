
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f24fa4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f2525c + 0x2f24fbc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f25260 + 0x2f24fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f25264 + 0x2f24fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f25268 + 0x2f24fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2526c + 0x2f24ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02f25270 + 0x2f25000));
    func_0x01438628(*(undefined4 *)(_UNK_02f25274 + 0x2f2500c));
    func_0x01438628(*(undefined4 *)(_UNK_02f25278 + 0x2f25018));
    func_0x01438628(*(undefined4 *)(_UNK_02f2527c + 0x2f25024));
    func_0x01438628(*(undefined4 *)(_UNK_02f25280 + 0x2f25030));
    func_0x01438628(*(undefined4 *)(_UNK_02f25284 + 0x2f2503c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6d00,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f25288 + 0x2f250ac));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f2528c + 0x2f250c0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f25290 + 0x2f250e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f25294 + 0x2f25100));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03710250(iVar1,**(undefined4 **)(_UNK_02f25298 + 0x2f25120));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f2529c + 0x2f2514c));
      puVar5 = *(undefined4 **)(_UNK_02f252a0 + 0x2f25160);
      puVar7 = *(undefined4 **)(_UNK_02f252a4 + 0x2f25168);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f252a8 + 0x2f251c0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6d00,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029139a0(iVar1,param_1,0);
  }
  return iVar1;
}


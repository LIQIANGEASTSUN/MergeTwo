
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0320b204(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0320b4bc + 0x320b21c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320b4c0 + 0x320b230));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4c4 + 0x320b23c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4c8 + 0x320b248));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4cc + 0x320b254));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4d0 + 0x320b260));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4d4 + 0x320b26c));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4d8 + 0x320b278));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4dc + 0x320b284));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4e0 + 0x320b290));
    func_0x01438628(*(undefined4 *)(_UNK_0320b4e4 + 0x320b29c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7e4b,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320b4e8 + 0x320b30c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0320b4ec + 0x320b320));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0320b4f0 + 0x320b344) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320b4f4 + 0x320b360));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e41f0(iVar1,**(undefined4 **)(_UNK_0320b4f8 + 0x320b380));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0320b4fc + 0x320b3ac));
      puVar5 = *(undefined4 **)(_UNK_0320b500 + 0x320b3c0);
      puVar7 = *(undefined4 **)(_UNK_0320b504 + 0x320b3c8);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0320b508 + 0x320b420));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7e4b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291d8b4(iVar1,param_1,0);
  }
  return iVar1;
}


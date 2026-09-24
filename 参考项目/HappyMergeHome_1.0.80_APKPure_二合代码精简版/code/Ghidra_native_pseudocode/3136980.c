
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03146980(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03146c38 + 0x3146998);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03146c3c + 0x31469ac));
    func_0x01438628(*(undefined4 *)(_UNK_03146c40 + 0x31469b8));
    func_0x01438628(*(undefined4 *)(_UNK_03146c44 + 0x31469c4));
    func_0x01438628(*(undefined4 *)(_UNK_03146c48 + 0x31469d0));
    func_0x01438628(*(undefined4 *)(_UNK_03146c4c + 0x31469dc));
    func_0x01438628(*(undefined4 *)(_UNK_03146c50 + 0x31469e8));
    func_0x01438628(*(undefined4 *)(_UNK_03146c54 + 0x31469f4));
    func_0x01438628(*(undefined4 *)(_UNK_03146c58 + 0x3146a00));
    func_0x01438628(*(undefined4 *)(_UNK_03146c5c + 0x3146a0c));
    func_0x01438628(*(undefined4 *)(_UNK_03146c60 + 0x3146a18));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x79dc,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03146c64 + 0x3146a88));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03146c68 + 0x3146a9c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03146c6c + 0x3146ac0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03146c70 + 0x3146adc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e63a0(iVar1,**(undefined4 **)(_UNK_03146c74 + 0x3146afc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03146c78 + 0x3146b28));
      puVar5 = *(undefined4 **)(_UNK_03146c7c + 0x3146b3c);
      puVar7 = *(undefined4 **)(_UNK_03146c80 + 0x3146b44);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03146c84 + 0x3146b9c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x79dc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291b1b4(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03146c90(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03146f48 + 0x3146ca8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03146f4c + 0x3146cbc));
    func_0x01438628(*(undefined4 *)(_UNK_03146f50 + 0x3146cc8));
    func_0x01438628(*(undefined4 *)(_UNK_03146f54 + 0x3146cd4));
    func_0x01438628(*(undefined4 *)(_UNK_03146f58 + 0x3146ce0));
    func_0x01438628(*(undefined4 *)(_UNK_03146f5c + 0x3146cec));
    func_0x01438628(*(undefined4 *)(_UNK_03146f60 + 0x3146cf8));
    func_0x01438628(*(undefined4 *)(_UNK_03146f64 + 0x3146d04));
    func_0x01438628(*(undefined4 *)(_UNK_03146f68 + 0x3146d10));
    func_0x01438628(*(undefined4 *)(_UNK_03146f6c + 0x3146d1c));
    func_0x01438628(*(undefined4 *)(_UNK_03146f70 + 0x3146d28));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x79d0,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03146f74 + 0x3146d98));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03146f78 + 0x3146dac));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03146f7c + 0x3146dd0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03146f80 + 0x3146dec));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e63a0(iVar1,**(undefined4 **)(_UNK_03146f84 + 0x3146e0c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03146f88 + 0x3146e38));
      puVar5 = *(undefined4 **)(_UNK_03146f8c + 0x3146e4c);
      puVar7 = *(undefined4 **)(_UNK_03146f90 + 0x3146e54);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03146f94 + 0x3146eac));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x79d0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291b0ac(iVar1,param_1,0);
  }
  return iVar1;
}


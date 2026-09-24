
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018c4888(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018c4b40 + 0x18c48a0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c4b44 + 0x18c48b4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b48 + 0x18c48c0));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b4c + 0x18c48cc));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b50 + 0x18c48d8));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b54 + 0x18c48e4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b58 + 0x18c48f0));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b5c + 0x18c48fc));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b60 + 0x18c4908));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b64 + 0x18c4914));
    func_0x01438628(*(undefined4 *)(_UNK_018c4b68 + 0x18c4920));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9502,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c4b6c + 0x18c4990));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018c4b70 + 0x18c49a4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018c4b74 + 0x18c49c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c4b78 + 0x18c49e4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d7280(iVar1,**(undefined4 **)(_UNK_018c4b7c + 0x18c4a04));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018c4b80 + 0x18c4a30));
      puVar5 = *(undefined4 **)(_UNK_018c4b84 + 0x18c4a44);
      puVar7 = *(undefined4 **)(_UNK_018c4b88 + 0x18c4a4c);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018c4b8c + 0x18c4aa4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9502,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02929838(iVar1,param_1,0);
  }
  return iVar1;
}


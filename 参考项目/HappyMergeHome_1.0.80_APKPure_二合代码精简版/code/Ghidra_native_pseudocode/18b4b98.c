
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018c4b98(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018c4e50 + 0x18c4bb0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c4e54 + 0x18c4bc4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e58 + 0x18c4bd0));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e5c + 0x18c4bdc));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e60 + 0x18c4be8));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e64 + 0x18c4bf4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e68 + 0x18c4c00));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e6c + 0x18c4c0c));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e70 + 0x18c4c18));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e74 + 0x18c4c24));
    func_0x01438628(*(undefined4 *)(_UNK_018c4e78 + 0x18c4c30));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x94f6,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c4e7c + 0x18c4ca0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018c4e80 + 0x18c4cb4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018c4e84 + 0x18c4cd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c4e88 + 0x18c4cf4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d7280(iVar1,**(undefined4 **)(_UNK_018c4e8c + 0x18c4d14));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018c4e90 + 0x18c4d40));
      puVar5 = *(undefined4 **)(_UNK_018c4e94 + 0x18c4d54);
      puVar7 = *(undefined4 **)(_UNK_018c4e98 + 0x18c4d5c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018c4e9c + 0x18c4db4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x94f6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02929730(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030455b0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03045868 + 0x30455c8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304586c + 0x30455dc));
    func_0x01438628(*(undefined4 *)(_UNK_03045870 + 0x30455e8));
    func_0x01438628(*(undefined4 *)(_UNK_03045874 + 0x30455f4));
    func_0x01438628(*(undefined4 *)(_UNK_03045878 + 0x3045600));
    func_0x01438628(*(undefined4 *)(_UNK_0304587c + 0x304560c));
    func_0x01438628(*(undefined4 *)(_UNK_03045880 + 0x3045618));
    func_0x01438628(*(undefined4 *)(_UNK_03045884 + 0x3045624));
    func_0x01438628(*(undefined4 *)(_UNK_03045888 + 0x3045630));
    func_0x01438628(*(undefined4 *)(_UNK_0304588c + 0x304563c));
    func_0x01438628(*(undefined4 *)(_UNK_03045890 + 0x3045648));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x73bf,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03045894 + 0x30456b8));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03045898 + 0x30456cc));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0304589c + 0x30456f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030458a0 + 0x304570c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370c788(iVar1,**(undefined4 **)(_UNK_030458a4 + 0x304572c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030458a8 + 0x3045758));
      puVar5 = *(undefined4 **)(_UNK_030458ac + 0x304576c);
      puVar7 = *(undefined4 **)(_UNK_030458b0 + 0x3045774);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030458b4 + 0x30457cc));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x73bf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02917ae0(iVar1,param_1,0);
  }
  return iVar1;
}


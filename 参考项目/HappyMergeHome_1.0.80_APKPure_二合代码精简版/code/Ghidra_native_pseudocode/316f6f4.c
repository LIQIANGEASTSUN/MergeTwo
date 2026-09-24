
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0317f6f4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0317f9ac + 0x317f70c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317f9b0 + 0x317f720));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9b4 + 0x317f72c));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9b8 + 0x317f738));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9bc + 0x317f744));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9c0 + 0x317f750));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9c4 + 0x317f75c));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9c8 + 0x317f768));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9cc + 0x317f774));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9d0 + 0x317f780));
    func_0x01438628(*(undefined4 *)(_UNK_0317f9d4 + 0x317f78c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7b93,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0317f9d8 + 0x317f7fc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0317f9dc + 0x317f810));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0317f9e0 + 0x317f834) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0317f9e4 + 0x317f850));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e5868(iVar1,**(undefined4 **)(_UNK_0317f9e8 + 0x317f870));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0317f9ec + 0x317f89c));
      puVar5 = *(undefined4 **)(_UNK_0317f9f0 + 0x317f8b0);
      puVar7 = *(undefined4 **)(_UNK_0317f9f4 + 0x317f8b8);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0317f9f8 + 0x317f910));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7b93,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291c174(iVar1,param_1,0);
  }
  return iVar1;
}


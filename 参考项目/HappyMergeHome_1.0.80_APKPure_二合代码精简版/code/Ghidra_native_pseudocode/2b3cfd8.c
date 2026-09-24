
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4cfd8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02b4d238 + 0x2b4cff0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4d23c + 0x2b4d004));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d240 + 0x2b4d010));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d244 + 0x2b4d01c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d248 + 0x2b4d028));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d24c + 0x2b4d034));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d250 + 0x2b4d040));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d254 + 0x2b4d04c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x2ef1,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x58);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4d258 + 0x2b4d0bc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02b4d25c + 0x2b4d0d0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      iVar1 = FUN_02b3dda0();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b4d278(iVar1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_02b4d260 + 0x2b4d128));
      puVar5 = *(undefined4 **)(_UNK_02b4d264 + 0x2b4d13c);
      puVar7 = *(undefined4 **)(_UNK_02b4d268 + 0x2b4d144);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02b4d26c + 0x2b4d19c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x2ef1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028c9c04(iVar1,param_1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03146670(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03146928 + 0x3146688);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314692c + 0x314669c));
    func_0x01438628(*(undefined4 *)(_UNK_03146930 + 0x31466a8));
    func_0x01438628(*(undefined4 *)(_UNK_03146934 + 0x31466b4));
    func_0x01438628(*(undefined4 *)(_UNK_03146938 + 0x31466c0));
    func_0x01438628(*(undefined4 *)(_UNK_0314693c + 0x31466cc));
    func_0x01438628(*(undefined4 *)(_UNK_03146940 + 0x31466d8));
    func_0x01438628(*(undefined4 *)(_UNK_03146944 + 0x31466e4));
    func_0x01438628(*(undefined4 *)(_UNK_03146948 + 0x31466f0));
    func_0x01438628(*(undefined4 *)(_UNK_0314694c + 0x31466fc));
    func_0x01438628(*(undefined4 *)(_UNK_03146950 + 0x3146708));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7a15,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03146954 + 0x3146778));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03146958 + 0x314678c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0314695c + 0x31467b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03146960 + 0x31467cc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e63a0(iVar1,**(undefined4 **)(_UNK_03146964 + 0x31467ec));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03146968 + 0x3146818));
      puVar5 = *(undefined4 **)(_UNK_0314696c + 0x314682c);
      puVar7 = *(undefined4 **)(_UNK_03146970 + 0x3146834);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03146974 + 0x314688c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7a15,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291b3c4(iVar1,param_1,0);
  }
  return iVar1;
}


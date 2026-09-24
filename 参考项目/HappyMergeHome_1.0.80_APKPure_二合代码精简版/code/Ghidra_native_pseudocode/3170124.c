
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03180124(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_031803e4 + 0x318013c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031803e8 + 0x3180150));
    func_0x01438628(*(undefined4 *)(_UNK_031803ec + 0x318015c));
    func_0x01438628(*(undefined4 *)(_UNK_031803f0 + 0x3180168));
    func_0x01438628(*(undefined4 *)(_UNK_031803f4 + 0x3180174));
    func_0x01438628(*(undefined4 *)(_UNK_031803f8 + 0x3180180));
    func_0x01438628(*(undefined4 *)(_UNK_031803fc + 0x318018c));
    func_0x01438628(*(undefined4 *)(_UNK_03180400 + 0x3180198));
    func_0x01438628(*(undefined4 *)(_UNK_03180404 + 0x31801a4));
    func_0x01438628(*(undefined4 *)(_UNK_03180408 + 0x31801b0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1352,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0318040c + 0x3180224));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03180410 + 0x3180238));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_03180414 + 0x318025c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03180418 + 0x3180278));
      iVar2 = FUN_0317f008(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0318041c + 0x31802d4));
        puVar6 = *(undefined4 **)(_UNK_03180420 + 0x31802e8);
        puVar7 = *(undefined4 **)(_UNK_03180424 + 0x31802f0);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03180428 + 0x3180348));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1352,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


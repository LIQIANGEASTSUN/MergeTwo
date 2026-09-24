
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bfaf34(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_02bfb1bc + 0x2bfaf54);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfb1c0 + 0x2bfaf68));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb1c4 + 0x2bfaf74));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb1c8 + 0x2bfaf80));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb1cc + 0x2bfaf8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb1d0 + 0x2bfaf98));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x2190,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xac);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02bfb1d4 + 0x2bfb024));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar6 = *(undefined4 **)(_UNK_02bfb1d8 + 0x2bfb044);
    piVar5 = *(int **)(_UNK_02bfb1dc + 0x2bfb04c);
    do {
      iVar3 = func_0x04878f14(&uStack_38,*puVar6);
      iVar1 = iStack_2c;
      if (iVar3 == 0) {
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bfb1e8 + 0x2bfb0f0));
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x014e94d8(iVar1,0);
        return uVar2;
      }
      iVar3 = func_0x02b1cc10(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar3 + 0x1c);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024efe98(iVar1,param_2,param_3,uVar2,0);
    } while (iVar3 == 0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x014e94d8(iVar1,0);
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bfb1e0 + 0x2bfb0d8));
  }
  else {
    iVar1 = func_0x029540a4(0x2190,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b6304(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c006d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_02c00970 + 0x2c006ec);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c00974 + 0x2c00700));
    func_0x01438628(*(undefined4 *)(_UNK_02c00978 + 0x2c0070c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0097c + 0x2c00718));
    func_0x01438628(*(undefined4 *)(_UNK_02c00980 + 0x2c00724));
    func_0x01438628(*(undefined4 *)(_UNK_02c00984 + 0x2c00730));
    func_0x01438628(*(undefined4 *)(_UNK_02c00988 + 0x2c0073c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0098c + 0x2c00748));
    func_0x01438628(*(undefined4 *)(_UNK_02c00990 + 0x2c00754));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5e9a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c00994 + 0x2c007c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c00998 + 0x2c007dc));
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = 0;
    iVar1 = FUN_02bdbea0(iVar1,param_2,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_02c0099c + 0x2c00830));
    puVar4 = *(undefined4 **)(_UNK_02c009a0 + 0x2c00844);
    piVar7 = *(int **)(_UNK_02c009a4 + 0x2c0084c);
    puVar8 = *(undefined4 **)(_UNK_02c009a8 + 0x2c00854);
    while (iVar3 = func_0x04878f14(&uStack_30,*puVar4), iVar1 = iStack_24, iVar3 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0205023c(iVar3,uVar6,0);
      iVar2 = iVar1 + iVar2;
    }
    func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02c009ac + 0x2c008c8));
  }
  else {
    iVar1 = func_0x029540a4(0x5e9a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0287b504(iVar1,param_1,param_2,0);
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03044f90(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03045248 + 0x3044fa8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304524c + 0x3044fbc));
    func_0x01438628(*(undefined4 *)(_UNK_03045250 + 0x3044fc8));
    func_0x01438628(*(undefined4 *)(_UNK_03045254 + 0x3044fd4));
    func_0x01438628(*(undefined4 *)(_UNK_03045258 + 0x3044fe0));
    func_0x01438628(*(undefined4 *)(_UNK_0304525c + 0x3044fec));
    func_0x01438628(*(undefined4 *)(_UNK_03045260 + 0x3044ff8));
    func_0x01438628(*(undefined4 *)(_UNK_03045264 + 0x3045004));
    func_0x01438628(*(undefined4 *)(_UNK_03045268 + 0x3045010));
    func_0x01438628(*(undefined4 *)(_UNK_0304526c + 0x304501c));
    func_0x01438628(*(undefined4 *)(_UNK_03045270 + 0x3045028));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7410,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03045274 + 0x3045098));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03045278 + 0x30450ac));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0304527c + 0x30450d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03045280 + 0x30450ec));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370c788(iVar1,**(undefined4 **)(_UNK_03045284 + 0x304510c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03045288 + 0x3045138));
      puVar5 = *(undefined4 **)(_UNK_0304528c + 0x304514c);
      puVar7 = *(undefined4 **)(_UNK_03045290 + 0x3045154);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03045294 + 0x30451ac));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7410,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02917f14(iVar1,param_1,0);
  }
  return iVar1;
}


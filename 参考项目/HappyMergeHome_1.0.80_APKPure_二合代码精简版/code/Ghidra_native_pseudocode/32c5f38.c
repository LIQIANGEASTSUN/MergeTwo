
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032d5f38(int param_1)

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
  
  pcVar3 = (char *)(_UNK_032d61f8 + 0x32d5f50);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d61fc + 0x32d5f64));
    func_0x01438628(*(undefined4 *)(_UNK_032d6200 + 0x32d5f70));
    func_0x01438628(*(undefined4 *)(_UNK_032d6204 + 0x32d5f7c));
    func_0x01438628(*(undefined4 *)(_UNK_032d6208 + 0x32d5f88));
    func_0x01438628(*(undefined4 *)(_UNK_032d620c + 0x32d5f94));
    func_0x01438628(*(undefined4 *)(_UNK_032d6210 + 0x32d5fa0));
    func_0x01438628(*(undefined4 *)(_UNK_032d6214 + 0x32d5fac));
    func_0x01438628(*(undefined4 *)(_UNK_032d6218 + 0x32d5fb8));
    func_0x01438628(*(undefined4 *)(_UNK_032d621c + 0x32d5fc4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x180a,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d6220 + 0x32d6038));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_032d6224 + 0x32d604c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_032d6228 + 0x32d6070) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d622c + 0x32d608c));
      iVar2 = FUN_032d4ea8(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_032d6230 + 0x32d60e8));
        puVar6 = *(undefined4 **)(_UNK_032d6234 + 0x32d60fc);
        puVar7 = *(undefined4 **)(_UNK_032d6238 + 0x32d6104);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032d623c + 0x32d615c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x180a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


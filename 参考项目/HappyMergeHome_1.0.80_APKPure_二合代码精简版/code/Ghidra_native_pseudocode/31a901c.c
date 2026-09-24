
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031b901c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_031b92d4 + 0x31b9034);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b92d8 + 0x31b9048));
    func_0x01438628(*(undefined4 *)(_UNK_031b92dc + 0x31b9054));
    func_0x01438628(*(undefined4 *)(_UNK_031b92e0 + 0x31b9060));
    func_0x01438628(*(undefined4 *)(_UNK_031b92e4 + 0x31b906c));
    func_0x01438628(*(undefined4 *)(_UNK_031b92e8 + 0x31b9078));
    func_0x01438628(*(undefined4 *)(_UNK_031b92ec + 0x31b9084));
    func_0x01438628(*(undefined4 *)(_UNK_031b92f0 + 0x31b9090));
    func_0x01438628(*(undefined4 *)(_UNK_031b92f4 + 0x31b909c));
    func_0x01438628(*(undefined4 *)(_UNK_031b92f8 + 0x31b90a8));
    func_0x01438628(*(undefined4 *)(_UNK_031b92fc + 0x31b90b4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7ccc,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031b9300 + 0x31b9124));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_031b9304 + 0x31b9138));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_031b9308 + 0x31b915c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b930c + 0x31b9178));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e4bd0(iVar1,**(undefined4 **)(_UNK_031b9310 + 0x31b9198));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_031b9314 + 0x31b91c4));
      puVar5 = *(undefined4 **)(_UNK_031b9318 + 0x31b91d8);
      puVar7 = *(undefined4 **)(_UNK_031b931c + 0x31b91e0);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031b9320 + 0x31b9238));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7ccc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291cb04(iVar1,param_1,0);
  }
  return iVar1;
}


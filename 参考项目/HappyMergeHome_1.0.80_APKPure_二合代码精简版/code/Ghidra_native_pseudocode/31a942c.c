
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031b942c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_031b96ec + 0x31b9444);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b96f0 + 0x31b9458));
    func_0x01438628(*(undefined4 *)(_UNK_031b96f4 + 0x31b9464));
    func_0x01438628(*(undefined4 *)(_UNK_031b96f8 + 0x31b9470));
    func_0x01438628(*(undefined4 *)(_UNK_031b96fc + 0x31b947c));
    func_0x01438628(*(undefined4 *)(_UNK_031b9700 + 0x31b9488));
    func_0x01438628(*(undefined4 *)(_UNK_031b9704 + 0x31b9494));
    func_0x01438628(*(undefined4 *)(_UNK_031b9708 + 0x31b94a0));
    func_0x01438628(*(undefined4 *)(_UNK_031b970c + 0x31b94ac));
    func_0x01438628(*(undefined4 *)(_UNK_031b9710 + 0x31b94b8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x17a4,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031b9714 + 0x31b952c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_031b9718 + 0x31b9540));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_031b971c + 0x31b9564) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b9720 + 0x31b9580));
      iVar2 = FUN_031b839c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_031b9724 + 0x31b95dc));
        puVar6 = *(undefined4 **)(_UNK_031b9728 + 0x31b95f0);
        puVar7 = *(undefined4 **)(_UNK_031b972c + 0x31b95f8);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031b9730 + 0x31b9650));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x17a4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}


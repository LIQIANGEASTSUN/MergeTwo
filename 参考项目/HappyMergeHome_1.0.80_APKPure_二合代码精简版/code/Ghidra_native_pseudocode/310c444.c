
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0311c444(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_0311c694 + 0x311c45c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311c698 + 0x311c470));
    func_0x01438628(*(undefined4 *)(_UNK_0311c69c + 0x311c47c));
    func_0x01438628(*(undefined4 *)(_UNK_0311c6a0 + 0x311c488));
    func_0x01438628(*(undefined4 *)(_UNK_0311c6a4 + 0x311c494));
    func_0x01438628(*(undefined4 *)(_UNK_0311c6a8 + 0x311c4a0));
    func_0x01438628(*(undefined4 *)(_UNK_0311c6ac + 0x311c4ac));
    func_0x01438628(*(undefined4 *)(_UNK_0311c6b0 + 0x311c4b8));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03105e3c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0311c6b4 + 0x311c4f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0310ad6c(0);
    if (*(int *)(**(int **)(_UNK_0311c6b8 + 0x311c518) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_03105fc0(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0310cf84(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0311c6bc + 0x311c590) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0311c6c0 + 0x311c5ac));
    piVar8 = *(int **)(_UNK_0311c6c4 + 0x311c5c0);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0311c6c8 + 0x311c5e4),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0311c6cc + 0x311c604),&uStack_1c);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar3;
    func_0x014385cc(piVar8 + 4,iVar3);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar7,uVar2,piVar8,0);
  }
  return;
}


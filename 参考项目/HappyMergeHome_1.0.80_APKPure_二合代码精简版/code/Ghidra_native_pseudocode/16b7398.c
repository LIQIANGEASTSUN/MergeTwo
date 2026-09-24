
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c7398(int param_1)

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
  
  pcVar6 = (char *)(_UNK_016c75e8 + 0x16c73b0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c75ec + 0x16c73c4));
    func_0x01438628(*(undefined4 *)(_UNK_016c75f0 + 0x16c73d0));
    func_0x01438628(*(undefined4 *)(_UNK_016c75f4 + 0x16c73dc));
    func_0x01438628(*(undefined4 *)(_UNK_016c75f8 + 0x16c73e8));
    func_0x01438628(*(undefined4 *)(_UNK_016c75fc + 0x16c73f4));
    func_0x01438628(*(undefined4 *)(_UNK_016c7600 + 0x16c7400));
    func_0x01438628(*(undefined4 *)(_UNK_016c7604 + 0x16c740c));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x016afa88(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_016c7608 + 0x16c7444) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = func_0x016b4854(0);
    if (*(int *)(**(int **)(_UNK_016c760c + 0x16c746c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x016afc0c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x016b7a08(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_016c7610 + 0x16c74e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_016c7614 + 0x16c7500));
    piVar8 = *(int **)(_UNK_016c7618 + 0x16c7514);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016c761c + 0x16c7538),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_016c7620 + 0x16c7558),&uStack_1c);
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


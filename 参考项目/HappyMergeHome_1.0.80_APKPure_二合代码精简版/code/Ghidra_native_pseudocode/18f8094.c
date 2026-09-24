
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01908094(int param_1)

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
  
  pcVar6 = (char *)(_UNK_019082b4 + 0x19080ac);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019082b8 + 0x19080c0));
    func_0x01438628(*(undefined4 *)(_UNK_019082bc + 0x19080cc));
    func_0x01438628(*(undefined4 *)(_UNK_019082c0 + 0x19080d8));
    func_0x01438628(*(undefined4 *)(_UNK_019082c4 + 0x19080e4));
    func_0x01438628(*(undefined4 *)(_UNK_019082c8 + 0x19080f0));
    func_0x01438628(*(undefined4 *)(_UNK_019082cc + 0x19080fc));
    func_0x01438628(*(undefined4 *)(_UNK_019082d0 + 0x1908108));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_018f5e54(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_019082d4 + 0x190813c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_018f8b90();
    if (*(int *)(**(int **)(_UNK_019082d8 + 0x1908160) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_018f6044(iVar7);
    }
  }
  if (*(int *)(**(int **)(_UNK_019082dc + 0x19081b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_019082e0 + 0x19081cc));
  piVar8 = *(int **)(_UNK_019082e4 + 0x19081e0);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar8;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_019082e8 + 0x1908204),1);
  uStack_1c = 0;
  iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_019082ec + 0x1908224),&uStack_1c);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0))
  {
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
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168d710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0168d910 + 0x168d728);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168d914 + 0x168d73c));
    func_0x01438628(*(undefined4 *)(_UNK_0168d918 + 0x168d748));
    func_0x01438628(*(undefined4 *)(_UNK_0168d91c + 0x168d754));
    func_0x01438628(*(undefined4 *)(_UNK_0168d920 + 0x168d760));
    func_0x01438628(*(undefined4 *)(_UNK_0168d924 + 0x168d76c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0168d928 + 0x168d780) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0168d92c + 0x168d79c));
  piVar6 = *(int **)(_UNK_0168d930 + 0x168d7b0);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0168d934 + 0x168d7d4),2);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0168d938 + 0x168d7f4),&uStack_1c);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar6[3] == 0) {
    func_0x014388e8();
  }
  piVar6[4] = iVar2;
  func_0x014385cc(piVar6 + 4,iVar2);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 2) {
    func_0x014388e8();
  }
  piVar6[5] = iVar2;
  func_0x014385cc(piVar6 + 5,iVar2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,uVar7,piVar6,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_0167c750(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026efaec(iVar1,0,0);
  return;
}


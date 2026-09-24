
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0324da70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0324dc6c + 0x324da88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0324dc70 + 0x324da9c));
    func_0x01438628(*(undefined4 *)(_UNK_0324dc74 + 0x324daa8));
    func_0x01438628(*(undefined4 *)(_UNK_0324dc78 + 0x324dab4));
    func_0x01438628(*(undefined4 *)(_UNK_0324dc7c + 0x324dac0));
    func_0x01438628(*(undefined4 *)(_UNK_0324dc80 + 0x324dacc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0324dc84 + 0x324dae0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0324dc88 + 0x324dafc));
  piVar6 = *(int **)(_UNK_0324dc8c + 0x324db10);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0324dc90 + 0x324db34),2);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0324dc94 + 0x324db54),&uStack_1c);
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
  iVar1 = FUN_0323c5d0(iVar1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026cf36c(iVar1,0,0);
  return;
}


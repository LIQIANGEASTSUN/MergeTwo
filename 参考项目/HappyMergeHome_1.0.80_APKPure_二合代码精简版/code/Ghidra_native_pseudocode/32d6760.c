
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e6760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_032e695c + 0x32e6778);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e6960 + 0x32e678c));
    func_0x01438628(*(undefined4 *)(_UNK_032e6964 + 0x32e6798));
    func_0x01438628(*(undefined4 *)(_UNK_032e6968 + 0x32e67a4));
    func_0x01438628(*(undefined4 *)(_UNK_032e696c + 0x32e67b0));
    func_0x01438628(*(undefined4 *)(_UNK_032e6970 + 0x32e67bc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032e6974 + 0x32e67d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e6978 + 0x32e67ec));
  piVar6 = *(int **)(_UNK_032e697c + 0x32e6800);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032e6980 + 0x32e6824),2);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_032e6984 + 0x32e6844),&uStack_1c);
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
  iVar1 = FUN_032d4694(iVar1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026cf36c(iVar1,0,0);
  return;
}


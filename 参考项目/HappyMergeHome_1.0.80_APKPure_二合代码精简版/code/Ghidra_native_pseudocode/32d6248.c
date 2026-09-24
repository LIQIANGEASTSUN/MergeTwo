
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e6248(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_032e63b8 + 0x32e625c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e63bc + 0x32e6270));
    func_0x01438628(*(undefined4 *)(_UNK_032e63c0 + 0x32e627c));
    func_0x01438628(*(undefined4 *)(_UNK_032e63c4 + 0x32e6288));
    func_0x01438628(*(undefined4 *)(_UNK_032e63c8 + 0x32e6294));
    func_0x01438628(*(undefined4 *)(_UNK_032e63cc + 0x32e62a0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032e63d0 + 0x32e62b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e63d4 + 0x32e62d0));
  piVar6 = *(int **)(_UNK_032e63d8 + 0x32e62e4);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032e63dc + 0x32e6308),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_032e63e0 + 0x32e6328),&uStack_1c);
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
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,uVar7,piVar6,0);
  return;
}


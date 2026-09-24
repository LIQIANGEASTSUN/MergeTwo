
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0188354c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_018836bc + 0x1883560);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018836c0 + 0x1883574));
    func_0x01438628(*(undefined4 *)(_UNK_018836c4 + 0x1883580));
    func_0x01438628(*(undefined4 *)(_UNK_018836c8 + 0x188358c));
    func_0x01438628(*(undefined4 *)(_UNK_018836cc + 0x1883598));
    func_0x01438628(*(undefined4 *)(_UNK_018836d0 + 0x18835a4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018836d4 + 0x18835b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018836d8 + 0x18835d4));
  piVar6 = *(int **)(_UNK_018836dc + 0x18835e8);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018836e0 + 0x188360c),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_018836e4 + 0x188362c),&uStack_1c);
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


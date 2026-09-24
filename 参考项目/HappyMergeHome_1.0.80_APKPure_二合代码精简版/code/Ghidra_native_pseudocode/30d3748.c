
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e3748(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_030e38b8 + 0x30e375c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e38bc + 0x30e3770));
    func_0x01438628(*(undefined4 *)(_UNK_030e38c0 + 0x30e377c));
    func_0x01438628(*(undefined4 *)(_UNK_030e38c4 + 0x30e3788));
    func_0x01438628(*(undefined4 *)(_UNK_030e38c8 + 0x30e3794));
    func_0x01438628(*(undefined4 *)(_UNK_030e38cc + 0x30e37a0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_030e38d0 + 0x30e37b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030e38d4 + 0x30e37d0));
  piVar6 = *(int **)(_UNK_030e38d8 + 0x30e37e4);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_030e38dc + 0x30e3808),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_030e38e0 + 0x30e3828),&uStack_1c);
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


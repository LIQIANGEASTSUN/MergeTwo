
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030902a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_03090418 + 0x30902bc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0309041c + 0x30902d0));
    func_0x01438628(*(undefined4 *)(_UNK_03090420 + 0x30902dc));
    func_0x01438628(*(undefined4 *)(_UNK_03090424 + 0x30902e8));
    func_0x01438628(*(undefined4 *)(_UNK_03090428 + 0x30902f4));
    func_0x01438628(*(undefined4 *)(_UNK_0309042c + 0x3090300));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03090430 + 0x3090314) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03090434 + 0x3090330));
  piVar6 = *(int **)(_UNK_03090438 + 0x3090344);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0309043c + 0x3090368),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_03090440 + 0x3090388),&uStack_1c);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0311c258(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0311c3c8 + 0x311c26c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311c3cc + 0x311c280));
    func_0x01438628(*(undefined4 *)(_UNK_0311c3d0 + 0x311c28c));
    func_0x01438628(*(undefined4 *)(_UNK_0311c3d4 + 0x311c298));
    func_0x01438628(*(undefined4 *)(_UNK_0311c3d8 + 0x311c2a4));
    func_0x01438628(*(undefined4 *)(_UNK_0311c3dc + 0x311c2b0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0311c3e0 + 0x311c2c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0311c3e4 + 0x311c2e0));
  piVar6 = *(int **)(_UNK_0311c3e8 + 0x311c2f4);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0311c3ec + 0x311c318),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0311c3f0 + 0x311c338),&uStack_1c);
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


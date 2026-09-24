
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c7184(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_016c72f4 + 0x16c7198);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c72f8 + 0x16c71ac));
    func_0x01438628(*(undefined4 *)(_UNK_016c72fc + 0x16c71b8));
    func_0x01438628(*(undefined4 *)(_UNK_016c7300 + 0x16c71c4));
    func_0x01438628(*(undefined4 *)(_UNK_016c7304 + 0x16c71d0));
    func_0x01438628(*(undefined4 *)(_UNK_016c7308 + 0x16c71dc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_016c730c + 0x16c71f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c7310 + 0x16c720c));
  piVar6 = *(int **)(_UNK_016c7314 + 0x16c7220);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016c7318 + 0x16c7244),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_016c731c + 0x16c7264),&uStack_1c);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa6a30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02fa6ba0 + 0x2fa6a44);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa6ba4 + 0x2fa6a58));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6ba8 + 0x2fa6a64));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6bac + 0x2fa6a70));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6bb0 + 0x2fa6a7c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6bb4 + 0x2fa6a88));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02fa6bb8 + 0x2fa6a9c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa6bbc + 0x2fa6ab8));
  piVar6 = *(int **)(_UNK_02fa6bc0 + 0x2fa6acc);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa6bc4 + 0x2fa6af0),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02fa6bc8 + 0x2fa6b10),&uStack_1c);
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


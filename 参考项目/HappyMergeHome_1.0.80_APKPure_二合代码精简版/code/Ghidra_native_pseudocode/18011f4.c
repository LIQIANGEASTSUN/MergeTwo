
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018111f4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01811364 + 0x1811208);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01811368 + 0x181121c));
    func_0x01438628(*(undefined4 *)(_UNK_0181136c + 0x1811228));
    func_0x01438628(*(undefined4 *)(_UNK_01811370 + 0x1811234));
    func_0x01438628(*(undefined4 *)(_UNK_01811374 + 0x1811240));
    func_0x01438628(*(undefined4 *)(_UNK_01811378 + 0x181124c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0181137c + 0x1811260) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01811380 + 0x181127c));
  piVar6 = *(int **)(_UNK_01811384 + 0x1811290);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01811388 + 0x18112b4),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0181138c + 0x18112d4),&uStack_1c);
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


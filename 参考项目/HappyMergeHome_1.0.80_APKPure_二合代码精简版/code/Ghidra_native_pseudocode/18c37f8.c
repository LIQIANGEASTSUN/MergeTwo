
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d37f8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_018d3968 + 0x18d380c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d396c + 0x18d3820));
    func_0x01438628(*(undefined4 *)(_UNK_018d3970 + 0x18d382c));
    func_0x01438628(*(undefined4 *)(_UNK_018d3974 + 0x18d3838));
    func_0x01438628(*(undefined4 *)(_UNK_018d3978 + 0x18d3844));
    func_0x01438628(*(undefined4 *)(_UNK_018d397c + 0x18d3850));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018d3980 + 0x18d3864) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018d3984 + 0x18d3880));
  piVar6 = *(int **)(_UNK_018d3988 + 0x18d3894);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018d398c + 0x18d38b8),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_018d3990 + 0x18d38d8),&uStack_1c);
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


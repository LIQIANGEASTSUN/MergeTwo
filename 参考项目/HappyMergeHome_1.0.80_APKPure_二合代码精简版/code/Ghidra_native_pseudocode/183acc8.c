
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184acc8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0184ae38 + 0x184acdc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0184ae3c + 0x184acf0));
    func_0x01438628(*(undefined4 *)(_UNK_0184ae40 + 0x184acfc));
    func_0x01438628(*(undefined4 *)(_UNK_0184ae44 + 0x184ad08));
    func_0x01438628(*(undefined4 *)(_UNK_0184ae48 + 0x184ad14));
    func_0x01438628(*(undefined4 *)(_UNK_0184ae4c + 0x184ad20));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0184ae50 + 0x184ad34) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184ae54 + 0x184ad50));
  piVar6 = *(int **)(_UNK_0184ae58 + 0x184ad64);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0184ae5c + 0x184ad88),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0184ae60 + 0x184ada8),&uStack_1c);
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


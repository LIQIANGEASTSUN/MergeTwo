
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318e5d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0318e740 + 0x318e5e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318e744 + 0x318e5f8));
    func_0x01438628(*(undefined4 *)(_UNK_0318e748 + 0x318e604));
    func_0x01438628(*(undefined4 *)(_UNK_0318e74c + 0x318e610));
    func_0x01438628(*(undefined4 *)(_UNK_0318e750 + 0x318e61c));
    func_0x01438628(*(undefined4 *)(_UNK_0318e754 + 0x318e628));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0318e758 + 0x318e63c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0318e75c + 0x318e658));
  piVar6 = *(int **)(_UNK_0318e760 + 0x318e66c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0318e764 + 0x318e690),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0318e768 + 0x318e6b0),&uStack_1c);
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


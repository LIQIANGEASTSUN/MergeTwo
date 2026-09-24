
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030546b8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_03054828 + 0x30546cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0305482c + 0x30546e0));
    func_0x01438628(*(undefined4 *)(_UNK_03054830 + 0x30546ec));
    func_0x01438628(*(undefined4 *)(_UNK_03054834 + 0x30546f8));
    func_0x01438628(*(undefined4 *)(_UNK_03054838 + 0x3054704));
    func_0x01438628(*(undefined4 *)(_UNK_0305483c + 0x3054710));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03054840 + 0x3054724) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03054844 + 0x3054740));
  piVar6 = *(int **)(_UNK_03054848 + 0x3054754);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0305484c + 0x3054778),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_03054850 + 0x3054798),&uStack_1c);
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


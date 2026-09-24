
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c59328(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02c597a8 + 0x2c59340);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c597ac + 0x2c59354));
    func_0x01438628(*(undefined4 *)(_UNK_02c597b0 + 0x2c59360));
    func_0x01438628(*(undefined4 *)(_UNK_02c597b4 + 0x2c5936c));
    func_0x01438628(*(undefined4 *)(_UNK_02c597b8 + 0x2c59378));
    func_0x01438628(*(undefined4 *)(_UNK_02c597bc + 0x2c59384));
    func_0x01438628(*(undefined4 *)(_UNK_02c597c0 + 0x2c59390));
    func_0x01438628(*(undefined4 *)(_UNK_02c597c4 + 0x2c5939c));
    func_0x01438628(*(undefined4 *)(_UNK_02c597c8 + 0x2c593a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c597cc + 0x2c593b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c597d0 + 0x2c593c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c597d4 + 0x2c593cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c597d8 + 0x2c593d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c597dc + 0x2c593e4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c597e0 + 0x2c593f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c597e4 + 0x2c59414));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02c597e8 + 0x2c59440) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c597ec + 0x2c5945c));
  piVar6 = *(int **)(_UNK_02c597f0 + 0x2c59470);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c597f4 + 0x2c59494),5);
  uStack_24 = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c597f8 + 0x2c594b4),&uStack_24);
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
  uStack_28 = *(undefined4 *)(param_1 + 8);
  puVar7 = *(undefined4 **)(_UNK_02c597fc + 0x2c5952c);
  iVar2 = func_0x014387ac(*puVar7,&uStack_28);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 2) {
    func_0x014388e8();
  }
  piVar6[5] = iVar2;
  func_0x014385cc(piVar6 + 5,iVar2);
  uStack_2c = 0xffffffff;
  iVar2 = func_0x014387ac(*puVar7,&uStack_2c);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 3) {
    func_0x014388e8();
  }
  piVar6[6] = iVar2;
  func_0x014385cc(piVar6 + 6,iVar2);
  uStack_30 = 5;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c59800 + 0x2c595fc),&uStack_30);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 4) {
    func_0x014388e8();
  }
  piVar6[7] = iVar2;
  func_0x014385cc(piVar6 + 7,iVar2);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)(iVar2 + 8);
  iVar2 = func_0x014387ac(*puVar7,&uStack_34);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 5) {
    func_0x014388e8();
  }
  piVar6[8] = iVar2;
  func_0x014385cc(piVar6 + 8,iVar2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar1,uVar8,piVar6,0);
  if (*(int *)(**(int **)(_UNK_02c59804 + 0x2c596f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c59808 + 0x2c59714));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02b9f600(iVar1,0,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(**(int **)(_UNK_02c5980c + 0x2c59750) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c59810 + 0x2c5976c));
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02c3c1b8(iVar1,uVar8,0,1,0);
  }
  return;
}


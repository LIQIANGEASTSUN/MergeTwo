
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030904bc(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_0309070c + 0x30904d4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03090710 + 0x30904e8));
    func_0x01438628(*(undefined4 *)(_UNK_03090714 + 0x30904f4));
    func_0x01438628(*(undefined4 *)(_UNK_03090718 + 0x3090500));
    func_0x01438628(*(undefined4 *)(_UNK_0309071c + 0x309050c));
    func_0x01438628(*(undefined4 *)(_UNK_03090720 + 0x3090518));
    func_0x01438628(*(undefined4 *)(_UNK_03090724 + 0x3090524));
    func_0x01438628(*(undefined4 *)(_UNK_03090728 + 0x3090530));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03078794(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0309072c + 0x3090568) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0307cfc8(0);
    if (*(int *)(**(int **)(_UNK_03090730 + 0x3090590) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_03078918(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0308017c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03090734 + 0x3090608) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03090738 + 0x3090624));
    piVar8 = *(int **)(_UNK_0309073c + 0x3090638);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03090740 + 0x309065c),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_03090744 + 0x309067c),&uStack_1c);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar3;
    func_0x014385cc(piVar8 + 4,iVar3);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar7,uVar2,piVar8,0);
  }
  return;
}


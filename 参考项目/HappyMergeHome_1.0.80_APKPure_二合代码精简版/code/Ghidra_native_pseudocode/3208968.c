
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03218968(int param_1)

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
  
  pcVar6 = (char *)(_UNK_03218ba8 + 0x3218980);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03218bac + 0x3218994));
    func_0x01438628(*(undefined4 *)(_UNK_03218bb0 + 0x32189a0));
    func_0x01438628(*(undefined4 *)(_UNK_03218bb4 + 0x32189ac));
    func_0x01438628(*(undefined4 *)(_UNK_03218bb8 + 0x32189b8));
    func_0x01438628(*(undefined4 *)(_UNK_03218bbc + 0x32189c4));
    func_0x01438628(*(undefined4 *)(_UNK_03218bc0 + 0x32189d0));
    func_0x01438628(*(undefined4 *)(_UNK_03218bc4 + 0x32189dc));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03204680(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03218bc8 + 0x3218a10) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_03208a00();
    if (*(int *)(**(int **)(_UNK_03218bcc + 0x3218a34) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_03204804(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0320ab90(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03218bd0 + 0x3218aa4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03218bd4 + 0x3218ac0));
    piVar8 = *(int **)(_UNK_03218bd8 + 0x3218ad4);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03218bdc + 0x3218af8),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_03218be0 + 0x3218b18),&uStack_1c);
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


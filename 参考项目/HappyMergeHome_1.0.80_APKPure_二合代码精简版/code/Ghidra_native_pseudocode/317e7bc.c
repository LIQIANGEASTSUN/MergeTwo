
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318e7bc(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0318ea0c + 0x318e7d4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318ea10 + 0x318e7e8));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea14 + 0x318e7f4));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea18 + 0x318e800));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea1c + 0x318e80c));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea20 + 0x318e818));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea24 + 0x318e824));
    func_0x01438628(*(undefined4 *)(_UNK_0318ea28 + 0x318e830));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03178744(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0318ea2c + 0x318e868) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0317d564(0);
    if (*(int *)(**(int **)(_UNK_0318ea30 + 0x318e890) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_031788c8(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0317f614(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0318ea34 + 0x318e908) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0318ea38 + 0x318e924));
    piVar8 = *(int **)(_UNK_0318ea3c + 0x318e938);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0318ea40 + 0x318e95c),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0318ea44 + 0x318e97c),&uStack_1c);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01883760(int param_1)

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
  
  pcVar6 = (char *)(_UNK_018839b0 + 0x1883778);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018839b4 + 0x188378c));
    func_0x01438628(*(undefined4 *)(_UNK_018839b8 + 0x1883798));
    func_0x01438628(*(undefined4 *)(_UNK_018839bc + 0x18837a4));
    func_0x01438628(*(undefined4 *)(_UNK_018839c0 + 0x18837b0));
    func_0x01438628(*(undefined4 *)(_UNK_018839c4 + 0x18837bc));
    func_0x01438628(*(undefined4 *)(_UNK_018839c8 + 0x18837c8));
    func_0x01438628(*(undefined4 *)(_UNK_018839cc + 0x18837d4));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0186d808(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_018839d0 + 0x188380c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_018725d4(0);
    if (*(int *)(**(int **)(_UNK_018839d4 + 0x1883834) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0186d98c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_01874684(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_018839d8 + 0x18838ac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018839dc + 0x18838c8));
    piVar8 = *(int **)(_UNK_018839e0 + 0x18838dc);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018839e4 + 0x1883900),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_018839e8 + 0x1883920),&uStack_1c);
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


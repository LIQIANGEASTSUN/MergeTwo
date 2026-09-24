
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301a910(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0301ab60 + 0x301a928);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0301ab64 + 0x301a93c));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab68 + 0x301a948));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab6c + 0x301a954));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab70 + 0x301a960));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab74 + 0x301a96c));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab78 + 0x301a978));
    func_0x01438628(*(undefined4 *)(_UNK_0301ab7c + 0x301a984));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03003ef4(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0301ab80 + 0x301a9bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0300888c(0);
    if (*(int *)(**(int **)(_UNK_0301ab84 + 0x301a9e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_03004078(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0300aaa4(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0301ab88 + 0x301aa5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0301ab8c + 0x301aa78));
    piVar8 = *(int **)(_UNK_0301ab90 + 0x301aa8c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0301ab94 + 0x301aab0),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0301ab98 + 0x301aad0),&uStack_1c);
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


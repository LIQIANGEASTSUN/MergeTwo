
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0177a928(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0177ab78 + 0x177a940);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0177ab7c + 0x177a954));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab80 + 0x177a960));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab84 + 0x177a96c));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab88 + 0x177a978));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab8c + 0x177a984));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab90 + 0x177a990));
    func_0x01438628(*(undefined4 *)(_UNK_0177ab94 + 0x177a99c));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_017479d8(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0177ab98 + 0x177a9d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0174c20c(0);
    if (*(int *)(**(int **)(_UNK_0177ab9c + 0x177a9fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_01747b5c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0174f3c0(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0177aba0 + 0x177aa74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0177aba4 + 0x177aa90));
    piVar8 = *(int **)(_UNK_0177aba8 + 0x177aaa4);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0177abac + 0x177aac8),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0177abb0 + 0x177aae8),&uStack_1c);
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


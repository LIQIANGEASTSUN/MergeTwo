
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030548cc(int param_1)

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
  
  pcVar6 = (char *)(_UNK_03054b1c + 0x30548e4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03054b20 + 0x30548f8));
    func_0x01438628(*(undefined4 *)(_UNK_03054b24 + 0x3054904));
    func_0x01438628(*(undefined4 *)(_UNK_03054b28 + 0x3054910));
    func_0x01438628(*(undefined4 *)(_UNK_03054b2c + 0x305491c));
    func_0x01438628(*(undefined4 *)(_UNK_03054b30 + 0x3054928));
    func_0x01438628(*(undefined4 *)(_UNK_03054b34 + 0x3054934));
    func_0x01438628(*(undefined4 *)(_UNK_03054b38 + 0x3054940));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0303cfbc(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03054b3c + 0x3054978) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_03041d88(0);
    if (*(int *)(**(int **)(_UNK_03054b40 + 0x30549a0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0303d140(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03044f3c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03054b44 + 0x3054a18) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03054b48 + 0x3054a34));
    piVar8 = *(int **)(_UNK_03054b4c + 0x3054a48);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03054b50 + 0x3054a6c),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_03054b54 + 0x3054a8c),&uStack_1c);
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


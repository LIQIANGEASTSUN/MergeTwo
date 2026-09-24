
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b1b50(int param_1)

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
  
  pcVar6 = (char *)(_UNK_017b1d90 + 0x17b1b68);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017b1d94 + 0x17b1b7c));
    func_0x01438628(*(undefined4 *)(_UNK_017b1d98 + 0x17b1b88));
    func_0x01438628(*(undefined4 *)(_UNK_017b1d9c + 0x17b1b94));
    func_0x01438628(*(undefined4 *)(_UNK_017b1da0 + 0x17b1ba0));
    func_0x01438628(*(undefined4 *)(_UNK_017b1da4 + 0x17b1bac));
    func_0x01438628(*(undefined4 *)(_UNK_017b1da8 + 0x17b1bb8));
    func_0x01438628(*(undefined4 *)(_UNK_017b1dac + 0x17b1bc4));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0179db3c(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_017b1db0 + 0x17b1bf8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_017a1d58();
    if (*(int *)(**(int **)(_UNK_017b1db4 + 0x17b1c1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0179dcc0(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_017a3e08(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_017b1db8 + 0x17b1c8c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_017b1dbc + 0x17b1ca8));
    piVar8 = *(int **)(_UNK_017b1dc0 + 0x17b1cbc);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_017b1dc4 + 0x17b1ce0),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_017b1dc8 + 0x17b1d00),&uStack_1c);
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


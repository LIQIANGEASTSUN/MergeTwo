
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa6c1c(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02fa6e6c + 0x2fa6c34);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e70 + 0x2fa6c48));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e74 + 0x2fa6c54));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e78 + 0x2fa6c60));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e7c + 0x2fa6c6c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e80 + 0x2fa6c78));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e84 + 0x2fa6c84));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6e88 + 0x2fa6c90));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02f901fc(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02fa6e8c + 0x2fa6cc8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_02f94b94(0);
    if (*(int *)(**(int **)(_UNK_02fa6e90 + 0x2fa6cf0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_02f90380(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02f96dac(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02fa6e94 + 0x2fa6d68) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa6e98 + 0x2fa6d84));
    piVar8 = *(int **)(_UNK_02fa6e9c + 0x2fa6d98);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa6ea0 + 0x2fa6dbc),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02fa6ea4 + 0x2fa6ddc),&uStack_1c);
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


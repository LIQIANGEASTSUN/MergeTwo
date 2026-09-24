
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe0d94(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02fe0fe4 + 0x2fe0dac);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe0fe8 + 0x2fe0dc0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0fec + 0x2fe0dcc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0ff0 + 0x2fe0dd8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0ff4 + 0x2fe0de4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0ff8 + 0x2fe0df0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0ffc + 0x2fe0dfc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe1000 + 0x2fe0e08));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02fc9070(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02fe1004 + 0x2fe0e40) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_02fcd8a4(0);
    if (*(int *)(**(int **)(_UNK_02fe1008 + 0x2fe0e68) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_02fc91f4(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02fd0a58(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02fe100c + 0x2fe0ee0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe1010 + 0x2fe0efc));
    piVar8 = *(int **)(_UNK_02fe1014 + 0x2fe0f10);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fe1018 + 0x2fe0f34),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02fe101c + 0x2fe0f54),&uStack_1c);
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


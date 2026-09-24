
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031bd084(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_031bd338 + 0x31bd098);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031bd33c + 0x31bd0ac));
    func_0x01438628(*(undefined4 *)(_UNK_031bd340 + 0x31bd0b8));
    func_0x01438628(*(undefined4 *)(_UNK_031bd344 + 0x31bd0c4));
    func_0x01438628(*(undefined4 *)(_UNK_031bd348 + 0x31bd0d0));
    func_0x01438628(*(undefined4 *)(_UNK_031bd34c + 0x31bd0dc));
    func_0x01438628(*(undefined4 *)(_UNK_031bd350 + 0x31bd0e8));
    func_0x01438628(*(undefined4 *)(_UNK_031bd354 + 0x31bd0f4));
    func_0x01438628(*(undefined4 *)(_UNK_031bd358 + 0x31bd100));
    func_0x01438628(*(undefined4 *)(_UNK_031bd35c + 0x31bd10c));
    func_0x01438628(*(undefined4 *)(_UNK_031bd360 + 0x31bd118));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7d1f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7d1f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_031bd364 + 0x31bd170) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031bd368 + 0x31bd18c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_031bd36c + 0x31bd1b0);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x308);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_031bd370 + 0x31bd1e0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031bd374 + 0x31bd1f8));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_031bd378 + 0x31bd210));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_031bd37c + 0x31bd23c);
    puVar7 = *(undefined4 **)(_UNK_031bd380 + 0x31bd244);
    piVar8 = *(int **)(_UNK_031bd384 + 0x31bd24c);
    do {
      if (*(int *)(**(int **)(_UNK_031bd388 + 0x31bd254) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_031bd38c + 0x31bd270));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x308);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x04cfd760(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_031bcec4(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_031bcfd0(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


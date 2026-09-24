
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03084858(void)

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
  
  pcVar3 = (char *)(_UNK_03084b0c + 0x308486c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03084b10 + 0x3084880));
    func_0x01438628(*(undefined4 *)(_UNK_03084b14 + 0x308488c));
    func_0x01438628(*(undefined4 *)(_UNK_03084b18 + 0x3084898));
    func_0x01438628(*(undefined4 *)(_UNK_03084b1c + 0x30848a4));
    func_0x01438628(*(undefined4 *)(_UNK_03084b20 + 0x30848b0));
    func_0x01438628(*(undefined4 *)(_UNK_03084b24 + 0x30848bc));
    func_0x01438628(*(undefined4 *)(_UNK_03084b28 + 0x30848c8));
    func_0x01438628(*(undefined4 *)(_UNK_03084b2c + 0x30848d4));
    func_0x01438628(*(undefined4 *)(_UNK_03084b30 + 0x30848e0));
    func_0x01438628(*(undefined4 *)(_UNK_03084b34 + 0x30848ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x75a6,0);
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
  if (*(int *)(**(int **)(_UNK_03084b38 + 0x3084944) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03084b3c + 0x3084960));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03084b40 + 0x3084984);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 900);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03084b44 + 0x30849b4));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03084b48 + 0x30849cc));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03084b4c + 0x30849e4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03084b50 + 0x3084a10);
    puVar7 = *(undefined4 **)(_UNK_03084b54 + 0x3084a18);
    piVar8 = *(int **)(_UNK_03084b58 + 0x3084a20);
    do {
      if (*(int *)(**(int **)(_UNK_03084b5c + 0x3084a28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03084b60 + 0x3084a44));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 900);
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
      iVar6 = FUN_03084698(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_030847a4(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


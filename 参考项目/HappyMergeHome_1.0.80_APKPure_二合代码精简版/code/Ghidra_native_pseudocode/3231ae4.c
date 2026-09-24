
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03241ae4(void)

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
  
  pcVar3 = (char *)(_UNK_03241d98 + 0x3241af8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03241d9c + 0x3241b0c));
    func_0x01438628(*(undefined4 *)(_UNK_03241da0 + 0x3241b18));
    func_0x01438628(*(undefined4 *)(_UNK_03241da4 + 0x3241b24));
    func_0x01438628(*(undefined4 *)(_UNK_03241da8 + 0x3241b30));
    func_0x01438628(*(undefined4 *)(_UNK_03241dac + 0x3241b3c));
    func_0x01438628(*(undefined4 *)(_UNK_03241db0 + 0x3241b48));
    func_0x01438628(*(undefined4 *)(_UNK_03241db4 + 0x3241b54));
    func_0x01438628(*(undefined4 *)(_UNK_03241db8 + 0x3241b60));
    func_0x01438628(*(undefined4 *)(_UNK_03241dbc + 0x3241b6c));
    func_0x01438628(*(undefined4 *)(_UNK_03241dc0 + 0x3241b78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7fe6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7fe6,0);
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
  if (*(int *)(**(int **)(_UNK_03241dc4 + 0x3241bd0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03241dc8 + 0x3241bec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03241dcc + 0x3241c10);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3a8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03241dd0 + 0x3241c40));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03241dd4 + 0x3241c58));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03241dd8 + 0x3241c70));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03241ddc + 0x3241c9c);
    puVar7 = *(undefined4 **)(_UNK_03241de0 + 0x3241ca4);
    piVar8 = *(int **)(_UNK_03241de4 + 0x3241cac);
    do {
      if (*(int *)(**(int **)(_UNK_03241de8 + 0x3241cb4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03241dec + 0x3241cd0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x3a8);
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
      iVar6 = FUN_03241924(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_03241a30(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


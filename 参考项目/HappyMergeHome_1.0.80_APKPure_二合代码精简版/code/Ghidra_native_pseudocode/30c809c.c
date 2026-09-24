
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d809c(void)

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
  
  pcVar3 = (char *)(_UNK_030d8350 + 0x30d80b0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d8354 + 0x30d80c4));
    func_0x01438628(*(undefined4 *)(_UNK_030d8358 + 0x30d80d0));
    func_0x01438628(*(undefined4 *)(_UNK_030d835c + 0x30d80dc));
    func_0x01438628(*(undefined4 *)(_UNK_030d8360 + 0x30d80e8));
    func_0x01438628(*(undefined4 *)(_UNK_030d8364 + 0x30d80f4));
    func_0x01438628(*(undefined4 *)(_UNK_030d8368 + 0x30d8100));
    func_0x01438628(*(undefined4 *)(_UNK_030d836c + 0x30d810c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8370 + 0x30d8118));
    func_0x01438628(*(undefined4 *)(_UNK_030d8374 + 0x30d8124));
    func_0x01438628(*(undefined4 *)(_UNK_030d8378 + 0x30d8130));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7723,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7723,0);
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
  if (*(int *)(**(int **)(_UNK_030d837c + 0x30d8188) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d8380 + 0x30d81a4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_030d8384 + 0x30d81c8);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x388);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_030d8388 + 0x30d81f8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d838c + 0x30d8210));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_030d8390 + 0x30d8228));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_030d8394 + 0x30d8254);
    puVar7 = *(undefined4 **)(_UNK_030d8398 + 0x30d825c);
    piVar8 = *(int **)(_UNK_030d839c + 0x30d8264);
    do {
      if (*(int *)(**(int **)(_UNK_030d83a0 + 0x30d826c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_030d83a4 + 0x30d8288));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x388);
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
      iVar6 = FUN_030d7edc(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_030d7fe8(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


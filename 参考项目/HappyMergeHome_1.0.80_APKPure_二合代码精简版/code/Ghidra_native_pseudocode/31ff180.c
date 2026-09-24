
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0320f180(void)

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
  
  pcVar3 = (char *)(_UNK_0320f434 + 0x320f194);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320f438 + 0x320f1a8));
    func_0x01438628(*(undefined4 *)(_UNK_0320f43c + 0x320f1b4));
    func_0x01438628(*(undefined4 *)(_UNK_0320f440 + 0x320f1c0));
    func_0x01438628(*(undefined4 *)(_UNK_0320f444 + 0x320f1cc));
    func_0x01438628(*(undefined4 *)(_UNK_0320f448 + 0x320f1d8));
    func_0x01438628(*(undefined4 *)(_UNK_0320f44c + 0x320f1e4));
    func_0x01438628(*(undefined4 *)(_UNK_0320f450 + 0x320f1f0));
    func_0x01438628(*(undefined4 *)(_UNK_0320f454 + 0x320f1fc));
    func_0x01438628(*(undefined4 *)(_UNK_0320f458 + 0x320f208));
    func_0x01438628(*(undefined4 *)(_UNK_0320f45c + 0x320f214));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7e8f,0);
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
  if (*(int *)(**(int **)(_UNK_0320f460 + 0x320f26c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320f464 + 0x320f288));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_0320f468 + 0x320f2ac);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2b8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0320f46c + 0x320f2dc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320f470 + 0x320f2f4));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0320f474 + 0x320f30c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_0320f478 + 0x320f338);
    puVar7 = *(undefined4 **)(_UNK_0320f47c + 0x320f340);
    piVar8 = *(int **)(_UNK_0320f480 + 0x320f348);
    do {
      if (*(int *)(**(int **)(_UNK_0320f484 + 0x320f350) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0320f488 + 0x320f36c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x2b8);
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
      iVar6 = FUN_0320efc0(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0320f0cc(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


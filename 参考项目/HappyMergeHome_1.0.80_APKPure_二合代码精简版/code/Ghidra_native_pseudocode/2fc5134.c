
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd5134(void)

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
  
  pcVar3 = (char *)(_UNK_02fd53e8 + 0x2fd5148);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd53ec + 0x2fd515c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd53f0 + 0x2fd5168));
    func_0x01438628(*(undefined4 *)(_UNK_02fd53f4 + 0x2fd5174));
    func_0x01438628(*(undefined4 *)(_UNK_02fd53f8 + 0x2fd5180));
    func_0x01438628(*(undefined4 *)(_UNK_02fd53fc + 0x2fd518c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd5400 + 0x2fd5198));
    func_0x01438628(*(undefined4 *)(_UNK_02fd5404 + 0x2fd51a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd5408 + 0x2fd51b0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd540c + 0x2fd51bc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd5410 + 0x2fd51c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x710e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x710e,0);
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
  if (*(int *)(**(int **)(_UNK_02fd5414 + 0x2fd5220) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd5418 + 0x2fd523c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02fd541c + 0x2fd5260);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02fd5420 + 0x2fd5290));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd5424 + 0x2fd52a8));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02fd5428 + 0x2fd52c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_02fd542c + 0x2fd52ec);
    puVar7 = *(undefined4 **)(_UNK_02fd5430 + 0x2fd52f4);
    piVar8 = *(int **)(_UNK_02fd5434 + 0x2fd52fc);
    do {
      if (*(int *)(**(int **)(_UNK_02fd5438 + 0x2fd5304) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd543c + 0x2fd5320));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x38c);
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
      iVar6 = FUN_02fd4f74(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_02fd5080(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


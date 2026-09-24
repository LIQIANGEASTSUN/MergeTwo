
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032ac424(void)

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
  
  pcVar3 = (char *)(_UNK_032ac6d8 + 0x32ac438);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032ac6dc + 0x32ac44c));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6e0 + 0x32ac458));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6e4 + 0x32ac464));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6e8 + 0x32ac470));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6ec + 0x32ac47c));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6f0 + 0x32ac488));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6f4 + 0x32ac494));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6f8 + 0x32ac4a0));
    func_0x01438628(*(undefined4 *)(_UNK_032ac6fc + 0x32ac4ac));
    func_0x01438628(*(undefined4 *)(_UNK_032ac700 + 0x32ac4b8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8288,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8288,0);
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
  if (*(int *)(**(int **)(_UNK_032ac704 + 0x32ac510) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032ac708 + 0x32ac52c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_032ac70c + 0x32ac550);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 600);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032ac710 + 0x32ac580));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032ac714 + 0x32ac598));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_032ac718 + 0x32ac5b0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_032ac71c + 0x32ac5dc);
    puVar7 = *(undefined4 **)(_UNK_032ac720 + 0x32ac5e4);
    piVar8 = *(int **)(_UNK_032ac724 + 0x32ac5ec);
    do {
      if (*(int *)(**(int **)(_UNK_032ac728 + 0x32ac5f4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032ac72c + 0x32ac610));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 600);
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
      iVar6 = FUN_032ac264(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_032ac370(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}


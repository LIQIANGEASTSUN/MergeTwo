
/* WARNING: Possible PIC construction at 0x02fd0438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fd043c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd03e4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  
  iVar1 = func_0x02953fd4(0x1568,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1568,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  pcVar7 = (char *)(_UNK_02fd9b98 + 0x2fd99b8);
  uStack_30 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd9b9c + 0x2fd99cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9ba0 + 0x2fd99d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9ba4 + 0x2fd99e4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9ba8 + 0x2fd99f0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9bac + 0x2fd99fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9bb0 + 0x2fd9a08));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9bb4 + 0x2fd9a14));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1569,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1569,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x024f56c0(&uStack_60,0,1,0);
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_48,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_48,param_1,0);
    func_0x01523a1c(&uStack_48,1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_48,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02fd9bb8 + 0x2fd9a70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02fc8d20();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02fd9028(iVar1,1);
  if (*(int *)(**(int **)(_UNK_02fd9bbc + 0x2fd9ab0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd9bc0 + 0x2fd9acc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029b1058(iVar1,uVar6,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    piVar8 = *(int **)(_UNK_02fd9bc4 + 0x2fd9b18);
    puVar9 = *(undefined4 **)(_UNK_02fd9bc8 + 0x2fd9b20);
    puVar10 = *(undefined4 **)(_UNK_02fd9bcc + 0x2fd9b28);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(*puVar9);
      iVar3 = func_0x04cfd760(iVar1,iVar5,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02be1608(iVar2,uVar6,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0xc));
  }
  return;
}


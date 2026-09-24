
/* WARNING: Possible PIC construction at 0x016efaa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016efaa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016efa50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x02953fd4(0x1867,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1867,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
    return;
  }
  pcVar6 = (char *)(_UNK_016f7508 + 0x16f7328);
  uStack_30 = param_1;
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f750c + 0x16f733c));
    func_0x01438628(*(undefined4 *)(_UNK_016f7510 + 0x16f7348));
    func_0x01438628(*(undefined4 *)(_UNK_016f7514 + 0x16f7354));
    func_0x01438628(*(undefined4 *)(_UNK_016f7518 + 0x16f7360));
    func_0x01438628(*(undefined4 *)(_UNK_016f751c + 0x16f736c));
    func_0x01438628(*(undefined4 *)(_UNK_016f7520 + 0x16f7378));
    func_0x01438628(*(undefined4 *)(_UNK_016f7524 + 0x16f7384));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1868,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1868,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_48,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_016f7528 + 0x16f73e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_016ea198();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x016f6e34(iVar1,1);
  if (*(int *)(**(int **)(_UNK_016f752c + 0x16f7420) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f7530 + 0x16f743c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1058(iVar1,uVar7,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    piVar8 = *(int **)(_UNK_016f7534 + 0x16f7488);
    puVar9 = *(undefined4 **)(_UNK_016f7538 + 0x16f7490);
    puVar10 = *(undefined4 **)(_UNK_016f753c + 0x16f7498);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar9);
      iVar3 = func_0x0152983c(iVar1,iVar5,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02be1608(iVar2,uVar7,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0xc));
  }
  return;
}


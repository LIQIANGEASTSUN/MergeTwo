
/* WARNING: Possible PIC construction at 0x02f9678c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f96790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f96738(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0xf29,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf29,0);
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
  pcVar7 = (char *)(_UNK_02f9ef8c + 0x2f9edac);
  uStack_30 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9ef90 + 0x2f9edc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ef94 + 0x2f9edcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ef98 + 0x2f9edd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ef9c + 0x2f9ede4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9efa0 + 0x2f9edf0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9efa4 + 0x2f9edfc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9efa8 + 0x2f9ee08));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf2a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf2a,0);
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
  if (*(int *)(**(int **)(_UNK_02f9efac + 0x2f9ee64) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f8feac();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02f9e420(iVar1,1);
  if (*(int *)(**(int **)(_UNK_02f9efb0 + 0x2f9eea4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9efb4 + 0x2f9eec0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029b1058(iVar1,uVar6,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    piVar8 = *(int **)(_UNK_02f9efb8 + 0x2f9ef0c);
    puVar9 = *(undefined4 **)(_UNK_02f9efbc + 0x2f9ef14);
    puVar10 = *(undefined4 **)(_UNK_02f9efc0 + 0x2f9ef1c);
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


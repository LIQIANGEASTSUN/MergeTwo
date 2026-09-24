
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c4107c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c412c0 + 0x2c41098);
  uStack_28 = param_1;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c412c4 + 0x2c410ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c412c8 + 0x2c410b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c412cc + 0x2c410c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c412d0 + 0x2c410d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5dcc,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(param_2 + 0x84) == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c412d4 + 0x2c41148));
      func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02c412d8 + 0x2c4115c));
      iVar7 = 4;
      while( true ) {
        iVar5 = *(int *)(param_2 + 0x84);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar9 = iVar7 - 4;
        if (*(int *)(iVar5 + 0xc) <= (int)uVar9) break;
        iVar5 = *(int *)(param_2 + 0x88);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar11 = *(int *)(iVar5 + iVar7 * 4);
        iVar5 = *(int *)(param_2 + 0x84);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar5 = func_0x02c48cc0(uStack_28,*(undefined4 *)(iVar5 + iVar7 * 4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar1 + 8);
        uVar9 = *(uint *)(iVar1 + 0xc);
        piVar2 = *(int **)(_UNK_02c412dc + 0x2c41208);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar10 = *piVar2;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar5 = iVar5 + iVar11;
        if (uVar9 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar9 + 1;
          *(int *)(iVar6 + uVar9 * 4 + 0x10) = iVar5;
        }
        else {
          func_0x024f0520(iVar1,iVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
        iVar7 = iVar7 + 1;
      }
      if (*(int *)(**(int **)(_UNK_02c412e0 + 0x2c41260) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x02aebd60(iVar1,0);
      iVar1 = *(int *)(param_2 + 0x84);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar9) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
      if (iVar1 == 0) {
        iVar1 = -1;
      }
    }
    return iVar1;
  }
  iVar1 = func_0x029540a4(0x5dcc,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar8,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar3,0,0);
  iVar1 = func_0x024f56f0(&uStack_38,0,0);
  return iVar1;
}


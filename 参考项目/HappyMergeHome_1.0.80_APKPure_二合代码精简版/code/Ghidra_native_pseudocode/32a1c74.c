
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032b1c74(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar9 = (char *)(_UNK_032b1e8c + 0x32b1c90);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b1e90 + 0x32b1ca4));
    func_0x01438628(*(undefined4 *)(_UNK_032b1e94 + 0x32b1cb0));
    func_0x01438628(*(undefined4 *)(_UNK_032b1e98 + 0x32b1cbc));
    func_0x01438628(*(undefined4 *)(_UNK_032b1e9c + 0x32b1cc8));
    func_0x01438628(*(undefined4 *)(_UNK_032b1ea0 + 0x32b1cd4));
    func_0x01438628(*(undefined4 *)(_UNK_032b1ea4 + 0x32b1ce0));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x829e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x829e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar6,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_032b1ea8 + 0x32b1d40) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b1eac + 0x32b1d5c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029b1058(iVar2,param_2,0);
  uVar1 = 1;
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
    iVar7 = 0;
    piVar10 = *(int **)(_UNK_032b1eb0 + 0x32b1dac);
    puVar11 = *(undefined4 **)(_UNK_032b1eb4 + 0x32b1db4);
    puVar12 = *(undefined4 **)(_UNK_032b1eb8 + 0x32b1dbc);
    do {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(*puVar11);
      iVar4 = func_0x04cfd760(iVar2,iVar7,*puVar12);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x02be153c(iVar3,uVar8,0);
      iVar3 = func_0x04e4a028(*puVar11);
      iVar4 = func_0x04cfd760(iVar2,iVar7,*puVar12);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02be1348(iVar3,uVar8,0);
      uVar1 = uVar1 & uVar5;
    } while ((uVar1 == 1) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(iVar2 + 0xc)));
  }
  return uVar1;
}


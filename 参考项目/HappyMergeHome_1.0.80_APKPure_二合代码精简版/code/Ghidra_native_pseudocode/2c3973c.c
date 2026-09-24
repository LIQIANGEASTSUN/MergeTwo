
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c4973c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02c49ad0 + 0x2c49758);
  uStack_2c = param_1;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c49ad4 + 0x2c4976c));
    func_0x01438628(*(undefined4 *)(_UNK_02c49ad8 + 0x2c49778));
    func_0x01438628(*(undefined4 *)(_UNK_02c49adc + 0x2c49784));
    func_0x01438628(*(undefined4 *)(_UNK_02c49ae0 + 0x2c49790));
    func_0x01438628(*(undefined4 *)(_UNK_02c49ae4 + 0x2c4979c));
    func_0x01438628(*(undefined4 *)(_UNK_02c49ae8 + 0x2c497a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c49aec + 0x2c497b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e1c,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(param_2 + 0x84) == 0) {
      iVar1 = -1;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02c49af0 + 0x2c4982c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c49af4 + 0x2c49848));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029ca78c(iVar1,0);
      puVar6 = *(undefined4 **)(_UNK_02c49af8 + 0x2c49878);
      iVar8 = func_0x014388d4(*puVar6);
      puVar9 = *(undefined4 **)(_UNK_02c49afc + 0x2c4988c);
      func_0x024f0510(iVar8,*puVar9);
      iVar2 = func_0x014388d4(*puVar6);
      func_0x024f0510(iVar2,*puVar9);
      iVar7 = 4;
      iStack_30 = iVar1;
      iStack_28 = param_2;
      while( true ) {
        iVar10 = *(int *)(param_2 + 0x84);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar14 = iVar7 - 4;
        if (*(int *)(iVar10 + 0xc) <= (int)uVar14) break;
        iVar10 = *(int *)(param_2 + 0x60);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x014388e8();
        }
        if (*(int *)(iVar10 + iVar7 * 4) <= iVar1) {
          iVar1 = *(int *)(param_2 + 0x84);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar14) {
            func_0x014388e8();
          }
          uVar12 = *(undefined4 *)(iVar1 + iVar7 * 4);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar8 + 8);
          uVar11 = *(uint *)(iVar8 + 0xc);
          piVar3 = *(int **)(_UNK_02c49b00 + 0x2c4994c);
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
          iVar10 = *piVar3;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar8 + 0xc) = uVar11 + 1;
            *(undefined4 *)(iVar1 + uVar11 * 4 + 0x10) = uVar12;
          }
          else {
            func_0x024f0520(iVar8,uVar12,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          iVar1 = iStack_28;
          iVar10 = *(int *)(iStack_28 + 0x88);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar14) {
            func_0x014388e8();
          }
          iVar10 = *(int *)(iVar10 + iVar7 * 4);
          iVar1 = *(int *)(iVar1 + 0x84);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar14) {
            func_0x014388e8();
          }
          iVar1 = FUN_02c48cc0(uStack_2c,*(undefined4 *)(iVar1 + iVar7 * 4));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar13 = *(int *)(iVar2 + 8);
          uVar14 = *(uint *)(iVar2 + 0xc);
          piVar3 = *(int **)(_UNK_02c49b04 + 0x2c49a14);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar15 = *piVar3;
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar1 = iVar1 + iVar10;
          if (uVar14 < *(uint *)(iVar13 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar14 + 1;
            *(int *)(iVar13 + uVar14 * 4 + 0x10) = iVar1;
            param_2 = iStack_28;
            iVar1 = iStack_30;
          }
          else {
            func_0x024f0520(iVar2,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
            param_2 = iStack_28;
            iVar1 = iStack_30;
          }
        }
        iVar7 = iVar7 + 1;
      }
      if (*(int *)(**(int **)(_UNK_02c49b08 + 0x2c49a74) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar12 = func_0x02aec084(iVar2,0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0530(iVar8,uVar12,**(undefined4 **)(_UNK_02c49b0c + 0x2c49ab0));
      if (iVar1 == 0) {
        iVar1 = -1;
      }
    }
    return iVar1;
  }
  iVar1 = func_0x029540a4(0x5e1c,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar12 = uStack_2c;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar12,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar8,uVar12,&uStack_38,uVar4,0,0);
  iVar1 = func_0x024f56f0(&uStack_38,0,0);
  return iVar1;
}


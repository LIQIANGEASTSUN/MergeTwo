
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf0ca8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02bf102c + 0x2bf0cc4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf1030 + 0x2bf0cd8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf1034 + 0x2bf0ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf1038 + 0x2bf0cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf103c + 0x2bf0cfc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d45,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d45,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[3];
  }
  if ((param_2 == (int *)0x0 || iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 3)) {
    return;
  }
  puVar13 = *(undefined4 **)(_UNK_02bf1040 + 0x2bf0d80);
  piVar11 = *(int **)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10);
  piVar9 = (int *)*puVar13;
  if (piVar11 == (int *)0x0) {
    func_0x014388e4();
  }
  piVar5 = piVar11;
  if (*(int *)(*piVar11 + 0x20) == piVar9[8]) {
    piVar9 = (int *)func_0x014387b0(piVar11);
    if (*piVar9 != iVar1) {
      return;
    }
    iVar1 = param_2[3];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) < 2) {
      func_0x014388e8();
    }
    piVar9 = *(int **)(iVar1 + 0x14);
    piVar11 = (int *)*puVar13;
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar5 = param_2;
    if (*(int *)(*piVar9 + 0x20) != piVar11[8]) goto LAB_02bf1018;
    puVar2 = (undefined4 *)func_0x014387b0(piVar9);
    iVar1 = param_2[3];
    uVar7 = *puVar2;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) < 3) {
      func_0x014388e8();
    }
    piVar11 = *(int **)(iVar1 + 0x18);
    piVar9 = (int *)*puVar13;
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar5 = piVar11;
    if (*(int *)(*piVar11 + 0x20) == piVar9[8]) {
      puVar2 = (undefined4 *)func_0x014387b0(piVar11);
      iVar1 = param_2[3];
      uVar3 = *puVar2;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 4) {
        func_0x014388e8();
      }
      piVar11 = *(int **)(iVar1 + 0x1c);
      piVar9 = (int *)**(undefined4 **)(_UNK_02bf1044 + 0x2bf0e90);
      if (piVar11 == (int *)0x0) {
        func_0x014388e4();
      }
      piVar5 = piVar11;
      if (*(int *)(*piVar11 + 0x20) == piVar9[8]) {
        uStack_28 = uVar3;
        puVar2 = (undefined4 *)func_0x014387b0(piVar11);
        iVar1 = param_2[3];
        uVar3 = *puVar2;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar12 = 0xffffffff;
        if (5 < *(int *)(iVar1 + 0xc)) {
          iVar1 = param_2[3];
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) < 6) {
            func_0x014388e8();
          }
          piVar5 = *(int **)(iVar1 + 0x24);
          piVar9 = (int *)*puVar13;
          if (piVar5 == (int *)0x0) {
            func_0x014388e4();
          }
          param_2 = piVar5;
          if (*(int *)(*piVar5 + 0x20) != piVar9[8]) goto LAB_02bf1010;
          puVar13 = (undefined4 *)func_0x014387b0(piVar5);
          uVar12 = *puVar13;
        }
        if (*(int *)(**(int **)(_UNK_02bf1048 + 0x2bf0f44) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar13 = *(undefined4 **)(_UNK_02bf104c + 0x2bf0f60);
        iVar1 = func_0x014e9518(*puVar13);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bad204(iVar1,uVar7,uVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 8);
        iVar1 = func_0x014e9518(*puVar13);
        uVar10 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bad204(iVar1,uVar7,uVar10,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_40 = 1;
        uStack_38 = uStack_28;
        uStack_3c = uVar3;
        uStack_34 = uVar12;
        FUN_02bed810(param_1,uVar7,uVar6,*(undefined4 *)(iVar1 + 0xc));
        return;
      }
    }
  }
LAB_02bf1010:
  do {
    func_0x01438ca8(piVar5,piVar9);
    piVar5 = param_2;
LAB_02bf1018:
    func_0x01438ca8(piVar9,piVar11);
    param_2 = piVar5;
  } while( true );
}


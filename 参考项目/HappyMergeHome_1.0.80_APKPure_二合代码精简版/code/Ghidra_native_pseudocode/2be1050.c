
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf1050(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
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
  
  pcVar6 = (char *)(_UNK_02bf1364 + 0x2bf106c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf1368 + 0x2bf1080));
    func_0x01438628(*(undefined4 *)(_UNK_02bf136c + 0x2bf108c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d44,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[3];
  }
  if ((param_2 != (int *)0x0 && iVar1 != 0) && (2 < *(int *)(iVar1 + 0xc))) {
    puVar10 = *(undefined4 **)(_UNK_02bf1370 + 0x2bf1110);
    piVar9 = *(int **)(iVar1 + 0x10);
    iVar1 = param_1[4];
    piVar7 = (int *)*puVar10;
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar8 = param_2;
    if (*(int *)(*piVar9 + 0x20) != piVar7[8]) goto LAB_02bf1350;
    piVar7 = (int *)func_0x014387b0(piVar9);
    if (*piVar7 == iVar1) {
      iVar1 = param_2[3];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      piVar8 = *(int **)(iVar1 + 0x14);
      piVar9 = (int *)*puVar10;
      if (piVar8 == (int *)0x0) {
        func_0x014388e4();
      }
      piVar7 = piVar8;
      if (*(int *)(*piVar8 + 0x20) == piVar9[8]) {
        puVar2 = (undefined4 *)func_0x014387b0(piVar8);
        iVar1 = param_2[3];
        uVar5 = *puVar2;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) < 3) {
          func_0x014388e8();
        }
        piVar8 = *(int **)(iVar1 + 0x18);
        piVar9 = (int *)*puVar10;
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        piVar7 = piVar8;
        if (*(int *)(*piVar8 + 0x20) == piVar9[8]) {
          puVar2 = (undefined4 *)func_0x014387b0(piVar8);
          iVar1 = param_2[3];
          uVar3 = *puVar2;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) < 4) {
            func_0x014388e8();
          }
          piVar8 = *(int **)(iVar1 + 0x1c);
          piVar9 = (int *)**(undefined4 **)(_UNK_02bf1374 + 0x2bf1220);
          if (piVar8 == (int *)0x0) {
            func_0x014388e4();
          }
          piVar7 = piVar8;
          if (*(int *)(*piVar8 + 0x20) == piVar9[8]) {
            puVar2 = (undefined4 *)func_0x014387b0(piVar8);
            iVar1 = param_2[3];
            uVar11 = *puVar2;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) < 5) {
              func_0x014388e8();
            }
            piVar8 = *(int **)(iVar1 + 0x20);
            piVar9 = (int *)*puVar10;
            if (piVar8 == (int *)0x0) {
              func_0x014388e4();
            }
            piVar7 = piVar8;
            if (*(int *)(*piVar8 + 0x20) == piVar9[8]) {
              puVar2 = (undefined4 *)func_0x014387b0(piVar8);
              iVar1 = param_2[3];
              piVar7 = (int *)*puVar2;
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_30 = 0xffffffff;
              if (5 < *(int *)(iVar1 + 0xc)) {
                iVar1 = param_2[3];
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar1 + 0xc) < 6) {
                  func_0x014388e8();
                }
                piVar8 = *(int **)(iVar1 + 0x24);
                piVar9 = (int *)*puVar10;
                if (piVar8 == (int *)0x0) {
                  func_0x014388e4();
                }
                param_2 = piVar8;
                if (*(int *)(*piVar8 + 0x20) != piVar9[8]) goto LAB_02bf1348;
                puVar10 = (undefined4 *)func_0x014387b0(piVar8);
                uStack_30 = *puVar10;
              }
              uStack_28 = *(undefined4 *)(*param_1 + 0xfc);
              uStack_2c = uVar11;
              (**(code **)(*param_1 + 0xf8))(param_1,uVar5,uVar3,piVar7);
              return;
            }
          }
        }
      }
LAB_02bf1348:
      do {
        func_0x01438ca8(piVar8,piVar9);
        piVar8 = param_2;
LAB_02bf1350:
        func_0x01438ca8(piVar9,piVar7);
        param_2 = piVar8;
      } while( true );
    }
  }
  return;
}


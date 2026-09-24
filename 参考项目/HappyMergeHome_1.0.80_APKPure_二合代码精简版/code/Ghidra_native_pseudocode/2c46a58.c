
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c56a58(int param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  
  pcVar8 = (char *)(_UNK_02c56b38 + 0x2c56a70);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c56b3c + 0x2c56a84));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f3b,0);
  if (iVar3 == 0) {
    iVar3 = 0;
    if (param_2 != (int *)0x0) {
      iVar3 = param_2[3];
    }
    if ((param_2 == (int *)0x0 || iVar3 == 0) || (*(int *)(iVar3 + 0xc) < 1)) {
      return;
    }
    piVar4 = *(int **)(iVar3 + 0x10);
    param_2 = (int *)0x0;
    if ((piVar4 != (int *)0x0) &&
       (param_2 = piVar4, *piVar4 != **(int **)(_UNK_02c56b40 + 0x2c56b10))) {
      func_0x01438ca8();
      param_2 = (int *)0x0;
    }
    pcVar8 = (char *)(_UNK_02c56fb4 + 0x2c56b60);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c56fb8 + 0x2c56b74));
      func_0x01438628(*(undefined4 *)(_UNK_02c56fbc + 0x2c56b80));
      func_0x01438628(*(undefined4 *)(_UNK_02c56fc0 + 0x2c56b8c));
      func_0x01438628(*(undefined4 *)(_UNK_02c56fc4 + 0x2c56b98));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x02953fd4(0x5f3c,0);
    if (iVar3 == 0) {
      piVar4 = *(int **)(_UNK_02c56fc8 + 0x2c56bfc);
      piVar10 = (int *)(param_1 + 0x80);
      iVar3 = *piVar10;
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024eec50(iVar3,param_2,0);
      if (iVar3 == 0) {
        iVar3 = FUN_02c3d868(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (-1 < *(int *)(iVar3 + 0xb0)) {
          iVar3 = **(int **)(**(int **)(_UNK_02c56fcc + 0x2c56c58) + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02c3d868(iVar3);
          iVar6 = FUN_02c3d868(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar6 + 0xb0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02beba7c(iVar3,uVar7,0);
          if ((iVar3 != 0) && (iVar3 = FUN_02c3f4b4(), -1 < iVar3)) {
            if (*(int *)(**(int **)(_UNK_02c56fd0 + 0x2c56cd0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c56fd4 + 0x2c56cec));
            iVar6 = FUN_02c3d868(param_1);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar6 + 0xb0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = FUN_02bd114c(iVar3,uVar7,0,0);
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x38);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x014e94d8(iVar3,0);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x024eec50(param_2,uVar7,0);
              if (iVar3 == 0) {
                iVar3 = FUN_02c3d868(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = *(int *)(iVar3 + 0x14);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar7 = func_0x014e94d8(iVar3,0);
                if (*(int *)(*piVar4 + 0x74) == 0) {
                  func_0x014387a4();
                }
                func_0x024eec50(param_2,uVar7,0);
                iVar3 = *(int *)(param_1 + 0x38);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x024eecb8(iVar3,0);
                pcVar8 = (char *)(_UNK_02c56fe4 + 0x2c56efc);
                if (*pcVar8 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_02c56fe8 + 0x2c56f10));
                  *pcVar8 = '\x01';
                }
                iVar6 = *(int *)(**(int **)(_UNK_02c56fec + 0x2c56f28) + 0x5c);
                uVar7 = *(undefined4 *)(iVar6 + 0xc);
                uVar5 = *(undefined4 *)(iVar6 + 0x10);
                uVar9 = *(undefined4 *)(iVar6 + 0x14);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uStack_28 = 0;
                func_0x024ef328(iVar3,uVar7,uVar5,uVar9);
                iVar3 = *(int *)(param_1 + 0xb8);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x024f0ef8(iVar3,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar7 = 0;
              }
              else {
                iVar3 = *(int *)(param_1 + 0x38);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x024eecb8(iVar3,0);
                pcVar8 = (char *)(_UNK_02c56fd8 + 0x2c56db0);
                if (*pcVar8 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_02c56fdc + 0x2c56dc4));
                  *pcVar8 = '\x01';
                }
                iVar6 = *(int *)(**(int **)(_UNK_02c56fe0 + 0x2c56de0) + 0x5c);
                fVar12 = *(float *)(iVar6 + 0x10) * _UNK_02c56fb0;
                fVar13 = *(float *)(iVar6 + 0x14) * _UNK_02c56fb0;
                fVar11 = *(float *)(iVar6 + 0xc) * _UNK_02c56fb0;
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uStack_28 = 0;
                func_0x024ef328(iVar3,fVar11,fVar12,fVar13);
                iVar3 = *(int *)(param_1 + 0xb8);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x024f0ef8(iVar3,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar7 = 1;
              }
              func_0x014e94e8(iVar3,uVar7,0);
              *piVar10 = (int)param_2;
              if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
                return;
              }
              puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar10 >> 0x11) * 4);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar2);
              } while (!bVar1);
              *puVar2 = *puVar2 | 1 << (((uint)piVar10 & 0x1ffff) >> 0xc);
              return;
            }
          }
        }
      }
      return;
    }
    iVar3 = func_0x029540a4(0x5f3c,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5f3b,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
  return;
}


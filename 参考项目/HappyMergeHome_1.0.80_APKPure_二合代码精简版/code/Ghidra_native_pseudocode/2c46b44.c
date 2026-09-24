
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c56b44(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar6 = (char *)(_UNK_02c56fb4 + 0x2c56b60);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c56fb8 + 0x2c56b74));
    func_0x01438628(*(undefined4 *)(_UNK_02c56fbc + 0x2c56b80));
    func_0x01438628(*(undefined4 *)(_UNK_02c56fc0 + 0x2c56b8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c56fc4 + 0x2c56b98));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f3c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f3c,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02c56fc8 + 0x2c56bfc);
  puVar10 = (undefined4 *)(param_1 + 0x80);
  uVar7 = *puVar10;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024eec50(uVar7,param_2,0);
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
      iVar5 = FUN_02c3d868(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0xb0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_02beba7c(iVar3,uVar7,0);
      if ((iVar3 != 0) && (iVar3 = FUN_02c3f4b4(), -1 < iVar3)) {
        if (*(int *)(**(int **)(_UNK_02c56fd0 + 0x2c56cd0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c56fd4 + 0x2c56cec));
        iVar5 = FUN_02c3d868(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar5 + 0xb0);
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
          if (*(int *)(*piVar8 + 0x74) == 0) {
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
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x014387a4();
            }
            func_0x024eec50(param_2,uVar7,0);
            iVar3 = *(int *)(param_1 + 0x38);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024eecb8(iVar3,0);
            pcVar6 = (char *)(_UNK_02c56fe4 + 0x2c56efc);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02c56fe8 + 0x2c56f10));
              *pcVar6 = '\x01';
            }
            iVar5 = *(int *)(**(int **)(_UNK_02c56fec + 0x2c56f28) + 0x5c);
            uVar7 = *(undefined4 *)(iVar5 + 0xc);
            uVar4 = *(undefined4 *)(iVar5 + 0x10);
            uVar9 = *(undefined4 *)(iVar5 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uStack_28 = 0;
            func_0x024ef328(iVar3,uVar7,uVar4,uVar9);
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
            pcVar6 = (char *)(_UNK_02c56fd8 + 0x2c56db0);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02c56fdc + 0x2c56dc4));
              *pcVar6 = '\x01';
            }
            iVar5 = *(int *)(**(int **)(_UNK_02c56fe0 + 0x2c56de0) + 0x5c);
            fVar12 = *(float *)(iVar5 + 0x10) * _UNK_02c56fb0;
            fVar13 = *(float *)(iVar5 + 0x14) * _UNK_02c56fb0;
            fVar11 = *(float *)(iVar5 + 0xc) * _UNK_02c56fb0;
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
          *puVar10 = param_2;
          if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
            puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar10 >> 0x11) * 4);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar1);
            *puVar2 = *puVar2 | 1 << (((uint)puVar10 & 0x1ffff) >> 0xc);
            return;
          }
          return;
        }
      }
    }
  }
  return;
}


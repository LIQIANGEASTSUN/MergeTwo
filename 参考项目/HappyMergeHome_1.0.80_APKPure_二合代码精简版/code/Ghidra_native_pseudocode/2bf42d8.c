
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c042d8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
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
  
  pcVar3 = (char *)(_UNK_02c047a8 + 0x2c042f4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c047ac + 0x2c04308));
    func_0x01438628(*(undefined4 *)(_UNK_02c047b0 + 0x2c04314));
    func_0x01438628(*(undefined4 *)(_UNK_02c047b4 + 0x2c04320));
    func_0x01438628(*(undefined4 *)(_UNK_02c047b8 + 0x2c0432c));
    func_0x01438628(*(undefined4 *)(_UNK_02c047bc + 0x2c04338));
    func_0x01438628(*(undefined4 *)(_UNK_02c047c0 + 0x2c04344));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eda,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5eda,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02c047c4 + 0x2c043a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02c047c8 + 0x2c043c0);
  iVar1 = func_0x014e9518(*puVar9);
  iVar5 = *(int *)(param_1 + 0x44);
  uVar7 = *(uint *)(param_1 + 0xb0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar7) {
    func_0x014388e8();
  }
  iVar5 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02c3f4b4(iVar5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c4c570(iVar1,uVar6,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar10 = *(int **)(_UNK_02c047cc + 0x2c04444);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c047d0 + 0x2c04460);
  iVar1 = func_0x014e9518(*puVar8);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bd1400(iVar1,param_2,uVar6,0);
  if (*(int *)(**(int **)(_UNK_02c047d4 + 0x2c0449c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c047d8 + 0x2c044b8));
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02c3f4b4(iVar4,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x029a6fa8(iVar5,uVar6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3f4b4(iVar1,0);
    if (iVar1 != -1) {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar8);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bd158c(iVar1,param_2,uVar2,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_02c047dc + 0x2c045cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c4bba8(iVar1,uVar6,0);
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(_UNK_02c047e0 + 0x2c04618) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar9);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c4cb48(iVar1,uVar6,0);
          if (iVar1 != 0) {
            if (*(int *)(**(int **)(_UNK_02c047e4 + 0x2c04664) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(*puVar9);
            iVar5 = *(int *)(param_1 + 0x44);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= param_2) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x02c3f4b4(iVar5,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02c4a88c(iVar1,uVar6,0);
            if (iVar1 != 0) {
              if (*(int *)(**(int **)(_UNK_02c047e8 + 0x2c046f4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(*puVar9);
              iVar5 = *(int *)(param_1 + 0x44);
              uVar7 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar6 = func_0x02c3f4b4(iVar5,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02c4c570(iVar1,uVar6,0);
              if (iVar1 != 0) goto LAB_02c0477c;
            }
            FUN_02c0360c(param_1,param_2);
            return 1;
          }
        }
      }
    }
  }
LAB_02c0477c:
  FUN_02c02b84(param_1,param_2);
  return 1;
}


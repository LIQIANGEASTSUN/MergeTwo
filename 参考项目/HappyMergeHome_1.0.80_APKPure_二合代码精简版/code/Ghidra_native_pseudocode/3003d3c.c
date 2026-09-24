
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03013d3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_030141e8 + 0x3013d58);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030141ec + 0x3013d6c));
    func_0x01438628(*(undefined4 *)(_UNK_030141f0 + 0x3013d78));
    func_0x01438628(*(undefined4 *)(_UNK_030141f4 + 0x3013d84));
    func_0x01438628(*(undefined4 *)(_UNK_030141f8 + 0x3013d90));
    func_0x01438628(*(undefined4 *)(_UNK_030141fc + 0x3013d9c));
    func_0x01438628(*(undefined4 *)(_UNK_03014200 + 0x3013da8));
    func_0x01438628(*(undefined4 *)(_UNK_03014204 + 0x3013db4));
    func_0x01438628(*(undefined4 *)(_UNK_03014208 + 0x3013dc0));
    func_0x01438628(*(undefined4 *)(_UNK_0301420c + 0x3013dcc));
    func_0x01438628(*(undefined4 *)(_UNK_03014210 + 0x3013dd8));
    func_0x01438628(*(undefined4 *)(_UNK_03014214 + 0x3013de4));
    func_0x01438628(*(undefined4 *)(_UNK_03014218 + 0x3013df0));
    func_0x01438628(*(undefined4 *)(_UNK_0301421c + 0x3013dfc));
    func_0x01438628(*(undefined4 *)(_UNK_03014220 + 0x3013e08));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x725f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x725f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03014224 + 0x3013e68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03014228 + 0x3013e84));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0301422c + 0x3013ea4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,0x4a,**(undefined4 **)(_UNK_03014230 + 0x3013edc));
  if (iVar1 != 0) {
    iVar6 = FUN_03009c84(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x70);
    if (iVar6 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar6;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar6);
        puVar10 = *(undefined4 **)(_UNK_03014234 + 0x3013f48);
        do {
          iVar6 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar6 + 8)) {
            iVar6 = FUN_03009c84(param_1);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar1 + 0x10);
            iVar6 = *(int *)(iVar6 + 0x18);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x03b780b0(iVar7,iVar9,*puVar10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar7 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar6,uVar8,**(undefined4 **)(_UNK_03014238 + 0x3013fec));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_0301423c + 0x301400c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03014240 + 0x3014028));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x4a;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar6,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_03009c84(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = iStack_2c;
      FUN_026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_03014244 + 0x30140b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03014248 + 0x30140d4));
      piVar5 = *(int **)(_UNK_0301424c + 0x30140e8);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03014250 + 0x301410c),1);
      iStack_28 = iVar6;
      iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03014254 + 0x301412c),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar6 != 0) &&
         (iVar2 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar6;
      func_0x014385cc(piVar5 + 4,iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_03014258 + 0x30141bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0300888c();
      if (iVar1 != 0) {
        func_0x0303102c(iVar1,0);
      }
    }
  }
  return;
}


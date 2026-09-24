
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfb4e0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bfba34 + 0x2bfb4fc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfba38 + 0x2bfb510));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba3c + 0x2bfb51c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba40 + 0x2bfb528));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba44 + 0x2bfb534));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba48 + 0x2bfb540));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba4c + 0x2bfb54c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba50 + 0x2bfb558));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba54 + 0x2bfb564));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba58 + 0x2bfb570));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba5c + 0x2bfb57c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfba60 + 0x2bfb588));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ee6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ee6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_38,param_1,0);
    func_0x01523a2c(&iStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar9,&iStack_38,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bfba64 + 0x2bfb5e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfba68 + 0x2bfb604));
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_40 = FUN_02bd58b4(iVar1,param_2,uVar9,0);
  if (iStack_40 == 0) {
    func_0x014388e4();
  }
  iStack_38 = *(int *)(iStack_40 + 0xc);
  if (0 < iStack_38) {
    iVar1 = 0;
    iStack_3c = 0;
    do {
      if (*(int *)(**(int **)(_UNK_02bfba6c + 0x2bfb670) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bfba70 + 0x2bfb68c));
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = FUN_02bde7fc(iVar7,param_2,uVar9,0);
      if (iVar7 != -1) {
        iVar6 = *(int *)(param_1 + 0x44);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + param_2 * 4 + 0x10);
        if (iVar6 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0xc);
          if (iVar6 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x02c230dc(iVar6,**(undefined4 **)(_UNK_02bfba74 + 0x2bfb73c),1,0);
            iStack_3c = iVar6;
          }
        }
        iVar6 = iStack_40;
        if (iStack_40 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x024f0530(iVar6,iVar1,**(undefined4 **)(_UNK_02bfba78 + 0x2bfb768));
        uStack_48 = 0;
        iStack_50 = 1;
        uStack_4c = 1;
        FUN_02bf5f2c(param_1,param_2,iVar7,uVar9,0,3);
        if (*(int *)(**(int **)(_UNK_02bfba7c + 0x2bfb7b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bfba80 + 0x2bfb7d0));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x024f0530(iVar6,iVar1,**(undefined4 **)(_UNK_02bfba84 + 0x2bfb7f4));
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        FUN_02bd59ac(iVar7,param_2,uVar9,uVar4,0);
        FUN_02bf6abc(param_1,param_2);
        iVar7 = FUN_02be9188(param_1);
        iVar1 = iVar1 + -1;
        iStack_38 = iStack_38 + -1;
        if ((0 < iVar7) && (uVar2 = FUN_02be9188(param_1), uVar2 == param_2)) {
          if (*(int *)(**(int **)(_UNK_02bfba88 + 0x2bfb870) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bfba8c + 0x2bfb88c));
          piVar8 = *(int **)(_UNK_02bfba90 + 0x2bfb8a0);
          iVar6 = *piVar8;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar8;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x14);
          piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bfba94 + 0x2bfb8c4),2);
          iVar6 = *(int *)(param_1 + 0x44);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar6 + 0xc) <= param_2) {
            func_0x014388e8();
          }
          iVar6 = *(int *)(iVar6 + param_2 * 4 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_2c = func_0x02c3f4b4(iVar6,0);
          uStack_30 = param_2;
          iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02bfba98 + 0x2bfb920),&uStack_30);
          if (piVar8 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar6 != 0) &&
             (iVar3 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
            uVar4 = func_0x01438904();
            func_0x01438790(uVar4,0);
          }
          if (piVar8[3] == 0) {
            func_0x014388e8();
          }
          piVar8[4] = iVar6;
          func_0x014385cc(piVar8 + 4,iVar6);
          uStack_34 = *(undefined4 *)(param_1 + 0x10);
          iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02bfba9c + 0x2bfb9a0),&uStack_34);
          if ((iVar6 != 0) &&
             (iVar3 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
            uVar4 = func_0x01438904();
            func_0x01438790(uVar4,0);
          }
          if ((uint)piVar8[3] < 2) {
            func_0x014388e8();
          }
          piVar8[5] = iVar6;
          func_0x014385cc(piVar8 + 5,iVar6);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar7,uVar9,piVar8,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iStack_38);
  }
  return;
}


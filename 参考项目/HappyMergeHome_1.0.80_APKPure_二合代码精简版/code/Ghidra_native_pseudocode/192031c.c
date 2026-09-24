
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0193031c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_019307c8 + 0x1930338);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019307cc + 0x193034c));
    func_0x01438628(*(undefined4 *)(_UNK_019307d0 + 0x1930358));
    func_0x01438628(*(undefined4 *)(_UNK_019307d4 + 0x1930364));
    func_0x01438628(*(undefined4 *)(_UNK_019307d8 + 0x1930370));
    func_0x01438628(*(undefined4 *)(_UNK_019307dc + 0x193037c));
    func_0x01438628(*(undefined4 *)(_UNK_019307e0 + 0x1930388));
    func_0x01438628(*(undefined4 *)(_UNK_019307e4 + 0x1930394));
    func_0x01438628(*(undefined4 *)(_UNK_019307e8 + 0x19303a0));
    func_0x01438628(*(undefined4 *)(_UNK_019307ec + 0x19303ac));
    func_0x01438628(*(undefined4 *)(_UNK_019307f0 + 0x19303b8));
    func_0x01438628(*(undefined4 *)(_UNK_019307f4 + 0x19303c4));
    func_0x01438628(*(undefined4 *)(_UNK_019307f8 + 0x19303d0));
    func_0x01438628(*(undefined4 *)(_UNK_019307fc + 0x19303dc));
    func_0x01438628(*(undefined4 *)(_UNK_01930800 + 0x19303e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9778,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9778,0);
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
    return;
  }
  if (*(int *)(**(int **)(_UNK_01930804 + 0x1930448) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01930808 + 0x1930464));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0193080c + 0x1930484));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f110c(iVar1,0x5e,**(undefined4 **)(_UNK_01930810 + 0x19304bc));
  if (iVar1 != 0) {
    iVar7 = FUN_01926264(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x70);
    if (iVar7 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar7;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar7);
        puVar10 = *(undefined4 **)(_UNK_01930814 + 0x1930528);
        do {
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x014e9698(iVar7,iVar9,*puVar10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar7 + 8)) {
            iVar7 = FUN_01926264(param_1);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar1 + 0x10);
            iVar7 = *(int *)(iVar7 + 0x18);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar9,*puVar10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar6 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar7,uVar8,**(undefined4 **)(_UNK_01930818 + 0x19305cc));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_0193081c + 0x19305ec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01930820 + 0x1930608));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x5e;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar7,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_01926264(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = iStack_2c;
      func_0x026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_01930824 + 0x1930698) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01930828 + 0x19306b4));
      piVar5 = *(int **)(_UNK_0193082c + 0x19306c8);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01930830 + 0x19306ec),1);
      iStack_28 = iVar7;
      iVar7 = func_0x014387ac(**(undefined4 **)(_UNK_01930834 + 0x193070c),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar7 != 0) &&
         (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar7;
      func_0x014385cc(piVar5 + 4,iVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_01930838 + 0x193079c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_01924e6c();
      if (iVar1 != 0) {
        func_0x0194d60c(iVar1,0);
      }
    }
  }
  return;
}


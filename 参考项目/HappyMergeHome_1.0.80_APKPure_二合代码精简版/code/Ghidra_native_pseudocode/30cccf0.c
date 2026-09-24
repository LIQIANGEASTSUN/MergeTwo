
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030dccf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x76f2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x76f2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  iVar1 = FUN_030dc368(param_1);
  if (0 < iVar1) {
    pcVar4 = (char *)(_UNK_030dd20c + 0x30dcd7c);
    uStack_24 = unaff_r4;
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_030dd210 + 0x30dcd90));
      func_0x01438628(*(undefined4 *)(_UNK_030dd214 + 0x30dcd9c));
      func_0x01438628(*(undefined4 *)(_UNK_030dd218 + 0x30dcda8));
      func_0x01438628(*(undefined4 *)(_UNK_030dd21c + 0x30dcdb4));
      func_0x01438628(*(undefined4 *)(_UNK_030dd220 + 0x30dcdc0));
      func_0x01438628(*(undefined4 *)(_UNK_030dd224 + 0x30dcdcc));
      func_0x01438628(*(undefined4 *)(_UNK_030dd228 + 0x30dcdd8));
      func_0x01438628(*(undefined4 *)(_UNK_030dd22c + 0x30dcde4));
      func_0x01438628(*(undefined4 *)(_UNK_030dd230 + 0x30dcdf0));
      func_0x01438628(*(undefined4 *)(_UNK_030dd234 + 0x30dcdfc));
      func_0x01438628(*(undefined4 *)(_UNK_030dd238 + 0x30dce08));
      func_0x01438628(*(undefined4 *)(_UNK_030dd23c + 0x30dce14));
      func_0x01438628(*(undefined4 *)(_UNK_030dd240 + 0x30dce20));
      func_0x01438628(*(undefined4 *)(_UNK_030dd244 + 0x30dce2c));
      *pcVar4 = '\x01';
    }
    iVar6 = func_0x02953fd4(0x76f8,0);
    if (iVar6 != 0) {
      iVar6 = func_0x029540a4(0x76f8,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_20 = uStack_24;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      iStack_28 = 0;
      func_0x024f56c0(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      iStack_2c = uStack_44;
      iStack_28 = iStack_40;
      if (*(int *)(iVar6 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar6 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,param_1,0);
      func_0x01523a2c(&uStack_38,iVar1,0);
      iVar7 = *(int *)(iVar6 + 8);
      uVar8 = *(undefined4 *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
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
    if (*(int *)(**(int **)(_UNK_030dd248 + 0x30dce8c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_030dd24c + 0x30dcea8));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x036c7bec(iVar6,**(undefined4 **)(_UNK_030dd250 + 0x30dcec8));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b72148(iVar6,0x45,**(undefined4 **)(_UNK_030dd254 + 0x30dcf00));
    if (iVar6 != 0) {
      iVar7 = FUN_030d2ca4(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (iVar7 < iVar1) {
        iVar2 = *(int *)(iVar6 + 8);
        iVar9 = iVar2 * iVar7;
        iStack_2c = iVar1;
        if (iVar9 < iVar2 * iVar1) {
          iVar2 = iVar2 * (iVar1 - iVar7);
          puVar10 = *(undefined4 **)(_UNK_030dd258 + 0x30dcf6c);
          do {
            iVar1 = *(int *)(iVar6 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,iVar9,*puVar10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (0 < *(int *)(iVar1 + 8)) {
              iVar1 = FUN_030d2ca4(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar6 + 0x10);
              iVar1 = *(int *)(iVar1 + 0x18);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = func_0x03b780b0(iVar7,iVar9,*puVar10);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar8 = *(undefined4 *)(iVar7 + 8);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x03b75ba0(iVar1,uVar8,**(undefined4 **)(_UNK_030dd25c + 0x30dd010));
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            }
            if (*(int *)(**(int **)(_UNK_030dd260 + 0x30dd030) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030dd264 + 0x30dd04c));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_44 = 0x45;
            uStack_3c = 1;
            uStack_38 = 0xffffffff;
            uStack_48 = 0;
            uStack_34 = 0;
            uStack_30 = 0;
            iStack_40 = iVar9;
            func_0x02bd2cf0(iVar1,iVar9,0xffffffff,10);
            iVar2 = iVar2 + -1;
            iVar9 = iVar9 + 1;
          } while (iVar2 != 0);
        }
        iVar1 = FUN_030d2ca4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = iStack_2c;
        FUN_026efd30(iVar1,iStack_2c,0);
        if (*(int *)(**(int **)(_UNK_030dd268 + 0x30dd0dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030dd26c + 0x30dd0f8));
        piVar5 = *(int **)(_UNK_030dd270 + 0x30dd10c);
        iVar7 = *piVar5;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar5;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x330);
        piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_030dd274 + 0x30dd130),1);
        iStack_28 = iVar6;
        iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_030dd278 + 0x30dd150),&iStack_28);
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar6 != 0) &&
           (iVar7 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar7 == 0)) {
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
        if (*(int *)(**(int **)(_UNK_030dd27c + 0x30dd1e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_030d18ac();
        if (iVar1 != 0) {
          func_0x030f9eac(iVar1,0);
        }
      }
    }
    return;
  }
  return;
}


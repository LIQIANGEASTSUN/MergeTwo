
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031161b0(int param_1)

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
  
  iVar1 = func_0x02953fd4(0x786a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x786a,0);
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
  iVar1 = FUN_03115828(param_1);
  if (0 < iVar1) {
    pcVar4 = (char *)(_UNK_031166cc + 0x311623c);
    uStack_24 = unaff_r4;
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031166d0 + 0x3116250));
      func_0x01438628(*(undefined4 *)(_UNK_031166d4 + 0x311625c));
      func_0x01438628(*(undefined4 *)(_UNK_031166d8 + 0x3116268));
      func_0x01438628(*(undefined4 *)(_UNK_031166dc + 0x3116274));
      func_0x01438628(*(undefined4 *)(_UNK_031166e0 + 0x3116280));
      func_0x01438628(*(undefined4 *)(_UNK_031166e4 + 0x311628c));
      func_0x01438628(*(undefined4 *)(_UNK_031166e8 + 0x3116298));
      func_0x01438628(*(undefined4 *)(_UNK_031166ec + 0x31162a4));
      func_0x01438628(*(undefined4 *)(_UNK_031166f0 + 0x31162b0));
      func_0x01438628(*(undefined4 *)(_UNK_031166f4 + 0x31162bc));
      func_0x01438628(*(undefined4 *)(_UNK_031166f8 + 0x31162c8));
      func_0x01438628(*(undefined4 *)(_UNK_031166fc + 0x31162d4));
      func_0x01438628(*(undefined4 *)(_UNK_03116700 + 0x31162e0));
      func_0x01438628(*(undefined4 *)(_UNK_03116704 + 0x31162ec));
      *pcVar4 = '\x01';
    }
    iVar6 = func_0x02953fd4(0x7870,0);
    if (iVar6 != 0) {
      iVar6 = func_0x029540a4(0x7870,0);
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
    if (*(int *)(**(int **)(_UNK_03116708 + 0x311634c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0311670c + 0x3116368));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x036c7bec(iVar6,**(undefined4 **)(_UNK_03116710 + 0x3116388));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b72148(iVar6,0x36,**(undefined4 **)(_UNK_03116714 + 0x31163c0));
    if (iVar6 != 0) {
      iVar7 = FUN_0310c164(param_1);
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
          puVar10 = *(undefined4 **)(_UNK_03116718 + 0x311642c);
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
              iVar1 = FUN_0310c164(param_1);
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
              func_0x03b75ba0(iVar1,uVar8,**(undefined4 **)(_UNK_0311671c + 0x31164d0));
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            }
            if (*(int *)(**(int **)(_UNK_03116720 + 0x31164f0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03116724 + 0x311650c));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_44 = 0x36;
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
        iVar1 = FUN_0310c164(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = iStack_2c;
        FUN_026efd30(iVar1,iStack_2c,0);
        if (*(int *)(**(int **)(_UNK_03116728 + 0x311659c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0311672c + 0x31165b8));
        piVar5 = *(int **)(_UNK_03116730 + 0x31165cc);
        iVar7 = *piVar5;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar5;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x330);
        piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03116734 + 0x31165f0),1);
        iStack_28 = iVar6;
        iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03116738 + 0x3116610),&iStack_28);
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
        if (*(int *)(**(int **)(_UNK_0311673c + 0x31166a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0310ad6c();
        if (iVar1 != 0) {
          func_0x031328b8(iVar1,0);
        }
      }
    }
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304411c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_03044814 + 0x3044134);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03044818 + 0x3044148));
    func_0x01438628(*(undefined4 *)(_UNK_0304481c + 0x3044154));
    func_0x01438628(*(undefined4 *)(_UNK_03044820 + 0x3044160));
    func_0x01438628(*(undefined4 *)(_UNK_03044824 + 0x304416c));
    func_0x01438628(*(undefined4 *)(_UNK_03044828 + 0x3044178));
    func_0x01438628(*(undefined4 *)(_UNK_0304482c + 0x3044184));
    func_0x01438628(*(undefined4 *)(_UNK_03044830 + 0x3044190));
    func_0x01438628(*(undefined4 *)(_UNK_03044834 + 0x304419c));
    func_0x01438628(*(undefined4 *)(_UNK_03044838 + 0x30441a8));
    func_0x01438628(*(undefined4 *)(_UNK_0304483c + 0x30441b4));
    func_0x01438628(*(undefined4 *)(_UNK_03044840 + 0x30441c0));
    func_0x01438628(*(undefined4 *)(_UNK_03044844 + 0x30441cc));
    func_0x01438628(*(undefined4 *)(_UNK_03044848 + 0x30441d8));
    func_0x01438628(*(undefined4 *)(_UNK_0304484c + 0x30441e4));
    func_0x01438628(*(undefined4 *)(_UNK_03044850 + 0x30441f0));
    func_0x01438628(*(undefined4 *)(_UNK_03044854 + 0x30441fc));
    func_0x01438628(*(undefined4 *)(_UNK_03044858 + 0x3044208));
    func_0x01438628(*(undefined4 *)(_UNK_0304485c + 0x3044214));
    func_0x01438628(*(undefined4 *)(_UNK_03044860 + 0x3044220));
    func_0x01438628(*(undefined4 *)(_UNK_03044864 + 0x304422c));
    func_0x01438628(*(undefined4 *)(_UNK_03044868 + 0x3044238));
    func_0x01438628(*(undefined4 *)(_UNK_0304486c + 0x3044244));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1480,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03044870 + 0x30442a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03044874 + 0x30442c4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03044878 + 0x30442e4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x368);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0304487c + 0x304432c));
    if (iVar3 == 0) {
      func_0x030448c8(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03044880 + 0x3044350));
      FUN_026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_03044884 + 0x304436c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_03044888 + 0x3044388));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026cf428(iVar3,uVar2,0);
      iVar4 = func_0x03044930(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x03044930(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0304488c + 0x304442c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_03044890 + 0x3044448);
        puVar9 = *(undefined4 **)(_UNK_03044894 + 0x3044450);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x03044a68(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_03044898 + 0x30444cc));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_030448a0 + 0x304450c));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_030448a4 + 0x3044524);
      puVar9 = *(undefined4 **)(_UNK_030448a8 + 0x304452c);
      while( true ) {
        iVar7 = func_0x03044930(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x03044930(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cd26d0(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        FUN_026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_030448b0 + 0x304460c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030448b4 + 0x3044628));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_030448b8 + 0x3044664);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_030448bc + 0x30446a4));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_030448c0 + 0x304473c));
      func_0x03044b24(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_030448c4 + 0x3044778));
  }
  else {
    iVar1 = func_0x029540a4(0x1480,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}


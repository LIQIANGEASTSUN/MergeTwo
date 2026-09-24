
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016bf18c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_016bf484 + 0x16bf1a0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bf488 + 0x16bf1b4));
    func_0x01438628(*(undefined4 *)(_UNK_016bf48c + 0x16bf1c0));
    func_0x01438628(*(undefined4 *)(_UNK_016bf490 + 0x16bf1cc));
    func_0x01438628(*(undefined4 *)(_UNK_016bf494 + 0x16bf1d8));
    func_0x01438628(*(undefined4 *)(_UNK_016bf498 + 0x16bf1e4));
    func_0x01438628(*(undefined4 *)(_UNK_016bf49c + 0x16bf1f0));
    func_0x01438628(*(undefined4 *)(_UNK_016bf4a0 + 0x16bf1fc));
    func_0x01438628(*(undefined4 *)(_UNK_016bf4a4 + 0x16bf208));
    func_0x01438628(*(undefined4 *)(_UNK_016bf4a8 + 0x16bf214));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x88f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x88f9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4);
    return iVar1;
  }
  iVar1 = FUN_016b6be8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_016b6be8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_016b73fc(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar6 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_016b73fc(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_016b6be8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024f0530(iVar6,iVar1 + -1,**(undefined4 **)(_UNK_016bf4ac + 0x16bf32c));
    }
  }
  if (*(int *)(**(int **)(_UNK_016bf4b0 + 0x16bf344) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bf4b4 + 0x16bf360));
  piVar8 = *(int **)(_UNK_016bf4b8 + 0x16bf374);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x884);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_016bf4bc + 0x16bf3bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_016bf4c0 + 0x16bf418) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = FUN_016b4854();
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bf4c4 + 0x16bf444));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_016bf4c8 + 0x16bf460),0);
      pcVar5 = (char *)(_UNK_016e1f7c + 0x16e1c20);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_016e1f80 + 0x16e1c34),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_016e1f84 + 0x16e1c40));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f88 + 0x16e1c4c));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f8c + 0x16e1c58));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f90 + 0x16e1c64));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f94 + 0x16e1c70));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f98 + 0x16e1c7c));
        func_0x01438628(*(undefined4 *)(_UNK_016e1f9c + 0x16e1c88));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fa0 + 0x16e1c94));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fa4 + 0x16e1ca0));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fa8 + 0x16e1cac));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fac + 0x16e1cb8));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fb0 + 0x16e1cc4));
        func_0x01438628(*(undefined4 *)(_UNK_016e1fb4 + 0x16e1cd0));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x88fd,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_016e1fb8 + 0x16e1d34));
        func_0x016e3130(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar2 + 8) = iVar6;
        func_0x014385cc((int *)(iVar2 + 8),iVar6);
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar1;
        func_0x014385cc(piVar8,iVar1);
        iVar1 = *(int *)(iVar6 + 0x44);
        *(undefined1 *)(iVar6 + 0xb0) = 1;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f0584(iVar1,uVar7,**(undefined4 **)(_UNK_016e1fbc + 0x16e1d9c));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_016e1fc0 + 0x16e1e44),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_016e1fc4 + 0x16e1e5c);
        }
        else {
          iVar1 = *(int *)(iVar6 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x0152a69c(iVar1,uVar7,**(undefined4 **)(_UNK_016e1fcc + 0x16e1dcc));
          if (*(int *)(**(int **)(_UNK_016e1fd0 + 0x16e1de4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_016e1fdc + 0x16e1ed0) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_016e1fe0 + 0x16e1ee0));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_016e1fe4 + 0x16e1f04),0);
            if (*(int *)(**(int **)(_UNK_016e1fe8 + 0x16e1f18) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar6 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_016e1ff0 + 0x16e1f44),
                                    **(undefined4 **)(_UNK_016e1fec + 0x16e1f38),uVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar5 = (char *)(_UNK_02e76828 + 0x2e7675c);
            if (*pcVar5 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar6,0);
              *pcVar5 = '\x01';
            }
            iVar2 = func_0x02953fd4(0x4cc,0);
            if (iVar2 != 0) {
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar5 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              if (*pcVar5 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar6,0);
                *pcVar5 = '\x01';
              }
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_38 = 0;
              uStack_28 = 0;
              func_0x024f56c0(&uStack_50,0);
              uStack_38 = uStack_50;
              uStack_34 = uStack_4c;
              uStack_30 = uStack_48;
              uStack_2c = uStack_44;
              uStack_28 = uStack_40;
              if (*(int *)(iVar2 + 0x10) != 0) {
                func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
              }
              func_0x01523a6c(&uStack_38,iVar1,0);
              func_0x01523a6c(&uStack_38,iVar6,0);
              iVar6 = *(int *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(uVar7,0,0);
            if (iVar6 == 0 || iVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar6,0);
            return iVar1;
          }
          uStack_20 = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_016e1fd4 + 0x16e1e1c),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_016e1fd8 + 0x16e1e34);
        }
        uVar7 = func_0x01529a5c(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_016e1fc8 + 0x16e1e74) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x016ddf74(iVar6);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar6 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x88fd,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        iVar1 = func_0x0286b0b0(iVar2,iVar6,uVar7,iVar1);
      }
      return iVar1;
    }
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01842df4(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_018430ec + 0x1842e08);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018430f0 + 0x1842e1c));
    func_0x01438628(*(undefined4 *)(_UNK_018430f4 + 0x1842e28));
    func_0x01438628(*(undefined4 *)(_UNK_018430f8 + 0x1842e34));
    func_0x01438628(*(undefined4 *)(_UNK_018430fc + 0x1842e40));
    func_0x01438628(*(undefined4 *)(_UNK_01843100 + 0x1842e4c));
    func_0x01438628(*(undefined4 *)(_UNK_01843104 + 0x1842e58));
    func_0x01438628(*(undefined4 *)(_UNK_01843108 + 0x1842e64));
    func_0x01438628(*(undefined4 *)(_UNK_0184310c + 0x1842e70));
    func_0x01438628(*(undefined4 *)(_UNK_01843110 + 0x1842e7c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x921f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x921f,0);
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
  iVar1 = FUN_0183a850(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_0183a850(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_0183b064(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar6 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_0183b064(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_0183a850(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024f0530(iVar6,iVar1 + -1,**(undefined4 **)(_UNK_01843114 + 0x1842f94));
    }
  }
  if (*(int *)(**(int **)(_UNK_01843118 + 0x1842fac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184311c + 0x1842fc8));
  piVar8 = *(int **)(_UNK_01843120 + 0x1842fdc);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x7e8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_01843124 + 0x1843024) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_01843128 + 0x1843080) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = FUN_018386ac();
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0184312c + 0x18430ac));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_01843130 + 0x18430c8),0);
      pcVar5 = (char *)(_UNK_018652a0 + 0x1864f44);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_018652a4 + 0x1864f58),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_018652a8 + 0x1864f64));
        func_0x01438628(*(undefined4 *)(_UNK_018652ac + 0x1864f70));
        func_0x01438628(*(undefined4 *)(_UNK_018652b0 + 0x1864f7c));
        func_0x01438628(*(undefined4 *)(_UNK_018652b4 + 0x1864f88));
        func_0x01438628(*(undefined4 *)(_UNK_018652b8 + 0x1864f94));
        func_0x01438628(*(undefined4 *)(_UNK_018652bc + 0x1864fa0));
        func_0x01438628(*(undefined4 *)(_UNK_018652c0 + 0x1864fac));
        func_0x01438628(*(undefined4 *)(_UNK_018652c4 + 0x1864fb8));
        func_0x01438628(*(undefined4 *)(_UNK_018652c8 + 0x1864fc4));
        func_0x01438628(*(undefined4 *)(_UNK_018652cc + 0x1864fd0));
        func_0x01438628(*(undefined4 *)(_UNK_018652d0 + 0x1864fdc));
        func_0x01438628(*(undefined4 *)(_UNK_018652d4 + 0x1864fe8));
        func_0x01438628(*(undefined4 *)(_UNK_018652d8 + 0x1864ff4));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x9223,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_018652dc + 0x1865058));
        func_0x01866454(iVar2,0);
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
        iVar1 = func_0x024f0584(iVar1,uVar7,**(undefined4 **)(_UNK_018652e0 + 0x18650c0));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_018652e4 + 0x1865168),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_018652e8 + 0x1865180);
        }
        else {
          iVar1 = *(int *)(iVar6 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x0152a69c(iVar1,uVar7,**(undefined4 **)(_UNK_018652f0 + 0x18650f0));
          if (*(int *)(**(int **)(_UNK_018652f4 + 0x1865108) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_01865300 + 0x18651f4) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01865304 + 0x1865204));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_01865308 + 0x1865228),0);
            if (*(int *)(**(int **)(_UNK_0186530c + 0x186523c) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar6 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_01865314 + 0x1865268),
                                    **(undefined4 **)(_UNK_01865310 + 0x186525c),uVar7);
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
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_018652f8 + 0x1865140),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_018652fc + 0x1865158);
        }
        uVar7 = func_0x01529a5c(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_018652ec + 0x1865198) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x01861298(iVar6);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar6 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x9223,0);
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


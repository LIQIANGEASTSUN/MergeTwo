
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0314dd94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_0314e08c + 0x314dda8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314e090 + 0x314ddbc));
    func_0x01438628(*(undefined4 *)(_UNK_0314e094 + 0x314ddc8));
    func_0x01438628(*(undefined4 *)(_UNK_0314e098 + 0x314ddd4));
    func_0x01438628(*(undefined4 *)(_UNK_0314e09c + 0x314dde0));
    func_0x01438628(*(undefined4 *)(_UNK_0314e0a0 + 0x314ddec));
    func_0x01438628(*(undefined4 *)(_UNK_0314e0a4 + 0x314ddf8));
    func_0x01438628(*(undefined4 *)(_UNK_0314e0a8 + 0x314de04));
    func_0x01438628(*(undefined4 *)(_UNK_0314e0ac + 0x314de10));
    func_0x01438628(*(undefined4 *)(_UNK_0314e0b0 + 0x314de1c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x79f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x79f4,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
    return iVar1;
  }
  iVar1 = FUN_031457fc(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_031457fc(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_03146010(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar5 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_03146010(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_031457fc(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_0314e0b4 + 0x314df34));
    }
  }
  if (*(int *)(**(int **)(_UNK_0314e0b8 + 0x314df4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314e0bc + 0x314df68));
  piVar8 = *(int **)(_UNK_0314e0c0 + 0x314df7c);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x774);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_0314e0c4 + 0x314dfc4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_0314e0c8 + 0x314e020) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = FUN_03143658();
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0314e0cc + 0x314e04c));
      func_0x05096384(iVar1,param_1,**(undefined4 **)(_UNK_0314e0d0 + 0x314e068),0);
      pcVar6 = (char *)(_UNK_031701dc + 0x316fe80);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_031701e0 + 0x316fe94),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_031701e4 + 0x316fea0));
        func_0x01438628(*(undefined4 *)(_UNK_031701e8 + 0x316feac));
        func_0x01438628(*(undefined4 *)(_UNK_031701ec + 0x316feb8));
        func_0x01438628(*(undefined4 *)(_UNK_031701f0 + 0x316fec4));
        func_0x01438628(*(undefined4 *)(_UNK_031701f4 + 0x316fed0));
        func_0x01438628(*(undefined4 *)(_UNK_031701f8 + 0x316fedc));
        func_0x01438628(*(undefined4 *)(_UNK_031701fc + 0x316fee8));
        func_0x01438628(*(undefined4 *)(_UNK_03170200 + 0x316fef4));
        func_0x01438628(*(undefined4 *)(_UNK_03170204 + 0x316ff00));
        func_0x01438628(*(undefined4 *)(_UNK_03170208 + 0x316ff0c));
        func_0x01438628(*(undefined4 *)(_UNK_0317020c + 0x316ff18));
        func_0x01438628(*(undefined4 *)(_UNK_03170210 + 0x316ff24));
        func_0x01438628(*(undefined4 *)(_UNK_03170214 + 0x316ff30));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x79f8,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03170218 + 0x316ff94));
        func_0x03171390(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar2 + 8) = iVar5;
        func_0x014385cc((int *)(iVar2 + 8),iVar5);
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar1;
        func_0x014385cc(piVar8,iVar1);
        iVar1 = *(int *)(iVar5 + 0x44);
        *(undefined1 *)(iVar5 + 0xb0) = 1;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x046ccb14(iVar1,uVar7,**(undefined4 **)(_UNK_0317021c + 0x316fffc));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_03170220 + 0x31700a4),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_03170224 + 0x31700bc);
        }
        else {
          iVar1 = *(int *)(iVar5 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x046cc810(iVar1,uVar7,**(undefined4 **)(_UNK_0317022c + 0x317002c));
          if (*(int *)(**(int **)(_UNK_03170230 + 0x3170044) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_0317023c + 0x3170130) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03170240 + 0x3170140));
            func_0x05096384(uVar7,iVar2,**(undefined4 **)(_UNK_03170244 + 0x3170164),0);
            if (*(int *)(**(int **)(_UNK_03170248 + 0x3170178) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_03170250 + 0x31701a4),
                                    **(undefined4 **)(_UNK_0317024c + 0x3170198),uVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
              *pcVar6 = '\x01';
            }
            iVar2 = func_0x02953fd4(0x4cc,0);
            if (iVar2 != 0) {
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar5,0);
                *pcVar6 = '\x01';
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
              func_0x01523a6c(&uStack_38,iVar5,0);
              iVar5 = *(int *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(uVar7,0,0);
            if (iVar5 == 0 || iVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar5,0);
            return iVar1;
          }
          uStack_20 = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_03170234 + 0x317007c),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_03170238 + 0x3170094);
        }
        uVar7 = func_0x04f574bc(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_03170228 + 0x31700d4) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x0316c1d4(iVar5);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar5 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x79f8,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        iVar1 = func_0x0286b0b0(iVar2,iVar5,uVar7,iVar1);
      }
      return iVar1;
    }
  }
  return iVar1;
}


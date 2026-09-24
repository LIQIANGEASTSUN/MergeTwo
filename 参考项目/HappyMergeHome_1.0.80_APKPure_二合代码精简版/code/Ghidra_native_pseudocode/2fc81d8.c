
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd81d8(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_02fd84d0 + 0x2fd81ec);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd84d4 + 0x2fd8200));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84d8 + 0x2fd820c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84dc + 0x2fd8218));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84e0 + 0x2fd8224));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84e4 + 0x2fd8230));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84e8 + 0x2fd823c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84ec + 0x2fd8248));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84f0 + 0x2fd8254));
    func_0x01438628(*(undefined4 *)(_UNK_02fd84f4 + 0x2fd8260));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x70df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x70df,0);
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
  iVar1 = FUN_02fcfc38(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_02fcfc38(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_02fd044c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar5 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_02fd044c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_02fcfc38(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_02fd84f8 + 0x2fd8378));
    }
  }
  if (*(int *)(**(int **)(_UNK_02fd84fc + 0x2fd8390) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd8500 + 0x2fd83ac));
  piVar8 = *(int **)(_UNK_02fd8504 + 0x2fd83c0);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x99c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_02fd8508 + 0x2fd8408) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02fd850c + 0x2fd8464) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = FUN_02fcd8a4();
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8510 + 0x2fd8490));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_02fd8514 + 0x2fd84ac),0);
      pcVar6 = (char *)(_UNK_02ffba80 + 0x2ffb724);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02ffba84 + 0x2ffb738),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02ffba88 + 0x2ffb744));
        func_0x01438628(*(undefined4 *)(_UNK_02ffba8c + 0x2ffb750));
        func_0x01438628(*(undefined4 *)(_UNK_02ffba90 + 0x2ffb75c));
        func_0x01438628(*(undefined4 *)(_UNK_02ffba94 + 0x2ffb768));
        func_0x01438628(*(undefined4 *)(_UNK_02ffba98 + 0x2ffb774));
        func_0x01438628(*(undefined4 *)(_UNK_02ffba9c + 0x2ffb780));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbaa0 + 0x2ffb78c));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbaa4 + 0x2ffb798));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbaa8 + 0x2ffb7a4));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbaac + 0x2ffb7b0));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbab0 + 0x2ffb7bc));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbab4 + 0x2ffb7c8));
        func_0x01438628(*(undefined4 *)(_UNK_02ffbab8 + 0x2ffb7d4));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x70e3,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02ffbabc + 0x2ffb838));
        func_0x02ffcc34(iVar2,0);
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
        iVar1 = func_0x046ccb14(iVar1,uVar7,**(undefined4 **)(_UNK_02ffbac0 + 0x2ffb8a0));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02ffbac4 + 0x2ffb948),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_02ffbac8 + 0x2ffb960);
        }
        else {
          iVar1 = *(int *)(iVar5 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x046cc810(iVar1,uVar7,**(undefined4 **)(_UNK_02ffbad0 + 0x2ffb8d0));
          if (*(int *)(**(int **)(_UNK_02ffbad4 + 0x2ffb8e8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_02ffbae0 + 0x2ffb9d4) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02ffbae4 + 0x2ffb9e4));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02ffbae8 + 0x2ffba08),0);
            if (*(int *)(**(int **)(_UNK_02ffbaec + 0x2ffba1c) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_02ffbaf4 + 0x2ffba48),
                                    **(undefined4 **)(_UNK_02ffbaf0 + 0x2ffba3c),uVar7);
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
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02ffbad8 + 0x2ffb920),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_02ffbadc + 0x2ffb938);
        }
        uVar7 = func_0x04f574bc(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_02ffbacc + 0x2ffb978) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x02ff7acc(iVar5);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar5 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x70e3,0);
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


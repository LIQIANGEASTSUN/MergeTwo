
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0304ca00(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_18;
  
  pcVar7 = (char *)(_UNK_0304cb48 + 0x304ca18);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304cb4c + 0x304ca2c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x73ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x73ed,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    iVar1 = func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return iVar1;
  }
  if (param_2 != 0) {
    func_0x0304cb54(param_1);
  }
  iVar1 = FUN_0304411c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_0304cb50 + 0x304cab8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03041d88();
    if (iVar1 != 0) {
      func_0x0306bc0c(iVar1,0);
    }
  }
  iVar1 = FUN_0304411c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_0304be6c(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_0304411c(param_1);
    uVar6 = FUN_0304be6c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026cf66c(iVar1,uVar6,0);
    pcVar7 = (char *)(_UNK_0304c9b8 + 0x304c6d4);
    uStack_18 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0304c9bc + 0x304c6e8));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9c0 + 0x304c6f4));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9c4 + 0x304c700));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9c8 + 0x304c70c));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9cc + 0x304c718));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9d0 + 0x304c724));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9d4 + 0x304c730));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9d8 + 0x304c73c));
      func_0x01438628(*(undefined4 *)(_UNK_0304c9dc + 0x304c748));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x73ef,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x73ef,0);
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
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
      iVar1 = func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4);
      return iVar1;
    }
    iVar1 = FUN_0304411c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_0304411c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_03044930(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_03044930(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_0304411c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_0304c9e0 + 0x304c860));
      }
    }
    if (*(int *)(**(int **)(_UNK_0304c9e4 + 0x304c878) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304c9e8 + 0x304c894));
    piVar8 = *(int **)(_UNK_0304c9ec + 0x304c8a8);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x8d4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_0304c9f0 + 0x304c8f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_0304c9f4 + 0x304c94c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_03041d88();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0304c9f8 + 0x304c978));
        func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_0304c9fc + 0x304c994),0);
        pcVar7 = (char *)(_UNK_0306fffc + 0x306fca0);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_03070000 + 0x306fcb4),uVar6,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_03070004 + 0x306fcc0));
          func_0x01438628(*(undefined4 *)(_UNK_03070008 + 0x306fccc));
          func_0x01438628(*(undefined4 *)(_UNK_0307000c + 0x306fcd8));
          func_0x01438628(*(undefined4 *)(_UNK_03070010 + 0x306fce4));
          func_0x01438628(*(undefined4 *)(_UNK_03070014 + 0x306fcf0));
          func_0x01438628(*(undefined4 *)(_UNK_03070018 + 0x306fcfc));
          func_0x01438628(*(undefined4 *)(_UNK_0307001c + 0x306fd08));
          func_0x01438628(*(undefined4 *)(_UNK_03070020 + 0x306fd14));
          func_0x01438628(*(undefined4 *)(_UNK_03070024 + 0x306fd20));
          func_0x01438628(*(undefined4 *)(_UNK_03070028 + 0x306fd2c));
          func_0x01438628(*(undefined4 *)(_UNK_0307002c + 0x306fd38));
          func_0x01438628(*(undefined4 *)(_UNK_03070030 + 0x306fd44));
          func_0x01438628(*(undefined4 *)(_UNK_03070034 + 0x306fd50));
          *pcVar7 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x73f3,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03070038 + 0x306fdb4));
          func_0x030713dc(iVar2,0);
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
          iVar1 = func_0x046ccb14(iVar1,uVar6,**(undefined4 **)(_UNK_0307003c + 0x306fe1c));
          if (iVar1 == 0) {
            uStack_1c = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03070040 + 0x306fec4),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_03070044 + 0x306fedc);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x046cc810(iVar1,uVar6,**(undefined4 **)(_UNK_0307004c + 0x306fe4c));
            if (*(int *)(**(int **)(_UNK_03070050 + 0x306fe64) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_0307005c + 0x306ff50) + 0x5c);
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_03070060 + 0x306ff60));
              func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_03070064 + 0x306ff84),0);
              if (*(int *)(**(int **)(_UNK_03070068 + 0x306ff98) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_03070070 + 0x306ffc4),
                                      **(undefined4 **)(_UNK_0307006c + 0x306ffb8),uVar6);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              pcVar7 = (char *)(_UNK_02e76828 + 0x2e7675c);
              if (*pcVar7 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
                *pcVar7 = '\x01';
              }
              iVar2 = func_0x02953fd4(0x4cc,0);
              if (iVar2 == 0) {
                uVar6 = *(undefined4 *)(iVar1 + 0xc);
                if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x024ef144(uVar6,0,0);
                if (iVar5 != 0 && iVar2 != 0) {
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar5,0);
                  return iVar1;
                }
                return 0;
              }
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar7 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              uStack_20 = uStack_18;
              if (*pcVar7 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar5,0);
                *pcVar7 = '\x01';
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
              uVar6 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uStack_20 = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03070054 + 0x306fe9c),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_03070058 + 0x306feb4);
          }
          uVar6 = func_0x04f574bc(*puVar3,uVar6,0);
          if (*(int *)(**(int **)(_UNK_03070048 + 0x306fef4) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar6,0);
          func_0x0306bc0c(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x73f3,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uStack_28 = 0;
          iVar1 = func_0x0286b0b0(iVar2,iVar5,uVar6,iVar1);
        }
        return iVar1;
      }
    }
    return iVar1;
  }
  return iVar1;
}


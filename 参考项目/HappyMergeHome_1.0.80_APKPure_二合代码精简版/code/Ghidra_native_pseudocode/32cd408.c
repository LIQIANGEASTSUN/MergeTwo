
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032dd408(undefined4 param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_032dd550 + 0x32dd420);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032dd554 + 0x32dd434));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x838f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x838f,0);
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
    func_0x032dd55c(param_1);
  }
  iVar1 = FUN_032d4694(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_032dd558 + 0x32dd4c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032d3310();
    if (iVar1 != 0) {
      func_0x032fcea8(iVar1,0);
    }
  }
  iVar1 = FUN_032d4694(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_032dc874(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_032d4694(param_1);
    uVar6 = FUN_032dc874(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026cf66c(iVar1,uVar6,0);
    pcVar7 = (char *)(_UNK_032dd3c0 + 0x32dd0dc);
    uStack_18 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032dd3c4 + 0x32dd0f0));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3c8 + 0x32dd0fc));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3cc + 0x32dd108));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3d0 + 0x32dd114));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3d4 + 0x32dd120));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3d8 + 0x32dd12c));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3dc + 0x32dd138));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3e0 + 0x32dd144));
      func_0x01438628(*(undefined4 *)(_UNK_032dd3e4 + 0x32dd150));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x8391,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x8391,0);
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
    iVar1 = FUN_032d4694(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_032d4694(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_032d4ea8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_032d4ea8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_032d4694(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_032dd3e8 + 0x32dd268));
      }
    }
    if (*(int *)(**(int **)(_UNK_032dd3ec + 0x32dd280) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032dd3f0 + 0x32dd29c));
    piVar8 = *(int **)(_UNK_032dd3f4 + 0x32dd2b0);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x834);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_032dd3f8 + 0x32dd2f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_032dd3fc + 0x32dd354) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_032d3310();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032dd400 + 0x32dd380));
        func_0x05096384(iVar1,param_1,**(undefined4 **)(_UNK_032dd404 + 0x32dd39c),0);
        pcVar7 = (char *)(_UNK_03301bbc + 0x3301860);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_03301bc0 + 0x3301874),uVar6,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_03301bc4 + 0x3301880));
          func_0x01438628(*(undefined4 *)(_UNK_03301bc8 + 0x330188c));
          func_0x01438628(*(undefined4 *)(_UNK_03301bcc + 0x3301898));
          func_0x01438628(*(undefined4 *)(_UNK_03301bd0 + 0x33018a4));
          func_0x01438628(*(undefined4 *)(_UNK_03301bd4 + 0x33018b0));
          func_0x01438628(*(undefined4 *)(_UNK_03301bd8 + 0x33018bc));
          func_0x01438628(*(undefined4 *)(_UNK_03301bdc + 0x33018c8));
          func_0x01438628(*(undefined4 *)(_UNK_03301be0 + 0x33018d4));
          func_0x01438628(*(undefined4 *)(_UNK_03301be4 + 0x33018e0));
          func_0x01438628(*(undefined4 *)(_UNK_03301be8 + 0x33018ec));
          func_0x01438628(*(undefined4 *)(_UNK_03301bec + 0x33018f8));
          func_0x01438628(*(undefined4 *)(_UNK_03301bf0 + 0x3301904));
          func_0x01438628(*(undefined4 *)(_UNK_03301bf4 + 0x3301910));
          *pcVar7 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x8395,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03301bf8 + 0x3301974));
          func_0x051b0d14(iVar2,0);
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
          iVar1 = func_0x046ccb14(iVar1,uVar6,**(undefined4 **)(_UNK_03301bfc + 0x33019dc));
          if (iVar1 == 0) {
            uStack_1c = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03301c00 + 0x3301a84),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_03301c04 + 0x3301a9c);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x046cc810(iVar1,uVar6,**(undefined4 **)(_UNK_03301c0c + 0x3301a0c));
            if (*(int *)(**(int **)(_UNK_03301c10 + 0x3301a24) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_03301c1c + 0x3301b10) + 0x5c);
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_03301c20 + 0x3301b20));
              func_0x05096384(uVar6,iVar2,**(undefined4 **)(_UNK_03301c24 + 0x3301b44),0);
              if (*(int *)(**(int **)(_UNK_03301c28 + 0x3301b58) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_03301c30 + 0x3301b84),
                                      **(undefined4 **)(_UNK_03301c2c + 0x3301b78),uVar6);
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
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03301c14 + 0x3301a5c),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_03301c18 + 0x3301a74);
          }
          uVar6 = func_0x04f574bc(*puVar3,uVar6,0);
          if (*(int *)(**(int **)(_UNK_03301c08 + 0x3301ab4) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar6,0);
          func_0x032fcea8(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x8395,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03087c40(undefined4 param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_03087d88 + 0x3087c58);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03087d8c + 0x3087c6c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7575,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7575,0);
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
    func_0x03087d94(param_1);
  }
  iVar1 = FUN_0307f35c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_03087d90 + 0x3087cf8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0307cfc8();
    if (iVar1 != 0) {
      func_0x030a70ec(iVar1,0);
    }
  }
  iVar1 = FUN_0307f35c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_030870ac(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_0307f35c(param_1);
    uVar6 = FUN_030870ac(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026cf66c(iVar1,uVar6,0);
    pcVar7 = (char *)(_UNK_03087bf8 + 0x3087914);
    uStack_18 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03087bfc + 0x3087928));
      func_0x01438628(*(undefined4 *)(_UNK_03087c00 + 0x3087934));
      func_0x01438628(*(undefined4 *)(_UNK_03087c04 + 0x3087940));
      func_0x01438628(*(undefined4 *)(_UNK_03087c08 + 0x308794c));
      func_0x01438628(*(undefined4 *)(_UNK_03087c0c + 0x3087958));
      func_0x01438628(*(undefined4 *)(_UNK_03087c10 + 0x3087964));
      func_0x01438628(*(undefined4 *)(_UNK_03087c14 + 0x3087970));
      func_0x01438628(*(undefined4 *)(_UNK_03087c18 + 0x308797c));
      func_0x01438628(*(undefined4 *)(_UNK_03087c1c + 0x3087988));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x7577,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x7577,0);
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
    iVar1 = FUN_0307f35c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_0307f35c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_0307fb70(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_0307fb70(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_0307f35c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_03087c20 + 0x3087aa0));
      }
    }
    if (*(int *)(**(int **)(_UNK_03087c24 + 0x3087ab8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03087c28 + 0x3087ad4));
    piVar8 = *(int **)(_UNK_03087c2c + 0x3087ae8);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x94c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_03087c30 + 0x3087b30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_03087c34 + 0x3087b8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_0307cfc8();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03087c38 + 0x3087bb8));
        func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_03087c3c + 0x3087bd4),0);
        pcVar7 = (char *)(_UNK_030ab0a0 + 0x30aad44);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_030ab0a4 + 0x30aad58),uVar6,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_030ab0a8 + 0x30aad64));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0ac + 0x30aad70));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0b0 + 0x30aad7c));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0b4 + 0x30aad88));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0b8 + 0x30aad94));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0bc + 0x30aada0));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0c0 + 0x30aadac));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0c4 + 0x30aadb8));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0c8 + 0x30aadc4));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0cc + 0x30aadd0));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0d0 + 0x30aaddc));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0d4 + 0x30aade8));
          func_0x01438628(*(undefined4 *)(_UNK_030ab0d8 + 0x30aadf4));
          *pcVar7 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x757b,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030ab0dc + 0x30aae58));
          func_0x030c5ba0(iVar2,0);
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
          iVar1 = func_0x046ccb14(iVar1,uVar6,**(undefined4 **)(_UNK_030ab0e0 + 0x30aaec0));
          if (iVar1 == 0) {
            uStack_1c = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_030ab0e4 + 0x30aaf68),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_030ab0e8 + 0x30aaf80);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x046cc810(iVar1,uVar6,**(undefined4 **)(_UNK_030ab0f0 + 0x30aaef0));
            if (*(int *)(**(int **)(_UNK_030ab0f4 + 0x30aaf08) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_030ab100 + 0x30aaff4) + 0x5c);
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_030ab104 + 0x30ab004));
              func_0x05096384(uVar6,iVar2,**(undefined4 **)(_UNK_030ab108 + 0x30ab028),0);
              if (*(int *)(**(int **)(_UNK_030ab10c + 0x30ab03c) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_030ab114 + 0x30ab068),
                                      **(undefined4 **)(_UNK_030ab110 + 0x30ab05c),uVar6);
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
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_030ab0f8 + 0x30aaf40),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_030ab0fc + 0x30aaf58);
          }
          uVar6 = func_0x04f574bc(*puVar3,uVar6,0);
          if (*(int *)(**(int **)(_UNK_030ab0ec + 0x30aaf98) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar6,0);
          func_0x030a70ec(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x757b,0);
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


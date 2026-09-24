
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01968990(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
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
  undefined4 uStack_18;
  
  pcVar6 = (char *)(_UNK_01968ad8 + 0x19689a8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01968adc + 0x19689bc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x98f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x98f8,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    iVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return iVar1;
  }
  if (param_2 != 0) {
    func_0x01968ae4(param_1);
  }
  iVar1 = FUN_019600b0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_01968ae0 + 0x1968a48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0195dd1c();
    if (iVar1 != 0) {
      func_0x01987f44(iVar1,0);
    }
  }
  iVar1 = FUN_019600b0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_01967dfc(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_019600b0(param_1);
    uVar7 = FUN_01967dfc(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026cf66c(iVar1,uVar7,0);
    pcVar6 = (char *)(_UNK_01968948 + 0x1968664);
    uStack_18 = unaff_r4;
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0196894c + 0x1968678));
      func_0x01438628(*(undefined4 *)(_UNK_01968950 + 0x1968684));
      func_0x01438628(*(undefined4 *)(_UNK_01968954 + 0x1968690));
      func_0x01438628(*(undefined4 *)(_UNK_01968958 + 0x196869c));
      func_0x01438628(*(undefined4 *)(_UNK_0196895c + 0x19686a8));
      func_0x01438628(*(undefined4 *)(_UNK_01968960 + 0x19686b4));
      func_0x01438628(*(undefined4 *)(_UNK_01968964 + 0x19686c0));
      func_0x01438628(*(undefined4 *)(_UNK_01968968 + 0x19686cc));
      func_0x01438628(*(undefined4 *)(_UNK_0196896c + 0x19686d8));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x98fa,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x98fa,0);
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
    iVar1 = FUN_019600b0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_019600b0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_019608c4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_019608c4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_019600b0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x024f0530(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_01968970 + 0x19687f0));
      }
    }
    if (*(int *)(**(int **)(_UNK_01968974 + 0x1968808) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01968978 + 0x1968824));
    piVar8 = *(int **)(_UNK_0196897c + 0x1968838);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xa3c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_01968980 + 0x1968880) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_01968984 + 0x19688dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_0195dd1c();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01968988 + 0x1968908));
        func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_0196898c + 0x1968924),0);
        pcVar6 = (char *)(_UNK_0198bef8 + 0x198bb9c);
        if (*pcVar6 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_0198befc + 0x198bbb0),uVar7,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_0198bf00 + 0x198bbbc));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf04 + 0x198bbc8));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf08 + 0x198bbd4));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf0c + 0x198bbe0));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf10 + 0x198bbec));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf14 + 0x198bbf8));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf18 + 0x198bc04));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf1c + 0x198bc10));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf20 + 0x198bc1c));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf24 + 0x198bc28));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf28 + 0x198bc34));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf2c + 0x198bc40));
          func_0x01438628(*(undefined4 *)(_UNK_0198bf30 + 0x198bc4c));
          *pcVar6 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x98fe,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0198bf34 + 0x198bcb0));
          func_0x0198d0ac(iVar2,0);
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
          iVar1 = func_0x024f0584(iVar1,uVar7,**(undefined4 **)(_UNK_0198bf38 + 0x198bd18));
          if (iVar1 == 0) {
            uStack_1c = uVar7;
            uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0198bf3c + 0x198bdc0),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_0198bf40 + 0x198bdd8);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x0152a69c(iVar1,uVar7,**(undefined4 **)(_UNK_0198bf48 + 0x198bd48));
            if (*(int *)(**(int **)(_UNK_0198bf4c + 0x198bd60) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_0198bf58 + 0x198be4c) + 0x5c);
              uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0198bf5c + 0x198be5c));
              func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_0198bf60 + 0x198be80),0);
              if (*(int *)(**(int **)(_UNK_0198bf64 + 0x198be94) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_0198bf6c + 0x198bec0),
                                      **(undefined4 **)(_UNK_0198bf68 + 0x198beb4),uVar7);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
                *pcVar6 = '\x01';
              }
              iVar2 = func_0x02953fd4(0x4cc,0);
              if (iVar2 == 0) {
                uVar7 = *(undefined4 *)(iVar1 + 0xc);
                if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x024ef144(uVar7,0,0);
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
              pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              uStack_20 = uStack_18;
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
            uStack_20 = uVar7;
            uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0198bf50 + 0x198bd98),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_0198bf54 + 0x198bdb0);
          }
          uVar7 = func_0x01529a5c(*puVar3,uVar7,0);
          if (*(int *)(**(int **)(_UNK_0198bf44 + 0x198bdf0) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar7,0);
          func_0x01987f44(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x98fe,0);
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
  return iVar1;
}


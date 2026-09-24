
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03244ec8(undefined4 param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_03245010 + 0x3244ee0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03245014 + 0x3244ef4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7fb5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7fb5,0);
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
    func_0x0324501c(param_1);
  }
  iVar1 = FUN_0323c5d0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_03245018 + 0x3244f80) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0323a23c();
    if (iVar1 != 0) {
      func_0x03263eb0(iVar1,0);
    }
  }
  iVar1 = FUN_0323c5d0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_03244334(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_0323c5d0(param_1);
    uVar6 = FUN_03244334(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026cf66c(iVar1,uVar6,0);
    pcVar7 = (char *)(_UNK_03244e80 + 0x3244b9c);
    uStack_18 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03244e84 + 0x3244bb0));
      func_0x01438628(*(undefined4 *)(_UNK_03244e88 + 0x3244bbc));
      func_0x01438628(*(undefined4 *)(_UNK_03244e8c + 0x3244bc8));
      func_0x01438628(*(undefined4 *)(_UNK_03244e90 + 0x3244bd4));
      func_0x01438628(*(undefined4 *)(_UNK_03244e94 + 0x3244be0));
      func_0x01438628(*(undefined4 *)(_UNK_03244e98 + 0x3244bec));
      func_0x01438628(*(undefined4 *)(_UNK_03244e9c + 0x3244bf8));
      func_0x01438628(*(undefined4 *)(_UNK_03244ea0 + 0x3244c04));
      func_0x01438628(*(undefined4 *)(_UNK_03244ea4 + 0x3244c10));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x7fb7,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x7fb7,0);
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
    iVar1 = FUN_0323c5d0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_0323c5d0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_0323cde4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_0323cde4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_0323c5d0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_03244ea8 + 0x3244d28));
      }
    }
    if (*(int *)(**(int **)(_UNK_03244eac + 0x3244d40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03244eb0 + 0x3244d5c));
    piVar8 = *(int **)(_UNK_03244eb4 + 0x3244d70);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xadc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_03244eb8 + 0x3244db8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_03244ebc + 0x3244e14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_0323a23c();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03244ec0 + 0x3244e40));
        func_0x05096384(iVar1,param_1,**(undefined4 **)(_UNK_03244ec4 + 0x3244e5c),0);
        pcVar7 = (char *)(_UNK_03268480 + 0x3268124);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_03268484 + 0x3268138),uVar6,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_03268488 + 0x3268144));
          func_0x01438628(*(undefined4 *)(_UNK_0326848c + 0x3268150));
          func_0x01438628(*(undefined4 *)(_UNK_03268490 + 0x326815c));
          func_0x01438628(*(undefined4 *)(_UNK_03268494 + 0x3268168));
          func_0x01438628(*(undefined4 *)(_UNK_03268498 + 0x3268174));
          func_0x01438628(*(undefined4 *)(_UNK_0326849c + 0x3268180));
          func_0x01438628(*(undefined4 *)(_UNK_032684a0 + 0x326818c));
          func_0x01438628(*(undefined4 *)(_UNK_032684a4 + 0x3268198));
          func_0x01438628(*(undefined4 *)(_UNK_032684a8 + 0x32681a4));
          func_0x01438628(*(undefined4 *)(_UNK_032684ac + 0x32681b0));
          func_0x01438628(*(undefined4 *)(_UNK_032684b0 + 0x32681bc));
          func_0x01438628(*(undefined4 *)(_UNK_032684b4 + 0x32681c8));
          func_0x01438628(*(undefined4 *)(_UNK_032684b8 + 0x32681d4));
          *pcVar7 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x7fbb,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032684bc + 0x3268238));
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
          iVar1 = func_0x046ccb14(iVar1,uVar6,**(undefined4 **)(_UNK_032684c0 + 0x32682a0));
          if (iVar1 == 0) {
            uStack_1c = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_032684c4 + 0x3268348),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_032684c8 + 0x3268360);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x046cc810(iVar1,uVar6,**(undefined4 **)(_UNK_032684d0 + 0x32682d0));
            if (*(int *)(**(int **)(_UNK_032684d4 + 0x32682e8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_032684e0 + 0x32683d4) + 0x5c);
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032684e4 + 0x32683e4));
              func_0x05096384(uVar6,iVar2,**(undefined4 **)(_UNK_032684e8 + 0x3268408),0);
              if (*(int *)(**(int **)(_UNK_032684ec + 0x326841c) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_032684f4 + 0x3268448),
                                      **(undefined4 **)(_UNK_032684f0 + 0x326843c),uVar6);
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
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_032684d8 + 0x3268320),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_032684dc + 0x3268338);
          }
          uVar6 = func_0x04f574bc(*puVar3,uVar6,0);
          if (*(int *)(**(int **)(_UNK_032684cc + 0x3268378) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar6,0);
          func_0x03263eb0(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x7fbb,0);
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


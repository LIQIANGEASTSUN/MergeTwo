
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031c046c(undefined4 param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_031c05b4 + 0x31c0484);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c05b8 + 0x31c0498));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7cee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7cee,0);
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
    func_0x031c05c0(param_1);
  }
  iVar1 = FUN_031b7b88(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 8) {
    if (*(int *)(**(int **)(_UNK_031c05bc + 0x31c0524) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031b59e4();
    if (iVar1 != 0) {
      func_0x031de534(iVar1,0);
    }
  }
  iVar1 = FUN_031b7b88(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_031bf8d8(param_1);
  if (iVar5 < iVar1) {
    iVar1 = FUN_031b7b88(param_1);
    uVar6 = FUN_031bf8d8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026f151c(iVar1,uVar6,0);
    pcVar7 = (char *)(_UNK_031c0424 + 0x31c0140);
    uStack_18 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031c0428 + 0x31c0154));
      func_0x01438628(*(undefined4 *)(_UNK_031c042c + 0x31c0160));
      func_0x01438628(*(undefined4 *)(_UNK_031c0430 + 0x31c016c));
      func_0x01438628(*(undefined4 *)(_UNK_031c0434 + 0x31c0178));
      func_0x01438628(*(undefined4 *)(_UNK_031c0438 + 0x31c0184));
      func_0x01438628(*(undefined4 *)(_UNK_031c043c + 0x31c0190));
      func_0x01438628(*(undefined4 *)(_UNK_031c0440 + 0x31c019c));
      func_0x01438628(*(undefined4 *)(_UNK_031c0444 + 0x31c01a8));
      func_0x01438628(*(undefined4 *)(_UNK_031c0448 + 0x31c01b4));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x7cf0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x7cf0,0);
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
    iVar1 = FUN_031b7b88(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 1;
    if (0 < *(int *)(iVar1 + 0x74)) {
      iVar1 = FUN_031b7b88(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x74);
      iVar1 = FUN_031b839c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_031b839c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x18);
        iVar1 = FUN_031b7b88(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_031c044c + 0x31c02cc));
      }
    }
    if (*(int *)(**(int **)(_UNK_031c0450 + 0x31c02e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c0454 + 0x31c0300));
    piVar8 = *(int **)(_UNK_031c0458 + 0x31c0314);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar8;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x79c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
    if (*(int *)(**(int **)(_UNK_031c045c + 0x31c035c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02b1cc10(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b1ec60(iVar1,0,0);
      if (*(int *)(**(int **)(_UNK_031c0460 + 0x31c03b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_031b59e4();
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031c0464 + 0x31c03e4));
        func_0x05096384(iVar1,param_1,**(undefined4 **)(_UNK_031c0468 + 0x31c0400),0);
        pcVar7 = (char *)(_UNK_031e253c + 0x31e21e0);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_031e2540 + 0x31e21f4),uVar6,iVar1,0);
          func_0x01438628(*(undefined4 *)(_UNK_031e2544 + 0x31e2200));
          func_0x01438628(*(undefined4 *)(_UNK_031e2548 + 0x31e220c));
          func_0x01438628(*(undefined4 *)(_UNK_031e254c + 0x31e2218));
          func_0x01438628(*(undefined4 *)(_UNK_031e2550 + 0x31e2224));
          func_0x01438628(*(undefined4 *)(_UNK_031e2554 + 0x31e2230));
          func_0x01438628(*(undefined4 *)(_UNK_031e2558 + 0x31e223c));
          func_0x01438628(*(undefined4 *)(_UNK_031e255c + 0x31e2248));
          func_0x01438628(*(undefined4 *)(_UNK_031e2560 + 0x31e2254));
          func_0x01438628(*(undefined4 *)(_UNK_031e2564 + 0x31e2260));
          func_0x01438628(*(undefined4 *)(_UNK_031e2568 + 0x31e226c));
          func_0x01438628(*(undefined4 *)(_UNK_031e256c + 0x31e2278));
          func_0x01438628(*(undefined4 *)(_UNK_031e2570 + 0x31e2284));
          func_0x01438628(*(undefined4 *)(_UNK_031e2574 + 0x31e2290));
          *pcVar7 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x7cf4,0);
        if (iVar2 == 0) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031e2578 + 0x31e22f4));
          func_0x031fd2cc(iVar2,0);
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
          iVar1 = func_0x046ccb14(iVar1,uVar6,**(undefined4 **)(_UNK_031e257c + 0x31e235c));
          if (iVar1 == 0) {
            uStack_1c = uVar6;
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_031e2580 + 0x31e2404),&uStack_1c);
            puVar3 = *(undefined4 **)(_UNK_031e2584 + 0x31e241c);
          }
          else {
            iVar1 = *(int *)(iVar5 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x046cc810(iVar1,uVar6,**(undefined4 **)(_UNK_031e258c + 0x31e238c));
            if (*(int *)(**(int **)(_UNK_031e2590 + 0x31e23a4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar4,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_031e259c + 0x31e2490) + 0x5c);
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_031e25a0 + 0x31e24a0));
              func_0x05096384(uVar6,iVar2,**(undefined4 **)(_UNK_031e25a4 + 0x31e24c4),0);
              if (*(int *)(**(int **)(_UNK_031e25a8 + 0x31e24d8) + 0x74) == 0) {
                func_0x014387a4();
              }
              uStack_28 = 1;
              uStack_24 = 0;
              iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_031e25b0 + 0x31e2504),
                                      **(undefined4 **)(_UNK_031e25ac + 0x31e24f8),uVar6);
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
            uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_031e2594 + 0x31e23dc),&uStack_20);
            puVar3 = *(undefined4 **)(_UNK_031e2598 + 0x31e23f4);
          }
          uVar6 = func_0x04f574bc(*puVar3,uVar6,0);
          if (*(int *)(**(int **)(_UNK_031e2588 + 0x31e2434) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef77c(uVar6,0);
          func_0x031de534(iVar5);
          iVar2 = *piVar8;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
          *(undefined1 *)(iVar5 + 0xb0) = 0;
        }
        else {
          iVar2 = func_0x029540a4(0x7cf4,0);
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


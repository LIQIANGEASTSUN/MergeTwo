
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01683530(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01683d68 + 0x168354c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01683d6c + 0x1683560));
    func_0x01438628(*(undefined4 *)(_UNK_01683d70 + 0x168356c));
    func_0x01438628(*(undefined4 *)(_UNK_01683d74 + 0x1683578));
    func_0x01438628(*(undefined4 *)(_UNK_01683d78 + 0x1683584));
    func_0x01438628(*(undefined4 *)(_UNK_01683d7c + 0x1683590));
    func_0x01438628(*(undefined4 *)(_UNK_01683d80 + 0x168359c));
    func_0x01438628(*(undefined4 *)(_UNK_01683d84 + 0x16835a8));
    func_0x01438628(*(undefined4 *)(_UNK_01683d88 + 0x16835b4));
    func_0x01438628(*(undefined4 *)(_UNK_01683d8c + 0x16835c0));
    func_0x01438628(*(undefined4 *)(_UNK_01683d90 + 0x16835cc));
    func_0x01438628(*(undefined4 *)(_UNK_01683d94 + 0x16835d8));
    func_0x01438628(*(undefined4 *)(_UNK_01683d98 + 0x16835e4));
    func_0x01438628(*(undefined4 *)(_UNK_01683d9c + 0x16835f0));
    func_0x01438628(*(undefined4 *)(_UNK_01683da0 + 0x16835fc));
    func_0x01438628(*(undefined4 *)(_UNK_01683da4 + 0x1683608));
    func_0x01438628(*(undefined4 *)(_UNK_01683da8 + 0x1683614));
    func_0x01438628(*(undefined4 *)(_UNK_01683dac + 0x1683620));
    func_0x01438628(*(undefined4 *)(_UNK_01683db0 + 0x168362c));
    func_0x01438628(*(undefined4 *)(_UNK_01683db4 + 0x1683638));
    func_0x01438628(*(undefined4 *)(_UNK_01683db8 + 0x1683644));
    func_0x01438628(*(undefined4 *)(_UNK_01683dbc + 0x1683650));
    func_0x01438628(*(undefined4 *)(_UNK_01683dc0 + 0x168365c));
    func_0x01438628(*(undefined4 *)(_UNK_01683dc4 + 0x1683668));
    func_0x01438628(*(undefined4 *)(_UNK_01683dc8 + 0x1683674));
    func_0x01438628(*(undefined4 *)(_UNK_01683dcc + 0x1683680));
    func_0x01438628(*(undefined4 *)(_UNK_01683dd0 + 0x168368c));
    func_0x01438628(*(undefined4 *)(_UNK_01683dd4 + 0x1683698));
    func_0x01438628(*(undefined4 *)(_UNK_01683dd8 + 0x16836a4));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x87a1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01683ddc + 0x168370c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01683de0 + 0x1683728));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01683de4 + 0x1683748));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x398);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01683de8 + 0x168377c));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01683dec + 0x1683794));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01683df0 + 0x16837ac));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_01683df4 + 0x16837d8);
      do {
        if (*(int *)(**(int **)(_UNK_01683df8 + 0x16837e4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01683dfc + 0x1683800));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04cc(iVar3,**(undefined4 **)(_UNK_01683e00 + 0x1683820));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x398);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01683e04 + 0x1683858));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01683e08 + 0x1683884));
        if (*(int *)(**(int **)(_UNK_01683e0c + 0x168389c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_01681988(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01683e10 + 0x168390c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01683e14 + 0x1683948));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01683e20 + 0x16839bc) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01683e24 + 0x16839cc));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01683e28 + 0x1683a20));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01683e2c + 0x1683a34));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01683e30 + 0x1683a58));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01683e34 + 0x1683a84));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_01683e38 + 0x1683ab8) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01683e3c + 0x1683ad8));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_01683e40 + 0x1683b34)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_01683e44 + 0x1683b74);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar11 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
                        *(undefined4 *)(iVar7 + uVar10 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01683e48 + 0x1683bc8));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_01683e54 + 0x1683c20)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_01683e58 + 0x1683c4c));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_01683e5c + 0x1683c6c));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_01683e60 + 0x1683c98));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01683e18 + 0x1683968));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01683e1c + 0x16839a4));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x87a1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


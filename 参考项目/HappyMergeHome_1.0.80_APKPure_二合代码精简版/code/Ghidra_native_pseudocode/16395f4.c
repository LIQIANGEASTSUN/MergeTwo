
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016495f4(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01649e2c + 0x1649610);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01649e30 + 0x1649624));
    func_0x01438628(*(undefined4 *)(_UNK_01649e34 + 0x1649630));
    func_0x01438628(*(undefined4 *)(_UNK_01649e38 + 0x164963c));
    func_0x01438628(*(undefined4 *)(_UNK_01649e3c + 0x1649648));
    func_0x01438628(*(undefined4 *)(_UNK_01649e40 + 0x1649654));
    func_0x01438628(*(undefined4 *)(_UNK_01649e44 + 0x1649660));
    func_0x01438628(*(undefined4 *)(_UNK_01649e48 + 0x164966c));
    func_0x01438628(*(undefined4 *)(_UNK_01649e4c + 0x1649678));
    func_0x01438628(*(undefined4 *)(_UNK_01649e50 + 0x1649684));
    func_0x01438628(*(undefined4 *)(_UNK_01649e54 + 0x1649690));
    func_0x01438628(*(undefined4 *)(_UNK_01649e58 + 0x164969c));
    func_0x01438628(*(undefined4 *)(_UNK_01649e5c + 0x16496a8));
    func_0x01438628(*(undefined4 *)(_UNK_01649e60 + 0x16496b4));
    func_0x01438628(*(undefined4 *)(_UNK_01649e64 + 0x16496c0));
    func_0x01438628(*(undefined4 *)(_UNK_01649e68 + 0x16496cc));
    func_0x01438628(*(undefined4 *)(_UNK_01649e6c + 0x16496d8));
    func_0x01438628(*(undefined4 *)(_UNK_01649e70 + 0x16496e4));
    func_0x01438628(*(undefined4 *)(_UNK_01649e74 + 0x16496f0));
    func_0x01438628(*(undefined4 *)(_UNK_01649e78 + 0x16496fc));
    func_0x01438628(*(undefined4 *)(_UNK_01649e7c + 0x1649708));
    func_0x01438628(*(undefined4 *)(_UNK_01649e80 + 0x1649714));
    func_0x01438628(*(undefined4 *)(_UNK_01649e84 + 0x1649720));
    func_0x01438628(*(undefined4 *)(_UNK_01649e88 + 0x164972c));
    func_0x01438628(*(undefined4 *)(_UNK_01649e8c + 0x1649738));
    func_0x01438628(*(undefined4 *)(_UNK_01649e90 + 0x1649744));
    func_0x01438628(*(undefined4 *)(_UNK_01649e94 + 0x1649750));
    func_0x01438628(*(undefined4 *)(_UNK_01649e98 + 0x164975c));
    func_0x01438628(*(undefined4 *)(_UNK_01649e9c + 0x1649768));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8625,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01649ea0 + 0x16497d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01649ea4 + 0x16497ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01649ea8 + 0x164980c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01649eac + 0x1649840));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01649eb0 + 0x1649858));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01649eb4 + 0x1649870));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_01649eb8 + 0x164989c);
      do {
        if (*(int *)(**(int **)(_UNK_01649ebc + 0x16498a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01649ec0 + 0x16498c4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04cc(iVar3,**(undefined4 **)(_UNK_01649ec4 + 0x16498e4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x3a4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01649ec8 + 0x164991c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01649ecc + 0x1649948));
        if (*(int *)(**(int **)(_UNK_01649ed0 + 0x1649960) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_01647a40(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01649ed4 + 0x16499d0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01649ed8 + 0x1649a0c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01649ee4 + 0x1649a80) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01649ee8 + 0x1649a90));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01649eec + 0x1649ae4));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01649ef0 + 0x1649af8));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01649ef4 + 0x1649b1c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01649ef8 + 0x1649b48));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_01649efc + 0x1649b7c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01649f00 + 0x1649b9c));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_01649f04 + 0x1649bf8)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_01649f08 + 0x1649c38);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01649f0c + 0x1649c8c));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_01649f18 + 0x1649ce4)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_01649f1c + 0x1649d10));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_01649f20 + 0x1649d30));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_01649f24 + 0x1649d5c));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01649edc + 0x1649a2c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01649ee0 + 0x1649a68));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8625,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


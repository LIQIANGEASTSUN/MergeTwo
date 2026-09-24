
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031856d8(undefined4 param_1,int param_2)

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
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_03185f14 + 0x31856f4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03185f18 + 0x3185708));
    func_0x01438628(*(undefined4 *)(_UNK_03185f1c + 0x3185714));
    func_0x01438628(*(undefined4 *)(_UNK_03185f20 + 0x3185720));
    func_0x01438628(*(undefined4 *)(_UNK_03185f24 + 0x318572c));
    func_0x01438628(*(undefined4 *)(_UNK_03185f28 + 0x3185738));
    func_0x01438628(*(undefined4 *)(_UNK_03185f2c + 0x3185744));
    func_0x01438628(*(undefined4 *)(_UNK_03185f30 + 0x3185750));
    func_0x01438628(*(undefined4 *)(_UNK_03185f34 + 0x318575c));
    func_0x01438628(*(undefined4 *)(_UNK_03185f38 + 0x3185768));
    func_0x01438628(*(undefined4 *)(_UNK_03185f3c + 0x3185774));
    func_0x01438628(*(undefined4 *)(_UNK_03185f40 + 0x3185780));
    func_0x01438628(*(undefined4 *)(_UNK_03185f44 + 0x318578c));
    func_0x01438628(*(undefined4 *)(_UNK_03185f48 + 0x3185798));
    func_0x01438628(*(undefined4 *)(_UNK_03185f4c + 0x31857a4));
    func_0x01438628(*(undefined4 *)(_UNK_03185f50 + 0x31857b0));
    func_0x01438628(*(undefined4 *)(_UNK_03185f54 + 0x31857bc));
    func_0x01438628(*(undefined4 *)(_UNK_03185f58 + 0x31857c8));
    func_0x01438628(*(undefined4 *)(_UNK_03185f5c + 0x31857d4));
    func_0x01438628(*(undefined4 *)(_UNK_03185f60 + 0x31857e0));
    func_0x01438628(*(undefined4 *)(_UNK_03185f64 + 0x31857ec));
    func_0x01438628(*(undefined4 *)(_UNK_03185f68 + 0x31857f8));
    func_0x01438628(*(undefined4 *)(_UNK_03185f6c + 0x3185804));
    func_0x01438628(*(undefined4 *)(_UNK_03185f70 + 0x3185810));
    func_0x01438628(*(undefined4 *)(_UNK_03185f74 + 0x318581c));
    func_0x01438628(*(undefined4 *)(_UNK_03185f78 + 0x3185828));
    func_0x01438628(*(undefined4 *)(_UNK_03185f7c + 0x3185834));
    func_0x01438628(*(undefined4 *)(_UNK_03185f80 + 0x3185840));
    func_0x01438628(*(undefined4 *)(_UNK_03185f84 + 0x318584c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7ba3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03185f88 + 0x31858b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03185f8c + 0x31858d0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03185f90 + 0x31858f0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x208);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03185f94 + 0x3185924));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03185f98 + 0x318593c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03185f9c + 0x3185954));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_03185fa0 + 0x3185984);
      do {
        if (*(int *)(**(int **)(_UNK_03185fa4 + 0x3185990) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03185fa8 + 0x31859ac));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_03185fac + 0x31859cc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x208);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_03185fb0 + 0x3185a00));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_03185fb4 + 0x3185a2c));
        if (*(int *)(**(int **)(_UNK_03185fb8 + 0x3185a44) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_03183b24(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03185fbc + 0x3185ab8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03185fc0 + 0x3185af4));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_03185fcc + 0x3185b68) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_03185fd0 + 0x3185b78)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03185fd4 + 0x3185bcc));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03185fd8 + 0x3185be0));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_03185fdc + 0x3185c04));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_03185fe0 + 0x3185c30));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_03185fe4 + 0x3185c64) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03185fe8 + 0x3185c84));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_03185fec + 0x3185ce0)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_03185ff0 + 0x3185d20);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_03185ff4 + 0x3185d74));
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
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_03186000 + 0x3185dcc)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_03186004 + 0x3185df8));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03186008 + 0x3185e18));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_0318600c + 0x3185e44));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03185fc4 + 0x3185b14));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03185fc8 + 0x3185b50));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7ba3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


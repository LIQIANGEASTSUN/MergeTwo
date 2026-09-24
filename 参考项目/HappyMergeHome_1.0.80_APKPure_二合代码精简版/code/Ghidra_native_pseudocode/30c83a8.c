
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_030d83a8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_030d8ec0 + 0x30d83bc);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d8ec4 + 0x30d83d0));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ec8 + 0x30d83dc));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ecc + 0x30d83e8));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ed0 + 0x30d83f4));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ed4 + 0x30d8400));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ed8 + 0x30d840c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8edc + 0x30d8418));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ee0 + 0x30d8424));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ee4 + 0x30d8430));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ee8 + 0x30d843c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8eec + 0x30d8448));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ef0 + 0x30d8454));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ef4 + 0x30d8460));
    func_0x01438628(*(undefined4 *)(_UNK_030d8ef8 + 0x30d846c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8efc + 0x30d8478));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f00 + 0x30d8484));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f04 + 0x30d8490));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f08 + 0x30d849c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f0c + 0x30d84a8));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f10 + 0x30d84b4));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f14 + 0x30d84c0));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f18 + 0x30d84cc));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f1c + 0x30d84d8));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f20 + 0x30d84e4));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f24 + 0x30d84f0));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f28 + 0x30d84fc));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f2c + 0x30d8508));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f30 + 0x30d8514));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f34 + 0x30d8520));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f38 + 0x30d852c));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f3c + 0x30d8538));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f40 + 0x30d8544));
    func_0x01438628(*(undefined4 *)(_UNK_030d8f44 + 0x30d8550));
    *pcVar10 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar1 = func_0x02953fd4(0x153d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d8f48 + 0x30d85cc));
    func_0x04cfd1b4(iVar1,**(undefined4 **)(_UNK_030d8f4c + 0x30d85dc));
    if (*(int *)(**(int **)(_UNK_030d8f50 + 0x30d85f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030d8f54 + 0x30d860c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_030d8f58 + 0x30d862c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x388);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_030d8f5c + 0x30d8660));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030d8f60 + 0x30d8678));
    func_0x04cfd2f0(iVar2,uVar3,**(undefined4 **)(_UNK_030d8f64 + 0x30d8690));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_70 = *(int *)(iVar2 + 0xc) - 1;
    if (-1 < (int)uStack_70) {
      do {
        if (*(int *)(**(int **)(_UNK_030d8f68 + 0x30d86cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d8f6c + 0x30d86e8));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x036c7bec(iVar4,**(undefined4 **)(_UNK_030d8f70 + 0x30d8708));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x388);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x04cfd760(iVar2,uStack_70,**(undefined4 **)(_UNK_030d8f74 + 0x30d873c));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b73d40(iVar4,uVar3,**(undefined4 **)(_UNK_030d8f78 + 0x30d8768));
        if (*(int *)(**(int **)(_UNK_030d8f7c + 0x30d8780) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = FUN_030d7edc(iVar4);
        if (iVar5 != 0) {
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x04cd366c(&uStack_68,iVar5,**(undefined4 **)(_UNK_030d8f80 + 0x30d87d0));
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uStack_2c = uStack_5c;
          while (iVar5 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_030d8f84 + 0x30d87ec)),
                uVar3 = uStack_2c, iVar5 != 0) {
            iVar5 = *(int *)(iVar4 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x04cd2d7c(iVar5,uVar3,**(undefined4 **)(_UNK_030d8f88 + 0x30d881c));
            if (iVar5 == 0) {
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x046c26fc(iVar5,uVar3,**(undefined4 **)(_UNK_030d8f8c + 0x30d884c));
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar4 + 0x14);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x03b70cd0(iVar5,uVar3,0,**(undefined4 **)(_UNK_030d8f90 + 0x30d887c));
              }
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x03b70fac(iVar5,uVar3,**(undefined4 **)(_UNK_030d8f94 + 0x30d88a8));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x03b70fe4(iVar5,uVar3,iVar6 + 1,**(undefined4 **)(_UNK_030d8f98 + 0x30d88d0));
            }
          }
          func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_030d8fa8 + 0x30d88f0));
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x03b75c84(iVar5,**(undefined4 **)(_UNK_030d8fa0 + 0x30d8914));
          iVar5 = *(int *)(iVar4 + 0x14);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x046c2934(&uStack_68,iVar5,**(undefined4 **)(_UNK_030d8fa4 + 0x30d8940));
          bVar14 = false;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          uStack_40 = uStack_58;
          while (iVar5 = func_0x048a44e0(&uStack_50,**(undefined4 **)(_UNK_030d8fc0 + 0x30d896c)),
                uVar3 = uStack_44, iVar5 != 0) {
            iVar6 = *(int *)(iVar4 + 0x48);
            iVar5 = (int)uStack_40;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x04cd2d7c(iVar6,uVar3,**(undefined4 **)(_UNK_030d8fb0 + 0x30d89a0));
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar4 + 100);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x04cd2d7c(iVar6,uVar3,**(undefined4 **)(_UNK_030d8fb4 + 0x30d89d0));
              if (0 < iVar5 && iVar6 == 0) {
                uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_030d8fb8 + 0x30d89fc));
                func_0x02ca3c70(uVar7,uVar3,iVar5,0,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar1 + 8);
                uVar13 = *(uint *)(iVar1 + 0xc);
                piVar9 = *(int **)(_UNK_030d8fbc + 0x30d8a54);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar6 = *piVar9;
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (uVar13 < *(uint *)(iVar5 + 0xc)) {
                  bVar14 = true;
                  *(uint *)(iVar1 + 0xc) = uVar13 + 1;
                  puVar8 = (undefined4 *)(iVar5 + uVar13 * 4 + 0x10);
                  *puVar8 = uVar7;
                  func_0x014385cc(puVar8,uVar7);
                }
                else {
                  bVar14 = true;
                  func_0x04cfda38(iVar1,uVar7,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                }
              }
            }
          }
          func_0x048a4620(&uStack_50,**(undefined4 **)(_UNK_030d8fc4 + 0x30d8abc));
          if (*(int *)(**(int **)(_UNK_030d8fcc + 0x30d8ad0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = FUN_030ccbc4();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x04cfd760(iVar2,uStack_70,**(undefined4 **)(_UNK_030d8fd0 + 0x30d8b00));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x030d8ff8(iVar5,uVar3);
          if (iVar5 != 0) {
            iVar6 = 0;
            while( true ) {
              iVar11 = *(int *)(iVar5 + 0xc);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (iVar11 <= iVar6) break;
              iVar12 = *(int *)(iVar4 + 0x48);
              iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_030d8fd8 + 0x30d8b64));
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              uVar3 = *(undefined4 *)(iVar11 + 8);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              iVar11 = func_0x04cd2d7c(iVar12,uVar3,**(undefined4 **)(_UNK_030d8fdc + 0x30d8ba0));
              if (iVar11 == 0) {
                iVar12 = *(int *)(iVar4 + 100);
                iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_030d8fe0 + 0x30d8bc0));
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                uVar3 = *(undefined4 *)(iVar11 + 8);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                iVar11 = func_0x04cd2d7c(iVar12,uVar3,**(undefined4 **)(_UNK_030d8fe4 + 0x30d8bfc));
                if (iVar11 == 0) {
                  iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_030d8fe8 + 0x30d8c1c))
                  ;
                  if (iVar11 == 0) {
                    func_0x014388e4();
                  }
                  if (0 < *(int *)(iVar11 + 0xc)) {
                    uVar3 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_030d8fec + 0x30d8c54)
                                           );
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar1 + 8);
                    uVar13 = *(uint *)(iVar1 + 0xc);
                    piVar9 = *(int **)(_UNK_030d8ff0 + 0x30d8c94);
                    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                    iVar12 = *piVar9;
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar13 < *(uint *)(iVar11 + 0xc)) {
                      *(uint *)(iVar1 + 0xc) = uVar13 + 1;
                      puVar8 = (undefined4 *)(iVar11 + uVar13 * 4 + 0x10);
                      *puVar8 = uVar3;
                      func_0x014385cc(puVar8,uVar3);
                    }
                    else {
                      func_0x04cfda38(iVar1,uVar3,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                    }
                    bVar14 = true;
                  }
                }
              }
              iVar6 = iVar6 + 1;
            }
            iVar5 = *(int *)(iVar4 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            FUN_026f040c(iVar5,1,0);
          }
          if (bVar14) {
            FUN_026ef7d8(iVar4,1,0);
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x03b70d24(iVar4,**(undefined4 **)(_UNK_030d8ff4 + 0x30d8d60));
          }
        }
        uStack_70 = uStack_70 - 1;
      } while (uStack_70 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x153d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028a054c(iVar1,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf8684(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_02bf92b0 + 0x2bf86a4);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf92b4 + 0x2bf86bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92b8 + 0x2bf86c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92bc + 0x2bf86d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92c0 + 0x2bf86e0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92c4 + 0x2bf86ec));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92c8 + 0x2bf86f8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92cc + 0x2bf8704));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92d0 + 0x2bf8710));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92d4 + 0x2bf871c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92d8 + 0x2bf8728));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92dc + 0x2bf8734));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92e0 + 0x2bf8740));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92e4 + 0x2bf874c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92e8 + 0x2bf8758));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92ec + 0x2bf8764));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92f0 + 0x2bf8770));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92f4 + 0x2bf877c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92f8 + 0x2bf8788));
    func_0x01438628(*(undefined4 *)(_UNK_02bf92fc + 0x2bf8794));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9300 + 0x2bf87a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9304 + 0x2bf87ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9308 + 0x2bf87b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf930c + 0x2bf87c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9310 + 0x2bf87d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9314 + 0x2bf87dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9318 + 0x2bf87e8));
    *pcVar13 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x02953fd4(0x5e91,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf931c + 0x2bf8860) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9320 + 0x2bf887c));
    uVar15 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = FUN_02bdd790(iVar1,param_2,uVar15,0,0);
    if (iVar1 != -1) {
      if (*(int *)(**(int **)(_UNK_02bf9324 + 0x2bf88c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x01588bac(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0x1c1) == '\0') {
        iVar3 = func_0x02bfff2c(param_1);
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = func_0x02c00500(param_1);
        if (iVar3 != 0) {
          return 0;
        }
      }
      if (*(int *)(**(int **)(_UNK_02bf9328 + 0x2bf8908) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf932c + 0x2bf8924));
      uVar15 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_02be82dc(iVar3,uVar15,0);
      if (iVar3 == 0) {
        if (*(int *)(**(int **)(_UNK_02bf933c + 0x2bf8a30) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar16 = *(undefined4 **)(_UNK_02bf9340 + 0x2bf8a4c);
        iVar3 = func_0x014e9518(*puVar16);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = 0;
        iVar3 = func_0x029a6fa8(iVar3,param_3,0);
        if (iVar3 != 0) {
          if (*(int *)(**(int **)(_UNK_02bf9344 + 0x2bf8a8c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar16);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar18 = 0;
          iVar4 = func_0x029b1348(iVar4,0);
          iVar5 = func_0x014e9518(*puVar16);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x029b156c(iVar5,0);
          piVar17 = *(int **)(_UNK_02bf9348 + 0x2bf8b00);
          do {
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar14 = *(int *)(iVar4 + 0x20);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar14 + 0xc) <= (int)uVar18) {
              return 0;
            }
            iVar14 = *(int *)(iVar4 + 0x20);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar14 + 0xc) <= uVar18) {
              func_0x014388e8();
            }
            uStack_28 = *(undefined4 *)(iVar14 + uVar18 * 4 + 0x10);
            if (*(int *)(**(int **)(_UNK_02bf934c + 0x2bf8b54) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar14 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9350 + 0x2bf8b78));
            uVar15 = uStack_28;
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            iVar14 = func_0x02d11b38(iVar14,uVar15,0);
            if (iVar14 == 0) {
              uVar15 = func_0x01524ffc(&uStack_28,0);
              uVar15 = func_0x014e9568(**(undefined4 **)(_UNK_02bf93c0 + 0x2bf8d94),uVar15,0);
              iVar14 = **(int **)(_UNK_02bf93c4 + 0x2bf8da8);
              iVar6 = *(int *)(iVar14 + 0x1c);
joined_r0x02bf8db0:
              if (iVar6 == 0) {
                func_0x014909d8(iVar14);
                iVar6 = *(int *)(iVar14 + 0x1c);
              }
              iVar6 = *(int *)(iVar6 + 8);
              if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                iVar6 = func_0x0149097c();
              }
LAB_02bf8dd4:
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = *(int *)(*(int *)(iVar14 + 0x1c) + 8);
              if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
                iVar14 = func_0x0149097c();
              }
              uVar2 = **(undefined4 **)(iVar14 + 0x5c);
              if (*(int *)(*piVar17 + 0x74) == 0) {
                func_0x014387a4(*piVar17);
              }
              func_0x026794a8(uVar15,uVar2,0);
            }
            else {
              iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02bf9354 + 0x2bf8bb8));
              func_0x02c3f928(iVar6,0);
              iVar14 = *(int *)(iVar14 + 0x1c);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uVar15 = func_0x03b7661c(iVar14,0,**(undefined4 **)(_UNK_02bf9358 + 0x2bf8be8));
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              piVar7 = *(int **)(_UNK_02bf935c + 0x2bf8c10);
              puVar16 = (undefined4 *)(iVar6 + 8);
              *puVar16 = uVar15;
              if (*(int *)(*piVar7 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9360 + 0x2bf8c30));
              uVar15 = *puVar16;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              iVar14 = func_0x029a6fa8(iVar14,uVar15,0);
              if ((iVar14 != 0) && (*(int *)(iVar14 + 0x30) == *(int *)(iVar3 + 0x30))) {
                iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02bf9364 + 0x2bf8c88));
                func_0x02c3f960(iVar8,0);
                uVar15 = func_0x014388d4(**(undefined4 **)(_UNK_02bf9368 + 0x2bf8ca4));
                func_0x03a062d0(uVar15,iVar6,**(undefined4 **)(_UNK_02bf936c + 0x2bf8cc0),0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar9 = func_0x024f0f0c(iVar5,uVar15,**(undefined4 **)(_UNK_02bf9370 + 0x2bf8ce8));
                iVar10 = 0;
                if (iVar9 != 0) {
                  iVar10 = *(int *)(iVar9 + 0xc);
                  iVar6 = iVar9;
                }
                if (iVar9 != 0 && iVar10 != 0) {
                  uVar15 = func_0x02c006d0(param_1,*(undefined4 *)(iVar14 + 0x30));
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  puVar16 = *(undefined4 **)(_UNK_02bf9380 + 0x2bf8e64);
                  *(undefined4 *)(iVar8 + 8) = uVar15;
                  uVar15 = func_0x014388d4(*puVar16);
                  func_0x03a062d0(uVar15,iVar8,**(undefined4 **)(_UNK_02bf9384 + 0x2bf8e84),0);
                  iVar14 = func_0x024f0618(iVar6,uVar15,**(undefined4 **)(_UNK_02bf9388 + 0x2bf8e9c)
                                          );
                  if (iVar14 != 0) {
                    if (*(int *)(**(int **)(_UNK_02bf938c + 0x2bf8f18) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9390 + 0x2bf8f34));
                    uVar15 = *(undefined4 *)(param_1 + 0x10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = FUN_02bad050(iVar3,uVar15,0);
                    if (iVar3 == 0) {
                      return 0;
                    }
                    iVar4 = *(int *)(iVar3 + 0x60);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    puVar16 = *(undefined4 **)(_UNK_02bf9394 + 0x2bf8f90);
                    func_0x03b75c84(iVar4,*puVar16);
                    iVar4 = *(int *)(iVar3 + 100);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    func_0x03b75c84(iVar4,*puVar16);
                    FUN_026f665c(iVar3,0,0);
                    FUN_026f67e8(iVar3,uStack_28,0);
                    iVar4 = *(int *)(iVar3 + 0x60);
                    uVar15 = *(undefined4 *)(iVar14 + 0x18);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    puVar16 = *(undefined4 **)(_UNK_02bf9398 + 0x2bf8ff8);
                    func_0x03b75c38(iVar4,uVar15,*puVar16);
                    iVar3 = *(int *)(iVar3 + 100);
                    uVar15 = *(undefined4 *)(iVar14 + 0x1c);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    func_0x03b75c38(iVar3,uVar15,*puVar16);
                    if (*(int *)(**(int **)(_UNK_02bf939c + 0x2bf902c) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf93a0 + 0x2bf9048));
                    iVar4 = *(int *)(iVar14 + 0x18);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar4 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    uVar15 = *(undefined4 *)(iVar4 + 0x10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    FUN_02be85c8(iVar3,uVar15,0);
                    iVar3 = *(int *)(iVar14 + 0x18);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar3 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    iVar4 = *(int *)(iVar14 + 0x1c);
                    uVar15 = *(undefined4 *)(iVar3 + 0x10);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar4 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    uVar2 = 0;
                    FUN_02bf5f2c(param_1,param_2,iVar1,uVar15,0,0xd,6,0,
                                 *(undefined4 *)(iVar4 + 0x10));
                    if (*(int *)(**(int **)(_UNK_02bf93a4 + 0x2bf9114) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x0202346c(0);
                    iVar3 = *(int *)(iVar14 + 0x18);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar3 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    uVar15 = func_0x01524ffc(iVar3 + 0x10,0);
                    uStack_2c = 0;
                    uVar11 = func_0x01524ffc(&uStack_2c,0);
                    uVar12 = func_0x01524ffc(&uStack_28,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x020257a4(iVar1,0x2c6,uVar15,uVar11,uVar12,0,0,uVar2,0,0,0,0,0);
                    iVar1 = *(int *)(iVar14 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    piVar17 = *(int **)(_UNK_02bf93a8 + 0x2bf91ec);
                    if (*(int *)(iVar1 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    uVar15 = func_0x01524ffc(iVar1 + 0x10,0);
                    uVar15 = func_0x014e9568(**(undefined4 **)(_UNK_02bf93ac + 0x2bf9210),uVar15,0);
                    iVar3 = **(int **)(_UNK_02bf93b0 + 0x2bf9224);
                    iVar1 = *(int *)(iVar3 + 0x1c);
                    if (iVar1 == 0) {
                      func_0x014909d8(iVar3);
                      iVar1 = *(int *)(iVar3 + 0x1c);
                    }
                    iVar1 = *(int *)(iVar1 + 8);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x0149097c();
                    }
                    if (*(int *)(iVar1 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x0149097c();
                    }
                    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
                    if (*(int *)(*piVar17 + 0x74) == 0) {
                      func_0x014387a4(*piVar17);
                    }
                    func_0x026794a8(uVar15,uVar2,0);
                    return 1;
                  }
                  uVar15 = func_0x01524ffc((undefined4 *)(iVar8 + 8),0);
                  uVar15 = func_0x014e9568(**(undefined4 **)(_UNK_02bf93b4 + 0x2bf8ecc),uVar15,0);
                  iVar14 = **(int **)(_UNK_02bf93b8 + 0x2bf8ee0);
                  iVar6 = *(int *)(iVar14 + 0x1c);
                  piVar17 = *(int **)(_UNK_02bf93bc + 0x2bf8ef4);
                  goto joined_r0x02bf8db0;
                }
                uVar15 = func_0x01524ffc(puVar16,0);
                uVar15 = func_0x014e9568(**(undefined4 **)(_UNK_02bf9374 + 0x2bf8d24),uVar15,0);
                iVar14 = **(int **)(_UNK_02bf9378 + 0x2bf8d38);
                iVar6 = *(int *)(iVar14 + 0x1c);
                if (iVar6 == 0) {
                  func_0x014909d8(iVar14);
                  iVar6 = *(int *)(iVar14 + 0x1c);
                }
                iVar6 = *(int *)(iVar6 + 8);
                piVar17 = *(int **)(_UNK_02bf937c + 0x2bf8d68);
                if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                  iVar6 = func_0x0149097c();
                }
                goto LAB_02bf8dd4;
              }
            }
            uVar18 = uVar18 + 1;
          } while( true );
        }
      }
      else {
        iVar3 = **(int **)(_UNK_02bf9330 + 0x2bf8960);
        iVar1 = *(int *)(iVar3 + 0x1c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar3);
          iVar1 = *(int *)(iVar3 + 0x1c);
        }
        iVar1 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        uVar15 = **(undefined4 **)(iVar1 + 0x5c);
        if (*(int *)(**(int **)(_UNK_02bf9334 + 0x2bf89c0) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02bf9334 + 0x2bf89c0));
        }
        uVar2 = 0;
        func_0x026794a8(**(undefined4 **)(_UNK_02bf9338 + 0x2bf89f4),uVar15,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e91,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028fc658(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}


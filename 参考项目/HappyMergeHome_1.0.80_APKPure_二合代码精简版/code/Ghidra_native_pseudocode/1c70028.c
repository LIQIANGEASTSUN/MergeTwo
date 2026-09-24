
/* WARNING: Possible PIC construction at 0x01c801b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c801bc) */
/* WARNING: Removing unreachable block (ram,0x01c801d0) */
/* WARNING: Removing unreachable block (ram,0x01c801d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c80028(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01c800b8 + 0x1c80038);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c800bc + 0x1c8004c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadcf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xadcf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    iStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar10,uVar8,&iStack_30,uVar5);
    return;
  }
  iVar1 = **(int **)(**(int **)(_UNK_01c800c0 + 0x1c800a0) + 0x5c);
  if (iVar1 == 0) {
    return;
  }
  pcVar4 = (char *)(_UNK_01c801ec + 0x1c800d8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c801f0 + 0x1c800ec));
    *pcVar4 = '\x01';
  }
  iVar10 = func_0x02953fd4(0xadd0,0);
  if (iVar10 == 0) {
    piVar9 = *(int **)(_UNK_01c801f4 + 0x1c80144);
    iVar10 = **(int **)(*piVar9 + 0x5c);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02b637f8(iVar10,0x1d58,0);
    if (iVar7 != 0) {
      return;
    }
    iVar1 = FUN_01c733a0(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x58) != '\0') {
      iVar1 = **(int **)(*piVar9 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar4 = (char *)(_UNK_02b67a88 + 0x2b6790c);
      piStack_28 = (int *)iVar1;
      iStack_24 = iVar10;
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02b67a8c + 0x2b67920),0x1d57,0);
        func_0x01438628(*(undefined4 *)(_UNK_02b67a90 + 0x2b6792c));
        func_0x01438628(*(undefined4 *)(_UNK_02b67a94 + 0x2b67938));
        func_0x01438628(*(undefined4 *)(_UNK_02b67a98 + 0x2b67944));
        func_0x01438628(*(undefined4 *)(_UNK_02b67a9c + 0x2b67950));
        func_0x01438628(*(undefined4 *)(_UNK_02b67aa0 + 0x2b6795c));
        *pcVar4 = '\x01';
      }
      iVar10 = func_0x02953fd4(0x67f,0);
      if (iVar10 == 0) {
        iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02b67aa4 + 0x2b679b8));
        func_0x02b68b1c(iVar10,0);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        piVar3 = *(int **)(_UNK_02b67aa8 + 0x2b679e0);
        *(undefined4 *)(iVar10 + 8) = 0x1d57;
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x03b2c734(**(undefined4 **)(_UNK_02b67aac + 0x2b67a00));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x029b55e8(iVar7,0);
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02b67ab0 + 0x2b67a30));
        func_0x03a062d0(uVar5,iVar10,**(undefined4 **)(_UNK_02b67ab4 + 0x2b67a4c),0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x024f0618(iVar7,uVar5,**(undefined4 **)(_UNK_02b67ab8 + 0x2b67a70));
        iStack_2c = iStack_24;
        iStack_30 = (int)piStack_28;
        pcVar4 = (char *)(_UNK_02b66efc + 0x2b66828);
        piStack_28 = piVar9;
        if (*pcVar4 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02b66f00 + 0x2b6683c));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f04 + 0x2b66848));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f08 + 0x2b66854));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f0c + 0x2b66860));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f10 + 0x2b6686c));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f14 + 0x2b66878));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f18 + 0x2b66884));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f1c + 0x2b66890));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f20 + 0x2b6689c));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f24 + 0x2b668a8));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f28 + 0x2b668b4));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f2c + 0x2b668c0));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f30 + 0x2b668cc));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f34 + 0x2b668d8));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f38 + 0x2b668e4));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f3c + 0x2b668f0));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f40 + 0x2b668fc));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f44 + 0x2b66908));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f48 + 0x2b66914));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f4c + 0x2b66920));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f50 + 0x2b6692c));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f54 + 0x2b66938));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f58 + 0x2b66944));
          func_0x01438628(*(undefined4 *)(_UNK_02b66f5c + 0x2b66950));
          *pcVar4 = '\x01';
        }
        iVar7 = func_0x02953fd4(0x682,0);
        if (iVar7 == 0) {
          iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02b66f60 + 0x2b669ac));
          func_0x02b68a30(iVar7,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          piVar9 = (int *)(iVar7 + 8);
          *piVar9 = iVar10;
          func_0x014385cc(piVar9,iVar10);
          if (*piVar9 != 0) {
            uVar8 = *(undefined4 *)(*piVar9 + 8);
            uStack_34 = uVar8;
            uVar5 = func_0x024ef924(iVar1,0);
            uStack_38 = uVar8;
            uVar8 = func_0x014387ac(**(undefined4 **)(_UNK_02b66f64 + 0x2b66a10),&uStack_38);
            uVar5 = func_0x014e95b8(**(undefined4 **)(_UNK_02b66f68 + 0x2b66a30),uVar5,uVar8,0);
            iVar6 = **(int **)(_UNK_02b66f6c + 0x2b66a44);
            iVar10 = *(int *)(iVar6 + 0x1c);
            if (iVar10 == 0) {
              func_0x014909d8(iVar6);
              iVar10 = *(int *)(iVar6 + 0x1c);
            }
            iVar10 = *(int *)(iVar10 + 8);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x0149097c();
            }
            if (*(int *)(iVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar10 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x0149097c();
            }
            uVar8 = **(undefined4 **)(iVar10 + 0x5c);
            if (*(int *)(**(int **)(_UNK_02b66f70 + 0x2b66aa4) + 0x74) == 0) {
              func_0x014387a4(**(int **)(_UNK_02b66f70 + 0x2b66aa4));
            }
            func_0x026794a8(uVar5,uVar8,0);
            uVar5 = uStack_34;
            iVar10 = *(int *)(iVar1 + 0xc);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x046c26fc(iVar10,uVar5,**(undefined4 **)(_UNK_02b66f74 + 0x2b66af4));
            uVar5 = uStack_34;
            if (iVar10 == 0) {
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              func_0x046c24b0(iVar10,uVar5,uVar5,**(undefined4 **)(_UNK_02b66f78 + 0x2b66b2c));
            }
            iVar10 = *piVar9;
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar10 + 0x11) != '\0') {
              if (*(int *)(**(int **)(_UNK_02b66f7c + 0x2b66b5c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02b66f80 + 0x2b66b78));
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar10 = func_0x036c7bec(iVar10,**(undefined4 **)(_UNK_02b66f84 + 0x2b66b98));
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(iVar10 + 0x88);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(iVar10 + 8);
              if (iVar10 != 0) {
                uVar5 = func_0x01524ffc(&uStack_34,0);
                iVar6 = func_0x04753c80(iVar10,uVar5,**(undefined4 **)(_UNK_02b66f88 + 0x2b66be8));
                if (iVar6 == 0) {
                  uVar5 = func_0x01524ffc(&uStack_34,0);
                  uVar8 = func_0x01524ffc(&uStack_34,0);
                  func_0x03b73a64(iVar10,uVar5,uVar8,**(undefined4 **)(_UNK_02b66f8c + 0x2b66c2c));
                }
              }
              func_0x02b66fc0(iVar1,*piVar9);
            }
            if (*(int *)(**(int **)(_UNK_02b66f90 + 0x2b66c4c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02b66f94 + 0x2b66c68));
            piVar3 = *(int **)(_UNK_02b66f98 + 0x2b66c7c);
            iVar6 = *piVar3;
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x014387a4();
              iVar6 = *piVar3;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x180);
            piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02b66f9c + 0x2b66ca0),1);
            iVar6 = *piVar9;
            if (piVar3 == (int *)0x0) {
              func_0x014388e4();
            }
            if ((iVar6 != 0) &&
               (iVar2 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
              uVar8 = func_0x01438904();
              func_0x01438790(uVar8,0);
            }
            if (piVar3[3] == 0) {
              func_0x014388e8();
            }
            piVar3[4] = iVar6;
            func_0x014385cc(piVar3 + 4,iVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar10,uVar5,piVar3,0);
            iVar10 = *piVar9;
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x01524ffc(iVar10 + 8,0);
            func_0x02b6127c(iVar1,1,uVar5,0);
            iVar10 = *piVar9;
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            if (0 < *(int *)(iVar10 + 0x38)) {
              if (*(int *)(**(int **)(_UNK_02b66fa0 + 0x2b66d84) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar10 = func_0x03b2c734(**(undefined4 **)(_UNK_02b66fa4 + 0x2b66da0));
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar10 = func_0x029b55e8(iVar10,0);
              uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02b66fa8 + 0x2b66dd0));
              func_0x03a062d0(uVar5,iVar7,**(undefined4 **)(_UNK_02b66fac + 0x2b66dec),0);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar10 = func_0x024f0618(iVar10,uVar5,**(undefined4 **)(_UNK_02b66fb0 + 0x2b66e10));
              if (iVar10 != 0) {
                if (*(char *)(iVar10 + 0x28) != '\0') {
                  piVar9 = *(int **)(_UNK_02b66fb4 + 0x2b66e3c);
                  if (*(int *)(*piVar9 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  puVar11 = *(undefined4 **)(_UNK_02b66fb8 + 0x2b66e58);
                  uVar5 = func_0x014e9518(*puVar11);
                  if (*(int *)(**(int **)(_UNK_02b66fbc + 0x2b66e6c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x024ef144(uVar5,0,0);
                  if (iVar7 != 0) {
                    if (*(int *)(*piVar9 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar7 = func_0x014e9518(*puVar11);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    uStack_40 = 0;
                    iVar7 = func_0x02bdd790(iVar7,1,0,0);
                    if (iVar7 < 0) {
                      return;
                    }
                  }
                }
                func_0x02b61988(iVar1,iVar10,0);
              }
            }
          }
        }
        else {
          iVar7 = func_0x029540a4(0x682,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x02869298(iVar7,iVar1,iVar10,0);
        }
        return;
      }
      iVar10 = func_0x029540a4(0x67f,0);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iStack_2c = iStack_24;
      iStack_30 = (int)piStack_28;
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_48 = 0;
      uStack_38 = 0;
      piStack_28 = piVar9;
      func_0x024f56c0(&iStack_60,0,0x1d57,0);
      iStack_48 = iStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      if (*(int *)(iVar10 + 0x10) != 0) {
        func_0x01523a6c(&iStack_48,*(int *)(iVar10 + 0x10),0);
      }
      func_0x01523a6c(&iStack_48,iVar1,0);
      func_0x01523a2c(&iStack_48,0x1d57,0);
      iVar7 = *(int *)(iVar10 + 8);
      uVar5 = *(undefined4 *)(iVar10 + 0xc);
      iVar1 = *(int *)(iVar10 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar8 = 3;
      if (iVar1 == 0) {
        uVar8 = 2;
      }
      func_0x024f56d0(iVar7,uVar5,&iStack_48,uVar8,0,0);
      return;
    }
    return;
  }
  iVar10 = func_0x029540a4(0xadd0,0);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  func_0x024f56c0(&iStack_48,0,0);
  iStack_30 = iStack_48;
  iStack_2c = uStack_44;
  piStack_28 = (int *)uStack_40;
  iStack_24 = uStack_3c;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01523a6c(&iStack_30,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01523a6c(&iStack_30,iVar1,0);
  iVar7 = *(int *)(iVar10 + 8);
  uVar5 = *(undefined4 *)(iVar10 + 0xc);
  iVar1 = *(int *)(iVar10 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = 2;
  if (iVar1 == 0) {
    uVar8 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar7,uVar5,&iStack_30,uVar8);
  return;
}


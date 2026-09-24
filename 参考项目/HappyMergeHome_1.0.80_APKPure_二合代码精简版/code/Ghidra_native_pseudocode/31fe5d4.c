
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0320e5d4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x02953fd4(0x7e39,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x7e39,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return uVar1;
  }
  pcVar6 = (char *)(_UNK_0320eef0 + 0x320e690);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320eef4 + 0x320e6a4));
    func_0x01438628(*(undefined4 *)(_UNK_0320eef8 + 0x320e6b0));
    func_0x01438628(*(undefined4 *)(_UNK_0320eefc + 0x320e6bc));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef00 + 0x320e6c8));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef04 + 0x320e6d4));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef08 + 0x320e6e0));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef0c + 0x320e6ec));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef10 + 0x320e6f8));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef14 + 0x320e704));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef18 + 0x320e710));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef1c + 0x320e71c));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef20 + 0x320e728));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef24 + 0x320e734));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef28 + 0x320e740));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef2c + 0x320e74c));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef30 + 0x320e758));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef34 + 0x320e764));
    func_0x01438628(*(undefined4 *)(_UNK_0320ef38 + 0x320e770));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1408,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1408,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  piVar8 = *(int **)(_UNK_0320ef3c + 0x320e7cc);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0320ef40 + 0x320e7e8);
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar2 + 0x10) == '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x38) != 0 || *(int *)(iVar2 + 0x3c) != 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0320ef44 + 0x320e814) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x0320f48c();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_0320b9fc(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0320ef5c + 0x320ec44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0320ef60 + 0x320ec60));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_0320ef64 + 0x320ec84);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2b8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0320ef68 + 0x320ecb4));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0320ef6c + 0x320eccc));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0320ef70 + 0x320ece4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_0320ef74 + 0x320ed14);
        puVar11 = *(undefined4 **)(_UNK_0320ef78 + 0x320ed1c);
        do {
          if (*(int *)(**(int **)(_UNK_0320ef7c + 0x320ed24) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0320ef80 + 0x320ed40));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x2b8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_0320ef84 + 0x320edc0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0320efc0(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026ef7d8(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_0320ef88 + 0x320ee20) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0320ef8c + 0x320ee3c));
              piVar8 = *(int **)(_UNK_0320ef90 + 0x320ee50);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x738);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_0320ef94 + 0x320ee9c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024eec50(uVar7,0,0);
              uVar12 = 1;
              if (iVar5 != 0) {
                return 0;
              }
            }
          }
          uVar1 = uVar1 - 1;
          if (0x7fffffff < uVar1) {
            return uVar12;
          }
        } while( true );
      }
    }
    else {
      iVar2 = FUN_0320b9fc(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_0320ef98 + 0x320ea64) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_0320ef9c + 0x320ea80);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_0320efa0 + 0x320eaa4);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2b8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0320efa4 + 0x320ead4));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0320efa8 + 0x320eaec));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0320efac + 0x320eb04));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_0320efb0 + 0x320eb30);
      puVar14 = *(undefined4 **)(_UNK_0320efb4 + 0x320eb38);
      do {
        if (*(int *)(**(int **)(_UNK_0320efb8 + 0x320eb40) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x036c7bec(iVar5,*puVar15);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x2b8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_0320efbc + 0x320ebd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0320efc0(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026ef7d8(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_0320ef48 + 0x320e850);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0320ef4c + 0x320e86c);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_0320ef50 + 0x320e880);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x738);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_0320ef54 + 0x320e8c8);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(uVar7,0,0);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(*puVar9);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x738);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0320ef58 + 0x320e93c),1);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20));
  if (iVar3 == 0) {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar8[3] == 0) {
    func_0x014388e8();
  }
  piVar8[4] = iVar2;
  func_0x014385cc(piVar8 + 4,iVar2);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0c90c(iVar5,uVar7,piVar8,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = func_0x024eec50(uVar7,0,0);
  return uVar1 ^ 1;
}


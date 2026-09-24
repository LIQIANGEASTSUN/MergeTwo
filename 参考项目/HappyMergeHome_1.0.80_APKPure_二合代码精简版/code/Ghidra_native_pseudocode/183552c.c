
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0184552c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  
  pcVar7 = (char *)(_UNK_0184564c + 0x1845540);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01845650 + 0x1845554));
    func_0x01438628(*(undefined4 *)(_UNK_01845654 + 0x1845560));
    func_0x01438628(*(undefined4 *)(_UNK_01845658 + 0x184556c));
    func_0x01438628(*(undefined4 *)(_UNK_0184565c + 0x1845578));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1e2e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1e2e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    puStack_20 = (undefined4 *)0x0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = (int)piStack_3c;
    puStack_20 = puStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    puStack_50 = (undefined4 *)0x0;
    uStack_4c = 0;
    iVar2 = func_0x024f56d0(iVar8,uVar10,&uStack_30,uVar4);
    return iVar2;
  }
  if (*(int *)(**(int **)(_UNK_01845660 + 0x18455d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01845664 + 0x18455ec));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x38);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x0152983c(iVar2,*(int *)(iVar2 + 0xc) + -1,
                          **(undefined4 **)(_UNK_01845668 + 0x184561c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  pcVar7 = (char *)(_UNK_0184456c + 0x1844170);
  iStack_24 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01844570 + 0x1844184));
    func_0x01438628(*(undefined4 *)(_UNK_01844574 + 0x1844190));
    func_0x01438628(*(undefined4 *)(_UNK_01844578 + 0x184419c));
    func_0x01438628(*(undefined4 *)(_UNK_0184457c + 0x18441a8));
    func_0x01438628(*(undefined4 *)(_UNK_01844580 + 0x18441b4));
    func_0x01438628(*(undefined4 *)(_UNK_01844584 + 0x18441c0));
    func_0x01438628(*(undefined4 *)(_UNK_01844588 + 0x18441cc));
    func_0x01438628(*(undefined4 *)(_UNK_0184458c + 0x18441d8));
    func_0x01438628(*(undefined4 *)(_UNK_01844590 + 0x18441e4));
    func_0x01438628(*(undefined4 *)(_UNK_01844594 + 0x18441f0));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x02953fd4(0x1e2f,0);
  if (iVar8 == 0) {
    iVar8 = FUN_0183a850(param_1);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x6c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    puVar11 = *(undefined4 **)(_UNK_01844598 + 0x1844290);
    iVar8 = func_0x024f0f34(iVar8,iVar2,*puVar11);
    if (iVar8 == 0) {
      if (*(int *)(**(int **)(_UNK_0184459c + 0x18442b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_018445a0 + 0x18442cc));
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x38);
      iVar9 = 0;
      puVar12 = *(undefined4 **)(_UNK_018445a4 + 0x18442f4);
      while( true ) {
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar9) break;
        iVar1 = func_0x0152983c(iVar8,iVar9,*puVar12);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = iVar9 + 1;
        if (*(int *)(iVar1 + 0x24) == iVar2) {
          iVar9 = 0;
          while( true ) {
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0xc) <= iVar9) break;
            iVar1 = func_0x0152983c(iVar8,iVar9,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0x24) <= iVar2) {
              iVar1 = FUN_0183a850(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x6c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar1 + 0x10);
              iVar1 = func_0x0152983c(iVar8,iVar9,*puVar12);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar10 = *(undefined4 *)(iVar1 + 0x24);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024f0f34(iVar5,uVar10,*puVar11);
              if (iVar1 == 0) {
                iVar1 = FUN_0183a850(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x6c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x10);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x0152983c(iVar8,iVar9,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar10 = *(undefined4 *)(iVar5 + 0x24);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x024f05ac(iVar1,uVar10,**(undefined4 **)(_UNK_018445a8 + 0x184446c));
              }
            }
            iVar9 = iVar9 + 1;
          }
          func_0x018457f0(param_1);
          if (*(int *)(**(int **)(_UNK_018445ac + 0x1844490) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018445b0 + 0x18444ac));
          piVar6 = *(int **)(_UNK_018445b4 + 0x18444c0);
          iVar8 = *piVar6;
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x014387a4();
            iVar8 = *piVar6;
          }
          iVar1 = **(int **)(_UNK_018445b8 + 0x18444e0);
          iVar9 = *(int *)(iVar1 + 0x1c);
          uVar10 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x32c);
          if (iVar9 == 0) {
            func_0x014909d8(iVar1);
            iVar9 = *(int *)(iVar1 + 0x1c);
          }
          iVar8 = *(int *)(iVar9 + 8);
          if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
            iVar8 = func_0x0149097c();
          }
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
          if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
            iVar8 = func_0x0149097c();
          }
          uVar4 = **(undefined4 **)(iVar8 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          puStack_20 = (undefined4 *)iStack_24;
          pcVar7 = (char *)(_UNK_029903f0 + 0x29901d4);
          iStack_24 = iVar2;
          if (*pcVar7 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar10,uVar4,0);
            func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
            func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
            func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
            *pcVar7 = '\x01';
          }
          uStack_28 = 0;
          uStack_2c = 0;
          iVar8 = func_0x02953fd4(0x226,0);
          if (iVar8 == 0) {
            iVar8 = *(int *)(iVar2 + 0x14);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x04753c80(iVar8,uVar10,**(undefined4 **)(_UNK_02990404 + 0x2990298));
            iVar8 = 0;
            if (iVar9 != 0) {
              iVar9 = *(int *)(iVar2 + 0x14);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              iVar9 = func_0x0475399c(iVar9,uVar10,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
              if (iVar9 != 0) {
                iVar8 = *(int *)(iVar2 + 0x10);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x024f2f10(iVar8,0);
                if (iVar8 == 0) {
                  iVar2 = *(int *)(iVar2 + 0x10);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x024f2f20(iVar2,200,0);
                  if (iVar2 == 0) {
                    return 0;
                  }
                }
                puStack_34 = &uStack_28;
                puStack_38 = &uStack_30;
                piStack_3c = &iStack_24;
                uStack_40 = 0;
                uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
                func_0x0298fd74(uVar3,uVar10,uVar4);
                iVar2 = *(int *)(iStack_24 + 0x18);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                func_0x03a39760(iVar2,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
                func_0x010b8c68(&uStack_40);
                iVar8 = 1;
              }
            }
          }
          else {
            iVar8 = func_0x029540a4(0x226,0);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uStack_48 = 0;
            iVar8 = func_0x02871898(iVar8,iVar2,uVar10,uVar4);
          }
          return iVar8;
        }
      }
      return *(int *)(iVar8 + 0xc);
    }
    return iVar8;
  }
  iVar8 = func_0x029540a4(0x1e2f,0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  puStack_20 = (undefined4 *)iStack_24;
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puStack_38 = (undefined4 *)0x0;
  uStack_28 = 0;
  func_0x024f56c0(&puStack_50,0,iVar2,0);
  puStack_38 = puStack_50;
  puStack_34 = (undefined4 *)uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar8 + 0x10) != 0) {
    func_0x01523a6c(&puStack_38,*(int *)(iVar8 + 0x10),0);
  }
  func_0x01523a6c(&puStack_38,param_1,0);
  func_0x01523a2c(&puStack_38,iVar2,0);
  iVar9 = *(int *)(iVar8 + 8);
  uVar10 = *(undefined4 *)(iVar8 + 0xc);
  iVar2 = *(int *)(iVar8 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  iVar2 = func_0x024f56d0(iVar9,uVar10,&puStack_38,uVar4,0,0);
  return iVar2;
}


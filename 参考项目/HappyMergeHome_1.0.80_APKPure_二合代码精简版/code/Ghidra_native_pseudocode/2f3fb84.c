
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f4fb84(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_02f4fca4 + 0x2f4fb98);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4fca8 + 0x2f4fbac));
    func_0x01438628(*(undefined4 *)(_UNK_02f4fcac + 0x2f4fbb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4fcb0 + 0x2f4fbc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4fcb4 + 0x2f4fbd0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x216c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x216c,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    puStack_50 = (undefined4 *)0x0;
    uStack_4c = 0;
    iVar3 = func_0x024f56d0(iVar6,uVar10,&uStack_30,uVar4);
    return iVar3;
  }
  if (*(int *)(**(int **)(_UNK_02f4fcb8 + 0x2f4fc28) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4fcbc + 0x2f4fc44));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x38);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x04cfd760(iVar3,*(int *)(iVar3 + 0xc) + -1,
                          **(undefined4 **)(_UNK_02f4fcc0 + 0x2f4fc74));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  pcVar9 = (char *)(_UNK_02f4e96c + 0x2f4e570);
  iStack_24 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4e970 + 0x2f4e584));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e974 + 0x2f4e590));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e978 + 0x2f4e59c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e97c + 0x2f4e5a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e980 + 0x2f4e5b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e984 + 0x2f4e5c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e988 + 0x2f4e5cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e98c + 0x2f4e5d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e990 + 0x2f4e5e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e994 + 0x2f4e5f0));
    *pcVar9 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x216d,0);
  if (iVar6 == 0) {
    iVar6 = FUN_02f44c50(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x6c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    puVar11 = *(undefined4 **)(_UNK_02f4e998 + 0x2f4e690);
    iVar6 = func_0x04cd2d7c(iVar6,iVar3,*puVar11);
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_02f4e99c + 0x2f4e6b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4e9a0 + 0x2f4e6cc));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x38);
      iVar7 = 0;
      puVar12 = *(undefined4 **)(_UNK_02f4e9a4 + 0x2f4e6f4);
      while( true ) {
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar7) break;
        iVar2 = func_0x04cfd760(iVar6,iVar7,*puVar12);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(iVar2 + 0x24) == iVar3) {
          iVar7 = 0;
          while( true ) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar7) break;
            iVar2 = func_0x04cfd760(iVar6,iVar7,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x24) <= iVar3) {
              iVar2 = FUN_02f44c50(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x6c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar2 + 0x10);
              iVar2 = func_0x04cfd760(iVar6,iVar7,*puVar12);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar10 = *(undefined4 *)(iVar2 + 0x24);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x04cd2d7c(iVar5,uVar10,*puVar11);
              if (iVar2 == 0) {
                iVar2 = FUN_02f44c50(param_1);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x6c);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x10);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x04cfd760(iVar6,iVar7,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar10 = *(undefined4 *)(iVar5 + 0x24);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                func_0x03b75ba0(iVar2,uVar10,**(undefined4 **)(_UNK_02f4e9a8 + 0x2f4e86c));
              }
            }
            iVar7 = iVar7 + 1;
          }
          func_0x02f4fe48(param_1);
          if (*(int *)(**(int **)(_UNK_02f4e9ac + 0x2f4e890) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4e9b0 + 0x2f4e8ac));
          piVar8 = *(int **)(_UNK_02f4e9b4 + 0x2f4e8c0);
          iVar6 = *piVar8;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar8;
          }
          iVar2 = **(int **)(_UNK_02f4e9b8 + 0x2f4e8e0);
          iVar7 = *(int *)(iVar2 + 0x1c);
          uVar10 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x32c);
          if (iVar7 == 0) {
            func_0x014909d8(iVar2);
            iVar7 = *(int *)(iVar2 + 0x1c);
          }
          iVar6 = *(int *)(iVar7 + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          uVar4 = **(undefined4 **)(iVar6 + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          puStack_20 = (undefined4 *)iStack_24;
          pcVar9 = (char *)(_UNK_029903f0 + 0x29901d4);
          iStack_24 = iVar3;
          if (*pcVar9 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar10,uVar4,0);
            func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
            func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
            func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
            *pcVar9 = '\x01';
          }
          uStack_28 = 0;
          uStack_2c = 0;
          iVar6 = func_0x02953fd4(0x226,0);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar3 + 0x14);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x04753c80(iVar6,uVar10,**(undefined4 **)(_UNK_02990404 + 0x2990298));
            iVar6 = 0;
            if (iVar7 != 0) {
              iVar7 = *(int *)(iVar3 + 0x14);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = func_0x0475399c(iVar7,uVar10,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
              if (iVar7 != 0) {
                iVar6 = *(int *)(iVar3 + 0x10);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f2f10(iVar6,0);
                if (iVar6 == 0) {
                  iVar3 = *(int *)(iVar3 + 0x10);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = func_0x024f2f20(iVar3,200,0);
                  if (iVar3 == 0) {
                    return 0;
                  }
                }
                puStack_34 = &uStack_28;
                puStack_38 = &uStack_30;
                uStack_40 = 0;
                piStack_3c = &iStack_24;
                uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
                FUN_0298fd74(uVar1,uVar10,uVar4);
                iVar3 = *(int *)(iStack_24 + 0x18);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                func_0x03a39760(iVar3,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
                func_0x010b8c68(&uStack_40);
                iVar6 = 1;
              }
            }
          }
          else {
            iVar6 = func_0x029540a4(0x226,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uStack_48 = 0;
            iVar6 = func_0x02871898(iVar6,iVar3,uVar10,uVar4);
          }
          return iVar6;
        }
      }
      return *(int *)(iVar6 + 0xc);
    }
    return iVar6;
  }
  iVar6 = func_0x029540a4(0x216d,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  puStack_20 = (undefined4 *)iStack_24;
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puStack_38 = (undefined4 *)0x0;
  uStack_28 = 0;
  func_0x024f56c0(&puStack_50,0,iVar3,0);
  puStack_38 = puStack_50;
  puStack_34 = (undefined4 *)uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01523a6c(&puStack_38,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01523a6c(&puStack_38,param_1,0);
  func_0x01523a2c(&puStack_38,iVar3,0);
  iVar7 = *(int *)(iVar6 + 8);
  uVar10 = *(undefined4 *)(iVar6 + 0xc);
  iVar3 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  iVar3 = func_0x024f56d0(iVar7,uVar10,&puStack_38,uVar4,0,0);
  return iVar3;
}


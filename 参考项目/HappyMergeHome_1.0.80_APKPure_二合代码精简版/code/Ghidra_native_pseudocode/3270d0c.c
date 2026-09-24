
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03280d0c(undefined4 param_1)

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
  
  pcVar9 = (char *)(_UNK_03280e2c + 0x3280d20);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03280e30 + 0x3280d34));
    func_0x01438628(*(undefined4 *)(_UNK_03280e34 + 0x3280d40));
    func_0x01438628(*(undefined4 *)(_UNK_03280e38 + 0x3280d4c));
    func_0x01438628(*(undefined4 *)(_UNK_03280e3c + 0x3280d58));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1f53,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x1f53,0);
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
  if (*(int *)(**(int **)(_UNK_03280e40 + 0x3280db0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03280e44 + 0x3280dcc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x2c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x04cfd760(iVar3,*(int *)(iVar3 + 0xc) + -1,
                          **(undefined4 **)(_UNK_03280e48 + 0x3280dfc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  pcVar9 = (char *)(_UNK_0327ee18 + 0x327ea1c);
  iStack_24 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327ee1c + 0x327ea30));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee20 + 0x327ea3c));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee24 + 0x327ea48));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee28 + 0x327ea54));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee2c + 0x327ea60));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee30 + 0x327ea6c));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee34 + 0x327ea78));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee38 + 0x327ea84));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee3c + 0x327ea90));
    func_0x01438628(*(undefined4 *)(_UNK_0327ee40 + 0x327ea9c));
    *pcVar9 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x1f54,0);
  if (iVar6 == 0) {
    iVar6 = FUN_03275bc8(param_1);
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
    puVar11 = *(undefined4 **)(_UNK_0327ee44 + 0x327eb3c);
    iVar6 = func_0x04cd2d7c(iVar6,iVar3,*puVar11);
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_0327ee48 + 0x327eb5c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0327ee4c + 0x327eb78));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x2c);
      iVar7 = 0;
      puVar12 = *(undefined4 **)(_UNK_0327ee50 + 0x327eba0);
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
              iVar2 = FUN_03275bc8(param_1);
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
                iVar2 = FUN_03275bc8(param_1);
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
                func_0x03b75ba0(iVar2,uVar10,**(undefined4 **)(_UNK_0327ee54 + 0x327ed18));
              }
            }
            iVar7 = iVar7 + 1;
          }
          func_0x03281418(param_1);
          if (*(int *)(**(int **)(_UNK_0327ee58 + 0x327ed3c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0327ee5c + 0x327ed58));
          piVar8 = *(int **)(_UNK_0327ee60 + 0x327ed6c);
          iVar6 = *piVar8;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar8;
          }
          iVar2 = **(int **)(_UNK_0327ee64 + 0x327ed8c);
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
                func_0x0298fd74(uVar1,uVar10,uVar4);
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
  iVar6 = func_0x029540a4(0x1f54,0);
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


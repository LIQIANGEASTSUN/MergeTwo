
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aeb900(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
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
  
  pcVar6 = (char *)(_UNK_01aeb9d0 + 0x1aeb914);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeb9d4 + 0x1aeb928));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb9d8 + 0x1aeb934));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd2b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xd2b,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    puStack_50 = (undefined4 *)0x0;
    uStack_4c = 0;
    iVar2 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4);
    return iVar2;
  }
  uVar13 = FUN_01ae9a14(param_1);
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  iVar7 = (int)uVar13;
  if (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 0xc);
  }
  if (iVar7 != 0 && iVar2 != 0) {
    iVar2 = func_0x0152983c(iVar7,iVar2 + -1,**(undefined4 **)(_UNK_01aeb9dc + 0x1aeb9ac));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    pcVar6 = (char *)(_UNK_01aea2d8 + 0x1ae9f54);
    iStack_24 = unaff_r4;
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01aea2dc + 0x1ae9f68));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2e0 + 0x1ae9f74));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2e4 + 0x1ae9f80));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2e8 + 0x1ae9f8c));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2ec + 0x1ae9f98));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2f0 + 0x1ae9fa4));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2f4 + 0x1ae9fb0));
      func_0x01438628(*(undefined4 *)(_UNK_01aea2f8 + 0x1ae9fbc));
      *pcVar6 = '\x01';
    }
    iVar7 = func_0x02953fd4(0xd2c,0);
    if (iVar7 != 0) {
      iVar7 = func_0x029540a4(0xd2c,0);
      if (iVar7 == 0) {
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
      if (*(int *)(iVar7 + 0x10) != 0) {
        func_0x01523a6c(&puStack_38,*(int *)(iVar7 + 0x10),0);
      }
      func_0x01523a6c(&puStack_38,param_1,0);
      func_0x01523a2c(&puStack_38,iVar2,0);
      iVar8 = *(int *)(iVar7 + 8);
      uVar9 = *(undefined4 *)(iVar7 + 0xc);
      iVar2 = *(int *)(iVar7 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar4 = 3;
      if (iVar2 == 0) {
        uVar4 = 2;
      }
      iVar2 = func_0x024f56d0(iVar8,uVar9,&puStack_38,uVar4,0,0);
      return iVar2;
    }
    iVar8 = FUN_01ae9944(param_1);
    iVar7 = 0;
    if (iVar8 != 0) {
      iVar7 = FUN_01ae9944(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      puVar11 = *(undefined4 **)(_UNK_01aea2fc + 0x1aea05c);
      iVar7 = func_0x024f0f34(iVar7,iVar2,*puVar11);
      if (iVar7 == 0) {
        iVar8 = FUN_01ae9a14(param_1);
        iVar7 = 0;
        if ((iVar8 != 0) && (iVar7 = *(int *)(iVar8 + 0xc), 0 < iVar7)) {
          iVar10 = 0;
          puVar12 = *(undefined4 **)(_UNK_01aea300 + 0x1aea098);
          do {
            iVar1 = func_0x0152983c(iVar8,iVar10,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar8 + 0xc);
            if (*(int *)(iVar1 + 0x24) == iVar2) {
              if (0 < iVar7) {
                iVar7 = 0;
                do {
                  iVar10 = func_0x0152983c(iVar8,iVar7,*puVar12);
                  if (iVar10 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar10 + 0x24) <= iVar2) {
                    iVar10 = FUN_01ae9944(param_1);
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar10 + 0x10);
                    iVar10 = func_0x0152983c(iVar8,iVar7,*puVar12);
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    uVar9 = *(undefined4 *)(iVar10 + 0x24);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0f34(iVar1,uVar9,*puVar11);
                    if (iVar10 == 0) {
                      iVar10 = FUN_01ae9944(param_1);
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar1 = *(int *)(iVar10 + 0x10);
                      iVar10 = func_0x0152983c(iVar8,iVar7,*puVar12);
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      uVar9 = *(undefined4 *)(iVar10 + 0x24);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f05ac(iVar1,uVar9,**(undefined4 **)(_UNK_01aea304 + 0x1aea1d0));
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(iVar8 + 0xc));
              }
              FUN_01aea318(param_1);
              if (*(int *)(**(int **)(_UNK_01aea308 + 0x1aea1fc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01aea30c + 0x1aea218));
              piVar5 = *(int **)(_UNK_01aea310 + 0x1aea22c);
              iVar7 = *piVar5;
              if (*(int *)(iVar7 + 0x74) == 0) {
                func_0x014387a4();
                iVar7 = *piVar5;
              }
              iVar10 = **(int **)(_UNK_01aea314 + 0x1aea24c);
              iVar8 = *(int *)(iVar10 + 0x1c);
              uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x378);
              if (iVar8 == 0) {
                func_0x014909d8(iVar10);
                iVar8 = *(int *)(iVar10 + 0x1c);
              }
              iVar7 = *(int *)(iVar8 + 8);
              if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                iVar7 = func_0x0149097c();
              }
              if (*(int *)(iVar7 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
              if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                iVar7 = func_0x0149097c();
              }
              uVar4 = **(undefined4 **)(iVar7 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              puStack_20 = (undefined4 *)iStack_24;
              pcVar6 = (char *)(_UNK_029903f0 + 0x29901d4);
              iStack_24 = iVar2;
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
                func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
                func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
                func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
                *pcVar6 = '\x01';
              }
              uStack_28 = 0;
              uStack_2c = 0;
              iVar7 = func_0x02953fd4(0x226,0);
              if (iVar7 == 0) {
                iVar7 = *(int *)(iVar2 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x04753c80(iVar7,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
                iVar7 = 0;
                if (iVar8 != 0) {
                  iVar8 = *(int *)(iVar2 + 0x14);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = func_0x0475399c(iVar8,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
                  if (iVar8 != 0) {
                    iVar7 = *(int *)(iVar2 + 0x10);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f2f10(iVar7,0);
                    if (iVar7 == 0) {
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
                    func_0x0298fd74(uVar3,uVar9,uVar4);
                    iVar2 = *(int *)(iStack_24 + 0x18);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    func_0x03a39760(iVar2,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
                    func_0x010b8c68(&uStack_40);
                    iVar7 = 1;
                  }
                }
              }
              else {
                iVar7 = func_0x029540a4(0x226,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uStack_48 = 0;
                iVar7 = func_0x02871898(iVar7,iVar2,uVar9,uVar4);
              }
              return iVar7;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar7);
        }
      }
    }
    return iVar7;
  }
  return iVar7;
}


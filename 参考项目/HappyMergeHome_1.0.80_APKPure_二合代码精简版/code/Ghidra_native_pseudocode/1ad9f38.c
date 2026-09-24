
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ae9f38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01aea2d8 + 0x1ae9f54);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aea2dc + 0x1ae9f68));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2e0 + 0x1ae9f74));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2e4 + 0x1ae9f80));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2e8 + 0x1ae9f8c));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2ec + 0x1ae9f98));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2f0 + 0x1ae9fa4));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2f4 + 0x1ae9fb0));
    func_0x01438628(*(undefined4 *)(_UNK_01aea2f8 + 0x1ae9fbc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd2c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,param_2,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a2c(&puStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    iVar1 = func_0x024f56d0(iVar7,uVar8,&puStack_38,uVar4,0,0);
    return iVar1;
  }
  iVar7 = FUN_01ae9944(param_1);
  iVar1 = 0;
  if (iVar7 != 0) {
    iVar1 = FUN_01ae9944(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar10 = *(undefined4 **)(_UNK_01aea2fc + 0x1aea05c);
    iVar1 = func_0x024f0f34(iVar1,param_2,*puVar10);
    if (iVar1 == 0) {
      iVar7 = FUN_01ae9a14(param_1);
      iVar1 = 0;
      if ((iVar7 != 0) && (iVar1 = *(int *)(iVar7 + 0xc), 0 < iVar1)) {
        iVar9 = 0;
        puVar11 = *(undefined4 **)(_UNK_01aea300 + 0x1aea098);
        do {
          iVar2 = func_0x0152983c(iVar7,iVar9,*puVar11);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar7 + 0xc);
          if (*(int *)(iVar2 + 0x24) == param_2) {
            if (0 < iVar1) {
              iVar1 = 0;
              do {
                iVar9 = func_0x0152983c(iVar7,iVar1,*puVar11);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar9 + 0x24) <= param_2) {
                  iVar9 = FUN_01ae9944(param_1);
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar9 + 0x10);
                  iVar9 = func_0x0152983c(iVar7,iVar1,*puVar11);
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  uVar8 = *(undefined4 *)(iVar9 + 0x24);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = func_0x024f0f34(iVar2,uVar8,*puVar10);
                  if (iVar9 == 0) {
                    iVar9 = FUN_01ae9944(param_1);
                    if (iVar9 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar9 + 0x10);
                    iVar9 = func_0x0152983c(iVar7,iVar1,*puVar11);
                    if (iVar9 == 0) {
                      func_0x014388e4();
                    }
                    uVar8 = *(undefined4 *)(iVar9 + 0x24);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024f05ac(iVar2,uVar8,**(undefined4 **)(_UNK_01aea304 + 0x1aea1d0));
                  }
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < *(int *)(iVar7 + 0xc));
            }
            func_0x01aea318(param_1);
            if (*(int *)(**(int **)(_UNK_01aea308 + 0x1aea1fc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aea30c + 0x1aea218));
            piVar6 = *(int **)(_UNK_01aea310 + 0x1aea22c);
            iVar7 = *piVar6;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar6;
            }
            iVar2 = **(int **)(_UNK_01aea314 + 0x1aea24c);
            iVar9 = *(int *)(iVar2 + 0x1c);
            uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x378);
            if (iVar9 == 0) {
              func_0x014909d8(iVar2);
              iVar9 = *(int *)(iVar2 + 0x1c);
            }
            iVar7 = *(int *)(iVar9 + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            uVar4 = **(undefined4 **)(iVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
            if (*pcVar5 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar8,uVar4,0);
              func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
              func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
              func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
              *pcVar5 = '\x01';
            }
            uStack_28 = 0;
            uStack_2c = 0;
            iVar7 = func_0x02953fd4(0x226,0);
            if (iVar7 == 0) {
              iVar7 = *(int *)(iVar1 + 0x14);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar9 = func_0x04753c80(iVar7,uVar8,**(undefined4 **)(_UNK_02990404 + 0x2990298));
              iVar7 = 0;
              if (iVar9 != 0) {
                iVar9 = *(int *)(iVar1 + 0x14);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = func_0x0475399c(iVar9,uVar8,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
                if (iVar9 != 0) {
                  iVar7 = *(int *)(iVar1 + 0x10);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x024f2f10(iVar7,0);
                  if (iVar7 == 0) {
                    iVar7 = *(int *)(iVar1 + 0x10);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f2f20(iVar7,200,0);
                    if (iVar7 == 0) {
                      return 0;
                    }
                  }
                  puStack_34 = &uStack_28;
                  puStack_38 = &uStack_30;
                  puStack_3c = &stack0xffffffdc;
                  uStack_40 = 0;
                  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
                  func_0x0298fd74(uVar3,uVar8,uVar4);
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
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
              iVar7 = func_0x02871898(iVar7,iVar1,uVar8,uVar4);
            }
            return iVar7;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
    }
  }
  return iVar1;
}


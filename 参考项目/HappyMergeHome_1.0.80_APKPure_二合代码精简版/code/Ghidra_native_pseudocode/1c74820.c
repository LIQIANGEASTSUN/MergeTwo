
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c84820(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01c84c04 + 0x1c84838);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c84c08 + 0x1c8484c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c0c + 0x1c84858));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c10 + 0x1c84864));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c14 + 0x1c84870));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c18 + 0x1c8487c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c1c + 0x1c84888));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c20 + 0x1c84894));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c24 + 0x1c848a0));
    func_0x01438628(*(undefined4 *)(_UNK_01c84c28 + 0x1c848ac));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uVar2 = func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar4,0,0);
    return uVar2;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = (uint)*(byte *)(iVar1 + 0x20);
    if (uVar2 == 0) {
      iVar1 = 0;
      puVar11 = *(undefined4 **)(_UNK_01c84c2c + 0x1c84944);
      puVar12 = *(undefined4 **)(_UNK_01c84c30 + 0x1c8494c);
      do {
        iVar8 = FUN_01c733a0(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(uint *)(iVar8 + 0xc);
        if ((int)uVar2 <= iVar1) {
          return uVar2;
        }
        iVar8 = FUN_01c733a0(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x03b780b0(iVar8,iVar1,*puVar11);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar8 + 0x28) == '\0') {
          iVar5 = *(int *)(param_1 + 0x44);
          iVar10 = *(int *)(iVar8 + 0x1c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0x14) <= iVar10) {
            iVar5 = FUN_01c733a0(param_1);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x1c);
            uVar9 = *(undefined4 *)(iVar8 + 0x2c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0f34(iVar5,uVar9,*puVar12);
            if (iVar5 == 0) {
              func_0x026b0618(iVar8,1,0);
              iVar5 = FUN_01c733a0(param_1);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0x1c);
              uVar9 = *(undefined4 *)(iVar8 + 0x2c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x03b75ba0(iVar5,uVar9,**(undefined4 **)(_UNK_01c84c34 + 0x1c84a80));
              iVar5 = FUN_01c733a0(param_1);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0x1c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(param_1 + 0x44);
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar10 + 0x20) <= iVar5) {
                if (*(char *)(iVar8 + 0x10) == '\0') goto LAB_01c84af4;
LAB_01c84aec:
                func_0x01c84e9c(param_1);
LAB_01c84af4:
                iVar1 = FUN_01c733a0(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x026ae5fc(iVar1,1,0);
                if (*(int *)(**(int **)(_UNK_01c84c38 + 0x1c84b28) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c84c3c + 0x1c84b44));
                piVar7 = *(int **)(_UNK_01c84c40 + 0x1c84b58);
                iVar8 = *piVar7;
                if (*(int *)(iVar8 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar8 = *piVar7;
                }
                iVar10 = **(int **)(_UNK_01c84c44 + 0x1c84b78);
                iVar5 = *(int *)(iVar10 + 0x1c);
                uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x2d0);
                if (iVar5 == 0) {
                  func_0x014909d8(iVar10);
                  iVar5 = *(int *)(iVar10 + 0x1c);
                }
                iVar8 = *(int *)(iVar5 + 8);
                if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                  iVar8 = func_0x0149097c();
                }
                if (*(int *)(iVar8 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar8 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
                if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                  iVar8 = func_0x0149097c();
                }
                uVar4 = **(undefined4 **)(iVar8 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                pcVar6 = (char *)(_UNK_029903f0 + 0x29901d4);
                if (*pcVar6 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
                  func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
                  func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
                  func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
                  *pcVar6 = '\x01';
                }
                uStack_28 = 0;
                uStack_2c = 0;
                iVar8 = func_0x02953fd4(0x226,0);
                if (iVar8 == 0) {
                  iVar8 = *(int *)(iVar1 + 0x14);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = func_0x04753c80(iVar8,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
                  uVar2 = 0;
                  if (iVar8 != 0) {
                    iVar8 = *(int *)(iVar1 + 0x14);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = func_0x0475399c(iVar8,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc)
                                           );
                    if (iVar8 != 0) {
                      iVar8 = *(int *)(iVar1 + 0x10);
                      if (iVar8 == 0) {
                        func_0x014388e4();
                      }
                      iVar8 = func_0x024f2f10(iVar8,0);
                      if (iVar8 == 0) {
                        iVar8 = *(int *)(iVar1 + 0x10);
                        if (iVar8 == 0) {
                          func_0x014388e4();
                        }
                        iVar8 = func_0x024f2f20(iVar8,200,0);
                        if (iVar8 == 0) {
                          return 0;
                        }
                      }
                      puStack_34 = &uStack_28;
                      puStack_38 = &uStack_30;
                      puStack_3c = &stack0xffffffdc;
                      uStack_40 = 0;
                      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
                      func_0x0298fd74(uVar3,uVar9,uVar4);
                      iVar1 = *(int *)(iVar1 + 0x18);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
                      func_0x010b8c68(&uStack_40);
                      uVar2 = 1;
                    }
                  }
                }
                else {
                  iVar8 = func_0x029540a4(0x226,0);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uStack_48 = 0;
                  uVar2 = func_0x02871898(iVar8,iVar1,uVar9,uVar4);
                }
                return uVar2;
              }
              if (*(char *)(iVar8 + 0x10) != '\0') goto LAB_01c84aec;
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while( true );
    }
  }
  return uVar2;
}


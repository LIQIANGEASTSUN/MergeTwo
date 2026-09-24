
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01ae7090(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int unaff_r6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar11 = (char *)(_UNK_01ae7a34 + 0x1ae70a4);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a38 + 0x1ae70b8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a3c + 0x1ae70c4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a40 + 0x1ae70d0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a44 + 0x1ae70dc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a48 + 0x1ae70e8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a4c + 0x1ae70f4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a50 + 0x1ae7100));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a54 + 0x1ae710c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a58 + 0x1ae7118));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a5c + 0x1ae7124));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a60 + 0x1ae7130));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a64 + 0x1ae713c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a68 + 0x1ae7148));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a6c + 0x1ae7154));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a70 + 0x1ae7160));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a74 + 0x1ae716c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a78 + 0x1ae7178));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a7c + 0x1ae7184));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a80 + 0x1ae7190));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a84 + 0x1ae719c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a88 + 0x1ae71a8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a8c + 0x1ae71b4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a90 + 0x1ae71c0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a94 + 0x1ae71cc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a98 + 0x1ae71d8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7a9c + 0x1ae71e4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7aa0 + 0x1ae71f0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7aa4 + 0x1ae71fc));
    *pcVar11 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x02953fd4(0x189b,0);
  if (iVar3 == 0) {
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ae7aa8 + 0x1ae7274));
    func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01ae7aac + 0x1ae7288));
    iVar4 = FUN_01ae4524();
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x024ef08c(iVar4,**(undefined4 **)(_UNK_01ae7ab0 + 0x1ae72b0));
    iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01ae7ab4 + 0x1ae72c8));
    func_0x024f108c(iVar4,uVar5,**(undefined4 **)(_UNK_01ae7ab8 + 0x1ae72e0));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar12 = *(int *)(iVar4 + 0xc) - 1;
    if (-1 < (int)uVar12) {
      do {
        iVar6 = FUN_01ae4524();
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x0152983c(iVar4,uVar12,**(undefined4 **)(_UNK_01ae7abc + 0x1ae7330));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar5,**(undefined4 **)(_UNK_01ae7ac0 + 0x1ae735c));
        iVar7 = FUN_01ae6a18();
        if (iVar6 != 0) {
          if (iVar7 != 0) {
            unaff_r6 = *(int *)(iVar6 + 0x18);
          }
          if (iVar7 != 0 && unaff_r6 != 0) {
            iVar7 = 0;
            while( true ) {
              iVar13 = *(int *)(unaff_r6 + 0xc);
              if (iVar13 == 0) {
                func_0x014388e4();
                iVar8 = iRam0000000c;
                iVar13 = *(int *)(unaff_r6 + 0xc);
                if (iVar13 == 0) {
                  func_0x014388e4();
                  iVar13 = 0;
                }
              }
              else {
                iVar8 = *(int *)(iVar13 + 0xc);
              }
              if (iVar8 <= iVar7) break;
              uVar5 = func_0x024f05a4(iVar13,iVar7,**(undefined4 **)(_UNK_01ae7ac4 + 0x1ae73f0));
              iVar13 = *(int *)(unaff_r6 + 0x30);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              iVar13 = func_0x024f0f34(iVar13,uVar5,**(undefined4 **)(_UNK_01ae7ac8 + 0x1ae741c));
              if (iVar13 == 0) {
                iVar13 = *(int *)(unaff_r6 + 0x10);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar13 = func_0x024f0540(iVar13,uVar5,**(undefined4 **)(_UNK_01ae7acc + 0x1ae744c));
                if (iVar13 == 0) {
                  iVar13 = *(int *)(unaff_r6 + 0x10);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f10d0(iVar13,uVar5,0,**(undefined4 **)(_UNK_01ae7ad0 + 0x1ae7480));
                }
                iVar13 = *(int *)(unaff_r6 + 0x10);
                if (iVar13 == 0) {
                  func_0x014388e4();
                  iVar8 = func_0x024f05d4(0,uVar5,**(undefined4 **)(_UNK_01ae7ad8 + 0x1ae74c8));
                  func_0x014388e4();
                }
                else {
                  iVar8 = func_0x024f05d4(iVar13,uVar5,**(undefined4 **)(_UNK_01ae7ad4 + 0x1ae74a4))
                  ;
                }
                func_0x024f10d4(iVar13,uVar5,iVar8 + 1,**(undefined4 **)(_UNK_01ae7adc + 0x1ae74ec))
                ;
              }
              iVar7 = iVar7 + 1;
            }
            func_0x024f04c8(iVar13,**(undefined4 **)(_UNK_01ae7ae0 + 0x1ae7508));
            iVar7 = *(int *)(unaff_r6 + 0x10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x024f0ed8(&uStack_58,iVar7,**(undefined4 **)(_UNK_01ae7ae4 + 0x1ae7534));
            uStack_40 = uStack_58;
            uStack_3c = uStack_54;
            uStack_38 = uStack_50;
            iStack_34 = iStack_4c;
            uStack_30 = uStack_48;
            bVar1 = false;
            while (iVar13 = func_0x015144ec(&uStack_40,**(undefined4 **)(_UNK_01ae7af8 + 0x1ae7564))
                  , iVar7 = iStack_34, iVar13 != 0) {
              if (iStack_34 != 0xbb9) {
                iVar8 = *(int *)(unaff_r6 + 0x30);
                iVar13 = (int)uStack_30;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x024f0f34(iVar8,iVar7,**(undefined4 **)(_UNK_01ae7ae8 + 0x1ae75ac));
                if (iVar8 == 0) {
                  iVar8 = *(int *)(unaff_r6 + 0x48);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = func_0x024f0f34(iVar8,iVar7,**(undefined4 **)(_UNK_01ae7aec + 0x1ae75dc));
                  if (0 < iVar13 && iVar8 == 0) {
                    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01ae7af0 + 0x1ae7608));
                    func_0x02ca3c70(uVar5,iVar7,iVar13,0,0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = *(int *)(iVar3 + 8);
                    uVar14 = *(uint *)(iVar3 + 0xc);
                    piVar10 = *(int **)(_UNK_01ae7af4 + 0x1ae7658);
                    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                    iVar13 = *piVar10;
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar14 < *(uint *)(iVar7 + 0xc)) {
                      *(uint *)(iVar3 + 0xc) = uVar14 + 1;
                      bVar1 = true;
                      puVar9 = (undefined4 *)(iVar7 + uVar14 * 4 + 0x10);
                      *puVar9 = uVar5;
                      func_0x014385cc(puVar9,uVar5);
                    }
                    else {
                      bVar1 = true;
                      func_0x0152874c(iVar3,uVar5,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
                    }
                  }
                }
              }
            }
            func_0x024f0ee8(&uStack_40,**(undefined4 **)(_UNK_01ae7afc + 0x1ae76c4));
            iVar7 = *(int *)(unaff_r6 + 0x10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x024f0540(iVar7,0xbb9,**(undefined4 **)(_UNK_01ae7b04 + 0x1ae76ec));
            if (iVar7 != 0) {
              iVar7 = *(int *)(unaff_r6 + 0x10);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,0xbb9,**(undefined4 **)(_UNK_01ae7b08 + 0x1ae771c));
            }
            iVar6 = func_0x01ae7b30(iVar6);
            if (iVar6 == 0) {
              bVar2 = false;
            }
            else {
              if (*(int *)(iVar6 + 0xc) < 1) {
                bVar2 = false;
              }
              else {
                iVar7 = 0;
                bVar2 = false;
                do {
                  iVar8 = *(int *)(unaff_r6 + 0x30);
                  iVar13 = func_0x0152983c(iVar6,iVar7,**(undefined4 **)(_UNK_01ae7b10 + 0x1ae7760))
                  ;
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = *(undefined4 *)(iVar13 + 8);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar13 = func_0x024f0f34(iVar8,uVar5,**(undefined4 **)(_UNK_01ae7b14 + 0x1ae779c))
                  ;
                  if (iVar13 == 0) {
                    iVar8 = *(int *)(unaff_r6 + 0x48);
                    iVar13 = func_0x0152983c(iVar6,iVar7,
                                             **(undefined4 **)(_UNK_01ae7b18 + 0x1ae77bc));
                    if (iVar13 == 0) {
                      func_0x014388e4();
                    }
                    uVar5 = *(undefined4 *)(iVar13 + 8);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar13 = func_0x024f0f34(iVar8,uVar5,
                                             **(undefined4 **)(_UNK_01ae7b1c + 0x1ae77f8));
                    if (iVar13 == 0) {
                      iVar13 = func_0x0152983c(iVar6,iVar7,
                                               **(undefined4 **)(_UNK_01ae7b20 + 0x1ae7818));
                      if (iVar13 == 0) {
                        func_0x014388e4();
                      }
                      if (0 < *(int *)(iVar13 + 0xc)) {
                        uVar5 = func_0x0152983c(iVar6,iVar7,
                                                **(undefined4 **)(_UNK_01ae7b24 + 0x1ae784c));
                        if (iVar3 == 0) {
                          func_0x014388e4();
                        }
                        iVar13 = *(int *)(iVar3 + 8);
                        uVar14 = *(uint *)(iVar3 + 0xc);
                        piVar10 = *(int **)(_UNK_01ae7b28 + 0x1ae788c);
                        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                        iVar8 = *piVar10;
                        if (iVar13 == 0) {
                          func_0x014388e4();
                        }
                        if (uVar14 < *(uint *)(iVar13 + 0xc)) {
                          *(uint *)(iVar3 + 0xc) = uVar14 + 1;
                          puVar9 = (undefined4 *)(iVar13 + uVar14 * 4 + 0x10);
                          *puVar9 = uVar5;
                          func_0x014385cc(puVar9,uVar5);
                        }
                        else {
                          func_0x0152874c(iVar3,uVar5,
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
                        }
                        bVar2 = true;
                      }
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(iVar6 + 0xc));
              }
              iVar6 = *(int *)(unaff_r6 + 0x60);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x026ec720(iVar6,1,0);
            }
            if (bVar1 || bVar2) {
              func_0x026bfc74(unaff_r6,1,0);
            }
            else {
              iVar6 = *(int *)(unaff_r6 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x024f0570(iVar6,**(undefined4 **)(_UNK_01ae7b2c + 0x1ae797c));
            }
          }
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 < 0x80000000);
    }
  }
  else {
    iVar3 = func_0x029540a4(0x189b,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x028a054c(iVar3,0);
  }
  return iVar3;
}


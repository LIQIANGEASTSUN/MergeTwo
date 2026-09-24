
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314c6e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0314cf1c + 0x314c6fc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314cf20 + 0x314c710));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf24 + 0x314c71c));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf28 + 0x314c728));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf2c + 0x314c734));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf30 + 0x314c740));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf34 + 0x314c74c));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf38 + 0x314c758));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf3c + 0x314c764));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf40 + 0x314c770));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf44 + 0x314c77c));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf48 + 0x314c788));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf4c + 0x314c794));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf50 + 0x314c7a0));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf54 + 0x314c7ac));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf58 + 0x314c7b8));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf5c + 0x314c7c4));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf60 + 0x314c7d0));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf64 + 0x314c7dc));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf68 + 0x314c7e8));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf6c + 0x314c7f4));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf70 + 0x314c800));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf74 + 0x314c80c));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf78 + 0x314c818));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf7c + 0x314c824));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf80 + 0x314c830));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf84 + 0x314c83c));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf88 + 0x314c848));
    func_0x01438628(*(undefined4 *)(_UNK_0314cf8c + 0x314c854));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7a24,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0314cf90 + 0x314c8bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314cf94 + 0x314c8d8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0314cf98 + 0x314c8f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2fc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0314cf9c + 0x314c92c));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0314cfa0 + 0x314c944));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0314cfa4 + 0x314c95c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_0314cfa8 + 0x314c98c);
      do {
        if (*(int *)(**(int **)(_UNK_0314cfac + 0x314c998) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0314cfb0 + 0x314c9b4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0314cfb4 + 0x314c9d4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x2fc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_0314cfb8 + 0x314ca08));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_0314cfbc + 0x314ca34));
        if (*(int *)(**(int **)(_UNK_0314cfc0 + 0x314ca4c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0314ab38(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0314cfc4 + 0x314cac0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_0314cfc8 + 0x314cafc));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0314cfd4 + 0x314cb70) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_0314cfd8 + 0x314cb80)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0314cfdc + 0x314cbd4));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_0314cfe0 + 0x314cbe8));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_0314cfe4 + 0x314cc0c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_0314cfe8 + 0x314cc38));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0314cfec + 0x314cc6c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0314cff0 + 0x314cc8c));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_0314cff4 + 0x314cce8)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0314cff8 + 0x314cd28);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_0314cffc + 0x314cd7c));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_0314d008 + 0x314cdd4)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_0314d00c + 0x314ce00));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0314d010 + 0x314ce20));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_0314d014 + 0x314ce4c));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0314cfcc + 0x314cb1c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_0314cfd0 + 0x314cb58));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7a24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


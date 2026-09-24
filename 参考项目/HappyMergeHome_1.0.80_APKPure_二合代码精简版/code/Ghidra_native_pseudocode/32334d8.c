
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032434d8(undefined4 param_1,int param_2)

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
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_03243d10 + 0x32434f4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03243d14 + 0x3243508));
    func_0x01438628(*(undefined4 *)(_UNK_03243d18 + 0x3243514));
    func_0x01438628(*(undefined4 *)(_UNK_03243d1c + 0x3243520));
    func_0x01438628(*(undefined4 *)(_UNK_03243d20 + 0x324352c));
    func_0x01438628(*(undefined4 *)(_UNK_03243d24 + 0x3243538));
    func_0x01438628(*(undefined4 *)(_UNK_03243d28 + 0x3243544));
    func_0x01438628(*(undefined4 *)(_UNK_03243d2c + 0x3243550));
    func_0x01438628(*(undefined4 *)(_UNK_03243d30 + 0x324355c));
    func_0x01438628(*(undefined4 *)(_UNK_03243d34 + 0x3243568));
    func_0x01438628(*(undefined4 *)(_UNK_03243d38 + 0x3243574));
    func_0x01438628(*(undefined4 *)(_UNK_03243d3c + 0x3243580));
    func_0x01438628(*(undefined4 *)(_UNK_03243d40 + 0x324358c));
    func_0x01438628(*(undefined4 *)(_UNK_03243d44 + 0x3243598));
    func_0x01438628(*(undefined4 *)(_UNK_03243d48 + 0x32435a4));
    func_0x01438628(*(undefined4 *)(_UNK_03243d4c + 0x32435b0));
    func_0x01438628(*(undefined4 *)(_UNK_03243d50 + 0x32435bc));
    func_0x01438628(*(undefined4 *)(_UNK_03243d54 + 0x32435c8));
    func_0x01438628(*(undefined4 *)(_UNK_03243d58 + 0x32435d4));
    func_0x01438628(*(undefined4 *)(_UNK_03243d5c + 0x32435e0));
    func_0x01438628(*(undefined4 *)(_UNK_03243d60 + 0x32435ec));
    func_0x01438628(*(undefined4 *)(_UNK_03243d64 + 0x32435f8));
    func_0x01438628(*(undefined4 *)(_UNK_03243d68 + 0x3243604));
    func_0x01438628(*(undefined4 *)(_UNK_03243d6c + 0x3243610));
    func_0x01438628(*(undefined4 *)(_UNK_03243d70 + 0x324361c));
    func_0x01438628(*(undefined4 *)(_UNK_03243d74 + 0x3243628));
    func_0x01438628(*(undefined4 *)(_UNK_03243d78 + 0x3243634));
    func_0x01438628(*(undefined4 *)(_UNK_03243d7c + 0x3243640));
    func_0x01438628(*(undefined4 *)(_UNK_03243d80 + 0x324364c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7fe7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03243d84 + 0x32436b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03243d88 + 0x32436d0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03243d8c + 0x32436f0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03243d90 + 0x3243724));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03243d94 + 0x324373c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03243d98 + 0x3243754));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_03243d9c + 0x3243780);
      do {
        if (*(int *)(**(int **)(_UNK_03243da0 + 0x324378c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03243da4 + 0x32437a8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_03243da8 + 0x32437c8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x3a8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uVar9,**(undefined4 **)(_UNK_03243dac + 0x3243800));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_03243db0 + 0x324382c));
        if (*(int *)(**(int **)(_UNK_03243db4 + 0x3243844) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_03241924(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03243db8 + 0x32438b4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03243dbc + 0x32438f0));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_03243dc8 + 0x3243964) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03243dcc + 0x3243974));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03243dd0 + 0x32439c8));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03243dd4 + 0x32439dc));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_03243dd8 + 0x3243a00));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_03243ddc + 0x3243a2c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_03243de0 + 0x3243a60) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03243de4 + 0x3243a80));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_03243de8 + 0x3243adc)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_03243dec + 0x3243b1c);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar11 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
                        *(undefined4 *)(iVar7 + uVar10 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_03243df0 + 0x3243b70));
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
                    iVar11 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_03243dfc + 0x3243bc8)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x046c26fc(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_03243e00 + 0x3243bf4));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03243e04 + 0x3243c14));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar11,uVar2,**(undefined4 **)(_UNK_03243e08 + 0x3243c40));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03243dc0 + 0x3243910));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03243dc4 + 0x324394c));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7fe7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


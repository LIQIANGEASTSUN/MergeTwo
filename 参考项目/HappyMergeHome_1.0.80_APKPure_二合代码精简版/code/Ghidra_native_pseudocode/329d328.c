
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032ad328(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_032adb64 + 0x32ad344);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032adb68 + 0x32ad358));
    func_0x01438628(*(undefined4 *)(_UNK_032adb6c + 0x32ad364));
    func_0x01438628(*(undefined4 *)(_UNK_032adb70 + 0x32ad370));
    func_0x01438628(*(undefined4 *)(_UNK_032adb74 + 0x32ad37c));
    func_0x01438628(*(undefined4 *)(_UNK_032adb78 + 0x32ad388));
    func_0x01438628(*(undefined4 *)(_UNK_032adb7c + 0x32ad394));
    func_0x01438628(*(undefined4 *)(_UNK_032adb80 + 0x32ad3a0));
    func_0x01438628(*(undefined4 *)(_UNK_032adb84 + 0x32ad3ac));
    func_0x01438628(*(undefined4 *)(_UNK_032adb88 + 0x32ad3b8));
    func_0x01438628(*(undefined4 *)(_UNK_032adb8c + 0x32ad3c4));
    func_0x01438628(*(undefined4 *)(_UNK_032adb90 + 0x32ad3d0));
    func_0x01438628(*(undefined4 *)(_UNK_032adb94 + 0x32ad3dc));
    func_0x01438628(*(undefined4 *)(_UNK_032adb98 + 0x32ad3e8));
    func_0x01438628(*(undefined4 *)(_UNK_032adb9c + 0x32ad3f4));
    func_0x01438628(*(undefined4 *)(_UNK_032adba0 + 0x32ad400));
    func_0x01438628(*(undefined4 *)(_UNK_032adba4 + 0x32ad40c));
    func_0x01438628(*(undefined4 *)(_UNK_032adba8 + 0x32ad418));
    func_0x01438628(*(undefined4 *)(_UNK_032adbac + 0x32ad424));
    func_0x01438628(*(undefined4 *)(_UNK_032adbb0 + 0x32ad430));
    func_0x01438628(*(undefined4 *)(_UNK_032adbb4 + 0x32ad43c));
    func_0x01438628(*(undefined4 *)(_UNK_032adbb8 + 0x32ad448));
    func_0x01438628(*(undefined4 *)(_UNK_032adbbc + 0x32ad454));
    func_0x01438628(*(undefined4 *)(_UNK_032adbc0 + 0x32ad460));
    func_0x01438628(*(undefined4 *)(_UNK_032adbc4 + 0x32ad46c));
    func_0x01438628(*(undefined4 *)(_UNK_032adbc8 + 0x32ad478));
    func_0x01438628(*(undefined4 *)(_UNK_032adbcc + 0x32ad484));
    func_0x01438628(*(undefined4 *)(_UNK_032adbd0 + 0x32ad490));
    func_0x01438628(*(undefined4 *)(_UNK_032adbd4 + 0x32ad49c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8289,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032adbd8 + 0x32ad504) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032adbdc + 0x32ad520));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032adbe0 + 0x32ad540));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 600);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032adbe4 + 0x32ad574));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032adbe8 + 0x32ad58c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_032adbec + 0x32ad5a4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_032adbf0 + 0x32ad5d4);
      do {
        if (*(int *)(**(int **)(_UNK_032adbf4 + 0x32ad5e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032adbf8 + 0x32ad5fc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_032adbfc + 0x32ad61c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 600);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_032adc00 + 0x32ad650));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_032adc04 + 0x32ad67c));
        if (*(int *)(**(int **)(_UNK_032adc08 + 0x32ad694) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_032ac264(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_032adc0c + 0x32ad708));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_032adc10 + 0x32ad744));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_032adc1c + 0x32ad7b8) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_032adc20 + 0x32ad7c8)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032adc24 + 0x32ad81c));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_032adc28 + 0x32ad830));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_032adc2c + 0x32ad854));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_032adc30 + 0x32ad880));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_032adc34 + 0x32ad8b4) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_032adc38 + 0x32ad8d4));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_032adc3c + 0x32ad930)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_032adc40 + 0x32ad970);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_032adc44 + 0x32ad9c4));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_032adc50 + 0x32ada1c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_032adc54 + 0x32ada48));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_032adc58 + 0x32ada68));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_032adc5c + 0x32ada94));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_032adc14 + 0x32ad764));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_032adc18 + 0x32ad7a0));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8289,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


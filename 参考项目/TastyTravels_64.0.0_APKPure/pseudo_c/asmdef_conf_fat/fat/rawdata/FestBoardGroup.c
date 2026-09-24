/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FestBoardGroup$$.ctor RVA 0x1665e9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01675e9c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  pcVar5 = (char *)(_UNK_016760cc + 0x1675eb0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016760d0 + 0x1675ec4));
    func_0x01384978(*(undefined4 *)(_UNK_016760d4 + 0x1675ed0));
    func_0x01384978(*(undefined4 *)(_UNK_016760d8 + 0x1675edc));
    func_0x01384978(*(undefined4 *)(_UNK_016760dc + 0x1675ee8));
    func_0x01384978(*(undefined4 *)(_UNK_016760e0 + 0x1675ef4));
    func_0x01384978(*(undefined4 *)(_UNK_016760e4 + 0x1675f00));
    func_0x01384978(*(undefined4 *)(_UNK_016760e8 + 0x1675f0c));
    func_0x01384978(*(undefined4 *)(_UNK_016760ec + 0x1675f18));
    func_0x01384978(*(undefined4 *)(_UNK_016760f0 + 0x1675f24));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_016760f4 + 0x1675f38);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_016760f8 + 0x1675f4c);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  puVar3 = *(undefined4 **)(_UNK_016760fc + 0x1675f74);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_01676100 + 0x1675f8c));
  puVar3 = *(undefined4 **)(_UNK_01676104 + 0x1675fa0);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  puVar6 = *(undefined4 **)(_UNK_01676108 + 0x1675fb8);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar9 = *(int **)(_UNK_0167610c + 0x1675fc8);
  uVar2 = *puVar3;
  param_1[0xc] = iVar1;
  param_1[0xd] = *piVar9;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar3;
  iVar4 = *piVar9;
  param_1[0x10] = iVar1;
  param_1[0x11] = iVar4;
  param_1[0x12] = iVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0x13] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0x14] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0x15] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0x18] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar9 = *(int **)(_UNK_01676110 + 0x167608c);
  param_1[0x1a] = iVar1;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01676114 + 0x16760ac));
                    /* WARNING: Could not recover jumptable at 0x016760c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FestBoardGroup$$.ctor RVA 0x1666118 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01676118(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_01676350 + 0x1676130);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01676354 + 0x1676144));
    func_0x01384978(*(undefined4 *)(_UNK_01676358 + 0x1676150));
    func_0x01384978(*(undefined4 *)(_UNK_0167635c + 0x167615c));
    *pcVar4 = '\x01';
  }
  FUN_01675e9c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01676360 + 0x16761a0);
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_01676364 + 0x16761f4));
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  iVar5 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01676368 + 0x1676228);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  iVar5 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  iVar5 = *(int *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FestBoardGroup$$Clone RVA 0x166636c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0167636c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016763c0 + 0x1676380);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016763c4 + 0x1676394));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016763c8 + 0x16763a8));
  FUN_01676118(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FestBoardGroup$$ProxyInternalMergeFrom RVA 0x16663cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016763cc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_016769b8 + 0x16763e8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016769bc + 0x16763fc));
    func_0x01384978(*(undefined4 *)(_UNK_016769c0 + 0x1676408));
    func_0x01384978(*(undefined4 *)(_UNK_016769c4 + 0x1676414));
    func_0x01384978(*(undefined4 *)(_UNK_016769c8 + 0x1676420));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_016769cc + 0x1676450);
    puVar9 = *(undefined4 **)(_UNK_016769d0 + 0x1676458);
    do {
      if (uVar1 < 0x6b) {
        if (uVar1 < 0x39) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x12) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
LAB_01676868:
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_016769d4 + 0x1676888);
LAB_01676970:
              func_0x036520e8(iVar7,param_2,uVar2,*puVar4);
            }
            else {
              if (uVar1 != 0x18) goto LAB_0167678c;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else if (uVar1 < 0x29) {
            if (uVar1 == 0x22) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_01676868;
            }
            if (uVar1 != 0x28) goto LAB_0167678c;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else if (uVar1 == 0x32) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar7,param_2,uVar2,**(undefined4 **)(_UNK_016769d8 + 0x167690c));
          }
          else {
            if (uVar1 != 0x38) goto LAB_0167678c;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
        }
        else {
          if (0x52 < uVar1) {
            if (uVar1 < 0x5b) {
              if ((uVar1 | 2) == 0x5a) {
                iVar3 = *piVar8;
                iVar7 = *(int *)(param_1 + 0x3c);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar8;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
                goto LAB_016767c8;
              }
            }
            else {
              if (uVar1 == 0x62) {
                iVar3 = *piVar8;
                iVar7 = *(int *)(param_1 + 0x40);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar8;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
LAB_01676954:
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                puVar4 = *(undefined4 **)(_UNK_016769dc + 0x1676974);
                goto LAB_01676970;
              }
              if (uVar1 == 0x6a) {
                uVar2 = func_0x01484f98(param_2,iVar6,0);
                uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
                *(undefined4 *)(param_1 + 0x48) = uVar2;
                goto LAB_0167697c;
              }
            }
            goto LAB_0167678c;
          }
          if (uVar1 < 0x49) {
            if (uVar1 != 0x40) {
              if (uVar1 != 0x48) goto LAB_0167678c;
LAB_016767a4:
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x30);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_016767c8;
            }
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
            if (uVar1 == 0x4a) goto LAB_016767a4;
            if (uVar1 != 0x52) goto LAB_0167678c;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
        }
      }
      else if (uVar1 < 0x91) {
        if (uVar1 < 0x7b) {
          if (uVar1 < 0x73) {
            if ((uVar1 | 2) == 0x72) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x4c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
LAB_016767c8:
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x0364b0e0(iVar7,param_2,uVar2,*puVar9);
              goto LAB_0167697c;
            }
          }
          else if ((uVar1 | 2) == 0x7a) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x50);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
            goto LAB_016767c8;
          }
        }
        else if (uVar1 < 0x83) {
          if ((uVar1 | 2) == 0x82) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x54);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
            goto LAB_016767c8;
          }
        }
        else {
          if (uVar1 == 0x88) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x58) = uVar2;
            goto LAB_0167697c;
          }
          if (uVar1 == 0x90) goto LAB_01676700;
        }
LAB_0167678c:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      else if (uVar1 < 0xa9) {
        if (uVar1 < 0x99) {
          if (uVar1 == 0x92) {
LAB_01676700:
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x60);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28);
            goto LAB_016767c8;
          }
          if (uVar1 != 0x98) goto LAB_0167678c;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 100) = uVar2;
        }
        else {
          if (uVar1 == 0xa2) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x68);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2c);
            goto LAB_01676954;
          }
          if (uVar1 != 0xa8) goto LAB_0167678c;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
        }
      }
      else if (uVar1 < 0xbb) {
        if (uVar1 == 0xb0) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
        }
        else {
          if (uVar1 != 0xba) goto LAB_0167678c;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
      }
      else if (uVar1 == 0xc0) {
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 != 200) goto LAB_0167678c;
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
LAB_0167697c:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FestBoardGroup$$get_XXX_RowIdentifier RVA 0x16669e0 =====

undefined4 FUN_016769e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== fat.rawdata.FestBoardGroup$$set_XXX_RowIdentifier RVA 0x16669e8 =====

void FUN_016769e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// ===== fat.rawdata.FestBoardGroup$$.cctor RVA 0x16669f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016769f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01676bdc + 0x1676a04);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01676be0 + 0x1676a18));
    func_0x01384978(*(undefined4 *)(_UNK_01676be4 + 0x1676a24));
    func_0x01384978(*(undefined4 *)(_UNK_01676be8 + 0x1676a30));
    func_0x01384978(*(undefined4 *)(_UNK_01676bec + 0x1676a3c));
    func_0x01384978(*(undefined4 *)(_UNK_01676bf0 + 0x1676a48));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01676bf4 + 0x1676a5c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01676bf8 + 0x1676a6c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_01676bfc + 0x1676ac4),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01676c00 + 0x1676adc));
  func_0x0244f944(uVar3,uVar1,uVar2,0x32,**(undefined4 **)(_UNK_01676c04 + 0x1676afc));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = uVar1;
  uVar1 = func_0x0244f970(0x92,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x28) = uVar1;
  uVar1 = func_0x0244f954(0xa2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x2c) = uVar1;
  return;
}



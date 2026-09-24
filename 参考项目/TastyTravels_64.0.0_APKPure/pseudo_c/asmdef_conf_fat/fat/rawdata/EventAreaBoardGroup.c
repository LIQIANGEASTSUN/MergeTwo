/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventAreaBoardGroup$$.ctor RVA 0x194a020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195a020(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_0195a25c + 0x195a034);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195a260 + 0x195a048));
    func_0x01384978(*(undefined4 *)(_UNK_0195a264 + 0x195a054));
    func_0x01384978(*(undefined4 *)(_UNK_0195a268 + 0x195a060));
    func_0x01384978(*(undefined4 *)(_UNK_0195a26c + 0x195a06c));
    func_0x01384978(*(undefined4 *)(_UNK_0195a270 + 0x195a078));
    func_0x01384978(*(undefined4 *)(_UNK_0195a274 + 0x195a084));
    func_0x01384978(*(undefined4 *)(_UNK_0195a278 + 0x195a090));
    func_0x01384978(*(undefined4 *)(_UNK_0195a27c + 0x195a09c));
    func_0x01384978(*(undefined4 *)(_UNK_0195a280 + 0x195a0a8));
    *pcVar5 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_0195a284 + 0x195a0bc);
  iVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_0195a288 + 0x195a0d0);
  func_0x036542d8(iVar1,*puVar9);
  puVar6 = *(undefined4 **)(_UNK_0195a28c + 0x195a0e0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0195a290 + 0x195a0f8);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_0195a294 + 0x195a120);
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0195a298 + 0x195a138));
  uVar2 = *puVar8;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[0xd] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_0195a29c + 0x195a17c);
  param_1[0xf] = iVar1;
  uVar2 = *puVar8;
  param_1[0x10] = *piVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[0x12] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x13] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x14] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x15] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar8;
  param_1[0x17] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  piVar4 = *(int **)(_UNK_0195a2a0 + 0x195a21c);
  param_1[0x18] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0195a2a4 + 0x195a23c));
                    /* WARNING: Could not recover jumptable at 0x0195a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventAreaBoardGroup$$.ctor RVA 0x194a2a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195a2a8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0195a4f8 + 0x195a2c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195a4fc + 0x195a2d4));
    func_0x01384978(*(undefined4 *)(_UNK_0195a500 + 0x195a2e0));
    func_0x01384978(*(undefined4 *)(_UNK_0195a504 + 0x195a2ec));
    *pcVar5 = '\x01';
  }
  FUN_0195a020(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_0195a508 + 0x195a330);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0195a50c + 0x195a360);
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar6,**(undefined4 **)(_UNK_0195a510 + 0x195a3ac));
  iVar6 = *(int *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  iVar6 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventAreaBoardGroup$$Clone RVA 0x194a514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0195a514(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0195a568 + 0x195a528);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195a56c + 0x195a53c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0195a570 + 0x195a550));
  FUN_0195a2a8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventAreaBoardGroup$$ProxyInternalMergeFrom RVA 0x194a574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195a574(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_0195aaec + 0x195a590);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195aaf0 + 0x195a5a4));
    func_0x01384978(*(undefined4 *)(_UNK_0195aaf4 + 0x195a5b0));
    func_0x01384978(*(undefined4 *)(_UNK_0195aaf8 + 0x195a5bc));
    func_0x01384978(*(undefined4 *)(_UNK_0195aafc + 0x195a5c8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0195ab00 + 0x195a5f8);
    puVar8 = *(undefined4 **)(_UNK_0195ab04 + 0x195a600);
    puVar9 = *(undefined4 **)(_UNK_0195ab08 + 0x195a608);
    do {
      if (uVar1 < 0x5b) {
        if (uVar1 < 0x33) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar3;
            }
            else {
              if (uVar1 != 0x10) {
                if (uVar1 == 0x18) goto LAB_0195a938;
                goto LAB_0195a9b0;
              }
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x14) = uVar3;
            }
          }
          else if (uVar1 < 0x21) {
            if (uVar1 == 0x1a) {
LAB_0195a938:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x18);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
              goto LAB_0195a98c;
            }
            if (uVar1 != 0x20) goto LAB_0195a9b0;
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar3;
          }
          else {
            if (uVar1 != 0x28) {
              if (uVar1 == 0x32) {
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x34);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
                goto LAB_0195aa1c;
              }
              goto LAB_0195a9b0;
            }
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar3;
          }
          goto LAB_0195aa3c;
        }
        if (uVar1 < 0x4b) {
          if (uVar1 < 0x3b) {
            if ((uVar1 | 2) == 0x3a) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x3c);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
              goto LAB_0195a98c;
            }
          }
          else {
            if (uVar1 == 0x42) {
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
              *(undefined4 *)(param_1 + 0x40) = uVar3;
              goto LAB_0195aa3c;
            }
            if (uVar1 == 0x4a) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x48);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
              goto LAB_0195aa1c;
            }
          }
        }
        else if (uVar1 < 0x53) {
          if ((uVar1 | 2) == 0x52) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x4c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20);
LAB_0195a98c:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
            goto LAB_0195aa3c;
          }
        }
        else if ((uVar1 | 2) == 0x5a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x50);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24);
          goto LAB_0195a98c;
        }
LAB_0195a9b0:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
      else if (uVar1 < 0x81) {
        if (uVar1 < 0x69) {
          if (uVar1 == 0x60 || uVar1 == 0x62) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x54);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x28);
            goto LAB_0195a98c;
          }
          if (uVar1 == 0x68) goto LAB_0195a968;
          goto LAB_0195a9b0;
        }
        if (uVar1 < 0x71) {
          if (uVar1 == 0x6a) {
LAB_0195a968:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_0195a98c;
          }
          if (uVar1 != 0x70) goto LAB_0195a9b0;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
        }
        else {
          if (uVar1 != 0x78) {
            if (uVar1 == 0x80) goto LAB_0195a8b4;
            goto LAB_0195a9b0;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar3;
        }
      }
      else if (uVar1 < 0x9b) {
        if (uVar1 < 0x8b) {
          if (uVar1 == 0x82) {
LAB_0195a8b4:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x5c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x2c);
            goto LAB_0195a98c;
          }
          if (uVar1 == 0x8a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x60);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x30);
            goto LAB_0195aa1c;
          }
          goto LAB_0195a9b0;
        }
        if (uVar1 == 0x90) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 100) = uVar3;
        }
        else {
          if (uVar1 != 0x9a) goto LAB_0195a9b0;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034663ac(iVar6,param_2,uVar3,**(undefined4 **)(_UNK_0195ab0c + 0x195a860));
        }
      }
      else if (uVar1 < 0xa9) {
        if (uVar1 == 0xa2) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_0195aa1c:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
        }
        else {
          if (uVar1 != 0xa8) goto LAB_0195a9b0;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
      }
      else if (uVar1 == 0xb0) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
      }
      else {
        if (uVar1 != 0xb8) goto LAB_0195a9b0;
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x44) = uVar3;
      }
LAB_0195aa3c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventAreaBoardGroup$$get_XXX_RowIdentifier RVA 0x194ab10 =====

undefined4 FUN_0195ab10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== fat.rawdata.EventAreaBoardGroup$$set_XXX_RowIdentifier RVA 0x194ab18 =====

void FUN_0195ab18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== fat.rawdata.EventAreaBoardGroup$$.cctor RVA 0x194ab20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195ab20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0195ad24 + 0x195ab34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195ad28 + 0x195ab48));
    func_0x01384978(*(undefined4 *)(_UNK_0195ad2c + 0x195ab54));
    func_0x01384978(*(undefined4 *)(_UNK_0195ad30 + 0x195ab60));
    func_0x01384978(*(undefined4 *)(_UNK_0195ad34 + 0x195ab6c));
    func_0x01384978(*(undefined4 *)(_UNK_0195ad38 + 0x195ab78));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0195ad3c + 0x195ab8c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0195ad40 + 0x195ab9c);
  uVar1 = func_0x0244f954(0xa2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_0195ad44 + 0x195ac0c),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0195ad48 + 0x195ac24));
  func_0x0244f944(uVar3,uVar1,uVar2,0x9a,**(undefined4 **)(_UNK_0195ad4c + 0x195ac44));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = uVar1;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x28) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x2c) = uVar1;
  uVar1 = func_0x0244f954(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x30) = uVar1;
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeTapSource$$.ctor RVA 0x19240bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019340bc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01934298 + 0x19340d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0193429c + 0x19340e4));
    func_0x01384978(*(undefined4 *)(_UNK_019342a0 + 0x19340f0));
    func_0x01384978(*(undefined4 *)(_UNK_019342a4 + 0x19340fc));
    func_0x01384978(*(undefined4 *)(_UNK_019342a8 + 0x1934108));
    func_0x01384978(*(undefined4 *)(_UNK_019342ac + 0x1934114));
    func_0x01384978(*(undefined4 *)(_UNK_019342b0 + 0x1934120));
    func_0x01384978(*(undefined4 *)(_UNK_019342b4 + 0x193412c));
    func_0x01384978(*(undefined4 *)(_UNK_019342b8 + 0x1934138));
    func_0x01384978(*(undefined4 *)(_UNK_019342bc + 0x1934144));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019342c0 + 0x1934158));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_019342c4 + 0x193416c));
  puVar6 = *(undefined4 **)(_UNK_019342c8 + 0x1934180);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_019342cc + 0x1934198);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar8 = *(undefined4 **)(_UNK_019342d0 + 0x19341a8);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_019342d4 + 0x19341c0);
  func_0x034614f8(iVar1,*puVar9);
  uVar2 = *puVar8;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x12] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar8;
  param_1[0x13] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar9);
  piVar3 = *(int **)(_UNK_019342dc + 0x1934254);
  iVar4 = *(int *)(**(int **)(_UNK_019342d8 + 0x1934248) + 0x74);
  param_1[0x14] = iVar1;
  param_1[0x17] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019342e0 + 0x1934278));
                    /* WARNING: Could not recover jumptable at 0x01934294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeTapSource$$.ctor RVA 0x19242e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019342e4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  pcVar7 = (char *)(_UNK_019344e4 + 0x19342fc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019344e8 + 0x1934310));
    func_0x01384978(*(undefined4 *)(_UNK_019344ec + 0x193431c));
    func_0x01384978(*(undefined4 *)(_UNK_019344f0 + 0x1934328));
    *pcVar7 = '\x01';
  }
  FUN_019340bc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  iVar8 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar8,**(undefined4 **)(_UNK_019344f4 + 0x193436c));
  iVar8 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar13 = *(undefined4 **)(_UNK_019344f8 + 0x1934398);
  uVar4 = func_0x0364acbc(iVar8,*puVar13);
  iVar8 = *(int *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar12 = *(undefined4 **)(_UNK_019344fc + 0x19343c8);
  uVar4 = func_0x0345e8e4(iVar8,*puVar12);
  uVar3 = *(undefined2 *)(param_2 + 0x2c);
  uVar14 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  uVar1 = *(undefined1 *)(param_2 + 0x33);
  *(undefined2 *)(param_1 + 0x2c) = uVar3;
  iVar8 = *(int *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined1 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar14;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined1 *)(param_1 + 0x32) = uVar2;
  *(undefined1 *)(param_1 + 0x33) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar8,*puVar12);
  iVar8 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar8,*puVar13);
  uVar5 = *(undefined4 *)(param_2 + 0x40);
  uVar10 = *(undefined4 *)(param_2 + 0x44);
  iVar8 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar8,*puVar13);
  iVar8 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar8,*puVar13);
  iVar8 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar8,*puVar12);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 0x60);
  uVar10 = *(undefined4 *)(param_2 + 0x54);
  uVar14 = *(undefined4 *)(param_2 + 0x58);
  uVar11 = *(undefined4 *)(param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar10;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
  *(undefined4 *)(param_1 + 100) = uVar6;
  uVar4 = func_0x0244f914(uVar5,0);
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}



// ===== fat.rawdata.ComMergeTapSource$$Clone RVA 0x1924500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01934500(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01934554 + 0x1934514);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01934558 + 0x1934528));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0193455c + 0x193453c));
  FUN_019342e4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeTapSource$$ProxyInternalMergeFrom RVA 0x1924560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01934560(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_01934b9c + 0x193457c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01934ba0 + 0x1934590));
    func_0x01384978(*(undefined4 *)(_UNK_01934ba4 + 0x193459c));
    func_0x01384978(*(undefined4 *)(_UNK_01934ba8 + 0x19345a8));
    func_0x01384978(*(undefined4 *)(_UNK_01934bac + 0x19345b4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_01934bb0 + 0x19345e4);
    puVar9 = *(undefined4 **)(_UNK_01934bb4 + 0x19345ec);
    puVar7 = *(undefined4 **)(_UNK_01934bb8 + 0x19345f4);
    do {
      if (uVar1 < 0x81) {
        if (uVar1 < 0x41) {
          if (uVar1 < 0x21) {
            if (uVar1 < 0x11) {
              if (uVar1 == 8) {
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0xc) = uVar2;
              }
              else {
                if (uVar1 != 0x10) goto LAB_01934960;
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x10) = uVar2;
              }
            }
            else if (uVar1 == 0x1a) {
              iVar3 = *piVar8;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x036520e8(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_01934bbc + 0x1934af4));
            }
            else {
              if (uVar1 != 0x20) goto LAB_01934960;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar2;
            }
          }
          else if (uVar1 < 0x31) {
            if (uVar1 == 0x28) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x24) = uVar2;
            }
            else {
              if (uVar1 != 0x30) goto LAB_01934960;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x28) = uVar2;
            }
          }
          else if (uVar1 == 0x38) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x2c) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0x40) goto LAB_01934960;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
        }
        else if (uVar1 < 99) {
          if (uVar1 < 0x51) {
            if (uVar1 == 0x48) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x40) = uVar2;
            }
            else {
              if (uVar1 != 0x50) goto LAB_01934960;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x44) = uVar2;
            }
          }
          else {
            if ((uVar1 | 2) != 0x62) goto LAB_01934960;
            iVar3 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x48);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
LAB_0193499c:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar2,*puVar9);
          }
        }
        else {
          if (uVar1 < 0x6b) {
            if ((uVar1 | 2) == 0x6a) {
              iVar3 = *piVar8;
              iVar6 = *(int *)(param_1 + 0x4c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
              goto LAB_0193499c;
            }
            goto LAB_01934960;
          }
          if (uVar1 == 0x78) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x54) = uVar2;
          }
          else {
            if (uVar1 != 0x80) goto LAB_01934960;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar2;
          }
        }
      }
      else if (uVar1 < 0xbb) {
        if (uVar1 < 0xa1) {
          if (uVar1 < 0x91) {
            if (uVar1 == 0x8a) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
              *(undefined4 *)(param_1 + 0x5c) = uVar2;
            }
            else {
              if (uVar1 != 0x90) goto LAB_01934960;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x60) = uVar2;
            }
          }
          else if (uVar1 == 0x98) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 100) = uVar2;
          }
          else {
            if (uVar1 != 0xa0) goto LAB_01934960;
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x32) = lVar10 != 0;
          }
        }
        else {
          if (uVar1 < 0xb3) {
            if (uVar1 == 0xa8) {
              lVar10 = func_0x01484f88(param_2,iVar5,0);
              *(bool *)(param_1 + 0x30) = lVar10 != 0;
              goto LAB_019349bc;
            }
            if (uVar1 == 0xb2) {
              iVar3 = *piVar8;
              iVar6 = *(int *)(param_1 + 0x50);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
              goto LAB_01934880;
            }
          }
          else if ((uVar1 | 2) == 0xba) {
            iVar3 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            goto LAB_0193499c;
          }
LAB_01934960:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0xdb) {
        if (uVar1 < 0xcb) {
          if (uVar1 == 0xc0) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x2e) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0xca) goto LAB_01934960;
            iVar3 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_01934880:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x034604a8(iVar6,param_2,uVar2,*puVar7);
          }
        }
        else {
          if (uVar1 != 0xd0) {
            if (uVar1 == 0xda) {
              iVar3 = *piVar8;
              iVar6 = *(int *)(param_1 + 0x38);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_01934880;
            }
            goto LAB_01934960;
          }
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x31) = lVar10 != 0;
        }
      }
      else if (uVar1 < 0xf9) {
        if (uVar1 != 0xe0) {
          if (uVar1 != 0xf8) goto LAB_01934960;
LAB_01934978:
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x3c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
          goto LAB_0193499c;
        }
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x2d) = lVar10 != 0;
      }
      else {
        if (uVar1 == 0xfa) goto LAB_01934978;
        if (uVar1 == 0x100) {
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x2f) = lVar10 != 0;
        }
        else {
          if (uVar1 != 0x108) goto LAB_01934960;
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x33) = lVar10 != 0;
        }
      }
LAB_019349bc:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeTapSource$$get_XXX_RowIdentifier RVA 0x1924bc0 =====

undefined4 FUN_01934bc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== fat.rawdata.ComMergeTapSource$$set_XXX_RowIdentifier RVA 0x1924bc8 =====

void FUN_01934bc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeTapSource$$.cctor RVA 0x1924bd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01934bd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_01934de8 + 0x1934be4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01934dec + 0x1934bf8));
    func_0x01384978(*(undefined4 *)(_UNK_01934df0 + 0x1934c04));
    func_0x01384978(*(undefined4 *)(_UNK_01934df4 + 0x1934c10));
    func_0x01384978(*(undefined4 *)(_UNK_01934df8 + 0x1934c1c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01934dfc + 0x1934c30);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01934e00 + 0x1934c40);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0xba,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_01934e04 + 0x1934ca8);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01934e08 + 0x1934cc8);
  func_0x0244f990(uVar3,uVar1,uVar2,0xca,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0xda,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f970(0xfa,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0xb2,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar3;
  return;
}



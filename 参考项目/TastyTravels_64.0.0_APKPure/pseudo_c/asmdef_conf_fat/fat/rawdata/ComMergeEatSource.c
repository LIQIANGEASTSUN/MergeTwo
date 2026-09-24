/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeEatSource$$.ctor RVA 0x191f3a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192f3a4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_0192f560 + 0x192f3b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192f564 + 0x192f3cc));
    func_0x01384978(*(undefined4 *)(_UNK_0192f568 + 0x192f3d8));
    func_0x01384978(*(undefined4 *)(_UNK_0192f56c + 0x192f3e4));
    func_0x01384978(*(undefined4 *)(_UNK_0192f570 + 0x192f3f0));
    func_0x01384978(*(undefined4 *)(_UNK_0192f574 + 0x192f3fc));
    func_0x01384978(*(undefined4 *)(_UNK_0192f578 + 0x192f408));
    func_0x01384978(*(undefined4 *)(_UNK_0192f57c + 0x192f414));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0192f580 + 0x192f428);
  uVar1 = *puVar5;
  piVar7 = *(int **)(_UNK_0192f584 + 0x192f434);
  iVar2 = *piVar7;
  param_1[4] = iVar2;
  param_1[5] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  puVar6 = *(undefined4 **)(_UNK_0192f588 + 0x192f450);
  func_0x036542d8(iVar2,*puVar6);
  uVar1 = *puVar5;
  param_1[6] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar2,*puVar6);
  uVar1 = *puVar5;
  param_1[7] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar2,*puVar6);
  puVar6 = *(undefined4 **)(_UNK_0192f58c + 0x192f490);
  param_1[10] = iVar2;
  iVar2 = func_0x01384be4(*puVar6);
  puVar5 = *(undefined4 **)(_UNK_0192f590 + 0x192f4a8);
  func_0x0364cfb8(iVar2,*puVar5);
  uVar1 = *puVar6;
  param_1[0xc] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar2,*puVar5);
  uVar1 = *puVar6;
  param_1[0xd] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar2,*puVar5);
  uVar1 = *puVar6;
  param_1[0xe] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar2,*puVar5);
  uVar1 = *puVar6;
  iVar3 = *piVar7;
  param_1[0xf] = iVar2;
  param_1[0x10] = iVar3;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar2,*puVar5);
  piVar7 = *(int **)(_UNK_0192f594 + 0x192f520);
  param_1[0x12] = iVar2;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192f598 + 0x192f540));
                    /* WARNING: Could not recover jumptable at 0x0192f55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeEatSource$$.ctor RVA 0x191f59c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192f59c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0192f73c + 0x192f5b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192f740 + 0x192f5c8));
    func_0x01384978(*(undefined4 *)(_UNK_0192f744 + 0x192f5d4));
    *pcVar4 = '\x01';
  }
  FUN_0192f3a4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  iVar5 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0192f748 + 0x192f61c);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0192f74c + 0x192f694);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  iVar5 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeEatSource$$Clone RVA 0x191f750 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192f750(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192f7a4 + 0x192f764);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192f7a8 + 0x192f778));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192f7ac + 0x192f78c));
  FUN_0192f59c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeEatSource$$ProxyInternalMergeFrom RVA 0x191f7b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192f7b0(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_0192fbd0 + 0x192f7cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192fbd4 + 0x192f7e0));
    func_0x01384978(*(undefined4 *)(_UNK_0192fbd8 + 0x192f7ec));
    func_0x01384978(*(undefined4 *)(_UNK_0192fbdc + 0x192f7f8));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_0192fbe0 + 0x192f828);
    puVar9 = *(undefined4 **)(_UNK_0192fbe4 + 0x192f830);
    do {
      if (uVar1 < 0x4b) {
        if (uVar1 < 0x29) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x12) goto LAB_0192fadc;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
              *(undefined4 *)(param_1 + 0x10) = uVar2;
            }
          }
          else if (uVar1 == 0x1a) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else if (uVar1 == 0x22) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_0192fb44:
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_0192fbe8 + 0x192fb64);
LAB_0192fb60:
            func_0x036520e8(iVar7,param_2,uVar2,*puVar4);
          }
          else {
            if (uVar1 != 0x28) goto LAB_0192fadc;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
        }
        else if (uVar1 < 0x3b) {
          if (uVar1 == 0x30) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else {
            if (uVar1 == 0x3a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x28);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
              goto LAB_0192fb44;
            }
LAB_0192fadc:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x40) {
            if (uVar1 == 0x48 || uVar1 == 0x4a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x30);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_0192fa6c;
            }
            goto LAB_0192fadc;
          }
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x61) {
          if (uVar1 < 0x53) {
            if ((uVar1 | 2) == 0x52) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x34);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
              goto LAB_0192fa6c;
            }
          }
          else {
            if (uVar1 == 0x58 || uVar1 == 0x5a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x38);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
              goto LAB_0192fa6c;
            }
            if (uVar1 == 0x60) goto LAB_0192fa48;
          }
          goto LAB_0192fadc;
        }
        if (uVar1 < 0x71) {
          if (uVar1 != 0x62) {
            if (uVar1 == 0x6a) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
              *(undefined4 *)(param_1 + 0x40) = uVar2;
            }
            else {
              if (uVar1 != 0x70) goto LAB_0192fadc;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x44) = uVar2;
            }
            goto LAB_0192fbb0;
          }
LAB_0192fa48:
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x3c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
        }
        else {
          if (uVar1 != 0x78 && uVar1 != 0x7a) {
            if (uVar1 == 0x82) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x18);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0192fbec + 0x192fadc);
              goto LAB_0192fb60;
            }
            goto LAB_0192fadc;
          }
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x48);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
        }
LAB_0192fa6c:
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar7,param_2,uVar2,*puVar9);
      }
LAB_0192fbb0:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeEatSource$$get_XXX_RowIdentifier RVA 0x191fbf0 =====

undefined4 FUN_0192fbf0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.ComMergeEatSource$$set_XXX_RowIdentifier RVA 0x191fbf8 =====

void FUN_0192fbf8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeEatSource$$.cctor RVA 0x191fc00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192fc00(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192fd1c + 0x192fc10);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192fd20 + 0x192fc24));
    func_0x01384978(*(undefined4 *)(_UNK_0192fd24 + 0x192fc30));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192fd28 + 0x192fc44);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192fd2c + 0x192fc54);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x20) = uVar1;
  return;
}



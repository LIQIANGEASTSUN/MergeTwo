/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFarmBoardGroup$$.ctor RVA 0x196ed84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197ed84(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_0197ef4c + 0x197ed98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197ef50 + 0x197edac));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef54 + 0x197edb8));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef58 + 0x197edc4));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef5c + 0x197edd0));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef60 + 0x197eddc));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef64 + 0x197ede8));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef68 + 0x197edf4));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef6c + 0x197ee00));
    func_0x01384978(*(undefined4 *)(_UNK_0197ef70 + 0x197ee0c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197ef74 + 0x197ee20));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0197ef78 + 0x197ee34));
  puVar6 = *(undefined4 **)(_UNK_0197ef7c + 0x197ee48);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0197ef80 + 0x197ee60);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_0197ef84 + 0x197ee88);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0197ef88 + 0x197eea0));
  uVar2 = *puVar6;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_0197ef8c + 0x197eecc);
  param_1[0xd] = iVar1;
  uVar2 = *puVar6;
  param_1[0xe] = *piVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_0197ef90 + 0x197ef0c);
  param_1[0x11] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0197ef94 + 0x197ef2c));
                    /* WARNING: Could not recover jumptable at 0x0197ef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFarmBoardGroup$$.ctor RVA 0x196ef98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197ef98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_0197f140 + 0x197efb0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197f144 + 0x197efc4));
    func_0x01384978(*(undefined4 *)(_UNK_0197f148 + 0x197efd0));
    func_0x01384978(*(undefined4 *)(_UNK_0197f14c + 0x197efdc));
    *pcVar4 = '\x01';
  }
  FUN_0197ed84(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_0197f150 + 0x197f01c));
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0197f154 + 0x197f048);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x24) = uVar7;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_0197f158 + 0x197f09c));
  iVar5 = *(int *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFarmBoardGroup$$Clone RVA 0x196f15c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0197f15c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0197f1b0 + 0x197f170);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197f1b4 + 0x197f184));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197f1b8 + 0x197f198));
  FUN_0197ef98(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFarmBoardGroup$$ProxyInternalMergeFrom RVA 0x196f1bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197f1bc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0197f5d4 + 0x197f1d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197f5d8 + 0x197f1ec));
    func_0x01384978(*(undefined4 *)(_UNK_0197f5dc + 0x197f1f8));
    func_0x01384978(*(undefined4 *)(_UNK_0197f5e0 + 0x197f204));
    func_0x01384978(*(undefined4 *)(_UNK_0197f5e4 + 0x197f210));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0197f5e8 + 0x197f240);
    puVar8 = *(undefined4 **)(_UNK_0197f5ec + 0x197f248);
    puVar9 = *(undefined4 **)(_UNK_0197f5f0 + 0x197f250);
    do {
      if (uVar1 < 0x41) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar3;
            }
            else {
              if (uVar1 != 0x10) goto LAB_0197f4d8;
LAB_0197f3d8:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0197f4b4:
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
            }
          }
          else {
            if (uVar1 == 0x12) goto LAB_0197f3d8;
            if (uVar1 == 0x18) {
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar3;
            }
            else {
              if (uVar1 != 0x20) goto LAB_0197f4d8;
              uVar3 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x24) = uVar3;
            }
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x2a) {
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
            func_0x034663ac(iVar6,param_2,uVar3,*puVar9);
          }
          else {
            if (uVar1 != 0x30) goto LAB_0197f4d8;
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar3;
          }
        }
        else {
          if (uVar1 == 0x38 || uVar1 == 0x3a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x3c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
            goto LAB_0197f4b4;
          }
          if (uVar1 == 0x40) goto LAB_0197f490;
LAB_0197f4d8:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 < 0x61) {
        if (uVar1 < 0x49) {
          if (uVar1 == 0x42) {
LAB_0197f490:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x44);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
            goto LAB_0197f4b4;
          }
          if (uVar1 != 0x48) goto LAB_0197f4d8;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x48) = uVar3;
        }
        else if (uVar1 == 0x50) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar3;
        }
        else {
          if (uVar1 != 0x5a) {
            if (uVar1 == 0x60) goto LAB_0197f34c;
            goto LAB_0197f4d8;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar3,**(undefined4 **)(_UNK_0197f5f4 + 0x197f5a8));
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 == 0x62) {
LAB_0197f34c:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x34);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
          goto LAB_0197f4b4;
        }
        if (uVar1 != 0x6a) {
          if (uVar1 != 0x70) goto LAB_0197f4d8;
          goto LAB_0197f400;
        }
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
        *(undefined4 *)(param_1 + 0x38) = uVar3;
      }
      else {
        if (uVar1 == 0x72) {
LAB_0197f400:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_0197f4b4;
        }
        if (uVar1 == 0x78) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar3;
        }
        else {
          if (uVar1 != 0x80) goto LAB_0197f4d8;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar3;
        }
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFarmBoardGroup$$get_XXX_RowIdentifier RVA 0x196f5f8 =====

undefined4 FUN_0197f5f8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventFarmBoardGroup$$set_XXX_RowIdentifier RVA 0x196f600 =====

void FUN_0197f600(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventFarmBoardGroup$$.cctor RVA 0x196f608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197f608(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0197f794 + 0x197f61c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197f798 + 0x197f630));
    func_0x01384978(*(undefined4 *)(_UNK_0197f79c + 0x197f63c));
    func_0x01384978(*(undefined4 *)(_UNK_0197f7a0 + 0x197f648));
    func_0x01384978(*(undefined4 *)(_UNK_0197f7a4 + 0x197f654));
    func_0x01384978(*(undefined4 *)(_UNK_0197f7a8 + 0x197f660));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0197f7ac + 0x197f674);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0197f7b0 + 0x197f684);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_0197f7b4 + 0x197f6f4),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0197f7b8 + 0x197f70c));
  func_0x0244f944(uVar3,uVar1,uVar2,0x2a,**(undefined4 **)(_UNK_0197f7bc + 0x197f72c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeBoard$$.ctor RVA 0x16ae8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016be8a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_016bea18 + 0x16be8b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bea1c + 0x16be8c8));
    func_0x01384978(*(undefined4 *)(_UNK_016bea20 + 0x16be8d4));
    func_0x01384978(*(undefined4 *)(_UNK_016bea24 + 0x16be8e0));
    func_0x01384978(*(undefined4 *)(_UNK_016bea28 + 0x16be8ec));
    func_0x01384978(*(undefined4 *)(_UNK_016bea2c + 0x16be8f8));
    func_0x01384978(*(undefined4 *)(_UNK_016bea30 + 0x16be904));
    func_0x01384978(*(undefined4 *)(_UNK_016bea34 + 0x16be910));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_016bea38 + 0x16be924);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_016bea3c + 0x16be938);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  piVar8 = *(int **)(_UNK_016bea40 + 0x16be94c);
  param_1[4] = iVar1;
  iVar1 = *piVar8;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  iVar4 = *piVar8;
  param_1[8] = iVar1;
  param_1[0xe] = iVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  iVar4 = *piVar8;
  puVar6 = *(undefined4 **)(_UNK_016bea44 + 0x16be99c);
  param_1[0xf] = iVar1;
  param_1[0x10] = iVar4;
  uVar2 = *puVar6;
  param_1[0x11] = iVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016bea48 + 0x16be9bc));
  piVar3 = *(int **)(_UNK_016bea4c + 0x16be9d0);
  iVar4 = *piVar8;
  param_1[0x14] = iVar1;
  iVar1 = *piVar3;
  param_1[0x15] = iVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016bea50 + 0x16be9f8));
                    /* WARNING: Could not recover jumptable at 0x016bea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeBoard$$.ctor RVA 0x16aea54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bea54(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_016bebc0 + 0x16bea6c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bebc4 + 0x16bea80));
    func_0x01384978(*(undefined4 *)(_UNK_016bebc8 + 0x16bea8c));
    *pcVar7 = '\x01';
  }
  FUN_016be8a0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_016bebcc + 0x16bead0);
  uVar3 = func_0x03651cc4(iVar8,*puVar11);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  iVar8 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03651cc4(iVar8,*puVar11);
  iVar8 = *(int *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined1 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined1 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined1 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03651cc4(iVar8,*puVar11);
  iVar8 = *(int *)(param_2 + 0x50);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar1 = *(undefined1 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0364acbc(iVar8,**(undefined4 **)(_UNK_016bebd0 + 0x16beb88));
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar10 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = uVar10;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
  uVar3 = func_0x0244f914(uVar4,0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}



// ===== fat.rawdata.MergeBoard$$Clone RVA 0x16aebd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016bebd4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016bec28 + 0x16bebe8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bec2c + 0x16bebfc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016bec30 + 0x16bec10));
  FUN_016bea54(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeBoard$$ProxyInternalMergeFrom RVA 0x16aec34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bec34(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar3 = (char *)(_UNK_016bf114 + 0x16bec50);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bf118 + 0x16bec64));
    func_0x01384978(*(undefined4 *)(_UNK_016bf11c + 0x16bec70));
    func_0x01384978(*(undefined4 *)(_UNK_016bf120 + 0x16bec7c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016bf124 + 0x16becac);
    puVar8 = *(undefined4 **)(_UNK_016bf128 + 0x16becb4);
    puVar9 = *(undefined4 **)(_UNK_016bf12c + 0x16becbc);
    do {
      if (uVar1 < 0x5b) {
        if (uVar1 < 0x2b) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar4;
            }
            else {
              if (uVar1 == 0x12) {
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x10);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
                goto LAB_016bf07c;
              }
LAB_016beea8:
              uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar4;
            }
          }
          else if (uVar1 == 0x1a) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x14) = uVar4;
          }
          else if (uVar1 == 0x22) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar4;
          }
          else {
            if (uVar1 != 0x2a) goto LAB_016beea8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar4;
          }
        }
        else if (uVar1 < 0x43) {
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_016bf07c:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
          }
          else if (uVar1 == 0x38) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar4;
          }
          else {
            if (uVar1 != 0x42) goto LAB_016beea8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x38) = uVar4;
          }
        }
        else {
          if (uVar1 == 0x4a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x3c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_016bf07c;
          }
          if (uVar1 == 0x52) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x40) = uVar4;
          }
          else {
            if (uVar1 != 0x5a) goto LAB_016beea8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x44) = uVar4;
          }
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 < 0x71) {
          if (uVar1 == 0x60) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x4c) = uVar4;
          }
          else if (uVar1 == 0x68) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar4;
          }
          else {
            if (uVar1 != 0x70) goto LAB_016beea8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x5c) = uVar4;
          }
        }
        else if (uVar1 == 0x78) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x60) = uVar4;
        }
        else if (uVar1 == 0x80) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
        }
        else {
          if (uVar1 != 0x88) goto LAB_016beea8;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar4;
        }
      }
      else if (uVar1 < 0xa1) {
        if (uVar1 == 0x90) {
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x2c) = lVar10 != 0;
        }
        else {
          if (uVar1 != 0x98) {
            if (uVar1 != 0xa0) goto LAB_016beea8;
            goto LAB_016beec0;
          }
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x34) = lVar10 != 0;
        }
      }
      else if (uVar1 == 0xa2) {
LAB_016beec0:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x50);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
      }
      else if (uVar1 == 0xaa) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
      else {
        if (uVar1 != 0xb0) goto LAB_016beea8;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x48) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeBoard$$get_XXX_RowIdentifier RVA 0x16af130 =====

undefined4 FUN_016bf130(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== fat.rawdata.MergeBoard$$set_XXX_RowIdentifier RVA 0x16af138 =====

void FUN_016bf138(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== fat.rawdata.MergeBoard$$.cctor RVA 0x16af140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bf140(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016bf1fc + 0x16bf150);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bf200 + 0x16bf164));
    func_0x01384978(*(undefined4 *)(_UNK_016bf204 + 0x16bf170));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016bf208 + 0x16bf184);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016bf20c + 0x16bf194);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0xa2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeBoardEnergy$$.ctor RVA 0x16af6c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bf6c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016bf81c + 0x16bf6d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bf820 + 0x16bf6e8));
    func_0x01384978(*(undefined4 *)(_UNK_016bf824 + 0x16bf6f4));
    func_0x01384978(*(undefined4 *)(_UNK_016bf828 + 0x16bf700));
    func_0x01384978(*(undefined4 *)(_UNK_016bf82c + 0x16bf70c));
    func_0x01384978(*(undefined4 *)(_UNK_016bf830 + 0x16bf718));
    func_0x01384978(*(undefined4 *)(_UNK_016bf834 + 0x16bf724));
    func_0x01384978(*(undefined4 *)(_UNK_016bf838 + 0x16bf730));
    *pcVar4 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_016bf83c + 0x16bf744);
  iVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_016bf840 + 0x16bf758);
  func_0x036542d8(iVar1,*puVar9);
  puVar7 = *(undefined4 **)(_UNK_016bf844 + 0x16bf768);
  uVar2 = *puVar7;
  piVar5 = *(int **)(_UNK_016bf848 + 0x16bf774);
  param_1[4] = iVar1;
  iVar1 = *piVar5;
  param_1[7] = iVar1;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  puVar6 = *(undefined4 **)(_UNK_016bf84c + 0x16bf794);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar8;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar7;
  iVar3 = *piVar5;
  param_1[9] = iVar1;
  param_1[10] = iVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar5 = *(int **)(_UNK_016bf850 + 0x16bf7dc);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016bf854 + 0x16bf7fc));
                    /* WARNING: Could not recover jumptable at 0x016bf818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeBoardEnergy$$.ctor RVA 0x16af858 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bf858(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_016bf96c + 0x16bf870);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bf970 + 0x16bf884));
    func_0x01384978(*(undefined4 *)(_UNK_016bf974 + 0x16bf890));
    *pcVar5 = '\x01';
  }
  FUN_016bf6c0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_016bf978 + 0x16bf8d4);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016bf97c + 0x16bf904);
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeBoardEnergy$$Clone RVA 0x16af980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016bf980(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016bf9d4 + 0x16bf994);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bf9d8 + 0x16bf9a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016bf9dc + 0x16bf9bc));
  FUN_016bf858(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeBoardEnergy$$ProxyInternalMergeFrom RVA 0x16af9e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bf9e0(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_016bfcb0 + 0x16bf9fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bfcb4 + 0x16bfa10));
    func_0x01384978(*(undefined4 *)(_UNK_016bfcb8 + 0x16bfa1c));
    func_0x01384978(*(undefined4 *)(_UNK_016bfcbc + 0x16bfa28));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_016bfcc0 + 0x16bfa58);
    puVar9 = *(undefined4 **)(_UNK_016bfcc4 + 0x16bfa60);
    do {
      if (uVar1 < 0x2b) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x12) goto LAB_016bfba4;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x22) {
            if (uVar1 == 0x2a) {
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
              puVar4 = *(undefined4 **)(_UNK_016bfcc8 + 0x16bfb48);
              goto LAB_016bfc84;
            }
            goto LAB_016bfba4;
          }
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x3b) {
        if (uVar1 == 0x32) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else {
          if (uVar1 != 0x38 && uVar1 != 0x3a) goto LAB_016bfba4;
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
LAB_016bfb80:
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar7,param_2,uVar2,*puVar9);
        }
      }
      else if (uVar1 == 0x42) {
        iVar3 = *piVar8;
        iVar7 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar8;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        puVar4 = *(undefined4 **)(_UNK_016bfccc + 0x16bfc88);
LAB_016bfc84:
        func_0x036520e8(iVar7,param_2,uVar2,*puVar4);
      }
      else {
        if (uVar1 == 0x48 || uVar1 == 0x4a) {
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          goto LAB_016bfb80;
        }
LAB_016bfba4:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeBoardEnergy$$get_XXX_RowIdentifier RVA 0x16afcd0 =====

undefined4 FUN_016bfcd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.MergeBoardEnergy$$set_XXX_RowIdentifier RVA 0x16afcd8 =====

void FUN_016bfcd8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.MergeBoardEnergy$$.cctor RVA 0x16afce0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bfce0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016bfd9c + 0x16bfcf0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016bfda0 + 0x16bfd04));
    func_0x01384978(*(undefined4 *)(_UNK_016bfda4 + 0x16bfd10));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016bfda8 + 0x16bfd24);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016bfdac + 0x16bfd34);
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}



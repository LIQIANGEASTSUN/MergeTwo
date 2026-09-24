/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.IndepenBingoBoard$$.ctor RVA 0x168672c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169672c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01696894 + 0x1696740);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01696898 + 0x1696754));
    func_0x01384978(*(undefined4 *)(_UNK_0169689c + 0x1696760));
    func_0x01384978(*(undefined4 *)(_UNK_016968a0 + 0x169676c));
    func_0x01384978(*(undefined4 *)(_UNK_016968a4 + 0x1696778));
    func_0x01384978(*(undefined4 *)(_UNK_016968a8 + 0x1696784));
    func_0x01384978(*(undefined4 *)(_UNK_016968ac + 0x1696790));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_016968b0 + 0x16967a4);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_016968b4 + 0x16967b8);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_016968b8 + 0x16967e0);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016968bc + 0x16967f8));
  uVar2 = *puVar6;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_016968c0 + 0x1696854);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016968c4 + 0x1696874));
                    /* WARNING: Could not recover jumptable at 0x01696890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.IndepenBingoBoard$$.ctor RVA 0x16868c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016968c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01696a14 + 0x16968e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01696a18 + 0x16968f4));
    func_0x01384978(*(undefined4 *)(_UNK_01696a1c + 0x1696900));
    *pcVar4 = '\x01';
  }
  FUN_0169672c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01696a20 + 0x1696944);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_01696a24 + 0x1696990));
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.IndepenBingoBoard$$Clone RVA 0x1686a28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01696a28(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01696a7c + 0x1696a3c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01696a80 + 0x1696a50));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01696a84 + 0x1696a64));
  FUN_016968c8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.IndepenBingoBoard$$ProxyInternalMergeFrom RVA 0x1686a88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01696a88(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01696d20 + 0x1696aa4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01696d24 + 0x1696ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01696d28 + 0x1696ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01696d2c + 0x1696ad0));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01696d30 + 0x1696b00);
    puVar8 = *(undefined4 **)(_UNK_01696d34 + 0x1696b08);
    puVar9 = *(undefined4 **)(_UNK_01696d38 + 0x1696b10);
    do {
      if (uVar1 < 0x29) {
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
              goto LAB_01696ce0;
            }
LAB_01696c34:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else if (uVar1 == 0x18) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
        else {
          if (uVar1 != 0x20) {
            if (uVar1 == 0x28) goto LAB_01696bac;
            goto LAB_01696c34;
          }
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
        }
      }
      else {
        if (uVar1 < 0x33) {
          if (uVar1 == 0x2a) {
LAB_01696bac:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
            goto LAB_01696d00;
          }
          if (uVar1 != 0x32) goto LAB_01696c34;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else if (uVar1 == 0x3a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
        else if (uVar1 == 0x42) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
        }
        else {
          if (uVar1 != 0x4a) goto LAB_01696c34;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
LAB_01696ce0:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
      }
LAB_01696d00:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.IndepenBingoBoard$$get_XXX_RowIdentifier RVA 0x1686d3c =====

undefined4 FUN_01696d3c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.IndepenBingoBoard$$set_XXX_RowIdentifier RVA 0x1686d44 =====

void FUN_01696d44(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.IndepenBingoBoard$$.cctor RVA 0x1686d4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01696d4c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01696e38 + 0x1696d5c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01696e3c + 0x1696d70));
    func_0x01384978(*(undefined4 *)(_UNK_01696e40 + 0x1696d7c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01696e44 + 0x1696d90);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01696e48 + 0x1696da0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  return;
}



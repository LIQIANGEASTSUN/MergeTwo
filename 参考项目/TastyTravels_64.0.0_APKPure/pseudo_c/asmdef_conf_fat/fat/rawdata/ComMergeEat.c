/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeEat$$.ctor RVA 0x191e844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192e844(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0192e990 + 0x192e858);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192e994 + 0x192e86c));
    func_0x01384978(*(undefined4 *)(_UNK_0192e998 + 0x192e878));
    func_0x01384978(*(undefined4 *)(_UNK_0192e99c + 0x192e884));
    func_0x01384978(*(undefined4 *)(_UNK_0192e9a0 + 0x192e890));
    func_0x01384978(*(undefined4 *)(_UNK_0192e9a4 + 0x192e89c));
    func_0x01384978(*(undefined4 *)(_UNK_0192e9a8 + 0x192e8a8));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0192e9ac + 0x192e8bc);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0192e9b0 + 0x192e8d0);
  func_0x036542d8(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_0192e9b4 + 0x192e8e0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0192e9b8 + 0x192e8f8);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0192e9bc + 0x192e950);
  param_1[10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192e9c0 + 0x192e970));
                    /* WARNING: Could not recover jumptable at 0x0192e98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeEat$$.ctor RVA 0x191e9c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192e9c4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0192eaf8 + 0x192e9dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192eafc + 0x192e9f0));
    func_0x01384978(*(undefined4 *)(_UNK_0192eb00 + 0x192e9fc));
    *pcVar4 = '\x01';
  }
  FUN_0192e844(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0192eb04 + 0x192ea40);
  uVar2 = func_0x03651cc4(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0192eb08 + 0x192ea68);
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeEat$$Clone RVA 0x191eb0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192eb0c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192eb60 + 0x192eb20);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192eb64 + 0x192eb34));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192eb68 + 0x192eb48));
  FUN_0192e9c4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeEat$$ProxyInternalMergeFrom RVA 0x191eb6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192eb6c(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_0192ede0 + 0x192eb88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192ede4 + 0x192eb9c));
    func_0x01384978(*(undefined4 *)(_UNK_0192ede8 + 0x192eba8));
    func_0x01384978(*(undefined4 *)(_UNK_0192edec + 0x192ebb4));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192edf0 + 0x192ebe4);
    puVar8 = *(undefined4 **)(_UNK_0192edf4 + 0x192ebec);
    puVar9 = *(undefined4 **)(_UNK_0192edf8 + 0x192ebf4);
    do {
      if (uVar1 < 0x21) {
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
              goto LAB_0192ed88;
            }
LAB_0192ed4c:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else {
          if (uVar1 == 0x18 || uVar1 == 0x1a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_0192ece8;
          }
          if (uVar1 != 0x20) goto LAB_0192ed4c;
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x18) = lVar10 != 0;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
LAB_0192ed88:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
        else {
          if (uVar1 != 0x30 && uVar1 != 0x32) goto LAB_0192ed4c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
LAB_0192ece8:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
        }
      }
      else {
        if (uVar1 != 0x38) {
          if (uVar1 == 0x40 || uVar1 == 0x42) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
            goto LAB_0192ece8;
          }
          goto LAB_0192ed4c;
        }
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeEat$$get_XXX_RowIdentifier RVA 0x191edfc =====

undefined4 FUN_0192edfc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.ComMergeEat$$set_XXX_RowIdentifier RVA 0x191ee04 =====

void FUN_0192ee04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeEat$$.cctor RVA 0x191ee0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192ee0c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192eee0 + 0x192ee1c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192eee4 + 0x192ee30));
    func_0x01384978(*(undefined4 *)(_UNK_0192eee8 + 0x192ee3c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192eeec + 0x192ee50);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192eef0 + 0x192ee60);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}



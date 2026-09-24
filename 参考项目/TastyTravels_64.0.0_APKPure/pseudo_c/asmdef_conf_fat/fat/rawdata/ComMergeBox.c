/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeBox$$.ctor RVA 0x191bc3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192bc3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0192bd5c + 0x192bc50);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192bd60 + 0x192bc64));
    func_0x01384978(*(undefined4 *)(_UNK_0192bd64 + 0x192bc70));
    func_0x01384978(*(undefined4 *)(_UNK_0192bd68 + 0x192bc7c));
    func_0x01384978(*(undefined4 *)(_UNK_0192bd6c + 0x192bc88));
    func_0x01384978(*(undefined4 *)(_UNK_0192bd70 + 0x192bc94));
    func_0x01384978(*(undefined4 *)(_UNK_0192bd74 + 0x192bca0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192bd78 + 0x192bcb4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192bd7c + 0x192bcc8));
  puVar5 = *(undefined4 **)(_UNK_0192bd80 + 0x192bcdc);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0192bd84 + 0x192bcf4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0192bd88 + 0x192bd1c);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192bd8c + 0x192bd3c));
                    /* WARNING: Could not recover jumptable at 0x0192bd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeBox$$.ctor RVA 0x191bd90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192bd90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0192be7c + 0x192bda8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192be80 + 0x192bdbc));
    func_0x01384978(*(undefined4 *)(_UNK_0192be84 + 0x192bdc8));
    *pcVar3 = '\x01';
  }
  FUN_0192bc3c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0192be88 + 0x192be08));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0192be8c + 0x192be3c);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeBox$$Clone RVA 0x191be90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192be90(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192bee4 + 0x192bea4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192bee8 + 0x192beb8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192beec + 0x192becc));
  FUN_0192bd90(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeBox$$ProxyInternalMergeFrom RVA 0x191bef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192bef0(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_0192c0e0 + 0x192bf0c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192c0e4 + 0x192bf20));
    func_0x01384978(*(undefined4 *)(_UNK_0192c0e8 + 0x192bf2c));
    func_0x01384978(*(undefined4 *)(_UNK_0192c0ec + 0x192bf38));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192c0f0 + 0x192bf68);
    puVar8 = *(undefined4 **)(_UNK_0192c0f4 + 0x192bf70);
    puVar9 = *(undefined4 **)(_UNK_0192c0f8 + 0x192bf78);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 != 0x18) goto LAB_0192c00c;
LAB_0192c024:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0192c070:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x21) {
        if (uVar1 == 0x1a) goto LAB_0192c024;
        if (uVar1 == 0x20) goto LAB_0192c04c;
LAB_0192c00c:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      else {
        if (uVar1 == 0x22) {
LAB_0192c04c:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_0192c070;
        }
        if (uVar1 != 0x2a) goto LAB_0192c00c;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeBox$$get_XXX_RowIdentifier RVA 0x191c0fc =====

undefined4 FUN_0192c0fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComMergeBox$$set_XXX_RowIdentifier RVA 0x191c104 =====

void FUN_0192c104(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeBox$$.cctor RVA 0x191c10c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192c10c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192c1b0 + 0x192c11c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192c1b4 + 0x192c130));
    func_0x01384978(*(undefined4 *)(_UNK_0192c1b8 + 0x192c13c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192c1bc + 0x192c150);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192c1c0 + 0x192c160);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



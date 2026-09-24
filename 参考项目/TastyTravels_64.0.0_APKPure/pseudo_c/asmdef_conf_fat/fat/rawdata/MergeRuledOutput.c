/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeRuledOutput$$.ctor RVA 0x16db06c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eb06c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016eb18c + 0x16eb080);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eb190 + 0x16eb094));
    func_0x01384978(*(undefined4 *)(_UNK_016eb194 + 0x16eb0a0));
    func_0x01384978(*(undefined4 *)(_UNK_016eb198 + 0x16eb0ac));
    func_0x01384978(*(undefined4 *)(_UNK_016eb19c + 0x16eb0b8));
    func_0x01384978(*(undefined4 *)(_UNK_016eb1a0 + 0x16eb0c4));
    func_0x01384978(*(undefined4 *)(_UNK_016eb1a4 + 0x16eb0d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016eb1a8 + 0x16eb0e4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016eb1ac + 0x16eb0f8));
  puVar5 = *(undefined4 **)(_UNK_016eb1b0 + 0x16eb10c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016eb1b4 + 0x16eb124);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016eb1b8 + 0x16eb14c);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016eb1bc + 0x16eb16c));
                    /* WARNING: Could not recover jumptable at 0x016eb188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeRuledOutput$$.ctor RVA 0x16db1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eb1c0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_016eb2a4 + 0x16eb1d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eb2a8 + 0x16eb1ec));
    func_0x01384978(*(undefined4 *)(_UNK_016eb2ac + 0x16eb1f8));
    *pcVar3 = '\x01';
  }
  FUN_016eb06c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016eb2b0 + 0x16eb238));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_016eb2b4 + 0x16eb264);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeRuledOutput$$Clone RVA 0x16db2b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016eb2b8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016eb30c + 0x16eb2cc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eb310 + 0x16eb2e0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016eb314 + 0x16eb2f4));
  FUN_016eb1c0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeRuledOutput$$ProxyInternalMergeFrom RVA 0x16db318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eb318(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_016eb4d0 + 0x16eb334);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eb4d4 + 0x16eb348));
    func_0x01384978(*(undefined4 *)(_UNK_016eb4d8 + 0x16eb354));
    func_0x01384978(*(undefined4 *)(_UNK_016eb4dc + 0x16eb360));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016eb4e0 + 0x16eb390);
    puVar8 = *(undefined4 **)(_UNK_016eb4e4 + 0x16eb398);
    puVar9 = *(undefined4 **)(_UNK_016eb4e8 + 0x16eb3a0);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x10 || uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_016eb410;
          }
LAB_016eb484:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x18 || uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
LAB_016eb410:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
      }
      else {
        if (uVar1 != 0x22) goto LAB_016eb484;
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



// ===== fat.rawdata.MergeRuledOutput$$get_XXX_RowIdentifier RVA 0x16db4ec =====

undefined4 FUN_016eb4ec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.MergeRuledOutput$$set_XXX_RowIdentifier RVA 0x16db4f4 =====

void FUN_016eb4f4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.MergeRuledOutput$$.cctor RVA 0x16db4fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eb4fc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016eb5a0 + 0x16eb50c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eb5a4 + 0x16eb520));
    func_0x01384978(*(undefined4 *)(_UNK_016eb5a8 + 0x16eb52c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016eb5ac + 0x16eb540);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016eb5b0 + 0x16eb550);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



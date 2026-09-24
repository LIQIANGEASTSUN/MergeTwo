/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventIndepenBingoDetail$$.ctor RVA 0x15d01c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e01c4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_015e02d0 + 0x15e01d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e02d4 + 0x15e01ec));
    func_0x01384978(*(undefined4 *)(_UNK_015e02d8 + 0x15e01f8));
    func_0x01384978(*(undefined4 *)(_UNK_015e02dc + 0x15e0204));
    func_0x01384978(*(undefined4 *)(_UNK_015e02e0 + 0x15e0210));
    func_0x01384978(*(undefined4 *)(_UNK_015e02e4 + 0x15e021c));
    func_0x01384978(*(undefined4 *)(_UNK_015e02e8 + 0x15e0228));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015e02ec + 0x15e023c));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015e02f0 + 0x15e0250));
  puVar2 = *(undefined4 **)(_UNK_015e02f4 + 0x15e0264);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015e02f8 + 0x15e027c));
  piVar3 = *(int **)(_UNK_015e02fc + 0x15e0290);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015e0300 + 0x15e02b0));
                    /* WARNING: Could not recover jumptable at 0x015e02cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventIndepenBingoDetail$$.ctor RVA 0x15d0304 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0304(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_015e03d0 + 0x15e031c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e03d4 + 0x15e0330));
    func_0x01384978(*(undefined4 *)(_UNK_015e03d8 + 0x15e033c));
    *pcVar3 = '\x01';
  }
  FUN_015e01c4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,**(undefined4 **)(_UNK_015e03dc + 0x15e037c));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_015e03e0 + 0x15e03ac));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventIndepenBingoDetail$$Clone RVA 0x15d03e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015e03e4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015e0438 + 0x15e03f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e043c + 0x15e040c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015e0440 + 0x15e0420));
  FUN_015e0304(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventIndepenBingoDetail$$ProxyInternalMergeFrom RVA 0x15d0444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0444(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_015e05e8 + 0x15e0460);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e05ec + 0x15e0474));
    func_0x01384978(*(undefined4 *)(_UNK_015e05f0 + 0x15e0480));
    func_0x01384978(*(undefined4 *)(_UNK_015e05f4 + 0x15e048c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015e05f8 + 0x15e04bc);
    puVar8 = *(undefined4 **)(_UNK_015e05fc + 0x15e04c4);
    puVar9 = *(undefined4 **)(_UNK_015e0600 + 0x15e04cc);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_015e05b4:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18 || uVar1 == 0x1a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 != 0x22) goto LAB_015e05b4;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventIndepenBingoDetail$$get_XXX_RowIdentifier RVA 0x15d0604 =====

undefined4 FUN_015e0604(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.EventIndepenBingoDetail$$set_XXX_RowIdentifier RVA 0x15d060c =====

void FUN_015e060c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.EventIndepenBingoDetail$$.cctor RVA 0x15d0614 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0614(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015e06a0 + 0x15e0624);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e06a4 + 0x15e0638));
    func_0x01384978(*(undefined4 *)(_UNK_015e06a8 + 0x15e0644));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015e06ac + 0x15e0658);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015e06b0 + 0x15e0668);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.OrderReward$$.ctor RVA 0x170ae54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171ae54(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0171af30 + 0x171ae68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171af34 + 0x171ae7c));
    func_0x01384978(*(undefined4 *)(_UNK_0171af38 + 0x171ae88));
    func_0x01384978(*(undefined4 *)(_UNK_0171af3c + 0x171ae94));
    func_0x01384978(*(undefined4 *)(_UNK_0171af40 + 0x171aea0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0171af44 + 0x171aeb4);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0171af48 + 0x171aec8);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0171af4c + 0x171aef0);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0171af50 + 0x171af10));
                    /* WARNING: Could not recover jumptable at 0x0171af2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.OrderReward$$.ctor RVA 0x170af54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171af54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0171b004 + 0x171af6c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171b008 + 0x171af80));
    *pcVar3 = '\x01';
  }
  FUN_0171ae54(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0171b00c + 0x171afc4);
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.OrderReward$$Clone RVA 0x170b010 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0171b010(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0171b064 + 0x171b024);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171b068 + 0x171b038));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0171b06c + 0x171b04c));
  FUN_0171af54(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.OrderReward$$ProxyInternalMergeFrom RVA 0x170b070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171b070(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_0171b1a0 + 0x171b088);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171b1a4 + 0x171b09c));
    func_0x01384978(*(undefined4 *)(_UNK_0171b1a8 + 0x171b0a8));
    *pcVar2 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0171b1ac + 0x171b0c0);
  puVar6 = *(undefined4 **)(_UNK_0171b1b0 + 0x171b0c8);
  do {
    while (iVar1 = func_0x01484f58(param_2,param_2 + 8,0), iVar1 < 0x12) {
      if (iVar1 == 8) {
        uVar3 = func_0x01484f98(param_2,param_2 + 8,0);
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
      else {
        if (iVar1 == 0) {
          return;
        }
LAB_0171b184:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    if (iVar1 == 0x12) {
      iVar1 = *piVar5;
      iVar4 = *(int *)(param_1 + 0x14);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    else {
      if (iVar1 != 0x1a) goto LAB_0171b184;
      iVar1 = *piVar5;
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x036520e8(iVar4,param_2,uVar3,*puVar6);
  } while( true );
}



// ===== fat.rawdata.OrderReward$$get_XXX_RowIdentifier RVA 0x170b1b4 =====

undefined4 FUN_0171b1b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.OrderReward$$set_XXX_RowIdentifier RVA 0x170b1bc =====

void FUN_0171b1bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.OrderReward$$.cctor RVA 0x170b1c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171b1c4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0171b250 + 0x171b1d4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171b254 + 0x171b1e8));
    func_0x01384978(*(undefined4 *)(_UNK_0171b258 + 0x171b1f4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0171b25c + 0x171b208);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0171b260 + 0x171b218);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



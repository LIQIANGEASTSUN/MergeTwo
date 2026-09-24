/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventIndepenBingoRound$$.ctor RVA 0x15d0b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0b64(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_015e0c70 + 0x15e0b78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e0c74 + 0x15e0b8c));
    func_0x01384978(*(undefined4 *)(_UNK_015e0c78 + 0x15e0b98));
    func_0x01384978(*(undefined4 *)(_UNK_015e0c7c + 0x15e0ba4));
    func_0x01384978(*(undefined4 *)(_UNK_015e0c80 + 0x15e0bb0));
    func_0x01384978(*(undefined4 *)(_UNK_015e0c84 + 0x15e0bbc));
    func_0x01384978(*(undefined4 *)(_UNK_015e0c88 + 0x15e0bc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015e0c8c + 0x15e0bdc));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015e0c90 + 0x15e0bf0));
  puVar2 = *(undefined4 **)(_UNK_015e0c94 + 0x15e0c04);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015e0c98 + 0x15e0c1c));
  piVar3 = *(int **)(_UNK_015e0c9c + 0x15e0c30);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015e0ca0 + 0x15e0c50));
                    /* WARNING: Could not recover jumptable at 0x015e0c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventIndepenBingoRound$$.ctor RVA 0x15d0ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0ca4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_015e0d68 + 0x15e0cbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e0d6c + 0x15e0cd0));
    func_0x01384978(*(undefined4 *)(_UNK_015e0d70 + 0x15e0cdc));
    *pcVar3 = '\x01';
  }
  FUN_015e0b64(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,**(undefined4 **)(_UNK_015e0d74 + 0x15e0d1c));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_015e0d78 + 0x15e0d44));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventIndepenBingoRound$$Clone RVA 0x15d0d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015e0d7c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015e0dd0 + 0x15e0d90);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e0dd4 + 0x15e0da4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015e0dd8 + 0x15e0db8));
  FUN_015e0ca4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventIndepenBingoRound$$ProxyInternalMergeFrom RVA 0x15d0ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0ddc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015e0f68 + 0x15e0df8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e0f6c + 0x15e0e0c));
    func_0x01384978(*(undefined4 *)(_UNK_015e0f70 + 0x15e0e18));
    func_0x01384978(*(undefined4 *)(_UNK_015e0f74 + 0x15e0e24));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015e0f78 + 0x15e0e54);
    puVar8 = *(undefined4 **)(_UNK_015e0f7c + 0x15e0e5c);
    puVar9 = *(undefined4 **)(_UNK_015e0f80 + 0x15e0e64);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_015e0ed4;
LAB_015e0f1c:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_015e0ed4:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar3,*puVar8);
      }
      else {
        if (uVar1 != 0x1a) goto LAB_015e0f1c;
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
        func_0x0244f950(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventIndepenBingoRound$$get_XXX_RowIdentifier RVA 0x15d0f84 =====

undefined4 FUN_015e0f84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.EventIndepenBingoRound$$set_XXX_RowIdentifier RVA 0x15d0f8c =====

void FUN_015e0f8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.EventIndepenBingoRound$$.cctor RVA 0x15d0f94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015e0f94(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015e1020 + 0x15e0fa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015e1024 + 0x15e0fb8));
    func_0x01384978(*(undefined4 *)(_UNK_015e1028 + 0x15e0fc4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015e102c + 0x15e0fd8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015e1030 + 0x15e0fe8);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



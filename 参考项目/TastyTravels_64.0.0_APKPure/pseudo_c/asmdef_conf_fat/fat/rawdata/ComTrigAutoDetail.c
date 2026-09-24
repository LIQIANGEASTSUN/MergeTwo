/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComTrigAutoDetail$$.ctor RVA 0x1928b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01938b64(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01938c70 + 0x1938b78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01938c74 + 0x1938b8c));
    func_0x01384978(*(undefined4 *)(_UNK_01938c78 + 0x1938b98));
    func_0x01384978(*(undefined4 *)(_UNK_01938c7c + 0x1938ba4));
    func_0x01384978(*(undefined4 *)(_UNK_01938c80 + 0x1938bb0));
    func_0x01384978(*(undefined4 *)(_UNK_01938c84 + 0x1938bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01938c88 + 0x1938bc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01938c8c + 0x1938bdc));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01938c90 + 0x1938bf0));
  puVar2 = *(undefined4 **)(_UNK_01938c94 + 0x1938c04);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01938c98 + 0x1938c1c));
  piVar3 = *(int **)(_UNK_01938c9c + 0x1938c30);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01938ca0 + 0x1938c50));
                    /* WARNING: Could not recover jumptable at 0x01938c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComTrigAutoDetail$$.ctor RVA 0x1928ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01938ca4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01938d68 + 0x1938cbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01938d6c + 0x1938cd0));
    func_0x01384978(*(undefined4 *)(_UNK_01938d70 + 0x1938cdc));
    *pcVar3 = '\x01';
  }
  FUN_01938b64(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01938d74 + 0x1938d1c));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_01938d78 + 0x1938d44));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComTrigAutoDetail$$Clone RVA 0x1928d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01938d7c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01938dd0 + 0x1938d90);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01938dd4 + 0x1938da4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01938dd8 + 0x1938db8));
  FUN_01938ca4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComTrigAutoDetail$$ProxyInternalMergeFrom RVA 0x1928ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01938ddc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01938f68 + 0x1938df8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01938f6c + 0x1938e0c));
    func_0x01384978(*(undefined4 *)(_UNK_01938f70 + 0x1938e18));
    func_0x01384978(*(undefined4 *)(_UNK_01938f74 + 0x1938e24));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01938f78 + 0x1938e54);
    puVar8 = *(undefined4 **)(_UNK_01938f7c + 0x1938e5c);
    puVar9 = *(undefined4 **)(_UNK_01938f80 + 0x1938e64);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_01938ed4;
LAB_01938f1c:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_01938ed4:
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
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
      else {
        if (uVar1 != 0x22) goto LAB_01938f1c;
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
        func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComTrigAutoDetail$$get_XXX_RowIdentifier RVA 0x1928f84 =====

undefined4 FUN_01938f84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.ComTrigAutoDetail$$set_XXX_RowIdentifier RVA 0x1928f8c =====

void FUN_01938f8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.ComTrigAutoDetail$$.cctor RVA 0x1928f94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01938f94(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01939020 + 0x1938fa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939024 + 0x1938fb8));
    func_0x01384978(*(undefined4 *)(_UNK_01939028 + 0x1938fc4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0193902c + 0x1938fd8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01939030 + 0x1938fe8);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



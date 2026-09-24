/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeDifficulty$$.ctor RVA 0x16b2968 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2968(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016c2a44 + 0x16c297c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2a48 + 0x16c2990));
    func_0x01384978(*(undefined4 *)(_UNK_016c2a4c + 0x16c299c));
    func_0x01384978(*(undefined4 *)(_UNK_016c2a50 + 0x16c29a8));
    func_0x01384978(*(undefined4 *)(_UNK_016c2a54 + 0x16c29b4));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_016c2a58 + 0x16c29c8);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016c2a5c + 0x16c29dc);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016c2a60 + 0x16c2a04);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c2a64 + 0x16c2a24));
                    /* WARNING: Could not recover jumptable at 0x016c2a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeDifficulty$$.ctor RVA 0x16b2a68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2a68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_016c2b24 + 0x16c2a80);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2b28 + 0x16c2a94));
    *pcVar5 = '\x01';
  }
  FUN_016c2968(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016c2b2c + 0x16c2ad8);
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeDifficulty$$Clone RVA 0x16b2b30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c2b30(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c2b84 + 0x16c2b44);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2b88 + 0x16c2b58));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c2b8c + 0x16c2b6c));
  FUN_016c2a68(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeDifficulty$$ProxyInternalMergeFrom RVA 0x16b2b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2b90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_016c2d14 + 0x16c2ba8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2d18 + 0x16c2bbc));
    func_0x01384978(*(undefined4 *)(_UNK_016c2d1c + 0x16c2bc8));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c2d20 + 0x16c2bf8);
    puVar8 = *(undefined4 **)(_UNK_016c2d24 + 0x16c2c00);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x12) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_016c2c78:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
        else {
LAB_016c2c9c:
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
          if (uVar1 != 0x2a) goto LAB_016c2c9c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          goto LAB_016c2c78;
        }
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeDifficulty$$get_XXX_RowIdentifier RVA 0x16b2d28 =====

undefined4 FUN_016c2d28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.MergeDifficulty$$set_XXX_RowIdentifier RVA 0x16b2d30 =====

void FUN_016c2d30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.MergeDifficulty$$.cctor RVA 0x16b2d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2d38(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c2dc4 + 0x16c2d48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2dc8 + 0x16c2d5c));
    func_0x01384978(*(undefined4 *)(_UNK_016c2dcc + 0x16c2d68));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c2dd0 + 0x16c2d7c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c2dd4 + 0x16c2d8c);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



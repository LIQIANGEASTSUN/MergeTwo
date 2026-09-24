/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventTileBingoDetail$$.ctor RVA 0x16435c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016535c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016536cc + 0x16535d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016536d0 + 0x16535e8));
    func_0x01384978(*(undefined4 *)(_UNK_016536d4 + 0x16535f4));
    func_0x01384978(*(undefined4 *)(_UNK_016536d8 + 0x1653600));
    func_0x01384978(*(undefined4 *)(_UNK_016536dc + 0x165360c));
    func_0x01384978(*(undefined4 *)(_UNK_016536e0 + 0x1653618));
    func_0x01384978(*(undefined4 *)(_UNK_016536e4 + 0x1653624));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016536e8 + 0x1653638));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_016536ec + 0x165364c));
  puVar2 = *(undefined4 **)(_UNK_016536f0 + 0x1653660);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016536f4 + 0x1653678));
  piVar3 = *(int **)(_UNK_016536f8 + 0x165368c);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016536fc + 0x16536ac));
                    /* WARNING: Could not recover jumptable at 0x016536c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventTileBingoDetail$$.ctor RVA 0x1643700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653700(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_016537d4 + 0x1653718);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016537d8 + 0x165372c));
    func_0x01384978(*(undefined4 *)(_UNK_016537dc + 0x1653738));
    *pcVar4 = '\x01';
  }
  FUN_016535c0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_016537e0 + 0x1653778));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_016537e4 + 0x16537a8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventTileBingoDetail$$Clone RVA 0x16437e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016537e8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0165383c + 0x16537fc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01653840 + 0x1653810));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01653844 + 0x1653824));
  FUN_01653700(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventTileBingoDetail$$ProxyInternalMergeFrom RVA 0x1643848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653848(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01653a0c + 0x1653864);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01653a10 + 0x1653878));
    func_0x01384978(*(undefined4 *)(_UNK_01653a14 + 0x1653884));
    func_0x01384978(*(undefined4 *)(_UNK_01653a18 + 0x1653890));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01653a1c + 0x16538c0);
    puVar8 = *(undefined4 **)(_UNK_01653a20 + 0x16538c8);
    puVar9 = *(undefined4 **)(_UNK_01653a24 + 0x16538d0);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x12) {
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
          func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0x18) goto LAB_01653978;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else if (uVar1 == 0x20 || uVar1 == 0x22) {
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
        func_0x0364b0e0(iVar6,param_2,uVar2,*puVar9);
      }
      else if (uVar1 == 0x28) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
LAB_01653978:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventTileBingoDetail$$get_XXX_RowIdentifier RVA 0x1643a28 =====

undefined4 FUN_01653a28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventTileBingoDetail$$set_XXX_RowIdentifier RVA 0x1643a30 =====

void FUN_01653a30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventTileBingoDetail$$.cctor RVA 0x1643a38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653a38(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01653ac4 + 0x1653a48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01653ac8 + 0x1653a5c));
    func_0x01384978(*(undefined4 *)(_UNK_01653acc + 0x1653a68));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01653ad0 + 0x1653a7c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01653ad4 + 0x1653a8c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



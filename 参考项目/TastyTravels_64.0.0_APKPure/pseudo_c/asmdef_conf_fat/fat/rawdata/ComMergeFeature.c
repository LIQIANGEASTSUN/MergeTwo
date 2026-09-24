/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeFeature$$.ctor RVA 0x19201e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019301e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_019302a8 + 0x19301f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019302ac + 0x1930208));
    func_0x01384978(*(undefined4 *)(_UNK_019302b0 + 0x1930214));
    func_0x01384978(*(undefined4 *)(_UNK_019302b4 + 0x1930220));
    func_0x01384978(*(undefined4 *)(_UNK_019302b8 + 0x193022c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019302bc + 0x1930240));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_019302c0 + 0x1930254));
  piVar2 = *(int **)(_UNK_019302c4 + 0x1930268);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019302c8 + 0x1930288));
                    /* WARNING: Could not recover jumptable at 0x019302a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeFeature$$.ctor RVA 0x19202cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019302cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01930368 + 0x19302e4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0193036c + 0x19302f8));
    *pcVar5 = '\x01';
  }
  FUN_019301e0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01930370 + 0x1930338));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeFeature$$Clone RVA 0x1920374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01930374(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019303c8 + 0x1930388);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019303cc + 0x193039c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019303d0 + 0x19303b0));
  FUN_019302cc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeFeature$$ProxyInternalMergeFrom RVA 0x19203d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019303d4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01930528 + 0x19303ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0193052c + 0x1930400));
    func_0x01384978(*(undefined4 *)(_UNK_01930530 + 0x193040c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01930534 + 0x193043c);
    puVar8 = *(undefined4 **)(_UNK_01930538 + 0x1930444);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x12) {
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
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
        else {
LAB_019304c8:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x18) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      else {
        if (uVar1 != 0x20) goto LAB_019304c8;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeFeature$$get_XXX_RowIdentifier RVA 0x192053c =====

undefined4 FUN_0193053c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.ComMergeFeature$$set_XXX_RowIdentifier RVA 0x1920544 =====

void FUN_01930544(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeFeature$$.cctor RVA 0x192054c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0193054c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_019305c0 + 0x193055c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019305c4 + 0x1930570));
    func_0x01384978(*(undefined4 *)(_UNK_019305c8 + 0x193057c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_019305cc + 0x1930590);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_019305d0 + 0x19305a0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}



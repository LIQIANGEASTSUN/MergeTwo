/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineReward$$.ctor RVA 0x15eaf60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015faf60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_015fb058 + 0x15faf74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb05c + 0x15faf88));
    func_0x01384978(*(undefined4 *)(_UNK_015fb060 + 0x15faf94));
    func_0x01384978(*(undefined4 *)(_UNK_015fb064 + 0x15fafa0));
    func_0x01384978(*(undefined4 *)(_UNK_015fb068 + 0x15fafac));
    func_0x01384978(*(undefined4 *)(_UNK_015fb06c + 0x15fafb8));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_015fb070 + 0x15fafcc);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_015fb074 + 0x15fafe0);
  func_0x0244f948(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_015fb07c + 0x15fb014);
  iVar4 = *(int *)(**(int **)(_UNK_015fb078 + 0x15fb008) + 0x74);
  param_1[6] = iVar1;
  param_1[7] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015fb080 + 0x15fb038));
                    /* WARNING: Could not recover jumptable at 0x015fb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineReward$$.ctor RVA 0x15eb084 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fb084(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015fb144 + 0x15fb09c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb148 + 0x15fb0b0));
    *pcVar4 = '\x01';
  }
  FUN_015faf60(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015fb14c + 0x15fb0f4);
  uVar1 = func_0x0244f94c(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineReward$$Clone RVA 0x15eb150 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015fb150(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015fb1a4 + 0x15fb164);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb1a8 + 0x15fb178));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fb1ac + 0x15fb18c));
  FUN_015fb084(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineReward$$ProxyInternalMergeFrom RVA 0x15eb1b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fb1b0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_015fb348 + 0x15fb1c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb34c + 0x15fb1dc));
    func_0x01384978(*(undefined4 *)(_UNK_015fb350 + 0x15fb1e8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fb354 + 0x15fb218);
    puVar8 = *(undefined4 **)(_UNK_015fb358 + 0x15fb220);
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
LAB_015fb28c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else {
        if (uVar1 == 0x1a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        }
        else {
          if (uVar1 == 0x22) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
            goto LAB_015fb32c;
          }
          if (uVar1 != 0x2a) goto LAB_015fb28c;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
LAB_015fb32c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineReward$$get_XXX_RowIdentifier RVA 0x15eb35c =====

undefined4 FUN_015fb35c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventMineReward$$set_XXX_RowIdentifier RVA 0x15eb364 =====

void FUN_015fb364(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventMineReward$$.cctor RVA 0x15eb36c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fb36c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015fb3f8 + 0x15fb37c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb3fc + 0x15fb390));
    func_0x01384978(*(undefined4 *)(_UNK_015fb400 + 0x15fb39c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015fb404 + 0x15fb3b0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015fb408 + 0x15fb3c0);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



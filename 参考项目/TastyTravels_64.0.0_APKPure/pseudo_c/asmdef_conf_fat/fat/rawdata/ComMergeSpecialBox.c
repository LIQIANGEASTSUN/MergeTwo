/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeSpecialBox$$.ctor RVA 0x1923714 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01933714(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01933820 + 0x1933728);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933824 + 0x193373c));
    func_0x01384978(*(undefined4 *)(_UNK_01933828 + 0x1933748));
    func_0x01384978(*(undefined4 *)(_UNK_0193382c + 0x1933754));
    func_0x01384978(*(undefined4 *)(_UNK_01933830 + 0x1933760));
    func_0x01384978(*(undefined4 *)(_UNK_01933834 + 0x193376c));
    func_0x01384978(*(undefined4 *)(_UNK_01933838 + 0x1933778));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0193383c + 0x193378c));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01933840 + 0x19337a0));
  puVar2 = *(undefined4 **)(_UNK_01933844 + 0x19337b4);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01933848 + 0x19337cc));
  piVar3 = *(int **)(_UNK_0193384c + 0x19337e0);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01933850 + 0x1933800));
                    /* WARNING: Could not recover jumptable at 0x0193381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeSpecialBox$$.ctor RVA 0x1923854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01933854(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01933920 + 0x193386c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933924 + 0x1933880));
    func_0x01384978(*(undefined4 *)(_UNK_01933928 + 0x193388c));
    *pcVar4 = '\x01';
  }
  FUN_01933714(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_0193392c + 0x19338cc));
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_01933930 + 0x19338f4));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeSpecialBox$$Clone RVA 0x1923934 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01933934(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01933988 + 0x1933948);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0193398c + 0x193395c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01933990 + 0x1933970));
  FUN_01933854(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeSpecialBox$$ProxyInternalMergeFrom RVA 0x1923994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01933994(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01933b40 + 0x19339b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933b44 + 0x19339c4));
    func_0x01384978(*(undefined4 *)(_UNK_01933b48 + 0x19339d0));
    func_0x01384978(*(undefined4 *)(_UNK_01933b4c + 0x19339dc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01933b50 + 0x1933a0c);
    puVar8 = *(undefined4 **)(_UNK_01933b54 + 0x1933a14);
    puVar9 = *(undefined4 **)(_UNK_01933b58 + 0x1933a1c);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_01933a94;
LAB_01933adc:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_01933a94:
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
      else if (uVar1 == 0x18) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar3;
      }
      else {
        if (uVar1 != 0x22) goto LAB_01933adc;
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



// ===== fat.rawdata.ComMergeSpecialBox$$get_XXX_RowIdentifier RVA 0x1923b5c =====

undefined4 FUN_01933b5c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.ComMergeSpecialBox$$set_XXX_RowIdentifier RVA 0x1923b64 =====

void FUN_01933b64(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeSpecialBox$$.cctor RVA 0x1923b6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01933b6c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01933bf8 + 0x1933b7c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933bfc + 0x1933b90));
    func_0x01384978(*(undefined4 *)(_UNK_01933c00 + 0x1933b9c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01933c04 + 0x1933bb0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01933c08 + 0x1933bc0);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



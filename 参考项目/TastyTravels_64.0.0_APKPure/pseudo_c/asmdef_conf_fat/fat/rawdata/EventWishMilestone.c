/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishMilestone$$.ctor RVA 0x165c474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166c474(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0166c59c + 0x166c488);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166c5a0 + 0x166c49c));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5a4 + 0x166c4a8));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5a8 + 0x166c4b4));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5ac + 0x166c4c0));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5b0 + 0x166c4cc));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5b4 + 0x166c4d8));
    func_0x01384978(*(undefined4 *)(_UNK_0166c5b8 + 0x166c4e4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0166c5bc + 0x166c4f8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0166c5c0 + 0x166c50c));
  puVar2 = *(undefined4 **)(_UNK_0166c5c4 + 0x166c520);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0166c5c8 + 0x166c538));
  piVar3 = *(int **)(_UNK_0166c5d0 + 0x166c558);
  iVar4 = *(int *)(**(int **)(_UNK_0166c5cc + 0x166c54c) + 0x74);
  param_1[5] = iVar1;
  param_1[6] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0166c5d4 + 0x166c57c));
                    /* WARNING: Could not recover jumptable at 0x0166c598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishMilestone$$.ctor RVA 0x165c5d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166c5d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_0166c6a8 + 0x166c5f0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166c6ac + 0x166c604));
    func_0x01384978(*(undefined4 *)(_UNK_0166c6b0 + 0x166c610));
    *pcVar5 = '\x01';
  }
  FUN_0166c474(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0166c6b4 + 0x166c650));
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,**(undefined4 **)(_UNK_0166c6b8 + 0x166c678));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventWishMilestone$$Clone RVA 0x165c6bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0166c6bc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0166c710 + 0x166c6d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166c714 + 0x166c6e4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0166c718 + 0x166c6f8));
  FUN_0166c5d8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishMilestone$$ProxyInternalMergeFrom RVA 0x165c71c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166c71c(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_0166c91c + 0x166c738);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166c920 + 0x166c74c));
    func_0x01384978(*(undefined4 *)(_UNK_0166c924 + 0x166c758));
    func_0x01384978(*(undefined4 *)(_UNK_0166c928 + 0x166c764));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0166c92c + 0x166c794);
    puVar8 = *(undefined4 **)(_UNK_0166c930 + 0x166c79c);
    puVar9 = *(undefined4 **)(_UNK_0166c934 + 0x166c7a4);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 != 0x10 && uVar1 != 0x12) goto LAB_0166c88c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x21) {
        if (uVar1 == 0x18) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
        }
        else if (uVar1 == 0x20) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar4;
        }
        else {
LAB_0166c88c:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x2a) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
      }
      else {
        if (uVar1 != 0x32) goto LAB_0166c88c;
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



// ===== fat.rawdata.EventWishMilestone$$get_XXX_RowIdentifier RVA 0x165c938 =====

undefined4 FUN_0166c938(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.EventWishMilestone$$set_XXX_RowIdentifier RVA 0x165c940 =====

void FUN_0166c940(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.EventWishMilestone$$.cctor RVA 0x165c948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166c948(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0166c9d4 + 0x166c958);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166c9d8 + 0x166c96c));
    func_0x01384978(*(undefined4 *)(_UNK_0166c9dc + 0x166c978));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0166c9e0 + 0x166c98c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0166c9e4 + 0x166c99c);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



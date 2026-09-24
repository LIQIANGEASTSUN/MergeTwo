/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.GuideMerge$$.ctor RVA 0x168335c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169335c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0169347c + 0x1693370);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01693480 + 0x1693384));
    func_0x01384978(*(undefined4 *)(_UNK_01693484 + 0x1693390));
    func_0x01384978(*(undefined4 *)(_UNK_01693488 + 0x169339c));
    func_0x01384978(*(undefined4 *)(_UNK_0169348c + 0x16933a8));
    func_0x01384978(*(undefined4 *)(_UNK_01693490 + 0x16933b4));
    func_0x01384978(*(undefined4 *)(_UNK_01693494 + 0x16933c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01693498 + 0x16933d4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0169349c + 0x16933e8));
  puVar5 = *(undefined4 **)(_UNK_016934a0 + 0x16933fc);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016934a4 + 0x1693414);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016934a8 + 0x169343c);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016934ac + 0x169345c));
                    /* WARNING: Could not recover jumptable at 0x01693478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.GuideMerge$$.ctor RVA 0x16834b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016934b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_016935a0 + 0x16934c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016935a4 + 0x16934dc));
    func_0x01384978(*(undefined4 *)(_UNK_016935a8 + 0x16934e8));
    *pcVar5 = '\x01';
  }
  FUN_0169335c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_016935ac + 0x1693528));
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016935b0 + 0x1693554);
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.GuideMerge$$Clone RVA 0x16835b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016935b4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01693608 + 0x16935c8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169360c + 0x16935dc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01693610 + 0x16935f0));
  FUN_016934b0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.GuideMerge$$ProxyInternalMergeFrom RVA 0x1683614 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01693614(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01693820 + 0x1693630);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01693824 + 0x1693644));
    func_0x01384978(*(undefined4 *)(_UNK_01693828 + 0x1693650));
    func_0x01384978(*(undefined4 *)(_UNK_0169382c + 0x169365c));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01693830 + 0x169368c);
    puVar8 = *(undefined4 **)(_UNK_01693834 + 0x1693694);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else {
            if (uVar1 != 0x12) goto LAB_016937b8;
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar5,param_2,uVar6,**(undefined4 **)(_UNK_01693838 + 0x16936f4));
          }
        }
        else {
          if ((uVar1 | 2) != 0x1a) goto LAB_016937b8;
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0169376c:
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar5,param_2,uVar6,*puVar8);
        }
      }
      else if (uVar1 < 0x23) {
        if ((uVar1 | 2) == 0x22) {
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_0169376c;
        }
LAB_016937b8:
        uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar6;
      }
      else if (uVar1 == 0x28) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar6;
      }
      else {
        if (uVar1 != 0x30) goto LAB_016937b8;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x20) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.GuideMerge$$get_XXX_RowIdentifier RVA 0x168383c =====

undefined4 FUN_0169383c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.GuideMerge$$set_XXX_RowIdentifier RVA 0x1683844 =====

void FUN_01693844(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.GuideMerge$$.cctor RVA 0x168384c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169384c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016938f0 + 0x169385c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016938f4 + 0x1693870));
    func_0x01384978(*(undefined4 *)(_UNK_016938f8 + 0x169387c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016938fc + 0x1693890);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01693900 + 0x16938a0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



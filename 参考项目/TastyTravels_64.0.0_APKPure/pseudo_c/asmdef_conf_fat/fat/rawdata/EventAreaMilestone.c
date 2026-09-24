/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventAreaMilestone$$.ctor RVA 0x194c5b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195c5b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_0195c6b4 + 0x195c5cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195c6b8 + 0x195c5e0));
    func_0x01384978(*(undefined4 *)(_UNK_0195c6bc + 0x195c5ec));
    func_0x01384978(*(undefined4 *)(_UNK_0195c6c0 + 0x195c5f8));
    func_0x01384978(*(undefined4 *)(_UNK_0195c6c4 + 0x195c604));
    func_0x01384978(*(undefined4 *)(_UNK_0195c6c8 + 0x195c610));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0195c6cc + 0x195c624);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0195c6d0 + 0x195c638);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_0195c6d8 + 0x195c66c);
  iVar4 = *(int *)(**(int **)(_UNK_0195c6d4 + 0x195c660) + 0x74);
  param_1[5] = iVar1;
  iVar1 = *piVar3;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0195c6dc + 0x195c694));
                    /* WARNING: Could not recover jumptable at 0x0195c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventAreaMilestone$$.ctor RVA 0x194c6e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195c6e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_0195c79c + 0x195c6f8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195c7a0 + 0x195c70c));
    *pcVar5 = '\x01';
  }
  FUN_0195c5b8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0195c7a4 + 0x195c750);
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
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventAreaMilestone$$Clone RVA 0x194c7a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0195c7a8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0195c7fc + 0x195c7bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195c800 + 0x195c7d0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0195c804 + 0x195c7e4));
  FUN_0195c6e0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventAreaMilestone$$ProxyInternalMergeFrom RVA 0x194c808 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195c808(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0195c9d4 + 0x195c820);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195c9d8 + 0x195c834));
    func_0x01384978(*(undefined4 *)(_UNK_0195c9dc + 0x195c840));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0195c9e0 + 0x195c870);
    puVar8 = *(undefined4 **)(_UNK_0195c9e4 + 0x195c878);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x12) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_0195c928:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
LAB_0195c8ec:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x32) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x3a) {
          if (uVar1 != 0x4a) goto LAB_0195c8ec;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_0195c928;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventAreaMilestone$$get_XXX_RowIdentifier RVA 0x194c9e8 =====

undefined4 FUN_0195c9e8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.EventAreaMilestone$$set_XXX_RowIdentifier RVA 0x194c9f0 =====

void FUN_0195c9f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.EventAreaMilestone$$.cctor RVA 0x194c9f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0195c9f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0195ca84 + 0x195ca08);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0195ca88 + 0x195ca1c));
    func_0x01384978(*(undefined4 *)(_UNK_0195ca8c + 0x195ca28));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0195ca90 + 0x195ca3c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0195ca94 + 0x195ca4c);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



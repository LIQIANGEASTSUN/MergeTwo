/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeGridArea$$.ctor RVA 0x16b4578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4578(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016c46b4 + 0x16c458c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c46b8 + 0x16c45a0));
    func_0x01384978(*(undefined4 *)(_UNK_016c46bc + 0x16c45ac));
    func_0x01384978(*(undefined4 *)(_UNK_016c46c0 + 0x16c45b8));
    func_0x01384978(*(undefined4 *)(_UNK_016c46c4 + 0x16c45c4));
    func_0x01384978(*(undefined4 *)(_UNK_016c46c8 + 0x16c45d0));
    func_0x01384978(*(undefined4 *)(_UNK_016c46cc + 0x16c45dc));
    func_0x01384978(*(undefined4 *)(_UNK_016c46d0 + 0x16c45e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c46d4 + 0x16c45fc));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c46d8 + 0x16c4610));
  puVar5 = *(undefined4 **)(_UNK_016c46dc + 0x16c4624);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016c46e0 + 0x16c463c);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar2 = *(int **)(_UNK_016c46e4 + 0x16c464c);
  param_1[6] = iVar1;
  uVar3 = *puVar5;
  param_1[7] = *piVar2;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar2 = *(int **)(_UNK_016c46e8 + 0x16c4674);
  param_1[8] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c46ec + 0x16c4694));
                    /* WARNING: Could not recover jumptable at 0x016c46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeGridArea$$.ctor RVA 0x16b46f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c46f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_016c47e4 + 0x16c4708);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c47e8 + 0x16c471c));
    func_0x01384978(*(undefined4 *)(_UNK_016c47ec + 0x16c4728));
    *pcVar3 = '\x01';
  }
  FUN_016c4578(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016c47f0 + 0x16c4768));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_016c47f4 + 0x16c479c);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeGridArea$$Clone RVA 0x16b47f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c47f8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c484c + 0x16c480c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c4850 + 0x16c4820));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c4854 + 0x16c4834));
  FUN_016c46f0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeGridArea$$ProxyInternalMergeFrom RVA 0x16b4858 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4858(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016c4a80 + 0x16c4874);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c4a84 + 0x16c4888));
    func_0x01384978(*(undefined4 *)(_UNK_016c4a88 + 0x16c4894));
    func_0x01384978(*(undefined4 *)(_UNK_016c4a8c + 0x16c48a0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c4a90 + 0x16c48d0);
    puVar8 = *(undefined4 **)(_UNK_016c4a94 + 0x16c48d8);
    puVar9 = *(undefined4 **)(_UNK_016c4a98 + 0x16c48e0);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x19) {
          if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_016c49a0;
LAB_016c49b8:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_016c49dc:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
          }
        }
        else {
          if (uVar1 == 0x1a) goto LAB_016c49b8;
          if (uVar1 != 0x22) goto LAB_016c49a0;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x2b) {
        if ((uVar1 | 2) == 0x2a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          goto LAB_016c49dc;
        }
LAB_016c49a0:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      else if (uVar1 == 0x32) {
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
      }
      else {
        if (uVar1 != 0x38) goto LAB_016c49a0;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeGridArea$$get_XXX_RowIdentifier RVA 0x16b4a9c =====

undefined4 FUN_016c4a9c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.MergeGridArea$$set_XXX_RowIdentifier RVA 0x16b4aa4 =====

void FUN_016c4aa4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.MergeGridArea$$.cctor RVA 0x16b4aac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4aac(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c4b50 + 0x16c4abc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c4b54 + 0x16c4ad0));
    func_0x01384978(*(undefined4 *)(_UNK_016c4b58 + 0x16c4adc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c4b5c + 0x16c4af0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c4b60 + 0x16c4b00);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



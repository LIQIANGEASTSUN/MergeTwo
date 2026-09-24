/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineCartDrop$$.ctor RVA 0x15e4774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f4774(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015f4880 + 0x15f4788);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f4884 + 0x15f479c));
    func_0x01384978(*(undefined4 *)(_UNK_015f4888 + 0x15f47a8));
    func_0x01384978(*(undefined4 *)(_UNK_015f488c + 0x15f47b4));
    func_0x01384978(*(undefined4 *)(_UNK_015f4890 + 0x15f47c0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_015f4894 + 0x15f47d4);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f4898 + 0x15f47e8);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f489c + 0x15f4840);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f48a0 + 0x15f4860));
                    /* WARNING: Could not recover jumptable at 0x015f487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineCartDrop$$.ctor RVA 0x15e48a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f48a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_015f4994 + 0x15f48bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f4998 + 0x15f48d0));
    *pcVar3 = '\x01';
  }
  FUN_015f4774(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_015f499c + 0x15f4914);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineCartDrop$$Clone RVA 0x15e49a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f49a0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f49f4 + 0x15f49b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f49f8 + 0x15f49c8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f49fc + 0x15f49dc));
  FUN_015f48a4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineCartDrop$$ProxyInternalMergeFrom RVA 0x15e4a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f4a00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_015f4ba4 + 0x15f4a18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f4ba8 + 0x15f4a2c));
    func_0x01384978(*(undefined4 *)(_UNK_015f4bac + 0x15f4a38));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015f4bb0 + 0x15f4a68);
    puVar8 = *(undefined4 **)(_UNK_015f4bb4 + 0x15f4a70);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_015f4b68;
          }
LAB_015f4aec:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        if (uVar1 == 0x1a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        }
        else if (uVar1 == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x2a) goto LAB_015f4aec;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
LAB_015f4b68:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineCartDrop$$get_XXX_RowIdentifier RVA 0x15e4bb8 =====

undefined4 FUN_015f4bb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventMineCartDrop$$set_XXX_RowIdentifier RVA 0x15e4bc0 =====

void FUN_015f4bc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventMineCartDrop$$.cctor RVA 0x15e4bc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f4bc8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f4c84 + 0x15f4bd8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f4c88 + 0x15f4bec));
    func_0x01384978(*(undefined4 *)(_UNK_015f4c8c + 0x15f4bf8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f4c90 + 0x15f4c0c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f4c94 + 0x15f4c1c);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeChoiceBox$$.ctor RVA 0x191d220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192d220(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0192d340 + 0x192d234);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192d344 + 0x192d248));
    func_0x01384978(*(undefined4 *)(_UNK_0192d348 + 0x192d254));
    func_0x01384978(*(undefined4 *)(_UNK_0192d34c + 0x192d260));
    func_0x01384978(*(undefined4 *)(_UNK_0192d350 + 0x192d26c));
    func_0x01384978(*(undefined4 *)(_UNK_0192d354 + 0x192d278));
    func_0x01384978(*(undefined4 *)(_UNK_0192d358 + 0x192d284));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192d35c + 0x192d298));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192d360 + 0x192d2ac));
  puVar5 = *(undefined4 **)(_UNK_0192d364 + 0x192d2c0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0192d368 + 0x192d2d8);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0192d36c + 0x192d300);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192d370 + 0x192d320));
                    /* WARNING: Could not recover jumptable at 0x0192d33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeChoiceBox$$.ctor RVA 0x191d374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192d374(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0192d460 + 0x192d38c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192d464 + 0x192d3a0));
    func_0x01384978(*(undefined4 *)(_UNK_0192d468 + 0x192d3ac));
    *pcVar3 = '\x01';
  }
  FUN_0192d220(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0192d46c + 0x192d3ec));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0192d470 + 0x192d418);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeChoiceBox$$Clone RVA 0x191d474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192d474(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192d4c8 + 0x192d488);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192d4cc + 0x192d49c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192d4d0 + 0x192d4b0));
  FUN_0192d374(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeChoiceBox$$ProxyInternalMergeFrom RVA 0x191d4d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192d4d4(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_0192d6b4 + 0x192d4f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192d6b8 + 0x192d504));
    func_0x01384978(*(undefined4 *)(_UNK_0192d6bc + 0x192d510));
    func_0x01384978(*(undefined4 *)(_UNK_0192d6c0 + 0x192d51c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192d6c4 + 0x192d54c);
    puVar8 = *(undefined4 **)(_UNK_0192d6c8 + 0x192d554);
    puVar9 = *(undefined4 **)(_UNK_0192d6cc + 0x192d55c);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 != 0x10 && uVar1 != 0x12) goto LAB_0192d650;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0192d62c:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x23) {
        if (uVar1 == 0x18) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
        else {
          if (uVar1 != 0x22) goto LAB_0192d650;
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
      }
      else {
        if ((uVar1 | 2) == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_0192d62c;
        }
LAB_0192d650:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeChoiceBox$$get_XXX_RowIdentifier RVA 0x191d6d0 =====

undefined4 FUN_0192d6d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComMergeChoiceBox$$set_XXX_RowIdentifier RVA 0x191d6d8 =====

void FUN_0192d6d8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeChoiceBox$$.cctor RVA 0x191d6e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192d6e0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192d784 + 0x192d6f0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192d788 + 0x192d704));
    func_0x01384978(*(undefined4 *)(_UNK_0192d78c + 0x192d710));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192d790 + 0x192d724);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192d794 + 0x192d734);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



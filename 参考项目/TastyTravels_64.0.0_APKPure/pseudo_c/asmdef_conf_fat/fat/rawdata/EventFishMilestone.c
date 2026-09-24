/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFishMilestone$$.ctor RVA 0x15c8704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d8704(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_015d88a0 + 0x15d8718);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d88a4 + 0x15d872c));
    func_0x01384978(*(undefined4 *)(_UNK_015d88a8 + 0x15d8738));
    func_0x01384978(*(undefined4 *)(_UNK_015d88ac + 0x15d8744));
    func_0x01384978(*(undefined4 *)(_UNK_015d88b0 + 0x15d8750));
    func_0x01384978(*(undefined4 *)(_UNK_015d88b4 + 0x15d875c));
    func_0x01384978(*(undefined4 *)(_UNK_015d88b8 + 0x15d8768));
    func_0x01384978(*(undefined4 *)(_UNK_015d88bc + 0x15d8774));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_015d88c0 + 0x15d8788);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_015d88c4 + 0x15d879c);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  puVar3 = *(undefined4 **)(_UNK_015d88c8 + 0x15d880c);
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015d88cc + 0x15d8824));
  uVar2 = *puVar7;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  piVar4 = *(int **)(_UNK_015d88d4 + 0x15d885c);
  iVar5 = *(int *)(**(int **)(_UNK_015d88d0 + 0x15d8850) + 0x74);
  param_1[10] = iVar1;
  param_1[0xb] = *piVar4;
  if (iVar5 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015d88d8 + 0x15d8880));
                    /* WARNING: Could not recover jumptable at 0x015d889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFishMilestone$$.ctor RVA 0x15c88dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d88dc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_015d8a4c + 0x15d88f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d8a50 + 0x15d8908));
    func_0x01384978(*(undefined4 *)(_UNK_015d8a54 + 0x15d8914));
    *pcVar5 = '\x01';
  }
  FUN_015d8704(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015d8a58 + 0x15d8958);
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,**(undefined4 **)(_UNK_015d8a5c + 0x15d89fc));
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFishMilestone$$Clone RVA 0x15c8a60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015d8a60(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015d8ab4 + 0x15d8a74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d8ab8 + 0x15d8a88));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d8abc + 0x15d8a9c));
  FUN_015d88dc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFishMilestone$$ProxyInternalMergeFrom RVA 0x15c8ac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d8ac0(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_015d8dc0 + 0x15d8adc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d8dc4 + 0x15d8af0));
    func_0x01384978(*(undefined4 *)(_UNK_015d8dc8 + 0x15d8afc));
    func_0x01384978(*(undefined4 *)(_UNK_015d8dcc + 0x15d8b08));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015d8dd0 + 0x15d8b38);
    puVar8 = *(undefined4 **)(_UNK_015d8dd4 + 0x15d8b40);
    puVar9 = *(undefined4 **)(_UNK_015d8dd8 + 0x15d8b48);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x1b) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
            goto LAB_015d8d6c;
          }
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          }
          else {
            if (uVar1 != 0x1a) goto LAB_015d8c80;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          }
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
          if (uVar1 != 0x2a) {
            if (uVar1 == 0x30) goto LAB_015d8bf8;
LAB_015d8c80:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
            goto LAB_015d8d6c;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
LAB_015d8d4c:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
      }
      else if (uVar1 < 0x43) {
        if (uVar1 == 0x32) {
LAB_015d8bf8:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
        }
        else {
          if (uVar1 == 0x3a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
            goto LAB_015d8d4c;
          }
          if (uVar1 != 0x42) goto LAB_015d8c80;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar4;
        }
      }
      else if (uVar1 == 0x48) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
      }
      else {
        if (uVar1 != 0x50) {
          if (uVar1 != 0x62) goto LAB_015d8c80;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          goto LAB_015d8d4c;
        }
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x34) = uVar4;
      }
LAB_015d8d6c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFishMilestone$$get_XXX_RowIdentifier RVA 0x15c8ddc =====

undefined4 FUN_015d8ddc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== fat.rawdata.EventFishMilestone$$set_XXX_RowIdentifier RVA 0x15c8de4 =====

void FUN_015d8de4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== fat.rawdata.EventFishMilestone$$.cctor RVA 0x15c8dec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d8dec(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015d8ef0 + 0x15d8dfc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d8ef4 + 0x15d8e10));
    func_0x01384978(*(undefined4 *)(_UNK_015d8ef8 + 0x15d8e1c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015d8efc + 0x15d8e30);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015d8f00 + 0x15d8e40);
  uVar1 = func_0x0244f954(0x62,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  return;
}



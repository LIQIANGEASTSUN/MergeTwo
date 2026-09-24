/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventIndepenBingo$$.ctor RVA 0x15cf5ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015df5ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_015df6e4 + 0x15df600);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015df6e8 + 0x15df614));
    func_0x01384978(*(undefined4 *)(_UNK_015df6ec + 0x15df620));
    func_0x01384978(*(undefined4 *)(_UNK_015df6f0 + 0x15df62c));
    func_0x01384978(*(undefined4 *)(_UNK_015df6f4 + 0x15df638));
    func_0x01384978(*(undefined4 *)(_UNK_015df6f8 + 0x15df644));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_015df6fc + 0x15df658);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_015df700 + 0x15df66c);
  func_0x0244f948(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_015df708 + 0x15df6a0);
  iVar4 = *(int *)(**(int **)(_UNK_015df704 + 0x15df694) + 0x74);
  param_1[7] = iVar1;
  param_1[0x12] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015df70c + 0x15df6c4));
                    /* WARNING: Could not recover jumptable at 0x015df6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventIndepenBingo$$.ctor RVA 0x15cf710 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015df710(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar5 = (char *)(_UNK_015df808 + 0x15df728);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015df80c + 0x15df73c));
    *pcVar5 = '\x01';
  }
  FUN_015df5ec(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015df810 + 0x15df788);
  uVar2 = func_0x0244f94c(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar6,*puVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined2 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x4c);
  uVar9 = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = uVar8;
  *(undefined8 *)(param_1 + 0x54) = uVar9;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventIndepenBingo$$Clone RVA 0x15cf814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015df814(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015df868 + 0x15df828);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015df86c + 0x15df83c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015df870 + 0x15df850));
  FUN_015df710(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventIndepenBingo$$ProxyInternalMergeFrom RVA 0x15cf874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015df874(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_015dfc50 + 0x15df88c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015dfc54 + 0x15df8a0));
    func_0x01384978(*(undefined4 *)(_UNK_015dfc58 + 0x15df8ac));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015dfc5c + 0x15df8dc);
    puVar8 = *(undefined4 **)(_UNK_015dfc60 + 0x15df8e4);
    do {
      if (uVar1 < 0x61) {
        if (uVar1 < 0x31) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x18) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
            else {
LAB_015dfa9c:
              uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar2;
            }
          }
          else if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 != 0x30) goto LAB_015dfa9c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
        }
        else if (uVar1 < 0x43) {
          if (uVar1 == 0x38) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
          else {
            if (uVar1 != 0x42) goto LAB_015dfa9c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x48) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
        else if (uVar1 == 0x58) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
        else {
          if (uVar1 != 0x60) goto LAB_015dfa9c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 < 0x71) {
          if (uVar1 == 0x68) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar2;
          }
          else {
            if (uVar1 != 0x70) goto LAB_015dfa9c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
          }
        }
        else if (uVar1 == 0x78) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
        else if (uVar1 == 0x80) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
        else {
          if (uVar1 != 0x88) goto LAB_015dfa9c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
      }
      else if (uVar1 < 0xa1) {
        if (uVar1 == 0x90) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
        else if (uVar1 == 0x9a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_015dfc28:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0xa0) goto LAB_015dfa9c;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x34) = lVar9 != 0;
        }
      }
      else if (uVar1 == 0xa8) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x35) = lVar9 != 0;
      }
      else {
        if (uVar1 == 0xb2) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_015dfc28;
        }
        if (uVar1 != 0xb8) goto LAB_015dfa9c;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventIndepenBingo$$get_XXX_RowIdentifier RVA 0x15cfc64 =====

undefined4 FUN_015dfc64(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== fat.rawdata.EventIndepenBingo$$set_XXX_RowIdentifier RVA 0x15cfc6c =====

void FUN_015dfc6c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== fat.rawdata.EventIndepenBingo$$.cctor RVA 0x15cfc74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015dfc74(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015dfd00 + 0x15dfc84);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015dfd04 + 0x15dfc98));
    func_0x01384978(*(undefined4 *)(_UNK_015dfd08 + 0x15dfca4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015dfd0c + 0x15dfcb8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015dfd10 + 0x15dfcc8);
  uVar1 = func_0x0244f954(0xb2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x9a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



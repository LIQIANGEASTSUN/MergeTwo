/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ItemSkin$$.ctor RVA 0x168b4d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169b4d4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0169b5dc + 0x169b4e8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169b5e0 + 0x169b4fc));
    func_0x01384978(*(undefined4 *)(_UNK_0169b5e4 + 0x169b508));
    func_0x01384978(*(undefined4 *)(_UNK_0169b5e8 + 0x169b514));
    func_0x01384978(*(undefined4 *)(_UNK_0169b5ec + 0x169b520));
    func_0x01384978(*(undefined4 *)(_UNK_0169b5f0 + 0x169b52c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0169b5f4 + 0x169b540);
  iVar1 = func_0x01384be4(*puVar6);
  puVar8 = *(undefined4 **)(_UNK_0169b5f8 + 0x169b554);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar6;
  piVar7 = *(int **)(_UNK_0169b5fc + 0x169b568);
  param_1[4] = iVar1;
  param_1[5] = *piVar7;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_0169b600 + 0x169b58c);
  iVar4 = *piVar7;
  param_1[7] = iVar1;
  iVar1 = *piVar3;
  param_1[8] = iVar4;
  param_1[9] = iVar4;
  iVar1 = *(int *)(iVar1 + 0x74);
  param_1[10] = iVar4;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0169b604 + 0x169b5bc));
                    /* WARNING: Could not recover jumptable at 0x0169b5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ItemSkin$$.ctor RVA 0x168b608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169b608(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  pcVar5 = (char *)(_UNK_0169b6d4 + 0x169b620);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169b6d8 + 0x169b634));
    *pcVar5 = '\x01';
  }
  FUN_0169b4d4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_0169b6dc + 0x169b678);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ItemSkin$$Clone RVA 0x168b6e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0169b6e0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0169b734 + 0x169b6f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169b738 + 0x169b708));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0169b73c + 0x169b71c));
  FUN_0169b608(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ItemSkin$$ProxyInternalMergeFrom RVA 0x168b740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169b740(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_0169b9a4 + 0x169b758);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169b9a8 + 0x169b76c));
    func_0x01384978(*(undefined4 *)(_UNK_0169b9ac + 0x169b778));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0169b9b0 + 0x169b7a8);
    puVar8 = *(undefined4 **)(_UNK_0169b9b4 + 0x169b7b0);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else {
            if (uVar1 == 0x12) {
              iVar2 = *piVar7;
              iVar5 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
              goto LAB_0169b8e4;
            }
LAB_0169b890:
            uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar6;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x14) = uVar6;
        }
        else {
          if (uVar1 != 0x20) goto LAB_0169b890;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x18) = uVar6;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0169b8e4:
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar5,param_2,uVar6,*puVar8);
        }
        else {
          if (uVar1 != 0x32) goto LAB_0169b890;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x20) = uVar6;
        }
      }
      else if (uVar1 == 0x3a) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
        *(undefined4 *)(param_1 + 0x24) = uVar6;
      }
      else if (uVar1 == 0x42) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      else {
        if (uVar1 != 0x48) goto LAB_0169b890;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ItemSkin$$get_XXX_RowIdentifier RVA 0x168b9b8 =====

undefined4 FUN_0169b9b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.ItemSkin$$set_XXX_RowIdentifier RVA 0x168b9c0 =====

void FUN_0169b9c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.ItemSkin$$.cctor RVA 0x168b9c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169b9c8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0169ba54 + 0x169b9d8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169ba58 + 0x169b9ec));
    func_0x01384978(*(undefined4 *)(_UNK_0169ba5c + 0x169b9f8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0169ba60 + 0x169ba0c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0169ba64 + 0x169ba1c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}



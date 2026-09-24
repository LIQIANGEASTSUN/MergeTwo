/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFarmItemDrop$$.ctor RVA 0x19718cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019818cc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_019819c0 + 0x19818e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019819c4 + 0x19818f4));
    func_0x01384978(*(undefined4 *)(_UNK_019819c8 + 0x1981900));
    func_0x01384978(*(undefined4 *)(_UNK_019819cc + 0x198190c));
    func_0x01384978(*(undefined4 *)(_UNK_019819d0 + 0x1981918));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_019819d4 + 0x198192c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_019819d8 + 0x1981940);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_019819dc + 0x1981980);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019819e0 + 0x19819a0));
                    /* WARNING: Could not recover jumptable at 0x019819bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFarmItemDrop$$.ctor RVA 0x19719e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019819e4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01981ac8 + 0x19819fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01981acc + 0x1981a10));
    *pcVar5 = '\x01';
  }
  FUN_019818cc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01981ad0 + 0x1981a54);
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFarmItemDrop$$Clone RVA 0x1971ad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01981ad4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01981b28 + 0x1981ae8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01981b2c + 0x1981afc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01981b30 + 0x1981b10));
  FUN_019819e4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFarmItemDrop$$ProxyInternalMergeFrom RVA 0x1971b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01981b34(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01981d10 + 0x1981b4c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01981d14 + 0x1981b60));
    func_0x01384978(*(undefined4 *)(_UNK_01981d18 + 0x1981b6c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01981d1c + 0x1981b9c);
    puVar8 = *(undefined4 **)(_UNK_01981d20 + 0x1981ba4);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          }
          else {
            if (uVar1 != 0x1a) goto LAB_01981c50;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          }
LAB_01981c8c:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x2b) {
        if (uVar1 == 0x20) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
        else {
          if (uVar1 == 0x2a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01981c8c;
          }
LAB_01981c50:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x30) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      else {
        if (uVar1 != 0x38) goto LAB_01981c50;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFarmItemDrop$$get_XXX_RowIdentifier RVA 0x1971d24 =====

undefined4 FUN_01981d24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.EventFarmItemDrop$$set_XXX_RowIdentifier RVA 0x1971d2c =====

void FUN_01981d2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.EventFarmItemDrop$$.cctor RVA 0x1971d34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01981d34(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01981dd8 + 0x1981d44);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01981ddc + 0x1981d58));
    func_0x01384978(*(undefined4 *)(_UNK_01981de0 + 0x1981d64));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01981de4 + 0x1981d78);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01981de8 + 0x1981d88);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



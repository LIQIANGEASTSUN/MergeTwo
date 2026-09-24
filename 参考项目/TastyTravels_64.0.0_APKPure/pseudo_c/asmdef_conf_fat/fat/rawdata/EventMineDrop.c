/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineDrop$$.ctor RVA 0x15e8e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f8e0c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015f8f48 + 0x15f8e20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f8f4c + 0x15f8e34));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f50 + 0x15f8e40));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f54 + 0x15f8e4c));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f58 + 0x15f8e58));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f5c + 0x15f8e64));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f60 + 0x15f8e70));
    func_0x01384978(*(undefined4 *)(_UNK_015f8f64 + 0x15f8e7c));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_015f8f68 + 0x15f8e90);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f8f6c + 0x15f8ea4);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_015f8f70 + 0x15f8eb8);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_015f8f74 + 0x15f8edc);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015f8f78 + 0x15f8ef4));
  piVar3 = *(int **)(_UNK_015f8f7c + 0x15f8f08);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f8f80 + 0x15f8f28));
                    /* WARNING: Could not recover jumptable at 0x015f8f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineDrop$$.ctor RVA 0x15e8f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f8f84(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_015f9070 + 0x15f8f9c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f9074 + 0x15f8fb0));
    func_0x01384978(*(undefined4 *)(_UNK_015f9078 + 0x15f8fbc));
    *pcVar3 = '\x01';
  }
  FUN_015f8e0c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_015f907c + 0x15f9000);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_015f9080 + 0x15f904c));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineDrop$$Clone RVA 0x15e9084 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f9084(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f90d8 + 0x15f9098);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f90dc + 0x15f90ac));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f90e0 + 0x15f90c0));
  FUN_015f8f84(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineDrop$$ProxyInternalMergeFrom RVA 0x15e90e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f90e4(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_015f92cc + 0x15f9100);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f92d0 + 0x15f9114));
    func_0x01384978(*(undefined4 *)(_UNK_015f92d4 + 0x15f9120));
    func_0x01384978(*(undefined4 *)(_UNK_015f92d8 + 0x15f912c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015f92dc + 0x15f915c);
    puVar8 = *(undefined4 **)(_UNK_015f92e0 + 0x15f9164);
    puVar9 = *(undefined4 **)(_UNK_015f92e4 + 0x15f916c);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x12) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 != 0x1a) goto LAB_015f9254;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_015f9230:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 == 0x20 || uVar1 == 0x22) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x1c);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
      }
      else {
        if (uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          goto LAB_015f9230;
        }
LAB_015f9254:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineDrop$$get_XXX_RowIdentifier RVA 0x15e92e8 =====

undefined4 FUN_015f92e8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventMineDrop$$set_XXX_RowIdentifier RVA 0x15e92f0 =====

void FUN_015f92f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventMineDrop$$.cctor RVA 0x15e92f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f92f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f939c + 0x15f9308);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f93a0 + 0x15f931c));
    func_0x01384978(*(undefined4 *)(_UNK_015f93a4 + 0x15f9328));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f93a8 + 0x15f933c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f93ac + 0x15f934c);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}



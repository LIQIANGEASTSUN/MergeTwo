/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFarmBoard$$.ctor RVA 0x196d0d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197d0d4(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0197d19c + 0x197d0e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197d1a0 + 0x197d0fc));
    func_0x01384978(*(undefined4 *)(_UNK_0197d1a4 + 0x197d108));
    func_0x01384978(*(undefined4 *)(_UNK_0197d1a8 + 0x197d114));
    func_0x01384978(*(undefined4 *)(_UNK_0197d1ac + 0x197d120));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197d1b0 + 0x197d134));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0197d1b4 + 0x197d148));
  piVar2 = *(int **)(_UNK_0197d1b8 + 0x197d15c);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0197d1bc + 0x197d17c));
                    /* WARNING: Could not recover jumptable at 0x0197d198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFarmBoard$$.ctor RVA 0x196d1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197d1c0(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_0197d280 + 0x197d1d8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197d284 + 0x197d1ec));
    *pcVar2 = '\x01';
  }
  FUN_0197d0d4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar3,**(undefined4 **)(_UNK_0197d288 + 0x197d234));
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFarmBoard$$Clone RVA 0x196d28c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0197d28c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0197d2e0 + 0x197d2a0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197d2e4 + 0x197d2b4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197d2e8 + 0x197d2c8));
  FUN_0197d1c0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFarmBoard$$ProxyInternalMergeFrom RVA 0x196d2ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197d2ec(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0197d5cc + 0x197d304);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197d5d0 + 0x197d318));
    func_0x01384978(*(undefined4 *)(_UNK_0197d5d4 + 0x197d324));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0197d5d8 + 0x197d354);
    puVar8 = *(undefined4 **)(_UNK_0197d5dc + 0x197d35c);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_0197d4d8;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
        }
        else if (uVar1 < 0x29) {
          if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
LAB_0197d4d8:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
        else {
          if (uVar1 != 0x38) goto LAB_0197d4d8;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
      else if (uVar1 < 0x59) {
        if (uVar1 < 0x49) {
          if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_0197d4d8;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
        else {
          if (uVar1 != 0x58) goto LAB_0197d4d8;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x6b) {
        if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
        else {
          if (uVar1 != 0x6a) goto LAB_0197d4d8;
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
          func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
        }
      }
      else if (uVar1 == 0x70) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar2;
      }
      else {
        if (uVar1 != 0x78) goto LAB_0197d4d8;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFarmBoard$$get_XXX_RowIdentifier RVA 0x196d5e0 =====

undefined4 FUN_0197d5e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== fat.rawdata.EventFarmBoard$$set_XXX_RowIdentifier RVA 0x196d5e8 =====

void FUN_0197d5e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== fat.rawdata.EventFarmBoard$$.cctor RVA 0x196d5f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197d5f0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0197d664 + 0x197d600);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197d668 + 0x197d614));
    func_0x01384978(*(undefined4 *)(_UNK_0197d66c + 0x197d620));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0197d670 + 0x197d634);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0197d674 + 0x197d644);
  uVar1 = func_0x0244f954(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


